#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallbackListPool_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallbackList_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackListPool.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventCallbackList* (
    ::UnityEngine::UIElements::EventCallbackListPool::*)(::UnityEngine::UIElements::EventCallbackList*)>(&::UnityEngine::UIElements::EventCallbackListPool::Get)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2e4ad94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackListPool*>::get(), "Get", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventCallbackList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackListPool.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventCallbackListPool::*)(::UnityEngine::UIElements::EventCallbackList*)>(
    &::UnityEngine::UIElements::EventCallbackListPool::Release)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2e4b0f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackListPool*>::get(), "Release", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventCallbackList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackListPool._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventCallbackListPool::*)()>(
    &::UnityEngine::UIElements::EventCallbackListPool::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2e4b1c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackListPool*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::EventCallbackList*>*& UnityEngine::UIElements::EventCallbackListPool::__get_m_Stack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Stack;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::EventCallbackList*>*> const&
UnityEngine::UIElements::EventCallbackListPool::__get_m_Stack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Stack;
}
constexpr void UnityEngine::UIElements::EventCallbackListPool::__set_m_Stack(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::EventCallbackList*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Stack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::UIElements::EventCallbackList* UnityEngine::UIElements::EventCallbackListPool::Get(::UnityEngine::UIElements::EventCallbackList* initializer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackListPool*>::get(), "Get", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventCallbackList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventCallbackList*, false>(this, ___internal_method, initializer);
}
inline void UnityEngine::UIElements::EventCallbackListPool::Release(::UnityEngine::UIElements::EventCallbackList* element) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackListPool*>::get(), "Release", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventCallbackList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, element);
}
inline ::UnityEngine::UIElements::EventCallbackListPool* UnityEngine::UIElements::EventCallbackListPool::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::EventCallbackListPool*>());
}
inline void UnityEngine::UIElements::EventCallbackListPool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackListPool*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::EventCallbackListPool::EventCallbackListPool() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
