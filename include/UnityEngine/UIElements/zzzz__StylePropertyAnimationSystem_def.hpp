#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StylePropertyAnimationSystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_def.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundPosition_def.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundRepeat_def.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundSize_def.hpp"
#include "UnityEngine/UIElements/zzzz__Background_def.hpp"
#include "UnityEngine/UIElements/zzzz__FontDefinition_def.hpp"
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
#include "UnityEngine/UIElements/zzzz__MaterialDefinition_def.hpp"
#include "UnityEngine/UIElements/zzzz__Ratio_def.hpp"
#include "UnityEngine/UIElements/zzzz__Rotate_def.hpp"
#include "UnityEngine/UIElements/zzzz__Scale_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextShadow_def.hpp"
#include "UnityEngine/UIElements/zzzz__TransformOrigin_def.hpp"
#include "UnityEngine/UIElements/zzzz__Translate_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StylePropertyAnimationSystem)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace UnityEngine::Pool {
template <typename T> class ObjectPool_1;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
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
class BaseVisualElementPanel;
}
namespace UnityEngine::UIElements {
class ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class FilterFunctionDefinition;
}
namespace UnityEngine::UIElements {
struct FilterFunction;
}
namespace UnityEngine::UIElements {
struct FilterParameter;
}
namespace UnityEngine::UIElements {
struct FontDefinition;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
class IStylePropertyAnimationSystem;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine::UIElements {
struct MaterialDefinition;
}
namespace UnityEngine::UIElements {
struct MaterialPropertyValue;
}
namespace UnityEngine::UIElements {
struct Ratio;
}
namespace UnityEngine::UIElements {
struct Rotate;
}
namespace UnityEngine::UIElements {
struct Scale;
}
namespace UnityEngine::UIElements {
template <typename TTimingData, typename TStyleData> struct StylePropertyAnimationSystem_AnimationDataSet_2;
}
namespace UnityEngine::UIElements {
struct StylePropertyAnimationSystem_ElementPropertyPair;
}
namespace UnityEngine::UIElements {
struct StylePropertyAnimationSystem_TransitionState;
}
namespace UnityEngine::UIElements {
class StylePropertyAnimationSystem_ValuesBackgroundPosition;
}
namespace UnityEngine::UIElements {
class StylePropertyAnimationSystem_ValuesBackgroundRepeat;
}
namespace UnityEngine::UIElements {
class StylePropertyAnimationSystem_ValuesBackgroundSize;
}
namespace UnityEngine::UIElements {
class StylePropertyAnimationSystem_ValuesBackground;
}
namespace UnityEngine::UIElements {
class StylePropertyAnimationSystem_ValuesColor;
}
namespace UnityEngine::UIElements {
template <typename T> class StylePropertyAnimationSystem_ValuesDiscrete_1;
}
namespace UnityEngine::UIElements {
class StylePropertyAnimationSystem_ValuesEnum;
}
namespace UnityEngine::UIElements {
class StylePropertyAnimationSystem_ValuesFloat;
}
namespace UnityEngine::UIElements {
class StylePropertyAnimationSystem_ValuesFontDefinition;
}
namespace UnityEngine::UIElements {
class StylePropertyAnimationSystem_ValuesFont;
}
namespace UnityEngine::UIElements {
class StylePropertyAnimationSystem_ValuesInt;
}
namespace UnityEngine::UIElements {
class StylePropertyAnimationSystem_ValuesLength;
}
namespace UnityEngine::UIElements {
class StylePropertyAnimationSystem_ValuesListFilterFunction;
}
namespace UnityEngine::UIElements {
class StylePropertyAnimationSystem_ValuesMaterialDefinition;
}
namespace UnityEngine::UIElements {
class StylePropertyAnimationSystem_ValuesRatio;
}
namespace UnityEngine::UIElements {
class StylePropertyAnimationSystem_ValuesRotate;
}
namespace UnityEngine::UIElements {
class StylePropertyAnimationSystem_ValuesScale;
}
namespace UnityEngine::UIElements {
class StylePropertyAnimationSystem_ValuesTextShadow;
}
namespace UnityEngine::UIElements {
class StylePropertyAnimationSystem_ValuesTransformOrigin;
}
namespace UnityEngine::UIElements {
class StylePropertyAnimationSystem_ValuesTranslate;
}
namespace UnityEngine::UIElements {
template <typename T> class StylePropertyAnimationSystem_Values_1;
}
namespace UnityEngine::UIElements {
class StylePropertyAnimationSystem_Values;
}
namespace UnityEngine::UIElements {
struct TextShadow;
}
namespace UnityEngine::UIElements {
struct TransformOrigin;
}
namespace UnityEngine::UIElements {
template <typename T> class TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c;
}
namespace UnityEngine::UIElements {
struct Translate;
}
namespace UnityEngine::UIElements {
template <typename T> struct Values_1_StylePropertyAnimationSystem_EmptyData;
}
namespace UnityEngine::UIElements {
template <typename T> struct Values_1_StylePropertyAnimationSystem_StyleData;
}
namespace UnityEngine::UIElements {
template <typename T> struct Values_1_StylePropertyAnimationSystem_TimingData;
}
namespace UnityEngine::UIElements {
template <typename T> class Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Font;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StylePropertyAnimationSystem_TransitionState;
}
namespace UnityEngine::UIElements {
class ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer;
}
namespace UnityEngine::UIElements {
class StylePropertyAnimationSystem;
}
namespace UnityEngine::UIElements {
class StylePropertyAnimationSystem_Values;
}
namespace UnityEngine::UIElements {
class StylePropertyAnimationSystem_ValuesBackground;
}
namespace UnityEngine::UIElements {
class StylePropertyAnimationSystem_ValuesBackgroundPosition;
}
namespace UnityEngine::UIElements {
class StylePropertyAnimationSystem_ValuesBackgroundRepeat;
}
namespace UnityEngine::UIElements {
class StylePropertyAnimationSystem_ValuesBackgroundSize;
}
namespace UnityEngine::UIElements {
class StylePropertyAnimationSystem_ValuesColor;
}
namespace UnityEngine::UIElements {
template <typename T> class StylePropertyAnimationSystem_ValuesDiscrete_1;
}
namespace UnityEngine::UIElements {
class StylePropertyAnimationSystem_ValuesEnum;
}
namespace UnityEngine::UIElements {
class StylePropertyAnimationSystem_ValuesFloat;
}
namespace UnityEngine::UIElements {
class StylePropertyAnimationSystem_ValuesFont;
}
namespace UnityEngine::UIElements {
class StylePropertyAnimationSystem_ValuesFontDefinition;
}
namespace UnityEngine::UIElements {
class StylePropertyAnimationSystem_ValuesInt;
}
namespace UnityEngine::UIElements {
class StylePropertyAnimationSystem_ValuesLength;
}
namespace UnityEngine::UIElements {
class StylePropertyAnimationSystem_ValuesListFilterFunction;
}
namespace UnityEngine::UIElements {
class StylePropertyAnimationSystem_ValuesMaterialDefinition;
}
namespace UnityEngine::UIElements {
class StylePropertyAnimationSystem_ValuesRatio;
}
namespace UnityEngine::UIElements {
class StylePropertyAnimationSystem_ValuesRotate;
}
namespace UnityEngine::UIElements {
class StylePropertyAnimationSystem_ValuesScale;
}
namespace UnityEngine::UIElements {
class StylePropertyAnimationSystem_ValuesTextShadow;
}
namespace UnityEngine::UIElements {
class StylePropertyAnimationSystem_ValuesTransformOrigin;
}
namespace UnityEngine::UIElements {
class StylePropertyAnimationSystem_ValuesTranslate;
}
namespace UnityEngine::UIElements {
template <typename T> class StylePropertyAnimationSystem_Values_1;
}
namespace UnityEngine::UIElements {
template <typename T> class TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c;
}
namespace UnityEngine::UIElements {
template <typename T> class Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState;
}
namespace UnityEngine::UIElements {
template <typename TTimingData, typename TStyleData> struct StylePropertyAnimationSystem_AnimationDataSet_2;
}
namespace UnityEngine::UIElements {
struct StylePropertyAnimationSystem_ElementPropertyPair;
}
namespace UnityEngine::UIElements {
template <typename T> struct Values_1_StylePropertyAnimationSystem_EmptyData;
}
namespace UnityEngine::UIElements {
template <typename T> struct Values_1_StylePropertyAnimationSystem_StyleData;
}
namespace UnityEngine::UIElements {
template <typename T> struct Values_1_StylePropertyAnimationSystem_TimingData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StylePropertyAnimationSystem_TransitionState);
MARK_REF_T(::UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer*);
MARK_REF_T(::UnityEngine::UIElements::StylePropertyAnimationSystem*);
MARK_REF_T(::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*);
MARK_REF_T(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground*);
MARK_REF_T(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition*);
MARK_REF_T(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat*);
MARK_REF_T(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize*);
MARK_REF_T(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor*);
MARK_GEN_REF_T_PTR(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesDiscrete_1);
MARK_REF_T(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesEnum*);
MARK_REF_T(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat*);
MARK_REF_T(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont*);
MARK_REF_T(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition*);
MARK_REF_T(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt*);
MARK_REF_T(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength*);
MARK_REF_T(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesListFilterFunction*);
MARK_REF_T(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesMaterialDefinition*);
MARK_REF_T(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRatio*);
MARK_REF_T(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate*);
MARK_REF_T(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale*);
MARK_REF_T(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow*);
MARK_REF_T(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin*);
MARK_REF_T(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate*);
MARK_GEN_REF_T_PTR(::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1);
MARK_GEN_REF_T_PTR(::UnityEngine::UIElements::TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c);
MARK_GEN_REF_T_PTR(::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState);
MARK_GEN_VAL_T(::UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2);
MARK_VAL_T(::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair);
MARK_GEN_VAL_T(::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_EmptyData);
MARK_GEN_VAL_T(::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_StyleData);
MARK_GEN_VAL_T(::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TimingData);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StylePropertyAnimationSystem_TransitionState, "UnityEngine.UIElements", "StylePropertyAnimationSystem/TransitionState");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer*, "UnityEngine.UIElements",
                    "StylePropertyAnimationSystem/ElementPropertyPair/EqualityComparer");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StylePropertyAnimationSystem*, "UnityEngine.UIElements", "StylePropertyAnimationSystem");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/Values");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesBackground");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesBackgroundPosition");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesBackgroundRepeat");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesBackgroundSize");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesColor");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesDiscrete_1, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesDiscrete`1");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesEnum*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesEnum");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesFloat");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesFont");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesFontDefinition");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesInt");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesLength");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesListFilterFunction*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesListFilterFunction");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesMaterialDefinition*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesMaterialDefinition");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRatio*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesRatio");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesRotate");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesScale");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesTextShadow");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesTransformOrigin");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesTranslate");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1, "UnityEngine.UIElements", "StylePropertyAnimationSystem/Values`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::UIElements::TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c, "UnityEngine.UIElements",
                            "StylePropertyAnimationSystem/Values`1/TransitionEventsFrameState/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState, "UnityEngine.UIElements",
                            "StylePropertyAnimationSystem/Values`1/TransitionEventsFrameState");
DEFINE_IL2CPP_GEN_CLASS(::UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2, "UnityEngine.UIElements", "StylePropertyAnimationSystem/AnimationDataSet`2");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ElementPropertyPair");
DEFINE_IL2CPP_GEN_CLASS(::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_EmptyData, "UnityEngine.UIElements", "StylePropertyAnimationSystem/Values`1/EmptyData");
DEFINE_IL2CPP_GEN_CLASS(::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_StyleData, "UnityEngine.UIElements", "StylePropertyAnimationSystem/Values`1/StyleData");
DEFINE_IL2CPP_GEN_CLASS(::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TimingData, "UnityEngine.UIElements", "StylePropertyAnimationSystem/Values`1/TimingData");
// [Flags]
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem/TransitionState
struct CORDL_TYPE StylePropertyAnimationSystem_TransitionState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __StylePropertyAnimationSystem_TransitionState_Unwrapped
  enum struct __StylePropertyAnimationSystem_TransitionState_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Running = static_cast<int32_t>(0x1),
    __E_Started = static_cast<int32_t>(0x2),
    __E_Ended = static_cast<int32_t>(0x4),
    __E_Canceled = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __StylePropertyAnimationSystem_TransitionState_Unwrapped() const noexcept {
    return static_cast<__StylePropertyAnimationSystem_TransitionState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr StylePropertyAnimationSystem_TransitionState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr StylePropertyAnimationSystem_TransitionState(int32_t value__) noexcept;

  /// @brief Field Canceled value: I32(8)
  static ::UnityEngine::UIElements::StylePropertyAnimationSystem_TransitionState const Canceled;

  /// @brief Field Ended value: I32(4)
  static ::UnityEngine::UIElements::StylePropertyAnimationSystem_TransitionState const Ended;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::UIElements::StylePropertyAnimationSystem_TransitionState const None;

  /// @brief Field Running value: I32(1)
  static ::UnityEngine::UIElements::StylePropertyAnimationSystem_TransitionState const Running;

  /// @brief Field Started value: I32(2)
  static ::UnityEngine::UIElements::StylePropertyAnimationSystem_TransitionState const Started;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5096 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem_TransitionState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::StylePropertyAnimationSystem_TransitionState) == 0x4, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.StyleSheets.StylePropertyId, UnityEngine.UIElements.VisualElement
namespace UnityEngine::UIElements {
// cpp template
template <typename TTimingData, typename TStyleData>
// Is value type: true
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2<TTimingData,TStyleData>
struct CORDL_TYPE StylePropertyAnimationSystem_AnimationDataSet_2 {
public:
  // Declarations
  __declspec(property(get = get_capacity, put = set_capacity)) int32_t capacity;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Add(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, TTimingData timingData, TStyleData styleData);

  /// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData, TStyleData> Create();

  /// @brief Method GetActivePropertiesForElement, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void GetActivePropertiesForElement(::UnityEngine::UIElements::VisualElement* ve,
                                            ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>* outProperties);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool IndexOf(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::by_ref<int32_t> index);

  /// @brief Method LocalInit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void LocalInit();

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Remove(int32_t cancelledIndex);

  /// @brief Method RemoveAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveAll();

  /// @brief Method RemoveAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveAll(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method Replace, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Replace(int32_t index, TTimingData timingData, TStyleData styleData);

  /// @brief Method get_capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_capacity();

  /// @brief Method set_capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_capacity(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr StylePropertyAnimationSystem_AnimationDataSet_2();

  // Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<::UnityEngine::UIElements::VisualElement*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "properties", ty:
  // "::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId>", modifiers: "", def_value: None, comment: None }, CppParam { name: "timing", ty: "::ArrayW<TTimingData>", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "style", ty: "::ArrayW<TStyleData>", modifiers: "", def_value: None, comment: None }, CppParam { name: "count", ty: "int32_t", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "indices", ty:
  // "::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair,int32_t>*", modifiers: "", def_value: None, comment: None }]
  constexpr StylePropertyAnimationSystem_AnimationDataSet_2(
      ::ArrayW<::UnityEngine::UIElements::VisualElement*> elements, ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId> properties, ::ArrayW<TTimingData> timing,
      ::ArrayW<TStyleData> style, int32_t count, ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair, int32_t>* indices) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5097 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field elements, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::VisualElement*> elements;

  /// @brief Field properties, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId> properties;

  /// @brief Field timing, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<TTimingData> timing;

  /// @brief Field style, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<TStyleData> style;

  /// @brief Field count, offset: 0x20, size: 0x4, def value: None
  int32_t count;

  /// @brief Field indices, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair, int32_t>* indices;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem/ElementPropertyPair/EqualityComparer
class CORDL_TYPE ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair>"
  constexpr operator ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair>*() noexcept;

  /// @brief Method Equals, addr 0x710e2b0, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair x, ::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair y);

  /// @brief Method GetHashCode, addr 0x710e2c0, size 0x38, virtual true, abstract: false, final true
  inline int32_t GetHashCode(::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair obj);

  static inline ::UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer* New_ctor();

  /// @brief Method .ctor, addr 0x710e2ac, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair>"
  constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair>*
  i___System__Collections__Generic__IEqualityComparer_1___UnityEngine__UIElements__StylePropertyAnimationSystem_ElementPropertyPair_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer(ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer(ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5098 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.StyleSheets.StylePropertyId
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem/ElementPropertyPair
struct CORDL_TYPE StylePropertyAnimationSystem_ElementPropertyPair {
public:
  // Declarations
  using EqualityComparer = ::UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer;

  /// @brief Field Comparer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Comparer,
                      put = setStaticF_Comparer)) ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair>* Comparer;

  /// @brief Method .ctor, addr 0x710e234, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::VisualElement* element, ::UnityEngine::UIElements::StyleSheets::StylePropertyId property);

  static inline ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair>* getStaticF_Comparer();

  static inline void setStaticF_Comparer(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair>* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr StylePropertyAnimationSystem_ElementPropertyPair();

  // Ctor Parameters [CppParam { name: "element", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None, comment: None }, CppParam { name: "property", ty:
  // "::UnityEngine::UIElements::StyleSheets::StylePropertyId", modifiers: "", def_value: None, comment: None }]
  constexpr StylePropertyAnimationSystem_ElementPropertyPair(::UnityEngine::UIElements::VisualElement* element, ::UnityEngine::UIElements::StyleSheets::StylePropertyId property) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5099 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field element, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* element;

  /// @brief Field property, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleSheets::StylePropertyId property;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair, element) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair, property) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem/Values
class CORDL_TYPE StylePropertyAnimationSystem_Values : public ::System::Object {
public:
  // Declarations
  /// @brief Method CancelAllAnimations, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void CancelAllAnimations();

  /// @brief Method CancelAllAnimations, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void CancelAllAnimations(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method CancelAnimation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void CancelAnimation(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id);

  /// @brief Method GetAllAnimations, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void GetAllAnimations(::UnityEngine::UIElements::VisualElement* ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>* outPropertyIds);

  static inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values* New_ctor();

  /// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Update(double_t currentTime);

  /// @brief Method UpdateAnimation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void UpdateAnimation(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id);

  /// @brief Method UpdateComputedStyle, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void UpdateComputedStyle();

  /// @brief Method UpdateComputedStyle, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void UpdateComputedStyle(int32_t i);

  /// @brief Method UpdateValues, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void UpdateValues();

  /// @brief Method .ctor, addr 0x710e2f8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StylePropertyAnimationSystem_Values();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem_Values", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StylePropertyAnimationSystem_Values(StylePropertyAnimationSystem_Values&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem_Values", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StylePropertyAnimationSystem_Values(StylePropertyAnimationSystem_Values const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5100 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::StylePropertyAnimationSystem_Values) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/TransitionEventsFrameState/<>c<T>
class CORDL_TYPE TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c<T>* __9;

  static inline ::UnityEngine::UIElements::TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c<T>* New_ctor();

  /// @brief Method <.cctor>b__11_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>* __cctor_b__11_0();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c<T>* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c<T>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c(TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c(TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5101 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/TransitionEventsFrameState<T>
class CORDL_TYPE Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c<T>;

  /// @brief Field elementPropertyQueuedEvents, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_elementPropertyQueuedEvents, put = __cordl_internal_set_elementPropertyQueuedEvents)) ::System::Collections::Generic::Dictionary_2<
      ::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair, ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>* elementPropertyQueuedEvents;

  /// @brief Field elementPropertyStateDelta, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_elementPropertyStateDelta, put = __cordl_internal_set_elementPropertyStateDelta)) ::System::Collections::Generic::Dictionary_2<
      ::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair, ::UnityEngine::UIElements::StylePropertyAnimationSystem_TransitionState>* elementPropertyStateDelta;

  /// @brief Field k_EventQueuePool, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_EventQueuePool,
                      put = setStaticF_k_EventQueuePool)) ::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>* k_EventQueuePool;

  /// @brief Field m_ChangesCount, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ChangesCount, put = __cordl_internal_set_m_ChangesCount)) int32_t m_ChangesCount;

  /// @brief Field panel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_panel, put = __cordl_internal_set_panel)) ::UnityEngine::UIElements::IPanel* panel;

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method GetPooledQueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>* GetPooledQueue();

  static inline ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>* New_ctor();

  /// @brief Method RegisterChange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RegisterChange();

  /// @brief Method StateChanged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool StateChanged();

  /// @brief Method UnregisterChange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UnregisterChange();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair,
                                                         ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>* const&
  __cordl_internal_get_elementPropertyQueuedEvents() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair,
                                                         ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*&
  __cordl_internal_get_elementPropertyQueuedEvents();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair,
                                                         ::UnityEngine::UIElements::StylePropertyAnimationSystem_TransitionState>* const&
  __cordl_internal_get_elementPropertyStateDelta() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair,
                                                         ::UnityEngine::UIElements::StylePropertyAnimationSystem_TransitionState>*&
  __cordl_internal_get_elementPropertyStateDelta();

  constexpr int32_t const& __cordl_internal_get_m_ChangesCount() const;

  constexpr int32_t& __cordl_internal_get_m_ChangesCount();

  constexpr ::UnityEngine::UIElements::IPanel* const& __cordl_internal_get_panel() const;

  constexpr ::UnityEngine::UIElements::IPanel*& __cordl_internal_get_panel();

  constexpr void __cordl_internal_set_elementPropertyQueuedEvents(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair,
                                                                                                               ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>* value);

  constexpr void __cordl_internal_set_elementPropertyStateDelta(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair,
                                                                                                             ::UnityEngine::UIElements::StylePropertyAnimationSystem_TransitionState>* value);

  constexpr void __cordl_internal_set_m_ChangesCount(int32_t value);

  constexpr void __cordl_internal_set_panel(::UnityEngine::UIElements::IPanel* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>* getStaticF_k_EventQueuePool();

  static inline void setStaticF_k_EventQueuePool(::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState(Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState(Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5102 };

  /// @brief Field elementPropertyStateDelta, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair, ::UnityEngine::UIElements::StylePropertyAnimationSystem_TransitionState>*
      ___elementPropertyStateDelta;

  /// @brief Field elementPropertyQueuedEvents, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair,
                                               ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>* ___elementPropertyQueuedEvents;

  /// @brief Field panel, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::IPanel* ___panel;

  /// @brief Field m_ChangesCount, offset: 0x28, size: 0x4, def value: None
  int32_t ___m_ChangesCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: true
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/TimingData<T>
struct CORDL_TYPE Values_1_StylePropertyAnimationSystem_TimingData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Values_1_StylePropertyAnimationSystem_TimingData();

  // Ctor Parameters [CppParam { name: "startTime", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "duration", ty: "float_t", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "easingCurve", ty: "::System::Func_2<float_t,float_t>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "easedProgress", ty: "float_t",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "reversingShorteningFactor", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "isStarted", ty:
  // "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "delay", ty: "float_t", modifiers: "", def_value: None, comment: None }]
  constexpr Values_1_StylePropertyAnimationSystem_TimingData(double_t startTime, float_t duration, ::System::Func_2<float_t, float_t>* easingCurve, float_t easedProgress,
                                                             float_t reversingShorteningFactor, bool isStarted, float_t delay) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5103 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field startTime, offset: 0x0, size: 0x8, def value: None
  double_t startTime;

  /// @brief Field duration, offset: 0x8, size: 0x4, def value: None
  float_t duration;

  /// @brief Field easingCurve, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<float_t, float_t>* easingCurve;

  /// @brief Field easedProgress, offset: 0x18, size: 0x4, def value: None
  float_t easedProgress;

  /// @brief Field reversingShorteningFactor, offset: 0x1c, size: 0x4, def value: None
  float_t reversingShorteningFactor;

  /// @brief Field isStarted, offset: 0x20, size: 0x1, def value: None
  bool isStarted;

  /// @brief Field delay, offset: 0x24, size: 0x4, def value: None
  float_t delay;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: true
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/StyleData<T>
struct CORDL_TYPE Values_1_StylePropertyAnimationSystem_StyleData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Values_1_StylePropertyAnimationSystem_StyleData();

  // Ctor Parameters [CppParam { name: "startValue", ty: "T", modifiers: "", def_value: None, comment: None }, CppParam { name: "endValue", ty: "T", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "reversingAdjustedStartValue", ty: "T", modifiers: "", def_value: None, comment: None }, CppParam { name: "currentValue", ty: "T", modifiers: "", def_value: None, comment: None
  // }]
  constexpr Values_1_StylePropertyAnimationSystem_StyleData(T startValue, T endValue, T reversingAdjustedStartValue, T currentValue) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5104 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field startValue, offset: 0x0, size: 0x8, def value: None
  T startValue;

  /// @brief Field endValue, offset: 0x8, size: 0x8, def value: None
  T endValue;

  /// @brief Field reversingAdjustedStartValue, offset: 0x10, size: 0x8, def value: None
  T reversingAdjustedStartValue;

  /// @brief Field currentValue, offset: 0x18, size: 0x8, def value: None
  T currentValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: true
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/EmptyData<T>
#pragma pack(push, 0)
struct CORDL_TYPE Values_1_StylePropertyAnimationSystem_EmptyData {
public:
  // Declarations
  /// @brief Field Default, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_Default, put = setStaticF_Default)) ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_EmptyData<T> Default;

  static inline ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_EmptyData<T> getStaticF_Default();

  static inline void setStaticF_Default(::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_EmptyData<T> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Values_1_StylePropertyAnimationSystem_EmptyData();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5105 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.StylePropertyAnimationSystem::AnimationDataSet`2<TTimingData, TStyleData>, UnityEngine.UIElements.StylePropertyAnimationSystem::Values,
// UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1::EmptyData<T>, UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1::StyleData<T>,
// UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1::TimingData<T>
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1<T>
class CORDL_TYPE StylePropertyAnimationSystem_Values_1 : public ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values {
public:
  // Declarations
  using EmptyData = ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_EmptyData<T>;

  using StyleData = ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_StyleData<T>;

  using TimingData = ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TimingData<T>;

  using TransitionEventsFrameState = ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>;

  __declspec(property(get = get_SameFunc)) ::System::Func_3<T, T, bool>* SameFunc;

  /// @brief Field completed, offset 0x58, size 0x30
  __declspec(property(
      get = __cordl_internal_get_completed,
      put =
          __cordl_internal_set_completed)) ::UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2<::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_EmptyData<T>, T>
      completed;

  __declspec(property(get = get_isEmpty)) bool isEmpty;

  /// @brief Field m_CurrentFrameEventsState, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentFrameEventsState,
                      put = __cordl_internal_set_m_CurrentFrameEventsState)) ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>* m_CurrentFrameEventsState;

  /// @brief Field m_CurrentTime, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentTime, put = __cordl_internal_set_m_CurrentTime)) double_t m_CurrentTime;

  /// @brief Field m_NextFrameEventsState, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_NextFrameEventsState,
                      put = __cordl_internal_set_m_NextFrameEventsState)) ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>* m_NextFrameEventsState;

  /// @brief Field running, offset 0x28, size 0x30
  __declspec(property(get = __cordl_internal_get_running, put = __cordl_internal_set_running)) ::UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2<
      ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TimingData<T>, ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_StyleData<T>>
      running;

  /// @brief Method CancelAllAnimations, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void CancelAllAnimations();

  /// @brief Method CancelAllAnimations, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void CancelAllAnimations(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method CancelAnimation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void CancelAnimation(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id);

  /// @brief Method ClearEventQueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ClearEventQueue(::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair epp);

  /// @brief Method ComputeReversingDelay, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline float_t ComputeReversingDelay(float_t delay, float_t newReversingShorteningFactor);

  /// @brief Method ComputeReversingDuration, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline float_t ComputeReversingDuration(float_t newTransitionDuration, float_t newReversingShorteningFactor);

  /// @brief Method ComputeReversingShorteningFactor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline float_t ComputeReversingShorteningFactor(int32_t oldIndex);

  /// @brief Method ConvertUnits, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool ConvertUnits(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::by_ref<T> a, ::by_ref<T> b);

  /// @brief Method Copy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T Copy(T value);

  /// @brief Method ForceComputedStyleEndValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ForceComputedStyleEndValue(int32_t runningIndex);

  /// @brief Method GetAllAnimations, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void GetAllAnimations(::UnityEngine::UIElements::VisualElement* ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>* outPropertyIds);

  static inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>* New_ctor();

  /// @brief Method ProcessEventQueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ProcessEventQueue();

  /// @brief Method QueueEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void QueueEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair epp);

  /// @brief Method QueueTransitionCancelEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void QueueTransitionCancelEvent(::UnityEngine::UIElements::VisualElement* ve, int32_t runningIndex, double_t panelElapsed);

  /// @brief Method QueueTransitionEndEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void QueueTransitionEndEvent(::UnityEngine::UIElements::VisualElement* ve, int32_t runningIndex);

  /// @brief Method QueueTransitionRunEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void QueueTransitionRunEvent(::UnityEngine::UIElements::VisualElement* ve, int32_t runningIndex);

  /// @brief Method QueueTransitionStartEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void QueueTransitionStartEvent(::UnityEngine::UIElements::VisualElement* ve, int32_t runningIndex);

  /// @brief Method SendTransitionCancelEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SendTransitionCancelEvent(::UnityEngine::UIElements::VisualElement* ve, int32_t runningIndex, double_t panelElapsed);

  /// @brief Method StartTransition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, T startValue, T endValue, float_t duration, float_t delay,
                              ::System::Func_2<float_t, float_t>* easingCurve, double_t currentTime);

  /// @brief Method SwapFrameStates, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SwapFrameStates();

  /// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Update(double_t currentTime);

  /// @brief Method UpdateAnimation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void UpdateAnimation(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id);

  /// @brief Method UpdateProgress, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UpdateProgress(double_t currentTime);

  constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2<::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_EmptyData<T>, T> const&
  __cordl_internal_get_completed() const;

  constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2<::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_EmptyData<T>, T>&
  __cordl_internal_get_completed();

  constexpr ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>* const& __cordl_internal_get_m_CurrentFrameEventsState() const;

  constexpr ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>*& __cordl_internal_get_m_CurrentFrameEventsState();

  constexpr double_t const& __cordl_internal_get_m_CurrentTime() const;

  constexpr double_t& __cordl_internal_get_m_CurrentTime();

  constexpr ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>* const& __cordl_internal_get_m_NextFrameEventsState() const;

  constexpr ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>*& __cordl_internal_get_m_NextFrameEventsState();

  constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2<::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TimingData<T>,
                                                                                       ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_StyleData<T>> const&
  __cordl_internal_get_running() const;

  constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2<::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TimingData<T>,
                                                                                       ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_StyleData<T>>&
  __cordl_internal_get_running();

  constexpr void
  __cordl_internal_set_completed(::UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2<::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_EmptyData<T>, T> value);

  constexpr void __cordl_internal_set_m_CurrentFrameEventsState(::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>* value);

  constexpr void __cordl_internal_set_m_CurrentTime(double_t value);

  constexpr void __cordl_internal_set_m_NextFrameEventsState(::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>* value);

  constexpr void __cordl_internal_set_running(::UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2<::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TimingData<T>,
                                                                                                                         ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_StyleData<T>>
                                                  value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_SameFunc, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Func_3<T, T, bool>* get_SameFunc();

  /// @brief Method get_isEmpty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_isEmpty();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StylePropertyAnimationSystem_Values_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem_Values_1", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StylePropertyAnimationSystem_Values_1(StylePropertyAnimationSystem_Values_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem_Values_1", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StylePropertyAnimationSystem_Values_1(StylePropertyAnimationSystem_Values_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5106 };

  /// @brief Field m_CurrentTime, offset: 0x10, size: 0x8, def value: None
  double_t ___m_CurrentTime;

  /// @brief Field m_CurrentFrameEventsState, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>* ___m_CurrentFrameEventsState;

  /// @brief Field m_NextFrameEventsState, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>* ___m_NextFrameEventsState;

  /// @brief Field running, offset: 0x28, size: 0x30, def value: None
  ::UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2<::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TimingData<T>,
                                                                             ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_StyleData<T>>
      ___running;

  /// @brief Field completed, offset: 0x58, size: 0x30, def value: None
  ::UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2<::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_EmptyData<T>, T> ___completed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesFloat
class CORDL_TYPE StylePropertyAnimationSystem_ValuesFloat : public ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<float_t> {
public:
  // Declarations
  __declspec(property(get = get_SameFunc)) ::System::Func_3<float_t, float_t, bool>* SameFunc;

  /// @brief Field <SameFunc>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__SameFunc_k__BackingField, put = __cordl_internal_set__SameFunc_k__BackingField)) ::System::Func_3<float_t, float_t, bool>* _SameFunc_k__BackingField;

  /// @brief Method IsSame, addr 0x710e304, size 0x94, virtual false, abstract: false, final false
  static inline bool IsSame(float_t a, float_t b);

  /// @brief Method Lerp, addr 0x710e398, size 0x14, virtual false, abstract: false, final false
  static inline void Lerp(float_t a, float_t b, ::by_ref<float_t> result, float_t t);

  static inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat* New_ctor();

  /// @brief Method UpdateComputedStyle, addr 0x710e42c, size 0xac, virtual true, abstract: false, final true
  inline void UpdateComputedStyle();

  /// @brief Method UpdateComputedStyle, addr 0x710e4d8, size 0x7c, virtual true, abstract: false, final true
  inline void UpdateComputedStyle(int32_t i);

  /// @brief Method UpdateValues, addr 0x710e3ac, size 0x80, virtual true, abstract: false, final true
  inline void UpdateValues();

  constexpr ::System::Func_3<float_t, float_t, bool>* const& __cordl_internal_get__SameFunc_k__BackingField() const;

  constexpr ::System::Func_3<float_t, float_t, bool>*& __cordl_internal_get__SameFunc_k__BackingField();

  constexpr void __cordl_internal_set__SameFunc_k__BackingField(::System::Func_3<float_t, float_t, bool>* value);

  /// @brief Method .ctor, addr 0x710e554, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method get_SameFunc, addr 0x710e2fc, size 0x8, virtual true, abstract: false, final false
  inline ::System::Func_3<float_t, float_t, bool>* get_SameFunc();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StylePropertyAnimationSystem_ValuesFloat();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem_ValuesFloat", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StylePropertyAnimationSystem_ValuesFloat(StylePropertyAnimationSystem_ValuesFloat&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem_ValuesFloat", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StylePropertyAnimationSystem_ValuesFloat(StylePropertyAnimationSystem_ValuesFloat const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5107 };

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <SameFunc>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::System::Func_3<float_t, float_t, bool>* ____SameFunc_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat, ____SameFunc_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat) == 0x90, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesInt
class CORDL_TYPE StylePropertyAnimationSystem_ValuesInt : public ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<int32_t> {
public:
  // Declarations
  __declspec(property(get = get_SameFunc)) ::System::Func_3<int32_t, int32_t, bool>* SameFunc;

  /// @brief Field <SameFunc>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__SameFunc_k__BackingField, put = __cordl_internal_set__SameFunc_k__BackingField)) ::System::Func_3<int32_t, int32_t, bool>* _SameFunc_k__BackingField;

  /// @brief Method IsSame, addr 0x710e5f8, size 0xc, virtual false, abstract: false, final false
  static inline bool IsSame(int32_t a, int32_t b);

  /// @brief Method Lerp, addr 0x710e604, size 0xf0, virtual false, abstract: false, final false
  static inline int32_t Lerp(int32_t a, int32_t b, float_t t);

  static inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt* New_ctor();

  /// @brief Method UpdateComputedStyle, addr 0x710e790, size 0xac, virtual true, abstract: false, final true
  inline void UpdateComputedStyle();

  /// @brief Method UpdateComputedStyle, addr 0x710e83c, size 0x7c, virtual true, abstract: false, final true
  inline void UpdateComputedStyle(int32_t i);

  /// @brief Method UpdateValues, addr 0x710e6f4, size 0x9c, virtual true, abstract: false, final true
  inline void UpdateValues();

  constexpr ::System::Func_3<int32_t, int32_t, bool>* const& __cordl_internal_get__SameFunc_k__BackingField() const;

  constexpr ::System::Func_3<int32_t, int32_t, bool>*& __cordl_internal_get__SameFunc_k__BackingField();

  constexpr void __cordl_internal_set__SameFunc_k__BackingField(::System::Func_3<int32_t, int32_t, bool>* value);

  /// @brief Method .ctor, addr 0x710e8b8, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method get_SameFunc, addr 0x710e5f0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Func_3<int32_t, int32_t, bool>* get_SameFunc();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StylePropertyAnimationSystem_ValuesInt();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem_ValuesInt", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StylePropertyAnimationSystem_ValuesInt(StylePropertyAnimationSystem_ValuesInt&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem_ValuesInt", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StylePropertyAnimationSystem_ValuesInt(StylePropertyAnimationSystem_ValuesInt const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5108 };

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <SameFunc>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::System::Func_3<int32_t, int32_t, bool>* ____SameFunc_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt, ____SameFunc_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt) == 0x90, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.Length, UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesLength
class CORDL_TYPE StylePropertyAnimationSystem_ValuesLength : public ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<::UnityEngine::UIElements::Length> {
public:
  // Declarations
  __declspec(property(get = get_SameFunc)) ::System::Func_3<::UnityEngine::UIElements::Length, ::UnityEngine::UIElements::Length, bool>* SameFunc;

  /// @brief Field <SameFunc>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__SameFunc_k__BackingField,
                      put = __cordl_internal_set__SameFunc_k__BackingField)) ::System::Func_3<::UnityEngine::UIElements::Length, ::UnityEngine::UIElements::Length, bool>* _SameFunc_k__BackingField;

  /// @brief Method ConvertUnits, addr 0x710ea04, size 0x28, virtual true, abstract: false, final true
  inline bool ConvertUnits(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::by_ref<::UnityEngine::UIElements::Length> a,
                           ::by_ref<::UnityEngine::UIElements::Length> b);

  /// @brief Method IsSame, addr 0x710e95c, size 0xa8, virtual false, abstract: false, final false
  static inline bool IsSame(::UnityEngine::UIElements::Length a, ::UnityEngine::UIElements::Length b);

  /// @brief Method Lerp, addr 0x710ea2c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Length Lerp(::UnityEngine::UIElements::Length a, ::UnityEngine::UIElements::Length b, float_t t);

  static inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength* New_ctor();

  /// @brief Method UpdateComputedStyle, addr 0x710eb1c, size 0xac, virtual true, abstract: false, final true
  inline void UpdateComputedStyle();

  /// @brief Method UpdateComputedStyle, addr 0x710ebc8, size 0x7c, virtual true, abstract: false, final true
  inline void UpdateComputedStyle(int32_t i);

  /// @brief Method UpdateValues, addr 0x710ea68, size 0xb4, virtual true, abstract: false, final true
  inline void UpdateValues();

  constexpr ::System::Func_3<::UnityEngine::UIElements::Length, ::UnityEngine::UIElements::Length, bool>* const& __cordl_internal_get__SameFunc_k__BackingField() const;

  constexpr ::System::Func_3<::UnityEngine::UIElements::Length, ::UnityEngine::UIElements::Length, bool>*& __cordl_internal_get__SameFunc_k__BackingField();

  constexpr void __cordl_internal_set__SameFunc_k__BackingField(::System::Func_3<::UnityEngine::UIElements::Length, ::UnityEngine::UIElements::Length, bool>* value);

  /// @brief Method .ctor, addr 0x710ec44, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method get_SameFunc, addr 0x710e954, size 0x8, virtual true, abstract: false, final false
  inline ::System::Func_3<::UnityEngine::UIElements::Length, ::UnityEngine::UIElements::Length, bool>* get_SameFunc();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StylePropertyAnimationSystem_ValuesLength();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem_ValuesLength", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StylePropertyAnimationSystem_ValuesLength(StylePropertyAnimationSystem_ValuesLength&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem_ValuesLength", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StylePropertyAnimationSystem_ValuesLength(StylePropertyAnimationSystem_ValuesLength const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5109 };

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <SameFunc>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::System::Func_3<::UnityEngine::UIElements::Length, ::UnityEngine::UIElements::Length, bool>* ____SameFunc_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength, ____SameFunc_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength) == 0x90, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.Color, UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesColor
class CORDL_TYPE StylePropertyAnimationSystem_ValuesColor : public ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<::UnityEngine::Color> {
public:
  // Declarations
  __declspec(property(get = get_SameFunc)) ::System::Func_3<::UnityEngine::Color, ::UnityEngine::Color, bool>* SameFunc;

  /// @brief Field <SameFunc>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__SameFunc_k__BackingField,
                      put = __cordl_internal_set__SameFunc_k__BackingField)) ::System::Func_3<::UnityEngine::Color, ::UnityEngine::Color, bool>* _SameFunc_k__BackingField;

  /// @brief Method IsSame, addr 0x710ece8, size 0x144, virtual false, abstract: false, final false
  static inline bool IsSame(::UnityEngine::Color c, ::UnityEngine::Color d);

  /// @brief Method Lerp, addr 0x710ee2c, size 0x38, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color Lerp(::UnityEngine::Color a, ::UnityEngine::Color b, float_t t);

  static inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor* New_ctor();

  /// @brief Method UpdateComputedStyle, addr 0x710eeec, size 0xb8, virtual true, abstract: false, final true
  inline void UpdateComputedStyle();

  /// @brief Method UpdateComputedStyle, addr 0x710efa4, size 0x80, virtual true, abstract: false, final true
  inline void UpdateComputedStyle(int32_t i);

  /// @brief Method UpdateValues, addr 0x710ee64, size 0x88, virtual true, abstract: false, final true
  inline void UpdateValues();

  constexpr ::System::Func_3<::UnityEngine::Color, ::UnityEngine::Color, bool>* const& __cordl_internal_get__SameFunc_k__BackingField() const;

  constexpr ::System::Func_3<::UnityEngine::Color, ::UnityEngine::Color, bool>*& __cordl_internal_get__SameFunc_k__BackingField();

  constexpr void __cordl_internal_set__SameFunc_k__BackingField(::System::Func_3<::UnityEngine::Color, ::UnityEngine::Color, bool>* value);

  /// @brief Method .ctor, addr 0x710f024, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method get_SameFunc, addr 0x710ece0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Func_3<::UnityEngine::Color, ::UnityEngine::Color, bool>* get_SameFunc();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StylePropertyAnimationSystem_ValuesColor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem_ValuesColor", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StylePropertyAnimationSystem_ValuesColor(StylePropertyAnimationSystem_ValuesColor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem_ValuesColor", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StylePropertyAnimationSystem_ValuesColor(StylePropertyAnimationSystem_ValuesColor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5110 };

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <SameFunc>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::System::Func_3<::UnityEngine::Color, ::UnityEngine::Color, bool>* ____SameFunc_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor, ____SameFunc_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor) == 0x90, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1<T>
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesDiscrete`1<T>
class CORDL_TYPE StylePropertyAnimationSystem_ValuesDiscrete_1 : public ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T> {
public:
  // Declarations
  __declspec(property(get = get_SameFunc)) ::System::Func_3<T, T, bool>* SameFunc;

  /// @brief Field <SameFunc>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__SameFunc_k__BackingField, put = __cordl_internal_set__SameFunc_k__BackingField)) ::System::Func_3<T, T, bool>* _SameFunc_k__BackingField;

  /// @brief Method IsSame, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool IsSame(T a, T b);

  /// @brief Method Lerp, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T Lerp(T a, T b, float_t t);

  static inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesDiscrete_1<T>* New_ctor();

  /// @brief Method UpdateValues, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void UpdateValues();

  constexpr ::System::Func_3<T, T, bool>* const& __cordl_internal_get__SameFunc_k__BackingField() const;

  constexpr ::System::Func_3<T, T, bool>*& __cordl_internal_get__SameFunc_k__BackingField();

  constexpr void __cordl_internal_set__SameFunc_k__BackingField(::System::Func_3<T, T, bool>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method get_SameFunc, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Func_3<T, T, bool>* get_SameFunc();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StylePropertyAnimationSystem_ValuesDiscrete_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem_ValuesDiscrete_1", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StylePropertyAnimationSystem_ValuesDiscrete_1(StylePropertyAnimationSystem_ValuesDiscrete_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem_ValuesDiscrete_1", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StylePropertyAnimationSystem_ValuesDiscrete_1(StylePropertyAnimationSystem_ValuesDiscrete_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5111 };

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <SameFunc>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::System::Func_3<T, T, bool>* ____SameFunc_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.StylePropertyAnimationSystem::ValuesDiscrete`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesEnum
class CORDL_TYPE StylePropertyAnimationSystem_ValuesEnum : public ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesDiscrete_1<int32_t> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesEnum* New_ctor();

  /// @brief Method UpdateComputedStyle, addr 0x710f0c0, size 0xac, virtual true, abstract: false, final true
  inline void UpdateComputedStyle();

  /// @brief Method UpdateComputedStyle, addr 0x710f16c, size 0x7c, virtual true, abstract: false, final true
  inline void UpdateComputedStyle(int32_t i);

  /// @brief Method .ctor, addr 0x710f1e8, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StylePropertyAnimationSystem_ValuesEnum();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem_ValuesEnum", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StylePropertyAnimationSystem_ValuesEnum(StylePropertyAnimationSystem_ValuesEnum&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem_ValuesEnum", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StylePropertyAnimationSystem_ValuesEnum(StylePropertyAnimationSystem_ValuesEnum const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5112 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesEnum) == 0x90, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.Background, UnityEngine.UIElements.StylePropertyAnimationSystem::ValuesDiscrete`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesBackground
class CORDL_TYPE StylePropertyAnimationSystem_ValuesBackground : public ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesDiscrete_1<::UnityEngine::UIElements::Background> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground* New_ctor();

  /// @brief Method UpdateComputedStyle, addr 0x710f234, size 0xc0, virtual true, abstract: false, final true
  inline void UpdateComputedStyle();

  /// @brief Method UpdateComputedStyle, addr 0x710f2f4, size 0x90, virtual true, abstract: false, final true
  inline void UpdateComputedStyle(int32_t i);

  /// @brief Method .ctor, addr 0x710f384, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StylePropertyAnimationSystem_ValuesBackground();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem_ValuesBackground", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StylePropertyAnimationSystem_ValuesBackground(StylePropertyAnimationSystem_ValuesBackground&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem_ValuesBackground", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StylePropertyAnimationSystem_ValuesBackground(StylePropertyAnimationSystem_ValuesBackground const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5113 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground) == 0x90, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.FontDefinition, UnityEngine.UIElements.StylePropertyAnimationSystem::ValuesDiscrete`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesFontDefinition
class CORDL_TYPE StylePropertyAnimationSystem_ValuesFontDefinition : public ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesDiscrete_1<::UnityEngine::UIElements::FontDefinition> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition* New_ctor();

  /// @brief Method UpdateComputedStyle, addr 0x710f3d0, size 0xb0, virtual true, abstract: false, final true
  inline void UpdateComputedStyle();

  /// @brief Method UpdateComputedStyle, addr 0x710f480, size 0x7c, virtual true, abstract: false, final true
  inline void UpdateComputedStyle(int32_t i);

  /// @brief Method .ctor, addr 0x710f4fc, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StylePropertyAnimationSystem_ValuesFontDefinition();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem_ValuesFontDefinition", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StylePropertyAnimationSystem_ValuesFontDefinition(StylePropertyAnimationSystem_ValuesFontDefinition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem_ValuesFontDefinition", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StylePropertyAnimationSystem_ValuesFontDefinition(StylePropertyAnimationSystem_ValuesFontDefinition const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5114 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition) == 0x90, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.StylePropertyAnimationSystem::ValuesDiscrete`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesFont
class CORDL_TYPE StylePropertyAnimationSystem_ValuesFont : public ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesDiscrete_1<::UnityW<::UnityEngine::Font>> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont* New_ctor();

  /// @brief Method UpdateComputedStyle, addr 0x710f548, size 0xac, virtual true, abstract: false, final true
  inline void UpdateComputedStyle();

  /// @brief Method UpdateComputedStyle, addr 0x710f5f4, size 0x7c, virtual true, abstract: false, final true
  inline void UpdateComputedStyle(int32_t i);

  /// @brief Method .ctor, addr 0x710f670, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StylePropertyAnimationSystem_ValuesFont();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem_ValuesFont", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StylePropertyAnimationSystem_ValuesFont(StylePropertyAnimationSystem_ValuesFont&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem_ValuesFont", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StylePropertyAnimationSystem_ValuesFont(StylePropertyAnimationSystem_ValuesFont const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5115 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont) == 0x90, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1<T>, UnityEngine.UIElements.TextShadow
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesTextShadow
class CORDL_TYPE StylePropertyAnimationSystem_ValuesTextShadow : public ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<::UnityEngine::UIElements::TextShadow> {
public:
  // Declarations
  __declspec(property(get = get_SameFunc)) ::System::Func_3<::UnityEngine::UIElements::TextShadow, ::UnityEngine::UIElements::TextShadow, bool>* SameFunc;

  /// @brief Field <SameFunc>k__BackingField, offset 0x88, size 0x8
  __declspec(property(
      get = __cordl_internal_get__SameFunc_k__BackingField,
      put = __cordl_internal_set__SameFunc_k__BackingField)) ::System::Func_3<::UnityEngine::UIElements::TextShadow, ::UnityEngine::UIElements::TextShadow, bool>* _SameFunc_k__BackingField;

  /// @brief Method IsSame, addr 0x710f6c4, size 0x44, virtual false, abstract: false, final false
  static inline bool IsSame(::UnityEngine::UIElements::TextShadow a, ::UnityEngine::UIElements::TextShadow b);

  /// @brief Method Lerp, addr 0x710f708, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::TextShadow Lerp(::UnityEngine::UIElements::TextShadow a, ::UnityEngine::UIElements::TextShadow b, float_t t);

  static inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow* New_ctor();

  /// @brief Method UpdateComputedStyle, addr 0x710f81c, size 0xc8, virtual true, abstract: false, final true
  inline void UpdateComputedStyle();

  /// @brief Method UpdateComputedStyle, addr 0x710f8e4, size 0x9c, virtual true, abstract: false, final true
  inline void UpdateComputedStyle(int32_t i);

  /// @brief Method UpdateValues, addr 0x710f758, size 0xc4, virtual true, abstract: false, final true
  inline void UpdateValues();

  constexpr ::System::Func_3<::UnityEngine::UIElements::TextShadow, ::UnityEngine::UIElements::TextShadow, bool>* const& __cordl_internal_get__SameFunc_k__BackingField() const;

  constexpr ::System::Func_3<::UnityEngine::UIElements::TextShadow, ::UnityEngine::UIElements::TextShadow, bool>*& __cordl_internal_get__SameFunc_k__BackingField();

  constexpr void __cordl_internal_set__SameFunc_k__BackingField(::System::Func_3<::UnityEngine::UIElements::TextShadow, ::UnityEngine::UIElements::TextShadow, bool>* value);

  /// @brief Method .ctor, addr 0x710f980, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method get_SameFunc, addr 0x710f6bc, size 0x8, virtual true, abstract: false, final false
  inline ::System::Func_3<::UnityEngine::UIElements::TextShadow, ::UnityEngine::UIElements::TextShadow, bool>* get_SameFunc();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StylePropertyAnimationSystem_ValuesTextShadow();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem_ValuesTextShadow", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StylePropertyAnimationSystem_ValuesTextShadow(StylePropertyAnimationSystem_ValuesTextShadow&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem_ValuesTextShadow", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StylePropertyAnimationSystem_ValuesTextShadow(StylePropertyAnimationSystem_ValuesTextShadow const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5116 };

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <SameFunc>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::System::Func_3<::UnityEngine::UIElements::TextShadow, ::UnityEngine::UIElements::TextShadow, bool>* ____SameFunc_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow, ____SameFunc_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow) == 0x90, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.Scale, UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesScale
class CORDL_TYPE StylePropertyAnimationSystem_ValuesScale : public ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<::UnityEngine::UIElements::Scale> {
public:
  // Declarations
  __declspec(property(get = get_SameFunc)) ::System::Func_3<::UnityEngine::UIElements::Scale, ::UnityEngine::UIElements::Scale, bool>* SameFunc;

  /// @brief Field <SameFunc>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__SameFunc_k__BackingField,
                      put = __cordl_internal_set__SameFunc_k__BackingField)) ::System::Func_3<::UnityEngine::UIElements::Scale, ::UnityEngine::UIElements::Scale, bool>* _SameFunc_k__BackingField;

  /// @brief Method IsSame, addr 0x710fa24, size 0x54, virtual false, abstract: false, final false
  static inline bool IsSame(::UnityEngine::UIElements::Scale a, ::UnityEngine::UIElements::Scale b);

  /// @brief Method Lerp, addr 0x710fba4, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Scale Lerp(::UnityEngine::UIElements::Scale a, ::UnityEngine::UIElements::Scale b, float_t t);

  static inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale* New_ctor();

  /// @brief Method UpdateComputedStyle, addr 0x710fa78, size 0xb0, virtual true, abstract: false, final true
  inline void UpdateComputedStyle();

  /// @brief Method UpdateComputedStyle, addr 0x710fb28, size 0x7c, virtual true, abstract: false, final true
  inline void UpdateComputedStyle(int32_t i);

  /// @brief Method UpdateValues, addr 0x710fbfc, size 0xbc, virtual true, abstract: false, final true
  inline void UpdateValues();

  constexpr ::System::Func_3<::UnityEngine::UIElements::Scale, ::UnityEngine::UIElements::Scale, bool>* const& __cordl_internal_get__SameFunc_k__BackingField() const;

  constexpr ::System::Func_3<::UnityEngine::UIElements::Scale, ::UnityEngine::UIElements::Scale, bool>*& __cordl_internal_get__SameFunc_k__BackingField();

  constexpr void __cordl_internal_set__SameFunc_k__BackingField(::System::Func_3<::UnityEngine::UIElements::Scale, ::UnityEngine::UIElements::Scale, bool>* value);

  /// @brief Method .ctor, addr 0x710fcb8, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method get_SameFunc, addr 0x710fa1c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Func_3<::UnityEngine::UIElements::Scale, ::UnityEngine::UIElements::Scale, bool>* get_SameFunc();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StylePropertyAnimationSystem_ValuesScale();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem_ValuesScale", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StylePropertyAnimationSystem_ValuesScale(StylePropertyAnimationSystem_ValuesScale&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem_ValuesScale", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StylePropertyAnimationSystem_ValuesScale(StylePropertyAnimationSystem_ValuesScale const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5117 };

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <SameFunc>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::System::Func_3<::UnityEngine::UIElements::Scale, ::UnityEngine::UIElements::Scale, bool>* ____SameFunc_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale, ____SameFunc_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale) == 0x90, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.Rotate, UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesRotate
class CORDL_TYPE StylePropertyAnimationSystem_ValuesRotate : public ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<::UnityEngine::UIElements::Rotate> {
public:
  // Declarations
  __declspec(property(get = get_SameFunc)) ::System::Func_3<::UnityEngine::UIElements::Rotate, ::UnityEngine::UIElements::Rotate, bool>* SameFunc;

  /// @brief Field <SameFunc>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__SameFunc_k__BackingField,
                      put = __cordl_internal_set__SameFunc_k__BackingField)) ::System::Func_3<::UnityEngine::UIElements::Rotate, ::UnityEngine::UIElements::Rotate, bool>* _SameFunc_k__BackingField;

  /// @brief Method IsSame, addr 0x710fd5c, size 0x44, virtual false, abstract: false, final false
  static inline bool IsSame(::UnityEngine::UIElements::Rotate a, ::UnityEngine::UIElements::Rotate b);

  /// @brief Method Lerp, addr 0x710ff04, size 0x19c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Rotate Lerp(::UnityEngine::UIElements::Rotate a, ::UnityEngine::UIElements::Rotate b, float_t t);

  static inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate* New_ctor();

  /// @brief Method UpdateComputedStyle, addr 0x710fda0, size 0xc8, virtual true, abstract: false, final true
  inline void UpdateComputedStyle();

  /// @brief Method UpdateComputedStyle, addr 0x710fe68, size 0x9c, virtual true, abstract: false, final true
  inline void UpdateComputedStyle(int32_t i);

  /// @brief Method UpdateValues, addr 0x71100a0, size 0xdc, virtual true, abstract: false, final true
  inline void UpdateValues();

  constexpr ::System::Func_3<::UnityEngine::UIElements::Rotate, ::UnityEngine::UIElements::Rotate, bool>* const& __cordl_internal_get__SameFunc_k__BackingField() const;

  constexpr ::System::Func_3<::UnityEngine::UIElements::Rotate, ::UnityEngine::UIElements::Rotate, bool>*& __cordl_internal_get__SameFunc_k__BackingField();

  constexpr void __cordl_internal_set__SameFunc_k__BackingField(::System::Func_3<::UnityEngine::UIElements::Rotate, ::UnityEngine::UIElements::Rotate, bool>* value);

  /// @brief Method .ctor, addr 0x711017c, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method get_SameFunc, addr 0x710fd54, size 0x8, virtual true, abstract: false, final false
  inline ::System::Func_3<::UnityEngine::UIElements::Rotate, ::UnityEngine::UIElements::Rotate, bool>* get_SameFunc();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StylePropertyAnimationSystem_ValuesRotate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem_ValuesRotate", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StylePropertyAnimationSystem_ValuesRotate(StylePropertyAnimationSystem_ValuesRotate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem_ValuesRotate", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StylePropertyAnimationSystem_ValuesRotate(StylePropertyAnimationSystem_ValuesRotate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5118 };

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <SameFunc>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::System::Func_3<::UnityEngine::UIElements::Rotate, ::UnityEngine::UIElements::Rotate, bool>* ____SameFunc_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate, ____SameFunc_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate) == 0x90, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.Ratio, UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesRatio
class CORDL_TYPE StylePropertyAnimationSystem_ValuesRatio : public ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<::UnityEngine::UIElements::Ratio> {
public:
  // Declarations
  __declspec(property(get = get_SameFunc)) ::System::Func_3<::UnityEngine::UIElements::Ratio, ::UnityEngine::UIElements::Ratio, bool>* SameFunc;

  /// @brief Field <SameFunc>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__SameFunc_k__BackingField,
                      put = __cordl_internal_set__SameFunc_k__BackingField)) ::System::Func_3<::UnityEngine::UIElements::Ratio, ::UnityEngine::UIElements::Ratio, bool>* _SameFunc_k__BackingField;

  /// @brief Method ConvertUnits, addr 0x7110254, size 0x28c, virtual true, abstract: false, final true
  inline bool ConvertUnits(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::by_ref<::UnityEngine::UIElements::Ratio> a,
                           ::by_ref<::UnityEngine::UIElements::Ratio> b);

  /// @brief Method IsSame, addr 0x7110220, size 0x34, virtual false, abstract: false, final false
  static inline bool IsSame(::UnityEngine::UIElements::Ratio a, ::UnityEngine::UIElements::Ratio b);

  /// @brief Method Lerp, addr 0x7110608, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Ratio Lerp(::UnityEngine::UIElements::Ratio a, ::UnityEngine::UIElements::Ratio b, float_t t);

  static inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRatio* New_ctor();

  /// @brief Method UpdateComputedStyle, addr 0x71104e0, size 0xac, virtual true, abstract: false, final true
  inline void UpdateComputedStyle();

  /// @brief Method UpdateComputedStyle, addr 0x711058c, size 0x7c, virtual true, abstract: false, final true
  inline void UpdateComputedStyle(int32_t i);

  /// @brief Method UpdateValues, addr 0x7110618, size 0x88, virtual true, abstract: false, final true
  inline void UpdateValues();

  constexpr ::System::Func_3<::UnityEngine::UIElements::Ratio, ::UnityEngine::UIElements::Ratio, bool>* const& __cordl_internal_get__SameFunc_k__BackingField() const;

  constexpr ::System::Func_3<::UnityEngine::UIElements::Ratio, ::UnityEngine::UIElements::Ratio, bool>*& __cordl_internal_get__SameFunc_k__BackingField();

  constexpr void __cordl_internal_set__SameFunc_k__BackingField(::System::Func_3<::UnityEngine::UIElements::Ratio, ::UnityEngine::UIElements::Ratio, bool>* value);

  /// @brief Method .ctor, addr 0x71106a0, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method get_SameFunc, addr 0x7110218, size 0x8, virtual true, abstract: false, final false
  inline ::System::Func_3<::UnityEngine::UIElements::Ratio, ::UnityEngine::UIElements::Ratio, bool>* get_SameFunc();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StylePropertyAnimationSystem_ValuesRatio();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem_ValuesRatio", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StylePropertyAnimationSystem_ValuesRatio(StylePropertyAnimationSystem_ValuesRatio&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem_ValuesRatio", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StylePropertyAnimationSystem_ValuesRatio(StylePropertyAnimationSystem_ValuesRatio const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5119 };

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <SameFunc>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::System::Func_3<::UnityEngine::UIElements::Ratio, ::UnityEngine::UIElements::Ratio, bool>* ____SameFunc_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRatio, ____SameFunc_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRatio) == 0x90, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1<T>, UnityEngine.UIElements.Translate
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesTranslate
class CORDL_TYPE StylePropertyAnimationSystem_ValuesTranslate : public ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<::UnityEngine::UIElements::Translate> {
public:
  // Declarations
  __declspec(property(get = get_SameFunc)) ::System::Func_3<::UnityEngine::UIElements::Translate, ::UnityEngine::UIElements::Translate, bool>* SameFunc;

  /// @brief Field <SameFunc>k__BackingField, offset 0x88, size 0x8
  __declspec(property(
      get = __cordl_internal_get__SameFunc_k__BackingField,
      put = __cordl_internal_set__SameFunc_k__BackingField)) ::System::Func_3<::UnityEngine::UIElements::Translate, ::UnityEngine::UIElements::Translate, bool>* _SameFunc_k__BackingField;

  /// @brief Method ConvertUnits, addr 0x71107c4, size 0x20, virtual true, abstract: false, final true
  inline bool ConvertUnits(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::by_ref<::UnityEngine::UIElements::Translate> a,
                           ::by_ref<::UnityEngine::UIElements::Translate> b);

  /// @brief Method IsSame, addr 0x7110744, size 0x80, virtual false, abstract: false, final false
  static inline bool IsSame(::UnityEngine::UIElements::Translate a, ::UnityEngine::UIElements::Translate b);

  /// @brief Method Lerp, addr 0x7110948, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Translate Lerp(::UnityEngine::UIElements::Translate a, ::UnityEngine::UIElements::Translate b, float_t t);

  static inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate* New_ctor();

  /// @brief Method UpdateComputedStyle, addr 0x71107e4, size 0xc8, virtual true, abstract: false, final true
  inline void UpdateComputedStyle();

  /// @brief Method UpdateComputedStyle, addr 0x71108ac, size 0x9c, virtual true, abstract: false, final true
  inline void UpdateComputedStyle(int32_t i);

  /// @brief Method UpdateValues, addr 0x71109c8, size 0xf4, virtual true, abstract: false, final true
  inline void UpdateValues();

  constexpr ::System::Func_3<::UnityEngine::UIElements::Translate, ::UnityEngine::UIElements::Translate, bool>* const& __cordl_internal_get__SameFunc_k__BackingField() const;

  constexpr ::System::Func_3<::UnityEngine::UIElements::Translate, ::UnityEngine::UIElements::Translate, bool>*& __cordl_internal_get__SameFunc_k__BackingField();

  constexpr void __cordl_internal_set__SameFunc_k__BackingField(::System::Func_3<::UnityEngine::UIElements::Translate, ::UnityEngine::UIElements::Translate, bool>* value);

  /// @brief Method .ctor, addr 0x7110abc, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method get_SameFunc, addr 0x711073c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Func_3<::UnityEngine::UIElements::Translate, ::UnityEngine::UIElements::Translate, bool>* get_SameFunc();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StylePropertyAnimationSystem_ValuesTranslate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem_ValuesTranslate", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StylePropertyAnimationSystem_ValuesTranslate(StylePropertyAnimationSystem_ValuesTranslate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem_ValuesTranslate", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StylePropertyAnimationSystem_ValuesTranslate(StylePropertyAnimationSystem_ValuesTranslate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5120 };

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <SameFunc>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::System::Func_3<::UnityEngine::UIElements::Translate, ::UnityEngine::UIElements::Translate, bool>* ____SameFunc_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate, ____SameFunc_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate) == 0x90, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1<T>, UnityEngine.UIElements.TransformOrigin
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesTransformOrigin
class CORDL_TYPE StylePropertyAnimationSystem_ValuesTransformOrigin : public ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<::UnityEngine::UIElements::TransformOrigin> {
public:
  // Declarations
  __declspec(property(get = get_SameFunc)) ::System::Func_3<::UnityEngine::UIElements::TransformOrigin, ::UnityEngine::UIElements::TransformOrigin, bool>* SameFunc;

  /// @brief Field <SameFunc>k__BackingField, offset 0x88, size 0x8
  __declspec(property(
      get = __cordl_internal_get__SameFunc_k__BackingField,
      put = __cordl_internal_set__SameFunc_k__BackingField)) ::System::Func_3<::UnityEngine::UIElements::TransformOrigin, ::UnityEngine::UIElements::TransformOrigin, bool>* _SameFunc_k__BackingField;

  /// @brief Method ConvertUnits, addr 0x7110bc8, size 0x20, virtual true, abstract: false, final true
  inline bool ConvertUnits(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::by_ref<::UnityEngine::UIElements::TransformOrigin> a,
                           ::by_ref<::UnityEngine::UIElements::TransformOrigin> b);

  /// @brief Method IsSame, addr 0x7110b60, size 0x68, virtual false, abstract: false, final false
  static inline bool IsSame(::UnityEngine::UIElements::TransformOrigin a, ::UnityEngine::UIElements::TransformOrigin b);

  /// @brief Method Lerp, addr 0x7110d4c, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::TransformOrigin Lerp(::UnityEngine::UIElements::TransformOrigin a, ::UnityEngine::UIElements::TransformOrigin b, float_t t);

  static inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin* New_ctor();

  /// @brief Method UpdateComputedStyle, addr 0x7110be8, size 0xc8, virtual true, abstract: false, final true
  inline void UpdateComputedStyle();

  /// @brief Method UpdateComputedStyle, addr 0x7110cb0, size 0x9c, virtual true, abstract: false, final true
  inline void UpdateComputedStyle(int32_t i);

  /// @brief Method UpdateValues, addr 0x7110dc8, size 0xf0, virtual true, abstract: false, final true
  inline void UpdateValues();

  constexpr ::System::Func_3<::UnityEngine::UIElements::TransformOrigin, ::UnityEngine::UIElements::TransformOrigin, bool>* const& __cordl_internal_get__SameFunc_k__BackingField() const;

  constexpr ::System::Func_3<::UnityEngine::UIElements::TransformOrigin, ::UnityEngine::UIElements::TransformOrigin, bool>*& __cordl_internal_get__SameFunc_k__BackingField();

  constexpr void __cordl_internal_set__SameFunc_k__BackingField(::System::Func_3<::UnityEngine::UIElements::TransformOrigin, ::UnityEngine::UIElements::TransformOrigin, bool>* value);

  /// @brief Method .ctor, addr 0x7110eb8, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method get_SameFunc, addr 0x7110b58, size 0x8, virtual true, abstract: false, final false
  inline ::System::Func_3<::UnityEngine::UIElements::TransformOrigin, ::UnityEngine::UIElements::TransformOrigin, bool>* get_SameFunc();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StylePropertyAnimationSystem_ValuesTransformOrigin();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem_ValuesTransformOrigin", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StylePropertyAnimationSystem_ValuesTransformOrigin(StylePropertyAnimationSystem_ValuesTransformOrigin&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem_ValuesTransformOrigin", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StylePropertyAnimationSystem_ValuesTransformOrigin(StylePropertyAnimationSystem_ValuesTransformOrigin const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5121 };

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <SameFunc>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::System::Func_3<::UnityEngine::UIElements::TransformOrigin, ::UnityEngine::UIElements::TransformOrigin, bool>* ____SameFunc_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin, ____SameFunc_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin) == 0x90, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BackgroundPosition, UnityEngine.UIElements.StylePropertyAnimationSystem::ValuesDiscrete`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesBackgroundPosition
class CORDL_TYPE StylePropertyAnimationSystem_ValuesBackgroundPosition
    : public ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesDiscrete_1<::UnityEngine::UIElements::BackgroundPosition> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition* New_ctor();

  /// @brief Method UpdateComputedStyle, addr 0x7110f54, size 0xc0, virtual true, abstract: false, final true
  inline void UpdateComputedStyle();

  /// @brief Method UpdateComputedStyle, addr 0x7111014, size 0x84, virtual true, abstract: false, final true
  inline void UpdateComputedStyle(int32_t i);

  /// @brief Method .ctor, addr 0x7111098, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StylePropertyAnimationSystem_ValuesBackgroundPosition();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem_ValuesBackgroundPosition", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StylePropertyAnimationSystem_ValuesBackgroundPosition(StylePropertyAnimationSystem_ValuesBackgroundPosition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem_ValuesBackgroundPosition", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StylePropertyAnimationSystem_ValuesBackgroundPosition(StylePropertyAnimationSystem_ValuesBackgroundPosition const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5122 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition) == 0x90, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BackgroundRepeat, UnityEngine.UIElements.StylePropertyAnimationSystem::ValuesDiscrete`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesBackgroundRepeat
class CORDL_TYPE StylePropertyAnimationSystem_ValuesBackgroundRepeat : public ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesDiscrete_1<::UnityEngine::UIElements::BackgroundRepeat> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat* New_ctor();

  /// @brief Method UpdateComputedStyle, addr 0x71110e4, size 0xac, virtual true, abstract: false, final true
  inline void UpdateComputedStyle();

  /// @brief Method UpdateComputedStyle, addr 0x7111190, size 0x7c, virtual true, abstract: false, final true
  inline void UpdateComputedStyle(int32_t i);

  /// @brief Method .ctor, addr 0x711120c, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StylePropertyAnimationSystem_ValuesBackgroundRepeat();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem_ValuesBackgroundRepeat", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StylePropertyAnimationSystem_ValuesBackgroundRepeat(StylePropertyAnimationSystem_ValuesBackgroundRepeat&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem_ValuesBackgroundRepeat", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StylePropertyAnimationSystem_ValuesBackgroundRepeat(StylePropertyAnimationSystem_ValuesBackgroundRepeat const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5123 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat) == 0x90, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BackgroundSize, UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesBackgroundSize
class CORDL_TYPE StylePropertyAnimationSystem_ValuesBackgroundSize : public ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<::UnityEngine::UIElements::BackgroundSize> {
public:
  // Declarations
  __declspec(property(get = get_SameFunc)) ::System::Func_3<::UnityEngine::UIElements::BackgroundSize, ::UnityEngine::UIElements::BackgroundSize, bool>* SameFunc;

  /// @brief Field <SameFunc>k__BackingField, offset 0x88, size 0x8
  __declspec(property(
      get = __cordl_internal_get__SameFunc_k__BackingField,
      put = __cordl_internal_set__SameFunc_k__BackingField)) ::System::Func_3<::UnityEngine::UIElements::BackgroundSize, ::UnityEngine::UIElements::BackgroundSize, bool>* _SameFunc_k__BackingField;

  /// @brief Method ConvertUnits, addr 0x71112c4, size 0x20, virtual true, abstract: false, final true
  inline bool ConvertUnits(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::by_ref<::UnityEngine::UIElements::BackgroundSize> a,
                           ::by_ref<::UnityEngine::UIElements::BackgroundSize> b);

  /// @brief Method IsSame, addr 0x7111260, size 0x64, virtual false, abstract: false, final false
  static inline bool IsSame(::UnityEngine::UIElements::BackgroundSize a, ::UnityEngine::UIElements::BackgroundSize b);

  /// @brief Method Lerp, addr 0x7111448, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::BackgroundSize Lerp(::UnityEngine::UIElements::BackgroundSize a, ::UnityEngine::UIElements::BackgroundSize b, float_t t);

  static inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize* New_ctor();

  /// @brief Method UpdateComputedStyle, addr 0x71112e4, size 0xc8, virtual true, abstract: false, final true
  inline void UpdateComputedStyle();

  /// @brief Method UpdateComputedStyle, addr 0x71113ac, size 0x9c, virtual true, abstract: false, final true
  inline void UpdateComputedStyle(int32_t i);

  /// @brief Method UpdateValues, addr 0x7111498, size 0xc4, virtual true, abstract: false, final true
  inline void UpdateValues();

  constexpr ::System::Func_3<::UnityEngine::UIElements::BackgroundSize, ::UnityEngine::UIElements::BackgroundSize, bool>* const& __cordl_internal_get__SameFunc_k__BackingField() const;

  constexpr ::System::Func_3<::UnityEngine::UIElements::BackgroundSize, ::UnityEngine::UIElements::BackgroundSize, bool>*& __cordl_internal_get__SameFunc_k__BackingField();

  constexpr void __cordl_internal_set__SameFunc_k__BackingField(::System::Func_3<::UnityEngine::UIElements::BackgroundSize, ::UnityEngine::UIElements::BackgroundSize, bool>* value);

  /// @brief Method .ctor, addr 0x711155c, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method get_SameFunc, addr 0x7111258, size 0x8, virtual true, abstract: false, final false
  inline ::System::Func_3<::UnityEngine::UIElements::BackgroundSize, ::UnityEngine::UIElements::BackgroundSize, bool>* get_SameFunc();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StylePropertyAnimationSystem_ValuesBackgroundSize();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem_ValuesBackgroundSize", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StylePropertyAnimationSystem_ValuesBackgroundSize(StylePropertyAnimationSystem_ValuesBackgroundSize&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem_ValuesBackgroundSize", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StylePropertyAnimationSystem_ValuesBackgroundSize(StylePropertyAnimationSystem_ValuesBackgroundSize const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5124 };

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <SameFunc>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::System::Func_3<::UnityEngine::UIElements::BackgroundSize, ::UnityEngine::UIElements::BackgroundSize, bool>* ____SameFunc_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize, ____SameFunc_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize) == 0x90, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesListFilterFunction
class CORDL_TYPE StylePropertyAnimationSystem_ValuesListFilterFunction
    : public ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::FilterFunction>*> {
public:
  // Declarations
  __declspec(property(get = get_SameFunc)) ::System::Func_3<::System::Collections::Generic::List_1<::UnityEngine::UIElements::FilterFunction>*,
                                                            ::System::Collections::Generic::List_1<::UnityEngine::UIElements::FilterFunction>*, bool>* SameFunc;

  /// @brief Field <SameFunc>k__BackingField, offset 0x88, size 0x8
  __declspec(property(
      get = __cordl_internal_get__SameFunc_k__BackingField,
      put = __cordl_internal_set__SameFunc_k__BackingField)) ::System::Func_3<::System::Collections::Generic::List_1<::UnityEngine::UIElements::FilterFunction>*,
                                                                              ::System::Collections::Generic::List_1<::UnityEngine::UIElements::FilterFunction>*, bool>* _SameFunc_k__BackingField;

  /// @brief Method AreFilterDefinitionsCompatible, addr 0x7111920, size 0xac, virtual false, abstract: false, final false
  static inline bool AreFilterDefinitionsCompatible(::UnityEngine::UIElements::FilterFunctionDefinition* filterDef1, ::UnityEngine::UIElements::FilterFunctionDefinition* filterDef2);

  /// @brief Method ConvertUnits, addr 0x7111788, size 0x198, virtual true, abstract: false, final true
  inline bool ConvertUnits(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop,
                           ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::UIElements::FilterFunction>*> a,
                           ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::UIElements::FilterFunction>*> b);

  /// @brief Method Copy, addr 0x71115f8, size 0x78, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::FilterFunction>* Copy(::System::Collections::Generic::List_1<::UnityEngine::UIElements::FilterFunction>* value);

  /// @brief Method GetFunctionOrDefault, addr 0x7111ef0, size 0x1ac, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::FilterFunction GetFunctionOrDefault(::by_ref<::System::Collections::Generic::List_1<::UnityEngine::UIElements::FilterFunction>*> srcList,
                                                                               ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::UIElements::FilterFunction>*> refList, int32_t index);

  /// @brief Method IsSame, addr 0x7111678, size 0x110, virtual false, abstract: false, final false
  static inline bool IsSame(::System::Collections::Generic::List_1<::UnityEngine::UIElements::FilterFunction>* a, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::FilterFunction>* b);

  /// @brief Method Lerp, addr 0x7111bc0, size 0x330, virtual false, abstract: false, final false
  static inline void Lerp(::System::Collections::Generic::List_1<::UnityEngine::UIElements::FilterFunction>* a, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::FilterFunction>* b,
                          ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::UIElements::FilterFunction>*> result, float_t t);

  /// @brief Method LerpFilterParameters, addr 0x7111af4, size 0xcc, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::FilterParameter LerpFilterParameters(::UnityEngine::UIElements::FilterParameter a, ::UnityEngine::UIElements::FilterParameter b, float_t t);

  static inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesListFilterFunction* New_ctor();

  /// @brief Method UpdateComputedStyle, addr 0x71119cc, size 0xac, virtual true, abstract: false, final true
  inline void UpdateComputedStyle();

  /// @brief Method UpdateComputedStyle, addr 0x7111a78, size 0x7c, virtual true, abstract: false, final true
  inline void UpdateComputedStyle(int32_t i);

  /// @brief Method UpdateValues, addr 0x711209c, size 0x94, virtual true, abstract: false, final true
  inline void UpdateValues();

  constexpr ::System::Func_3<::System::Collections::Generic::List_1<::UnityEngine::UIElements::FilterFunction>*, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::FilterFunction>*,
                             bool>* const&
  __cordl_internal_get__SameFunc_k__BackingField() const;

  constexpr ::System::Func_3<::System::Collections::Generic::List_1<::UnityEngine::UIElements::FilterFunction>*, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::FilterFunction>*,
                             bool>*&
  __cordl_internal_get__SameFunc_k__BackingField();

  constexpr void __cordl_internal_set__SameFunc_k__BackingField(::System::Func_3<::System::Collections::Generic::List_1<::UnityEngine::UIElements::FilterFunction>*,
                                                                                 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::FilterFunction>*, bool>* value);

  /// @brief Method .ctor, addr 0x7112130, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method get_SameFunc, addr 0x7111670, size 0x8, virtual true, abstract: false, final false
  inline ::System::Func_3<::System::Collections::Generic::List_1<::UnityEngine::UIElements::FilterFunction>*, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::FilterFunction>*, bool>*
  get_SameFunc();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StylePropertyAnimationSystem_ValuesListFilterFunction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem_ValuesListFilterFunction", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StylePropertyAnimationSystem_ValuesListFilterFunction(StylePropertyAnimationSystem_ValuesListFilterFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem_ValuesListFilterFunction", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StylePropertyAnimationSystem_ValuesListFilterFunction(StylePropertyAnimationSystem_ValuesListFilterFunction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5125 };

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <SameFunc>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::System::Func_3<::System::Collections::Generic::List_1<::UnityEngine::UIElements::FilterFunction>*, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::FilterFunction>*, bool>*
      ____SameFunc_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesListFilterFunction, ____SameFunc_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesListFilterFunction) == 0x90, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.MaterialDefinition, UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesMaterialDefinition
class CORDL_TYPE StylePropertyAnimationSystem_ValuesMaterialDefinition : public ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<::UnityEngine::UIElements::MaterialDefinition> {
public:
  // Declarations
  __declspec(property(get = get_SameFunc)) ::System::Func_3<::UnityEngine::UIElements::MaterialDefinition, ::UnityEngine::UIElements::MaterialDefinition, bool>* SameFunc;

  /// @brief Field <SameFunc>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__SameFunc_k__BackingField,
                      put = __cordl_internal_set__SameFunc_k__BackingField)) ::System::Func_3<::UnityEngine::UIElements::MaterialDefinition, ::UnityEngine::UIElements::MaterialDefinition, bool>*
      _SameFunc_k__BackingField;

  /// @brief Method ConvertUnits, addr 0x71123d0, size 0x254, virtual true, abstract: false, final true
  inline bool ConvertUnits(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::by_ref<::UnityEngine::UIElements::MaterialDefinition> a,
                           ::by_ref<::UnityEngine::UIElements::MaterialDefinition> b);

  /// @brief Method Copy, addr 0x71121cc, size 0x24, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::MaterialDefinition Copy(::UnityEngine::UIElements::MaterialDefinition value);

  /// @brief Method GetValueOrDefault, addr 0x7112848, size 0x174, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::MaterialPropertyValue GetValueOrDefault(::System::Collections::Generic::List_1<::UnityEngine::UIElements::MaterialPropertyValue>* srcList,
                                                                                   ::System::Collections::Generic::List_1<::UnityEngine::UIElements::MaterialPropertyValue>* refList, int32_t index);

  /// @brief Method IsSame, addr 0x71121f8, size 0x1d8, virtual false, abstract: false, final false
  static inline bool IsSame(::UnityEngine::UIElements::MaterialDefinition a, ::UnityEngine::UIElements::MaterialDefinition b);

  /// @brief Method Lerp, addr 0x71129bc, size 0x31c, virtual false, abstract: false, final false
  static inline void Lerp(::UnityEngine::UIElements::MaterialDefinition a, ::UnityEngine::UIElements::MaterialDefinition b, ::by_ref<::UnityEngine::UIElements::MaterialDefinition> result, float_t t);

  /// @brief Method LerpPropertyValues, addr 0x7112750, size 0xf8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::MaterialPropertyValue LerpPropertyValues(::UnityEngine::UIElements::MaterialPropertyValue a, ::UnityEngine::UIElements::MaterialPropertyValue b, float_t t);

  static inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesMaterialDefinition* New_ctor();

  /// @brief Method UpdateComputedStyle, addr 0x7112624, size 0xb0, virtual true, abstract: false, final true
  inline void UpdateComputedStyle();

  /// @brief Method UpdateComputedStyle, addr 0x71126d4, size 0x7c, virtual true, abstract: false, final true
  inline void UpdateComputedStyle(int32_t i);

  /// @brief Method UpdateValues, addr 0x7112cd8, size 0x98, virtual true, abstract: false, final true
  inline void UpdateValues();

  constexpr ::System::Func_3<::UnityEngine::UIElements::MaterialDefinition, ::UnityEngine::UIElements::MaterialDefinition, bool>* const& __cordl_internal_get__SameFunc_k__BackingField() const;

  constexpr ::System::Func_3<::UnityEngine::UIElements::MaterialDefinition, ::UnityEngine::UIElements::MaterialDefinition, bool>*& __cordl_internal_get__SameFunc_k__BackingField();

  constexpr void __cordl_internal_set__SameFunc_k__BackingField(::System::Func_3<::UnityEngine::UIElements::MaterialDefinition, ::UnityEngine::UIElements::MaterialDefinition, bool>* value);

  /// @brief Method .ctor, addr 0x7112d70, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method get_SameFunc, addr 0x71121f0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Func_3<::UnityEngine::UIElements::MaterialDefinition, ::UnityEngine::UIElements::MaterialDefinition, bool>* get_SameFunc();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StylePropertyAnimationSystem_ValuesMaterialDefinition();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem_ValuesMaterialDefinition", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StylePropertyAnimationSystem_ValuesMaterialDefinition(StylePropertyAnimationSystem_ValuesMaterialDefinition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem_ValuesMaterialDefinition", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StylePropertyAnimationSystem_ValuesMaterialDefinition(StylePropertyAnimationSystem_ValuesMaterialDefinition const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5126 };

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <SameFunc>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::System::Func_3<::UnityEngine::UIElements::MaterialDefinition, ::UnityEngine::UIElements::MaterialDefinition, bool>* ____SameFunc_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesMaterialDefinition, ____SameFunc_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesMaterialDefinition) == 0x90, "Size mismatch!");

} // namespace UnityEngine::UIElements
// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem
class CORDL_TYPE StylePropertyAnimationSystem : public ::System::Object {
public:
  // Declarations
  template <typename TTimingData, typename TStyleData> using AnimationDataSet_2 = ::UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData, TStyleData>;

  using ElementPropertyPair = ::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair;

  using TransitionState = ::UnityEngine::UIElements::StylePropertyAnimationSystem_TransitionState;

  using Values = ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values;

  using ValuesBackground = ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground;

  using ValuesBackgroundPosition = ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition;

  using ValuesBackgroundRepeat = ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat;

  using ValuesBackgroundSize = ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize;

  using ValuesColor = ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor;

  template <typename T> using ValuesDiscrete_1 = ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesDiscrete_1<T>;

  using ValuesEnum = ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesEnum;

  using ValuesFloat = ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat;

  using ValuesFont = ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont;

  using ValuesFontDefinition = ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition;

  using ValuesInt = ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt;

  using ValuesLength = ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength;

  using ValuesListFilterFunction = ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesListFilterFunction;

  using ValuesMaterialDefinition = ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesMaterialDefinition;

  using ValuesRatio = ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRatio;

  using ValuesRotate = ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate;

  using ValuesScale = ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale;

  using ValuesTextShadow = ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow;

  using ValuesTransformOrigin = ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin;

  using ValuesTranslate = ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate;

  template <typename T> using Values_1 = ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>;

  /// @brief Field m_AllValues, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AllValues,
                      put = __cordl_internal_set_m_AllValues)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>* m_AllValues;

  /// @brief Field m_BackgroundPosition, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BackgroundPosition,
                      put = __cordl_internal_set_m_BackgroundPosition)) ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition* m_BackgroundPosition;

  /// @brief Field m_BackgroundRepeat, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BackgroundRepeat,
                      put = __cordl_internal_set_m_BackgroundRepeat)) ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat* m_BackgroundRepeat;

  /// @brief Field m_BackgroundSize, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BackgroundSize,
                      put = __cordl_internal_set_m_BackgroundSize)) ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize* m_BackgroundSize;

  /// @brief Field m_Backgrounds, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Backgrounds, put = __cordl_internal_set_m_Backgrounds)) ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground* m_Backgrounds;

  /// @brief Field m_Colors, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Colors, put = __cordl_internal_set_m_Colors)) ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor* m_Colors;

  /// @brief Field m_CurrentTime, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentTime, put = __cordl_internal_set_m_CurrentTime)) double_t m_CurrentTime;

  /// @brief Field m_Enums, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Enums, put = __cordl_internal_set_m_Enums)) ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesEnum* m_Enums;

  /// @brief Field m_FilterFunctions, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FilterFunctions,
                      put = __cordl_internal_set_m_FilterFunctions)) ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesListFilterFunction* m_FilterFunctions;

  /// @brief Field m_Floats, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Floats, put = __cordl_internal_set_m_Floats)) ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat* m_Floats;

  /// @brief Field m_FontDefinitions, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FontDefinitions,
                      put = __cordl_internal_set_m_FontDefinitions)) ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition* m_FontDefinitions;

  /// @brief Field m_Fonts, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Fonts, put = __cordl_internal_set_m_Fonts)) ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont* m_Fonts;

  /// @brief Field m_Ints, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ints, put = __cordl_internal_set_m_Ints)) ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt* m_Ints;

  /// @brief Field m_Lengths, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Lengths, put = __cordl_internal_set_m_Lengths)) ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength* m_Lengths;

  /// @brief Field m_MaterialDefinition, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MaterialDefinition,
                      put = __cordl_internal_set_m_MaterialDefinition)) ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesMaterialDefinition* m_MaterialDefinition;

  /// @brief Field m_PropertyToValues, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PropertyToValues,
                      put = __cordl_internal_set_m_PropertyToValues)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId,
                                                                                                                   ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>* m_PropertyToValues;

  /// @brief Field m_Ratio, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ratio, put = __cordl_internal_set_m_Ratio)) ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRatio* m_Ratio;

  /// @brief Field m_Rotate, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Rotate, put = __cordl_internal_set_m_Rotate)) ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate* m_Rotate;

  /// @brief Field m_Scale, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Scale, put = __cordl_internal_set_m_Scale)) ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale* m_Scale;

  /// @brief Field m_TextShadows, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextShadows, put = __cordl_internal_set_m_TextShadows)) ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow* m_TextShadows;

  /// @brief Field m_TransformOrigin, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TransformOrigin,
                      put = __cordl_internal_set_m_TransformOrigin)) ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin* m_TransformOrigin;

  /// @brief Field m_Translate, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Translate, put = __cordl_internal_set_m_Translate)) ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate* m_Translate;

  /// @brief Convert operator to "::UnityEngine::UIElements::IStylePropertyAnimationSystem"
  constexpr operator ::UnityEngine::UIElements::IStylePropertyAnimationSystem*() noexcept;

  /// @brief Method CancelAllAnimations, addr 0x710dba8, size 0x10c, virtual true, abstract: false, final true
  inline void CancelAllAnimations();

  /// @brief Method CancelAllAnimations, addr 0x710dcb4, size 0x23c, virtual true, abstract: false, final true
  inline void CancelAllAnimations(::UnityEngine::UIElements::VisualElement* owner);

  /// @brief Method CancelAnimation, addr 0x710def0, size 0xac, virtual true, abstract: false, final true
  inline void CancelAnimation(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id);

  /// @brief Method CurrentTimeSeconds, addr 0x710e16c, size 0x8, virtual false, abstract: false, final false
  inline double_t CurrentTimeSeconds();

  /// @brief Method GetAllAnimations, addr 0x710e048, size 0x124, virtual true, abstract: false, final true
  inline void GetAllAnimations(::UnityEngine::UIElements::VisualElement* owner, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>* propertyIds);

  /// @brief Method GetOrCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::default_constructor_constraint<T>)
  inline T GetOrCreate(::by_ref<T> values);

  static inline ::UnityEngine::UIElements::StylePropertyAnimationSystem* New_ctor(::UnityEngine::UIElements::BaseVisualElementPanel* p);

  /// @brief Method StartTransition, addr 0x710d9d4, size 0xe4, virtual true, abstract: false, final true
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop,
                              ::System::Collections::Generic::List_1<::UnityEngine::UIElements::FilterFunction>* startValue,
                              ::System::Collections::Generic::List_1<::UnityEngine::UIElements::FilterFunction>* endValue, int32_t durationMs, int32_t delayMs,
                              /* [NotNull] */ ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method StartTransition, addr 0x710cc68, size 0x118, virtual true, abstract: false, final true
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::UnityEngine::Color startValue,
                              ::UnityEngine::Color endValue, int32_t durationMs, int32_t delayMs, /* [NotNull] */ ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method StartTransition, addr 0x710d048, size 0xe4, virtual true, abstract: false, final true
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::UnityEngine::Font* startValue,
                              ::UnityEngine::Font* endValue, int32_t durationMs, int32_t delayMs, /* [NotNull] */ ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method StartTransition, addr 0x710ce64, size 0xf4, virtual true, abstract: false, final true
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::UnityEngine::UIElements::Background startValue,
                              ::UnityEngine::UIElements::Background endValue, int32_t durationMs, int32_t delayMs, /* [NotNull] */ ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method StartTransition, addr 0x710d6fc, size 0xf0, virtual true, abstract: false, final true
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::UnityEngine::UIElements::BackgroundPosition startValue,
                              ::UnityEngine::UIElements::BackgroundPosition endValue, int32_t durationMs, int32_t delayMs, /* [NotNull] */ ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method StartTransition, addr 0x710d7ec, size 0xe4, virtual true, abstract: false, final true
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::UnityEngine::UIElements::BackgroundRepeat startValue,
                              ::UnityEngine::UIElements::BackgroundRepeat endValue, int32_t durationMs, int32_t delayMs, /* [NotNull] */ ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method StartTransition, addr 0x710d8d0, size 0x104, virtual true, abstract: false, final true
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::UnityEngine::UIElements::BackgroundSize startValue,
                              ::UnityEngine::UIElements::BackgroundSize endValue, int32_t durationMs, int32_t delayMs, /* [NotNull] */ ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method StartTransition, addr 0x710cf58, size 0xf0, virtual true, abstract: false, final true
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::UnityEngine::UIElements::FontDefinition startValue,
                              ::UnityEngine::UIElements::FontDefinition endValue, int32_t durationMs, int32_t delayMs, /* [NotNull] */ ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method StartTransition, addr 0x710cb84, size 0xe4, virtual true, abstract: false, final true
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::UnityEngine::UIElements::Length startValue,
                              ::UnityEngine::UIElements::Length endValue, int32_t durationMs, int32_t delayMs, /* [NotNull] */ ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method StartTransition, addr 0x710dab8, size 0xf0, virtual true, abstract: false, final true
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::UnityEngine::UIElements::MaterialDefinition startValue,
                              ::UnityEngine::UIElements::MaterialDefinition endValue, int32_t durationMs, int32_t delayMs, /* [NotNull] */ ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method StartTransition, addr 0x710d528, size 0xd0, virtual true, abstract: false, final true
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::UnityEngine::UIElements::Ratio startValue,
                              ::UnityEngine::UIElements::Ratio endValue, int32_t durationMs, int32_t delayMs, /* [NotNull] */ ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method StartTransition, addr 0x710d320, size 0x104, virtual true, abstract: false, final true
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::UnityEngine::UIElements::Rotate startValue,
                              ::UnityEngine::UIElements::Rotate endValue, int32_t durationMs, int32_t delayMs, /* [NotNull] */ ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method StartTransition, addr 0x710d230, size 0xf0, virtual true, abstract: false, final true
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::UnityEngine::UIElements::Scale startValue,
                              ::UnityEngine::UIElements::Scale endValue, int32_t durationMs, int32_t delayMs, /* [NotNull] */ ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method StartTransition, addr 0x710d12c, size 0x104, virtual true, abstract: false, final true
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::UnityEngine::UIElements::TextShadow startValue,
                              ::UnityEngine::UIElements::TextShadow endValue, int32_t durationMs, int32_t delayMs, /* [NotNull] */ ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method StartTransition, addr 0x710d5f8, size 0x104, virtual true, abstract: false, final true
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::UnityEngine::UIElements::TransformOrigin startValue,
                              ::UnityEngine::UIElements::TransformOrigin endValue, int32_t durationMs, int32_t delayMs, /* [NotNull] */ ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method StartTransition, addr 0x710d424, size 0x104, virtual true, abstract: false, final true
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::UnityEngine::UIElements::Translate startValue,
                              ::UnityEngine::UIElements::Translate endValue, int32_t durationMs, int32_t delayMs, /* [NotNull] */ ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method StartTransition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, T startValue, T endValue, int32_t durationMs,
                              int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve, ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>* values);

  /// @brief Method StartTransition, addr 0x710c9d0, size 0xd0, virtual true, abstract: false, final true
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, float_t startValue, float_t endValue, int32_t durationMs,
                              int32_t delayMs, /* [NotNull] */ ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method StartTransition, addr 0x710caa0, size 0xe4, virtual true, abstract: false, final true
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, int32_t startValue, int32_t endValue, int32_t durationMs,
                              int32_t delayMs, /* [NotNull] */ ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method StartTransitionEnum, addr 0x710cd80, size 0xe4, virtual true, abstract: false, final true
  inline bool StartTransitionEnum(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, int32_t startValue, int32_t endValue,
                                  int32_t durationMs, int32_t delayMs, /* [NotNull] */ ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method Update, addr 0x710e174, size 0xc0, virtual true, abstract: false, final true
  inline void Update(double_t updateTime);

  /// @brief Method UpdateAnimation, addr 0x710df9c, size 0xac, virtual true, abstract: false, final true
  inline void UpdateAnimation(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id);

  /// @brief Method UpdateTracking, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void UpdateTracking(::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>* values);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>* const& __cordl_internal_get_m_AllValues() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>*& __cordl_internal_get_m_AllValues();

  constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition* const& __cordl_internal_get_m_BackgroundPosition() const;

  constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition*& __cordl_internal_get_m_BackgroundPosition();

  constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat* const& __cordl_internal_get_m_BackgroundRepeat() const;

  constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat*& __cordl_internal_get_m_BackgroundRepeat();

  constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize* const& __cordl_internal_get_m_BackgroundSize() const;

  constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize*& __cordl_internal_get_m_BackgroundSize();

  constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground* const& __cordl_internal_get_m_Backgrounds() const;

  constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground*& __cordl_internal_get_m_Backgrounds();

  constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor* const& __cordl_internal_get_m_Colors() const;

  constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor*& __cordl_internal_get_m_Colors();

  constexpr double_t const& __cordl_internal_get_m_CurrentTime() const;

  constexpr double_t& __cordl_internal_get_m_CurrentTime();

  constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesEnum* const& __cordl_internal_get_m_Enums() const;

  constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesEnum*& __cordl_internal_get_m_Enums();

  constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesListFilterFunction* const& __cordl_internal_get_m_FilterFunctions() const;

  constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesListFilterFunction*& __cordl_internal_get_m_FilterFunctions();

  constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat* const& __cordl_internal_get_m_Floats() const;

  constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat*& __cordl_internal_get_m_Floats();

  constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition* const& __cordl_internal_get_m_FontDefinitions() const;

  constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition*& __cordl_internal_get_m_FontDefinitions();

  constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont* const& __cordl_internal_get_m_Fonts() const;

  constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont*& __cordl_internal_get_m_Fonts();

  constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt* const& __cordl_internal_get_m_Ints() const;

  constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt*& __cordl_internal_get_m_Ints();

  constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength* const& __cordl_internal_get_m_Lengths() const;

  constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength*& __cordl_internal_get_m_Lengths();

  constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesMaterialDefinition* const& __cordl_internal_get_m_MaterialDefinition() const;

  constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesMaterialDefinition*& __cordl_internal_get_m_MaterialDefinition();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>* const&
  __cordl_internal_get_m_PropertyToValues() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>*&
  __cordl_internal_get_m_PropertyToValues();

  constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRatio* const& __cordl_internal_get_m_Ratio() const;

  constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRatio*& __cordl_internal_get_m_Ratio();

  constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate* const& __cordl_internal_get_m_Rotate() const;

  constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate*& __cordl_internal_get_m_Rotate();

  constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale* const& __cordl_internal_get_m_Scale() const;

  constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale*& __cordl_internal_get_m_Scale();

  constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow* const& __cordl_internal_get_m_TextShadows() const;

  constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow*& __cordl_internal_get_m_TextShadows();

  constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin* const& __cordl_internal_get_m_TransformOrigin() const;

  constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin*& __cordl_internal_get_m_TransformOrigin();

  constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate* const& __cordl_internal_get_m_Translate() const;

  constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate*& __cordl_internal_get_m_Translate();

  constexpr void __cordl_internal_set_m_AllValues(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>* value);

  constexpr void __cordl_internal_set_m_BackgroundPosition(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition* value);

  constexpr void __cordl_internal_set_m_BackgroundRepeat(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat* value);

  constexpr void __cordl_internal_set_m_BackgroundSize(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize* value);

  constexpr void __cordl_internal_set_m_Backgrounds(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground* value);

  constexpr void __cordl_internal_set_m_Colors(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor* value);

  constexpr void __cordl_internal_set_m_CurrentTime(double_t value);

  constexpr void __cordl_internal_set_m_Enums(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesEnum* value);

  constexpr void __cordl_internal_set_m_FilterFunctions(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesListFilterFunction* value);

  constexpr void __cordl_internal_set_m_Floats(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat* value);

  constexpr void __cordl_internal_set_m_FontDefinitions(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition* value);

  constexpr void __cordl_internal_set_m_Fonts(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont* value);

  constexpr void __cordl_internal_set_m_Ints(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt* value);

  constexpr void __cordl_internal_set_m_Lengths(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength* value);

  constexpr void __cordl_internal_set_m_MaterialDefinition(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesMaterialDefinition* value);

  constexpr void __cordl_internal_set_m_PropertyToValues(
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>* value);

  constexpr void __cordl_internal_set_m_Ratio(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRatio* value);

  constexpr void __cordl_internal_set_m_Rotate(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate* value);

  constexpr void __cordl_internal_set_m_Scale(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale* value);

  constexpr void __cordl_internal_set_m_TextShadows(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow* value);

  constexpr void __cordl_internal_set_m_TransformOrigin(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin* value);

  constexpr void __cordl_internal_set_m_Translate(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate* value);

  /// @brief Method .ctor, addr 0x710c8c8, size 0x108, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::BaseVisualElementPanel* p);

  /// @brief Convert to "::UnityEngine::UIElements::IStylePropertyAnimationSystem"
  constexpr ::UnityEngine::UIElements::IStylePropertyAnimationSystem* i___UnityEngine__UIElements__IStylePropertyAnimationSystem() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StylePropertyAnimationSystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StylePropertyAnimationSystem(StylePropertyAnimationSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StylePropertyAnimationSystem(StylePropertyAnimationSystem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5127 };

  /// @brief Field m_CurrentTime, offset: 0x10, size: 0x8, def value: None
  double_t ___m_CurrentTime;

  /// @brief Field m_Floats, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat* ___m_Floats;

  /// @brief Field m_Ints, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt* ___m_Ints;

  /// @brief Field m_Lengths, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength* ___m_Lengths;

  /// @brief Field m_Colors, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor* ___m_Colors;

  /// @brief Field m_Enums, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesEnum* ___m_Enums;

  /// @brief Field m_Backgrounds, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground* ___m_Backgrounds;

  /// @brief Field m_FontDefinitions, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition* ___m_FontDefinitions;

  /// @brief Field m_Fonts, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont* ___m_Fonts;

  /// @brief Field m_TextShadows, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow* ___m_TextShadows;

  /// @brief Field m_Scale, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale* ___m_Scale;

  /// @brief Field m_Rotate, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate* ___m_Rotate;

  /// @brief Field m_Ratio, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRatio* ___m_Ratio;

  /// @brief Field m_Translate, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate* ___m_Translate;

  /// @brief Field m_TransformOrigin, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin* ___m_TransformOrigin;

  /// @brief Field m_BackgroundPosition, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition* ___m_BackgroundPosition;

  /// @brief Field m_BackgroundRepeat, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat* ___m_BackgroundRepeat;

  /// @brief Field m_BackgroundSize, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize* ___m_BackgroundSize;

  /// @brief Field m_FilterFunctions, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesListFilterFunction* ___m_FilterFunctions;

  /// @brief Field m_MaterialDefinition, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesMaterialDefinition* ___m_MaterialDefinition;

  /// @brief Field m_AllValues, offset: 0xb0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>* ___m_AllValues;

  /// @brief Field m_PropertyToValues, offset: 0xb8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>* ___m_PropertyToValues;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_CurrentTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_Floats) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_Ints) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_Lengths) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_Colors) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_Enums) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_Backgrounds) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_FontDefinitions) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_Fonts) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_TextShadows) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_Scale) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_Rotate) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_Ratio) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_Translate) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_TransformOrigin) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_BackgroundPosition) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_BackgroundRepeat) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_BackgroundSize) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_FilterFunctions) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_MaterialDefinition) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_AllValues) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_PropertyToValues) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::StylePropertyAnimationSystem) == 0xc0, "Size mismatch!");

} // namespace UnityEngine::UIElements
