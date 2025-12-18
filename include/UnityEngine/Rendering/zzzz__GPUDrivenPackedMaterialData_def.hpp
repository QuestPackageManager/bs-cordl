#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUDrivenPackedMaterialData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
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
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUDrivenPackedMaterialData
struct CORDL_TYPE GPUDrivenPackedMaterialData {
public:
  // Declarations
  __declspec(property(get = get_isIndirectSupported)) bool isIndirectSupported;

  __declspec(property(get = get_isMotionVectorsPassEnabled)) bool isMotionVectorsPassEnabled;

  __declspec(property(get = get_isTransparent)) bool isTransparent;

  /// @brief Method Equals, addr 0x6961a08, size 0x14, virtual false, abstract: false, final false
  inline bool Equals(::UnityEngine::Rendering::GPUDrivenPackedMaterialData other);

  /// @brief Method .ctor, addr 0x6961a00, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isIndirectSupported, addr 0x69619f4, size 0xc, virtual false, abstract: false, final false
  inline bool get_isIndirectSupported();

  /// @brief Method get_isMotionVectorsPassEnabled, addr 0x69619e8, size 0xc, virtual false, abstract: false, final false
  inline bool get_isMotionVectorsPassEnabled();

  /// @brief Method get_isTransparent, addr 0x69619dc, size 0xc, virtual false, abstract: false, final false
  inline bool get_isTransparent();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUDrivenPackedMaterialData();

  // Ctor Parameters [CppParam { name: "data", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr GPUDrivenPackedMaterialData(uint32_t data) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10863 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field data, offset: 0x0, size: 0x4, def value: None
  uint32_t data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenPackedMaterialData, data) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUDrivenPackedMaterialData, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUDrivenPackedMaterialData, "UnityEngine.Rendering", "GPUDrivenPackedMaterialData");
