#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class GL;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::GL);
// Type: UnityEngine::GL
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::GL*
class CORDL_TYPE GL : public ::System::Object {
public:
  // Declarations
  /// @brief Method Begin, addr 0x2db1dc0, size 0x3c, virtual false, abstract: false, final false
  static inline void Begin(int32_t mode);

  /// @brief Method Clear, addr 0x2db1f00, size 0x10, virtual false, abstract: false, final false
  static inline void Clear(bool clearDepth, bool clearColor, ::UnityEngine::Color backgroundColor);

  /// @brief Method Clear, addr 0x2db1ef4, size 0xc, virtual false, abstract: false, final false
  static inline void Clear(bool clearDepth, bool clearColor, ::UnityEngine::Color backgroundColor, float_t depth);

  /// @brief Method Color, addr 0x2db18e0, size 0x58, virtual false, abstract: false, final false
  static inline void Color(::UnityEngine::Color c);

  /// @brief Method End, addr 0x2db1dfc, size 0x28, virtual false, abstract: false, final false
  static inline void End();

  /// @brief Method Flush, addr 0x2db1a00, size 0x28, virtual false, abstract: false, final false
  static inline void Flush();

  /// @brief Method GLClear, addr 0x2db1e24, size 0x6c, virtual false, abstract: false, final false
  static inline void GLClear(bool clearDepth, bool clearColor, ::UnityEngine::Color backgroundColor, float_t depth);

  /// @brief Method GLClear_Injected, addr 0x2db1e90, size 0x64, virtual false, abstract: false, final false
  static inline void GLClear_Injected(bool clearDepth, bool clearColor, ByRef<::UnityEngine::Color> backgroundColor, float_t depth);

  /// @brief Method GLIssuePluginEvent, addr 0x2db1c8c, size 0x44, virtual false, abstract: false, final false
  static inline void GLIssuePluginEvent(void* callback, int32_t eventID);

  /// @brief Method GLLoadPixelMatrixScript, addr 0x2db1bdc, size 0x58, virtual false, abstract: false, final false
  static inline void GLLoadPixelMatrixScript(float_t left, float_t right, float_t bottom, float_t top);

  /// @brief Method ImmediateColor, addr 0x2db1888, size 0x58, virtual false, abstract: false, final false
  static inline void ImmediateColor(float_t r, float_t g, float_t b, float_t a);

  /// @brief Method IssuePluginEvent, addr 0x2db1cd0, size 0xf0, virtual false, abstract: false, final false
  static inline void IssuePluginEvent(void* callback, int32_t eventID);

  /// @brief Method LoadOrtho, addr 0x2db1b3c, size 0x28, virtual false, abstract: false, final false
  static inline void LoadOrtho();

  /// @brief Method LoadPixelMatrix, addr 0x2db1c34, size 0x58, virtual false, abstract: false, final false
  static inline void LoadPixelMatrix(float_t left, float_t right, float_t bottom, float_t top);

  /// @brief Method LoadProjectionMatrix, addr 0x2db1b64, size 0x3c, virtual false, abstract: false, final false
  static inline void LoadProjectionMatrix(::UnityEngine::Matrix4x4 mat);

  /// @brief Method LoadProjectionMatrix_Injected, addr 0x2db1ba0, size 0x3c, virtual false, abstract: false, final false
  static inline void LoadProjectionMatrix_Injected(ByRef<::UnityEngine::Matrix4x4> mat);

  /// @brief Method PopMatrix, addr 0x2db1b14, size 0x28, virtual false, abstract: false, final false
  static inline void PopMatrix();

  /// @brief Method PushMatrix, addr 0x2db1aec, size 0x28, virtual false, abstract: false, final false
  static inline void PushMatrix();

  /// @brief Method SetViewMatrix, addr 0x2db1a28, size 0x3c, virtual false, abstract: false, final false
  static inline void SetViewMatrix(::UnityEngine::Matrix4x4 m);

  /// @brief Method SetViewMatrix_Injected, addr 0x2db1a64, size 0x3c, virtual false, abstract: false, final false
  static inline void SetViewMatrix_Injected(ByRef<::UnityEngine::Matrix4x4> m);

  /// @brief Method TexCoord, addr 0x2db17f4, size 0x50, virtual false, abstract: false, final false
  static inline void TexCoord(::UnityEngine::Vector3 v);

  /// @brief Method TexCoord2, addr 0x2db1844, size 0x44, virtual false, abstract: false, final false
  static inline void TexCoord2(float_t x, float_t y);

  /// @brief Method TexCoord3, addr 0x2db17a4, size 0x50, virtual false, abstract: false, final false
  static inline void TexCoord3(float_t x, float_t y, float_t z);

  /// @brief Method Vertex3, addr 0x2db1754, size 0x50, virtual false, abstract: false, final false
  static inline void Vertex3(float_t x, float_t y, float_t z);

  /// @brief Method Viewport, addr 0x2db1f10, size 0x44, virtual false, abstract: false, final false
  static inline void Viewport(::UnityEngine::Rect pixelRect);

  /// @brief Method Viewport_Injected, addr 0x2db1f54, size 0x3c, virtual false, abstract: false, final false
  static inline void Viewport_Injected(ByRef<::UnityEngine::Rect> pixelRect);

  /// @brief Method get_invertCulling, addr 0x2db199c, size 0x28, virtual false, abstract: false, final false
  static inline bool get_invertCulling();

  /// @brief Method get_sRGBWrite, addr 0x2db1938, size 0x28, virtual false, abstract: false, final false
  static inline bool get_sRGBWrite();

  /// @brief Method set_invertCulling, addr 0x2db19c4, size 0x3c, virtual false, abstract: false, final false
  static inline void set_invertCulling(bool value);

  /// @brief Method set_modelview, addr 0x2db1aa0, size 0x4c, virtual false, abstract: false, final false
  static inline void set_modelview(::UnityEngine::Matrix4x4 value);

  /// @brief Method set_sRGBWrite, addr 0x2db1960, size 0x3c, virtual false, abstract: false, final false
  static inline void set_sRGBWrite(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GL();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GL", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GL(GL&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GL", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GL(GL const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::GL, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::GL);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GL*, "UnityEngine", "GL");
