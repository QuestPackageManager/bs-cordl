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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8869))
// CS Name: ::UnityEngine::GL*
class CORDL_TYPE GL : public ::System::Object {
public:
  // Declarations
  /// @brief Method Vertex3, addr 0x2cc61f0, size 0x50, virtual false, abstract: false, final false
  static inline void Vertex3(float_t x, float_t y, float_t z);

  /// @brief Method TexCoord3, addr 0x2cc6240, size 0x50, virtual false, abstract: false, final false
  static inline void TexCoord3(float_t x, float_t y, float_t z);

  /// @brief Method TexCoord, addr 0x2cc6290, size 0x50, virtual false, abstract: false, final false
  static inline void TexCoord(::UnityEngine::Vector3 v);

  /// @brief Method TexCoord2, addr 0x2cc62e0, size 0x44, virtual false, abstract: false, final false
  static inline void TexCoord2(float_t x, float_t y);

  /// @brief Method ImmediateColor, addr 0x2cc6324, size 0x58, virtual false, abstract: false, final false
  static inline void ImmediateColor(float_t r, float_t g, float_t b, float_t a);

  /// @brief Method Color, addr 0x2cc637c, size 0x58, virtual false, abstract: false, final false
  static inline void Color(::UnityEngine::Color c);

  /// @brief Method get_sRGBWrite, addr 0x2cc63d4, size 0x28, virtual false, abstract: false, final false
  static inline bool get_sRGBWrite();

  /// @brief Method set_sRGBWrite, addr 0x2cc63fc, size 0x3c, virtual false, abstract: false, final false
  static inline void set_sRGBWrite(bool value);

  /// @brief Method get_invertCulling, addr 0x2cc6438, size 0x28, virtual false, abstract: false, final false
  static inline bool get_invertCulling();

  /// @brief Method set_invertCulling, addr 0x2cc6460, size 0x3c, virtual false, abstract: false, final false
  static inline void set_invertCulling(bool value);

  /// @brief Method Flush, addr 0x2cc649c, size 0x28, virtual false, abstract: false, final false
  static inline void Flush();

  /// @brief Method SetViewMatrix, addr 0x2cc64c4, size 0x3c, virtual false, abstract: false, final false
  static inline void SetViewMatrix(::UnityEngine::Matrix4x4 m);

  /// @brief Method set_modelview, addr 0x2cc653c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_modelview(::UnityEngine::Matrix4x4 value);

  /// @brief Method PushMatrix, addr 0x2cc6588, size 0x28, virtual false, abstract: false, final false
  static inline void PushMatrix();

  /// @brief Method PopMatrix, addr 0x2cc65b0, size 0x28, virtual false, abstract: false, final false
  static inline void PopMatrix();

  /// @brief Method LoadOrtho, addr 0x2cc65d8, size 0x28, virtual false, abstract: false, final false
  static inline void LoadOrtho();

  /// @brief Method LoadProjectionMatrix, addr 0x2cc6600, size 0x3c, virtual false, abstract: false, final false
  static inline void LoadProjectionMatrix(::UnityEngine::Matrix4x4 mat);

  /// @brief Method GLLoadPixelMatrixScript, addr 0x2cc6678, size 0x58, virtual false, abstract: false, final false
  static inline void GLLoadPixelMatrixScript(float_t left, float_t right, float_t bottom, float_t top);

  /// @brief Method LoadPixelMatrix, addr 0x2cc66d0, size 0x58, virtual false, abstract: false, final false
  static inline void LoadPixelMatrix(float_t left, float_t right, float_t bottom, float_t top);

  /// @brief Method GLIssuePluginEvent, addr 0x2cc6728, size 0x44, virtual false, abstract: false, final false
  static inline void GLIssuePluginEvent(void* callback, int32_t eventID);

  /// @brief Method IssuePluginEvent, addr 0x2cc676c, size 0xf0, virtual false, abstract: false, final false
  static inline void IssuePluginEvent(void* callback, int32_t eventID);

  /// @brief Method Begin, addr 0x2cc685c, size 0x3c, virtual false, abstract: false, final false
  static inline void Begin(int32_t mode);

  /// @brief Method End, addr 0x2cc6898, size 0x28, virtual false, abstract: false, final false
  static inline void End();

  /// @brief Method GLClear, addr 0x2cc68c0, size 0x6c, virtual false, abstract: false, final false
  static inline void GLClear(bool clearDepth, bool clearColor, ::UnityEngine::Color backgroundColor, float_t depth);

  /// @brief Method Clear, addr 0x2cc6990, size 0xc, virtual false, abstract: false, final false
  static inline void Clear(bool clearDepth, bool clearColor, ::UnityEngine::Color backgroundColor, float_t depth);

  /// @brief Method Clear, addr 0x2cc699c, size 0x10, virtual false, abstract: false, final false
  static inline void Clear(bool clearDepth, bool clearColor, ::UnityEngine::Color backgroundColor);

  /// @brief Method Viewport, addr 0x2cc69ac, size 0x44, virtual false, abstract: false, final false
  static inline void Viewport(::UnityEngine::Rect pixelRect);

  /// @brief Method SetViewMatrix_Injected, addr 0x2cc6500, size 0x3c, virtual false, abstract: false, final false
  static inline void SetViewMatrix_Injected(ByRef<::UnityEngine::Matrix4x4> m);

  /// @brief Method LoadProjectionMatrix_Injected, addr 0x2cc663c, size 0x3c, virtual false, abstract: false, final false
  static inline void LoadProjectionMatrix_Injected(ByRef<::UnityEngine::Matrix4x4> mat);

  /// @brief Method GLClear_Injected, addr 0x2cc692c, size 0x64, virtual false, abstract: false, final false
  static inline void GLClear_Injected(bool clearDepth, bool clearColor, ByRef<::UnityEngine::Color> backgroundColor, float_t depth);

  /// @brief Method Viewport_Injected, addr 0x2cc69f0, size 0x3c, virtual false, abstract: false, final false
  static inline void Viewport_Injected(ByRef<::UnityEngine::Rect> pixelRect);

  // Ctor Parameters [CppParam { name: "", ty: "GL", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GL(GL&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GL", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GL(GL const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GL();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::GL, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::GL);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GL*, "UnityEngine", "GL");
