#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/ConnectedPlayerOptionalAvatarDataProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/AvatarCore/zzzz__IOptionalAvatarDataProvider_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectedPlayerOptionalAvatarDataProvider)
namespace BeatSaber::AvatarCore {
struct AvatarDisplayContext;
}
namespace BeatSaber::AvatarCore {
class OptionalAvatarDataSyncHandler;
}
namespace BeatSaber::AvatarCore {
struct OptionalAvatarData;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class ConnectedPlayerOptionalAvatarDataProvider;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider);
// Dependencies BeatSaber.AvatarCore.IOptionalAvatarDataProvider, System.IDisposable, System.Object
namespace BeatSaber::AvatarCore {
// Is value type: false
// CS Name: BeatSaber.AvatarCore.ConnectedPlayerOptionalAvatarDataProvider
class CORDL_TYPE ConnectedPlayerOptionalAvatarDataProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field _connectedPlayer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__connectedPlayer, put = __cordl_internal_set__connectedPlayer)) ::GlobalNamespace::IConnectedPlayer* _connectedPlayer;

  /// @brief Field _multiplayerSessionManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _optionalAvatarDataSyncHandler, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__optionalAvatarDataSyncHandler,
                      put = __cordl_internal_set__optionalAvatarDataSyncHandler)) ::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler* _optionalAvatarDataSyncHandler;

  __declspec(property(get = get_currentData)) ::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::OptionalAvatarData>* currentData;

  /// @brief Field dataDidChangeEvent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_dataDidChangeEvent,
                      put = __cordl_internal_set_dataDidChangeEvent)) ::System::Action_1<::BeatSaber::AvatarCore::OptionalAvatarData>* dataDidChangeEvent;

  __declspec(property(get = get_playbackDelaySeconds)) float_t playbackDelaySeconds;

  /// @brief Convert operator to "::BeatSaber::AvatarCore::IOptionalAvatarDataProvider"
  constexpr operator ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x2250c88, size 0x8c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method HandleOptionalAvatarDataSyncHandlerDidChangeOptionalAvatarDataSync, addr 0x2250dc8, size 0x16c, virtual false, abstract: false, final false
  inline void HandleOptionalAvatarDataSyncHandlerDidChangeOptionalAvatarDataSync(::GlobalNamespace::IConnectedPlayer* connectedPlayer, ::BeatSaber::AvatarCore::OptionalAvatarData optionalAvatarData);

  static inline ::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider* New_ctor(::GlobalNamespace::IConnectedPlayer* connectedPlayer,
                                                                                             ::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager,
                                                                                             ::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler* optionalAvatarDataSyncHandler);

  /// @brief Method SetDisplayContext, addr 0x2250dc4, size 0x4, virtual true, abstract: false, final true
  inline void SetDisplayContext(::BeatSaber::AvatarCore::AvatarDisplayContext avatarDisplayContext);

  constexpr ::GlobalNamespace::IConnectedPlayer* const& __cordl_internal_get__connectedPlayer() const;

  constexpr ::GlobalNamespace::IConnectedPlayer*& __cordl_internal_get__connectedPlayer();

  constexpr ::GlobalNamespace::IMultiplayerSessionManager* const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr ::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler* const& __cordl_internal_get__optionalAvatarDataSyncHandler() const;

  constexpr ::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler*& __cordl_internal_get__optionalAvatarDataSyncHandler();

  constexpr ::System::Action_1<::BeatSaber::AvatarCore::OptionalAvatarData>* const& __cordl_internal_get_dataDidChangeEvent() const;

  constexpr ::System::Action_1<::BeatSaber::AvatarCore::OptionalAvatarData>*& __cordl_internal_get_dataDidChangeEvent();

  constexpr void __cordl_internal_set__connectedPlayer(::GlobalNamespace::IConnectedPlayer* value);

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr void __cordl_internal_set__optionalAvatarDataSyncHandler(::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler* value);

  constexpr void __cordl_internal_set_dataDidChangeEvent(::System::Action_1<::BeatSaber::AvatarCore::OptionalAvatarData>* value);

  /// @brief Method .ctor, addr 0x2250b28, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IConnectedPlayer* connectedPlayer, ::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager,
                    ::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler* optionalAvatarDataSyncHandler);

  /// @brief Method add_dataDidChangeEvent, addr 0x22509c8, size 0xb0, virtual true, abstract: false, final true
  inline void add_dataDidChangeEvent(::System::Action_1<::BeatSaber::AvatarCore::OptionalAvatarData>* value);

  /// @brief Method get_currentData, addr 0x22507fc, size 0x38, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::OptionalAvatarData>* get_currentData();

  /// @brief Method get_playbackDelaySeconds, addr 0x225089c, size 0x12c, virtual true, abstract: false, final true
  inline float_t get_playbackDelaySeconds();

  /// @brief Convert to "::BeatSaber::AvatarCore::IOptionalAvatarDataProvider"
  constexpr ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* i___BeatSaber__AvatarCore__IOptionalAvatarDataProvider() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_dataDidChangeEvent, addr 0x2250a78, size 0xb0, virtual true, abstract: false, final true
  inline void remove_dataDidChangeEvent(::System::Action_1<::BeatSaber::AvatarCore::OptionalAvatarData>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectedPlayerOptionalAvatarDataProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerOptionalAvatarDataProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConnectedPlayerOptionalAvatarDataProvider(ConnectedPlayerOptionalAvatarDataProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerOptionalAvatarDataProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConnectedPlayerOptionalAvatarDataProvider(ConnectedPlayerOptionalAvatarDataProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17596 };

  /// @brief Field dataDidChangeEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::BeatSaber::AvatarCore::OptionalAvatarData>* ___dataDidChangeEvent;

  /// @brief Field _connectedPlayer, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ____connectedPlayer;

  /// @brief Field _multiplayerSessionManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _optionalAvatarDataSyncHandler, offset: 0x28, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler* ____optionalAvatarDataSyncHandler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider, ___dataDidChangeEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider, ____connectedPlayer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider, ____multiplayerSessionManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider, ____optionalAvatarDataSyncHandler) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider, 0x30>, "Size mismatch!");

} // namespace BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider*, "BeatSaber.AvatarCore", "ConnectedPlayerOptionalAvatarDataProvider");
