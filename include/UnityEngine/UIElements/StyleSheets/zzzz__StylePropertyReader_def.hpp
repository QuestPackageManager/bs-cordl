#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/StylePropertyReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
struct StylePropertyValue;
}
namespace UnityEngine::UIElements::StyleSheets {
class __StylePropertyReader__GetCursorIdFunction;
}
namespace UnityEngine::UIElements {
struct Angle;
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
struct FontDefinition;
}
namespace UnityEngine::UIElements {
struct Length;
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
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
class StylePropertyReader;
}
namespace UnityEngine::UIElements::StyleSheets {
class __StylePropertyReader__GetCursorIdFunction;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleSheets::StylePropertyReader);
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleSheets::__StylePropertyReader__GetCursorIdFunction);
// Type: ::GetCursorIdFunction
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// CS Name: ::StylePropertyReader::GetCursorIdFunction*
class CORDL_TYPE __StylePropertyReader__GetCursorIdFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x357fa7c, size 0x14, virtual true, abstract: false, final false
  inline int32_t Invoke(::UnityEngine::UIElements::StyleSheet* sheet, ::UnityEngine::UIElements::StyleValueHandle handle);

  static inline ::UnityEngine::UIElements::StyleSheets::__StylePropertyReader__GetCursorIdFunction* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x357f94c, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StylePropertyReader__GetCursorIdFunction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__StylePropertyReader__GetCursorIdFunction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StylePropertyReader__GetCursorIdFunction(__StylePropertyReader__GetCursorIdFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StylePropertyReader__GetCursorIdFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StylePropertyReader__GetCursorIdFunction(__StylePropertyReader__GetCursorIdFunction const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::__StylePropertyReader__GetCursorIdFunction, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets
// Type: UnityEngine.UIElements.StyleSheets::StylePropertyReader
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 92, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// CS Name: ::UnityEngine.UIElements.StyleSheets::StylePropertyReader*
class CORDL_TYPE StylePropertyReader : public ::System::Object {
public:
  // Declarations
  using GetCursorIdFunction = ::UnityEngine::UIElements::StyleSheets::__StylePropertyReader__GetCursorIdFunction;

  /// @brief Field <dpiScaling>k__BackingField, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__dpiScaling_k__BackingField, put = __cordl_internal_set__dpiScaling_k__BackingField)) float_t _dpiScaling_k__BackingField;

  /// @brief Field <propertyId>k__BackingField, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__propertyId_k__BackingField,
                      put = __cordl_internal_set__propertyId_k__BackingField))::UnityEngine::UIElements::StyleSheets::StylePropertyId _propertyId_k__BackingField;

  /// @brief Field <property>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__property_k__BackingField, put = __cordl_internal_set__property_k__BackingField))::UnityEngine::UIElements::StyleProperty* _property_k__BackingField;

  /// @brief Field <valueCount>k__BackingField, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__valueCount_k__BackingField, put = __cordl_internal_set__valueCount_k__BackingField)) int32_t _valueCount_k__BackingField;

  __declspec(property(get = get_dpiScaling, put = set_dpiScaling)) float_t dpiScaling;

  /// @brief Field getCursorIdFunc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_getCursorIdFunc, put = setStaticF_getCursorIdFunc))::UnityEngine::UIElements::StyleSheets::__StylePropertyReader__GetCursorIdFunction* getCursorIdFunc;

  /// @brief Field m_CurrentPropertyIndex, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CurrentPropertyIndex, put = __cordl_internal_set_m_CurrentPropertyIndex)) int32_t m_CurrentPropertyIndex;

  /// @brief Field m_CurrentValueIndex, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CurrentValueIndex, put = __cordl_internal_set_m_CurrentValueIndex)) int32_t m_CurrentValueIndex;

  /// @brief Field m_Properties, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Properties,
                      put = __cordl_internal_set_m_Properties))::ArrayW<::UnityEngine::UIElements::StyleProperty*, ::Array<::UnityEngine::UIElements::StyleProperty*>*> m_Properties;

  /// @brief Field m_PropertyIds, offset 0x38, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_PropertyIds,
      put = __cordl_internal_set_m_PropertyIds))::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> m_PropertyIds;

  /// @brief Field m_Resolver, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Resolver, put = __cordl_internal_set_m_Resolver))::UnityEngine::UIElements::StyleVariableResolver* m_Resolver;

  /// @brief Field m_Sheet, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Sheet, put = __cordl_internal_set_m_Sheet))::UnityW<::UnityEngine::UIElements::StyleSheet> m_Sheet;

  /// @brief Field m_ValueCount, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ValueCount, put = __cordl_internal_set_m_ValueCount))::System::Collections::Generic::List_1<int32_t>* m_ValueCount;

  /// @brief Field m_Values, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Values,
                      put = __cordl_internal_set_m_Values))::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* m_Values;

  __declspec(property(get = get_property, put = set_property))::UnityEngine::UIElements::StyleProperty* property;

  __declspec(property(get = get_propertyId, put = set_propertyId))::UnityEngine::UIElements::StyleSheets::StylePropertyId propertyId;

  __declspec(property(get = get_valueCount, put = set_valueCount)) int32_t valueCount;

  /// @brief Method GetValue, addr 0x357ca88, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleSheets::StylePropertyValue GetValue(int32_t index);

  /// @brief Method GetValueType, addr 0x357a38c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleValueType GetValueType(int32_t index);

  /// @brief Method IsKeyword, addr 0x357a2e8, size 0xa4, virtual false, abstract: false, final false
  inline bool IsKeyword(int32_t index, ::UnityEngine::UIElements::StyleValueKeyword keyword);

  /// @brief Method IsValueType, addr 0x357a254, size 0x94, virtual false, abstract: false, final false
  inline bool IsValueType(int32_t index, ::UnityEngine::UIElements::StyleValueType type);

  /// @brief Method LoadProperties, addr 0x357c568, size 0x434, virtual false, abstract: false, final false
  inline void LoadProperties();

  /// @brief Method MoveNextProperty, addr 0x357c9ac, size 0x2c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleSheets::StylePropertyId MoveNextProperty();

  static inline ::UnityEngine::UIElements::StyleSheets::StylePropertyReader* New_ctor();

  /// @brief Method ReadAngle, addr 0x357f740, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Angle ReadAngle(::UnityEngine::UIElements::StyleSheets::StylePropertyValue value);

  /// @brief Method ReadAsString, addr 0x357b2fc, size 0x60, virtual false, abstract: false, final false
  inline ::StringW ReadAsString(int32_t index);

  /// @brief Method ReadBackground, addr 0x357e1c0, size 0x270, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Background ReadBackground(int32_t index);

  /// @brief Method ReadColor, addr 0x357aa2c, size 0x104, virtual false, abstract: false, final false
  inline ::UnityEngine::Color ReadColor(int32_t index);

  /// @brief Method ReadCursor, addr 0x357eae4, size 0x2ac, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Cursor ReadCursor(int32_t index);

  /// @brief Method ReadEnum, addr 0x357d858, size 0xfc, virtual false, abstract: false, final false
  inline int32_t ReadEnum(::UnityEngine::UIElements::StyleSheets::StyleEnumType enumType, int32_t index);

  /// @brief Method ReadEnum, addr 0x357f678, size 0xc8, virtual false, abstract: false, final false
  static inline int32_t ReadEnum(::UnityEngine::UIElements::StyleSheets::StyleEnumType enumType, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue value);

  /// @brief Method ReadFloat, addr 0x357a500, size 0x68, virtual false, abstract: false, final false
  inline float_t ReadFloat(int32_t index);

  /// @brief Method ReadFont, addr 0x357de7c, size 0x344, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Font> ReadFont(int32_t index);

  /// @brief Method ReadFontDefinition, addr 0x357d954, size 0x528, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::FontDefinition ReadFontDefinition(int32_t index);

  /// @brief Method ReadInt, addr 0x357d6e0, size 0x84, virtual false, abstract: false, final false
  inline int32_t ReadInt(int32_t index);

  /// @brief Method ReadLength, addr 0x357a40c, size 0xf4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Length ReadLength(int32_t index);

  /// @brief Method ReadListEasingFunction, addr 0x357f004, size 0x1f0, virtual false, abstract: false, final false
  inline void ReadListEasingFunction(::System::Collections::Generic::List_1<::UnityEngine::UIElements::EasingFunction>* list, int32_t index);

  /// @brief Method ReadListStylePropertyName, addr 0x357f388, size 0x198, virtual false, abstract: false, final false
  inline void ReadListStylePropertyName(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>* list, int32_t index);

  /// @brief Method ReadListTimeValue, addr 0x357f1f4, size 0x194, virtual false, abstract: false, final false
  inline void ReadListTimeValue(::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>* list, int32_t index);

  /// @brief Method ReadRotate, addr 0x357d1f4, size 0x124, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Rotate ReadRotate(int32_t index);

  /// @brief Method ReadRotate, addr 0x357d318, size 0xcc, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Rotate ReadRotate(int32_t valCount, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val1,
                                                             ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val2, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val3,
                                                             ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val4);

  /// @brief Method ReadScale, addr 0x357d3e4, size 0x100, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Scale ReadScale(int32_t index);

  /// @brief Method ReadScale, addr 0x357d4e4, size 0x1fc, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Scale ReadScale(int32_t valCount, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val1,
                                                           ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val2, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val3);

  /// @brief Method ReadTextShadow, addr 0x357ed90, size 0x274, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TextShadow ReadTextShadow(int32_t index);

  /// @brief Method ReadTimeValue, addr 0x357b264, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TimeValue ReadTimeValue(int32_t index);

  /// @brief Method ReadTransformOrigin, addr 0x357cefc, size 0x134, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TransformOrigin ReadTransformOrigin(int32_t index);

  /// @brief Method ReadTransformOrigin, addr 0x357d030, size 0x1c4, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::TransformOrigin ReadTransformOrigin(int32_t valCount, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val1,
                                                                               ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val2,
                                                                               ::UnityEngine::UIElements::StyleSheets::StylePropertyValue zVvalue);

  /// @brief Method ReadTransformOriginEnum, addr 0x357f520, size 0x158, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Length ReadTransformOriginEnum(::UnityEngine::UIElements::StyleSheets::StylePropertyValue value, ByRef<bool> isVertical, ByRef<bool> isHorizontal);

  /// @brief Method ReadTranslate, addr 0x357cb44, size 0x130, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Translate ReadTranslate(int32_t index);

  /// @brief Method ReadTranslate, addr 0x357cc74, size 0x288, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Translate ReadTranslate(int32_t valCount, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val1,
                                                                   ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val2, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val3);

  /// @brief Method SetContext, addr 0x357c300, size 0xb8, virtual false, abstract: false, final false
  inline void SetContext(::UnityEngine::UIElements::StyleSheet* sheet, ::UnityEngine::UIElements::StyleComplexSelector* selector, ::UnityEngine::UIElements::StyleVariableContext* varContext,
                         float_t dpiScaling);

  /// @brief Method SetCurrentProperty, addr 0x357c9d8, size 0xb0, virtual false, abstract: false, final false
  inline void SetCurrentProperty();

  /// @brief Method SetInlineContext, addr 0x357c99c, size 0x10, virtual false, abstract: false, final false
  inline void SetInlineContext(::UnityEngine::UIElements::StyleSheet* sheet, ::ArrayW<::UnityEngine::UIElements::StyleProperty*, ::Array<::UnityEngine::UIElements::StyleProperty*>*> properties,
                               ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> propertyIds, float_t dpiScaling);

  /// @brief Method TryGetImageSourceFromValue, addr 0x357e430, size 0x6b4, virtual false, abstract: false, final false
  static inline bool TryGetImageSourceFromValue(::UnityEngine::UIElements::StyleSheets::StylePropertyValue propertyValue, float_t dpiScaling,
                                                ByRef<::UnityEngine::UIElements::StyleSheets::ImageSource> source);

  constexpr float_t const& __cordl_internal_get__dpiScaling_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__dpiScaling_k__BackingField();

  constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyId const& __cordl_internal_get__propertyId_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyId& __cordl_internal_get__propertyId_k__BackingField();

  constexpr ::UnityEngine::UIElements::StyleProperty*& __cordl_internal_get__property_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleProperty*> const& __cordl_internal_get__property_k__BackingField() const;

  constexpr int32_t const& __cordl_internal_get__valueCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__valueCount_k__BackingField();

  constexpr int32_t const& __cordl_internal_get_m_CurrentPropertyIndex() const;

  constexpr int32_t& __cordl_internal_get_m_CurrentPropertyIndex();

  constexpr int32_t const& __cordl_internal_get_m_CurrentValueIndex() const;

  constexpr int32_t& __cordl_internal_get_m_CurrentValueIndex();

  constexpr ::ArrayW<::UnityEngine::UIElements::StyleProperty*, ::Array<::UnityEngine::UIElements::StyleProperty*>*> const& __cordl_internal_get_m_Properties() const;

  constexpr ::ArrayW<::UnityEngine::UIElements::StyleProperty*, ::Array<::UnityEngine::UIElements::StyleProperty*>*>& __cordl_internal_get_m_Properties();

  constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> const& __cordl_internal_get_m_PropertyIds() const;

  constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>& __cordl_internal_get_m_PropertyIds();

  constexpr ::UnityEngine::UIElements::StyleVariableResolver*& __cordl_internal_get_m_Resolver();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleVariableResolver*> const& __cordl_internal_get_m_Resolver() const;

  constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet> const& __cordl_internal_get_m_Sheet() const;

  constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet>& __cordl_internal_get_m_Sheet();

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_m_ValueCount();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __cordl_internal_get_m_ValueCount() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>*& __cordl_internal_get_m_Values();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>*> const& __cordl_internal_get_m_Values() const;

  constexpr void __cordl_internal_set__dpiScaling_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__propertyId_k__BackingField(::UnityEngine::UIElements::StyleSheets::StylePropertyId value);

  constexpr void __cordl_internal_set__property_k__BackingField(::UnityEngine::UIElements::StyleProperty* value);

  constexpr void __cordl_internal_set__valueCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_m_CurrentPropertyIndex(int32_t value);

  constexpr void __cordl_internal_set_m_CurrentValueIndex(int32_t value);

  constexpr void __cordl_internal_set_m_Properties(::ArrayW<::UnityEngine::UIElements::StyleProperty*, ::Array<::UnityEngine::UIElements::StyleProperty*>*> value);

  constexpr void __cordl_internal_set_m_PropertyIds(::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> value);

  constexpr void __cordl_internal_set_m_Resolver(::UnityEngine::UIElements::StyleVariableResolver* value);

  constexpr void __cordl_internal_set_m_Sheet(::UnityW<::UnityEngine::UIElements::StyleSheet> value);

  constexpr void __cordl_internal_set_m_ValueCount(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set_m_Values(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* value);

  /// @brief Method .ctor, addr 0x357f85c, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::StyleSheets::__StylePropertyReader__GetCursorIdFunction* getStaticF_getCursorIdFunc();

  /// @brief Method get_dpiScaling, addr 0x357c2f0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_dpiScaling();

  /// @brief Method get_property, addr 0x357c2c0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleProperty* get_property();

  /// @brief Method get_propertyId, addr 0x357c2d0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleSheets::StylePropertyId get_propertyId();

  /// @brief Method get_valueCount, addr 0x357c2e0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_valueCount();

  static inline void setStaticF_getCursorIdFunc(::UnityEngine::UIElements::StyleSheets::__StylePropertyReader__GetCursorIdFunction* value);

  /// @brief Method set_dpiScaling, addr 0x357c2f8, size 0x8, virtual false, abstract: false, final false
  inline void set_dpiScaling(float_t value);

  /// @brief Method set_property, addr 0x357c2c8, size 0x8, virtual false, abstract: false, final false
  inline void set_property(::UnityEngine::UIElements::StyleProperty* value);

  /// @brief Method set_propertyId, addr 0x357c2d8, size 0x8, virtual false, abstract: false, final false
  inline void set_propertyId(::UnityEngine::UIElements::StyleSheets::StylePropertyId value);

  /// @brief Method set_valueCount, addr 0x357c2e8, size 0x8, virtual false, abstract: false, final false
  inline void set_valueCount(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StylePropertyReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StylePropertyReader(StylePropertyReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StylePropertyReader(StylePropertyReader const&) = delete;

  /// @brief Field m_Values, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* ___m_Values;

  /// @brief Field m_ValueCount, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___m_ValueCount;

  /// @brief Field m_Resolver, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleVariableResolver* ___m_Resolver;

  /// @brief Field m_Sheet, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::StyleSheet> ___m_Sheet;

  /// @brief Field m_Properties, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::StyleProperty*, ::Array<::UnityEngine::UIElements::StyleProperty*>*> ___m_Properties;

  /// @brief Field m_PropertyIds, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> ___m_PropertyIds;

  /// @brief Field m_CurrentValueIndex, offset: 0x40, size: 0x4, def value: None
  int32_t ___m_CurrentValueIndex;

  /// @brief Field m_CurrentPropertyIndex, offset: 0x44, size: 0x4, def value: None
  int32_t ___m_CurrentPropertyIndex;

  /// @brief Field <property>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleProperty* ____property_k__BackingField;

  /// @brief Field <propertyId>k__BackingField, offset: 0x50, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleSheets::StylePropertyId ____propertyId_k__BackingField;

  /// @brief Field <valueCount>k__BackingField, offset: 0x54, size: 0x4, def value: None
  int32_t ____valueCount_k__BackingField;

  /// @brief Field <dpiScaling>k__BackingField, offset: 0x58, size: 0x4, def value: None
  float_t ____dpiScaling_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::StylePropertyReader, 0x60>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::StylePropertyReader, ___m_Values) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::StylePropertyReader, ___m_ValueCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::StylePropertyReader, ___m_Resolver) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::StylePropertyReader, ___m_Sheet) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::StylePropertyReader, ___m_Properties) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::StylePropertyReader, ___m_PropertyIds) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::StylePropertyReader, ___m_CurrentValueIndex) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::StylePropertyReader, ___m_CurrentPropertyIndex) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::StylePropertyReader, ____property_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::StylePropertyReader, ____propertyId_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::StylePropertyReader, ____valueCount_k__BackingField) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::StylePropertyReader, ____dpiScaling_k__BackingField) == 0x58, "Offset mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets
NEED_NO_BOX(::UnityEngine::UIElements::StyleSheets::StylePropertyReader);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*, "UnityEngine.UIElements.StyleSheets", "StylePropertyReader");
NEED_NO_BOX(::UnityEngine::UIElements::StyleSheets::__StylePropertyReader__GetCursorIdFunction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::__StylePropertyReader__GetCursorIdFunction*, "UnityEngine.UIElements.StyleSheets", "StylePropertyReader/GetCursorIdFunction");
