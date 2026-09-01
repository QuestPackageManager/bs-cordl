#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapDataLoaderUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BeatmapDataLoaderUtils)
namespace GlobalNamespace {
struct BeatmapLevelDataVersion;
}
namespace GlobalNamespace {
class EnvironmentKeywords;
}
namespace GlobalNamespace {
class IEnvironmentInfo;
}
namespace GlobalNamespace {
class IEnvironmentLightGroups;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataLoaderUtils;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BeatmapDataLoaderUtils*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapDataLoaderUtils*, "", "BeatmapDataLoaderUtils");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapDataLoaderUtils
class CORDL_TYPE BeatmapDataLoaderUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetEnvironmentKeywords, addr 0x3714970, size 0x170, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::EnvironmentKeywords* GetEnvironmentKeywords(::GlobalNamespace::IEnvironmentInfo* environmentInfo,
                                                                               ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion);

  /// @brief Method GetEnvironmentLightGroups, addr 0x3714ae0, size 0x110, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::IEnvironmentLightGroups* GetEnvironmentLightGroups(::GlobalNamespace::IEnvironmentInfo* environmentInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoaderUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoaderUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataLoaderUtils(BeatmapDataLoaderUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoaderUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataLoaderUtils(BeatmapDataLoaderUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14897 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BeatmapDataLoaderUtils) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
