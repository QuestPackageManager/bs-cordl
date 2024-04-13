#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TextNative)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::UIElements {
struct TextNativeSettings;
}
namespace UnityEngine::UIElements {
struct TextVertex;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
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
// CS Name: ::UnityEngine.UIElements::TextNative*
class CORDL_TYPE TextNative : public ::System::Object {
public:
  // Declarations
  /// @brief Method ComputeTextHeight, addr 0x33f3c78, size 0x108, virtual false, abstract: false, final false
  static inline float_t ComputeTextHeight(::UnityEngine::UIElements::TextNativeSettings settings);

  /// @brief Method ComputeTextScaling, addr 0x33f4194, size 0xfc, virtual false, abstract: false, final false
  static inline float_t ComputeTextScaling(::UnityEngine::Matrix4x4 worldMatrix, float_t pixelsPerPoint);

  /// @brief Method ComputeTextWidth, addr 0x33f3b34, size 0x108, virtual false, abstract: false, final false
  static inline float_t ComputeTextWidth(::UnityEngine::UIElements::TextNativeSettings settings);

  /// @brief Method DoComputeTextHeight, addr 0x33f3d80, size 0x3c, virtual false, abstract: false, final false
  static inline float_t DoComputeTextHeight(::UnityEngine::UIElements::TextNativeSettings settings);

  /// @brief Method DoComputeTextHeight_Injected, addr 0x33f42cc, size 0x3c, virtual false, abstract: false, final false
  static inline float_t DoComputeTextHeight_Injected(ByRef<::UnityEngine::UIElements::TextNativeSettings> settings);

  /// @brief Method DoComputeTextWidth, addr 0x33f3c3c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t DoComputeTextWidth(::UnityEngine::UIElements::TextNativeSettings settings);

  /// @brief Method DoComputeTextWidth_Injected, addr 0x33f4290, size 0x3c, virtual false, abstract: false, final false
  static inline float_t DoComputeTextWidth_Injected(ByRef<::UnityEngine::UIElements::TextNativeSettings> settings);

  /// @brief Method DoGetCursorPosition, addr 0x33f3acc, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 DoGetCursorPosition(::UnityEngine::UIElements::TextNativeSettings settings, ::UnityEngine::Rect rect, int32_t cursorPosition);

  /// @brief Method DoGetCursorPosition_Injected, addr 0x33f4308, size 0x5c, virtual false, abstract: false, final false
  static inline void DoGetCursorPosition_Injected(ByRef<::UnityEngine::UIElements::TextNativeSettings> settings, ByRef<::UnityEngine::Rect> rect, int32_t cursorPosition,
                                                  ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method DoGetOffset, addr 0x33f4138, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 DoGetOffset(::UnityEngine::UIElements::TextNativeSettings settings, ::UnityEngine::Rect rect);

  /// @brief Method DoGetOffset_Injected, addr 0x33f43c0, size 0x54, virtual false, abstract: false, final false
  static inline void DoGetOffset_Injected(ByRef<::UnityEngine::UIElements::TextNativeSettings> settings, ByRef<::UnityEngine::Rect> rect, ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method GetCursorPosition, addr 0x33f3988, size 0x144, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 GetCursorPosition(::UnityEngine::UIElements::TextNativeSettings settings, ::UnityEngine::Rect rect, int32_t cursorIndex);

  /// @brief Method GetOffset, addr 0x33f4008, size 0x130, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 GetOffset(::UnityEngine::UIElements::TextNativeSettings settings, ::UnityEngine::Rect screenRect);

  /// @brief Method GetVertices, addr 0x33f3dbc, size 0x1f0, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex> GetVertices(::UnityEngine::UIElements::TextNativeSettings settings);

  /// @brief Method GetVertices, addr 0x33f3fac, size 0x5c, virtual false, abstract: false, final false
  static inline void GetVertices(::UnityEngine::UIElements::TextNativeSettings settings, void* buffer, int32_t vertexSize, ByRef<int32_t> vertexCount);

  /// @brief Method GetVertices_Injected, addr 0x33f4364, size 0x5c, virtual false, abstract: false, final false
  static inline void GetVertices_Injected(ByRef<::UnityEngine::UIElements::TextNativeSettings> settings, void* buffer, int32_t vertexSize, ByRef<int32_t> vertexCount);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextNative();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextNative", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextNative(TextNative&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextNative", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextNative(TextNative const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TextNative, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TextNative);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextNative*, "UnityEngine.UIElements", "TextNative");
