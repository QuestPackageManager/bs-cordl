#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\DataBindingUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DataBindingUtility_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/UIElements/Internal/zzzz__AutoCompletePathVisitor_def.hpp"
#include "UnityEngine/UIElements/Internal/zzzz__TypePathVisitor_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingInfo_def.hpp"
#include "UnityEngine/UIElements/zzzz__DataBindingUtility_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingUtility___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingUtility___c::*)()>(&::UnityEngine::UIElements::DataBindingUtility___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c452cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingUtility___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingUtility___c.__cctor_b__23_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Internal::TypePathVisitor* (::UnityEngine::UIElements::DataBindingUtility___c::*)()>(
    &::UnityEngine::UIElements::DataBindingUtility___c::__cctor_b__23_0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c452d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingUtility___c*>(), { "<.cctor>b__23_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingUtility___c.__cctor_b__23_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingUtility___c::*)(::UnityEngine::UIElements::Internal::TypePathVisitor*)>(
    &::UnityEngine::UIElements::DataBindingUtility___c::__cctor_b__23_1)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6c45314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingUtility___c*>(),
                                                                                           { "<.cctor>b__23_1", {}, { ::i2c::type_of<::UnityEngine::UIElements::Internal::TypePathVisitor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingUtility___c.__cctor_b__23_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor* (::UnityEngine::UIElements::DataBindingUtility___c::*)()>(
    &::UnityEngine::UIElements::DataBindingUtility___c::__cctor_b__23_2)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6c4533c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingUtility___c*>(), { "<.cctor>b__23_2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingUtility___c.__cctor_b__23_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingUtility___c::*)(::UnityEngine::UIElements::Internal::AutoCompletePathVisitor*)>(
    &::UnityEngine::UIElements::DataBindingUtility___c::__cctor_b__23_3)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6c45394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingUtility___c*>(),
                                                             { "<.cctor>b__23_3", {}, { ::i2c::type_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::DataBindingUtility___c::setStaticF___9(::UnityEngine::UIElements::DataBindingUtility___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::DataBindingUtility___c*, "<>9", ::UnityEngine::UIElements::DataBindingUtility___c*>(
      std::forward<::UnityEngine::UIElements::DataBindingUtility___c*>(value));
}
inline ::UnityEngine::UIElements::DataBindingUtility___c* UnityEngine::UIElements::DataBindingUtility___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::DataBindingUtility___c*, "<>9", ::UnityEngine::UIElements::DataBindingUtility___c*>();
}
inline void UnityEngine::UIElements::DataBindingUtility___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingUtility___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Internal::TypePathVisitor* UnityEngine::UIElements::DataBindingUtility___c::__cctor_b__23_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingUtility___c*>(), { "<.cctor>b__23_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Internal::TypePathVisitor*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DataBindingUtility___c::__cctor_b__23_1(::UnityEngine::UIElements::Internal::TypePathVisitor* v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingUtility___c*>(),
                                                                                         { "<.cctor>b__23_1", {}, { ::i2c::type_of<::UnityEngine::UIElements::Internal::TypePathVisitor*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
inline ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor* UnityEngine::UIElements::DataBindingUtility___c::__cctor_b__23_2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingUtility___c*>(), { "<.cctor>b__23_2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DataBindingUtility___c::__cctor_b__23_3(::UnityEngine::UIElements::Internal::AutoCompletePathVisitor* v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingUtility___c*>(),
                                                           { "<.cctor>b__23_3", {}, { ::i2c::type_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
inline ::UnityEngine::UIElements::DataBindingUtility___c* UnityEngine::UIElements::DataBindingUtility___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::DataBindingUtility___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DataBindingUtility___c::DataBindingUtility___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingUtility.TryGetBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::VisualElement*, ::by_ref<::UnityEngine::UIElements::BindingId>,
                                                                ::by_ref<::UnityEngine::UIElements::BindingInfo>)>(&::UnityEngine::UIElements::DataBindingUtility::TryGetBinding)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x6c44de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingUtility*>(),
                                                             { "TryGetBinding",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingId>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingInfo>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::DataBindingUtility::setStaticF_k_TypeVisitors(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::Internal::TypePathVisitor*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::Internal::TypePathVisitor*>*, "k_TypeVisitors", ::UnityEngine::UIElements::DataBindingUtility*>(
      std::forward<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::Internal::TypePathVisitor*>*>(value));
}
inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::Internal::TypePathVisitor*>* UnityEngine::UIElements::DataBindingUtility::getStaticF_k_TypeVisitors() {
  return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::Internal::TypePathVisitor*>*, "k_TypeVisitors",
                                           ::UnityEngine::UIElements::DataBindingUtility*>();
}
inline void UnityEngine::UIElements::DataBindingUtility::setStaticF_k_AutoCompleteVisitors(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor*>*, "k_AutoCompleteVisitors",
                                    ::UnityEngine::UIElements::DataBindingUtility*>(
      std::forward<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor*>*>(value));
}
inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor*>* UnityEngine::UIElements::DataBindingUtility::getStaticF_k_AutoCompleteVisitors() {
  return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor*>*, "k_AutoCompleteVisitors",
                                           ::UnityEngine::UIElements::DataBindingUtility*>();
}
inline void UnityEngine::UIElements::DataBindingUtility::setStaticF_s_ReplaceIndices(::System::Text::RegularExpressions::Regex* value) {
  ::cordl_internals::setStaticField<::System::Text::RegularExpressions::Regex*, "s_ReplaceIndices", ::UnityEngine::UIElements::DataBindingUtility*>(
      std::forward<::System::Text::RegularExpressions::Regex*>(value));
}
inline ::System::Text::RegularExpressions::Regex* UnityEngine::UIElements::DataBindingUtility::getStaticF_s_ReplaceIndices() {
  return ::cordl_internals::getStaticField<::System::Text::RegularExpressions::Regex*, "s_ReplaceIndices", ::UnityEngine::UIElements::DataBindingUtility*>();
}
inline bool UnityEngine::UIElements::DataBindingUtility::TryGetBinding(::UnityEngine::UIElements::VisualElement* element, ::by_ref<::UnityEngine::UIElements::BindingId> bindingId,
                                                                       ::by_ref<::UnityEngine::UIElements::BindingInfo> bindingInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingUtility*>(),
                                                           { "TryGetBinding",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingId>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, element, bindingId, bindingInfo);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DataBindingUtility::DataBindingUtility() {}
