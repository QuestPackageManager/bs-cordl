#pragma once
#include "System/Security/Cryptography/zzzz__CryptographicException_impl.hpp"
#include "System/Security/Cryptography/zzzz__CryptographicUnexpectedOperationException_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::CryptographicUnexpectedOperationException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::CryptographicUnexpectedOperationException::*)()>(
    &::System::Security::Cryptography::CryptographicUnexpectedOperationException::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x245c218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptographicUnexpectedOperationException*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptographicUnexpectedOperationException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::CryptographicUnexpectedOperationException::*)(::StringW)>(
    &::System::Security::Cryptography::CryptographicUnexpectedOperationException::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x245b474;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptographicUnexpectedOperationException*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptographicUnexpectedOperationException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::CryptographicUnexpectedOperationException::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Security::Cryptography::CryptographicUnexpectedOperationException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x245c23c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptographicUnexpectedOperationException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
inline ::System::Security::Cryptography::CryptographicUnexpectedOperationException* System::Security::Cryptography::CryptographicUnexpectedOperationException::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Security::Cryptography::CryptographicUnexpectedOperationException*>());
}
inline void System::Security::Cryptography::CryptographicUnexpectedOperationException::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptographicUnexpectedOperationException*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::CryptographicUnexpectedOperationException* System::Security::Cryptography::CryptographicUnexpectedOperationException::New_ctor(::StringW message) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Security::Cryptography::CryptographicUnexpectedOperationException*>(message));
}
inline void System::Security::Cryptography::CryptographicUnexpectedOperationException::_ctor(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptographicUnexpectedOperationException*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline ::System::Security::Cryptography::CryptographicUnexpectedOperationException*
System::Security::Cryptography::CryptographicUnexpectedOperationException::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                    ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Security::Cryptography::CryptographicUnexpectedOperationException*>(info, context));
}
inline void System::Security::Cryptography::CryptographicUnexpectedOperationException::_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                             ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptographicUnexpectedOperationException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::CryptographicUnexpectedOperationException::CryptographicUnexpectedOperationException() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
