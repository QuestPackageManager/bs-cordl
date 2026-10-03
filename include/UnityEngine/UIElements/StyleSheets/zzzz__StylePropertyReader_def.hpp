#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/StylePropertyReader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleProperty_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StylePropertyReader)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements::StyleSheets {
struct ImageSource;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StyleEnumType;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace UnityEngine::UIElements::StyleSheets {
class StylePropertyReader_GetCursorIdFunction;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyValue;
}
namespace UnityEngine::UIElements {
struct Angle;
}
namespace UnityEngine::UIElements {
struct BackgroundPositionKeyword;
}
namespace UnityEngine::UIElements {
struct BackgroundPosition;
}
namespace UnityEngine::UIElements {
struct BackgroundRepeat;
}
namespace UnityEngine::UIElements {
struct BackgroundSize;
}
namespace UnityEngine::UIElements {
struct Background;
}
namespace UnityEngine::UIElements {
struct Cursor;
}
namespace UnityEngine::UIElements {
struct EasingFunction;
}
namespace UnityEngine::UIElements {
struct FilterFunction;
}
namespace UnityEngine::UIElements {
struct FontDefinition;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine::UIElements {
struct MaterialDefinition;
}
namespace UnityEngine::UIElements {
struct Rotate;
}
namespace UnityEngine::UIElements {
struct Scale;
}
namespace UnityEngine::UIElements {
class StyleComplexSelector;
}
namespace UnityEngine::UIElements {
struct StylePropertyName;
}
namespace UnityEngine::UIElements {
class StyleProperty;
}
namespace UnityEngine::UIElements {
struct StyleRatio;
}
namespace UnityEngine::UIElements {
class StyleSheet;
}
namespace UnityEngine::UIElements {
struct StyleValueHandle;
}
namespace UnityEngine::UIElements {
struct StyleValueKeyword;
}
namespace UnityEngine::UIElements {
struct StyleValueType;
}
namespace UnityEngine::UIElements {
class StyleVariableContext;
}
namespace UnityEngine::UIElements {
class StyleVariableResolver;
}
namespace UnityEngine::UIElements {
struct TextAutoSize;
}
namespace UnityEngine::UIElements {
struct TextShadow;
}
namespace UnityEngine::UIElements {
struct TimeValue;
}
namespace UnityEngine::UIElements {
struct TransformOrigin;
}
namespace UnityEngine::UIElements {
struct Translate;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
class StylePropertyReader;
}
namespace UnityEngine::UIElements::StyleSheets {
class StylePropertyReader_GetCursorIdFunction;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*);
MARK_REF_T(::UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*, "UnityEngine.UIElements.StyleSheets", "StylePropertyReader");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction*, "UnityEngine.UIElements.StyleSheets", "StylePropertyReader/GetCursorIdFunction");
// Dependencies System.MulticastDelegate
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// CS Name: UnityEngine.UIElements.StyleSheets.StylePropertyReader/GetCursorIdFunction
class CORDL_TYPE StylePropertyReader_GetCursorIdFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x71c8108, size 0x14, virtual true, abstract: false, final false
  inline int32_t Invoke(::UnityEngine::UIElements::StyleSheet* sheet, ::UnityEngine::UIElements::StyleValueHandle handle);

  static inline ::UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x71c7fc0, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StylePropertyReader_GetCursorIdFunction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyReader_GetCursorIdFunction", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StylePropertyReader_GetCursorIdFunction(StylePropertyReader_GetCursorIdFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyReader_GetCursorIdFunction", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StylePropertyReader_GetCursorIdFunction(StylePropertyReader_GetCursorIdFunction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5577 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction) == 0x80, "Size mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets
// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
// Dependencies System.Object, UnityEngine.UIElements.StyleProperty, UnityEngine.UIElements.StyleSheets.StylePropertyId
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// CS Name: UnityEngine.UIElements.StyleSheets.StylePropertyReader
class CORDL_TYPE StylePropertyReader : public ::System::Object {
public:
  // Declarations
  using GetCursorIdFunction = ::UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction;

  /// @brief Field <dpiScaling>k__BackingField, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__dpiScaling_k__BackingField, put = __cordl_internal_set__dpiScaling_k__BackingField)) float_t _dpiScaling_k__BackingField;

  /// @brief Field <m_CurrentValueIndex>k__BackingField, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__m_CurrentValueIndex_k__BackingField, put = __cordl_internal_set__m_CurrentValueIndex_k__BackingField)) int32_t _m_CurrentValueIndex_k__BackingField;

  /// @brief Field <propertyId>k__BackingField, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__propertyId_k__BackingField,
                      put = __cordl_internal_set__propertyId_k__BackingField)) ::UnityEngine::UIElements::StyleSheets::StylePropertyId _propertyId_k__BackingField;

  /// @brief Field <property>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__property_k__BackingField, put = __cordl_internal_set__property_k__BackingField)) ::UnityEngine::UIElements::StyleProperty* _property_k__BackingField;

  /// @brief Field <valueCount>k__BackingField, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__valueCount_k__BackingField, put = __cordl_internal_set__valueCount_k__BackingField)) int32_t _valueCount_k__BackingField;

  __declspec(property(get = get_dpiScaling, put = set_dpiScaling)) float_t dpiScaling;

  /// @brief Field getCursorIdFunc, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_getCursorIdFunc, put = setStaticF_getCursorIdFunc)) ::UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction* getCursorIdFunc;

  /// @brief Field m_CurrentPropertyIndex, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CurrentPropertyIndex, put = __cordl_internal_set_m_CurrentPropertyIndex)) int32_t m_CurrentPropertyIndex;

  __declspec(property(get = get_m_CurrentValueIndex, put = set_m_CurrentValueIndex)) int32_t m_CurrentValueIndex;

  /// @brief Field m_Properties, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Properties, put = __cordl_internal_set_m_Properties)) ::ArrayW<::UnityEngine::UIElements::StyleProperty*> m_Properties;

  /// @brief Field m_Resolver, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Resolver, put = __cordl_internal_set_m_Resolver)) ::UnityEngine::UIElements::StyleVariableResolver* m_Resolver;

  /// @brief Field m_Sheet, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Sheet, put = __cordl_internal_set_m_Sheet)) ::UnityW<::UnityEngine::UIElements::StyleSheet> m_Sheet;

  /// @brief Field m_ValueCount, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ValueCount, put = __cordl_internal_set_m_ValueCount)) ::System::Collections::Generic::List_1<int32_t>* m_ValueCount;

  /// @brief Field m_Values, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Values,
                      put = __cordl_internal_set_m_Values)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* m_Values;

  __declspec(property(get = get_property, put = set_property)) ::UnityEngine::UIElements::StyleProperty* property;

  __declspec(property(get = get_propertyId, put = set_propertyId)) ::UnityEngine::UIElements::StyleSheets::StylePropertyId propertyId;

  __declspec(property(get = get_valueCount, put = set_valueCount)) int32_t valueCount;

  /// @brief Method GetValue, addr 0x71c33f0, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleSheets::StylePropertyValue GetValue(int32_t index);

  /// @brief Method GetValueType, addr 0x71c3458, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleValueType GetValueType(int32_t index);

  /// @brief Method IsKeyword, addr 0x71c3540, size 0x80, virtual false, abstract: false, final false
  inline bool IsKeyword(int32_t index, ::UnityEngine::UIElements::StyleValueKeyword keyword);

  /// @brief Method IsValueType, addr 0x71c34c8, size 0x78, virtual false, abstract: false, final false
  inline bool IsValueType(int32_t index, ::UnityEngine::UIElements::StyleValueType type);

  /// @brief Method LoadProperties, addr 0x71c2f40, size 0x3d4, virtual false, abstract: false, final false
  inline void LoadProperties();

  /// @brief Method MoveNextProperty, addr 0x71c3320, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleSheets::StylePropertyId MoveNextProperty();

  static inline ::UnityEngine::UIElements::StyleSheets::StylePropertyReader* New_ctor();

  /// @brief Method ReadAngle, addr 0x71c7d74, size 0xa8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Angle ReadAngle(::UnityEngine::UIElements::StyleSheets::StylePropertyValue value);

  /// @brief Method ReadAsString, addr 0x71c35c0, size 0x6c, virtual false, abstract: false, final false
  inline ::StringW ReadAsString(int32_t index);

  /// @brief Method ReadAsset, addr 0x71c48a4, size 0x154, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> ReadAsset(int32_t index);

  /// @brief Method ReadBackground, addr 0x71c532c, size 0x270, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Background ReadBackground(int32_t index);

  /// @brief Method ReadBackgroundPosition, addr 0x71c69bc, size 0xd4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BackgroundPosition ReadBackgroundPosition(int32_t index, ::UnityEngine::UIElements::BackgroundPositionKeyword keyword);

  /// @brief Method ReadBackgroundPosition, addr 0x71c6aa8, size 0xf4, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::BackgroundPosition ReadBackgroundPosition(int32_t valCount, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val1,
                                                                                     ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val2,
                                                                                     ::UnityEngine::UIElements::BackgroundPositionKeyword keyword);

  /// @brief Method ReadBackgroundPositionX, addr 0x71c69a4, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BackgroundPosition ReadBackgroundPositionX(int32_t index);

  /// @brief Method ReadBackgroundPositionY, addr 0x71c6a90, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BackgroundPosition ReadBackgroundPositionY(int32_t index);

  /// @brief Method ReadBackgroundRepeat, addr 0x71c6b9c, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BackgroundRepeat ReadBackgroundRepeat(int32_t index);

  /// @brief Method ReadBackgroundRepeat, addr 0x71c6c58, size 0xc4, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::BackgroundRepeat ReadBackgroundRepeat(int32_t valCount, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val1,
                                                                                 ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val2);

  /// @brief Method ReadBackgroundSize, addr 0x71c6d1c, size 0xf0, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BackgroundSize ReadBackgroundSize(int32_t index);

  /// @brief Method ReadBackgroundSize, addr 0x71c6e0c, size 0x210, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::BackgroundSize ReadBackgroundSize(int32_t valCount, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val1,
                                                                             ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val2);

  /// @brief Method ReadColor, addr 0x71c4748, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::Color ReadColor(int32_t index);

  /// @brief Method ReadCursor, addr 0x71c5fc8, size 0x138, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Cursor ReadCursor(int32_t index);

  /// @brief Method ReadCursor, addr 0x71c6100, size 0x1c8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Cursor ReadCursor(int32_t valueCount, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val1,
                                                             ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val2, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val3,
                                                             float_t dpiScaling);

  /// @brief Method ReadEnum, addr 0x71c47bc, size 0xe8, virtual false, abstract: false, final false
  inline int32_t ReadEnum(::UnityEngine::UIElements::StyleSheets::StyleEnumType enumType, int32_t index);

  /// @brief Method ReadEnum, addr 0x71c7cb4, size 0xc0, virtual false, abstract: false, final false
  static inline int32_t ReadEnum(::UnityEngine::UIElements::StyleSheets::StyleEnumType enumType, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue value);

  /// @brief Method ReadFloat, addr 0x71c4644, size 0x74, virtual false, abstract: false, final false
  inline float_t ReadFloat(int32_t index);

  /// @brief Method ReadFont, addr 0x71c4f68, size 0x37c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Font> ReadFont(int32_t index);

  /// @brief Method ReadFontDefinition, addr 0x71c49f8, size 0x570, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::FontDefinition ReadFontDefinition(int32_t index);

  /// @brief Method ReadInt, addr 0x71c46b8, size 0x90, virtual false, abstract: false, final false
  inline int32_t ReadInt(int32_t index);

  /// @brief Method ReadLength, addr 0x71c3970, size 0xd0, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Length ReadLength(int32_t index);

  /// @brief Method ReadListEasingFunction, addr 0x71c701c, size 0x1a8, virtual false, abstract: false, final false
  inline void ReadListEasingFunction(::System::Collections::Generic::List_1<::UnityEngine::UIElements::EasingFunction>* list, int32_t index);

  /// @brief Method ReadListFilterFunction, addr 0x71c7328, size 0x494, virtual false, abstract: false, final false
  inline void ReadListFilterFunction(::System::Collections::Generic::List_1<::UnityEngine::UIElements::FilterFunction>* list, int32_t index);

  /// @brief Method ReadListStylePropertyName, addr 0x71c77bc, size 0x1b8, virtual false, abstract: false, final false
  inline void ReadListStylePropertyName(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>* list, int32_t index);

  /// @brief Method ReadListTimeValue, addr 0x71c71c4, size 0x164, virtual false, abstract: false, final false
  inline void ReadListTimeValue(::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>* list, int32_t index);

  /// @brief Method ReadMaterialDefinition, addr 0x71c52e4, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::MaterialDefinition ReadMaterialDefinition(int32_t index);

  /// @brief Method ReadRatio, addr 0x71c7974, size 0x1fc, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleRatio ReadRatio(int32_t index);

  /// @brief Method ReadRotate, addr 0x71c4080, size 0x188, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Rotate ReadRotate(int32_t index);

  /// @brief Method ReadRotate, addr 0x71c4208, size 0x1c0, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Rotate ReadRotate(int32_t valCount, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val1,
                                                             ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val2, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val3,
                                                             ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val4);

  /// @brief Method ReadScale, addr 0x71c43c8, size 0x104, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Scale ReadScale(int32_t index);

  /// @brief Method ReadScale, addr 0x71c44cc, size 0x178, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Scale ReadScale(int32_t valCount, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val1,
                                                           ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val2, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val3);

  /// @brief Method ReadTextAutoSize, addr 0x71c6720, size 0x138, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TextAutoSize ReadTextAutoSize(int32_t index);

  /// @brief Method ReadTextAutoSize, addr 0x71c6858, size 0x14c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::TextAutoSize ReadTextAutoSize(int32_t valCount, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val1,
                                                                         ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val2,
                                                                         ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val3);

  /// @brief Method ReadTextShadow, addr 0x71c62c8, size 0x190, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TextShadow ReadTextShadow(int32_t index);

  /// @brief Method ReadTextShadow, addr 0x71c6458, size 0x2c8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::TextShadow ReadTextShadow(int32_t valCount, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val1,
                                                                     ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val2, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val3,
                                                                     ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val4);

  /// @brief Method ReadTimeValue, addr 0x71c3a40, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TimeValue ReadTimeValue(int32_t index);

  /// @brief Method ReadTransformOrigin, addr 0x71c3e04, size 0x138, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TransformOrigin ReadTransformOrigin(int32_t index);

  /// @brief Method ReadTransformOrigin, addr 0x71c3f3c, size 0x144, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::TransformOrigin ReadTransformOrigin(int32_t valCount, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val1,
                                                                               ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val2,
                                                                               ::UnityEngine::UIElements::StyleSheets::StylePropertyValue zVvalue);

  /// @brief Method ReadTransformOriginEnum, addr 0x71c7b70, size 0x144, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Length ReadTransformOriginEnum(::UnityEngine::UIElements::StyleSheets::StylePropertyValue value, ::by_ref<bool> isVertical, ::by_ref<bool> isHorizontal);

  /// @brief Method ReadTranslate, addr 0x71c3ac4, size 0x134, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Translate ReadTranslate(int32_t index);

  /// @brief Method ReadTranslate, addr 0x71c3bf8, size 0x20c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Translate ReadTranslate(int32_t valCount, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val1,
                                                                   ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val2, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val3);

  /// @brief Method SetContext, addr 0x71c2f08, size 0x38, virtual false, abstract: false, final false
  inline void SetContext(::UnityEngine::UIElements::StyleSheet* sheet, ::UnityEngine::UIElements::StyleComplexSelector* selector, ::UnityEngine::UIElements::StyleVariableContext* varContext,
                         float_t dpiScaling);

  /// @brief Method SetCurrentProperty, addr 0x71c3350, size 0xa0, virtual false, abstract: false, final false
  inline void SetCurrentProperty();

  /// @brief Method SetInlineContext, addr 0x71c3314, size 0xc, virtual false, abstract: false, final false
  inline void SetInlineContext(::UnityEngine::UIElements::StyleSheet* sheet, ::ArrayW<::UnityEngine::UIElements::StyleProperty*> properties, float_t dpiScaling);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method TryGetImageSourceFromValue, addr 0x71c559c, size 0xa2c, virtual false, abstract: false, final false
  static inline bool TryGetImageSourceFromValue(::UnityEngine::UIElements::StyleSheets::StylePropertyValue propertyValue, float_t dpiScaling,
                                                ::by_ref<::UnityEngine::UIElements::StyleSheets::ImageSource> source);

  /// @brief Method TryReadEnum, addr 0x71c7e1c, size 0xb8, virtual false, abstract: false, final false
  static inline bool TryReadEnum(::UnityEngine::UIElements::StyleSheets::StyleEnumType enumType, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue value, ::by_ref<int32_t> intValue);

  constexpr float_t const& __cordl_internal_get__dpiScaling_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__dpiScaling_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__m_CurrentValueIndex_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__m_CurrentValueIndex_k__BackingField();

  constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyId const& __cordl_internal_get__propertyId_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyId& __cordl_internal_get__propertyId_k__BackingField();

  constexpr ::UnityEngine::UIElements::StyleProperty* const& __cordl_internal_get__property_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::StyleProperty*& __cordl_internal_get__property_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__valueCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__valueCount_k__BackingField();

  constexpr int32_t const& __cordl_internal_get_m_CurrentPropertyIndex() const;

  constexpr int32_t& __cordl_internal_get_m_CurrentPropertyIndex();

  constexpr ::ArrayW<::UnityEngine::UIElements::StyleProperty*> const& __cordl_internal_get_m_Properties() const;

  constexpr ::ArrayW<::UnityEngine::UIElements::StyleProperty*>& __cordl_internal_get_m_Properties();

  constexpr ::UnityEngine::UIElements::StyleVariableResolver* const& __cordl_internal_get_m_Resolver() const;

  constexpr ::UnityEngine::UIElements::StyleVariableResolver*& __cordl_internal_get_m_Resolver();

  constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet> const& __cordl_internal_get_m_Sheet() const;

  constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet>& __cordl_internal_get_m_Sheet();

  constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_m_ValueCount() const;

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_m_ValueCount();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* const& __cordl_internal_get_m_Values() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>*& __cordl_internal_get_m_Values();

  constexpr void __cordl_internal_set__dpiScaling_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__m_CurrentValueIndex_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__propertyId_k__BackingField(::UnityEngine::UIElements::StyleSheets::StylePropertyId value);

  constexpr void __cordl_internal_set__property_k__BackingField(::UnityEngine::UIElements::StyleProperty* value);

  constexpr void __cordl_internal_set__valueCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_m_CurrentPropertyIndex(int32_t value);

  constexpr void __cordl_internal_set_m_Properties(::ArrayW<::UnityEngine::UIElements::StyleProperty*> value);

  constexpr void __cordl_internal_set_m_Resolver(::UnityEngine::UIElements::StyleVariableResolver* value);

  constexpr void __cordl_internal_set_m_Sheet(::UnityW<::UnityEngine::UIElements::StyleSheet> value);

  constexpr void __cordl_internal_set_m_ValueCount(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set_m_Values(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* value);

  /// @brief Method .ctor, addr 0x71c7ed4, size 0xec, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction* getStaticF_getCursorIdFunc();

  /// [CompilerGenerated]
  /// @brief Method get_dpiScaling, addr 0x71c2ef8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_dpiScaling();

  /// [CompilerGenerated]
  /// @brief Method get_m_CurrentValueIndex, addr 0x71c2eb8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_m_CurrentValueIndex();

  /// [CompilerGenerated]
  /// @brief Method get_property, addr 0x71c2ec8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleProperty* get_property();

  /// [CompilerGenerated]
  /// @brief Method get_propertyId, addr 0x71c2ed8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleSheets::StylePropertyId get_propertyId();

  /// [CompilerGenerated]
  /// @brief Method get_valueCount, addr 0x71c2ee8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_valueCount();

  static inline void setStaticF_getCursorIdFunc(::UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction* value);

  /// [CompilerGenerated]
  /// @brief Method set_dpiScaling, addr 0x71c2f00, size 0x8, virtual false, abstract: false, final false
  inline void set_dpiScaling(float_t value);

  /// [CompilerGenerated]
  /// @brief Method set_m_CurrentValueIndex, addr 0x71c2ec0, size 0x8, virtual false, abstract: false, final false
  inline void set_m_CurrentValueIndex(int32_t value);

  /// [CompilerGenerated]
  /// @brief Method set_property, addr 0x71c2ed0, size 0x8, virtual false, abstract: false, final false
  inline void set_property(::UnityEngine::UIElements::StyleProperty* value);

  /// [CompilerGenerated]
  /// @brief Method set_propertyId, addr 0x71c2ee0, size 0x8, virtual false, abstract: false, final false
  inline void set_propertyId(::UnityEngine::UIElements::StyleSheets::StylePropertyId value);

  /// [CompilerGenerated]
  /// @brief Method set_valueCount, addr 0x71c2ef0, size 0x8, virtual false, abstract: false, final false
  inline void set_valueCount(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StylePropertyReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyReader", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StylePropertyReader(StylePropertyReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyReader", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StylePropertyReader(StylePropertyReader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5578 };

  /// @brief Field m_Values, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* ___m_Values;

  /// @brief Field m_ValueCount, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___m_ValueCount;

  /// @brief Field m_Resolver, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleVariableResolver* ___m_Resolver;

  /// @brief Field m_Sheet, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::StyleSheet> ___m_Sheet;

  /// @brief Field m_Properties, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::StyleProperty*> ___m_Properties;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <m_CurrentValueIndex>k__BackingField, offset: 0x38, size: 0x4, def value: None
  int32_t ____m_CurrentValueIndex_k__BackingField;

  /// @brief Field m_CurrentPropertyIndex, offset: 0x3c, size: 0x4, def value: None
  int32_t ___m_CurrentPropertyIndex;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <property>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleProperty* ____property_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <propertyId>k__BackingField, offset: 0x48, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleSheets::StylePropertyId ____propertyId_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <valueCount>k__BackingField, offset: 0x4c, size: 0x4, def value: None
  int32_t ____valueCount_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <dpiScaling>k__BackingField, offset: 0x50, size: 0x4, def value: None
  float_t ____dpiScaling_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::StylePropertyReader, ___m_Values) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::StylePropertyReader, ___m_ValueCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::StylePropertyReader, ___m_Resolver) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::StylePropertyReader, ___m_Sheet) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::StylePropertyReader, ___m_Properties) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::StylePropertyReader, ____m_CurrentValueIndex_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::StylePropertyReader, ___m_CurrentPropertyIndex) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::StylePropertyReader, ____property_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::StylePropertyReader, ____propertyId_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::StylePropertyReader, ____valueCount_k__BackingField) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::StylePropertyReader, ____dpiScaling_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::StyleSheets::StylePropertyReader) == 0x58, "Size mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets
