#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StylePropertyAnimationSystem.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundPosition_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundRepeat_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundSize_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Background_impl.hpp"
#include "UnityEngine/UIElements/zzzz__FontDefinition_impl.hpp"
#include "UnityEngine/UIElements/zzzz__IStylePropertyAnimationSystem_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Length_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Rotate_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Scale_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyAnimationSystem_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextShadow_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TransformOrigin_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Translate_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyAnimationSystem_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_def.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundPosition_def.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundRepeat_def.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundSize_def.hpp"
#include "UnityEngine/UIElements/zzzz__Background_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__FontDefinition_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
#include "UnityEngine/UIElements/zzzz__Rotate_def.hpp"
#include "UnityEngine/UIElements/zzzz__Scale_def.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyAnimationSystem_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextShadow_def.hpp"
#include "UnityEngine/UIElements/zzzz__TransformOrigin_def.hpp"
#include "UnityEngine/UIElements/zzzz__Translate_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_TransitionState::StylePropertyAnimationSystem_TransitionState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_TransitionState::StylePropertyAnimationSystem_TransitionState() {}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_TransitionState UnityEngine::UIElements::StylePropertyAnimationSystem_TransitionState::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_TransitionState UnityEngine::UIElements::StylePropertyAnimationSystem_TransitionState::Running{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_TransitionState UnityEngine::UIElements::StylePropertyAnimationSystem_TransitionState::Started{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_TransitionState UnityEngine::UIElements::StylePropertyAnimationSystem_TransitionState::Ended{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_TransitionState UnityEngine::UIElements::StylePropertyAnimationSystem_TransitionState::Canceled{ static_cast<int32_t>(0x8) };
template <typename TTimingData, typename TStyleData> inline int32_t UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData, TStyleData>::get_capacity() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData, TStyleData>>::get(),
                                  "get_capacity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TTimingData, typename TStyleData> inline void UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData, TStyleData>::set_capacity(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData, TStyleData>>::get(), "set_capacity",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TTimingData, typename TStyleData> inline void UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData, TStyleData>::LocalInit() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData, TStyleData>>::get(),
                                  "LocalInit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TTimingData, typename TStyleData>
inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData, TStyleData>
UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData, TStyleData>::Create() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData, TStyleData>>::get(),
                                  "Create", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData, TStyleData>, false>(nullptr, ___internal_method);
}
template <typename TTimingData, typename TStyleData>
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData, TStyleData>::IndexOf(::UnityEngine::UIElements::VisualElement* ve,
                                                                                                                       ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop,
                                                                                                                       ::ByRef<int32_t> index) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData, TStyleData>>::get(),
                                  "IndexOf", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ve, prop, index);
}
template <typename TTimingData, typename TStyleData>
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData, TStyleData>::Add(::UnityEngine::UIElements::VisualElement* owner,
                                                                                                                   ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, TTimingData timingData,
                                                                                                                   TStyleData styleData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData, TStyleData>>::get(), "Add",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TTimingData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TStyleData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, owner, prop, timingData, styleData);
}
template <typename TTimingData, typename TStyleData> inline void UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData, TStyleData>::Remove(int32_t cancelledIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData, TStyleData>>::get(),
                                  "Remove", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cancelledIndex);
}
template <typename TTimingData, typename TStyleData>
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData, TStyleData>::Replace(int32_t index, TTimingData timingData, TStyleData styleData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData, TStyleData>>::get(), "Replace",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TTimingData>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TStyleData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, timingData, styleData);
}
template <typename TTimingData, typename TStyleData>
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData, TStyleData>::RemoveAll(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData, TStyleData>>::get(), "RemoveAll",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve);
}
template <typename TTimingData, typename TStyleData> inline void UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData, TStyleData>::RemoveAll() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData, TStyleData>>::get(),
                                  "RemoveAll", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TTimingData, typename TStyleData>
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData, TStyleData>::GetActivePropertiesForElement(
    ::UnityEngine::UIElements::VisualElement* ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>* outProperties) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData, TStyleData>>::get(),
      "GetActivePropertiesForElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, outProperties);
}
// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "properties", ty: "::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "timing", ty: "::ArrayW<TTimingData,::Array<TTimingData>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "style", ty:
// "::ArrayW<TStyleData,::Array<TStyleData>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "indices", ty:
// "::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair,int32_t>*", modifiers: "", def_value: Some("{}") }]
template <typename TTimingData, typename TStyleData>
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData, TStyleData>::StylePropertyAnimationSystem_AnimationDataSet_2(
    ::ArrayW<::UnityEngine::UIElements::VisualElement*, ::Array<::UnityEngine::UIElements::VisualElement*>*> elements,
    ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> properties,
    ::ArrayW<TTimingData, ::Array<TTimingData>*> timing, ::ArrayW<TStyleData, ::Array<TStyleData>*> style, int32_t count,
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair, int32_t>* indices) noexcept {
  this->elements = elements;
  this->properties = properties;
  this->timing = timing;
  this->style = style;
  this->count = count;
  this->indices = indices;
}
// Ctor Parameters []
template <typename TTimingData, typename TStyleData>
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData, TStyleData>::StylePropertyAnimationSystem_AnimationDataSet_2() {}
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4a95cf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair::setStaticF_Comparer(
    ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair>*, "Comparer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair>::get>(
      std::forward<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair>*>(value));
}
inline ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair>*
UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair::getStaticF_Comparer() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair>*, "Comparer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair>::get>();
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair::_ctor(::UnityEngine::UIElements::VisualElement* element,
                                                                                             ::UnityEngine::UIElements::StyleSheets::StylePropertyId property) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, element, property);
}
// Ctor Parameters [CppParam { name: "element", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: Some("{}") }, CppParam { name: "property", ty:
// "::UnityEngine::UIElements::StyleSheets::StylePropertyId", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair::StylePropertyAnimationSystem_ElementPropertyPair(
    ::UnityEngine::UIElements::VisualElement* element, ::UnityEngine::UIElements::StyleSheets::StylePropertyId property) noexcept {
  this->element = element;
  this->property = property;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair::StylePropertyAnimationSystem_ElementPropertyPair() {}
//  Writing Method size for method: ::UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer::*)(
    ::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair, ::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair)>(
    &::UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer::Equals)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x4a95d7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer*>::get(), "Equals",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer::*)(
    ::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair)>(&::UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x4a95d94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer*>::get(), "GetHashCode",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer::*)()>(
    &::UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a95d74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer*>::get(),
                                    ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer::Equals(::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair x,
                                                                                                               ::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer*>::get(), "Equals",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x, y);
}
inline int32_t
UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer::GetHashCode(::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair obj) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer*>::get(), "GetHashCode",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, obj);
}
inline void UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer*
UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair>"
constexpr UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer::operator ::System::Collections::Generic::IEqualityComparer_1<
    ::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair>*() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair>*
UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer::
    i___System__Collections__Generic__IEqualityComparer_1___UnityEngine__UIElements__StylePropertyAnimationSystem_ElementPropertyPair_() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer() {}
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values.CancelAllAnimations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_Values::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_Values::CancelAllAnimations)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values.CancelAllAnimations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_Values::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_Values::CancelAllAnimations)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values.CancelAnimation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_Values::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_Values::CancelAnimation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values.UpdateAnimation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_Values::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_Values::UpdateAnimation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values.GetAllAnimations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_Values::*)(
    ::UnityEngine::UIElements::VisualElement*, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*)>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_Values::GetAllAnimations)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_Values::*)(int64_t)>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_Values::Update)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values.UpdateValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_Values::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_Values::UpdateValues)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_Values::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_Values::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_Values::*)(int32_t)>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_Values::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_Values::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_Values::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a95dcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values::CancelAllAnimations() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values::CancelAllAnimations(::UnityEngine::UIElements::VisualElement* ve) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values::CancelAnimation(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, id);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values::UpdateAnimation(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, id);
}
inline void
UnityEngine::UIElements::StylePropertyAnimationSystem_Values::GetAllAnimations(::UnityEngine::UIElements::VisualElement* ve,
                                                                               ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>* outPropertyIds) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, outPropertyIds);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values::Update(int64_t currentTimeMs) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentTimeMs);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values::UpdateValues() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values::UpdateComputedStyle() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values::UpdateComputedStyle(int32_t i) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values* UnityEngine::UIElements::StylePropertyAnimationSystem_Values::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values::StylePropertyAnimationSystem_Values() {}
template <typename T>
inline void UnityEngine::UIElements::TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c<T>::setStaticF___9(
    ::UnityEngine::UIElements::TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c<T>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c<T>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c<T>*>::get>(
      std::forward<::UnityEngine::UIElements::TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c<T>*>(value));
}
template <typename T>
inline ::UnityEngine::UIElements::TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c<T>*
UnityEngine::UIElements::TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::UIElements::TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c<T>*, "<>9",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c<T>*>::get>();
}
template <typename T> inline void UnityEngine::UIElements::TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c<T>*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*
UnityEngine::UIElements::TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c<T>::__cctor_b__11_0() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c<T>*>::get(),
                                  "<.cctor>b__11_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*, false>(this, ___internal_method);
}
template <typename T>
inline ::UnityEngine::UIElements::TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c<T>*
UnityEngine::UIElements::TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c<T>*>());
}
// Ctor Parameters []
template <typename T>
constexpr ::UnityEngine::UIElements::TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c<T>::TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c() {}
template <typename T>
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair,
                                                       ::UnityEngine::UIElements::StylePropertyAnimationSystem_TransitionState>*&
UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>::__cordl_internal_get_elementPropertyStateDelta() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementPropertyStateDelta;
}
template <typename T>
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair,
                                                       ::UnityEngine::UIElements::StylePropertyAnimationSystem_TransitionState>* const&
UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>::__cordl_internal_get_elementPropertyStateDelta() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementPropertyStateDelta;
}
template <typename T>
constexpr void UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>::__cordl_internal_set_elementPropertyStateDelta(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair, ::UnityEngine::UIElements::StylePropertyAnimationSystem_TransitionState>*
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___elementPropertyStateDelta, value);
}
template <typename T>
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair,
                                                       ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*&
UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>::__cordl_internal_get_elementPropertyQueuedEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementPropertyQueuedEvents;
}
template <typename T>
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair,
                                                       ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>* const&
UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>::__cordl_internal_get_elementPropertyQueuedEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementPropertyQueuedEvents;
}
template <typename T>
constexpr void UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>::__cordl_internal_set_elementPropertyQueuedEvents(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair,
                                                 ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___elementPropertyQueuedEvents, value);
}
template <typename T> constexpr ::UnityEngine::UIElements::IPanel*& UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>::__cordl_internal_get_panel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
template <typename T>
constexpr ::UnityEngine::UIElements::IPanel* const& UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>::__cordl_internal_get_panel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
template <typename T>
constexpr void UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>::__cordl_internal_set_panel(::UnityEngine::UIElements::IPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___panel, value);
}
template <typename T> constexpr int32_t& UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>::__cordl_internal_get_m_ChangesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChangesCount;
}
template <typename T> constexpr int32_t const& UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>::__cordl_internal_get_m_ChangesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChangesCount;
}
template <typename T> constexpr void UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>::__cordl_internal_set_m_ChangesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ChangesCount = value;
}
template <typename T>
inline void UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>::setStaticF_k_EventQueuePool(
    ::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*, "k_EventQueuePool",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>*>::get>(
      std::forward<::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*>(value));
}
template <typename T>
inline ::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*
UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>::getStaticF_k_EventQueuePool() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*, "k_EventQueuePool",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>*>::get>();
}
template <typename T>
inline ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>* UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>::GetPooledQueue() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>*>::get(),
                                  "GetPooledQueue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*, false>(nullptr, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>::RegisterChange() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>*>::get(),
                                  "RegisterChange", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>::UnregisterChange() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>*>::get(),
                                  "UnregisterChange", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>::StateChanged() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>*>::get(),
                                  "StateChanged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>*>::get(),
                                  "Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>*
UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState() {}
// Ctor Parameters [CppParam { name: "startTimeMs", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "durationMs", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "easingCurve", ty: "::System::Func_2<float_t,float_t>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "easedProgress", ty: "float_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "reversingShorteningFactor", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "isStarted", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "delayMs", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TimingData<T>::Values_1_StylePropertyAnimationSystem_TimingData(int64_t startTimeMs, int32_t durationMs,
                                                                                                                                           ::System::Func_2<float_t, float_t>* easingCurve,
                                                                                                                                           float_t easedProgress, float_t reversingShorteningFactor,
                                                                                                                                           bool isStarted, int32_t delayMs) noexcept {
  this->startTimeMs = startTimeMs;
  this->durationMs = durationMs;
  this->easingCurve = easingCurve;
  this->easedProgress = easedProgress;
  this->reversingShorteningFactor = reversingShorteningFactor;
  this->isStarted = isStarted;
  this->delayMs = delayMs;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TimingData<T>::Values_1_StylePropertyAnimationSystem_TimingData() {}
// Ctor Parameters [CppParam { name: "startValue", ty: "T", modifiers: "", def_value: Some("{}") }, CppParam { name: "endValue", ty: "T", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "reversingAdjustedStartValue", ty: "T", modifiers: "", def_value: Some("{}") }, CppParam { name: "currentValue", ty: "T", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_StyleData<T>::Values_1_StylePropertyAnimationSystem_StyleData(T startValue, T endValue, T reversingAdjustedStartValue,
                                                                                                                                         T currentValue) noexcept {
  this->startValue = startValue;
  this->endValue = endValue;
  this->reversingAdjustedStartValue = reversingAdjustedStartValue;
  this->currentValue = currentValue;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_StyleData<T>::Values_1_StylePropertyAnimationSystem_StyleData() {}
template <typename T>
inline void UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_EmptyData<T>::setStaticF_Default(::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_EmptyData<T> value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_EmptyData<T>, "Default",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_EmptyData<T>>::get>(
      std::forward<::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_EmptyData<T>>(value));
}
template <typename T>
inline ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_EmptyData<T> UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_EmptyData<T>::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_EmptyData<T>, "Default",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_EmptyData<T>>::get>();
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_EmptyData<T>::Values_1_StylePropertyAnimationSystem_EmptyData() {}
template <typename T> constexpr int64_t& UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::__cordl_internal_get_m_CurrentTimeMs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentTimeMs;
}
template <typename T> constexpr int64_t const& UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::__cordl_internal_get_m_CurrentTimeMs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentTimeMs;
}
template <typename T> constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::__cordl_internal_set_m_CurrentTimeMs(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentTimeMs = value;
}
template <typename T>
constexpr ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>*&
UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::__cordl_internal_get_m_CurrentFrameEventsState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentFrameEventsState;
}
template <typename T>
constexpr ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>* const&
UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::__cordl_internal_get_m_CurrentFrameEventsState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentFrameEventsState;
}
template <typename T>
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::__cordl_internal_set_m_CurrentFrameEventsState(
    ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_CurrentFrameEventsState, value);
}
template <typename T>
constexpr ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>*&
UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::__cordl_internal_get_m_NextFrameEventsState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NextFrameEventsState;
}
template <typename T>
constexpr ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>* const&
UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::__cordl_internal_get_m_NextFrameEventsState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NextFrameEventsState;
}
template <typename T>
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::__cordl_internal_set_m_NextFrameEventsState(
    ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_NextFrameEventsState, value);
}
template <typename T>
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2<::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TimingData<T>,
                                                                                     ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_StyleData<T>>&
UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::__cordl_internal_get_running() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___running;
}
template <typename T>
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2<::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TimingData<T>,
                                                                                     ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_StyleData<T>> const&
UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::__cordl_internal_get_running() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___running;
}
template <typename T>
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::__cordl_internal_set_running(
    ::UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2<::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TimingData<T>,
                                                                               ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_StyleData<T>>
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___running = value;
}
template <typename T>
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2<::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_EmptyData<T>, T>&
UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::__cordl_internal_get_completed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completed;
}
template <typename T>
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2<::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_EmptyData<T>, T> const&
UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::__cordl_internal_get_completed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completed;
}
template <typename T>
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::__cordl_internal_set_completed(
    ::UnityEngine::UIElements::StylePropertyAnimationSystem_AnimationDataSet_2<::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_EmptyData<T>, T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___completed = value;
}
template <typename T> inline bool UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::get_isEmpty() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>::get(), "get_isEmpty",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline ::System::Func_3<T, T, bool>* UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::get_SameFunc() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Func_3<T, T, bool>*, false>(this, ___internal_method);
}
template <typename T>
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::ConvertUnits(::UnityEngine::UIElements::VisualElement* owner,
                                                                                            ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::ByRef<T> a, ::ByRef<T> b) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, owner, prop, a, b);
}
template <typename T> inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::SwapFrameStates() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>::get(), "SwapFrameStates",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::QueueEvent(::UnityEngine::UIElements::EventBase* evt,
                                                                                          ::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair epp) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>::get(), "QueueEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt, epp);
}
template <typename T> inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::ClearEventQueue(::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair epp) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>::get(), "ClearEventQueue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StylePropertyAnimationSystem_ElementPropertyPair>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, epp);
}
template <typename T> inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::QueueTransitionRunEvent(::UnityEngine::UIElements::VisualElement* ve, int32_t runningIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>::get(),
                                               "QueueTransitionRunEvent", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, runningIndex);
}
template <typename T> inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::QueueTransitionStartEvent(::UnityEngine::UIElements::VisualElement* ve, int32_t runningIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>::get(),
                                               "QueueTransitionStartEvent", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, runningIndex);
}
template <typename T> inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::QueueTransitionEndEvent(::UnityEngine::UIElements::VisualElement* ve, int32_t runningIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>::get(),
                                               "QueueTransitionEndEvent", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, runningIndex);
}
template <typename T>
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::QueueTransitionCancelEvent(::UnityEngine::UIElements::VisualElement* ve, int32_t runningIndex, int64_t panelElapsedMs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>::get(), "QueueTransitionCancelEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, runningIndex, panelElapsedMs);
}
template <typename T>
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::SendTransitionCancelEvent(::UnityEngine::UIElements::VisualElement* ve, int32_t runningIndex, int64_t panelElapsedMs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>::get(), "SendTransitionCancelEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, runningIndex, panelElapsedMs);
}
template <typename T> inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::CancelAllAnimations() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>::get(),
                                               "CancelAllAnimations", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::CancelAllAnimations(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>::get(), "CancelAllAnimations",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve);
}
template <typename T>
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::CancelAnimation(::UnityEngine::UIElements::VisualElement* ve,
                                                                                               ::UnityEngine::UIElements::StyleSheets::StylePropertyId id) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>::get(), "CancelAnimation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, id);
}
template <typename T>
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::UpdateAnimation(::UnityEngine::UIElements::VisualElement* ve,
                                                                                               ::UnityEngine::UIElements::StyleSheets::StylePropertyId id) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>::get(), "UpdateAnimation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, id);
}
template <typename T>
inline void
UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::GetAllAnimations(::UnityEngine::UIElements::VisualElement* ve,
                                                                                    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>* outPropertyIds) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>::get(), "GetAllAnimations", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, outPropertyIds);
}
template <typename T> inline float_t UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::ComputeReversingShorteningFactor(int32_t oldIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>::get(), "ComputeReversingShorteningFactor",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, oldIndex);
}
template <typename T>
inline int32_t UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::ComputeReversingDuration(int32_t newTransitionDurationMs, float_t newReversingShorteningFactor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>::get(), "ComputeReversingDuration",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, newTransitionDurationMs, newReversingShorteningFactor);
}
template <typename T> inline int32_t UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::ComputeReversingDelay(int32_t delayMs, float_t newReversingShorteningFactor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>::get(), "ComputeReversingDelay",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, delayMs, newReversingShorteningFactor);
}
template <typename T>
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::StartTransition(::UnityEngine::UIElements::VisualElement* owner,
                                                                                               ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, T startValue, T endValue,
                                                                                               int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve,
                                                                                               int64_t currentTimeMs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>::get(), "StartTransition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<float_t, float_t>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, owner, prop, startValue, endValue, durationMs, delayMs, easingCurve, currentTimeMs);
}
template <typename T> inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::ForceComputedStyleEndValue(int32_t runningIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>::get(), "ForceComputedStyleEndValue",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, runningIndex);
}
template <typename T> inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::Update(int64_t currentTimeMs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>::get(), "Update",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentTimeMs);
}
template <typename T> inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::ProcessEventQueue() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>::get(), "ProcessEventQueue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::UpdateProgress(int64_t currentTimeMs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>::get(), "UpdateProgress",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentTimeMs);
}
template <typename T> inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>* UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::StylePropertyAnimationSystem_Values_1() {}
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat.get_SameFunc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_3<float_t, float_t, bool>* (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::get_SameFunc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a95dd4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat.IsSame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(float_t, float_t)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::IsSame)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x4a95ddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat*>::get(), "IsSame", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat.Lerp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::Lerp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4a95e64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat*>::get(), "Lerp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat.UpdateValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::UpdateValues)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x4a95e74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat*>::get(), "UpdateValues",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x4a95ef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat*>::get(),
                                                 "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::*)(int32_t)>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x4a95fc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat*>::get(), "UpdateComputedStyle",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x4a96068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Func_3<float_t, float_t, bool>*& UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::__cordl_internal_get__SameFunc_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SameFunc_k__BackingField;
}
constexpr ::System::Func_3<float_t, float_t, bool>* const& UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::__cordl_internal_get__SameFunc_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SameFunc_k__BackingField;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::__cordl_internal_set__SameFunc_k__BackingField(::System::Func_3<float_t, float_t, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____SameFunc_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Func_3<float_t, float_t, bool>* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::get_SameFunc() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Func_3<float_t, float_t, bool>*, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::IsSame(float_t a, float_t b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat*>::get(), "IsSame", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline float_t UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::Lerp(float_t a, float_t b, float_t t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat*>::get(), "Lerp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, a, b, t);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::UpdateValues() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat*>::get(), "UpdateValues",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::UpdateComputedStyle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat*>::get(),
                                               "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::UpdateComputedStyle(int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat*>::get(), "UpdateComputedStyle",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::StylePropertyAnimationSystem_ValuesFloat() {}
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt.get_SameFunc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_3<int32_t, int32_t, bool>* (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::get_SameFunc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a96100;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt.IsSame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t, int32_t)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::IsSame)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4a96108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt*>::get(), "IsSame", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt.Lerp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, int32_t, float_t)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::Lerp)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x4a96114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt*>::get(), "Lerp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt.UpdateValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::UpdateValues)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x4a96200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt*>::get(), "UpdateValues",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x4a96298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt*>::get(),
                                                 "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::*)(int32_t)>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x4a96364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt*>::get(), "UpdateComputedStyle",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x4a9640c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Func_3<int32_t, int32_t, bool>*& UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::__cordl_internal_get__SameFunc_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SameFunc_k__BackingField;
}
constexpr ::System::Func_3<int32_t, int32_t, bool>* const& UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::__cordl_internal_get__SameFunc_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SameFunc_k__BackingField;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::__cordl_internal_set__SameFunc_k__BackingField(::System::Func_3<int32_t, int32_t, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____SameFunc_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Func_3<int32_t, int32_t, bool>* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::get_SameFunc() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Func_3<int32_t, int32_t, bool>*, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::IsSame(int32_t a, int32_t b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt*>::get(), "IsSame", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline int32_t UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::Lerp(int32_t a, int32_t b, float_t t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt*>::get(), "Lerp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, a, b, t);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::UpdateValues() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt*>::get(), "UpdateValues",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::UpdateComputedStyle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt*>::get(), "UpdateComputedStyle",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::UpdateComputedStyle(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt*>::get(), "UpdateComputedStyle",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::StylePropertyAnimationSystem_ValuesInt() {}
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength.get_SameFunc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_3<::UnityEngine::UIElements::Length, ::UnityEngine::UIElements::Length, bool>* (
    ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::get_SameFunc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a964a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength.IsSame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::UIElements::Length, ::UnityEngine::UIElements::Length)>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::IsSame)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x4a964ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength*>::get(), "IsSame", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Length>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Length>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength.ConvertUnits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::ByRef<::UnityEngine::UIElements::Length>, ::ByRef<::UnityEngine::UIElements::Length>)>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::ConvertUnits)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4a9654c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength*>::get(), "ConvertUnits", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::Length>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::Length>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength.Lerp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Length (*)(::UnityEngine::UIElements::Length, ::UnityEngine::UIElements::Length, float_t)>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::Lerp)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x4a96574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength*>::get(), "Lerp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Length>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Length>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength.UpdateValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::UpdateValues)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x4a965b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength*>::get(), "UpdateValues",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x4a96668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength*>::get(),
                                                 "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::*)(int32_t)>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x4a96734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength*>::get(), "UpdateComputedStyle",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x4a967dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Func_3<::UnityEngine::UIElements::Length, ::UnityEngine::UIElements::Length, bool>*&
UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::__cordl_internal_get__SameFunc_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SameFunc_k__BackingField;
}
constexpr ::System::Func_3<::UnityEngine::UIElements::Length, ::UnityEngine::UIElements::Length, bool>* const&
UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::__cordl_internal_get__SameFunc_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SameFunc_k__BackingField;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::__cordl_internal_set__SameFunc_k__BackingField(
    ::System::Func_3<::UnityEngine::UIElements::Length, ::UnityEngine::UIElements::Length, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____SameFunc_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Func_3<::UnityEngine::UIElements::Length, ::UnityEngine::UIElements::Length, bool>* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::get_SameFunc() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Func_3<::UnityEngine::UIElements::Length, ::UnityEngine::UIElements::Length, bool>*, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::IsSame(::UnityEngine::UIElements::Length a, ::UnityEngine::UIElements::Length b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength*>::get(), "IsSame", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Length>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Length>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::ConvertUnits(::UnityEngine::UIElements::VisualElement* owner,
                                                                                             ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::ByRef<::UnityEngine::UIElements::Length> a,
                                                                                             ::ByRef<::UnityEngine::UIElements::Length> b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength*>::get(), "ConvertUnits", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::Length>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::Length>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, owner, prop, a, b);
}
inline ::UnityEngine::UIElements::Length UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::Lerp(::UnityEngine::UIElements::Length a, ::UnityEngine::UIElements::Length b, float_t t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength*>::get(), "Lerp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Length>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Length>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Length, false>(nullptr, ___internal_method, a, b, t);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::UpdateValues() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength*>::get(), "UpdateValues",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::UpdateComputedStyle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength*>::get(),
                                               "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::UpdateComputedStyle(int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength*>::get(), "UpdateComputedStyle",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::StylePropertyAnimationSystem_ValuesLength() {}
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor.get_SameFunc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_3<::UnityEngine::Color, ::UnityEngine::Color, bool>* (
    ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::get_SameFunc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a96874;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor.IsSame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Color, ::UnityEngine::Color)>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::IsSame)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x4a9687c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor*>::get(), "IsSame", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor.Lerp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (*)(::UnityEngine::Color, ::UnityEngine::Color, float_t)>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::Lerp)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x4a969b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor*>::get(), "Lerp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor.UpdateValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::UpdateValues)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4a969ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor*>::get(), "UpdateValues",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x4a96a70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor*>::get(),
                                                 "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::*)(int32_t)>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x4a96b40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor*>::get(), "UpdateComputedStyle",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x4a96bec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Func_3<::UnityEngine::Color, ::UnityEngine::Color, bool>*& UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::__cordl_internal_get__SameFunc_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SameFunc_k__BackingField;
}
constexpr ::System::Func_3<::UnityEngine::Color, ::UnityEngine::Color, bool>* const&
UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::__cordl_internal_get__SameFunc_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SameFunc_k__BackingField;
}
constexpr void
UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::__cordl_internal_set__SameFunc_k__BackingField(::System::Func_3<::UnityEngine::Color, ::UnityEngine::Color, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____SameFunc_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Func_3<::UnityEngine::Color, ::UnityEngine::Color, bool>* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::get_SameFunc() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Func_3<::UnityEngine::Color, ::UnityEngine::Color, bool>*, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::IsSame(::UnityEngine::Color c, ::UnityEngine::Color d) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor*>::get(), "IsSame", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, c, d);
}
inline ::UnityEngine::Color UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::Lerp(::UnityEngine::Color a, ::UnityEngine::Color b, float_t t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor*>::get(), "Lerp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(nullptr, ___internal_method, a, b, t);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::UpdateValues() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor*>::get(), "UpdateValues",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::UpdateComputedStyle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor*>::get(),
                                               "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::UpdateComputedStyle(int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor*>::get(), "UpdateComputedStyle",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::StylePropertyAnimationSystem_ValuesColor() {}
template <typename T> constexpr ::System::Func_3<T, T, bool>*& UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesDiscrete_1<T>::__cordl_internal_get__SameFunc_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SameFunc_k__BackingField;
}
template <typename T> constexpr ::System::Func_3<T, T, bool>* const& UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesDiscrete_1<T>::__cordl_internal_get__SameFunc_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SameFunc_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesDiscrete_1<T>::__cordl_internal_set__SameFunc_k__BackingField(::System::Func_3<T, T, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____SameFunc_k__BackingField, value);
}
template <typename T> inline ::System::Func_3<T, T, bool>* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesDiscrete_1<T>::get_SameFunc() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesDiscrete_1<T>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Func_3<T, T, bool>*, false>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesDiscrete_1<T>::IsSame(T a, T b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesDiscrete_1<T>*>::get(), "IsSame", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
template <typename T> inline T UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesDiscrete_1<T>::Lerp(T a, T b, float_t t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesDiscrete_1<T>*>::get(), "Lerp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, a, b, t);
}
template <typename T> inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesDiscrete_1<T>::UpdateValues() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesDiscrete_1<T>*>::get(),
                                               "UpdateValues", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesDiscrete_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesDiscrete_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesDiscrete_1<T>* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesDiscrete_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesDiscrete_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesDiscrete_1<T>::StylePropertyAnimationSystem_ValuesDiscrete_1() {}
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x4a96c84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground*>::get(),
                                                 "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground::*)(int32_t)>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x4a96d60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground*>::get(), "UpdateComputedStyle",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x4a96e1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground::UpdateComputedStyle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground*>::get(),
                                               "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground::UpdateComputedStyle(int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground*>::get(), "UpdateComputedStyle",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground::StylePropertyAnimationSystem_ValuesBackground() {}
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x4a96e64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition*>::get(),
                                                 "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition::*)(int32_t)>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x4a96f30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition*>::get(), "UpdateComputedStyle",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x4a96fd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition::UpdateComputedStyle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition*>::get(),
                                               "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition::UpdateComputedStyle(int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition*>::get(), "UpdateComputedStyle",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition::StylePropertyAnimationSystem_ValuesFontDefinition() {}
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x4a97020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont*>::get(),
                                                 "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont::*)(int32_t)>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x4a970ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont*>::get(), "UpdateComputedStyle",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x4a97194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont::UpdateComputedStyle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont*>::get(),
                                               "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont::UpdateComputedStyle(int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont*>::get(), "UpdateComputedStyle",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont::StylePropertyAnimationSystem_ValuesFont() {}
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow.get_SameFunc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_3<::UnityEngine::UIElements::TextShadow, ::UnityEngine::UIElements::TextShadow, bool>* (
    ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::get_SameFunc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a971dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow.IsSame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::UIElements::TextShadow, ::UnityEngine::UIElements::TextShadow)>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::IsSame)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x4a971e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow*>::get(), "IsSame", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextShadow>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextShadow>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow.Lerp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::TextShadow (*)(
    ::UnityEngine::UIElements::TextShadow, ::UnityEngine::UIElements::TextShadow, float_t)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::Lerp)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4a9722c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow*>::get(), "Lerp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextShadow>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextShadow>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow.UpdateValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::UpdateValues)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x4a97288;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow*>::get(),
                                                 "UpdateValues", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x4a9739c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow*>::get(),
                                                 "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::*)(int32_t)>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x4a9748c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow*>::get(), "UpdateComputedStyle",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x4a97560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Func_3<::UnityEngine::UIElements::TextShadow, ::UnityEngine::UIElements::TextShadow, bool>*&
UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::__cordl_internal_get__SameFunc_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SameFunc_k__BackingField;
}
constexpr ::System::Func_3<::UnityEngine::UIElements::TextShadow, ::UnityEngine::UIElements::TextShadow, bool>* const&
UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::__cordl_internal_get__SameFunc_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SameFunc_k__BackingField;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::__cordl_internal_set__SameFunc_k__BackingField(
    ::System::Func_3<::UnityEngine::UIElements::TextShadow, ::UnityEngine::UIElements::TextShadow, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____SameFunc_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Func_3<::UnityEngine::UIElements::TextShadow, ::UnityEngine::UIElements::TextShadow, bool>* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::get_SameFunc() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Func_3<::UnityEngine::UIElements::TextShadow, ::UnityEngine::UIElements::TextShadow, bool>*, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::IsSame(::UnityEngine::UIElements::TextShadow a, ::UnityEngine::UIElements::TextShadow b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow*>::get(), "IsSame", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextShadow>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextShadow>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::UIElements::TextShadow UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::Lerp(::UnityEngine::UIElements::TextShadow a,
                                                                                                                          ::UnityEngine::UIElements::TextShadow b, float_t t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow*>::get(), "Lerp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextShadow>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextShadow>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextShadow, false>(nullptr, ___internal_method, a, b, t);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::UpdateValues() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow*>::get(), "UpdateValues",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::UpdateComputedStyle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow*>::get(),
                                               "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::UpdateComputedStyle(int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow*>::get(), "UpdateComputedStyle",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::StylePropertyAnimationSystem_ValuesTextShadow() {}
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale.get_SameFunc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_3<::UnityEngine::UIElements::Scale, ::UnityEngine::UIElements::Scale, bool>* (
    ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::get_SameFunc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a975f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale.IsSame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::UIElements::Scale, ::UnityEngine::UIElements::Scale)>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::IsSame)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4a97600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale*>::get(), "IsSame", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Scale>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Scale>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x4a97654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale*>::get(),
                                                 "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::*)(int32_t)>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x4a97720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale*>::get(), "UpdateComputedStyle",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale.Lerp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Scale (*)(::UnityEngine::UIElements::Scale, ::UnityEngine::UIElements::Scale, float_t)>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::Lerp)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x4a977c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale*>::get(), "Lerp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Scale>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Scale>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale.UpdateValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::UpdateValues)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x4a97834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale*>::get(), "UpdateValues",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x4a978d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Func_3<::UnityEngine::UIElements::Scale, ::UnityEngine::UIElements::Scale, bool>*&
UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::__cordl_internal_get__SameFunc_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SameFunc_k__BackingField;
}
constexpr ::System::Func_3<::UnityEngine::UIElements::Scale, ::UnityEngine::UIElements::Scale, bool>* const&
UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::__cordl_internal_get__SameFunc_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SameFunc_k__BackingField;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::__cordl_internal_set__SameFunc_k__BackingField(
    ::System::Func_3<::UnityEngine::UIElements::Scale, ::UnityEngine::UIElements::Scale, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____SameFunc_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Func_3<::UnityEngine::UIElements::Scale, ::UnityEngine::UIElements::Scale, bool>* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::get_SameFunc() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Func_3<::UnityEngine::UIElements::Scale, ::UnityEngine::UIElements::Scale, bool>*, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::IsSame(::UnityEngine::UIElements::Scale a, ::UnityEngine::UIElements::Scale b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale*>::get(), "IsSame", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Scale>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Scale>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::UpdateComputedStyle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale*>::get(),
                                               "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::UpdateComputedStyle(int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale*>::get(), "UpdateComputedStyle",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
inline ::UnityEngine::UIElements::Scale UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::Lerp(::UnityEngine::UIElements::Scale a, ::UnityEngine::UIElements::Scale b, float_t t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale*>::get(), "Lerp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Scale>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Scale>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Scale, false>(nullptr, ___internal_method, a, b, t);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::UpdateValues() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale*>::get(), "UpdateValues",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::StylePropertyAnimationSystem_ValuesScale() {}
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate.get_SameFunc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_3<::UnityEngine::UIElements::Rotate, ::UnityEngine::UIElements::Rotate, bool>* (
    ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::get_SameFunc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a97968;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate.IsSame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::UIElements::Rotate, ::UnityEngine::UIElements::Rotate)>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::IsSame)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4a97970;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate*>::get(), "IsSame", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Rotate>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Rotate>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x4a979b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate*>::get(),
                                                 "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::*)(int32_t)>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x4a97a9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate*>::get(), "UpdateComputedStyle",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate.Lerp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Rotate (*)(::UnityEngine::UIElements::Rotate, ::UnityEngine::UIElements::Rotate, float_t)>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::Lerp)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x4a97b68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate*>::get(), "Lerp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Rotate>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Rotate>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate.UpdateValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::UpdateValues)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x4a97be0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate*>::get(), "UpdateValues",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x4a97cb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Func_3<::UnityEngine::UIElements::Rotate, ::UnityEngine::UIElements::Rotate, bool>*&
UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::__cordl_internal_get__SameFunc_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SameFunc_k__BackingField;
}
constexpr ::System::Func_3<::UnityEngine::UIElements::Rotate, ::UnityEngine::UIElements::Rotate, bool>* const&
UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::__cordl_internal_get__SameFunc_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SameFunc_k__BackingField;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::__cordl_internal_set__SameFunc_k__BackingField(
    ::System::Func_3<::UnityEngine::UIElements::Rotate, ::UnityEngine::UIElements::Rotate, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____SameFunc_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Func_3<::UnityEngine::UIElements::Rotate, ::UnityEngine::UIElements::Rotate, bool>* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::get_SameFunc() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Func_3<::UnityEngine::UIElements::Rotate, ::UnityEngine::UIElements::Rotate, bool>*, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::IsSame(::UnityEngine::UIElements::Rotate a, ::UnityEngine::UIElements::Rotate b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate*>::get(), "IsSame", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Rotate>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Rotate>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::UpdateComputedStyle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate*>::get(),
                                               "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::UpdateComputedStyle(int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate*>::get(), "UpdateComputedStyle",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
inline ::UnityEngine::UIElements::Rotate UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::Lerp(::UnityEngine::UIElements::Rotate a, ::UnityEngine::UIElements::Rotate b, float_t t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate*>::get(), "Lerp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Rotate>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Rotate>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Rotate, false>(nullptr, ___internal_method, a, b, t);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::UpdateValues() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate*>::get(), "UpdateValues",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::StylePropertyAnimationSystem_ValuesRotate() {}
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate.get_SameFunc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_3<::UnityEngine::UIElements::Translate, ::UnityEngine::UIElements::Translate, bool>* (
    ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::get_SameFunc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a97d4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate.IsSame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::UIElements::Translate, ::UnityEngine::UIElements::Translate)>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::IsSame)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x4a97d54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate*>::get(), "IsSame", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Translate>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Translate>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate.ConvertUnits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::ByRef<::UnityEngine::UIElements::Translate>, ::ByRef<::UnityEngine::UIElements::Translate>)>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::ConvertUnits)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4a97dd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate*>::get(), "ConvertUnits",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::Translate>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::Translate>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x4a97df0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate*>::get(),
                                                 "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::*)(int32_t)>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x4a97ed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate*>::get(), "UpdateComputedStyle",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate.Lerp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Translate (*)(
    ::UnityEngine::UIElements::Translate, ::UnityEngine::UIElements::Translate, float_t)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::Lerp)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x4a97fa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate*>::get(), "Lerp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Translate>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Translate>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate.UpdateValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::UpdateValues)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x4a98020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate*>::get(),
                                                 "UpdateValues", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x4a980f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Func_3<::UnityEngine::UIElements::Translate, ::UnityEngine::UIElements::Translate, bool>*&
UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::__cordl_internal_get__SameFunc_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SameFunc_k__BackingField;
}
constexpr ::System::Func_3<::UnityEngine::UIElements::Translate, ::UnityEngine::UIElements::Translate, bool>* const&
UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::__cordl_internal_get__SameFunc_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SameFunc_k__BackingField;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::__cordl_internal_set__SameFunc_k__BackingField(
    ::System::Func_3<::UnityEngine::UIElements::Translate, ::UnityEngine::UIElements::Translate, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____SameFunc_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Func_3<::UnityEngine::UIElements::Translate, ::UnityEngine::UIElements::Translate, bool>* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::get_SameFunc() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Func_3<::UnityEngine::UIElements::Translate, ::UnityEngine::UIElements::Translate, bool>*, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::IsSame(::UnityEngine::UIElements::Translate a, ::UnityEngine::UIElements::Translate b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate*>::get(), "IsSame", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Translate>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Translate>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::ConvertUnits(::UnityEngine::UIElements::VisualElement* owner,
                                                                                                ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop,
                                                                                                ::ByRef<::UnityEngine::UIElements::Translate> a, ::ByRef<::UnityEngine::UIElements::Translate> b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate*>::get(), "ConvertUnits", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::Translate>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::Translate>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, owner, prop, a, b);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::UpdateComputedStyle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate*>::get(),
                                               "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::UpdateComputedStyle(int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate*>::get(), "UpdateComputedStyle",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
inline ::UnityEngine::UIElements::Translate UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::Lerp(::UnityEngine::UIElements::Translate a, ::UnityEngine::UIElements::Translate b,
                                                                                                                        float_t t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate*>::get(), "Lerp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Translate>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Translate>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Translate, false>(nullptr, ___internal_method, a, b, t);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::UpdateValues() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate*>::get(), "UpdateValues",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::StylePropertyAnimationSystem_ValuesTranslate() {}
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin.get_SameFunc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_3<::UnityEngine::UIElements::TransformOrigin, ::UnityEngine::UIElements::TransformOrigin, bool>* (
    ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::get_SameFunc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a9818c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin.IsSame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::UIElements::TransformOrigin, ::UnityEngine::UIElements::TransformOrigin)>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::IsSame)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x4a98194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin*>::get(),
                                                 "IsSame", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TransformOrigin>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TransformOrigin>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin.ConvertUnits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::ByRef<::UnityEngine::UIElements::TransformOrigin>,
    ::ByRef<::UnityEngine::UIElements::TransformOrigin>)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::ConvertUnits)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4a98200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin*>::get(), "ConvertUnits",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::TransformOrigin>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::TransformOrigin>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x4a98220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin*>::get(),
                                                 "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::*)(int32_t)>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x4a98308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin*>::get(), "UpdateComputedStyle",
                                   std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin.Lerp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::TransformOrigin (*)(
    ::UnityEngine::UIElements::TransformOrigin, ::UnityEngine::UIElements::TransformOrigin, float_t)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::Lerp)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x4a983d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin*>::get(), "Lerp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TransformOrigin>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TransformOrigin>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin.UpdateValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::UpdateValues)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x4a98448;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin*>::get(),
                                                 "UpdateValues", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x4a98528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Func_3<::UnityEngine::UIElements::TransformOrigin, ::UnityEngine::UIElements::TransformOrigin, bool>*&
UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::__cordl_internal_get__SameFunc_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SameFunc_k__BackingField;
}
constexpr ::System::Func_3<::UnityEngine::UIElements::TransformOrigin, ::UnityEngine::UIElements::TransformOrigin, bool>* const&
UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::__cordl_internal_get__SameFunc_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SameFunc_k__BackingField;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::__cordl_internal_set__SameFunc_k__BackingField(
    ::System::Func_3<::UnityEngine::UIElements::TransformOrigin, ::UnityEngine::UIElements::TransformOrigin, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____SameFunc_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Func_3<::UnityEngine::UIElements::TransformOrigin, ::UnityEngine::UIElements::TransformOrigin, bool>*
UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::get_SameFunc() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Func_3<::UnityEngine::UIElements::TransformOrigin, ::UnityEngine::UIElements::TransformOrigin, bool>*, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::IsSame(::UnityEngine::UIElements::TransformOrigin a, ::UnityEngine::UIElements::TransformOrigin b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin*>::get(), "IsSame", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TransformOrigin>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TransformOrigin>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::ConvertUnits(::UnityEngine::UIElements::VisualElement* owner,
                                                                                                      ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop,
                                                                                                      ::ByRef<::UnityEngine::UIElements::TransformOrigin> a,
                                                                                                      ::ByRef<::UnityEngine::UIElements::TransformOrigin> b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin*>::get(), "ConvertUnits",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::TransformOrigin>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::TransformOrigin>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, owner, prop, a, b);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::UpdateComputedStyle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin*>::get(),
                                               "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::UpdateComputedStyle(int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin*>::get(), "UpdateComputedStyle",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
inline ::UnityEngine::UIElements::TransformOrigin UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::Lerp(::UnityEngine::UIElements::TransformOrigin a,
                                                                                                                                    ::UnityEngine::UIElements::TransformOrigin b, float_t t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin*>::get(), "Lerp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TransformOrigin>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TransformOrigin>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TransformOrigin, false>(nullptr, ___internal_method, a, b, t);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::UpdateValues() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin*>::get(),
                                               "UpdateValues", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::StylePropertyAnimationSystem_ValuesTransformOrigin() {}
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x4a985c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition*>::get(),
                                                 "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition::*)(int32_t)>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x4a986a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition*>::get(), "UpdateComputedStyle",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x4a9875c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition::UpdateComputedStyle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition*>::get(),
                                               "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition::UpdateComputedStyle(int32_t i) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition*>::get(), "UpdateComputedStyle",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition::StylePropertyAnimationSystem_ValuesBackgroundPosition() {}
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x4a987a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat*>::get(),
                                                 "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat::*)(int32_t)>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x4a98870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat*>::get(), "UpdateComputedStyle",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x4a98918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat::UpdateComputedStyle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat*>::get(),
                                               "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat::UpdateComputedStyle(int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat*>::get(), "UpdateComputedStyle",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat::StylePropertyAnimationSystem_ValuesBackgroundRepeat() {}
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize.get_SameFunc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_3<::UnityEngine::UIElements::BackgroundSize, ::UnityEngine::UIElements::BackgroundSize, bool>* (
    ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::get_SameFunc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a98960;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize.IsSame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::UIElements::BackgroundSize, ::UnityEngine::UIElements::BackgroundSize)>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::IsSame)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x4a98968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize*>::get(), "IsSame",
                                                 std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BackgroundSize>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BackgroundSize>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize.ConvertUnits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::ByRef<::UnityEngine::UIElements::BackgroundSize>,
    ::ByRef<::UnityEngine::UIElements::BackgroundSize>)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::ConvertUnits)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4a989b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize*>::get(), "ConvertUnits",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::BackgroundSize>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::BackgroundSize>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x4a989d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize*>::get(),
                                                 "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::*)(int32_t)>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x4a98ab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize*>::get(), "UpdateComputedStyle",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize.Lerp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::BackgroundSize (*)(
    ::UnityEngine::UIElements::BackgroundSize, ::UnityEngine::UIElements::BackgroundSize, float_t)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::Lerp)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x4a98b84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize*>::get(), "Lerp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BackgroundSize>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BackgroundSize>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize.UpdateValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::UpdateValues)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x4a98c70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize*>::get(),
                                                 "UpdateValues", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x4a98d5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Func_3<::UnityEngine::UIElements::BackgroundSize, ::UnityEngine::UIElements::BackgroundSize, bool>*&
UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::__cordl_internal_get__SameFunc_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SameFunc_k__BackingField;
}
constexpr ::System::Func_3<::UnityEngine::UIElements::BackgroundSize, ::UnityEngine::UIElements::BackgroundSize, bool>* const&
UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::__cordl_internal_get__SameFunc_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SameFunc_k__BackingField;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::__cordl_internal_set__SameFunc_k__BackingField(
    ::System::Func_3<::UnityEngine::UIElements::BackgroundSize, ::UnityEngine::UIElements::BackgroundSize, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____SameFunc_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Func_3<::UnityEngine::UIElements::BackgroundSize, ::UnityEngine::UIElements::BackgroundSize, bool>*
UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::get_SameFunc() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Func_3<::UnityEngine::UIElements::BackgroundSize, ::UnityEngine::UIElements::BackgroundSize, bool>*, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::IsSame(::UnityEngine::UIElements::BackgroundSize a, ::UnityEngine::UIElements::BackgroundSize b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize*>::get(), "IsSame", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BackgroundSize>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BackgroundSize>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::ConvertUnits(::UnityEngine::UIElements::VisualElement* owner,
                                                                                                     ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop,
                                                                                                     ::ByRef<::UnityEngine::UIElements::BackgroundSize> a,
                                                                                                     ::ByRef<::UnityEngine::UIElements::BackgroundSize> b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize*>::get(), "ConvertUnits",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::BackgroundSize>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::BackgroundSize>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, owner, prop, a, b);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::UpdateComputedStyle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize*>::get(),
                                               "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::UpdateComputedStyle(int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize*>::get(), "UpdateComputedStyle",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
inline ::UnityEngine::UIElements::BackgroundSize UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::Lerp(::UnityEngine::UIElements::BackgroundSize a,
                                                                                                                                  ::UnityEngine::UIElements::BackgroundSize b, float_t t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize*>::get(), "Lerp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BackgroundSize>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BackgroundSize>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BackgroundSize, false>(nullptr, ___internal_method, a, b, t);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::UpdateValues() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize*>::get(),
                                               "UpdateValues", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::StylePropertyAnimationSystem_ValuesBackgroundSize() {}
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x4a94628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.StartTransition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, float_t, float_t, int32_t, int32_t, ::System::Func_2<float_t, float_t>*)>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x4a94724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(), "StartTransition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<float_t, float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.StartTransition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, int32_t, int32_t, int32_t, int32_t, ::System::Func_2<float_t, float_t>*)>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x4a947ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(), "StartTransition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<float_t, float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.StartTransition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::Length, ::UnityEngine::UIElements::Length, int32_t, int32_t,
    ::System::Func_2<float_t, float_t>*)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x4a948c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(), "StartTransition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Length>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Length>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<float_t, float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.StartTransition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::Color, ::UnityEngine::Color, int32_t, int32_t,
    ::System::Func_2<float_t, float_t>*)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x4a9499c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(), "StartTransition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<float_t, float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.StartTransition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::Background, ::UnityEngine::UIElements::Background, int32_t, int32_t,
    ::System::Func_2<float_t, float_t>*)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x4a94aac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(), "StartTransition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Background>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Background>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<float_t, float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.StartTransition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::FontDefinition, ::UnityEngine::UIElements::FontDefinition, int32_t,
    int32_t, ::System::Func_2<float_t, float_t>*)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x4a94ba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(), "StartTransition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FontDefinition>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FontDefinition>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<float_t, float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.StartTransition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::Font*, ::UnityEngine::Font*, int32_t, int32_t,
    ::System::Func_2<float_t, float_t>*)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x4a94c94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(), "StartTransition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<float_t, float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.StartTransition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::TextShadow, ::UnityEngine::UIElements::TextShadow, int32_t, int32_t,
    ::System::Func_2<float_t, float_t>*)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x4a94d6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(), "StartTransition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextShadow>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextShadow>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<float_t, float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.StartTransition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::Scale, ::UnityEngine::UIElements::Scale, int32_t, int32_t,
    ::System::Func_2<float_t, float_t>*)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x4a94e84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(), "StartTransition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Scale>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Scale>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<float_t, float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.StartTransition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::Rotate, ::UnityEngine::UIElements::Rotate, int32_t, int32_t,
    ::System::Func_2<float_t, float_t>*)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x4a94f74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(), "StartTransition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Rotate>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Rotate>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<float_t, float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.StartTransition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::Translate, ::UnityEngine::UIElements::Translate, int32_t, int32_t,
    ::System::Func_2<float_t, float_t>*)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x4a9508c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(), "StartTransition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Translate>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Translate>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<float_t, float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.StartTransition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::TransformOrigin, ::UnityEngine::UIElements::TransformOrigin, int32_t,
    int32_t, ::System::Func_2<float_t, float_t>*)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x4a951a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(), "StartTransition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TransformOrigin>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TransformOrigin>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<float_t, float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.StartTransition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::BackgroundPosition, ::UnityEngine::UIElements::BackgroundPosition,
    int32_t, int32_t, ::System::Func_2<float_t, float_t>*)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x4a952bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(), "StartTransition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BackgroundPosition>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BackgroundPosition>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<float_t, float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.StartTransition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::BackgroundRepeat, ::UnityEngine::UIElements::BackgroundRepeat,
    int32_t, int32_t, ::System::Func_2<float_t, float_t>*)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x4a953ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(), "StartTransition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BackgroundRepeat>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BackgroundRepeat>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<float_t, float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.StartTransition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::BackgroundSize, ::UnityEngine::UIElements::BackgroundSize, int32_t,
    int32_t, ::System::Func_2<float_t, float_t>*)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x4a95484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(), "StartTransition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BackgroundSize>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BackgroundSize>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<float_t, float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.CancelAllAnimations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem::CancelAllAnimations)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x4a9559c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(),
                                                                               "CancelAllAnimations", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.CancelAllAnimations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem::CancelAllAnimations)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x4a956ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(), "CancelAllAnimations", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.CancelAnimation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem::CancelAnimation)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x4a959a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(), "CancelAnimation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.UpdateAnimation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem::UpdateAnimation)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x4a95a30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(), "UpdateAnimation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.GetAllAnimations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)(
    ::UnityEngine::UIElements::VisualElement*, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*)>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem::GetAllAnimations)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x4a95ac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(), "GetAllAnimations", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.CurrentTimeMs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem::CurrentTimeMs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a95c18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(),
                                                                               "CurrentTimeMs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem::Update)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x4a95c20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(),
                                                                               "Update", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int64_t& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_CurrentTimeMs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentTimeMs;
}
constexpr int64_t const& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_CurrentTimeMs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentTimeMs;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_CurrentTimeMs(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentTimeMs = value;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat*& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Floats() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Floats;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat* const& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Floats() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Floats;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_Floats(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Floats)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt*& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Ints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ints;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt* const& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Ints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ints;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_Ints(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Ints)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength*& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Lengths() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Lengths;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength* const& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Lengths() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Lengths;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_Lengths(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Lengths)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor*& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Colors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Colors;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor* const& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Colors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Colors;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_Colors(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Colors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground*& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Backgrounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Backgrounds;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground* const& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Backgrounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Backgrounds;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_Backgrounds(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Backgrounds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition*& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_FontDefinitions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontDefinitions;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition* const& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_FontDefinitions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontDefinitions;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_FontDefinitions(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FontDefinitions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont*& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Fonts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Fonts;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont* const& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Fonts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Fonts;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_Fonts(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Fonts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow*& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_TextShadows() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextShadows;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow* const& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_TextShadows() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextShadows;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_TextShadows(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TextShadows)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale*& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Scale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Scale;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale* const& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Scale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Scale;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_Scale(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Scale)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate*& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Rotate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Rotate;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate* const& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Rotate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Rotate;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_Rotate(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Rotate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate*& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Translate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Translate;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate* const& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Translate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Translate;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_Translate(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Translate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin*& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_TransformOrigin() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransformOrigin;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin* const& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_TransformOrigin() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransformOrigin;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_TransformOrigin(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TransformOrigin)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition*& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_BackgroundPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BackgroundPosition;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition* const&
UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_BackgroundPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BackgroundPosition;
}
constexpr void
UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_BackgroundPosition(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_BackgroundPosition)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat*& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_BackgroundRepeat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BackgroundRepeat;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat* const&
UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_BackgroundRepeat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BackgroundRepeat;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_BackgroundRepeat(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_BackgroundRepeat)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize*& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_BackgroundSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BackgroundSize;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize* const& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_BackgroundSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BackgroundSize;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_BackgroundSize(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_BackgroundSize)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>*&
UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_AllValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllValues;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>* const&
UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_AllValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllValues;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_AllValues(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AllValues)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>*&
UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_PropertyToValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PropertyToValues;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>* const&
UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_PropertyToValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PropertyToValues;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_PropertyToValues(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PropertyToValues)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::UIElements::StylePropertyAnimationSystem::GetOrCreate(::ByRef<T> values) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(), "GetOrCreate",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, values);
}
template <typename T>
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop,
                                                                                   T startValue, T endValue, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve,
                                                                                   ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>* values) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(), "StartTransition",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<float_t, float_t>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, owner, prop, startValue, endValue, durationMs, delayMs, easingCurve, values);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop,
                                                                                   float_t startValue, float_t endValue, int32_t durationMs, int32_t delayMs,
                                                                                   ::System::Func_2<float_t, float_t>* easingCurve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(), "StartTransition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<float_t, float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, owner, prop, startValue, endValue, durationMs, delayMs, easingCurve);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop,
                                                                                   int32_t startValue, int32_t endValue, int32_t durationMs, int32_t delayMs,
                                                                                   ::System::Func_2<float_t, float_t>* easingCurve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(), "StartTransition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<float_t, float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, owner, prop, startValue, endValue, durationMs, delayMs, easingCurve);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop,
                                                                                   ::UnityEngine::UIElements::Length startValue, ::UnityEngine::UIElements::Length endValue, int32_t durationMs,
                                                                                   int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(), "StartTransition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Length>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Length>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<float_t, float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, owner, prop, startValue, endValue, durationMs, delayMs, easingCurve);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop,
                                                                                   ::UnityEngine::Color startValue, ::UnityEngine::Color endValue, int32_t durationMs, int32_t delayMs,
                                                                                   ::System::Func_2<float_t, float_t>* easingCurve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(), "StartTransition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<float_t, float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, owner, prop, startValue, endValue, durationMs, delayMs, easingCurve);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop,
                                                                                   ::UnityEngine::UIElements::Background startValue, ::UnityEngine::UIElements::Background endValue, int32_t durationMs,
                                                                                   int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(), "StartTransition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Background>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Background>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<float_t, float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, owner, prop, startValue, endValue, durationMs, delayMs, easingCurve);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop,
                                                                                   ::UnityEngine::UIElements::FontDefinition startValue, ::UnityEngine::UIElements::FontDefinition endValue,
                                                                                   int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(), "StartTransition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FontDefinition>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FontDefinition>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<float_t, float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, owner, prop, startValue, endValue, durationMs, delayMs, easingCurve);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop,
                                                                                   ::UnityEngine::Font* startValue, ::UnityEngine::Font* endValue, int32_t durationMs, int32_t delayMs,
                                                                                   ::System::Func_2<float_t, float_t>* easingCurve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(), "StartTransition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<float_t, float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, owner, prop, startValue, endValue, durationMs, delayMs, easingCurve);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop,
                                                                                   ::UnityEngine::UIElements::TextShadow startValue, ::UnityEngine::UIElements::TextShadow endValue, int32_t durationMs,
                                                                                   int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(), "StartTransition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextShadow>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextShadow>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<float_t, float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, owner, prop, startValue, endValue, durationMs, delayMs, easingCurve);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop,
                                                                                   ::UnityEngine::UIElements::Scale startValue, ::UnityEngine::UIElements::Scale endValue, int32_t durationMs,
                                                                                   int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(), "StartTransition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Scale>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Scale>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<float_t, float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, owner, prop, startValue, endValue, durationMs, delayMs, easingCurve);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop,
                                                                                   ::UnityEngine::UIElements::Rotate startValue, ::UnityEngine::UIElements::Rotate endValue, int32_t durationMs,
                                                                                   int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(), "StartTransition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Rotate>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Rotate>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<float_t, float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, owner, prop, startValue, endValue, durationMs, delayMs, easingCurve);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop,
                                                                                   ::UnityEngine::UIElements::Translate startValue, ::UnityEngine::UIElements::Translate endValue, int32_t durationMs,
                                                                                   int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(), "StartTransition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Translate>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Translate>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<float_t, float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, owner, prop, startValue, endValue, durationMs, delayMs, easingCurve);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop,
                                                                                   ::UnityEngine::UIElements::TransformOrigin startValue, ::UnityEngine::UIElements::TransformOrigin endValue,
                                                                                   int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(), "StartTransition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TransformOrigin>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TransformOrigin>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<float_t, float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, owner, prop, startValue, endValue, durationMs, delayMs, easingCurve);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop,
                                                                                   ::UnityEngine::UIElements::BackgroundPosition startValue, ::UnityEngine::UIElements::BackgroundPosition endValue,
                                                                                   int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(), "StartTransition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BackgroundPosition>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BackgroundPosition>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<float_t, float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, owner, prop, startValue, endValue, durationMs, delayMs, easingCurve);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop,
                                                                                   ::UnityEngine::UIElements::BackgroundRepeat startValue, ::UnityEngine::UIElements::BackgroundRepeat endValue,
                                                                                   int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(), "StartTransition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BackgroundRepeat>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BackgroundRepeat>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<float_t, float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, owner, prop, startValue, endValue, durationMs, delayMs, easingCurve);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop,
                                                                                   ::UnityEngine::UIElements::BackgroundSize startValue, ::UnityEngine::UIElements::BackgroundSize endValue,
                                                                                   int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(), "StartTransition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BackgroundSize>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BackgroundSize>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<float_t, float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, owner, prop, startValue, endValue, durationMs, delayMs, easingCurve);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem::CancelAllAnimations() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(),
                                                                             "CancelAllAnimations", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem::CancelAllAnimations(::UnityEngine::UIElements::VisualElement* owner) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(), "CancelAllAnimations", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, owner);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem::CancelAnimation(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(), "CancelAnimation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, owner, id);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem::UpdateAnimation(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(), "UpdateAnimation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, owner, id);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem::GetAllAnimations(::UnityEngine::UIElements::VisualElement* owner,
                                                                                    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>* propertyIds) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(), "GetAllAnimations", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, owner, propertyIds);
}
template <typename T> inline void UnityEngine::UIElements::StylePropertyAnimationSystem::UpdateTracking(::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>* values) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(), "UpdateTracking",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, values);
}
inline int64_t UnityEngine::UIElements::StylePropertyAnimationSystem::CurrentTimeMs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(),
                                                                             "CurrentTimeMs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(),
                                                                             "Update", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StylePropertyAnimationSystem* UnityEngine::UIElements::StylePropertyAnimationSystem::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::StylePropertyAnimationSystem*>());
}
/// @brief Convert operator to "::UnityEngine::UIElements::IStylePropertyAnimationSystem"
constexpr UnityEngine::UIElements::StylePropertyAnimationSystem::operator ::UnityEngine::UIElements::IStylePropertyAnimationSystem*() noexcept {
  return static_cast<::UnityEngine::UIElements::IStylePropertyAnimationSystem*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IStylePropertyAnimationSystem"
constexpr ::UnityEngine::UIElements::IStylePropertyAnimationSystem* UnityEngine::UIElements::StylePropertyAnimationSystem::i___UnityEngine__UIElements__IStylePropertyAnimationSystem() noexcept {
  return static_cast<::UnityEngine::UIElements::IStylePropertyAnimationSystem*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem::StylePropertyAnimationSystem() {}
