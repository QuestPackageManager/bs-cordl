#pragma once
#include "System/zzzz__ContextBoundObject_impl.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__ContextCallbackObject_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__CrossContextDelegate_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::ContextCallbackObject.DoCallBack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Contexts::ContextCallbackObject::*)(
    ::System::Runtime::Remoting::Contexts::CrossContextDelegate*)>(&::System::Runtime::Remoting::Contexts::ContextCallbackObject::DoCallBack)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x249e990;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::ContextCallbackObject*>::get(), "DoCallBack", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Contexts::CrossContextDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::ContextCallbackObject._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Contexts::ContextCallbackObject::*)()>(
    &::System::Runtime::Remoting::Contexts::ContextCallbackObject::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x249e988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::ContextCallbackObject*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void System::Runtime::Remoting::Contexts::ContextCallbackObject::DoCallBack(::System::Runtime::Remoting::Contexts::CrossContextDelegate* deleg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::ContextCallbackObject*>::get(), "DoCallBack", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Contexts::CrossContextDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, deleg);
}
inline ::System::Runtime::Remoting::Contexts::ContextCallbackObject* System::Runtime::Remoting::Contexts::ContextCallbackObject::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Remoting::Contexts::ContextCallbackObject*>());
}
inline void System::Runtime::Remoting::Contexts::ContextCallbackObject::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::ContextCallbackObject*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Contexts::ContextCallbackObject::ContextCallbackObject() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
