#pragma once
// IWYU pragma private; include "OVR/OpenVR/RenderModel_t.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderModel_t)
// Forward declare root types
namespace OVR::OpenVR {
struct RenderModel_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::RenderModel_t);
// Dependencies System.IntPtr
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.RenderModel_t
struct CORDL_TYPE RenderModel_t {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderModel_t();

  // Ctor Parameters [CppParam { name: "rVertexData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "unVertexCount", ty: "uint32_t", modifiers: "", def_value: None },
  // CppParam { name: "rIndexData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "unTriangleCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "diffuseTextureId", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RenderModel_t(::System::IntPtr rVertexData, uint32_t unVertexCount, ::System::IntPtr rIndexData, uint32_t unTriangleCount, int32_t diffuseTextureId) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8514 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field rVertexData, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr rVertexData;

  /// @brief Field unVertexCount, offset: 0x8, size: 0x4, def value: None
  uint32_t unVertexCount;

  /// @brief Field rIndexData, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr rIndexData;

  /// @brief Field unTriangleCount, offset: 0x18, size: 0x4, def value: None
  uint32_t unTriangleCount;

  /// @brief Field diffuseTextureId, offset: 0x1c, size: 0x4, def value: None
  int32_t diffuseTextureId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::RenderModel_t, rVertexData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::RenderModel_t, unVertexCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::RenderModel_t, rIndexData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::RenderModel_t, unTriangleCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::RenderModel_t, diffuseTextureId) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::RenderModel_t, 0x20>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::RenderModel_t, "OVR.OpenVR", "RenderModel_t");
