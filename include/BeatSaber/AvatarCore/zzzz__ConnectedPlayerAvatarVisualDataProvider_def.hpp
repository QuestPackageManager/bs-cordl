#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/ConnectedPlayerAvatarVisualDataProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ConnectedPlayerAvatarVisualDataProvider)
namespace BeatSaber::AvatarCore {
class IAvatarVisualDataProvider;
}
namespace GlobalNamespace {
class IBeatSaberConnectedPlayer;
}
namespace GlobalNamespace {
struct MultiplayerAvatarsData;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class ConnectedPlayerAvatarVisualDataProvider;
}
// Write type traits
MARK_REF_T(::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider*);
DEFINE_IL2CPP_CLASS(::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider*, "BeatSaber.AvatarCore", "ConnectedPlayerAvatarVisualDataProvider");
// Dependencies System.Object
namespace BeatSaber::AvatarCore {
// Is value type: false
// CS Name: BeatSaber.AvatarCore.ConnectedPlayerAvatarVisualDataProvider
class CORDL_TYPE ConnectedPlayerAvatarVisualDataProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field _connectedPlayer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__connectedPlayer, put = __cordl_internal_set__connectedPlayer)) ::GlobalNamespace::IBeatSaberConnectedPlayer* _connectedPlayer;

  /// @brief Field _isVisualDataResolved, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__isVisualDataResolved, put = __cordl_internal_set__isVisualDataResolved)) bool _isVisualDataResolved;

  __declspec(property(get = get_avatarsData)) ::GlobalNamespace::MultiplayerAvatarsData avatarsData;

  __declspec(property(get = get_isVisualDataResolved)) bool isVisualDataResolved;

  /// @brief Field visualDataDidChangeEvent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_visualDataDidChangeEvent,
                      put = __cordl_internal_set_visualDataDidChangeEvent)) ::System::Action_1<::GlobalNamespace::MultiplayerAvatarsData>* visualDataDidChangeEvent;

  /// @brief Convert operator to "::BeatSaber::AvatarCore::IAvatarVisualDataProvider"
  constexpr operator ::BeatSaber::AvatarCore::IAvatarVisualDataProvider*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x34f5c1c, size 0xf8, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method HandleAvatarDidChange, addr 0x34f5d14, size 0xe8, virtual false, abstract: false, final false
  inline void HandleAvatarDidChange(::GlobalNamespace::IBeatSaberConnectedPlayer* player);

  static inline ::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider* New_ctor(::GlobalNamespace::IBeatSaberConnectedPlayer* connectedPlayer);

  constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer* const& __cordl_internal_get__connectedPlayer() const;

  constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer*& __cordl_internal_get__connectedPlayer();

  constexpr bool const& __cordl_internal_get__isVisualDataResolved() const;

  constexpr bool& __cordl_internal_get__isVisualDataResolved();

  constexpr ::System::Action_1<::GlobalNamespace::MultiplayerAvatarsData>* const& __cordl_internal_get_visualDataDidChangeEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::MultiplayerAvatarsData>*& __cordl_internal_get_visualDataDidChangeEvent();

  constexpr void __cordl_internal_set__connectedPlayer(::GlobalNamespace::IBeatSaberConnectedPlayer* value);

  constexpr void __cordl_internal_set__isVisualDataResolved(bool value);

  constexpr void __cordl_internal_set_visualDataDidChangeEvent(::System::Action_1<::GlobalNamespace::MultiplayerAvatarsData>* value);

  /// @brief Method .ctor, addr 0x34f5a1c, size 0x200, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IBeatSaberConnectedPlayer* connectedPlayer);

  /// [CompilerGenerated]
  /// @brief Method add_visualDataDidChangeEvent, addr 0x34f589c, size 0xc0, virtual true, abstract: false, final true
  inline void add_visualDataDidChangeEvent(::System::Action_1<::GlobalNamespace::MultiplayerAvatarsData>* value);

  /// @brief Method get_avatarsData, addr 0x34f57c8, size 0xcc, virtual true, abstract: false, final true
  inline ::GlobalNamespace::MultiplayerAvatarsData get_avatarsData();

  /// @brief Method get_isVisualDataResolved, addr 0x34f5894, size 0x8, virtual true, abstract: false, final true
  inline bool get_isVisualDataResolved();

  /// @brief Convert to "::BeatSaber::AvatarCore::IAvatarVisualDataProvider"
  constexpr ::BeatSaber::AvatarCore::IAvatarVisualDataProvider* i___BeatSaber__AvatarCore__IAvatarVisualDataProvider() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// [CompilerGenerated]
  /// @brief Method remove_visualDataDidChangeEvent, addr 0x34f595c, size 0xc0, virtual true, abstract: false, final true
  inline void remove_visualDataDidChangeEvent(::System::Action_1<::GlobalNamespace::MultiplayerAvatarsData>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectedPlayerAvatarVisualDataProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerAvatarVisualDataProvider", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConnectedPlayerAvatarVisualDataProvider(ConnectedPlayerAvatarVisualDataProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerAvatarVisualDataProvider", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConnectedPlayerAvatarVisualDataProvider(ConnectedPlayerAvatarVisualDataProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22375 };

  /// [CompilerGenerated]
  /// @brief Field visualDataDidChangeEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::MultiplayerAvatarsData>* ___visualDataDidChangeEvent;

  /// @brief Field _connectedPlayer, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IBeatSaberConnectedPlayer* ____connectedPlayer;

  /// @brief Field _isVisualDataResolved, offset: 0x20, size: 0x1, def value: None
  bool ____isVisualDataResolved;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider, ___visualDataDidChangeEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider, ____connectedPlayer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider, ____isVisualDataResolved) == 0x20, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider) == 0x28, "Size mismatch!");

} // namespace BeatSaber::AvatarCore
