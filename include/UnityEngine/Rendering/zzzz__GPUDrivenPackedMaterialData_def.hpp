#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUDrivenPackedMaterialData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GPUDrivenPackedMaterialData)
// Forward declare root types
namespace UnityEngine::Rendering {
struct GPUDrivenPackedMaterialData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::GPUDrivenPackedMaterialData);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::GPUDrivenPackedMaterialData, "UnityEngine.Rendering", "GPUDrivenPackedMaterialData");
// [UsedByNativeCode]
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUDrivenPackedMaterialData
struct CORDL_TYPE GPUDrivenPackedMaterialData {
public:
  // Declarations
  __declspec(property(get = get_hasTessellation)) bool hasTessellation;

  __declspec(property(get = get_isMotionVectorsPassEnabled)) bool isMotionVectorsPassEnabled;

  __declspec(property(get = get_isTransparent)) bool isTransparent;

  __declspec(property(get = get_supportsCrossFade)) bool supportsCrossFade;

  /// @brief Method Equals, addr 0x6f8a354, size 0x14, virtual false, abstract: false, final false
  inline bool Equals(::UnityEngine::Rendering::GPUDrivenPackedMaterialData other);

  /// @brief Method .ctor, addr 0x6f8a34c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_hasTessellation, addr 0x6f8a334, size 0xc, virtual false, abstract: false, final false
  inline bool get_hasTessellation();

  /// @brief Method get_isMotionVectorsPassEnabled, addr 0x6f8a328, size 0xc, virtual false, abstract: false, final false
  inline bool get_isMotionVectorsPassEnabled();

  /// @brief Method get_isTransparent, addr 0x6f8a31c, size 0xc, virtual false, abstract: false, final false
  inline bool get_isTransparent();

  /// @brief Method get_supportsCrossFade, addr 0x6f8a340, size 0xc, virtual false, abstract: false, final false
  inline bool get_supportsCrossFade();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUDrivenPackedMaterialData();

  // Ctor Parameters [CppParam { name: "data", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
  constexpr GPUDrivenPackedMaterialData(uint32_t data) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10494 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field data, offset: 0x0, size: 0x4, def value: None
  uint32_t data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenPackedMaterialData, data) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::GPUDrivenPackedMaterialData) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Rendering
