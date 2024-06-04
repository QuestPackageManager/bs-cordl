#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerConnectedPlayerObservable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerConnectedPlayerObservable)
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class IMultiplayerObservable;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerObservable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerConnectedPlayerObservable);
// Type: ::MultiplayerConnectedPlayerObservable
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerConnectedPlayerObservable*
class CORDL_TYPE MultiplayerConnectedPlayerObservable : public ::System::Object {
public:
  // Declarations
  /// @brief Field _connectedPlayer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__connectedPlayer, put = __cordl_internal_set__connectedPlayer))::GlobalNamespace::IConnectedPlayer* _connectedPlayer;

  __declspec(property(get = get_isFailed)) bool isFailed;

  __declspec(property(get = get_offsetSyncTime)) int64_t offsetSyncTime;

  /// @brief Convert operator to "::GlobalNamespace::IMultiplayerObservable"
  constexpr operator ::GlobalNamespace::IMultiplayerObservable*() noexcept;

  static inline ::GlobalNamespace::MultiplayerConnectedPlayerObservable* New_ctor(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  constexpr ::GlobalNamespace::IConnectedPlayer*& __cordl_internal_get__connectedPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& __cordl_internal_get__connectedPlayer() const;

  constexpr void __cordl_internal_set__connectedPlayer(::GlobalNamespace::IConnectedPlayer* value);

  /// @brief Method .ctor, addr 0x271e6dc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  /// @brief Method get_isFailed, addr 0x271e7a8, size 0xc, virtual true, abstract: false, final true
  inline bool get_isFailed();

  /// @brief Method get_offsetSyncTime, addr 0x271e704, size 0xa4, virtual true, abstract: false, final true
  inline int64_t get_offsetSyncTime();

  /// @brief Convert to "::GlobalNamespace::IMultiplayerObservable"
  constexpr ::GlobalNamespace::IMultiplayerObservable* i___GlobalNamespace__IMultiplayerObservable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerConnectedPlayerObservable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerObservable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerConnectedPlayerObservable(MultiplayerConnectedPlayerObservable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerObservable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerConnectedPlayerObservable(MultiplayerConnectedPlayerObservable const&) = delete;

  /// @brief Field _connectedPlayer, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ____connectedPlayer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConnectedPlayerObservable, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerObservable, ____connectedPlayer) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerObservable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerObservable*, "", "MultiplayerConnectedPlayerObservable");
