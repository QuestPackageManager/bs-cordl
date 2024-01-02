#pragma once
#include "System/Security/Cryptography/zzzz__HashAlgorithm_impl.hpp"
#include "System/Security/Cryptography/zzzz__KeyedHashAlgorithm_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::KeyedHashAlgorithm._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::KeyedHashAlgorithm::*)()>(
    &::System::Security::Cryptography::KeyedHashAlgorithm::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x245e988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::KeyedHashAlgorithm*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::KeyedHashAlgorithm.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::KeyedHashAlgorithm::*)(bool)>(
    &::System::Security::Cryptography::KeyedHashAlgorithm::Dispose)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x245e930;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::KeyedHashAlgorithm*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::KeyedHashAlgorithm*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::KeyedHashAlgorithm.get_Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Security::Cryptography::KeyedHashAlgorithm::*)()>(
    &::System::Security::Cryptography::KeyedHashAlgorithm::get_Key)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x245f2d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::KeyedHashAlgorithm*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::KeyedHashAlgorithm*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::KeyedHashAlgorithm.set_Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::KeyedHashAlgorithm::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::System::Security::Cryptography::KeyedHashAlgorithm::set_Key)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x245f348;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::KeyedHashAlgorithm*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::KeyedHashAlgorithm*>::get(), 20));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Security::Cryptography::KeyedHashAlgorithm::__get_KeyValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___KeyValue;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Security::Cryptography::KeyedHashAlgorithm::__get_KeyValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___KeyValue;
}
constexpr void System::Security::Cryptography::KeyedHashAlgorithm::__set_KeyValue(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___KeyValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Security::Cryptography::KeyedHashAlgorithm* System::Security::Cryptography::KeyedHashAlgorithm::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Security::Cryptography::KeyedHashAlgorithm*>());
}
inline void System::Security::Cryptography::KeyedHashAlgorithm::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::KeyedHashAlgorithm*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::KeyedHashAlgorithm::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::KeyedHashAlgorithm*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Security::Cryptography::KeyedHashAlgorithm::get_Key() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::KeyedHashAlgorithm*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::KeyedHashAlgorithm::set_Key(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::KeyedHashAlgorithm*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::KeyedHashAlgorithm::KeyedHashAlgorithm() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
