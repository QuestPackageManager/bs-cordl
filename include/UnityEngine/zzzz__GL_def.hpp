#pragma once
// IWYU pragma private; include "UnityEngine/GL.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GL)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine {
class GL;
}
// Write type traits
MARK_REF_T(::UnityEngine::GL*);
DEFINE_IL2CPP_CLASS(::UnityEngine::GL*, "UnityEngine", "GL");
// [NativeHeader("Runtime/Camera/CameraUtil.h")]
// [NativeHeader("Runtime/GfxDevice/GfxDevice.h")]
// [NativeHeader("Runtime/Camera/Camera.h")]
// [NativeHeader("Runtime/Graphics/GraphicsScriptBindings.h")]
// [StaticAccessor("GetGfxDevice()", (UnityEngine.Bindings.StaticAccessorType)0)]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GL
class CORDL_TYPE GL : public ::System::Object {
public:
  // Declarations
  /// [FreeFunction("GLBegin", ThrowsException = true)]
  /// @brief Method Begin, addr 0x6edc54c, size 0x3c, virtual false, abstract: false, final false
  static inline void Begin(int32_t mode);

  /// @brief Method Clear, addr 0x6edc684, size 0x8, virtual false, abstract: false, final false
  static inline void Clear(bool clearDepth, bool clearColor, ::UnityEngine::Color backgroundColor);

  /// @brief Method Clear, addr 0x6edc680, size 0x4, virtual false, abstract: false, final false
  static inline void Clear(bool clearDepth, bool clearColor, ::UnityEngine::Color backgroundColor, /* [DefaultValue("1.0f")] */ float_t depth);

  /// @brief Method Color, addr 0x6edc0a8, size 0x58, virtual false, abstract: false, final false
  static inline void Color(::UnityEngine::Color c);

  /// [FreeFunction("GLEnd")]
  /// @brief Method End, addr 0x6edc588, size 0x28, virtual false, abstract: false, final false
  static inline void End();

  /// @brief Method Flush, addr 0x6edc1f0, size 0x28, virtual false, abstract: false, final false
  static inline void Flush();

  /// [FreeFunction]
  /// @brief Method GLClear, addr 0x6edc5b0, size 0x6c, virtual false, abstract: false, final false
  static inline void GLClear(bool clearDepth, bool clearColor, ::UnityEngine::Color backgroundColor, float_t depth);

  /// @brief Method GLClear_Injected, addr 0x6edc61c, size 0x64, virtual false, abstract: false, final false
  static inline void GLClear_Injected(bool clearDepth, bool clearColor, ::by_ref<::UnityEngine::Color const> backgroundColor, float_t depth);

  /// [FreeFunction]
  /// @brief Method GLLoadPixelMatrixScript, addr 0x6edc49c, size 0x58, virtual false, abstract: false, final false
  static inline void GLLoadPixelMatrixScript(float_t left, float_t right, float_t bottom, float_t top);

  /// [FreeFunction("GLGetGPUProjectionMatrix")]
  /// @brief Method GetGPUProjectionMatrix, addr 0x6edc3cc, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 GetGPUProjectionMatrix(::UnityEngine::Matrix4x4 proj, bool renderIntoTexture);

  /// @brief Method GetGPUProjectionMatrix_Injected, addr 0x6edc448, size 0x54, virtual false, abstract: false, final false
  static inline void GetGPUProjectionMatrix_Injected(::by_ref<::UnityEngine::Matrix4x4 const> proj, bool renderIntoTexture, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// [NativeName("ImmediateColor")]
  /// @brief Method ImmediateColor, addr 0x6edc050, size 0x58, virtual false, abstract: false, final false
  static inline void ImmediateColor(float_t r, float_t g, float_t b, float_t a);

  /// [FreeFunction("GLLoadOrthoScript")]
  /// @brief Method LoadOrtho, addr 0x6edc32c, size 0x28, virtual false, abstract: false, final false
  static inline void LoadOrtho();

  /// @brief Method LoadPixelMatrix, addr 0x6edc4f4, size 0x58, virtual false, abstract: false, final false
  static inline void LoadPixelMatrix(float_t left, float_t right, float_t bottom, float_t top);

  /// [FreeFunction("GLLoadProjectionMatrixScript")]
  /// @brief Method LoadProjectionMatrix, addr 0x6edc354, size 0x3c, virtual false, abstract: false, final false
  static inline void LoadProjectionMatrix(::UnityEngine::Matrix4x4 mat);

  /// @brief Method LoadProjectionMatrix_Injected, addr 0x6edc390, size 0x3c, virtual false, abstract: false, final false
  static inline void LoadProjectionMatrix_Injected(::by_ref<::UnityEngine::Matrix4x4 const> mat);

  /// @brief Method MultiTexCoord2, addr 0x6edbff8, size 0x58, virtual false, abstract: false, final false
  static inline void MultiTexCoord2(int32_t unit, float_t x, float_t y);

  /// [NativeName("ImmediateTexCoord")]
  /// @brief Method MultiTexCoord3, addr 0x6edbf94, size 0x64, virtual false, abstract: false, final false
  static inline void MultiTexCoord3(int32_t unit, float_t x, float_t y, float_t z);

  /// [FreeFunction("GLPopMatrixScript")]
  /// @brief Method PopMatrix, addr 0x6edc304, size 0x28, virtual false, abstract: false, final false
  static inline void PopMatrix();

  /// [FreeFunction("GLPushMatrixScript")]
  /// @brief Method PushMatrix, addr 0x6edc2dc, size 0x28, virtual false, abstract: false, final false
  static inline void PushMatrix();

  /// @brief Method SetViewMatrix, addr 0x6edc218, size 0x3c, virtual false, abstract: false, final false
  static inline void SetViewMatrix(::UnityEngine::Matrix4x4 m);

  /// @brief Method SetViewMatrix_Injected, addr 0x6edc254, size 0x3c, virtual false, abstract: false, final false
  static inline void SetViewMatrix_Injected(::by_ref<::UnityEngine::Matrix4x4 const> m);

  /// @brief Method TexCoord2, addr 0x6edbf50, size 0x44, virtual false, abstract: false, final false
  static inline void TexCoord2(float_t x, float_t y);

  /// [NativeName("ImmediateTexCoordAll")]
  /// @brief Method TexCoord3, addr 0x6edbf00, size 0x50, virtual false, abstract: false, final false
  static inline void TexCoord3(float_t x, float_t y, float_t z);

  /// [NativeName("ImmediateVertex")]
  /// @brief Method Vertex3, addr 0x6edbeb0, size 0x50, virtual false, abstract: false, final false
  static inline void Vertex3(float_t x, float_t y, float_t z);

  /// [FreeFunction("SetGLViewport")]
  /// @brief Method Viewport, addr 0x6edc68c, size 0x44, virtual false, abstract: false, final false
  static inline void Viewport(::UnityEngine::Rect pixelRect);

  /// @brief Method Viewport_Injected, addr 0x6edc6d0, size 0x3c, virtual false, abstract: false, final false
  static inline void Viewport_Injected(::by_ref<::UnityEngine::Rect const> pixelRect);

  /// @brief Method get_invertCulling, addr 0x6edc18c, size 0x28, virtual false, abstract: false, final false
  static inline bool get_invertCulling();

  /// @brief Method get_sRGBWrite, addr 0x6edc128, size 0x28, virtual false, abstract: false, final false
  static inline bool get_sRGBWrite();

  /// @brief Method get_wireframe, addr 0x6edc100, size 0x28, virtual false, abstract: false, final false
  static inline bool get_wireframe();

  /// @brief Method set_invertCulling, addr 0x6edc1b4, size 0x3c, virtual false, abstract: false, final false
  static inline void set_invertCulling(bool value);

  /// @brief Method set_modelview, addr 0x6edc290, size 0x4c, virtual false, abstract: false, final false
  static inline void set_modelview(::UnityEngine::Matrix4x4 value);

  /// @brief Method set_sRGBWrite, addr 0x6edc150, size 0x3c, virtual false, abstract: false, final false
  static inline void set_sRGBWrite(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GL();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GL", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GL(GL&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GL", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GL(GL const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9711 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::GL) == 0x10, "Size mismatch!");

} // namespace UnityEngine
