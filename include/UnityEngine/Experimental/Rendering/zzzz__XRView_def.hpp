#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Rendering/XRView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRView)
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
struct XRView;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::Rendering::XRView);
// Dependencies UnityEngine.Matrix4x4, UnityEngine.Rect, UnityEngine.Vector2
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// CS Name: UnityEngine.Experimental.Rendering.XRView
struct CORDL_TYPE XRView {
public:
  // Declarations
  /// @brief Method ComputeEyeCenterUV, addr 0x652dd10, size 0xa0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 ComputeEyeCenterUV(::UnityEngine::Matrix4x4 proj);

  /// @brief Method .ctor, addr 0x652dab8, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Matrix4x4 projMatrix, ::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 prevViewMatrix, bool isPrevViewMatrixValid, ::UnityEngine::Rect viewport,
                    ::UnityEngine::Mesh* occlusionMesh, int32_t textureArraySlice);

  // Ctor Parameters []
  // @brief default ctor
  constexpr XRView();

  // Ctor Parameters [CppParam { name: "projMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "viewMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "",
  // def_value: None }, CppParam { name: "prevViewMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "viewport", ty: "::UnityEngine::Rect", modifiers: "",
  // def_value: None }, CppParam { name: "occlusionMesh", ty: "::UnityW<::UnityEngine::Mesh>", modifiers: "", def_value: None }, CppParam { name: "textureArraySlice", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "eyeCenterUV", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "isPrevViewMatrixValid", ty: "bool", modifiers: "", def_value:
  // None }]
  constexpr XRView(::UnityEngine::Matrix4x4 projMatrix, ::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 prevViewMatrix, ::UnityEngine::Rect viewport,
                   ::UnityW<::UnityEngine::Mesh> occlusionMesh, int32_t textureArraySlice, ::UnityEngine::Vector2 eyeCenterUV, bool isPrevViewMatrixValid) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11833 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xe8 };

  /// @brief Field projMatrix, offset: 0x0, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 projMatrix;

  /// @brief Field viewMatrix, offset: 0x40, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 viewMatrix;

  /// @brief Field prevViewMatrix, offset: 0x80, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 prevViewMatrix;

  /// @brief Field viewport, offset: 0xc0, size: 0x10, def value: None
  ::UnityEngine::Rect viewport;

  /// @brief Field occlusionMesh, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> occlusionMesh;

  /// @brief Field textureArraySlice, offset: 0xd8, size: 0x4, def value: None
  int32_t textureArraySlice;

  /// @brief Field eyeCenterUV, offset: 0xdc, size: 0x8, def value: None
  ::UnityEngine::Vector2 eyeCenterUV;

  /// @brief Field isPrevViewMatrixValid, offset: 0xe4, size: 0x1, def value: None
  bool isPrevViewMatrixValid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRView, projMatrix) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRView, viewMatrix) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRView, prevViewMatrix) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRView, viewport) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRView, occlusionMesh) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRView, textureArraySlice) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRView, eyeCenterUV) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRView, isPrevViewMatrixValid) == 0xe4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::XRView, 0xe8>, "Size mismatch!");

} // namespace UnityEngine::Experimental::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::XRView, "UnityEngine.Experimental.Rendering", "XRView");
