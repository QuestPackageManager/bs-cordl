#pragma once
#include "System/Security/Cryptography/zzzz__SHA1_impl.hpp"
#include "System/Security/Cryptography/zzzz__SHA1CryptoServiceProvider_def.hpp"
#include "System/Security/Cryptography/zzzz__SHA1Internal_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::SHA1CryptoServiceProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::SHA1CryptoServiceProvider::*)()>(
    &::System::Security::Cryptography::SHA1CryptoServiceProvider::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x246e4d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::SHA1CryptoServiceProvider*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA1CryptoServiceProvider.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::SHA1CryptoServiceProvider::*)()>(
    &::System::Security::Cryptography::SHA1CryptoServiceProvider::Finalize)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x24747c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::SHA1CryptoServiceProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::SHA1CryptoServiceProvider*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA1CryptoServiceProvider.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::SHA1CryptoServiceProvider::*)(bool)>(
    &::System::Security::Cryptography::SHA1CryptoServiceProvider::Dispose)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2474864;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::SHA1CryptoServiceProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::SHA1CryptoServiceProvider*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA1CryptoServiceProvider.HashCore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::SHA1CryptoServiceProvider::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::System::Security::Cryptography::SHA1CryptoServiceProvider::HashCore)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2474870;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::SHA1CryptoServiceProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::SHA1CryptoServiceProvider*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA1CryptoServiceProvider.HashFinal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Security::Cryptography::SHA1CryptoServiceProvider::*)()>(
    &::System::Security::Cryptography::SHA1CryptoServiceProvider::HashFinal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2474894;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::SHA1CryptoServiceProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::SHA1CryptoServiceProvider*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA1CryptoServiceProvider.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::SHA1CryptoServiceProvider::*)()>(
    &::System::Security::Cryptography::SHA1CryptoServiceProvider::Initialize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x24748b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::SHA1CryptoServiceProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::SHA1CryptoServiceProvider*>::get(), 18));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::SHA1Internal*& System::Security::Cryptography::SHA1CryptoServiceProvider::__get_sha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sha;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::SHA1Internal*> const& System::Security::Cryptography::SHA1CryptoServiceProvider::__get_sha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sha;
}
constexpr void System::Security::Cryptography::SHA1CryptoServiceProvider::__set_sha(::System::Security::Cryptography::SHA1Internal* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sha)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Security::Cryptography::SHA1CryptoServiceProvider* System::Security::Cryptography::SHA1CryptoServiceProvider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Security::Cryptography::SHA1CryptoServiceProvider*>());
}
inline void System::Security::Cryptography::SHA1CryptoServiceProvider::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::SHA1CryptoServiceProvider*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::SHA1CryptoServiceProvider::Finalize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::SHA1CryptoServiceProvider*>::get(), "Finalize",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::SHA1CryptoServiceProvider::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::SHA1CryptoServiceProvider*>::get(), "Dispose",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void System::Security::Cryptography::SHA1CryptoServiceProvider::HashCore(::ArrayW<uint8_t, ::Array<uint8_t>*> rgb, int32_t ibStart, int32_t cbSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::SHA1CryptoServiceProvider*>::get(), "HashCore", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rgb, ibStart, cbSize);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Security::Cryptography::SHA1CryptoServiceProvider::HashFinal() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::SHA1CryptoServiceProvider*>::get(), "HashFinal",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::SHA1CryptoServiceProvider::Initialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::SHA1CryptoServiceProvider*>::get(), "Initialize",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::SHA1CryptoServiceProvider::SHA1CryptoServiceProvider() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
