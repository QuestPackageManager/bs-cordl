#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleMatchingContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleVariableContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__MatchResultInfo_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleMatchingContext.get_styleSheetCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::StyleMatchingContext::*)()>(
    &::UnityEngine::UIElements::StyleMatchingContext::get_styleSheetCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2dc1bb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleMatchingContext*>::get(),
                                                                               "get_styleSheetCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleMatchingContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleMatchingContext::*)(
    ::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>*)>(&::UnityEngine::UIElements::StyleMatchingContext::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2dc1bfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleMatchingContext*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleMatchingContext.AddStyleSheet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleMatchingContext::*)(::UnityEngine::UIElements::StyleSheet*)>(
    &::UnityEngine::UIElements::StyleMatchingContext::AddStyleSheet)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2dc1cc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleMatchingContext*>::get(), "AddStyleSheet", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleMatchingContext.RemoveStyleSheetRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleMatchingContext::*)(int32_t, int32_t)>(
    &::UnityEngine::UIElements::StyleMatchingContext::RemoveStyleSheetRange)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2dc1dac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleMatchingContext*>::get(), "RemoveStyleSheetRange", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleMatchingContext.GetStyleSheetAt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleSheet* (::UnityEngine::UIElements::StyleMatchingContext::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleMatchingContext::GetStyleSheetAt)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2dc1e14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleMatchingContext*>::get(), "GetStyleSheetAt",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet*>*& UnityEngine::UIElements::StyleMatchingContext::__get_m_StyleSheetStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StyleSheetStack;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet*>*> const&
UnityEngine::UIElements::StyleMatchingContext::__get_m_StyleSheetStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StyleSheetStack;
}
constexpr void UnityEngine::UIElements::StyleMatchingContext::__set_m_StyleSheetStack(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_StyleSheetStack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::StyleVariableContext*& UnityEngine::UIElements::StyleMatchingContext::__get_variableContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___variableContext;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleVariableContext*> const& UnityEngine::UIElements::StyleMatchingContext::__get_variableContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___variableContext;
}
constexpr void UnityEngine::UIElements::StyleMatchingContext::__set_variableContext(::UnityEngine::UIElements::StyleVariableContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___variableContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::StyleMatchingContext::__get_currentElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentElement;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& UnityEngine::UIElements::StyleMatchingContext::__get_currentElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentElement;
}
constexpr void UnityEngine::UIElements::StyleMatchingContext::__set_currentElement(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___currentElement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>*&
UnityEngine::UIElements::StyleMatchingContext::__get_processResult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___processResult;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>*> const&
UnityEngine::UIElements::StyleMatchingContext::__get_processResult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___processResult;
}
constexpr void
UnityEngine::UIElements::StyleMatchingContext::__set_processResult(::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___processResult)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t UnityEngine::UIElements::StyleMatchingContext::get_styleSheetCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleMatchingContext*>::get(),
                                                                             "get_styleSheetCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StyleMatchingContext*
UnityEngine::UIElements::StyleMatchingContext::New_ctor(::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>* processResult) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::StyleMatchingContext*>(processResult));
}
inline void
UnityEngine::UIElements::StyleMatchingContext::_ctor(::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>* processResult) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleMatchingContext*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, processResult);
}
inline void UnityEngine::UIElements::StyleMatchingContext::AddStyleSheet(::UnityEngine::UIElements::StyleSheet* sheet) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleMatchingContext*>::get(), "AddStyleSheet", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sheet);
}
inline void UnityEngine::UIElements::StyleMatchingContext::RemoveStyleSheetRange(int32_t index, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleMatchingContext*>::get(), "RemoveStyleSheetRange", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, count);
}
inline ::UnityEngine::UIElements::StyleSheet* UnityEngine::UIElements::StyleMatchingContext::GetStyleSheetAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleMatchingContext*>::get(), "GetStyleSheetAt",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheet*, false>(this, ___internal_method, index);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleMatchingContext::StyleMatchingContext() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
