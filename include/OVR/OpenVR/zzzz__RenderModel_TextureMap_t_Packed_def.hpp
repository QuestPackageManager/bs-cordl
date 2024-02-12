#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderModel_TextureMap_t_Packed)
namespace OVR::OpenVR {
struct RenderModel_TextureMap_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct RenderModel_TextureMap_t_Packed;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::RenderModel_TextureMap_t_Packed);
// Type: OVR.OpenVR::RenderModel_TextureMap_t_Packed
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 8, packing: Some(4), specified_packing: Some(4) }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2603))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8658))
// CS Name: ::OVR.OpenVR::RenderModel_TextureMap_t_Packed
#pragma pack(push, 4)
struct CORDL_TYPE RenderModel_TextureMap_t_Packed {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x2803f3c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::OVR::OpenVR::RenderModel_TextureMap_t unpacked);

  /// @brief Method Unpack, addr 0x2803f50, size 0x1c, virtual false, abstract: false, final false
  inline void Unpack(ByRef<::OVR::OpenVR::RenderModel_TextureMap_t> unpacked);

  // Ctor Parameters [CppParam { name: "unWidth", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "unHeight", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name:
  // "rubTextureMapData", ty: "void*", modifiers: "", def_value: None }]
  constexpr RenderModel_TextureMap_t_Packed(uint16_t unWidth, uint16_t unHeight, void* rubTextureMapData) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderModel_TextureMap_t_Packed();

  /// @brief Field unWidth, offset: 0x0, size: 0x2, def value: None
  uint16_t unWidth;

  /// @brief Field unHeight, offset: 0x2, size: 0x2, def value: None
  uint16_t unHeight;

  /// @brief Field rubTextureMapData, offset: 0x4, size: 0x8, def value: None
  void* rubTextureMapData;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::RenderModel_TextureMap_t_Packed, 0xc>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::RenderModel_TextureMap_t_Packed, unWidth) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::RenderModel_TextureMap_t_Packed, unHeight) == 0x2, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::RenderModel_TextureMap_t_Packed, rubTextureMapData) == 0x4, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::RenderModel_TextureMap_t_Packed, "OVR.OpenVR", "RenderModel_TextureMap_t_Packed");
