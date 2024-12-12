#pragma once
// IWYU pragma private; include "OVR/OpenVR/RenderModel_Vertex_t.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__HmdVector3_t_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(RenderModel_Vertex_t)
// Forward declare root types
namespace OVR::OpenVR {
struct RenderModel_Vertex_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::RenderModel_Vertex_t);
// Dependencies OVR.OpenVR.HmdVector3_t
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.RenderModel_Vertex_t
struct CORDL_TYPE RenderModel_Vertex_t {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderModel_Vertex_t();

  // Ctor Parameters [CppParam { name: "vPosition", ty: "::OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: None }, CppParam { name: "vNormal", ty: "::OVR::OpenVR::HmdVector3_t", modifiers: "",
  // def_value: None }, CppParam { name: "rfTextureCoord0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "rfTextureCoord1", ty: "float_t", modifiers: "", def_value: None }]
  constexpr RenderModel_Vertex_t(::OVR::OpenVR::HmdVector3_t vPosition, ::OVR::OpenVR::HmdVector3_t vNormal, float_t rfTextureCoord0, float_t rfTextureCoord1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9025 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field vPosition, offset: 0x0, size: 0xc, def value: None
  ::OVR::OpenVR::HmdVector3_t vPosition;

  /// @brief Field vNormal, offset: 0xc, size: 0xc, def value: None
  ::OVR::OpenVR::HmdVector3_t vNormal;

  /// @brief Field rfTextureCoord0, offset: 0x18, size: 0x4, def value: None
  float_t rfTextureCoord0;

  /// @brief Field rfTextureCoord1, offset: 0x1c, size: 0x4, def value: None
  float_t rfTextureCoord1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::RenderModel_Vertex_t, vPosition) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::RenderModel_Vertex_t, vNormal) == 0xc, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::RenderModel_Vertex_t, rfTextureCoord0) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::RenderModel_Vertex_t, rfTextureCoord1) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::RenderModel_Vertex_t, 0x20>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::RenderModel_Vertex_t, "OVR.OpenVR", "RenderModel_Vertex_t");
