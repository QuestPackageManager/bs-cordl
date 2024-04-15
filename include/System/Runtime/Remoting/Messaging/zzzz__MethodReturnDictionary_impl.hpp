#pragma once
#include "System/Runtime/Remoting/Messaging/zzzz__MessageDictionary_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__MethodReturnDictionary_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodReturnMessage_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodReturnDictionary._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::MethodReturnDictionary::*)(
    ::System::Runtime::Remoting::Messaging::IMethodReturnMessage*)>(&::System::Runtime::Remoting::Messaging::MethodReturnDictionary::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2733ae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodReturnDictionary*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMethodReturnMessage*>::get() })));
    return ___internal_method;
  }
};
inline void System::Runtime::Remoting::Messaging::MethodReturnDictionary::setStaticF_InternalReturnKeys(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "InternalReturnKeys",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodReturnDictionary*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Runtime::Remoting::Messaging::MethodReturnDictionary::getStaticF_InternalReturnKeys() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "InternalReturnKeys",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodReturnDictionary*>::get>();
}
inline void System::Runtime::Remoting::Messaging::MethodReturnDictionary::setStaticF_InternalExceptionKeys(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "InternalExceptionKeys",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodReturnDictionary*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Runtime::Remoting::Messaging::MethodReturnDictionary::getStaticF_InternalExceptionKeys() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "InternalExceptionKeys",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodReturnDictionary*>::get>();
}
inline ::System::Runtime::Remoting::Messaging::MethodReturnDictionary*
System::Runtime::Remoting::Messaging::MethodReturnDictionary::New_ctor(::System::Runtime::Remoting::Messaging::IMethodReturnMessage* message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Remoting::Messaging::MethodReturnDictionary*>(message));
}
inline void System::Runtime::Remoting::Messaging::MethodReturnDictionary::_ctor(::System::Runtime::Remoting::Messaging::IMethodReturnMessage* message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodReturnDictionary*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMethodReturnMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::MethodReturnDictionary::MethodReturnDictionary() {}
