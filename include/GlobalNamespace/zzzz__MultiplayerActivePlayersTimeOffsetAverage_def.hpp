#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerActivePlayersTimeOffsetAverage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IMultiplayerObservable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerActivePlayersTimeOffsetAverage)
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerActivePlayersTimeOffsetAverage;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage);
// Dependencies IMultiplayerObservable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerActivePlayersTimeOffsetAverage
class CORDL_TYPE MultiplayerActivePlayersTimeOffsetAverage : public ::System::Object {
public:
  // Declarations
  /// @brief Field _lastReturnedOffsetSyncTime, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__lastReturnedOffsetSyncTime, put = __cordl_internal_set__lastReturnedOffsetSyncTime)) int64_t _lastReturnedOffsetSyncTime;

  /// @brief Field _multiplayerSessionManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _timeOfLastValidReturnedTime, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__timeOfLastValidReturnedTime, put = __cordl_internal_set__timeOfLastValidReturnedTime)) int64_t _timeOfLastValidReturnedTime;

  __declspec(property(get = get_isFailed)) bool isFailed;

  __declspec(property(get = get_offsetSyncTime)) int64_t offsetSyncTime;

  /// @brief Convert operator to "::GlobalNamespace::IMultiplayerObservable"
  constexpr operator ::GlobalNamespace::IMultiplayerObservable*() noexcept;

  static inline ::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage* New_ctor();

  constexpr int64_t const& __cordl_internal_get__lastReturnedOffsetSyncTime() const;

  constexpr int64_t& __cordl_internal_get__lastReturnedOffsetSyncTime();

  constexpr ::GlobalNamespace::IMultiplayerSessionManager* const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr int64_t const& __cordl_internal_get__timeOfLastValidReturnedTime() const;

  constexpr int64_t& __cordl_internal_get__timeOfLastValidReturnedTime();

  constexpr void __cordl_internal_set__lastReturnedOffsetSyncTime(int64_t value);

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr void __cordl_internal_set__timeOfLastValidReturnedTime(int64_t value);

  /// @brief Method .ctor, addr 0x3bccaac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isFailed, addr 0x3bcc964, size 0x148, virtual true, abstract: false, final true
  inline bool get_isFailed();

  /// @brief Method get_offsetSyncTime, addr 0x3bcc710, size 0x254, virtual true, abstract: false, final true
  inline int64_t get_offsetSyncTime();

  /// @brief Convert to "::GlobalNamespace::IMultiplayerObservable"
  constexpr ::GlobalNamespace::IMultiplayerObservable* i___GlobalNamespace__IMultiplayerObservable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerActivePlayersTimeOffsetAverage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerActivePlayersTimeOffsetAverage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerActivePlayersTimeOffsetAverage(MultiplayerActivePlayersTimeOffsetAverage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerActivePlayersTimeOffsetAverage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerActivePlayersTimeOffsetAverage(MultiplayerActivePlayersTimeOffsetAverage const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4553 };

  /// @brief Field _multiplayerSessionManager, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _lastReturnedOffsetSyncTime, offset: 0x18, size: 0x8, def value: None
  int64_t ____lastReturnedOffsetSyncTime;

  /// @brief Field _timeOfLastValidReturnedTime, offset: 0x20, size: 0x8, def value: None
  int64_t ____timeOfLastValidReturnedTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage, ____multiplayerSessionManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage, ____lastReturnedOffsetSyncTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage, ____timeOfLastValidReturnedTime) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage*, "", "MultiplayerActivePlayersTimeOffsetAverage");
