#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UQuery.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__HierarchyTraversal_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UQuery_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UQuery_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__MatchResultInfo_def.hpp"
#include "UnityEngine/UIElements/zzzz__RuleMatcher_def.hpp"
#include "UnityEngine/UIElements/zzzz__UQuery_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UQuery_IVisualPredicateWrapper.Predicate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UQuery_IVisualPredicateWrapper::*)(::System::Object*)>(
    &::UnityEngine::UIElements::UQuery_IVisualPredicateWrapper::Predicate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_IVisualPredicateWrapper*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_IVisualPredicateWrapper*>::get(), 0));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::UQuery_IVisualPredicateWrapper::Predicate(::System::Object* e) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_IVisualPredicateWrapper*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, e);
}
template <typename T> inline void UnityEngine::UIElements::UQuery_IsOfType_1<T>::setStaticF_s_Instance(::UnityEngine::UIElements::UQuery_IsOfType_1<T>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::UQuery_IsOfType_1<T>*, "s_Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_IsOfType_1<T>*>::get>(
      std::forward<::UnityEngine::UIElements::UQuery_IsOfType_1<T>*>(value));
}
template <typename T> inline ::UnityEngine::UIElements::UQuery_IsOfType_1<T>* UnityEngine::UIElements::UQuery_IsOfType_1<T>::getStaticF_s_Instance() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::UQuery_IsOfType_1<T>*, "s_Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_IsOfType_1<T>*>::get>();
}
template <typename T> inline bool UnityEngine::UIElements::UQuery_IsOfType_1<T>::Predicate(::System::Object* e) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_IsOfType_1<T>*>::get(), "Predicate",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, e);
}
template <typename T> inline void UnityEngine::UIElements::UQuery_IsOfType_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_IsOfType_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::UQuery_IsOfType_1<T>* UnityEngine::UIElements::UQuery_IsOfType_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UQuery_IsOfType_1<T>*>());
}
/// @brief Convert operator to "::UnityEngine::UIElements::UQuery_IVisualPredicateWrapper"
template <typename T> constexpr UnityEngine::UIElements::UQuery_IsOfType_1<T>::operator ::UnityEngine::UIElements::UQuery_IVisualPredicateWrapper*() noexcept {
  return static_cast<::UnityEngine::UIElements::UQuery_IVisualPredicateWrapper*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::UQuery_IVisualPredicateWrapper"
template <typename T>
constexpr ::UnityEngine::UIElements::UQuery_IVisualPredicateWrapper* UnityEngine::UIElements::UQuery_IsOfType_1<T>::i___UnityEngine__UIElements__UQuery_IVisualPredicateWrapper() noexcept {
  return static_cast<::UnityEngine::UIElements::UQuery_IVisualPredicateWrapper*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::UQuery_IsOfType_1<T>::UQuery_IsOfType_1() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UQueryMatcher_UQuery___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UQueryMatcher_UQuery___c::*)()>(
    &::UnityEngine::UIElements::UQueryMatcher_UQuery___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4aad4f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryMatcher_UQuery___c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UQueryMatcher_UQuery___c._TraverseRecursive_b__5_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UQueryMatcher_UQuery___c::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo)>(&::UnityEngine::UIElements::UQueryMatcher_UQuery___c::_TraverseRecursive_b__5_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x4aad4fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryMatcher_UQuery___c*>::get(), "<TraverseRecursive>b__5_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::MatchResultInfo>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UQueryMatcher_UQuery___c::setStaticF___9(::UnityEngine::UIElements::UQueryMatcher_UQuery___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::UQueryMatcher_UQuery___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryMatcher_UQuery___c*>::get>(
      std::forward<::UnityEngine::UIElements::UQueryMatcher_UQuery___c*>(value));
}
inline ::UnityEngine::UIElements::UQueryMatcher_UQuery___c* UnityEngine::UIElements::UQueryMatcher_UQuery___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::UQueryMatcher_UQuery___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryMatcher_UQuery___c*>::get>();
}
inline void
UnityEngine::UIElements::UQueryMatcher_UQuery___c::setStaticF___9__5_0(::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>*, "<>9__5_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryMatcher_UQuery___c*>::get>(
      std::forward<::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>*>(value));
}
inline ::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>*
UnityEngine::UIElements::UQueryMatcher_UQuery___c::getStaticF___9__5_0() {
  return ::cordl_internals::getStaticField<::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>*, "<>9__5_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryMatcher_UQuery___c*>::get>();
}
inline void UnityEngine::UIElements::UQueryMatcher_UQuery___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryMatcher_UQuery___c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UQueryMatcher_UQuery___c::_TraverseRecursive_b__5_0(::UnityEngine::UIElements::VisualElement* e, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo i) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryMatcher_UQuery___c*>::get(), "<TraverseRecursive>b__5_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::MatchResultInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e, i);
}
inline ::UnityEngine::UIElements::UQueryMatcher_UQuery___c* UnityEngine::UIElements::UQueryMatcher_UQuery___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UQueryMatcher_UQuery___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UQueryMatcher_UQuery___c::UQueryMatcher_UQuery___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UQuery_UQueryMatcher._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UQuery_UQueryMatcher::*)()>(
    &::UnityEngine::UIElements::UQuery_UQueryMatcher::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4aad274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_UQueryMatcher*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UQuery_UQueryMatcher.Traverse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UQuery_UQueryMatcher::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UQuery_UQueryMatcher::Traverse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4aad27c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_UQueryMatcher*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_UQueryMatcher*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UQuery_UQueryMatcher.OnRuleMatchedElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UQuery_UQueryMatcher::*)(
    ::UnityEngine::UIElements::RuleMatcher, ::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::UQuery_UQueryMatcher::OnRuleMatchedElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4aad284;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_UQueryMatcher*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_UQueryMatcher*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UQuery_UQueryMatcher.NoProcessResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo)>(
    &::UnityEngine::UIElements::UQuery_UQueryMatcher::NoProcessResult)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x4aad28c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_UQueryMatcher*>::get(), "NoProcessResult", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::MatchResultInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UQuery_UQueryMatcher.TraverseRecursive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UQuery_UQueryMatcher::*)(::UnityEngine::UIElements::VisualElement*, int32_t)>(
    &::UnityEngine::UIElements::UQuery_UQueryMatcher::TraverseRecursive)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x4aad290;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_UQueryMatcher*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_UQueryMatcher*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UQuery_UQueryMatcher.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UQuery_UQueryMatcher::*)(
    ::UnityEngine::UIElements::VisualElement*, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>*)>(&::UnityEngine::UIElements::UQuery_UQueryMatcher::Run)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4aad488;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_UQueryMatcher*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_UQueryMatcher*>::get(), 7));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>*& UnityEngine::UIElements::UQuery_UQueryMatcher::__cordl_internal_get_m_Matchers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Matchers;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>* const& UnityEngine::UIElements::UQuery_UQueryMatcher::__cordl_internal_get_m_Matchers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Matchers;
}
constexpr void UnityEngine::UIElements::UQuery_UQueryMatcher::__cordl_internal_set_m_Matchers(::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Matchers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::UQuery_UQueryMatcher::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_UQueryMatcher*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UQuery_UQueryMatcher::Traverse(::UnityEngine::UIElements::VisualElement* element) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_UQueryMatcher*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, element);
}
inline bool UnityEngine::UIElements::UQuery_UQueryMatcher::OnRuleMatchedElement(::UnityEngine::UIElements::RuleMatcher matcher, ::UnityEngine::UIElements::VisualElement* element) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_UQueryMatcher*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, matcher, element);
}
inline void UnityEngine::UIElements::UQuery_UQueryMatcher::NoProcessResult(::UnityEngine::UIElements::VisualElement* e, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo i) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_UQueryMatcher*>::get(), "NoProcessResult", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::MatchResultInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, e, i);
}
inline void UnityEngine::UIElements::UQuery_UQueryMatcher::TraverseRecursive(::UnityEngine::UIElements::VisualElement* element, int32_t depth) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_UQueryMatcher*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, element, depth);
}
inline void UnityEngine::UIElements::UQuery_UQueryMatcher::Run(::UnityEngine::UIElements::VisualElement* root,
                                                               ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>* matchers) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_UQueryMatcher*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, root, matchers);
}
inline ::UnityEngine::UIElements::UQuery_UQueryMatcher* UnityEngine::UIElements::UQuery_UQueryMatcher::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UQuery_UQueryMatcher*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UQuery_UQueryMatcher::UQuery_UQueryMatcher() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UQuery_SingleQueryMatcher.get_match
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::UQuery_SingleQueryMatcher::*)()>(
    &::UnityEngine::UIElements::UQuery_SingleQueryMatcher::get_match)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4aad500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_SingleQueryMatcher*>::get(),
                                                                               "get_match", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UQuery_SingleQueryMatcher.set_match
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UQuery_SingleQueryMatcher::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UQuery_SingleQueryMatcher::set_match)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4aad508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_SingleQueryMatcher*>::get(), "set_match", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UQuery_SingleQueryMatcher.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UQuery_SingleQueryMatcher::*)(
    ::UnityEngine::UIElements::VisualElement*, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>*)>(&::UnityEngine::UIElements::UQuery_SingleQueryMatcher::Run)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4aad510;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_SingleQueryMatcher*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_SingleQueryMatcher*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UQuery_SingleQueryMatcher.IsInUse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UQuery_SingleQueryMatcher::*)()>(
    &::UnityEngine::UIElements::UQuery_SingleQueryMatcher::IsInUse)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4aad534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_SingleQueryMatcher*>::get(),
                                                                               "IsInUse", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UQuery_SingleQueryMatcher.CreateNew
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UQuery_SingleQueryMatcher* (::UnityEngine::UIElements::UQuery_SingleQueryMatcher::*)()>(
    &::UnityEngine::UIElements::UQuery_SingleQueryMatcher::CreateNew)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_SingleQueryMatcher*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_SingleQueryMatcher*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UQuery_SingleQueryMatcher._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UQuery_SingleQueryMatcher::*)()>(
    &::UnityEngine::UIElements::UQuery_SingleQueryMatcher::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4aad544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_SingleQueryMatcher*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::UQuery_SingleQueryMatcher::__cordl_internal_get__match_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____match_k__BackingField;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::UQuery_SingleQueryMatcher::__cordl_internal_get__match_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____match_k__BackingField;
}
constexpr void UnityEngine::UIElements::UQuery_SingleQueryMatcher::__cordl_internal_set__match_k__BackingField(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____match_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::UQuery_SingleQueryMatcher::get_match() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_SingleQueryMatcher*>::get(),
                                                                             "get_match", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UQuery_SingleQueryMatcher::set_match(::UnityEngine::UIElements::VisualElement* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_SingleQueryMatcher*>::get(), "set_match", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UQuery_SingleQueryMatcher::Run(::UnityEngine::UIElements::VisualElement* root,
                                                                    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>* matchers) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_SingleQueryMatcher*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, root, matchers);
}
inline bool UnityEngine::UIElements::UQuery_SingleQueryMatcher::IsInUse() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_SingleQueryMatcher*>::get(),
                                                                             "IsInUse", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UQuery_SingleQueryMatcher* UnityEngine::UIElements::UQuery_SingleQueryMatcher::CreateNew() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_SingleQueryMatcher*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UQuery_SingleQueryMatcher*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UQuery_SingleQueryMatcher::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_SingleQueryMatcher*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UQuery_SingleQueryMatcher* UnityEngine::UIElements::UQuery_SingleQueryMatcher::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UQuery_SingleQueryMatcher*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UQuery_SingleQueryMatcher::UQuery_SingleQueryMatcher() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UQuery_FirstQueryMatcher.OnRuleMatchedElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UQuery_FirstQueryMatcher::*)(
    ::UnityEngine::UIElements::RuleMatcher, ::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::UQuery_FirstQueryMatcher::OnRuleMatchedElement)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4aad54c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_FirstQueryMatcher*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_FirstQueryMatcher*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UQuery_FirstQueryMatcher.CreateNew
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UQuery_SingleQueryMatcher* (::UnityEngine::UIElements::UQuery_FirstQueryMatcher::*)()>(
    &::UnityEngine::UIElements::UQuery_FirstQueryMatcher::CreateNew)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4aad560;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_FirstQueryMatcher*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_FirstQueryMatcher*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UQuery_FirstQueryMatcher._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UQuery_FirstQueryMatcher::*)()>(
    &::UnityEngine::UIElements::UQuery_FirstQueryMatcher::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4aad5b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_FirstQueryMatcher*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UQuery_FirstQueryMatcher::setStaticF_Instance(::UnityEngine::UIElements::UQuery_FirstQueryMatcher* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::UQuery_FirstQueryMatcher*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_FirstQueryMatcher*>::get>(
      std::forward<::UnityEngine::UIElements::UQuery_FirstQueryMatcher*>(value));
}
inline ::UnityEngine::UIElements::UQuery_FirstQueryMatcher* UnityEngine::UIElements::UQuery_FirstQueryMatcher::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::UQuery_FirstQueryMatcher*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_FirstQueryMatcher*>::get>();
}
inline bool UnityEngine::UIElements::UQuery_FirstQueryMatcher::OnRuleMatchedElement(::UnityEngine::UIElements::RuleMatcher matcher, ::UnityEngine::UIElements::VisualElement* element) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_FirstQueryMatcher*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, matcher, element);
}
inline ::UnityEngine::UIElements::UQuery_SingleQueryMatcher* UnityEngine::UIElements::UQuery_FirstQueryMatcher::CreateNew() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_FirstQueryMatcher*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UQuery_SingleQueryMatcher*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UQuery_FirstQueryMatcher::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQuery_FirstQueryMatcher*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UQuery_FirstQueryMatcher* UnityEngine::UIElements::UQuery_FirstQueryMatcher::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UQuery_FirstQueryMatcher*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UQuery_FirstQueryMatcher::UQuery_FirstQueryMatcher() {}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UQuery::UQuery() {}
