#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderModel_t_Packed)
namespace OVR::OpenVR {
struct RenderModel_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct RenderModel_t_Packed;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::RenderModel_t_Packed);
// Type: OVR.OpenVR::RenderModel_t_Packed
// SizeInfo { instance_size: 28, native_size: 28, calculated_instance_size: 28, calculated_native_size: 44, minimum_alignment: 4, natural_alignment: 8, packing: Some(4), specified_packing: Some(4) }
namespace OVR::OpenVR {
// Is value type: true
// CS Name: ::OVR.OpenVR::RenderModel_t_Packed
#pragma pack(push, 4)
struct CORDL_TYPE RenderModel_t_Packed {
public:
  // Declarations
  /// @brief Method Unpack, addr 0x294a928, size 0x24, virtual false, abstract: false, final false
  inline void Unpack(ByRef<::OVR::OpenVR::RenderModel_t> unpacked);

  /// @brief Method .ctor, addr 0x294a8fc, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::OVR::OpenVR::RenderModel_t unpacked);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderModel_t_Packed();

  // Ctor Parameters [CppParam { name: "rVertexData", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "unVertexCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam {
  // name: "rIndexData", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "unTriangleCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "diffuseTextureId", ty:
  // "int32_t", modifiers: "", def_value: None }]
  constexpr RenderModel_t_Packed(void* rVertexData, uint32_t unVertexCount, void* rIndexData, uint32_t unTriangleCount, int32_t diffuseTextureId) noexcept;

  /// @brief Field rVertexData, offset: 0x0, size: 0x8, def value: None
  void* rVertexData;

  /// @brief Field unVertexCount, offset: 0x8, size: 0x4, def value: None
  uint32_t unVertexCount;

  /// @brief Field rIndexData, offset: 0xc, size: 0x8, def value: None
  void* rIndexData;

  /// @brief Field unTriangleCount, offset: 0x14, size: 0x4, def value: None
  uint32_t unTriangleCount;

  /// @brief Field diffuseTextureId, offset: 0x18, size: 0x4, def value: None
  int32_t diffuseTextureId;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::RenderModel_t_Packed, 0x1c>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::RenderModel_t_Packed, rVertexData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::RenderModel_t_Packed, unVertexCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::RenderModel_t_Packed, rIndexData) == 0xc, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::RenderModel_t_Packed, unTriangleCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::RenderModel_t_Packed, diffuseTextureId) == 0x18, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::RenderModel_t_Packed, "OVR.OpenVR", "RenderModel_t_Packed");
