#pragma once
#include "System/Security/Cryptography/zzzz__AsymmetricSignatureDeformatter_impl.hpp"
#include "System/Security/Cryptography/zzzz__DSASignatureDeformatter_def.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
#include "System/Security/Cryptography/zzzz__DSA_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::DSASignatureDeformatter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::DSASignatureDeformatter::*)()>(
    &::System::Security::Cryptography::DSASignatureDeformatter::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x245dd64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSASignatureDeformatter*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSASignatureDeformatter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::DSASignatureDeformatter::*)(
    ::System::Security::Cryptography::AsymmetricAlgorithm*)>(&::System::Security::Cryptography::DSASignatureDeformatter::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x245dde4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSASignatureDeformatter*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::AsymmetricAlgorithm*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSASignatureDeformatter.SetKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::DSASignatureDeformatter::*)(
    ::System::Security::Cryptography::AsymmetricAlgorithm*)>(&::System::Security::Cryptography::DSASignatureDeformatter::SetKey)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x245ded8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSASignatureDeformatter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSASignatureDeformatter*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSASignatureDeformatter.SetHashAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::DSASignatureDeformatter::*)(::StringW)>(
    &::System::Security::Cryptography::DSASignatureDeformatter::SetHashAlgorithm)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x245dfc4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSASignatureDeformatter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSASignatureDeformatter*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSASignatureDeformatter.VerifySignature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::Cryptography::DSASignatureDeformatter::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::System::Security::Cryptography::DSASignatureDeformatter::VerifySignature)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x245e094;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSASignatureDeformatter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSASignatureDeformatter*>::get(), 6));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::DSA*& System::Security::Cryptography::DSASignatureDeformatter::__get__dsaKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dsaKey;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::DSA*> const& System::Security::Cryptography::DSASignatureDeformatter::__get__dsaKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dsaKey;
}
constexpr void System::Security::Cryptography::DSASignatureDeformatter::__set__dsaKey(::System::Security::Cryptography::DSA* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dsaKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Security::Cryptography::DSASignatureDeformatter::__get__oid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oid;
}
constexpr ::StringW const& System::Security::Cryptography::DSASignatureDeformatter::__get__oid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oid;
}
constexpr void System::Security::Cryptography::DSASignatureDeformatter::__set__oid(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____oid)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Security::Cryptography::DSASignatureDeformatter* System::Security::Cryptography::DSASignatureDeformatter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Security::Cryptography::DSASignatureDeformatter*>());
}
inline void System::Security::Cryptography::DSASignatureDeformatter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSASignatureDeformatter*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::DSASignatureDeformatter* System::Security::Cryptography::DSASignatureDeformatter::New_ctor(::System::Security::Cryptography::AsymmetricAlgorithm* key) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Security::Cryptography::DSASignatureDeformatter*>(key));
}
inline void System::Security::Cryptography::DSASignatureDeformatter::_ctor(::System::Security::Cryptography::AsymmetricAlgorithm* key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSASignatureDeformatter*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::AsymmetricAlgorithm*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
inline void System::Security::Cryptography::DSASignatureDeformatter::SetKey(::System::Security::Cryptography::AsymmetricAlgorithm* key) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSASignatureDeformatter*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
inline void System::Security::Cryptography::DSASignatureDeformatter::SetHashAlgorithm(::StringW strName) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSASignatureDeformatter*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, strName);
}
inline bool System::Security::Cryptography::DSASignatureDeformatter::VerifySignature(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbHash, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbSignature) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSASignatureDeformatter*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, rgbHash, rgbSignature);
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::DSASignatureDeformatter::DSASignatureDeformatter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
