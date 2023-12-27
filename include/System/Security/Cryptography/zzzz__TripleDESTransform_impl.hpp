#pragma once
#include "Mono/Security/Cryptography/zzzz__SymmetricTransform_impl.hpp"
#include "System/Security/Cryptography/zzzz__TripleDESTransform_def.hpp"
#include "System/Security/Cryptography/zzzz__TripleDES_def.hpp"
#include "System/Security/Cryptography/zzzz__DESTransform_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::TripleDESTransform._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::TripleDESTransform::*)(
    ::System::Security::Cryptography::TripleDES*, bool, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::System::Security::Cryptography::TripleDESTransform::_ctor)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x246b81c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::TripleDESTransform*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::TripleDES*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::TripleDESTransform.ECB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::TripleDESTransform::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::System::Security::Cryptography::TripleDESTransform::ECB)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2474970;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::TripleDESTransform*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::TripleDESTransform*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::TripleDESTransform.GetStrongKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)()>(&::System::Security::Cryptography::TripleDESTransform::GetStrongKey)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x24748cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::TripleDESTransform*>::get(),
                                                                               "GetStrongKey", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::DESTransform*& System::Security::Cryptography::TripleDESTransform::__get_E1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___E1;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::DESTransform*> const& System::Security::Cryptography::TripleDESTransform::__get_E1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___E1;
}
constexpr void System::Security::Cryptography::TripleDESTransform::__set_E1(::System::Security::Cryptography::DESTransform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___E1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Cryptography::DESTransform*& System::Security::Cryptography::TripleDESTransform::__get_D2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___D2;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::DESTransform*> const& System::Security::Cryptography::TripleDESTransform::__get_D2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___D2;
}
constexpr void System::Security::Cryptography::TripleDESTransform::__set_D2(::System::Security::Cryptography::DESTransform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___D2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Cryptography::DESTransform*& System::Security::Cryptography::TripleDESTransform::__get_E3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___E3;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::DESTransform*> const& System::Security::Cryptography::TripleDESTransform::__get_E3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___E3;
}
constexpr void System::Security::Cryptography::TripleDESTransform::__set_E3(::System::Security::Cryptography::DESTransform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___E3)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Cryptography::DESTransform*& System::Security::Cryptography::TripleDESTransform::__get_D1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___D1;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::DESTransform*> const& System::Security::Cryptography::TripleDESTransform::__get_D1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___D1;
}
constexpr void System::Security::Cryptography::TripleDESTransform::__set_D1(::System::Security::Cryptography::DESTransform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___D1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Cryptography::DESTransform*& System::Security::Cryptography::TripleDESTransform::__get_E2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___E2;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::DESTransform*> const& System::Security::Cryptography::TripleDESTransform::__get_E2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___E2;
}
constexpr void System::Security::Cryptography::TripleDESTransform::__set_E2(::System::Security::Cryptography::DESTransform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___E2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Cryptography::DESTransform*& System::Security::Cryptography::TripleDESTransform::__get_D3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___D3;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::DESTransform*> const& System::Security::Cryptography::TripleDESTransform::__get_D3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___D3;
}
constexpr void System::Security::Cryptography::TripleDESTransform::__set_D3(::System::Security::Cryptography::DESTransform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___D3)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Security::Cryptography::TripleDESTransform* System::Security::Cryptography::TripleDESTransform::New_ctor(::System::Security::Cryptography::TripleDES* algo, bool encryption,
                                                                                                                          ::ArrayW<uint8_t, ::Array<uint8_t>*> key,
                                                                                                                          ::ArrayW<uint8_t, ::Array<uint8_t>*> iv) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Security::Cryptography::TripleDESTransform*>(algo, encryption, key, iv));
}
inline void System::Security::Cryptography::TripleDESTransform::_ctor(::System::Security::Cryptography::TripleDES* algo, bool encryption, ::ArrayW<uint8_t, ::Array<uint8_t>*> key,
                                                                      ::ArrayW<uint8_t, ::Array<uint8_t>*> iv) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::TripleDESTransform*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::TripleDES*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, algo, encryption, key, iv);
}
inline void System::Security::Cryptography::TripleDESTransform::ECB(::ArrayW<uint8_t, ::Array<uint8_t>*> input, ::ArrayW<uint8_t, ::Array<uint8_t>*> output) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::TripleDESTransform*>::get(), "ECB", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input, output);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Security::Cryptography::TripleDESTransform::GetStrongKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::TripleDESTransform*>::get(),
                                                                             "GetStrongKey", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::TripleDESTransform::TripleDESTransform() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
