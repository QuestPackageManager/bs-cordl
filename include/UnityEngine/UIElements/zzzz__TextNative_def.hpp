#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TextNative)
namespace UnityEngine::UIElements {
struct TextNativeSettings;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
struct TextVertex;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TextNative;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TextNative);
// Type: UnityEngine.UIElements::TextNative
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15408))
// CS Name: ::UnityEngine.UIElements::TextNative*
class CORDL_TYPE TextNative : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetCursorPosition addr 0x2d3d478 size 0x144 virtual false final false
  static inline ::UnityEngine::Vector2 GetCursorPosition(::UnityEngine::UIElements::TextNativeSettings settings, ::UnityEngine::Rect rect, int32_t cursorIndex);

  /// @brief Method ComputeTextWidth addr 0x2d3d624 size 0x108 virtual false final false
  static inline float_t ComputeTextWidth(::UnityEngine::UIElements::TextNativeSettings settings);

  /// @brief Method ComputeTextHeight addr 0x2d3d768 size 0x108 virtual false final false
  static inline float_t ComputeTextHeight(::UnityEngine::UIElements::TextNativeSettings settings);

  /// @brief Method GetVertices addr 0x2d3d8ac size 0x1f0 virtual false final false
  static inline ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex> GetVertices(::UnityEngine::UIElements::TextNativeSettings settings);

  /// @brief Method GetOffset addr 0x2d3daf8 size 0x130 virtual false final false
  static inline ::UnityEngine::Vector2 GetOffset(::UnityEngine::UIElements::TextNativeSettings settings, ::UnityEngine::Rect screenRect);

  /// @brief Method ComputeTextScaling addr 0x2d3dc84 size 0xfc virtual false final false
  static inline float_t ComputeTextScaling(::UnityEngine::Matrix4x4 worldMatrix, float_t pixelsPerPoint);

  /// @brief Method DoComputeTextWidth addr 0x2d3d72c size 0x3c virtual false final false
  static inline float_t DoComputeTextWidth(::UnityEngine::UIElements::TextNativeSettings settings);

  /// @brief Method DoComputeTextHeight addr 0x2d3d870 size 0x3c virtual false final false
  static inline float_t DoComputeTextHeight(::UnityEngine::UIElements::TextNativeSettings settings);

  /// @brief Method DoGetCursorPosition addr 0x2d3d5bc size 0x68 virtual false final false
  static inline ::UnityEngine::Vector2 DoGetCursorPosition(::UnityEngine::UIElements::TextNativeSettings settings, ::UnityEngine::Rect rect, int32_t cursorPosition);

  /// @brief Method GetVertices addr 0x2d3da9c size 0x5c virtual false final false
  static inline void GetVertices(::UnityEngine::UIElements::TextNativeSettings settings, void* buffer, int32_t vertexSize, ByRef<int32_t> vertexCount);

  /// @brief Method DoGetOffset addr 0x2d3dc28 size 0x5c virtual false final false
  static inline ::UnityEngine::Vector2 DoGetOffset(::UnityEngine::UIElements::TextNativeSettings settings, ::UnityEngine::Rect rect);

  /// @brief Method DoComputeTextWidth_Injected addr 0x2d3dd80 size 0x3c virtual false final false
  static inline float_t DoComputeTextWidth_Injected(ByRef<::UnityEngine::UIElements::TextNativeSettings> settings);

  /// @brief Method DoComputeTextHeight_Injected addr 0x2d3ddbc size 0x3c virtual false final false
  static inline float_t DoComputeTextHeight_Injected(ByRef<::UnityEngine::UIElements::TextNativeSettings> settings);

  /// @brief Method DoGetCursorPosition_Injected addr 0x2d3ddf8 size 0x5c virtual false final false
  static inline void DoGetCursorPosition_Injected(ByRef<::UnityEngine::UIElements::TextNativeSettings> settings, ByRef<::UnityEngine::Rect> rect, int32_t cursorPosition,
                                                  ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method GetVertices_Injected addr 0x2d3de54 size 0x5c virtual false final false
  static inline void GetVertices_Injected(ByRef<::UnityEngine::UIElements::TextNativeSettings> settings, void* buffer, int32_t vertexSize, ByRef<int32_t> vertexCount);

  /// @brief Method DoGetOffset_Injected addr 0x2d3deb0 size 0x54 virtual false final false
  static inline void DoGetOffset_Injected(ByRef<::UnityEngine::UIElements::TextNativeSettings> settings, ByRef<::UnityEngine::Rect> rect, ByRef<::UnityEngine::Vector2> ret);

  // Ctor Parameters [CppParam { name: "", ty: "TextNative", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextNative(TextNative&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextNative", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextNative(TextNative const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextNative();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TextNative, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TextNative);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextNative*, "UnityEngine.UIElements", "TextNative");
