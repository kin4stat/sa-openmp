#ifndef INPUT_HPP_
#define INPUT_HPP_

#include "common.hpp"
#include "Rect.hpp"

BEGIN_PACK

class Input {
public:
    static void InjectHooks() {
        ReversibleHooks::Install("Input", "GetRect", GetAddress(0x68CD0), &Input::GetRect);
        ReversibleHooks::Install("Input", "Open", GetAddress(0x68D10), &Input::Open);
        ReversibleHooks::Install("Input", "Close", GetAddress(0x68E10), &Input::Close);
        ReversibleHooks::Install("Input", "AddRecall", GetAddress(0x68E60), &Input::AddRecall);
        ReversibleHooks::Install("Input", "RecallUp", GetAddress(0x68EC0), &Input::RecallUp);
        ReversibleHooks::Install("Input", "RecallDown", GetAddress(0x68F30), &Input::RecallDown);
        ReversibleHooks::Install("Input", "EnableCursor", GetAddress(0x68F80), &Input::EnableCursor);
        ReversibleHooks::Install("Input", "GetCommandHandler", GetAddress(0x68FA0), &Input::GetCommandHandler);
        ReversibleHooks::Install("Input", "SetDefaultCommand", GetAddress(0x68FF0), &Input::SetDefaultCommand);
        ReversibleHooks::Install("Input", "AddCommand", GetAddress(0x69000), &Input::AddCommand);
        ReversibleHooks::Install("Input", "MsgProc", GetAddress(0x69060), &Input::MsgProc);
        ReversibleHooks::Install("Input", "ResetDialogControls", GetAddress(0x690D0), &Input::ResetDialogControls);
        ReversibleHooks::Install("Input", "Send", GetAddress(0x69190), &Input::Send);
        ReversibleHooks::Install("Input", "ProcessInput", GetAddress(0x69260), &Input::ProcessInput);
    }


    enum {
        MAX_CLIENT_CMDS = 144,
        MAX_CMD_LENGTH = 32,
    };

    IDirect3DDevice9* m_pDevice;
    CDXUTDialog*      m_pGameUI;
    CDXUTEditBox*     m_pEditbox;
    CMDPROC           m_commandProc[MAX_CLIENT_CMDS];
    char              m_szCommandName[MAX_CLIENT_CMDS][MAX_CMD_LENGTH + 1];
    int               m_nCommandCount;
    BOOL              m_bEnabled;
    char              m_szInput[129];
    char              m_szRecallBufffer[10][129];
    char              m_szCurrentBuffer[129];
    int               m_nCurrentRecall;
    int               m_nTotalRecall;
    CMDPROC           m_defaultCommand;

    
    Input(IDirect3DDevice9* pDevice);
    ~Input();

    void GetRect(Rect* pRect);
    void Open();
    void Close();
    void AddRecall(const char* szString);
    void RecallUp();
    void RecallDown();
    void EnableCursor();
    CMDPROC GetCommandHandler(const char* szName);
    void SetDefaultCommand(CMDPROC handler);
    void AddCommand(const char* szName, CMDPROC handler);
    BOOL MsgProc(int uMsg, int wParam, int lParam);
    void ResetDialogControls(CDXUTDialog* pGameUi);
    void Send(const char* szString);
    void ProcessInput();
};

END_PACK

#endif // INPUT_HPP_