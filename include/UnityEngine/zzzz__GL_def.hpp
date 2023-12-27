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
struct Vector3;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Matrix4x4;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10131))
// CS Name: ::UnityEngine::GL*
class CORDL_TYPE GL : public ::System::Object {
public:
  // Declarations
  /// @brief Method Vertex3 addr 0x2cc39b4 size 0x50 virtual false final false
  static inline void Vertex3(float_t x, float_t y, float_t z);

  /// @brief Method TexCoord3 addr 0x2cc3a04 size 0x50 virtual false final false
  static inline void TexCoord3(float_t x, float_t y, float_t z);

  /// @brief Method TexCoord addr 0x2cc3a54 size 0x50 virtual false final false
  static inline void TexCoord(::UnityEngine::Vector3 v);

  /// @brief Method TexCoord2 addr 0x2cc3aa4 size 0x44 virtual false final false
  static inline void TexCoord2(float_t x, float_t y);

  /// @brief Method ImmediateColor addr 0x2cc3ae8 size 0x58 virtual false final false
  static inline void ImmediateColor(float_t r, float_t g, float_t b, float_t a);

  /// @brief Method Color addr 0x2cc3b40 size 0x58 virtual false final false
  static inline void Color(::UnityEngine::Color c);

  /// @brief Method get_sRGBWrite addr 0x2cc3b98 size 0x28 virtual false final false
  static inline bool get_sRGBWrite();

  /// @brief Method set_sRGBWrite addr 0x2cc3bc0 size 0x3c virtual false final false
  static inline void set_sRGBWrite(bool value);

  /// @brief Method get_invertCulling addr 0x2cc3bfc size 0x28 virtual false final false
  static inline bool get_invertCulling();

  /// @brief Method set_invertCulling addr 0x2cc3c24 size 0x3c virtual false final false
  static inline void set_invertCulling(bool value);

  /// @brief Method Flush addr 0x2cc3c60 size 0x28 virtual false final false
  static inline void Flush();

  /// @brief Method SetViewMatrix addr 0x2cc3c88 size 0x3c virtual false final false
  static inline void SetViewMatrix(::UnityEngine::Matrix4x4 m);

  /// @brief Method set_modelview addr 0x2cc3d00 size 0x4c virtual false final false
  static inline void set_modelview(::UnityEngine::Matrix4x4 value);

  /// @brief Method PushMatrix addr 0x2cc3d4c size 0x28 virtual false final false
  static inline void PushMatrix();

  /// @brief Method PopMatrix addr 0x2cc3d74 size 0x28 virtual false final false
  static inline void PopMatrix();

  /// @brief Method LoadOrtho addr 0x2cc3d9c size 0x28 virtual false final false
  static inline void LoadOrtho();

  /// @brief Method LoadProjectionMatrix addr 0x2cc3dc4 size 0x3c virtual false final false
  static inline void LoadProjectionMatrix(::UnityEngine::Matrix4x4 mat);

  /// @brief Method GLLoadPixelMatrixScript addr 0x2cc3e3c size 0x58 virtual false final false
  static inline void GLLoadPixelMatrixScript(float_t left, float_t right, float_t bottom, float_t top);

  /// @brief Method LoadPixelMatrix addr 0x2cc3e94 size 0x58 virtual false final false
  static inline void LoadPixelMatrix(float_t left, float_t right, float_t bottom, float_t top);

  /// @brief Method GLIssuePluginEvent addr 0x2cc3eec size 0x44 virtual false final false
  static inline void GLIssuePluginEvent(void* callback, int32_t eventID);

  /// @brief Method IssuePluginEvent addr 0x2cc3f30 size 0xf0 virtual false final false
  static inline void IssuePluginEvent(void* callback, int32_t eventID);

  /// @brief Method Begin addr 0x2cc4020 size 0x3c virtual false final false
  static inline void Begin(int32_t mode);

  /// @brief Method End addr 0x2cc405c size 0x28 virtual false final false
  static inline void End();

  /// @brief Method GLClear addr 0x2cc4084 size 0x6c virtual false final false
  static inline void GLClear(bool clearDepth, bool clearColor, ::UnityEngine::Color backgroundColor, float_t depth);

  /// @brief Method Clear addr 0x2cc4154 size 0xc virtual false final false
  static inline void Clear(bool clearDepth, bool clearColor, ::UnityEngine::Color backgroundColor, float_t depth);

  /// @brief Method Clear addr 0x2cc4160 size 0x10 virtual false final false
  static inline void Clear(bool clearDepth, bool clearColor, ::UnityEngine::Color backgroundColor);

  /// @brief Method Viewport addr 0x2cc4170 size 0x44 virtual false final false
  static inline void Viewport(::UnityEngine::Rect pixelRect);

  /// @brief Method SetViewMatrix_Injected addr 0x2cc3cc4 size 0x3c virtual false final false
  static inline void SetViewMatrix_Injected(ByRef<::UnityEngine::Matrix4x4> m);

  /// @brief Method LoadProjectionMatrix_Injected addr 0x2cc3e00 size 0x3c virtual false final false
  static inline void LoadProjectionMatrix_Injected(ByRef<::UnityEngine::Matrix4x4> mat);

  /// @brief Method GLClear_Injected addr 0x2cc40f0 size 0x64 virtual false final false
  static inline void GLClear_Injected(bool clearDepth, bool clearColor, ByRef<::UnityEngine::Color> backgroundColor, float_t depth);

  /// @brief Method Viewport_Injected addr 0x2cc41b4 size 0x3c virtual false final false
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
