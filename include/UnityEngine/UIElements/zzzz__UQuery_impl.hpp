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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UQuery_IVisualPredicateWrapper::*)(::System::Object*)>(
    &::UnityEngine::UIElements::UQuery_IVisualPredicateWrapper::Predicate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQuery_IVisualPredicateWrapper*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::UQuery_IVisualPredicateWrapper*>(), 0 }));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::UQuery_IVisualPredicateWrapper::Predicate(::System::Object* e) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UQuery_IVisualPredicateWrapper*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, e);
}
template <typename T> inline void UnityEngine::UIElements::UQuery_IsOfType_1<T>::setStaticF_s_Instance(::UnityEngine::UIElements::UQuery_IsOfType_1<T>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::UQuery_IsOfType_1<T>*, "s_Instance", ::UnityEngine::UIElements::UQuery_IsOfType_1<T>*>(
      std::forward<::UnityEngine::UIElements::UQuery_IsOfType_1<T>*>(value));
}
template <typename T> inline ::UnityEngine::UIElements::UQuery_IsOfType_1<T>* UnityEngine::UIElements::UQuery_IsOfType_1<T>::getStaticF_s_Instance() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::UQuery_IsOfType_1<T>*, "s_Instance", ::UnityEngine::UIElements::UQuery_IsOfType_1<T>*>();
}
template <typename T> inline bool UnityEngine::UIElements::UQuery_IsOfType_1<T>::Predicate(::System::Object* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQuery_IsOfType_1<T>*>(), { "Predicate", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, e);
}
template <typename T> inline void UnityEngine::UIElements::UQuery_IsOfType_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQuery_IsOfType_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::UQuery_IsOfType_1<T>* UnityEngine::UIElements::UQuery_IsOfType_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UQuery_IsOfType_1<T>*>());
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UQueryMatcher_UQuery___c::*)()>(&::UnityEngine::UIElements::UQueryMatcher_UQuery___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cb72f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQueryMatcher_UQuery___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UQueryMatcher_UQuery___c._TraverseRecursive_b__5_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UQueryMatcher_UQuery___c::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo)>(&::UnityEngine::UIElements::UQueryMatcher_UQuery___c::_TraverseRecursive_b__5_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cb72fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::UQueryMatcher_UQuery___c*>(),
            { "<TraverseRecursive>b__5_0", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::MatchResultInfo>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UQueryMatcher_UQuery___c::setStaticF___9(::UnityEngine::UIElements::UQueryMatcher_UQuery___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::UQueryMatcher_UQuery___c*, "<>9", ::UnityEngine::UIElements::UQueryMatcher_UQuery___c*>(
      std::forward<::UnityEngine::UIElements::UQueryMatcher_UQuery___c*>(value));
}
inline ::UnityEngine::UIElements::UQueryMatcher_UQuery___c* UnityEngine::UIElements::UQueryMatcher_UQuery___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::UQueryMatcher_UQuery___c*, "<>9", ::UnityEngine::UIElements::UQueryMatcher_UQuery___c*>();
}
inline void
UnityEngine::UIElements::UQueryMatcher_UQuery___c::setStaticF___9__5_0(::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>*, "<>9__5_0",
                                    ::UnityEngine::UIElements::UQueryMatcher_UQuery___c*>(
      std::forward<::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>*>(value));
}
inline ::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>*
UnityEngine::UIElements::UQueryMatcher_UQuery___c::getStaticF___9__5_0() {
  return ::cordl_internals::getStaticField<::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>*, "<>9__5_0",
                                           ::UnityEngine::UIElements::UQueryMatcher_UQuery___c*>();
}
inline void UnityEngine::UIElements::UQueryMatcher_UQuery___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQueryMatcher_UQuery___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UQueryMatcher_UQuery___c::_TraverseRecursive_b__5_0(::UnityEngine::UIElements::VisualElement* e, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo i) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::UQueryMatcher_UQuery___c*>(),
          { "<TraverseRecursive>b__5_0", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::MatchResultInfo>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e, i);
}
inline ::UnityEngine::UIElements::UQueryMatcher_UQuery___c* UnityEngine::UIElements::UQueryMatcher_UQuery___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UQueryMatcher_UQuery___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UQueryMatcher_UQuery___c::UQueryMatcher_UQuery___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UQuery_UQueryMatcher._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UQuery_UQueryMatcher::*)()>(&::UnityEngine::UIElements::UQuery_UQueryMatcher::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cb705c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQuery_UQueryMatcher*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UQuery_UQueryMatcher.Traverse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UQuery_UQueryMatcher::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UQuery_UQueryMatcher::Traverse)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6cb7060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQuery_UQueryMatcher*>(), { ::i2c::class_of<::UnityEngine::UIElements::UQuery_UQueryMatcher*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UQuery_UQueryMatcher.OnRuleMatchedElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UQuery_UQueryMatcher::*)(::UnityEngine::UIElements::RuleMatcher, ::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UQuery_UQueryMatcher::OnRuleMatchedElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cb7070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQuery_UQueryMatcher*>(), { ::i2c::class_of<::UnityEngine::UIElements::UQuery_UQueryMatcher*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UQuery_UQueryMatcher.NoProcessResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo)>(
    &::UnityEngine::UIElements::UQuery_UQueryMatcher::NoProcessResult)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cb7078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQuery_UQueryMatcher*>(),
                            { "NoProcessResult", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::MatchResultInfo>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UQuery_UQueryMatcher.TraverseRecursive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UQuery_UQueryMatcher::*)(::UnityEngine::UIElements::VisualElement*, int32_t)>(
    &::UnityEngine::UIElements::UQuery_UQueryMatcher::TraverseRecursive)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x6cb707c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQuery_UQueryMatcher*>(), { ::i2c::class_of<::UnityEngine::UIElements::UQuery_UQueryMatcher*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UQuery_UQueryMatcher.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UQuery_UQueryMatcher::*)(
    ::UnityEngine::UIElements::VisualElement*, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>*)>(&::UnityEngine::UIElements::UQuery_UQueryMatcher::Run)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6cb7290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQuery_UQueryMatcher*>(), { ::i2c::class_of<::UnityEngine::UIElements::UQuery_UQueryMatcher*>(), 7 }));
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
  this->___m_Matchers = value;
}
inline void UnityEngine::UIElements::UQuery_UQueryMatcher::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQuery_UQueryMatcher*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UQuery_UQueryMatcher::Traverse(::UnityEngine::UIElements::VisualElement* element) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UQuery_UQueryMatcher*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
inline bool UnityEngine::UIElements::UQuery_UQueryMatcher::OnRuleMatchedElement(::UnityEngine::UIElements::RuleMatcher matcher, ::UnityEngine::UIElements::VisualElement* element) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UQuery_UQueryMatcher*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, matcher, element);
}
inline void UnityEngine::UIElements::UQuery_UQueryMatcher::NoProcessResult(::UnityEngine::UIElements::VisualElement* e, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo i) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQuery_UQueryMatcher*>(),
                          { "NoProcessResult", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::MatchResultInfo>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, e, i);
}
inline void UnityEngine::UIElements::UQuery_UQueryMatcher::TraverseRecursive(::UnityEngine::UIElements::VisualElement* element, int32_t depth) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UQuery_UQueryMatcher*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element, depth);
}
inline void UnityEngine::UIElements::UQuery_UQueryMatcher::Run(::UnityEngine::UIElements::VisualElement* root,
                                                               ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>* matchers) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UQuery_UQueryMatcher*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root, matchers);
}
inline ::UnityEngine::UIElements::UQuery_UQueryMatcher* UnityEngine::UIElements::UQuery_UQueryMatcher::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UQuery_UQueryMatcher*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UQuery_UQueryMatcher::UQuery_UQueryMatcher() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UQuery_SingleQueryMatcher.get_match
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::UQuery_SingleQueryMatcher::*)()>(
    &::UnityEngine::UIElements::UQuery_SingleQueryMatcher::get_match)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cb7300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQuery_SingleQueryMatcher*>(), { "get_match", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UQuery_SingleQueryMatcher.set_match
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UQuery_SingleQueryMatcher::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UQuery_SingleQueryMatcher::set_match)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cb7308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQuery_SingleQueryMatcher*>(),
                                                                                           { "set_match", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UQuery_SingleQueryMatcher.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UQuery_SingleQueryMatcher::*)(
    ::UnityEngine::UIElements::VisualElement*, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>*)>(&::UnityEngine::UIElements::UQuery_SingleQueryMatcher::Run)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6cb7310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQuery_SingleQueryMatcher*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::UQuery_SingleQueryMatcher*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UQuery_SingleQueryMatcher.IsInUse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UQuery_SingleQueryMatcher::*)()>(&::UnityEngine::UIElements::UQuery_SingleQueryMatcher::IsInUse)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6cb7338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQuery_SingleQueryMatcher*>(), { "IsInUse", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UQuery_SingleQueryMatcher.CreateNew
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UQuery_SingleQueryMatcher* (::UnityEngine::UIElements::UQuery_SingleQueryMatcher::*)()>(
    &::UnityEngine::UIElements::UQuery_SingleQueryMatcher::CreateNew)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQuery_SingleQueryMatcher*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::UQuery_SingleQueryMatcher*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UQuery_SingleQueryMatcher._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UQuery_SingleQueryMatcher::*)()>(&::UnityEngine::UIElements::UQuery_SingleQueryMatcher::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cb7348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQuery_SingleQueryMatcher*>(), { ".ctor", {}, {} })));
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
  this->____match_k__BackingField = value;
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::UQuery_SingleQueryMatcher::get_match() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQuery_SingleQueryMatcher*>(), { "get_match", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UQuery_SingleQueryMatcher::set_match(::UnityEngine::UIElements::VisualElement* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQuery_SingleQueryMatcher*>(),
                                                                                         { "set_match", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UQuery_SingleQueryMatcher::Run(::UnityEngine::UIElements::VisualElement* root,
                                                                    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>* matchers) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UQuery_SingleQueryMatcher*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root, matchers);
}
inline bool UnityEngine::UIElements::UQuery_SingleQueryMatcher::IsInUse() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQuery_SingleQueryMatcher*>(), { "IsInUse", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UQuery_SingleQueryMatcher* UnityEngine::UIElements::UQuery_SingleQueryMatcher::CreateNew() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UQuery_SingleQueryMatcher*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UQuery_SingleQueryMatcher*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UQuery_SingleQueryMatcher::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQuery_SingleQueryMatcher*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UQuery_SingleQueryMatcher* UnityEngine::UIElements::UQuery_SingleQueryMatcher::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UQuery_SingleQueryMatcher*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UQuery_SingleQueryMatcher::UQuery_SingleQueryMatcher() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UQuery_FirstQueryMatcher.OnRuleMatchedElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UQuery_FirstQueryMatcher::*)(
    ::UnityEngine::UIElements::RuleMatcher, ::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::UQuery_FirstQueryMatcher::OnRuleMatchedElement)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6cb734c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQuery_FirstQueryMatcher*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::UQuery_FirstQueryMatcher*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UQuery_FirstQueryMatcher.CreateNew
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UQuery_SingleQueryMatcher* (::UnityEngine::UIElements::UQuery_FirstQueryMatcher::*)()>(
    &::UnityEngine::UIElements::UQuery_FirstQueryMatcher::CreateNew)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6cb7360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQuery_FirstQueryMatcher*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::UQuery_FirstQueryMatcher*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UQuery_FirstQueryMatcher._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UQuery_FirstQueryMatcher::*)()>(&::UnityEngine::UIElements::UQuery_FirstQueryMatcher::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cb73a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQuery_FirstQueryMatcher*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UQuery_FirstQueryMatcher::setStaticF_Instance(::UnityEngine::UIElements::UQuery_FirstQueryMatcher* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::UQuery_FirstQueryMatcher*, "Instance", ::UnityEngine::UIElements::UQuery_FirstQueryMatcher*>(
      std::forward<::UnityEngine::UIElements::UQuery_FirstQueryMatcher*>(value));
}
inline ::UnityEngine::UIElements::UQuery_FirstQueryMatcher* UnityEngine::UIElements::UQuery_FirstQueryMatcher::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::UQuery_FirstQueryMatcher*, "Instance", ::UnityEngine::UIElements::UQuery_FirstQueryMatcher*>();
}
inline bool UnityEngine::UIElements::UQuery_FirstQueryMatcher::OnRuleMatchedElement(::UnityEngine::UIElements::RuleMatcher matcher, ::UnityEngine::UIElements::VisualElement* element) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UQuery_FirstQueryMatcher*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, matcher, element);
}
inline ::UnityEngine::UIElements::UQuery_SingleQueryMatcher* UnityEngine::UIElements::UQuery_FirstQueryMatcher::CreateNew() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UQuery_FirstQueryMatcher*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UQuery_SingleQueryMatcher*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UQuery_FirstQueryMatcher::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQuery_FirstQueryMatcher*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UQuery_FirstQueryMatcher* UnityEngine::UIElements::UQuery_FirstQueryMatcher::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UQuery_FirstQueryMatcher*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UQuery_FirstQueryMatcher::UQuery_FirstQueryMatcher() {}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UQuery::UQuery() {}
