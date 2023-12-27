#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HiddenAreaMesh_t)
// Forward declare root types
namespace OVR::OpenVR {
struct HiddenAreaMesh_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::HiddenAreaMesh_t);
// Type: OVR.OpenVR::HiddenAreaMesh_t
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8694))
// CS Name: ::OVR.OpenVR::HiddenAreaMesh_t
struct CORDL_TYPE HiddenAreaMesh_t {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "pVertexData", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "unTriangleCount", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr HiddenAreaMesh_t(void* pVertexData, uint32_t unTriangleCount) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr HiddenAreaMesh_t();

  /// @brief Field pVertexData, offset: 0x0, size: 0x8, def value: None
  void* pVertexData;

  /// @brief Field unTriangleCount, offset: 0x8, size: 0x4, def value: None
  uint32_t unTriangleCount;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::HiddenAreaMesh_t, 0x10>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::HiddenAreaMesh_t, "OVR.OpenVR", "HiddenAreaMesh_t");
