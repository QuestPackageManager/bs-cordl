#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ITextHandle)
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
struct CursorPositionStylePainterParameters;
}
namespace UnityEngine::TextCore::Text {
class TextInfo;
}
namespace UnityEngine::UIElements {
struct __MeshGenerationContextUtils__TextParams;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ITextHandle;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ITextHandle);
// Type: UnityEngine.UIElements::ITextHandle
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7144))
// CS Name: ::UnityEngine.UIElements::ITextHandle*
class CORDL_TYPE ITextHandle {
public:
  // Declarations
  __declspec(property(put = set_MeasuredSizes))::UnityEngine::Vector2 MeasuredSizes;

  __declspec(property(put = set_RoundedSizes))::UnityEngine::Vector2 RoundedSizes;

  /// @brief Method GetCursorPosition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Vector2 GetCursorPosition(::UnityEngine::UIElements::CursorPositionStylePainterParameters parms, float_t scaling);

  /// @brief Method ComputeTextWidth, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t ComputeTextWidth(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams parms, float_t scaling);

  /// @brief Method ComputeTextHeight, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t ComputeTextHeight(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams parms, float_t scaling);

  /// @brief Method GetLineHeight, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t GetLineHeight(int32_t characterIndex, ::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams textParams, float_t textScaling, float_t pixelPerPoint);

  /// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::TextCore::Text::TextInfo* Update(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams parms, float_t pixelsPerPoint);

  /// @brief Method IsLegacy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsLegacy();

  /// @brief Method IsElided, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsElided();

  /// @brief Method set_MeasuredSizes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_MeasuredSizes(::UnityEngine::Vector2 value);

  /// @brief Method set_RoundedSizes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_RoundedSizes(::UnityEngine::Vector2 value);

  // Ctor Parameters [CppParam { name: "", ty: "ITextHandle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ITextHandle(ITextHandle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ITextHandle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITextHandle(ITextHandle const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ITextHandle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ITextHandle*, "UnityEngine.UIElements", "ITextHandle");
