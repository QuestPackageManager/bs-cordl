#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/GeometryPoolEntryInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GeometryPoolEntryInfo)
// Forward declare root types
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct GeometryPoolEntryInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolEntryInfo);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolEntryInfo, "UnityEngine.Rendering.UnifiedRayTracing", "GeometryPoolEntryInfo");
// Dependencies
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: true
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.GeometryPoolEntryInfo
struct CORDL_TYPE GeometryPoolEntryInfo {
public:
  // Declarations
  /// @brief Method NewDefault, addr 0x6e02e88, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolEntryInfo NewDefault();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GeometryPoolEntryInfo();

  // Ctor Parameters [CppParam { name: "valid", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "refCount", ty: "uint32_t", modifiers: "", def_value: None, comment: None
  // }]
  constexpr GeometryPoolEntryInfo(bool valid, uint32_t refCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20458 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field valid, offset: 0x0, size: 0x1, def value: None
  bool valid;

  /// @brief Field refCount, offset: 0x4, size: 0x4, def value: None
  uint32_t refCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolEntryInfo, valid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolEntryInfo, refCount) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolEntryInfo) == 0x8, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
