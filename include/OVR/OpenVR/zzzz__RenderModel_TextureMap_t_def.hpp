#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderModel_TextureMap_t)
// Forward declare root types
namespace OVR::OpenVR {
struct RenderModel_TextureMap_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::RenderModel_TextureMap_t);
// Type: OVR.OpenVR::RenderModel_TextureMap_t
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2601))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9482))
// CS Name: ::OVR.OpenVR::RenderModel_TextureMap_t
struct CORDL_TYPE RenderModel_TextureMap_t {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "unWidth", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "unHeight", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name:
  // "rubTextureMapData", ty: "void*", modifiers: "", def_value: None }]
  constexpr RenderModel_TextureMap_t(uint16_t unWidth, uint16_t unHeight, void* rubTextureMapData) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderModel_TextureMap_t();

  /// @brief Field unWidth, offset: 0x0, size: 0x2, def value: None
  uint16_t unWidth;

  /// @brief Field unHeight, offset: 0x2, size: 0x2, def value: None
  uint16_t unHeight;

  /// @brief Field rubTextureMapData, offset: 0x8, size: 0x8, def value: None
  void* rubTextureMapData;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::RenderModel_TextureMap_t, 0x10>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::RenderModel_TextureMap_t, unWidth) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::RenderModel_TextureMap_t, unHeight) == 0x2, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::RenderModel_TextureMap_t, rubTextureMapData) == 0x8, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::RenderModel_TextureMap_t, "OVR.OpenVR", "RenderModel_TextureMap_t");
