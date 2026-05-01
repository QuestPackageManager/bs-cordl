#pragma once
// IWYU pragma private; include "GlobalNamespace/RegionToLocalizationKeyPair.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Region_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RegionToLocalizationKeyPair)
namespace GlobalNamespace {
struct Region;
}
// Forward declare root types
namespace GlobalNamespace {
struct RegionToLocalizationKeyPair;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RegionToLocalizationKeyPair);
// Dependencies Region
namespace GlobalNamespace {
// Is value type: true
// CS Name: RegionToLocalizationKeyPair
struct CORDL_TYPE RegionToLocalizationKeyPair {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x57c29ac, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::Region region, ::StringW localizationKey);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RegionToLocalizationKeyPair();

  // Ctor Parameters [CppParam { name: "region", ty: "::GlobalNamespace::Region", modifiers: "", def_value: None }, CppParam { name: "localizationKey", ty: "::StringW", modifiers: "", def_value: None
  // }]
  constexpr RegionToLocalizationKeyPair(::GlobalNamespace::Region region, ::StringW localizationKey) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6641 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field region, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::Region region;

  /// @brief Field localizationKey, offset: 0x8, size: 0x8, def value: None
  ::StringW localizationKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RegionToLocalizationKeyPair, region) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RegionToLocalizationKeyPair, localizationKey) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RegionToLocalizationKeyPair, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RegionToLocalizationKeyPair, "", "RegionToLocalizationKeyPair");
