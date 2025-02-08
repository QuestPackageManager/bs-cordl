#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerNameEqualityComparer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerNameEqualityComparer)
namespace GlobalNamespace {
class PlatformLeaderboardsModel_LeaderboardScore;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerNameEqualityComparer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerNameEqualityComparer);
// Dependencies System.Collections.Generic.IEqualityComparer`1<T>, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerNameEqualityComparer
class CORDL_TYPE PlayerNameEqualityComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*>"
  constexpr operator ::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*>*() noexcept;

  /// @brief Method Equals, addr 0x2700ccc, size 0x20, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore* x, ::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore* y);

  /// @brief Method GetHashCode, addr 0x2700cec, size 0x24, virtual true, abstract: false, final true
  inline int32_t GetHashCode(::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore* obj);

  static inline ::GlobalNamespace::PlayerNameEqualityComparer* New_ctor();

  /// @brief Method .ctor, addr 0x2700d10, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*>"
  constexpr ::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*>*
  i___System__Collections__Generic__IEqualityComparer_1___GlobalNamespace__PlatformLeaderboardsModel_LeaderboardScore__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerNameEqualityComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerNameEqualityComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerNameEqualityComparer(PlayerNameEqualityComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerNameEqualityComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerNameEqualityComparer(PlayerNameEqualityComparer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13321 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerNameEqualityComparer, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerNameEqualityComparer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerNameEqualityComparer*, "", "PlayerNameEqualityComparer");
