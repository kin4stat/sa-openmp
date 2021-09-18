#ifndef INPUT_HPP_
#define INPUT_HPP_

#include "common.hpp"

BEGIN_PACK

class Input {
public:
    static void InjectHooks() {
        static kthook::kthook_t<decltype(&GetRect)> GetRect_hook{ GetAddress(0x68CD0) }; GetRect_hook.before.connect(GetRect);
        static kthook::kthook_t<decltype(&Open)> Open_hook{ GetAddress(0x68D10) }; Open_hook.before.connect(Open);
        static kthook::kthook_t<decltype(&Close)> Close_hook{ GetAddress(0x68E10) }; Close_hook.before.connect(Close);
        static kthook::kthook_t<decltype(&AddRecall)> AddRecall_hook{ GetAddress(0x68E60) }; AddRecall_hook.before.connect(AddRecall);
        static kthook::kthook_t<decltype(&RecallUp)> RecallUp_hook{ GetAddress(0x68EC0) }; RecallUp_hook.before.connect(RecallUp);
        static kthook::kthook_t<decltype(&RecallDown)> RecallDown_hook{ GetAddress(0x68F30) }; RecallDown_hook.before.connect(RecallDown);
        static kthook::kthook_t<decltype(&EnableCursor)> EnableCursor_hook{ GetAddress(0x68F80) }; EnableCursor_hook.before.connect(EnableCursor);
        static kthook::kthook_t<decltype(&GetCommandHandler)> GetCommandHandler_hook{ GetAddress(0x68FA0) }; GetCommandHandler_hook.before.connect(GetCommandHandler);
        static kthook::kthook_t<decltype(&SetDefaultCommand)> SetDefaultCommand_hook{ GetAddress(0x68FF0) }; SetDefaultCommand_hook.before.connect(SetDefaultCommand);
        static kthook::kthook_t<decltype(&AddCommand)> AddCommand_hook{ GetAddress(0x69000) }; AddCommand_hook.before.connect(AddCommand);
        static kthook::kthook_t<decltype(&MsgProc)> MsgProc_hook{ GetAddress(0x69060) }; MsgProc_hook.before.connect(MsgProc);
        static kthook::kthook_t<decltype(&ResetDialogControls)> ResetDialogControls_hook{ GetAddress(0x690D0) }; ResetDialogControls_hook.before.connect(ResetDialogControls);
        static kthook::kthook_t<decltype(&Send)> Send_hook{ GetAddress(0x69190) }; Send_hook.before.connect(Send);
        static kthook::kthook_t<decltype(&ProcessInput)> ProcessInput_hook{ GetAddress(0x69260) }; ProcessInput_hook.before.connect(ProcessInput);
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

    MAKE_RET(void) GetRect(CRect* pRect);
    MAKE_RET(void) Open();
    MAKE_RET(void) Close();
    MAKE_RET(void) AddRecall(const char* szString);
    MAKE_RET(void) RecallUp();
    MAKE_RET(void) RecallDown();
    MAKE_RET(void) EnableCursor();
    MAKE_RET(CMDPROC) GetCommandHandler(const char* szName);
    MAKE_RET(void) SetDefaultCommand(CMDPROC handler);
    MAKE_RET(void) AddCommand(const char* szName, CMDPROC handler);
    MAKE_RET(BOOL) MsgProc(int uMsg, int wParam, int lParam);
    MAKE_RET(void) ResetDialogControls(CDXUTDialog* pGameUi);
    MAKE_RET(void) Send(const char* szString);
    MAKE_RET(void) ProcessInput();
};

END_PACK

#endif // INPUT_HPP_