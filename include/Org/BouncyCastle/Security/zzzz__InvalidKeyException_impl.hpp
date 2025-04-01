#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Security/InvalidKeyException.hpp"
#include "Org/BouncyCastle/Security/zzzz__KeyException_impl.hpp"
#include "Org/BouncyCastle/Security/zzzz__InvalidKeyException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Security::InvalidKeyException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Security::InvalidKeyException::*)()>(
    &::Org::BouncyCastle::Security::InvalidKeyException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a70d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::InvalidKeyException*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::InvalidKeyException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Security::InvalidKeyException::*)(::StringW)>(
    &::Org::BouncyCastle::Security::InvalidKeyException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a70dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::InvalidKeyException*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::InvalidKeyException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Security::InvalidKeyException::*)(::StringW, ::System::Exception*)>(
    &::Org::BouncyCastle::Security::InvalidKeyException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a70e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::InvalidKeyException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Security::InvalidKeyException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::InvalidKeyException*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Security::InvalidKeyException::_ctor(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::InvalidKeyException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void Org::BouncyCastle::Security::InvalidKeyException::_ctor(::StringW message, ::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::InvalidKeyException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, exception);
}
inline ::Org::BouncyCastle::Security::InvalidKeyException* Org::BouncyCastle::Security::InvalidKeyException::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Security::InvalidKeyException*>());
}
inline ::Org::BouncyCastle::Security::InvalidKeyException* Org::BouncyCastle::Security::InvalidKeyException::New_ctor(::StringW message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Security::InvalidKeyException*>(message));
}
inline ::Org::BouncyCastle::Security::InvalidKeyException* Org::BouncyCastle::Security::InvalidKeyException::New_ctor(::StringW message, ::System::Exception* exception) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Security::InvalidKeyException*>(message, exception));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Security::InvalidKeyException::InvalidKeyException() {}
