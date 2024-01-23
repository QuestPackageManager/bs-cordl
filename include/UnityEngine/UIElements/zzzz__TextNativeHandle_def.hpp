#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextVertex_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextNativeHandle)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::TextCore::Text {
class TextInfo;
}
namespace UnityEngine::UIElements {
struct CursorPositionStylePainterParameters;
}
namespace UnityEngine::UIElements {
class ITextHandle;
}
namespace UnityEngine::UIElements {
struct TextVertex;
}
namespace UnityEngine::UIElements {
struct __MeshGenerationContextUtils__TextParams;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct TextNativeHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::TextNativeHandle);
// Type: UnityEngine.UIElements::TextNativeHandle
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(9999)), TypeDefinitionIndex(TypeDefinitionIndex(10243)), TypeDefinitionIndex(TypeDefinitionIndex(15377)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 749 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(7146)) CS Name: ::UnityEngine.UIElements::TextNativeHandle
struct CORDL_TYPE TextNativeHandle {
public:
  // Declarations
  __declspec(property(get = get_MeasuredSizes, put = set_MeasuredSizes))::UnityEngine::Vector2 MeasuredSizes;

  __declspec(property(get = get_RoundedSizes, put = set_RoundedSizes))::UnityEngine::Vector2 RoundedSizes;

  /// @brief Convert operator to "::UnityEngine::UIElements::ITextHandle"
  constexpr operator ::UnityEngine::UIElements::ITextHandle*();

  /// @brief Convert to "::UnityEngine::UIElements::ITextHandle"
  constexpr ::UnityEngine::UIElements::ITextHandle* i___UnityEngine__UIElements__ITextHandle();

  /// @brief Method get_MeasuredSizes, addr 0x2e46424, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector2 get_MeasuredSizes();

  /// @brief Method set_MeasuredSizes, addr 0x2e4642c, size 0x8, virtual true, abstract: false, final true
  inline void set_MeasuredSizes(::UnityEngine::Vector2 value);

  /// @brief Method get_RoundedSizes, addr 0x2e46434, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector2 get_RoundedSizes();

  /// @brief Method set_RoundedSizes, addr 0x2e4643c, size 0x8, virtual true, abstract: false, final true
  inline void set_RoundedSizes(::UnityEngine::Vector2 value);

  /// @brief Method New, addr 0x2e46444, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::ITextHandle* New();

  /// @brief Method IsLegacy, addr 0x2e464a0, size 0x8, virtual true, abstract: false, final true
  inline bool IsLegacy();

  /// @brief Method GetLineHeight, addr 0x2e464a8, size 0x70, virtual true, abstract: false, final true
  inline float_t GetLineHeight(int32_t characterIndex, ::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams textParams, float_t textScaling, float_t pixelPerPoint);

  /// @brief Method Update, addr 0x2e4657c, size 0x70, virtual true, abstract: false, final true
  inline ::UnityEngine::TextCore::Text::TextInfo* Update(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams parms, float_t pixelsPerPoint);

  /// @brief Method GetVertices, addr 0x2e465ec, size 0x210, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex> GetVertices(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams parms, float_t scaling);

  /// @brief Method GetCursorPosition, addr 0x2e467fc, size 0x58, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector2 GetCursorPosition(::UnityEngine::UIElements::CursorPositionStylePainterParameters parms, float_t scaling);

  /// @brief Method ComputeTextWidth, addr 0x2e46854, size 0x80, virtual true, abstract: false, final true
  inline float_t ComputeTextWidth(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams parms, float_t scaling);

  /// @brief Method ComputeTextHeight, addr 0x2e46518, size 0x64, virtual true, abstract: false, final true
  inline float_t ComputeTextHeight(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams parms, float_t scaling);

  /// @brief Method IsElided, addr 0x2e468d4, size 0x8, virtual true, abstract: false, final true
  inline bool IsElided();

  // Ctor Parameters [CppParam { name: "_MeasuredSizes_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "_RoundedSizes_k__BackingField", ty:
  // "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "textVertices", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex>", modifiers: "",
  // def_value: None }, CppParam { name: "m_PreviousTextParamsHash", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TextNativeHandle(::UnityEngine::Vector2 _MeasuredSizes_k__BackingField, ::UnityEngine::Vector2 _RoundedSizes_k__BackingField,
                             ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex> textVertices, int32_t m_PreviousTextParamsHash) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextNativeHandle();

  /// @brief Field <MeasuredSizes>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Vector2 _MeasuredSizes_k__BackingField;

  /// @brief Field <RoundedSizes>k__BackingField, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Vector2 _RoundedSizes_k__BackingField;

  /// @brief Field textVertices, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex> textVertices;

  /// @brief Field m_PreviousTextParamsHash, offset: 0x20, size: 0x4, def value: None
  int32_t m_PreviousTextParamsHash;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TextNativeHandle, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextNativeHandle, _MeasuredSizes_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextNativeHandle, _RoundedSizes_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextNativeHandle, textVertices) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextNativeHandle, m_PreviousTextParamsHash) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextNativeHandle, "UnityEngine.UIElements", "TextNativeHandle");
