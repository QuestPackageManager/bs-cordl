#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_def.hpp"
#include "UnityEngine/UIElements/zzzz__Background_def.hpp"
#include "UnityEngine/UIElements/zzzz__FontDefinition_def.hpp"
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
#include "UnityEngine/UIElements/zzzz__Rotate_def.hpp"
#include "UnityEngine/UIElements/zzzz__Scale_def.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyAnimationSystem_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextShadow_def.hpp"
#include "UnityEngine/UIElements/zzzz__TransformOrigin_def.hpp"
#include "UnityEngine/UIElements/zzzz__Translate_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StylePropertyAnimationSystem)
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::Pool {
template <typename T> class ObjectPool_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace GlobalNamespace {
template <typename T> class __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesLength;
}
namespace UnityEngine::UIElements {
template <typename T> class __StylePropertyAnimationSystem__Values_1;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesRotate;
}
namespace UnityEngine::UIElements {
struct Rotate;
}
namespace UnityEngine::UIElements {
struct __StylePropertyAnimationSystem__ElementPropertyPair;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::UIElements {
struct Scale;
}
namespace UnityEngine::UIElements {
struct Background;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesFontDefinition;
}
namespace UnityEngine::UIElements {
struct TransformOrigin;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__Values;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesFloat;
}
namespace UnityEngine::UIElements {
struct __StylePropertyAnimationSystem__TransitionState;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::UIElements {
struct FontDefinition;
}
namespace UnityEngine::UIElements {
struct Translate;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesTransformOrigin;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesInt;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesColor;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesScale;
}
namespace UnityEngine::UIElements {
class IStylePropertyAnimationSystem;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesTextShadow;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesTranslate;
}
namespace UnityEngine::UIElements {
struct TextShadow;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesBackground;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine::UIElements {
template <typename TTimingData, typename TStyleData> struct __StylePropertyAnimationSystem__AnimationDataSet_2;
}
namespace UnityEngine::UIElements {
template <typename T> class __StylePropertyAnimationSystem__ValuesDiscrete_1;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesFont;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace GlobalNamespace {
template <typename T> struct __StylePropertyAnimationSystem__Values_1__StyleData;
}
namespace GlobalNamespace {
template <typename T> class __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState;
}
namespace GlobalNamespace {
template <typename T> struct __StylePropertyAnimationSystem__Values_1__TimingData;
}
namespace GlobalNamespace {
template <typename T> struct __StylePropertyAnimationSystem__Values_1__EmptyData;
}
namespace GlobalNamespace {
class __StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct __StylePropertyAnimationSystem__TransitionState;
}
namespace GlobalNamespace {
class __StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer;
}
namespace GlobalNamespace {
template <typename T> class __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState;
}
namespace GlobalNamespace {
template <typename T> class __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c;
}
namespace UnityEngine::UIElements {
class StylePropertyAnimationSystem;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__Values;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesBackground;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesColor;
}
namespace UnityEngine::UIElements {
template <typename T> class __StylePropertyAnimationSystem__ValuesDiscrete_1;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesFloat;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesFont;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesFontDefinition;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesInt;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesLength;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesRotate;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesScale;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesTextShadow;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesTransformOrigin;
}
namespace UnityEngine::UIElements {
class __StylePropertyAnimationSystem__ValuesTranslate;
}
namespace UnityEngine::UIElements {
template <typename T> class __StylePropertyAnimationSystem__Values_1;
}
namespace GlobalNamespace {
template <typename T> struct __StylePropertyAnimationSystem__Values_1__EmptyData;
}
namespace GlobalNamespace {
template <typename T> struct __StylePropertyAnimationSystem__Values_1__StyleData;
}
namespace GlobalNamespace {
template <typename T> struct __StylePropertyAnimationSystem__Values_1__TimingData;
}
namespace UnityEngine::UIElements {
template <typename TTimingData, typename TStyleData> struct __StylePropertyAnimationSystem__AnimationDataSet_2;
}
namespace UnityEngine::UIElements {
struct __StylePropertyAnimationSystem__ElementPropertyPair;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState);
MARK_REF_PTR_T(::GlobalNamespace::__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c);
MARK_REF_PTR_T(::UnityEngine::UIElements::StylePropertyAnimationSystem);
MARK_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values);
MARK_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground);
MARK_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesDiscrete_1);
MARK_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat);
MARK_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont);
MARK_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition);
MARK_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt);
MARK_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength);
MARK_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate);
MARK_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale);
MARK_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow);
MARK_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin);
MARK_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1);
MARK_GEN_VAL_T(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData);
MARK_GEN_VAL_T(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData);
MARK_GEN_VAL_T(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData);
MARK_GEN_VAL_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2);
MARK_VAL_T(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair);
// Type: ::TransitionState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6918))
// CS Name: ::StylePropertyAnimationSystem::TransitionState
struct CORDL_TYPE __StylePropertyAnimationSystem__TransitionState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____StylePropertyAnimationSystem__TransitionState_Unwrapped
  enum struct ____StylePropertyAnimationSystem__TransitionState_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Running = static_cast<int32_t>(0x1),
    __E_Started = static_cast<int32_t>(0x2),
    __E_Ended = static_cast<int32_t>(0x4),
    __E_Canceled = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____StylePropertyAnimationSystem__TransitionState_Unwrapped() const noexcept {
    return static_cast<____StylePropertyAnimationSystem__TransitionState_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __StylePropertyAnimationSystem__TransitionState(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __StylePropertyAnimationSystem__TransitionState();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState const None;

  /// @brief Field Running value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState const Running;

  /// @brief Field Started value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState const Started;

  /// @brief Field Ended value: static_cast<int32_t>(0x4)
  static ::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState const Ended;

  /// @brief Field Canceled value: static_cast<int32_t>(0x8)
  static ::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState const Canceled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::AnimationDataSet`2
// SizeInfo { instance_size: 48, native_size: 64, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename TTimingData, typename TStyleData>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6919))
// CS Name: ::StylePropertyAnimationSystem::AnimationDataSet`2<TTimingData,TStyleData>
struct CORDL_TYPE __StylePropertyAnimationSystem__AnimationDataSet_2 {
public:
  // Declarations
  __declspec(property(get = get_capacity, put = set_capacity)) int32_t capacity;

  /// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
  inline int32_t get_capacity();

  /// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void set_capacity(int32_t value);

  /// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void LocalInit();

  /// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<TTimingData, TStyleData> Create();

  /// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool IndexOf(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ByRef<int32_t> index);

  /// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void Add(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, TTimingData timingData, TStyleData styleData);

  /// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void Remove(int32_t cancelledIndex);

  /// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void Replace(int32_t index, TTimingData timingData, TStyleData styleData);

  /// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void RemoveAll(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void RemoveAll();

  /// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void GetActivePropertiesForElement(::UnityEngine::UIElements::VisualElement* ve,
                                            ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>* outProperties);

  // Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>", modifiers: "", def_value: None },
  // CppParam { name: "properties", ty: "::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>", modifiers: "", def_value:
  // None }, CppParam { name: "timing", ty: "::ArrayW<TTimingData,::Array<TTimingData>*>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<TStyleData,::Array<TStyleData>*>",
  // modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty:
  // "::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*", modifiers: "", def_value: None }]
  constexpr __StylePropertyAnimationSystem__AnimationDataSet_2(
      ::ArrayW<::UnityEngine::UIElements::VisualElement*, ::Array<::UnityEngine::UIElements::VisualElement*>*> elements,
      ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> properties,
      ::ArrayW<TTimingData, ::Array<TTimingData>*> timing, ::ArrayW<TStyleData, ::Array<TStyleData>*> style, int32_t count,
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair, int32_t>* indices) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __StylePropertyAnimationSystem__AnimationDataSet_2();

  /// @brief Field elements, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::VisualElement*, ::Array<::UnityEngine::UIElements::VisualElement*>*> elements;

  /// @brief Field properties, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> properties;

  /// @brief Field timing, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<TTimingData, ::Array<TTimingData>*> timing;

  /// @brief Field style, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<TStyleData, ::Array<TStyleData>*> style;

  /// @brief Field count, offset: 0x20, size: 0x4, def value: None
  int32_t count;

  /// @brief Field indices, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair, int32_t>* indices;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Type: ::EqualityComparer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6920))
// CS Name: ::StylePropertyAnimationSystem::ElementPropertyPair::EqualityComparer*
class CORDL_TYPE __StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>"
  constexpr operator ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>*() noexcept;

  /// @brief Method Equals addr 0x2c5e404 size 0x18 virtual true final true
  inline bool Equals(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair x, ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair y);

  /// @brief Method GetHashCode addr 0x2c5e41c size 0x34 virtual true final true
  inline int32_t GetHashCode(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair obj);

  static inline ::GlobalNamespace::__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer* New_ctor();

  /// @brief Method .ctor addr 0x2c5e3fc size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer(__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer(__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ElementPropertyPair
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7573))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6921))
// CS Name: ::StylePropertyAnimationSystem::ElementPropertyPair
struct CORDL_TYPE __StylePropertyAnimationSystem__ElementPropertyPair {
public:
  // Declarations
  using EqualityComparer = ::GlobalNamespace::__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer;

  /// @brief Field Comparer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Comparer,
                             put = setStaticF_Comparer))::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>* Comparer;

  static inline void setStaticF_Comparer(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>* value);

  static inline ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>* getStaticF_Comparer();

  /// @brief Method .ctor addr 0x2c5e378 size 0xc virtual false final false
  inline void _ctor(::UnityEngine::UIElements::VisualElement* element, ::UnityEngine::UIElements::StyleSheets::StylePropertyId property);

  // Ctor Parameters [CppParam { name: "element", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }, CppParam { name: "property", ty:
  // "::UnityEngine::UIElements::StyleSheets::StylePropertyId", modifiers: "", def_value: None }]
  constexpr __StylePropertyAnimationSystem__ElementPropertyPair(::UnityEngine::UIElements::VisualElement* element, ::UnityEngine::UIElements::StyleSheets::StylePropertyId property) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __StylePropertyAnimationSystem__ElementPropertyPair();

  /// @brief Field element, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* element;

  /// @brief Field property, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleSheets::StylePropertyId property;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair, element) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair, property) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::Values
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6922))
// CS Name: ::StylePropertyAnimationSystem::Values*
class CORDL_TYPE __StylePropertyAnimationSystem__Values : public ::System::Object {
public:
  // Declarations
  /// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void CancelAllAnimations();

  /// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void CancelAllAnimations(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method CancelAnimation addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void CancelAnimation(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id);

  /// @brief Method UpdateAnimation addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void UpdateAnimation(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id);

  /// @brief Method GetAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void GetAllAnimations(::UnityEngine::UIElements::VisualElement* ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>* outPropertyIds);

  /// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Update(int64_t currentTimeMs);

  /// @brief Method UpdateValues addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void UpdateValues();

  /// @brief Method UpdateComputedStyle addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void UpdateComputedStyle();

  /// @brief Method UpdateComputedStyle addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void UpdateComputedStyle(int32_t i);

  static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values* New_ctor();

  /// @brief Method .ctor addr 0x2c5e450 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StylePropertyAnimationSystem__Values(__StylePropertyAnimationSystem__Values&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StylePropertyAnimationSystem__Values(__StylePropertyAnimationSystem__Values const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StylePropertyAnimationSystem__Values();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6923))
// CS Name: ::StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState::<>c<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<T>* __9;

  static inline void setStaticF___9(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<T>* value);

  static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<T>* getStaticF___9();

  static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <.cctor>b__11_0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>* __cctor_b__11_0();

  // Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::TransitionEventsFrameState
// SizeInfo { instance_size: 48, native_size: 44, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6924))
// CS Name: ::StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<T>;

  /// @brief Field elementPropertyStateDelta, offset 0x10, size 0x8
  __declspec(property(get = __get_elementPropertyStateDelta, put = __set_elementPropertyStateDelta))::System::Collections::Generic::Dictionary_2<
      ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair, ::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>* elementPropertyStateDelta;

  /// @brief Field elementPropertyQueuedEvents, offset 0x18, size 0x8
  __declspec(property(get = __get_elementPropertyQueuedEvents, put = __set_elementPropertyQueuedEvents))::System::Collections::Generic::Dictionary_2<
      ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair, ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>* elementPropertyQueuedEvents;

  /// @brief Field panel, offset 0x20, size 0x8
  __declspec(property(get = __get_panel, put = __set_panel))::UnityEngine::UIElements::IPanel* panel;

  /// @brief Field m_ChangesCount, offset 0x28, size 0x4
  __declspec(property(get = __get_m_ChangesCount, put = __set_m_ChangesCount)) int32_t m_ChangesCount;

  /// @brief Field k_EventQueuePool, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_EventQueuePool,
                             put = setStaticF_k_EventQueuePool))::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>* k_EventQueuePool;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,
                                                         ::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>*&
  __get_elementPropertyStateDelta();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,
                                                                                             ::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>*> const&
  __get_elementPropertyStateDelta() const;

  constexpr void __set_elementPropertyStateDelta(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,
                                                                                              ::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,
                                                         ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*&
  __get_elementPropertyQueuedEvents();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,
                                                                                             ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*> const&
  __get_elementPropertyQueuedEvents() const;

  constexpr void __set_elementPropertyQueuedEvents(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,
                                                                                                ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>* value);

  constexpr ::UnityEngine::UIElements::IPanel*& __get_panel();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IPanel*> const& __get_panel() const;

  constexpr void __set_panel(::UnityEngine::UIElements::IPanel* value);

  constexpr int32_t& __get_m_ChangesCount();

  constexpr int32_t const& __get_m_ChangesCount() const;

  constexpr void __set_m_ChangesCount(int32_t value);

  static inline void setStaticF_k_EventQueuePool(::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>* value);

  static inline ::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>* getStaticF_k_EventQueuePool();

  /// @brief Method GetPooledQueue addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>* GetPooledQueue();

  /// @brief Method RegisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void RegisterChange();

  /// @brief Method UnregisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void UnregisterChange();

  /// @brief Method StateChanged addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool StateChanged();

  /// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void Clear();

  static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState();

public:
  /// @brief Field elementPropertyStateDelta, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,
                                               ::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>* ___elementPropertyStateDelta;

  /// @brief Field elementPropertyQueuedEvents, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,
                                               ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>* ___elementPropertyQueuedEvents;

  /// @brief Field panel, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::IPanel* ___panel;

  /// @brief Field m_ChangesCount, offset: 0x28, size: 0x4, def value: None
  int32_t ___m_ChangesCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::TimingData
// SizeInfo { instance_size: 40, native_size: 56, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6925))
// CS Name: ::StylePropertyAnimationSystem::Values`1::TimingData<T>
struct CORDL_TYPE __StylePropertyAnimationSystem__Values_1__TimingData {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "startTimeMs", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "durationMs", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "easingCurve", ty: "::System::Func_2<float_t,float_t>*", modifiers: "", def_value: None }, CppParam { name: "easedProgress", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "reversingShorteningFactor", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "isStarted", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "delayMs", ty:
  // "int32_t", modifiers: "", def_value: None }]
  constexpr __StylePropertyAnimationSystem__Values_1__TimingData(int64_t startTimeMs, int32_t durationMs, ::System::Func_2<float_t, float_t>* easingCurve, float_t easedProgress,
                                                                 float_t reversingShorteningFactor, bool isStarted, int32_t delayMs) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __StylePropertyAnimationSystem__Values_1__TimingData();

  /// @brief Field startTimeMs, offset: 0x0, size: 0x8, def value: None
  int64_t startTimeMs;

  /// @brief Field durationMs, offset: 0x8, size: 0x4, def value: None
  int32_t durationMs;

  /// @brief Field easingCurve, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<float_t, float_t>* easingCurve;

  /// @brief Field easedProgress, offset: 0x18, size: 0x4, def value: None
  float_t easedProgress;

  /// @brief Field reversingShorteningFactor, offset: 0x1c, size: 0x4, def value: None
  float_t reversingShorteningFactor;

  /// @brief Field isStarted, offset: 0x20, size: 0x1, def value: None
  bool isStarted;

  /// @brief Field delayMs, offset: 0x24, size: 0x4, def value: None
  int32_t delayMs;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::StyleData
// SizeInfo { instance_size: 32, native_size: 48, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6926))
// CS Name: ::StylePropertyAnimationSystem::Values`1::StyleData<T>
struct CORDL_TYPE __StylePropertyAnimationSystem__Values_1__StyleData {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "startValue", ty: "T", modifiers: "", def_value: None }, CppParam { name: "endValue", ty: "T", modifiers: "", def_value: None }, CppParam { name:
  // "reversingAdjustedStartValue", ty: "T", modifiers: "", def_value: None }, CppParam { name: "currentValue", ty: "T", modifiers: "", def_value: None }]
  constexpr __StylePropertyAnimationSystem__Values_1__StyleData(T startValue, T endValue, T reversingAdjustedStartValue, T currentValue) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __StylePropertyAnimationSystem__Values_1__StyleData();

  /// @brief Field startValue, offset: 0x0, size: 0x8, def value: None
  T startValue;

  /// @brief Field endValue, offset: 0x8, size: 0x8, def value: None
  T endValue;

  /// @brief Field reversingAdjustedStartValue, offset: 0x10, size: 0x8, def value: None
  T reversingAdjustedStartValue;

  /// @brief Field currentValue, offset: 0x18, size: 0x8, def value: None
  T currentValue;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::EmptyData
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6927)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6927), inst: 1518 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6927))
// CS Name: ::StylePropertyAnimationSystem::Values`1::EmptyData<T>
#pragma pack(push, 0)
struct CORDL_TYPE __StylePropertyAnimationSystem__Values_1__EmptyData {
public:
  // Declarations
  /// @brief Field Default, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_Default, put = setStaticF_Default))::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T> Default;

  static inline void setStaticF_Default(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T> value);

  static inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T> getStaticF_Default();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __StylePropertyAnimationSystem__Values_1__EmptyData();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::Values`1
// SizeInfo { instance_size: 136, native_size: 136, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6927)), TypeDefinitionIndex(TypeDefinitionIndex(6925)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6926), inst: 1517
// }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6919), inst: 753 }), TypeDefinitionIndex(TypeDefinitionIndex(6926)), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(6919), inst: 754 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6925), inst: 1517 }), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(6927), inst: 1517 }), TypeDefinitionIndex(TypeDefinitionIndex(6922)), TypeDefinitionIndex(TypeDefinitionIndex(6919))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6928)) CS
// Name: ::StylePropertyAnimationSystem::Values`1<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__Values_1 : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values {
public:
  // Declarations
  using EmptyData = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T>;

  using StyleData = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<T>;

  using TimingData = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<T>;

  using TransitionEventsFrameState = ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>;

  /// @brief Field m_CurrentTimeMs, offset 0x10, size 0x8
  __declspec(property(get = __get_m_CurrentTimeMs, put = __set_m_CurrentTimeMs)) int64_t m_CurrentTimeMs;

  /// @brief Field m_CurrentFrameEventsState, offset 0x18, size 0x8
  __declspec(property(get = __get_m_CurrentFrameEventsState,
                      put = __set_m_CurrentFrameEventsState))::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>* m_CurrentFrameEventsState;

  /// @brief Field m_NextFrameEventsState, offset 0x20, size 0x8
  __declspec(property(get = __get_m_NextFrameEventsState,
                      put = __set_m_NextFrameEventsState))::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>* m_NextFrameEventsState;

  /// @brief Field running, offset 0x28, size 0x30
  __declspec(property(get = __get_running, put = __set_running))::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<
      ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<T>, ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<T>> running;

  /// @brief Field completed, offset 0x58, size 0x30
  __declspec(property(
      get = __get_completed,
      put = __set_completed))::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T>, T> completed;

  __declspec(property(get = get_isEmpty)) bool isEmpty;

  __declspec(property(get = get_SameFunc))::System::Func_3<T, T, bool>* SameFunc;

  constexpr int64_t& __get_m_CurrentTimeMs();

  constexpr int64_t const& __get_m_CurrentTimeMs() const;

  constexpr void __set_m_CurrentTimeMs(int64_t value);

  constexpr ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>*& __get_m_CurrentFrameEventsState();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>*> const& __get_m_CurrentFrameEventsState() const;

  constexpr void __set_m_CurrentFrameEventsState(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>* value);

  constexpr ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>*& __get_m_NextFrameEventsState();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>*> const& __get_m_NextFrameEventsState() const;

  constexpr void __set_m_NextFrameEventsState(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>* value);

  constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<T>,
                                                                                          ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<T>>&
  __get_running();

  constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<T>,
                                                                                          ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<T>> const&
  __get_running() const;

  constexpr void __set_running(::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<T>,
                                                                                                             ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<T>>
                                   value);

  constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T>, T>& __get_completed();

  constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T>, T> const& __get_completed() const;

  constexpr void __set_completed(::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T>, T> value);

  /// @brief Method get_isEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool get_isEmpty();

  /// @brief Method get_SameFunc addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Func_3<T, T, bool>* get_SameFunc();

  static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method SwapFrameStates addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void SwapFrameStates();

  /// @brief Method QueueEvent addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void QueueEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair epp);

  /// @brief Method ClearEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void ClearEventQueue(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair epp);

  /// @brief Method QueueTransitionRunEvent addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void QueueTransitionRunEvent(::UnityEngine::UIElements::VisualElement* ve, int32_t runningIndex);

  /// @brief Method QueueTransitionStartEvent addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void QueueTransitionStartEvent(::UnityEngine::UIElements::VisualElement* ve, int32_t runningIndex);

  /// @brief Method QueueTransitionEndEvent addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void QueueTransitionEndEvent(::UnityEngine::UIElements::VisualElement* ve, int32_t runningIndex);

  /// @brief Method QueueTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void QueueTransitionCancelEvent(::UnityEngine::UIElements::VisualElement* ve, int32_t runningIndex, int64_t panelElapsedMs);

  /// @brief Method SendTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void SendTransitionCancelEvent(::UnityEngine::UIElements::VisualElement* ve, int32_t runningIndex, int64_t panelElapsedMs);

  /// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void CancelAllAnimations();

  /// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void CancelAllAnimations(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method CancelAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void CancelAnimation(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id);

  /// @brief Method UpdateAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void UpdateAnimation(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id);

  /// @brief Method GetAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void GetAllAnimations(::UnityEngine::UIElements::VisualElement* ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>* outPropertyIds);

  /// @brief Method ComputeReversingShorteningFactor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline float_t ComputeReversingShorteningFactor(int32_t oldIndex);

  /// @brief Method ComputeReversingDuration addr 0x0 size 0xffffffffffffffff virtual false final false
  inline int32_t ComputeReversingDuration(int32_t newTransitionDurationMs, float_t newReversingShorteningFactor);

  /// @brief Method ComputeReversingDelay addr 0x0 size 0xffffffffffffffff virtual false final false
  inline int32_t ComputeReversingDelay(int32_t delayMs, float_t newReversingShorteningFactor);

  /// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, T startValue, T endValue, int32_t durationMs,
                              int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve, int64_t currentTimeMs);

  /// @brief Method ForceComputedStyleEndValue addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void ForceComputedStyleEndValue(int32_t runningIndex);

  /// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Update(int64_t currentTimeMs);

  /// @brief Method ProcessEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void ProcessEventQueue();

  /// @brief Method UpdateProgress addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void UpdateProgress(int64_t currentTimeMs);

  // Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StylePropertyAnimationSystem__Values_1(__StylePropertyAnimationSystem__Values_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__Values_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StylePropertyAnimationSystem__Values_1(__StylePropertyAnimationSystem__Values_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StylePropertyAnimationSystem__Values_1();

public:
  /// @brief Field m_CurrentTimeMs, offset: 0x10, size: 0x8, def value: None
  int64_t ___m_CurrentTimeMs;

  /// @brief Field m_CurrentFrameEventsState, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>* ___m_CurrentFrameEventsState;

  /// @brief Field m_NextFrameEventsState, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>* ___m_NextFrameEventsState;

  /// @brief Field running, offset: 0x28, size: 0x30, def value: None
  ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<T>,
                                                                                ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<T>>
      ___running;

  /// @brief Field completed, offset: 0x58, size: 0x30, def value: None
  ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T>, T> ___completed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Type: ::ValuesFloat
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6928), inst: 387 }), TypeDefinitionIndex(TypeDefinitionIndex(6928))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6929))
// CS Name: ::StylePropertyAnimationSystem::ValuesFloat*
class CORDL_TYPE __StylePropertyAnimationSystem__ValuesFloat : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<float_t> {
public:
  // Declarations
  /// @brief Field <SameFunc>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __get__SameFunc_k__BackingField, put = __set__SameFunc_k__BackingField))::System::Func_3<float_t, float_t, bool>* _SameFunc_k__BackingField;

  __declspec(property(get = get_SameFunc))::System::Func_3<float_t, float_t, bool>* SameFunc;

  constexpr ::System::Func_3<float_t, float_t, bool>*& __get__SameFunc_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_3<float_t, float_t, bool>*> const& __get__SameFunc_k__BackingField() const;

  constexpr void __set__SameFunc_k__BackingField(::System::Func_3<float_t, float_t, bool>* value);

  /// @brief Method get_SameFunc addr 0x2c5e458 size 0x8 virtual true final false
  inline ::System::Func_3<float_t, float_t, bool>* get_SameFunc();

  /// @brief Method IsSame addr 0x2c5e460 size 0x88 virtual false final false
  static inline bool IsSame(float_t a, float_t b);

  /// @brief Method Lerp addr 0x2c5e4e8 size 0x10 virtual false final false
  static inline float_t Lerp(float_t a, float_t b, float_t t);

  /// @brief Method UpdateValues addr 0x2c5e4f8 size 0x80 virtual true final true
  inline void UpdateValues();

  /// @brief Method UpdateComputedStyle addr 0x2c5e578 size 0xcc virtual true final true
  inline void UpdateComputedStyle();

  /// @brief Method UpdateComputedStyle addr 0x2c5e644 size 0xa8 virtual true final true
  inline void UpdateComputedStyle(int32_t i);

  static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat* New_ctor();

  /// @brief Method .ctor addr 0x2c5e6ec size 0x98 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesFloat", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StylePropertyAnimationSystem__ValuesFloat(__StylePropertyAnimationSystem__ValuesFloat&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesFloat", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StylePropertyAnimationSystem__ValuesFloat(__StylePropertyAnimationSystem__ValuesFloat const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StylePropertyAnimationSystem__ValuesFloat();

public:
  /// @brief Field <SameFunc>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::System::Func_3<float_t, float_t, bool>* ____SameFunc_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat, 0x90>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat, ____SameFunc_k__BackingField) == 0x88, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::ValuesInt
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6928), inst: 101 }), TypeDefinitionIndex(TypeDefinitionIndex(6928))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6930))
// CS Name: ::StylePropertyAnimationSystem::ValuesInt*
class CORDL_TYPE __StylePropertyAnimationSystem__ValuesInt : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<int32_t> {
public:
  // Declarations
  /// @brief Field <SameFunc>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __get__SameFunc_k__BackingField, put = __set__SameFunc_k__BackingField))::System::Func_3<int32_t, int32_t, bool>* _SameFunc_k__BackingField;

  __declspec(property(get = get_SameFunc))::System::Func_3<int32_t, int32_t, bool>* SameFunc;

  constexpr ::System::Func_3<int32_t, int32_t, bool>*& __get__SameFunc_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_3<int32_t, int32_t, bool>*> const& __get__SameFunc_k__BackingField() const;

  constexpr void __set__SameFunc_k__BackingField(::System::Func_3<int32_t, int32_t, bool>* value);

  /// @brief Method get_SameFunc addr 0x2c5e784 size 0x8 virtual true final false
  inline ::System::Func_3<int32_t, int32_t, bool>* get_SameFunc();

  /// @brief Method IsSame addr 0x2c5e78c size 0xc virtual false final false
  static inline bool IsSame(int32_t a, int32_t b);

  /// @brief Method Lerp addr 0x2c5e798 size 0xec virtual false final false
  static inline int32_t Lerp(int32_t a, int32_t b, float_t t);

  /// @brief Method UpdateValues addr 0x2c5e884 size 0x98 virtual true final true
  inline void UpdateValues();

  /// @brief Method UpdateComputedStyle addr 0x2c5e91c size 0xcc virtual true final true
  inline void UpdateComputedStyle();

  /// @brief Method UpdateComputedStyle addr 0x2c5e9e8 size 0xa8 virtual true final true
  inline void UpdateComputedStyle(int32_t i);

  static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt* New_ctor();

  /// @brief Method .ctor addr 0x2c5ea90 size 0x98 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesInt", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StylePropertyAnimationSystem__ValuesInt(__StylePropertyAnimationSystem__ValuesInt&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesInt", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StylePropertyAnimationSystem__ValuesInt(__StylePropertyAnimationSystem__ValuesInt const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StylePropertyAnimationSystem__ValuesInt();

public:
  /// @brief Field <SameFunc>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::System::Func_3<int32_t, int32_t, bool>* ____SameFunc_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt, 0x90>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt, ____SameFunc_k__BackingField) == 0x88, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::ValuesLength
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6928), inst: 1521 }), TypeDefinitionIndex(TypeDefinitionIndex(6928)),
// TypeDefinitionIndex(TypeDefinitionIndex(7399))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6931)) CS Name: ::StylePropertyAnimationSystem::ValuesLength*
class CORDL_TYPE __StylePropertyAnimationSystem__ValuesLength : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::Length> {
public:
  // Declarations
  /// @brief Field <SameFunc>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __get__SameFunc_k__BackingField,
                      put = __set__SameFunc_k__BackingField))::System::Func_3<::UnityEngine::UIElements::Length, ::UnityEngine::UIElements::Length, bool>* _SameFunc_k__BackingField;

  __declspec(property(get = get_SameFunc))::System::Func_3<::UnityEngine::UIElements::Length, ::UnityEngine::UIElements::Length, bool>* SameFunc;

  constexpr ::System::Func_3<::UnityEngine::UIElements::Length, ::UnityEngine::UIElements::Length, bool>*& __get__SameFunc_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::UnityEngine::UIElements::Length, ::UnityEngine::UIElements::Length, bool>*> const& __get__SameFunc_k__BackingField() const;

  constexpr void __set__SameFunc_k__BackingField(::System::Func_3<::UnityEngine::UIElements::Length, ::UnityEngine::UIElements::Length, bool>* value);

  /// @brief Method get_SameFunc addr 0x2c5eb28 size 0x8 virtual true final false
  inline ::System::Func_3<::UnityEngine::UIElements::Length, ::UnityEngine::UIElements::Length, bool>* get_SameFunc();

  /// @brief Method IsSame addr 0x2c5eb30 size 0xa0 virtual false final false
  static inline bool IsSame(::UnityEngine::UIElements::Length a, ::UnityEngine::UIElements::Length b);

  /// @brief Method Lerp addr 0x2c5ebd0 size 0x3c virtual false final false
  static inline ::UnityEngine::UIElements::Length Lerp(::UnityEngine::UIElements::Length a, ::UnityEngine::UIElements::Length b, float_t t);

  /// @brief Method UpdateValues addr 0x2c5ec0c size 0xbc virtual true final true
  inline void UpdateValues();

  /// @brief Method UpdateComputedStyle addr 0x2c5ecc8 size 0xcc virtual true final true
  inline void UpdateComputedStyle();

  /// @brief Method UpdateComputedStyle addr 0x2c5ed94 size 0xa8 virtual true final true
  inline void UpdateComputedStyle(int32_t i);

  static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength* New_ctor();

  /// @brief Method .ctor addr 0x2c5ee3c size 0x98 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesLength", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StylePropertyAnimationSystem__ValuesLength(__StylePropertyAnimationSystem__ValuesLength&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesLength", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StylePropertyAnimationSystem__ValuesLength(__StylePropertyAnimationSystem__ValuesLength const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StylePropertyAnimationSystem__ValuesLength();

public:
  /// @brief Field <SameFunc>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::System::Func_3<::UnityEngine::UIElements::Length, ::UnityEngine::UIElements::Length, bool>* ____SameFunc_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength, 0x90>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength, ____SameFunc_k__BackingField) == 0x88, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::ValuesColor
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6928)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6928), inst: 294 }),
// TypeDefinitionIndex(TypeDefinitionIndex(10178))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6932)) CS Name: ::StylePropertyAnimationSystem::ValuesColor*
class CORDL_TYPE __StylePropertyAnimationSystem__ValuesColor : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<::UnityEngine::Color> {
public:
  // Declarations
  /// @brief Field <SameFunc>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __get__SameFunc_k__BackingField, put = __set__SameFunc_k__BackingField))::System::Func_3<::UnityEngine::Color, ::UnityEngine::Color, bool>* _SameFunc_k__BackingField;

  __declspec(property(get = get_SameFunc))::System::Func_3<::UnityEngine::Color, ::UnityEngine::Color, bool>* SameFunc;

  constexpr ::System::Func_3<::UnityEngine::Color, ::UnityEngine::Color, bool>*& __get__SameFunc_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::UnityEngine::Color, ::UnityEngine::Color, bool>*> const& __get__SameFunc_k__BackingField() const;

  constexpr void __set__SameFunc_k__BackingField(::System::Func_3<::UnityEngine::Color, ::UnityEngine::Color, bool>* value);

  /// @brief Method get_SameFunc addr 0x2c5eed4 size 0x8 virtual true final false
  inline ::System::Func_3<::UnityEngine::Color, ::UnityEngine::Color, bool>* get_SameFunc();

  /// @brief Method IsSame addr 0x2c5eedc size 0x138 virtual false final false
  static inline bool IsSame(::UnityEngine::Color c, ::UnityEngine::Color d);

  /// @brief Method Lerp addr 0x2c5f014 size 0x38 virtual false final false
  static inline ::UnityEngine::Color Lerp(::UnityEngine::Color a, ::UnityEngine::Color b, float_t t);

  /// @brief Method UpdateValues addr 0x2c5f04c size 0x84 virtual true final true
  inline void UpdateValues();

  /// @brief Method UpdateComputedStyle addr 0x2c5f0d0 size 0xd0 virtual true final true
  inline void UpdateComputedStyle();

  /// @brief Method UpdateComputedStyle addr 0x2c5f1a0 size 0xac virtual true final true
  inline void UpdateComputedStyle(int32_t i);

  static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor* New_ctor();

  /// @brief Method .ctor addr 0x2c5f24c size 0x98 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesColor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StylePropertyAnimationSystem__ValuesColor(__StylePropertyAnimationSystem__ValuesColor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesColor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StylePropertyAnimationSystem__ValuesColor(__StylePropertyAnimationSystem__ValuesColor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StylePropertyAnimationSystem__ValuesColor();

public:
  /// @brief Field <SameFunc>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::System::Func_3<::UnityEngine::Color, ::UnityEngine::Color, bool>* ____SameFunc_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor, 0x90>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor, ____SameFunc_k__BackingField) == 0x88, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::ValuesDiscrete`1
// SizeInfo { instance_size: 144, native_size: 144, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6928)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6928), inst: 5222 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6933))
// CS Name: ::StylePropertyAnimationSystem::ValuesDiscrete`1<T>*
class CORDL_TYPE __StylePropertyAnimationSystem__ValuesDiscrete_1 : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T> {
public:
  // Declarations
  /// @brief Field <SameFunc>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __get__SameFunc_k__BackingField, put = __set__SameFunc_k__BackingField))::System::Func_3<T, T, bool>* _SameFunc_k__BackingField;

  __declspec(property(get = get_SameFunc))::System::Func_3<T, T, bool>* SameFunc;

  constexpr ::System::Func_3<T, T, bool>*& __get__SameFunc_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_3<T, T, bool>*> const& __get__SameFunc_k__BackingField() const;

  constexpr void __set__SameFunc_k__BackingField(::System::Func_3<T, T, bool>* value);

  /// @brief Method get_SameFunc addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Func_3<T, T, bool>* get_SameFunc();

  /// @brief Method IsSame addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline bool IsSame(T a, T b);

  /// @brief Method Lerp addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline T Lerp(T a, T b, float_t t);

  /// @brief Method UpdateValues addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void UpdateValues();

  static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesDiscrete_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesDiscrete_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StylePropertyAnimationSystem__ValuesDiscrete_1(__StylePropertyAnimationSystem__ValuesDiscrete_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesDiscrete_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StylePropertyAnimationSystem__ValuesDiscrete_1(__StylePropertyAnimationSystem__ValuesDiscrete_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StylePropertyAnimationSystem__ValuesDiscrete_1();

public:
  /// @brief Field <SameFunc>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::System::Func_3<T, T, bool>* ____SameFunc_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Type: ::ValuesBackground
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7379)), TypeDefinitionIndex(TypeDefinitionIndex(6933)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6933), inst: 1519
// })} Self: TypeDefinitionIndex(TypeDefinitionIndex(6934)) CS Name: ::StylePropertyAnimationSystem::ValuesBackground*
class CORDL_TYPE __StylePropertyAnimationSystem__ValuesBackground : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesDiscrete_1<::UnityEngine::UIElements::Background> {
public:
  // Declarations
  /// @brief Method UpdateComputedStyle addr 0x2c5f2e4 size 0xdc virtual true final true
  inline void UpdateComputedStyle();

  /// @brief Method UpdateComputedStyle addr 0x2c5f3c0 size 0xbc virtual true final true
  inline void UpdateComputedStyle(int32_t i);

  static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground* New_ctor();

  /// @brief Method .ctor addr 0x2c5f47c size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesBackground", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StylePropertyAnimationSystem__ValuesBackground(__StylePropertyAnimationSystem__ValuesBackground&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesBackground", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StylePropertyAnimationSystem__ValuesBackground(__StylePropertyAnimationSystem__ValuesBackground const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StylePropertyAnimationSystem__ValuesBackground();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground, 0x90>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::ValuesFontDefinition
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7370)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6933), inst: 1520 }),
// TypeDefinitionIndex(TypeDefinitionIndex(6933))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6935)) CS Name: ::StylePropertyAnimationSystem::ValuesFontDefinition*
class CORDL_TYPE __StylePropertyAnimationSystem__ValuesFontDefinition : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesDiscrete_1<::UnityEngine::UIElements::FontDefinition> {
public:
  // Declarations
  /// @brief Method UpdateComputedStyle addr 0x2c5f4c4 size 0xcc virtual true final true
  inline void UpdateComputedStyle();

  /// @brief Method UpdateComputedStyle addr 0x2c5f590 size 0xa8 virtual true final true
  inline void UpdateComputedStyle(int32_t i);

  static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition* New_ctor();

  /// @brief Method .ctor addr 0x2c5f638 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesFontDefinition", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StylePropertyAnimationSystem__ValuesFontDefinition(__StylePropertyAnimationSystem__ValuesFontDefinition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesFontDefinition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StylePropertyAnimationSystem__ValuesFontDefinition(__StylePropertyAnimationSystem__ValuesFontDefinition const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StylePropertyAnimationSystem__ValuesFontDefinition();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition, 0x90>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::ValuesFont
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6933), inst: 310 }), TypeDefinitionIndex(TypeDefinitionIndex(6933)),
// TypeDefinitionIndex(TypeDefinitionIndex(15801))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6936)) CS Name: ::StylePropertyAnimationSystem::ValuesFont*
class CORDL_TYPE __StylePropertyAnimationSystem__ValuesFont : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesDiscrete_1<::UnityEngine::Font*> {
public:
  // Declarations
  /// @brief Method UpdateComputedStyle addr 0x2c5f680 size 0xcc virtual true final true
  inline void UpdateComputedStyle();

  /// @brief Method UpdateComputedStyle addr 0x2c5f74c size 0xa8 virtual true final true
  inline void UpdateComputedStyle(int32_t i);

  static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont* New_ctor();

  /// @brief Method .ctor addr 0x2c5f7f4 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesFont", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StylePropertyAnimationSystem__ValuesFont(__StylePropertyAnimationSystem__ValuesFont&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesFont", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StylePropertyAnimationSystem__ValuesFont(__StylePropertyAnimationSystem__ValuesFont const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StylePropertyAnimationSystem__ValuesFont();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont, 0x90>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::ValuesTextShadow
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6876)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6928), inst: 1524 }),
// TypeDefinitionIndex(TypeDefinitionIndex(6928))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6937)) CS Name: ::StylePropertyAnimationSystem::ValuesTextShadow*
class CORDL_TYPE __StylePropertyAnimationSystem__ValuesTextShadow : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::TextShadow> {
public:
  // Declarations
  /// @brief Field <SameFunc>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __get__SameFunc_k__BackingField,
                      put = __set__SameFunc_k__BackingField))::System::Func_3<::UnityEngine::UIElements::TextShadow, ::UnityEngine::UIElements::TextShadow, bool>* _SameFunc_k__BackingField;

  __declspec(property(get = get_SameFunc))::System::Func_3<::UnityEngine::UIElements::TextShadow, ::UnityEngine::UIElements::TextShadow, bool>* SameFunc;

  constexpr ::System::Func_3<::UnityEngine::UIElements::TextShadow, ::UnityEngine::UIElements::TextShadow, bool>*& __get__SameFunc_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::UnityEngine::UIElements::TextShadow, ::UnityEngine::UIElements::TextShadow, bool>*> const& __get__SameFunc_k__BackingField() const;

  constexpr void __set__SameFunc_k__BackingField(::System::Func_3<::UnityEngine::UIElements::TextShadow, ::UnityEngine::UIElements::TextShadow, bool>* value);

  /// @brief Method get_SameFunc addr 0x2c5f83c size 0x8 virtual true final false
  inline ::System::Func_3<::UnityEngine::UIElements::TextShadow, ::UnityEngine::UIElements::TextShadow, bool>* get_SameFunc();

  /// @brief Method IsSame addr 0x2c5f844 size 0x44 virtual false final false
  static inline bool IsSame(::UnityEngine::UIElements::TextShadow a, ::UnityEngine::UIElements::TextShadow b);

  /// @brief Method Lerp addr 0x2c5f888 size 0x58 virtual false final false
  static inline ::UnityEngine::UIElements::TextShadow Lerp(::UnityEngine::UIElements::TextShadow a, ::UnityEngine::UIElements::TextShadow b, float_t t);

  /// @brief Method UpdateValues addr 0x2c5f8e0 size 0xcc virtual true final true
  inline void UpdateValues();

  /// @brief Method UpdateComputedStyle addr 0x2c5f9ac size 0xf0 virtual true final true
  inline void UpdateComputedStyle();

  /// @brief Method UpdateComputedStyle addr 0x2c5fa9c size 0xd4 virtual true final true
  inline void UpdateComputedStyle(int32_t i);

  static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow* New_ctor();

  /// @brief Method .ctor addr 0x2c5fb70 size 0x98 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesTextShadow", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StylePropertyAnimationSystem__ValuesTextShadow(__StylePropertyAnimationSystem__ValuesTextShadow&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesTextShadow", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StylePropertyAnimationSystem__ValuesTextShadow(__StylePropertyAnimationSystem__ValuesTextShadow const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StylePropertyAnimationSystem__ValuesTextShadow();

public:
  /// @brief Field <SameFunc>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::System::Func_3<::UnityEngine::UIElements::TextShadow, ::UnityEngine::UIElements::TextShadow, bool>* ____SameFunc_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow, 0x90>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow, ____SameFunc_k__BackingField) == 0x88, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::ValuesScale
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7404)), TypeDefinitionIndex(TypeDefinitionIndex(6928)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6928), inst: 1523
// })} Self: TypeDefinitionIndex(TypeDefinitionIndex(6938)) CS Name: ::StylePropertyAnimationSystem::ValuesScale*
class CORDL_TYPE __StylePropertyAnimationSystem__ValuesScale : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::Scale> {
public:
  // Declarations
  /// @brief Field <SameFunc>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __get__SameFunc_k__BackingField,
                      put = __set__SameFunc_k__BackingField))::System::Func_3<::UnityEngine::UIElements::Scale, ::UnityEngine::UIElements::Scale, bool>* _SameFunc_k__BackingField;

  __declspec(property(get = get_SameFunc))::System::Func_3<::UnityEngine::UIElements::Scale, ::UnityEngine::UIElements::Scale, bool>* SameFunc;

  constexpr ::System::Func_3<::UnityEngine::UIElements::Scale, ::UnityEngine::UIElements::Scale, bool>*& __get__SameFunc_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::UnityEngine::UIElements::Scale, ::UnityEngine::UIElements::Scale, bool>*> const& __get__SameFunc_k__BackingField() const;

  constexpr void __set__SameFunc_k__BackingField(::System::Func_3<::UnityEngine::UIElements::Scale, ::UnityEngine::UIElements::Scale, bool>* value);

  /// @brief Method get_SameFunc addr 0x2c5fc08 size 0x8 virtual true final false
  inline ::System::Func_3<::UnityEngine::UIElements::Scale, ::UnityEngine::UIElements::Scale, bool>* get_SameFunc();

  /// @brief Method IsSame addr 0x2c5fc10 size 0x8 virtual false final false
  static inline bool IsSame(::UnityEngine::UIElements::Scale a, ::UnityEngine::UIElements::Scale b);

  /// @brief Method UpdateComputedStyle addr 0x2c5fc18 size 0xcc virtual true final true
  inline void UpdateComputedStyle();

  /// @brief Method UpdateComputedStyle addr 0x2c5fce4 size 0xa8 virtual true final true
  inline void UpdateComputedStyle(int32_t i);

  /// @brief Method Lerp addr 0x2c5fd8c size 0x70 virtual false final false
  static inline ::UnityEngine::UIElements::Scale Lerp(::UnityEngine::UIElements::Scale a, ::UnityEngine::UIElements::Scale b, float_t t);

  /// @brief Method UpdateValues addr 0x2c5fdfc size 0x9c virtual true final true
  inline void UpdateValues();

  static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale* New_ctor();

  /// @brief Method .ctor addr 0x2c5fe98 size 0x98 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesScale", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StylePropertyAnimationSystem__ValuesScale(__StylePropertyAnimationSystem__ValuesScale&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesScale", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StylePropertyAnimationSystem__ValuesScale(__StylePropertyAnimationSystem__ValuesScale const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StylePropertyAnimationSystem__ValuesScale();

public:
  /// @brief Field <SameFunc>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::System::Func_3<::UnityEngine::UIElements::Scale, ::UnityEngine::UIElements::Scale, bool>* ____SameFunc_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale, 0x90>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale, ____SameFunc_k__BackingField) == 0x88, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::ValuesRotate
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7381)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6928), inst: 1522 }),
// TypeDefinitionIndex(TypeDefinitionIndex(6928))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6939)) CS Name: ::StylePropertyAnimationSystem::ValuesRotate*
class CORDL_TYPE __StylePropertyAnimationSystem__ValuesRotate : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::Rotate> {
public:
  // Declarations
  /// @brief Field <SameFunc>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __get__SameFunc_k__BackingField,
                      put = __set__SameFunc_k__BackingField))::System::Func_3<::UnityEngine::UIElements::Rotate, ::UnityEngine::UIElements::Rotate, bool>* _SameFunc_k__BackingField;

  __declspec(property(get = get_SameFunc))::System::Func_3<::UnityEngine::UIElements::Rotate, ::UnityEngine::UIElements::Rotate, bool>* SameFunc;

  constexpr ::System::Func_3<::UnityEngine::UIElements::Rotate, ::UnityEngine::UIElements::Rotate, bool>*& __get__SameFunc_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::UnityEngine::UIElements::Rotate, ::UnityEngine::UIElements::Rotate, bool>*> const& __get__SameFunc_k__BackingField() const;

  constexpr void __set__SameFunc_k__BackingField(::System::Func_3<::UnityEngine::UIElements::Rotate, ::UnityEngine::UIElements::Rotate, bool>* value);

  /// @brief Method get_SameFunc addr 0x2c5ff30 size 0x8 virtual true final false
  inline ::System::Func_3<::UnityEngine::UIElements::Rotate, ::UnityEngine::UIElements::Rotate, bool>* get_SameFunc();

  /// @brief Method IsSame addr 0x2c5ff38 size 0x48 virtual false final false
  static inline bool IsSame(::UnityEngine::UIElements::Rotate a, ::UnityEngine::UIElements::Rotate b);

  /// @brief Method UpdateComputedStyle addr 0x2c5ff80 size 0xe8 virtual true final true
  inline void UpdateComputedStyle();

  /// @brief Method UpdateComputedStyle addr 0x2c60068 size 0xcc virtual true final true
  inline void UpdateComputedStyle(int32_t i);

  /// @brief Method Lerp addr 0x2c60134 size 0x80 virtual false final false
  static inline ::UnityEngine::UIElements::Rotate Lerp(::UnityEngine::UIElements::Rotate a, ::UnityEngine::UIElements::Rotate b, float_t t);

  /// @brief Method UpdateValues addr 0x2c601b4 size 0xdc virtual true final true
  inline void UpdateValues();

  static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate* New_ctor();

  /// @brief Method .ctor addr 0x2c60290 size 0x98 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesRotate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StylePropertyAnimationSystem__ValuesRotate(__StylePropertyAnimationSystem__ValuesRotate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesRotate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StylePropertyAnimationSystem__ValuesRotate(__StylePropertyAnimationSystem__ValuesRotate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StylePropertyAnimationSystem__ValuesRotate();

public:
  /// @brief Field <SameFunc>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::System::Func_3<::UnityEngine::UIElements::Rotate, ::UnityEngine::UIElements::Rotate, bool>* ____SameFunc_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate, 0x90>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate, ____SameFunc_k__BackingField) == 0x88, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::ValuesTranslate
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7388)), TypeDefinitionIndex(TypeDefinitionIndex(6928)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6928), inst: 1526
// })} Self: TypeDefinitionIndex(TypeDefinitionIndex(6940)) CS Name: ::StylePropertyAnimationSystem::ValuesTranslate*
class CORDL_TYPE __StylePropertyAnimationSystem__ValuesTranslate : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::Translate> {
public:
  // Declarations
  /// @brief Field <SameFunc>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __get__SameFunc_k__BackingField,
                      put = __set__SameFunc_k__BackingField))::System::Func_3<::UnityEngine::UIElements::Translate, ::UnityEngine::UIElements::Translate, bool>* _SameFunc_k__BackingField;

  __declspec(property(get = get_SameFunc))::System::Func_3<::UnityEngine::UIElements::Translate, ::UnityEngine::UIElements::Translate, bool>* SameFunc;

  constexpr ::System::Func_3<::UnityEngine::UIElements::Translate, ::UnityEngine::UIElements::Translate, bool>*& __get__SameFunc_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::UnityEngine::UIElements::Translate, ::UnityEngine::UIElements::Translate, bool>*> const& __get__SameFunc_k__BackingField() const;

  constexpr void __set__SameFunc_k__BackingField(::System::Func_3<::UnityEngine::UIElements::Translate, ::UnityEngine::UIElements::Translate, bool>* value);

  /// @brief Method get_SameFunc addr 0x2c60328 size 0x8 virtual true final false
  inline ::System::Func_3<::UnityEngine::UIElements::Translate, ::UnityEngine::UIElements::Translate, bool>* get_SameFunc();

  /// @brief Method IsSame addr 0x2c60330 size 0x48 virtual false final false
  static inline bool IsSame(::UnityEngine::UIElements::Translate a, ::UnityEngine::UIElements::Translate b);

  /// @brief Method UpdateComputedStyle addr 0x2c60378 size 0xe8 virtual true final true
  inline void UpdateComputedStyle();

  /// @brief Method UpdateComputedStyle addr 0x2c60460 size 0xcc virtual true final true
  inline void UpdateComputedStyle(int32_t i);

  /// @brief Method Lerp addr 0x2c6052c size 0xd4 virtual false final false
  static inline ::UnityEngine::UIElements::Translate Lerp(::UnityEngine::UIElements::Translate a, ::UnityEngine::UIElements::Translate b, float_t t);

  /// @brief Method UpdateValues addr 0x2c60600 size 0xdc virtual true final true
  inline void UpdateValues();

  static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate* New_ctor();

  /// @brief Method .ctor addr 0x2c606dc size 0x98 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesTranslate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StylePropertyAnimationSystem__ValuesTranslate(__StylePropertyAnimationSystem__ValuesTranslate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesTranslate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StylePropertyAnimationSystem__ValuesTranslate(__StylePropertyAnimationSystem__ValuesTranslate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StylePropertyAnimationSystem__ValuesTranslate();

public:
  /// @brief Field <SameFunc>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::System::Func_3<::UnityEngine::UIElements::Translate, ::UnityEngine::UIElements::Translate, bool>* ____SameFunc_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate, 0x90>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate, ____SameFunc_k__BackingField) == 0x88, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::ValuesTransformOrigin
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7403)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6928), inst: 1525 }),
// TypeDefinitionIndex(TypeDefinitionIndex(6928))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6941)) CS Name: ::StylePropertyAnimationSystem::ValuesTransformOrigin*
class CORDL_TYPE __StylePropertyAnimationSystem__ValuesTransformOrigin : public ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<::UnityEngine::UIElements::TransformOrigin> {
public:
  // Declarations
  /// @brief Field <SameFunc>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __get__SameFunc_k__BackingField,
                      put = __set__SameFunc_k__BackingField))::System::Func_3<::UnityEngine::UIElements::TransformOrigin, ::UnityEngine::UIElements::TransformOrigin, bool>* _SameFunc_k__BackingField;

  __declspec(property(get = get_SameFunc))::System::Func_3<::UnityEngine::UIElements::TransformOrigin, ::UnityEngine::UIElements::TransformOrigin, bool>* SameFunc;

  constexpr ::System::Func_3<::UnityEngine::UIElements::TransformOrigin, ::UnityEngine::UIElements::TransformOrigin, bool>*& __get__SameFunc_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::UnityEngine::UIElements::TransformOrigin, ::UnityEngine::UIElements::TransformOrigin, bool>*> const&
  __get__SameFunc_k__BackingField() const;

  constexpr void __set__SameFunc_k__BackingField(::System::Func_3<::UnityEngine::UIElements::TransformOrigin, ::UnityEngine::UIElements::TransformOrigin, bool>* value);

  /// @brief Method get_SameFunc addr 0x2c60774 size 0x8 virtual true final false
  inline ::System::Func_3<::UnityEngine::UIElements::TransformOrigin, ::UnityEngine::UIElements::TransformOrigin, bool>* get_SameFunc();

  /// @brief Method IsSame addr 0x2c6077c size 0x48 virtual false final false
  static inline bool IsSame(::UnityEngine::UIElements::TransformOrigin a, ::UnityEngine::UIElements::TransformOrigin b);

  /// @brief Method UpdateComputedStyle addr 0x2c607c4 size 0xe8 virtual true final true
  inline void UpdateComputedStyle();

  /// @brief Method UpdateComputedStyle addr 0x2c608ac size 0xcc virtual true final true
  inline void UpdateComputedStyle(int32_t i);

  /// @brief Method Lerp addr 0x2c60978 size 0xd4 virtual false final false
  static inline ::UnityEngine::UIElements::TransformOrigin Lerp(::UnityEngine::UIElements::TransformOrigin a, ::UnityEngine::UIElements::TransformOrigin b, float_t t);

  /// @brief Method UpdateValues addr 0x2c60a4c size 0xdc virtual true final true
  inline void UpdateValues();

  static inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin* New_ctor();

  /// @brief Method .ctor addr 0x2c60b28 size 0x98 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesTransformOrigin", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StylePropertyAnimationSystem__ValuesTransformOrigin(__StylePropertyAnimationSystem__ValuesTransformOrigin&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StylePropertyAnimationSystem__ValuesTransformOrigin", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StylePropertyAnimationSystem__ValuesTransformOrigin(__StylePropertyAnimationSystem__ValuesTransformOrigin const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StylePropertyAnimationSystem__ValuesTransformOrigin();

public:
  /// @brief Field <SameFunc>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::System::Func_3<::UnityEngine::UIElements::TransformOrigin, ::UnityEngine::UIElements::TransformOrigin, bool>* ____SameFunc_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin, 0x90>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin, ____SameFunc_k__BackingField) == 0x88, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::StylePropertyAnimationSystem
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6942))
// CS Name: ::UnityEngine.UIElements::StylePropertyAnimationSystem*
class CORDL_TYPE StylePropertyAnimationSystem : public ::System::Object {
public:
  // Declarations
  using ValuesTransformOrigin = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin;

  using ValuesTranslate = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate;

  using ValuesRotate = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate;

  using ValuesScale = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale;

  using ValuesTextShadow = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow;

  using ValuesFont = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont;

  using ValuesFontDefinition = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition;

  using ValuesBackground = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground;

  template <typename T> using ValuesDiscrete_1 = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesDiscrete_1<T>;

  using ValuesColor = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor;

  using ValuesLength = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength;

  using ValuesInt = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt;

  using ValuesFloat = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat;

  template <typename T> using Values_1 = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>;

  using Values = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values;

  using ElementPropertyPair = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair;

  template <typename TTimingData, typename TStyleData> using AnimationDataSet_2 = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<TTimingData, TStyleData>;

  using TransitionState = ::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState;

  /// @brief Field m_CurrentTimeMs, offset 0x10, size 0x8
  __declspec(property(get = __get_m_CurrentTimeMs, put = __set_m_CurrentTimeMs)) int64_t m_CurrentTimeMs;

  /// @brief Field m_Floats, offset 0x18, size 0x8
  __declspec(property(get = __get_m_Floats, put = __set_m_Floats))::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat* m_Floats;

  /// @brief Field m_Ints, offset 0x20, size 0x8
  __declspec(property(get = __get_m_Ints, put = __set_m_Ints))::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt* m_Ints;

  /// @brief Field m_Lengths, offset 0x28, size 0x8
  __declspec(property(get = __get_m_Lengths, put = __set_m_Lengths))::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength* m_Lengths;

  /// @brief Field m_Colors, offset 0x30, size 0x8
  __declspec(property(get = __get_m_Colors, put = __set_m_Colors))::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor* m_Colors;

  /// @brief Field m_Backgrounds, offset 0x38, size 0x8
  __declspec(property(get = __get_m_Backgrounds, put = __set_m_Backgrounds))::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground* m_Backgrounds;

  /// @brief Field m_FontDefinitions, offset 0x40, size 0x8
  __declspec(property(get = __get_m_FontDefinitions, put = __set_m_FontDefinitions))::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition* m_FontDefinitions;

  /// @brief Field m_Fonts, offset 0x48, size 0x8
  __declspec(property(get = __get_m_Fonts, put = __set_m_Fonts))::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont* m_Fonts;

  /// @brief Field m_TextShadows, offset 0x50, size 0x8
  __declspec(property(get = __get_m_TextShadows, put = __set_m_TextShadows))::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow* m_TextShadows;

  /// @brief Field m_Scale, offset 0x58, size 0x8
  __declspec(property(get = __get_m_Scale, put = __set_m_Scale))::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale* m_Scale;

  /// @brief Field m_Rotate, offset 0x60, size 0x8
  __declspec(property(get = __get_m_Rotate, put = __set_m_Rotate))::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate* m_Rotate;

  /// @brief Field m_Translate, offset 0x68, size 0x8
  __declspec(property(get = __get_m_Translate, put = __set_m_Translate))::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate* m_Translate;

  /// @brief Field m_TransformOrigin, offset 0x70, size 0x8
  __declspec(property(get = __get_m_TransformOrigin, put = __set_m_TransformOrigin))::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin* m_TransformOrigin;

  /// @brief Field m_AllValues, offset 0x78, size 0x8
  __declspec(property(get = __get_m_AllValues, put = __set_m_AllValues))::System::Collections::Generic::List_1<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>* m_AllValues;

  /// @brief Field m_PropertyToValues, offset 0x80, size 0x8
  __declspec(property(get = __get_m_PropertyToValues,
                      put = __set_m_PropertyToValues))::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId,
                                                                                                   ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>* m_PropertyToValues;

  /// @brief Convert operator to "::UnityEngine::UIElements::IStylePropertyAnimationSystem"
  constexpr operator ::UnityEngine::UIElements::IStylePropertyAnimationSystem*() noexcept;

  constexpr int64_t& __get_m_CurrentTimeMs();

  constexpr int64_t const& __get_m_CurrentTimeMs() const;

  constexpr void __set_m_CurrentTimeMs(int64_t value);

  constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat*& __get_m_Floats();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat*> const& __get_m_Floats() const;

  constexpr void __set_m_Floats(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat* value);

  constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt*& __get_m_Ints();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt*> const& __get_m_Ints() const;

  constexpr void __set_m_Ints(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt* value);

  constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength*& __get_m_Lengths();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength*> const& __get_m_Lengths() const;

  constexpr void __set_m_Lengths(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength* value);

  constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor*& __get_m_Colors();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor*> const& __get_m_Colors() const;

  constexpr void __set_m_Colors(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor* value);

  constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground*& __get_m_Backgrounds();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground*> const& __get_m_Backgrounds() const;

  constexpr void __set_m_Backgrounds(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground* value);

  constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition*& __get_m_FontDefinitions();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition*> const& __get_m_FontDefinitions() const;

  constexpr void __set_m_FontDefinitions(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition* value);

  constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont*& __get_m_Fonts();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont*> const& __get_m_Fonts() const;

  constexpr void __set_m_Fonts(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont* value);

  constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow*& __get_m_TextShadows();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow*> const& __get_m_TextShadows() const;

  constexpr void __set_m_TextShadows(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow* value);

  constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale*& __get_m_Scale();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale*> const& __get_m_Scale() const;

  constexpr void __set_m_Scale(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale* value);

  constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate*& __get_m_Rotate();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate*> const& __get_m_Rotate() const;

  constexpr void __set_m_Rotate(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate* value);

  constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate*& __get_m_Translate();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate*> const& __get_m_Translate() const;

  constexpr void __set_m_Translate(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate* value);

  constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin*& __get_m_TransformOrigin();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin*> const& __get_m_TransformOrigin() const;

  constexpr void __set_m_TransformOrigin(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>*& __get_m_AllValues();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>*> const& __get_m_AllValues() const;

  constexpr void __set_m_AllValues(::System::Collections::Generic::List_1<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>*&
  __get_m_PropertyToValues();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>*> const&
  __get_m_PropertyToValues() const;

  constexpr void __set_m_PropertyToValues(
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>* value);

  static inline ::UnityEngine::UIElements::StylePropertyAnimationSystem* New_ctor();

  /// @brief Method .ctor addr 0x2c5cf94 size 0xf4 virtual false final false
  inline void _ctor();

  /// @brief Method GetOrCreate addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline T GetOrCreate(ByRef<T> values);

  /// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T>
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, T startValue, T endValue, int32_t durationMs,
                              int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve, ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>* values);

  /// @brief Method StartTransition addr 0x2c5d088 size 0xc8 virtual true final true
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, float_t startValue, float_t endValue, int32_t durationMs,
                              int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method StartTransition addr 0x2c5d150 size 0xd8 virtual true final true
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, int32_t startValue, int32_t endValue, int32_t durationMs,
                              int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method StartTransition addr 0x2c5d228 size 0xd8 virtual true final true
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::UnityEngine::UIElements::Length startValue,
                              ::UnityEngine::UIElements::Length endValue, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method StartTransition addr 0x2c5d300 size 0x110 virtual true final true
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::UnityEngine::Color startValue,
                              ::UnityEngine::Color endValue, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method StartTransition addr 0x2c5d410 size 0xf8 virtual true final true
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::UnityEngine::UIElements::Background startValue,
                              ::UnityEngine::UIElements::Background endValue, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method StartTransition addr 0x2c5d508 size 0xf0 virtual true final true
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::UnityEngine::UIElements::FontDefinition startValue,
                              ::UnityEngine::UIElements::FontDefinition endValue, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method StartTransition addr 0x2c5d5f8 size 0xd8 virtual true final true
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::UnityEngine::Font* startValue,
                              ::UnityEngine::Font* endValue, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method StartTransition addr 0x2c5d6d0 size 0x118 virtual true final true
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::UnityEngine::UIElements::TextShadow startValue,
                              ::UnityEngine::UIElements::TextShadow endValue, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method StartTransition addr 0x2c5d7e8 size 0xf0 virtual true final true
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::UnityEngine::UIElements::Scale startValue,
                              ::UnityEngine::UIElements::Scale endValue, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method StartTransition addr 0x2c5d8d8 size 0x118 virtual true final true
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::UnityEngine::UIElements::Rotate startValue,
                              ::UnityEngine::UIElements::Rotate endValue, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method StartTransition addr 0x2c5d9f0 size 0x118 virtual true final true
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::UnityEngine::UIElements::Translate startValue,
                              ::UnityEngine::UIElements::Translate endValue, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method StartTransition addr 0x2c5db08 size 0x118 virtual true final true
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::UnityEngine::UIElements::TransformOrigin startValue,
                              ::UnityEngine::UIElements::TransformOrigin endValue, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method CancelAllAnimations addr 0x2c5dc20 size 0x150 virtual true final true
  inline void CancelAllAnimations();

  /// @brief Method CancelAllAnimations addr 0x2c5dd70 size 0x2b4 virtual true final true
  inline void CancelAllAnimations(::UnityEngine::UIElements::VisualElement* owner);

  /// @brief Method CancelAnimation addr 0x2c5e024 size 0x90 virtual true final true
  inline void CancelAnimation(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id);

  /// @brief Method UpdateAnimation addr 0x2c5e0b4 size 0x90 virtual true final true
  inline void UpdateAnimation(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id);

  /// @brief Method GetAllAnimations addr 0x2c5e144 size 0x158 virtual true final true
  inline void GetAllAnimations(::UnityEngine::UIElements::VisualElement* owner, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>* propertyIds);

  /// @brief Method UpdateTracking addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void UpdateTracking(::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>* values);

  /// @brief Method CurrentTimeMs addr 0x2c5e29c size 0x8 virtual false final false
  inline int64_t CurrentTimeMs();

  /// @brief Method Update addr 0x2c5e2a4 size 0xd4 virtual true final true
  inline void Update();

  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StylePropertyAnimationSystem(StylePropertyAnimationSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StylePropertyAnimationSystem(StylePropertyAnimationSystem const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StylePropertyAnimationSystem();

public:
  /// @brief Field m_CurrentTimeMs, offset: 0x10, size: 0x8, def value: None
  int64_t ___m_CurrentTimeMs;

  /// @brief Field m_Floats, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat* ___m_Floats;

  /// @brief Field m_Ints, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt* ___m_Ints;

  /// @brief Field m_Lengths, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength* ___m_Lengths;

  /// @brief Field m_Colors, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor* ___m_Colors;

  /// @brief Field m_Backgrounds, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground* ___m_Backgrounds;

  /// @brief Field m_FontDefinitions, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition* ___m_FontDefinitions;

  /// @brief Field m_Fonts, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont* ___m_Fonts;

  /// @brief Field m_TextShadows, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow* ___m_TextShadows;

  /// @brief Field m_Scale, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale* ___m_Scale;

  /// @brief Field m_Rotate, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate* ___m_Rotate;

  /// @brief Field m_Translate, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate* ___m_Translate;

  /// @brief Field m_TransformOrigin, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin* ___m_TransformOrigin;

  /// @brief Field m_AllValues, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>* ___m_AllValues;

  /// @brief Field m_PropertyToValues, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>* ___m_PropertyToValues;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StylePropertyAnimationSystem, 0x88>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_CurrentTimeMs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_Floats) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_Ints) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_Lengths) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_Colors) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_Backgrounds) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_FontDefinitions) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_Fonts) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_TextShadows) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_Scale) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_Rotate) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_Translate) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_TransformOrigin) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_AllValues) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyAnimationSystem, ___m_PropertyToValues) == 0x80, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState, "UnityEngine.UIElements", "StylePropertyAnimationSystem/TransitionState");
NEED_NO_BOX(::GlobalNamespace::__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer*, "UnityEngine.UIElements",
                       "StylePropertyAnimationSystem/ElementPropertyPair/EqualityComparer");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState, "UnityEngine.UIElements",
                                     "StylePropertyAnimationSystem/Values`1/TransitionEventsFrameState");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c, "UnityEngine.UIElements",
                                     "StylePropertyAnimationSystem/Values`1/TransitionEventsFrameState/<>c");
NEED_NO_BOX(::UnityEngine::UIElements::StylePropertyAnimationSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StylePropertyAnimationSystem*, "UnityEngine.UIElements", "StylePropertyAnimationSystem");
NEED_NO_BOX(::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/Values");
NEED_NO_BOX(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesBackground");
NEED_NO_BOX(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesColor");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesDiscrete_1, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesDiscrete`1");
NEED_NO_BOX(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesFloat");
NEED_NO_BOX(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesFont");
NEED_NO_BOX(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesFontDefinition");
NEED_NO_BOX(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesInt");
NEED_NO_BOX(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesLength");
NEED_NO_BOX(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesRotate");
NEED_NO_BOX(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesScale");
NEED_NO_BOX(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesTextShadow");
NEED_NO_BOX(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesTransformOrigin");
NEED_NO_BOX(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesTranslate");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1, "UnityEngine.UIElements", "StylePropertyAnimationSystem/Values`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData, "UnityEngine.UIElements", "StylePropertyAnimationSystem/Values`1/EmptyData");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData, "UnityEngine.UIElements", "StylePropertyAnimationSystem/Values`1/StyleData");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData, "UnityEngine.UIElements", "StylePropertyAnimationSystem/Values`1/TimingData");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2, "UnityEngine.UIElements", "StylePropertyAnimationSystem/AnimationDataSet`2");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ElementPropertyPair");
