add_library(sa-omp-client SHARED
  ../common.cpp

  Actor.cpp
  ActorPool.cpp
  Audio.cpp
  AudioStream.cpp
  Camera.cpp
  Chat.cpp
  ChatBubble.cpp
  Config.cpp
  DeathWindow.cpp
  Dialog.cpp
  Entity.cpp
  Font.cpp
  Fonts.cpp
  Game.cpp
  GangZonePool.cpp
  HelpDialog.cpp
  HttpClient.cpp
  Input.cpp
  Label.cpp
  LabelPool.cpp
  LicensePlate.cpp
  LocalPlayer.cpp
  Menu.cpp
  MenuPool.cpp
  NetGame.cpp
  NetStats.cpp
  Object.cpp
  ObjectMaterialText.cpp
  ObjectPool.cpp
  ObjectSelection.cpp
  Ped.cpp
  PickupPool.cpp
  PlayerInfo.cpp
  PlayerPool.cpp
  PlayerTags.cpp
  RemotePlayer.cpp
  Scoreboard.cpp
  SpawnScreen.cpp
  SrvNetStats.cpp
  TextDraw.cpp
  TextDrawPool.cpp
  TextDrawSelection.cpp
  Vehicle.cpp
  VehiclePool.cpp)

target_compile_features(sa-omp-client PRIVATE cxx_std_17)
target_include_directories(sa-omp-client PRIVATE . ..)
target_link_libraries(sa-omp-client PRIVATE reversiblehooks PluginSDK::gtasa)