#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StylePropertyAnimationSystem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Background_impl.hpp"
#include "UnityEngine/UIElements/zzzz__FontDefinition_impl.hpp"
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
#include "UnityEngine/UIElements/zzzz__Background_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__FontDefinition_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__IStylePropertyAnimationSystem_def.hpp"
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
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState::__StylePropertyAnimationSystem__TransitionState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState::__StylePropertyAnimationSystem__TransitionState() {}
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState::Running{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState::Started{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState::Ended{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState::Canceled{ static_cast<int32_t>(0x8) };
template <typename TTimingData, typename TStyleData> inline int32_t UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<TTimingData, TStyleData>::get_capacity() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<TTimingData, TStyleData>>::get(),
                                  "get_capacity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TTimingData, typename TStyleData> inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<TTimingData, TStyleData>::set_capacity(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<TTimingData, TStyleData>>::get(), "set_capacity",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TTimingData, typename TStyleData> inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<TTimingData, TStyleData>::LocalInit() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<TTimingData, TStyleData>>::get(),
                                  "LocalInit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TTimingData, typename TStyleData>
inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<TTimingData, TStyleData>
UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<TTimingData, TStyleData>::Create() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<TTimingData, TStyleData>>::get(),
                                  "Create", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<TTimingData, TStyleData>, false>(nullptr, ___internal_method);
}
template <typename TTimingData, typename TStyleData>
inline bool UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<TTimingData, TStyleData>::IndexOf(::UnityEngine::UIElements::VisualElement* ve,
                                                                                                                          ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop,
                                                                                                                          ByRef<int32_t> index) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<TTimingData, TStyleData>>::get(),
                                  "IndexOf", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ve, prop, index);
}
template <typename TTimingData, typename TStyleData>
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<TTimingData, TStyleData>::Add(::UnityEngine::UIElements::VisualElement* owner,
                                                                                                                      ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop,
                                                                                                                      TTimingData timingData, TStyleData styleData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<TTimingData, TStyleData>>::get(), "Add",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TTimingData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TStyleData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, owner, prop, timingData, styleData);
}
template <typename TTimingData, typename TStyleData> inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<TTimingData, TStyleData>::Remove(int32_t cancelledIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<TTimingData, TStyleData>>::get(),
                                  "Remove", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cancelledIndex);
}
template <typename TTimingData, typename TStyleData>
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<TTimingData, TStyleData>::Replace(int32_t index, TTimingData timingData, TStyleData styleData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<TTimingData, TStyleData>>::get(), "Replace",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TTimingData>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TStyleData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, timingData, styleData);
}
template <typename TTimingData, typename TStyleData>
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<TTimingData, TStyleData>::RemoveAll(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<TTimingData, TStyleData>>::get(), "RemoveAll",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve);
}
template <typename TTimingData, typename TStyleData> inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<TTimingData, TStyleData>::RemoveAll() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<TTimingData, TStyleData>>::get(),
                                  "RemoveAll", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TTimingData, typename TStyleData>
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<TTimingData, TStyleData>::GetActivePropertiesForElement(
    ::UnityEngine::UIElements::VisualElement* ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>* outProperties) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<TTimingData, TStyleData>>::get(),
      "GetActivePropertiesForElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, outProperties);
}
// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<::UnityEngine::UIElements::VisualElement*,::Array<::UnityEngine::UIElements::VisualElement*>*>", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "properties", ty: "::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "timing", ty: "::ArrayW<TTimingData,::Array<TTimingData>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "style", ty:
// "::ArrayW<TStyleData,::Array<TStyleData>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "indices", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>*", modifiers: "", def_value: Some("nullptr") }]
template <typename TTimingData, typename TStyleData>
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<TTimingData, TStyleData>::__StylePropertyAnimationSystem__AnimationDataSet_2(
    ::ArrayW<::UnityEngine::UIElements::VisualElement*, ::Array<::UnityEngine::UIElements::VisualElement*>*> elements,
    ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> properties,
    ::ArrayW<TTimingData, ::Array<TTimingData>*> timing, ::ArrayW<TStyleData, ::Array<TStyleData>*> style, int32_t count,
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair, int32_t>* indices) noexcept {
  this->elements = elements;
  this->properties = properties;
  this->timing = timing;
  this->style = style;
  this->count = count;
  this->indices = indices;
}
// Ctor Parameters []
template <typename TTimingData, typename TStyleData>
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<TTimingData, TStyleData>::__StylePropertyAnimationSystem__AnimationDataSet_2() {}
//  Writing Method size for method: ::GlobalNamespace::__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer::*)(
    ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair, ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair)>(
    &::GlobalNamespace::__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer::Equals)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3543b4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer*>::get(), "Equals",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer::*)(
    ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair)>(&::GlobalNamespace::__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3543b64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer*>::get(), "GetHashCode",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer::*)()>(
    &::GlobalNamespace::__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3543b44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>"
constexpr GlobalNamespace::__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer::operator ::System::Collections::Generic::IEqualityComparer_1<
    ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>*() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>*
GlobalNamespace::__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer::
    i___System__Collections__Generic__IEqualityComparer_1___UnityEngine__UIElements____StylePropertyAnimationSystem__ElementPropertyPair_() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>*>(static_cast<void*>(this));
}
inline bool GlobalNamespace::__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer::Equals(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair x,
                                                                                                           ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer*>::get(), "Equals",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x, y);
}
inline int32_t GlobalNamespace::__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer::GetHashCode(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair obj) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer*>::get(), "GetHashCode",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, obj);
}
inline ::GlobalNamespace::__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer* GlobalNamespace::__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer*>());
}
inline void GlobalNamespace::__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer::__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer() {}
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId)>(&::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3543ac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair::setStaticF_Comparer(
    ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>*, "Comparer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>::get>(
      std::forward<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>*>(value));
}
inline ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>*
UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair::getStaticF_Comparer() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>*, "Comparer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>::get>();
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair::_ctor(::UnityEngine::UIElements::VisualElement* element,
                                                                                                ::UnityEngine::UIElements::StyleSheets::StylePropertyId property) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, element, property);
}
// Ctor Parameters [CppParam { name: "element", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "property", ty:
// "::UnityEngine::UIElements::StyleSheets::StylePropertyId", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair::__StylePropertyAnimationSystem__ElementPropertyPair(
    ::UnityEngine::UIElements::VisualElement* element, ::UnityEngine::UIElements::StyleSheets::StylePropertyId property) noexcept {
  this->element = element;
  this->property = property;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair::__StylePropertyAnimationSystem__ElementPropertyPair() {}
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values.CancelAllAnimations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values::*)()>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values::CancelAllAnimations)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values.CancelAllAnimations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values::*)(
    ::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values::CancelAllAnimations)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values.CancelAnimation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId)>(&::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values::CancelAnimation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values.UpdateAnimation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId)>(&::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values::UpdateAnimation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values.GetAllAnimations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values::*)(
    ::UnityEngine::UIElements::VisualElement*, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*)>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values::GetAllAnimations)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values::*)(int64_t)>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values::Update)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values.UpdateValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values::*)()>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values::UpdateValues)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values::*)()>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values::*)(int32_t)>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values::*)()>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3543b98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__Values::CancelAllAnimations() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__Values::CancelAllAnimations(::UnityEngine::UIElements::VisualElement* ve) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__Values::CancelAnimation(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, id);
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__Values::UpdateAnimation(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, id);
}
inline void
UnityEngine::UIElements::__StylePropertyAnimationSystem__Values::GetAllAnimations(::UnityEngine::UIElements::VisualElement* ve,
                                                                                  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>* outPropertyIds) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, outPropertyIds);
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__Values::Update(int64_t currentTimeMs) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentTimeMs);
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__Values::UpdateValues() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__Values::UpdateComputedStyle() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__Values::UpdateComputedStyle(int32_t i) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values* UnityEngine::UIElements::__StylePropertyAnimationSystem__Values::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>());
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__Values::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values::__StylePropertyAnimationSystem__Values() {}
template <typename T>
inline void GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<T>::setStaticF___9(
    ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<T>* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<T>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<T>*>::get>(
      std::forward<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<T>*>(value));
}
template <typename T>
inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<T>*
GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<
      ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<T>*, "<>9",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<T>*>::get>();
}
template <typename T>
inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<T>*
GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<T>*>());
}
template <typename T> inline void GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<T>*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*
GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<T>::__cctor_b__11_0() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<T>*>::get(),
                                  "<.cctor>b__11_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T>
constexpr ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<T>::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c() {}
template <typename T>
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,
                                                       ::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>*&
GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>::__cordl_internal_get_elementPropertyStateDelta() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementPropertyStateDelta;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,
                                                                                           ::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>*> const&
GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>::__cordl_internal_get_elementPropertyStateDelta() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementPropertyStateDelta;
}
template <typename T>
constexpr void GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>::__cordl_internal_set_elementPropertyStateDelta(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,
                                                 ::UnityEngine::UIElements::__StylePropertyAnimationSystem__TransitionState>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___elementPropertyStateDelta)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,
                                                       ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*&
GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>::__cordl_internal_get_elementPropertyQueuedEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementPropertyQueuedEvents;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,
                                                                                           ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*> const&
GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>::__cordl_internal_get_elementPropertyQueuedEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementPropertyQueuedEvents;
}
template <typename T>
constexpr void GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>::__cordl_internal_set_elementPropertyQueuedEvents(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair,
                                                 ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___elementPropertyQueuedEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::UnityEngine::UIElements::IPanel*& GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>::__cordl_internal_get_panel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IPanel*> const&
GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>::__cordl_internal_get_panel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
template <typename T> constexpr void GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>::__cordl_internal_set_panel(::UnityEngine::UIElements::IPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___panel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>::__cordl_internal_get_m_ChangesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChangesCount;
}
template <typename T> constexpr int32_t const& GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>::__cordl_internal_get_m_ChangesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChangesCount;
}
template <typename T> constexpr void GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>::__cordl_internal_set_m_ChangesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ChangesCount = value;
}
template <typename T>
inline void GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>::setStaticF_k_EventQueuePool(
    ::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*, "k_EventQueuePool",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>*>::get>(
      std::forward<::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*>(value));
}
template <typename T>
inline ::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*
GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>::getStaticF_k_EventQueuePool() {
  return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*, "k_EventQueuePool",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>*>::get>();
}
template <typename T>
inline ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>* GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>::GetPooledQueue() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>*>::get(),
                                  "GetPooledQueue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*, false>(nullptr, ___internal_method);
}
template <typename T> inline void GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>::RegisterChange() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>*>::get(),
                                  "RegisterChange", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>::UnregisterChange() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>*>::get(),
                                  "UnregisterChange", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>::StateChanged() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>*>::get(),
                                  "StateChanged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>*>::get(), "Clear",
                                  std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>*
GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>*>());
}
template <typename T> inline void GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState() {}
// Ctor Parameters [CppParam { name: "startTimeMs", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "durationMs", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "easingCurve", ty: "::System::Func_2<float_t,float_t>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "easedProgress", ty: "float_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "reversingShorteningFactor", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "isStarted", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "delayMs", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<T>::__StylePropertyAnimationSystem__Values_1__TimingData(int64_t startTimeMs, int32_t durationMs,
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
template <typename T> constexpr ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<T>::__StylePropertyAnimationSystem__Values_1__TimingData() {}
// Ctor Parameters [CppParam { name: "startValue", ty: "T", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "endValue", ty: "T", modifiers: "", def_value: Some("nullptr") }, CppParam {
// name: "reversingAdjustedStartValue", ty: "T", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "currentValue", ty: "T", modifiers: "", def_value: Some("nullptr") }]
template <typename T>
constexpr ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<T>::__StylePropertyAnimationSystem__Values_1__StyleData(T startValue, T endValue, T reversingAdjustedStartValue,
                                                                                                                                         T currentValue) noexcept {
  this->startValue = startValue;
  this->endValue = endValue;
  this->reversingAdjustedStartValue = reversingAdjustedStartValue;
  this->currentValue = currentValue;
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<T>::__StylePropertyAnimationSystem__Values_1__StyleData() {}
template <typename T>
inline void GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T>::setStaticF_Default(::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T> value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T>, "Default",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T>>::get>(
      std::forward<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T>>(value));
}
template <typename T> inline ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T> GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T>::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T>, "Default",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T>>::get>();
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T>::__StylePropertyAnimationSystem__Values_1__EmptyData() {}
template <typename T> constexpr int64_t& UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>::__cordl_internal_get_m_CurrentTimeMs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentTimeMs;
}
template <typename T> constexpr int64_t const& UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>::__cordl_internal_get_m_CurrentTimeMs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentTimeMs;
}
template <typename T> constexpr void UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>::__cordl_internal_set_m_CurrentTimeMs(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentTimeMs = value;
}
template <typename T>
constexpr ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>*&
UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>::__cordl_internal_get_m_CurrentFrameEventsState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentFrameEventsState;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>*> const&
UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>::__cordl_internal_get_m_CurrentFrameEventsState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentFrameEventsState;
}
template <typename T>
constexpr void UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>::__cordl_internal_set_m_CurrentFrameEventsState(
    ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CurrentFrameEventsState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>*&
UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>::__cordl_internal_get_m_NextFrameEventsState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NextFrameEventsState;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>*> const&
UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>::__cordl_internal_get_m_NextFrameEventsState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NextFrameEventsState;
}
template <typename T>
constexpr void UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>::__cordl_internal_set_m_NextFrameEventsState(
    ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_NextFrameEventsState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<T>,
                                                                                        ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<T>>&
UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>::__cordl_internal_get_running() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___running;
}
template <typename T>
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<T>,
                                                                                        ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<T>> const&
UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>::__cordl_internal_get_running() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___running;
}
template <typename T>
constexpr void UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>::__cordl_internal_set_running(
    ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__TimingData<T>,
                                                                                  ::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__StyleData<T>>
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___running = value;
}
template <typename T>
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T>, T>&
UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>::__cordl_internal_get_completed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completed;
}
template <typename T>
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T>, T> const&
UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>::__cordl_internal_get_completed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completed;
}
template <typename T>
constexpr void UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>::__cordl_internal_set_completed(
    ::UnityEngine::UIElements::__StylePropertyAnimationSystem__AnimationDataSet_2<::GlobalNamespace::__StylePropertyAnimationSystem__Values_1__EmptyData<T>, T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___completed = value;
}
template <typename T> inline bool UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>::get_isEmpty() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>*>::get(), "get_isEmpty",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline ::System::Func_3<T, T, bool>* UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>::get_SameFunc() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Func_3<T, T, bool>*, false>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>* UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>*>());
}
template <typename T> inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>::SwapFrameStates() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>*>::get(),
                                               "SwapFrameStates", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>::QueueEvent(::UnityEngine::UIElements::EventBase* evt,
                                                                                             ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair epp) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>*>::get(), "QueueEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt, epp);
}
template <typename T>
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>::ClearEventQueue(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair epp) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>*>::get(), "ClearEventQueue",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ElementPropertyPair>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, epp);
}
template <typename T> inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>::QueueTransitionRunEvent(::UnityEngine::UIElements::VisualElement* ve, int32_t runningIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>*>::get(),
                                               "QueueTransitionRunEvent", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, runningIndex);
}
template <typename T> inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>::QueueTransitionStartEvent(::UnityEngine::UIElements::VisualElement* ve, int32_t runningIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>*>::get(),
                                               "QueueTransitionStartEvent", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, runningIndex);
}
template <typename T> inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>::QueueTransitionEndEvent(::UnityEngine::UIElements::VisualElement* ve, int32_t runningIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>*>::get(),
                                               "QueueTransitionEndEvent", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, runningIndex);
}
template <typename T>
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>::QueueTransitionCancelEvent(::UnityEngine::UIElements::VisualElement* ve, int32_t runningIndex,
                                                                                                             int64_t panelElapsedMs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>*>::get(), "QueueTransitionCancelEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, runningIndex, panelElapsedMs);
}
template <typename T>
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>::SendTransitionCancelEvent(::UnityEngine::UIElements::VisualElement* ve, int32_t runningIndex,
                                                                                                            int64_t panelElapsedMs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>*>::get(), "SendTransitionCancelEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, runningIndex, panelElapsedMs);
}
template <typename T> inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>::CancelAllAnimations() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>*>::get(),
                                               "CancelAllAnimations", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>::CancelAllAnimations(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>*>::get(), "CancelAllAnimations",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve);
}
template <typename T>
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>::CancelAnimation(::UnityEngine::UIElements::VisualElement* ve,
                                                                                                  ::UnityEngine::UIElements::StyleSheets::StylePropertyId id) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>*>::get(), "CancelAnimation",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, id);
}
template <typename T>
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>::UpdateAnimation(::UnityEngine::UIElements::VisualElement* ve,
                                                                                                  ::UnityEngine::UIElements::StyleSheets::StylePropertyId id) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>*>::get(), "UpdateAnimation",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, id);
}
template <typename T>
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>::GetAllAnimations(
    ::UnityEngine::UIElements::VisualElement* ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>* outPropertyIds) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>*>::get(), "GetAllAnimations",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, outPropertyIds);
}
template <typename T> inline float_t UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>::ComputeReversingShorteningFactor(int32_t oldIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>*>::get(), "ComputeReversingShorteningFactor",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, oldIndex);
}
template <typename T>
inline int32_t UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>::ComputeReversingDuration(int32_t newTransitionDurationMs, float_t newReversingShorteningFactor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>*>::get(), "ComputeReversingDuration",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, newTransitionDurationMs, newReversingShorteningFactor);
}
template <typename T> inline int32_t UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>::ComputeReversingDelay(int32_t delayMs, float_t newReversingShorteningFactor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>*>::get(), "ComputeReversingDelay",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, delayMs, newReversingShorteningFactor);
}
template <typename T>
inline bool UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>::StartTransition(::UnityEngine::UIElements::VisualElement* owner,
                                                                                                  ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, T startValue, T endValue,
                                                                                                  int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve,
                                                                                                  int64_t currentTimeMs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>*>::get(), "StartTransition",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<float_t, float_t>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, owner, prop, startValue, endValue, durationMs, delayMs, easingCurve, currentTimeMs);
}
template <typename T> inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>::ForceComputedStyleEndValue(int32_t runningIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>*>::get(), "ForceComputedStyleEndValue",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, runningIndex);
}
template <typename T> inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>::Update(int64_t currentTimeMs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>*>::get(), "Update",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentTimeMs);
}
template <typename T> inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>::ProcessEventQueue() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>*>::get(),
                                               "ProcessEventQueue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>::UpdateProgress(int64_t currentTimeMs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>*>::get(), "UpdateProgress",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentTimeMs);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>::__StylePropertyAnimationSystem__Values_1() {}
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat.get_SameFunc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_3<float_t, float_t, bool>* (
    ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat::*)()>(&::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat::get_SameFunc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3543ba0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat.IsSame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(float_t, float_t)>(&::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat::IsSame)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3543ba8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat*>::get(), "IsSame", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat.Lerp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t, float_t, float_t)>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat::Lerp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3543c30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat*>::get(), "Lerp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat.UpdateValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat::*)()>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat::UpdateValues)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3543c40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat*>::get(), "UpdateValues",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat::*)()>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3543cc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat*>::get(),
                                                 "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat::*)(int32_t)>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3543d8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat*>::get(), "UpdateComputedStyle",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat::*)()>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3543e34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Func_3<float_t, float_t, bool>*& UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat::__cordl_internal_get__SameFunc_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SameFunc_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_3<float_t, float_t, bool>*> const&
UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat::__cordl_internal_get__SameFunc_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SameFunc_k__BackingField;
}
constexpr void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat::__cordl_internal_set__SameFunc_k__BackingField(::System::Func_3<float_t, float_t, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____SameFunc_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Func_3<float_t, float_t, bool>* UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat::get_SameFunc() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Func_3<float_t, float_t, bool>*, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat::IsSame(float_t a, float_t b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat*>::get(), "IsSame", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline float_t UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat::Lerp(float_t a, float_t b, float_t t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat*>::get(), "Lerp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, a, b, t);
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat::UpdateValues() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat*>::get(), "UpdateValues",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat::UpdateComputedStyle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat*>::get(),
                                               "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat::UpdateComputedStyle(int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat*>::get(), "UpdateComputedStyle",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat* UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat*>());
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat::__StylePropertyAnimationSystem__ValuesFloat() {}
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt.get_SameFunc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_3<int32_t, int32_t, bool>* (
    ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt::*)()>(&::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt::get_SameFunc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3543ecc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt.IsSame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t, int32_t)>(&::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt::IsSame)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3543ed4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt*>::get(), "IsSame", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt.Lerp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, int32_t, float_t)>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt::Lerp)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x3543ee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt*>::get(), "Lerp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt.UpdateValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt::*)()>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt::UpdateValues)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3543fcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt*>::get(), "UpdateValues",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt::*)()>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3544064;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt*>::get(),
                                                 "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt::*)(int32_t)>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3544130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt*>::get(), "UpdateComputedStyle",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt::*)()>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x35441d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Func_3<int32_t, int32_t, bool>*& UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt::__cordl_internal_get__SameFunc_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SameFunc_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_3<int32_t, int32_t, bool>*> const&
UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt::__cordl_internal_get__SameFunc_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SameFunc_k__BackingField;
}
constexpr void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt::__cordl_internal_set__SameFunc_k__BackingField(::System::Func_3<int32_t, int32_t, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____SameFunc_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Func_3<int32_t, int32_t, bool>* UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt::get_SameFunc() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Func_3<int32_t, int32_t, bool>*, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt::IsSame(int32_t a, int32_t b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt*>::get(), "IsSame", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline int32_t UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt::Lerp(int32_t a, int32_t b, float_t t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt*>::get(), "Lerp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, a, b, t);
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt::UpdateValues() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt*>::get(), "UpdateValues",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt::UpdateComputedStyle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt*>::get(),
                                               "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt::UpdateComputedStyle(int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt*>::get(), "UpdateComputedStyle",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt* UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt*>());
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt::__StylePropertyAnimationSystem__ValuesInt() {}
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength.get_SameFunc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_3<::UnityEngine::UIElements::Length, ::UnityEngine::UIElements::Length, bool>* (
    ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength::*)()>(&::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength::get_SameFunc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3544270;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength.IsSame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::UIElements::Length, ::UnityEngine::UIElements::Length)>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength::IsSame)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3544278;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength*>::get(), "IsSame", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Length>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Length>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength.Lerp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Length (*)(::UnityEngine::UIElements::Length, ::UnityEngine::UIElements::Length, float_t)>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength::Lerp)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3544318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength*>::get(), "Lerp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Length>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Length>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength.UpdateValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength::*)()>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength::UpdateValues)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3544354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength*>::get(),
                                                 "UpdateValues", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength::*)()>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3544410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength*>::get(),
                                                 "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength::*)(int32_t)>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x35444dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength*>::get(), "UpdateComputedStyle",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength::*)()>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3544584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Func_3<::UnityEngine::UIElements::Length, ::UnityEngine::UIElements::Length, bool>*&
UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength::__cordl_internal_get__SameFunc_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SameFunc_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::UnityEngine::UIElements::Length, ::UnityEngine::UIElements::Length, bool>*> const&
UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength::__cordl_internal_get__SameFunc_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SameFunc_k__BackingField;
}
constexpr void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength::__cordl_internal_set__SameFunc_k__BackingField(
    ::System::Func_3<::UnityEngine::UIElements::Length, ::UnityEngine::UIElements::Length, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____SameFunc_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Func_3<::UnityEngine::UIElements::Length, ::UnityEngine::UIElements::Length, bool>* UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength::get_SameFunc() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Func_3<::UnityEngine::UIElements::Length, ::UnityEngine::UIElements::Length, bool>*, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength::IsSame(::UnityEngine::UIElements::Length a, ::UnityEngine::UIElements::Length b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength*>::get(), "IsSame", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Length>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Length>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::UIElements::Length UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength::Lerp(::UnityEngine::UIElements::Length a, ::UnityEngine::UIElements::Length b,
                                                                                                                     float_t t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength*>::get(), "Lerp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Length>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Length>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Length, false>(nullptr, ___internal_method, a, b, t);
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength::UpdateValues() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength*>::get(), "UpdateValues",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength::UpdateComputedStyle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength*>::get(),
                                               "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength::UpdateComputedStyle(int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength*>::get(), "UpdateComputedStyle",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength* UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength*>());
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength::__StylePropertyAnimationSystem__ValuesLength() {}
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor.get_SameFunc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_3<::UnityEngine::Color, ::UnityEngine::Color, bool>* (
    ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor::*)()>(&::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor::get_SameFunc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x354461c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor.IsSame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Color, ::UnityEngine::Color)>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor::IsSame)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x3544624;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor*>::get(), "IsSame", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor.Lerp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (*)(::UnityEngine::Color, ::UnityEngine::Color, float_t)>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor::Lerp)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x354475c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor*>::get(), "Lerp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor.UpdateValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor::*)()>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor::UpdateValues)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3544794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor*>::get(), "UpdateValues",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor::*)()>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3544818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor*>::get(),
                                                 "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor::*)(int32_t)>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x35448e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor*>::get(), "UpdateComputedStyle",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor::*)()>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3544994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Func_3<::UnityEngine::Color, ::UnityEngine::Color, bool>*& UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor::__cordl_internal_get__SameFunc_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SameFunc_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::UnityEngine::Color, ::UnityEngine::Color, bool>*> const&
UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor::__cordl_internal_get__SameFunc_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SameFunc_k__BackingField;
}
constexpr void
UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor::__cordl_internal_set__SameFunc_k__BackingField(::System::Func_3<::UnityEngine::Color, ::UnityEngine::Color, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____SameFunc_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Func_3<::UnityEngine::Color, ::UnityEngine::Color, bool>* UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor::get_SameFunc() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Func_3<::UnityEngine::Color, ::UnityEngine::Color, bool>*, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor::IsSame(::UnityEngine::Color c, ::UnityEngine::Color d) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor*>::get(), "IsSame", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, c, d);
}
inline ::UnityEngine::Color UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor::Lerp(::UnityEngine::Color a, ::UnityEngine::Color b, float_t t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor*>::get(), "Lerp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(nullptr, ___internal_method, a, b, t);
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor::UpdateValues() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor*>::get(), "UpdateValues",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor::UpdateComputedStyle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor*>::get(),
                                               "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor::UpdateComputedStyle(int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor*>::get(), "UpdateComputedStyle",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor* UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor*>());
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor::__StylePropertyAnimationSystem__ValuesColor() {}
template <typename T> constexpr ::System::Func_3<T, T, bool>*& UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesDiscrete_1<T>::__cordl_internal_get__SameFunc_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SameFunc_k__BackingField;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Func_3<T, T, bool>*> const&
UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesDiscrete_1<T>::__cordl_internal_get__SameFunc_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SameFunc_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesDiscrete_1<T>::__cordl_internal_set__SameFunc_k__BackingField(::System::Func_3<T, T, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____SameFunc_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::System::Func_3<T, T, bool>* UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesDiscrete_1<T>::get_SameFunc() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesDiscrete_1<T>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Func_3<T, T, bool>*, false>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesDiscrete_1<T>::IsSame(T a, T b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesDiscrete_1<T>*>::get(), "IsSame",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
template <typename T> inline T UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesDiscrete_1<T>::Lerp(T a, T b, float_t t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesDiscrete_1<T>*>::get(), "Lerp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, a, b, t);
}
template <typename T> inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesDiscrete_1<T>::UpdateValues() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesDiscrete_1<T>*>::get(),
                                               "UpdateValues", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesDiscrete_1<T>* UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesDiscrete_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesDiscrete_1<T>*>());
}
template <typename T> inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesDiscrete_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesDiscrete_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesDiscrete_1<T>::__StylePropertyAnimationSystem__ValuesDiscrete_1() {}
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground::*)()>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3544a2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground*>::get(),
                                                 "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground::*)(int32_t)>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3544b08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground*>::get(), "UpdateComputedStyle",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground::*)()>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3544bc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground::UpdateComputedStyle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground*>::get(),
                                               "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground::UpdateComputedStyle(int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground*>::get(), "UpdateComputedStyle",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground* UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground*>());
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground::__StylePropertyAnimationSystem__ValuesBackground() {}
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition::*)()>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3544c0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition*>::get(),
                                                 "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition::*)(int32_t)>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3544cd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition*>::get(), "UpdateComputedStyle",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition::*)()>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3544d80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition::UpdateComputedStyle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition*>::get(),
                                               "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition::UpdateComputedStyle(int32_t i) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition*>::get(), "UpdateComputedStyle",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition* UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition*>());
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition::__StylePropertyAnimationSystem__ValuesFontDefinition() {}
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont::*)()>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3544dc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont*>::get(),
                                                 "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont::*)(int32_t)>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3544e94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont*>::get(), "UpdateComputedStyle",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont::*)()>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3544f3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont::UpdateComputedStyle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont*>::get(),
                                               "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont::UpdateComputedStyle(int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont*>::get(), "UpdateComputedStyle",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont* UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont*>());
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont::__StylePropertyAnimationSystem__ValuesFont() {}
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow.get_SameFunc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_3<::UnityEngine::UIElements::TextShadow, ::UnityEngine::UIElements::TextShadow, bool>* (
    ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow::*)()>(&::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow::get_SameFunc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3544f84;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow.IsSame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::UIElements::TextShadow, ::UnityEngine::UIElements::TextShadow)>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow::IsSame)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3544f8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow*>::get(), "IsSame", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextShadow>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextShadow>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow.Lerp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::TextShadow (*)(
    ::UnityEngine::UIElements::TextShadow, ::UnityEngine::UIElements::TextShadow, float_t)>(&::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow::Lerp)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3544fd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow*>::get(), "Lerp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextShadow>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextShadow>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow.UpdateValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow::*)()>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow::UpdateValues)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3545028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow*>::get(),
                                                 "UpdateValues", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow::*)()>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x35450f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow*>::get(),
                                                 "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow::*)(int32_t)>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x35451e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow*>::get(), "UpdateComputedStyle",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow::*)()>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x35452b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Func_3<::UnityEngine::UIElements::TextShadow, ::UnityEngine::UIElements::TextShadow, bool>*&
UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow::__cordl_internal_get__SameFunc_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SameFunc_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::UnityEngine::UIElements::TextShadow, ::UnityEngine::UIElements::TextShadow, bool>*> const&
UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow::__cordl_internal_get__SameFunc_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SameFunc_k__BackingField;
}
constexpr void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow::__cordl_internal_set__SameFunc_k__BackingField(
    ::System::Func_3<::UnityEngine::UIElements::TextShadow, ::UnityEngine::UIElements::TextShadow, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____SameFunc_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Func_3<::UnityEngine::UIElements::TextShadow, ::UnityEngine::UIElements::TextShadow, bool>* UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow::get_SameFunc() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Func_3<::UnityEngine::UIElements::TextShadow, ::UnityEngine::UIElements::TextShadow, bool>*, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow::IsSame(::UnityEngine::UIElements::TextShadow a, ::UnityEngine::UIElements::TextShadow b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow*>::get(), "IsSame", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextShadow>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextShadow>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::UIElements::TextShadow UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow::Lerp(::UnityEngine::UIElements::TextShadow a,
                                                                                                                             ::UnityEngine::UIElements::TextShadow b, float_t t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow*>::get(), "Lerp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextShadow>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextShadow>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextShadow, false>(nullptr, ___internal_method, a, b, t);
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow::UpdateValues() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow*>::get(),
                                               "UpdateValues", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow::UpdateComputedStyle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow*>::get(),
                                               "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow::UpdateComputedStyle(int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow*>::get(), "UpdateComputedStyle",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow* UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow*>());
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow::__StylePropertyAnimationSystem__ValuesTextShadow() {}
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale.get_SameFunc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_3<::UnityEngine::UIElements::Scale, ::UnityEngine::UIElements::Scale, bool>* (
    ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale::*)()>(&::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale::get_SameFunc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3545350;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale.IsSame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::UIElements::Scale, ::UnityEngine::UIElements::Scale)>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale::IsSame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3545358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale*>::get(), "IsSame", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Scale>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Scale>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale::*)()>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3545360;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale*>::get(),
                                                 "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale::*)(int32_t)>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x354542c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale*>::get(), "UpdateComputedStyle",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale.Lerp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Scale (*)(::UnityEngine::UIElements::Scale, ::UnityEngine::UIElements::Scale, float_t)>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale::Lerp)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x35454d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale*>::get(), "Lerp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Scale>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Scale>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale.UpdateValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale::*)()>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale::UpdateValues)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3545544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale*>::get(), "UpdateValues",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale::*)()>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x35455e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Func_3<::UnityEngine::UIElements::Scale, ::UnityEngine::UIElements::Scale, bool>*&
UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale::__cordl_internal_get__SameFunc_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SameFunc_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::UnityEngine::UIElements::Scale, ::UnityEngine::UIElements::Scale, bool>*> const&
UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale::__cordl_internal_get__SameFunc_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SameFunc_k__BackingField;
}
constexpr void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale::__cordl_internal_set__SameFunc_k__BackingField(
    ::System::Func_3<::UnityEngine::UIElements::Scale, ::UnityEngine::UIElements::Scale, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____SameFunc_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Func_3<::UnityEngine::UIElements::Scale, ::UnityEngine::UIElements::Scale, bool>* UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale::get_SameFunc() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Func_3<::UnityEngine::UIElements::Scale, ::UnityEngine::UIElements::Scale, bool>*, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale::IsSame(::UnityEngine::UIElements::Scale a, ::UnityEngine::UIElements::Scale b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale*>::get(), "IsSame", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Scale>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Scale>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale::UpdateComputedStyle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale*>::get(),
                                               "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale::UpdateComputedStyle(int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale*>::get(), "UpdateComputedStyle",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
inline ::UnityEngine::UIElements::Scale UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale::Lerp(::UnityEngine::UIElements::Scale a, ::UnityEngine::UIElements::Scale b, float_t t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale*>::get(), "Lerp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Scale>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Scale>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Scale, false>(nullptr, ___internal_method, a, b, t);
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale::UpdateValues() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale*>::get(), "UpdateValues",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale* UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale*>());
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale::__StylePropertyAnimationSystem__ValuesScale() {}
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate.get_SameFunc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_3<::UnityEngine::UIElements::Rotate, ::UnityEngine::UIElements::Rotate, bool>* (
    ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate::*)()>(&::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate::get_SameFunc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3545678;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate.IsSame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::UIElements::Rotate, ::UnityEngine::UIElements::Rotate)>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate::IsSame)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3545680;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate*>::get(), "IsSame", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Rotate>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Rotate>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate::*)()>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x35456c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate*>::get(),
                                                 "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate::*)(int32_t)>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x35457b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate*>::get(), "UpdateComputedStyle",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate.Lerp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Rotate (*)(::UnityEngine::UIElements::Rotate, ::UnityEngine::UIElements::Rotate, float_t)>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate::Lerp)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x354587c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate*>::get(), "Lerp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Rotate>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Rotate>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate.UpdateValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate::*)()>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate::UpdateValues)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x35458fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate*>::get(),
                                                 "UpdateValues", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate::*)()>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x35459d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Func_3<::UnityEngine::UIElements::Rotate, ::UnityEngine::UIElements::Rotate, bool>*&
UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate::__cordl_internal_get__SameFunc_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SameFunc_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::UnityEngine::UIElements::Rotate, ::UnityEngine::UIElements::Rotate, bool>*> const&
UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate::__cordl_internal_get__SameFunc_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SameFunc_k__BackingField;
}
constexpr void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate::__cordl_internal_set__SameFunc_k__BackingField(
    ::System::Func_3<::UnityEngine::UIElements::Rotate, ::UnityEngine::UIElements::Rotate, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____SameFunc_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Func_3<::UnityEngine::UIElements::Rotate, ::UnityEngine::UIElements::Rotate, bool>* UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate::get_SameFunc() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Func_3<::UnityEngine::UIElements::Rotate, ::UnityEngine::UIElements::Rotate, bool>*, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate::IsSame(::UnityEngine::UIElements::Rotate a, ::UnityEngine::UIElements::Rotate b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate*>::get(), "IsSame", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Rotate>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Rotate>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate::UpdateComputedStyle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate*>::get(),
                                               "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate::UpdateComputedStyle(int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate*>::get(), "UpdateComputedStyle",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
inline ::UnityEngine::UIElements::Rotate UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate::Lerp(::UnityEngine::UIElements::Rotate a, ::UnityEngine::UIElements::Rotate b,
                                                                                                                     float_t t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate*>::get(), "Lerp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Rotate>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Rotate>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Rotate, false>(nullptr, ___internal_method, a, b, t);
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate::UpdateValues() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate*>::get(), "UpdateValues",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate* UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate*>());
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate::__StylePropertyAnimationSystem__ValuesRotate() {}
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate.get_SameFunc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_3<::UnityEngine::UIElements::Translate, ::UnityEngine::UIElements::Translate, bool>* (
    ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate::*)()>(&::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate::get_SameFunc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3545a70;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate.IsSame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::UIElements::Translate, ::UnityEngine::UIElements::Translate)>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate::IsSame)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3545a78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate*>::get(), "IsSame", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Translate>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Translate>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate::*)()>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x3545ac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate*>::get(),
                                                 "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate::*)(int32_t)>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3545ba8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate*>::get(), "UpdateComputedStyle",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate.Lerp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Translate (*)(
    ::UnityEngine::UIElements::Translate, ::UnityEngine::UIElements::Translate, float_t)>(&::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate::Lerp)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x3545c74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate*>::get(), "Lerp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Translate>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Translate>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate.UpdateValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate::*)()>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate::UpdateValues)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3545d48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate*>::get(),
                                                 "UpdateValues", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate::*)()>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3545e24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Func_3<::UnityEngine::UIElements::Translate, ::UnityEngine::UIElements::Translate, bool>*&
UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate::__cordl_internal_get__SameFunc_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SameFunc_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::UnityEngine::UIElements::Translate, ::UnityEngine::UIElements::Translate, bool>*> const&
UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate::__cordl_internal_get__SameFunc_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SameFunc_k__BackingField;
}
constexpr void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate::__cordl_internal_set__SameFunc_k__BackingField(
    ::System::Func_3<::UnityEngine::UIElements::Translate, ::UnityEngine::UIElements::Translate, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____SameFunc_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Func_3<::UnityEngine::UIElements::Translate, ::UnityEngine::UIElements::Translate, bool>* UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate::get_SameFunc() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Func_3<::UnityEngine::UIElements::Translate, ::UnityEngine::UIElements::Translate, bool>*, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate::IsSame(::UnityEngine::UIElements::Translate a, ::UnityEngine::UIElements::Translate b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate*>::get(), "IsSame", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Translate>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Translate>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate::UpdateComputedStyle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate*>::get(),
                                               "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate::UpdateComputedStyle(int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate*>::get(), "UpdateComputedStyle",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
inline ::UnityEngine::UIElements::Translate UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate::Lerp(::UnityEngine::UIElements::Translate a,
                                                                                                                           ::UnityEngine::UIElements::Translate b, float_t t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate*>::get(), "Lerp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Translate>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Translate>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Translate, false>(nullptr, ___internal_method, a, b, t);
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate::UpdateValues() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate*>::get(),
                                               "UpdateValues", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate* UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate*>());
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate::__StylePropertyAnimationSystem__ValuesTranslate() {}
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin.get_SameFunc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_3<::UnityEngine::UIElements::TransformOrigin, ::UnityEngine::UIElements::TransformOrigin, bool>* (
    ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin::*)()>(&::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin::get_SameFunc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3545ebc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin.IsSame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::UIElements::TransformOrigin, ::UnityEngine::UIElements::TransformOrigin)>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin::IsSame)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3545ec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin*>::get(),
                                                 "IsSame", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TransformOrigin>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TransformOrigin>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin::*)()>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x3545f0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin*>::get(),
                                                 "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin.UpdateComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin::*)(int32_t)>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3545ff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin*>::get(), "UpdateComputedStyle",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin.Lerp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::TransformOrigin (*)(
    ::UnityEngine::UIElements::TransformOrigin, ::UnityEngine::UIElements::TransformOrigin, float_t)>(&::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin::Lerp)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x35460c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin*>::get(),
                                                 "Lerp", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TransformOrigin>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TransformOrigin>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin.UpdateValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin::*)()>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin::UpdateValues)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3546194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin*>::get(),
                                                 "UpdateValues", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin::*)()>(
    &::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3546270;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Func_3<::UnityEngine::UIElements::TransformOrigin, ::UnityEngine::UIElements::TransformOrigin, bool>*&
UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin::__cordl_internal_get__SameFunc_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SameFunc_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::UnityEngine::UIElements::TransformOrigin, ::UnityEngine::UIElements::TransformOrigin, bool>*> const&
UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin::__cordl_internal_get__SameFunc_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SameFunc_k__BackingField;
}
constexpr void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin::__cordl_internal_set__SameFunc_k__BackingField(
    ::System::Func_3<::UnityEngine::UIElements::TransformOrigin, ::UnityEngine::UIElements::TransformOrigin, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____SameFunc_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Func_3<::UnityEngine::UIElements::TransformOrigin, ::UnityEngine::UIElements::TransformOrigin, bool>*
UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin::get_SameFunc() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Func_3<::UnityEngine::UIElements::TransformOrigin, ::UnityEngine::UIElements::TransformOrigin, bool>*, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin::IsSame(::UnityEngine::UIElements::TransformOrigin a, ::UnityEngine::UIElements::TransformOrigin b) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin*>::get(),
                                               "IsSame", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TransformOrigin>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TransformOrigin>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin::UpdateComputedStyle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin*>::get(),
                                               "UpdateComputedStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin::UpdateComputedStyle(int32_t i) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin*>::get(), "UpdateComputedStyle",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
inline ::UnityEngine::UIElements::TransformOrigin UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin::Lerp(::UnityEngine::UIElements::TransformOrigin a,
                                                                                                                                       ::UnityEngine::UIElements::TransformOrigin b, float_t t) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin*>::get(), "Lerp",
                                               std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TransformOrigin>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TransformOrigin>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TransformOrigin, false>(nullptr, ___internal_method, a, b, t);
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin::UpdateValues() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin*>::get(),
                                               "UpdateValues", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin* UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin*>());
}
inline void UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin::__StylePropertyAnimationSystem__ValuesTransformOrigin() {}
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x35426dc;

  inline static const ::MethodInfo* methodInfo() {
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
  constexpr static std::size_t addrs = 0x35427d0;

  inline static const ::MethodInfo* methodInfo() {
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
  constexpr static std::size_t addrs = 0x3542898;

  inline static const ::MethodInfo* methodInfo() {
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
  constexpr static std::size_t addrs = 0x3542970;

  inline static const ::MethodInfo* methodInfo() {
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
  constexpr static std::size_t addrs = 0x3542a48;

  inline static const ::MethodInfo* methodInfo() {
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
  constexpr static std::size_t addrs = 0x3542b58;

  inline static const ::MethodInfo* methodInfo() {
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
  constexpr static std::size_t addrs = 0x3542c50;

  inline static const ::MethodInfo* methodInfo() {
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
  constexpr static std::size_t addrs = 0x3542d40;

  inline static const ::MethodInfo* methodInfo() {
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
  constexpr static std::size_t addrs = 0x3542e18;

  inline static const ::MethodInfo* methodInfo() {
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
  constexpr static std::size_t addrs = 0x3542f30;

  inline static const ::MethodInfo* methodInfo() {
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
  constexpr static std::size_t addrs = 0x3543020;

  inline static const ::MethodInfo* methodInfo() {
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
  constexpr static std::size_t addrs = 0x3543138;

  inline static const ::MethodInfo* methodInfo() {
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
  constexpr static std::size_t addrs = 0x3543250;

  inline static const ::MethodInfo* methodInfo() {
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
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.CancelAllAnimations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem::CancelAllAnimations)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x3543368;

  inline static const ::MethodInfo* methodInfo() {
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
  constexpr static std::size_t addrs = 0x35434b8;

  inline static const ::MethodInfo* methodInfo() {
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
  constexpr static std::size_t addrs = 0x354376c;

  inline static const ::MethodInfo* methodInfo() {
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
  constexpr static std::size_t addrs = 0x35437fc;

  inline static const ::MethodInfo* methodInfo() {
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
  constexpr static std::size_t addrs = 0x354388c;

  inline static const ::MethodInfo* methodInfo() {
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
  constexpr static std::size_t addrs = 0x35439e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(),
                                                                               "CurrentTimeMs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)()>(
    &::UnityEngine::UIElements::StylePropertyAnimationSystem::Update)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x35439ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(),
                                                                               "Update", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::UIElements::IStylePropertyAnimationSystem"
constexpr UnityEngine::UIElements::StylePropertyAnimationSystem::operator ::UnityEngine::UIElements::IStylePropertyAnimationSystem*() noexcept {
  return static_cast<::UnityEngine::UIElements::IStylePropertyAnimationSystem*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IStylePropertyAnimationSystem"
constexpr ::UnityEngine::UIElements::IStylePropertyAnimationSystem* UnityEngine::UIElements::StylePropertyAnimationSystem::i___UnityEngine__UIElements__IStylePropertyAnimationSystem() noexcept {
  return static_cast<::UnityEngine::UIElements::IStylePropertyAnimationSystem*>(static_cast<void*>(this));
}
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
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat*& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Floats() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Floats;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat*> const&
UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Floats() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Floats;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_Floats(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFloat* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Floats)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt*& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Ints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ints;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt*> const&
UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Ints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ints;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_Ints(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesInt* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Ints)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength*& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Lengths() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Lengths;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength*> const&
UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Lengths() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Lengths;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_Lengths(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesLength* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Lengths)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor*& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Colors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Colors;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor*> const&
UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Colors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Colors;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_Colors(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesColor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Colors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground*& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Backgrounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Backgrounds;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground*> const&
UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Backgrounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Backgrounds;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_Backgrounds(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesBackground* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Backgrounds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition*& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_FontDefinitions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontDefinitions;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition*> const&
UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_FontDefinitions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontDefinitions;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_FontDefinitions(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFontDefinition* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FontDefinitions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont*& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Fonts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Fonts;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont*> const&
UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Fonts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Fonts;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_Fonts(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesFont* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Fonts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow*& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_TextShadows() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextShadows;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow*> const&
UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_TextShadows() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextShadows;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_TextShadows(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTextShadow* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TextShadows)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale*& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Scale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Scale;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale*> const&
UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Scale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Scale;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_Scale(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesScale* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Scale)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate*& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Rotate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Rotate;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate*> const&
UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Rotate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Rotate;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_Rotate(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesRotate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Rotate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate*& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Translate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Translate;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate*> const&
UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Translate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Translate;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_Translate(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTranslate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Translate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin*& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_TransformOrigin() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransformOrigin;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin*> const&
UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_TransformOrigin() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransformOrigin;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_TransformOrigin(::UnityEngine::UIElements::__StylePropertyAnimationSystem__ValuesTransformOrigin* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TransformOrigin)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>*&
UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_AllValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllValues;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>*> const&
UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_AllValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllValues;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_AllValues(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AllValues)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>*&
UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_PropertyToValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PropertyToValues;
}
constexpr ::cordl_internals::to_const_pointer<
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>*> const&
UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_PropertyToValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PropertyToValues;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_PropertyToValues(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PropertyToValues)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::UIElements::StylePropertyAnimationSystem* UnityEngine::UIElements::StylePropertyAnimationSystem::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::StylePropertyAnimationSystem*>());
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::UIElements::StylePropertyAnimationSystem::GetOrCreate(ByRef<T> values) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(), "GetOrCreate",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, values);
}
template <typename T>
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop,
                                                                                   T startValue, T endValue, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve,
                                                                                   ::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>* values) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(), "StartTransition",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<float_t, float_t>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>*>::get() })));
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
template <typename T> inline void UnityEngine::UIElements::StylePropertyAnimationSystem::UpdateTracking(::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>* values) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StylePropertyAnimationSystem*>::get(), "UpdateTracking",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__StylePropertyAnimationSystem__Values_1<T>*>::get() })));
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
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem::StylePropertyAnimationSystem() {}
