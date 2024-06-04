#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerNameEqualityComparer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerNameEqualityComparer)
namespace GlobalNamespace {
class __PlatformLeaderboardsModel__LeaderboardScore;
}
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerNameEqualityComparer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerNameEqualityComparer);
// Type: ::PlayerNameEqualityComparer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerNameEqualityComparer*
class CORDL_TYPE PlayerNameEqualityComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>"
  constexpr operator ::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>*() noexcept;

  /// @brief Method Equals, addr 0x14a8374, size 0x20, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore* x, ::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore* y);

  /// @brief Method GetHashCode, addr 0x14a8394, size 0x24, virtual true, abstract: false, final true
  inline int32_t GetHashCode(::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore* obj);

  static inline ::GlobalNamespace::PlayerNameEqualityComparer* New_ctor();

  /// @brief Method .ctor, addr 0x14a83b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>"
  constexpr ::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>*
  i___System__Collections__Generic__IEqualityComparer_1___GlobalNamespace____PlatformLeaderboardsModel__LeaderboardScore__() noexcept;

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerNameEqualityComparer, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerNameEqualityComparer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerNameEqualityComparer*, "", "PlayerNameEqualityComparer");
