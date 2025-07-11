#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerConnectedPlayerObservable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IMultiplayerObservable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerConnectedPlayerObservable)
namespace GlobalNamespace {
class IConnectedPlayer;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerObservable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerConnectedPlayerObservable);
// Dependencies IMultiplayerObservable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerConnectedPlayerObservable
class CORDL_TYPE MultiplayerConnectedPlayerObservable : public ::System::Object {
public:
  // Declarations
  /// @brief Field _connectedPlayer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__connectedPlayer, put = __cordl_internal_set__connectedPlayer)) ::GlobalNamespace::IConnectedPlayer* _connectedPlayer;

  __declspec(property(get = get_isFailed)) bool isFailed;

  __declspec(property(get = get_offsetSyncTime)) int64_t offsetSyncTime;

  /// @brief Convert operator to "::GlobalNamespace::IMultiplayerObservable"
  constexpr operator ::GlobalNamespace::IMultiplayerObservable*() noexcept;

  static inline ::GlobalNamespace::MultiplayerConnectedPlayerObservable* New_ctor(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  constexpr ::GlobalNamespace::IConnectedPlayer* const& __cordl_internal_get__connectedPlayer() const;

  constexpr ::GlobalNamespace::IConnectedPlayer*& __cordl_internal_get__connectedPlayer();

  constexpr void __cordl_internal_set__connectedPlayer(::GlobalNamespace::IConnectedPlayer* value);

  /// @brief Method .ctor, addr 0x3bce078, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  /// @brief Method get_isFailed, addr 0x3bce144, size 0xc, virtual true, abstract: false, final true
  inline bool get_isFailed();

  /// @brief Method get_offsetSyncTime, addr 0x3bce0a0, size 0xa4, virtual true, abstract: false, final true
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4560 };

  /// @brief Field _connectedPlayer, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ____connectedPlayer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerObservable, ____connectedPlayer) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConnectedPlayerObservable, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerObservable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerObservable*, "", "MultiplayerConnectedPlayerObservable");
