#pragma once
// IWYU pragma private; include "System/Security/Cryptography/MACTripleDES.hpp"
#include "System/Security/Cryptography/zzzz__KeyedHashAlgorithm_impl.hpp"
#include "System/Security/Cryptography/zzzz__MACTripleDES_def.hpp"
#include "System/Security/Cryptography/zzzz__CryptoStream_def.hpp"
#include "System/Security/Cryptography/zzzz__ICryptoTransform_def.hpp"
#include "System/Security/Cryptography/zzzz__TailStream_def.hpp"
#include "System/Security/Cryptography/zzzz__TripleDES_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::MACTripleDES._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::MACTripleDES::*)()>(&::System::Security::Cryptography::MACTripleDES::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x58e5934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::MACTripleDES.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::MACTripleDES::*)()>(
    &::System::Security::Cryptography::MACTripleDES::Initialize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e5a60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::MACTripleDES.HashCore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::MACTripleDES::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Security::Cryptography::MACTripleDES::HashCore)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x58e5a68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::MACTripleDES.HashFinal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Security::Cryptography::MACTripleDES::*)()>(
    &::System::Security::Cryptography::MACTripleDES::HashFinal)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x58e5c5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::MACTripleDES.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::MACTripleDES::*)(bool)>(
    &::System::Security::Cryptography::MACTripleDES::Dispose)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x58e5e20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(), 12));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::ICryptoTransform*& System::Security::Cryptography::MACTripleDES::__cordl_internal_get_m_encryptor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_encryptor;
}
constexpr ::System::Security::Cryptography::ICryptoTransform* const& System::Security::Cryptography::MACTripleDES::__cordl_internal_get_m_encryptor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_encryptor;
}
constexpr void System::Security::Cryptography::MACTripleDES::__cordl_internal_set_m_encryptor(::System::Security::Cryptography::ICryptoTransform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_encryptor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Cryptography::CryptoStream*& System::Security::Cryptography::MACTripleDES::__cordl_internal_get__cs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cs;
}
constexpr ::System::Security::Cryptography::CryptoStream* const& System::Security::Cryptography::MACTripleDES::__cordl_internal_get__cs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cs;
}
constexpr void System::Security::Cryptography::MACTripleDES::__cordl_internal_set__cs(::System::Security::Cryptography::CryptoStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Cryptography::TailStream*& System::Security::Cryptography::MACTripleDES::__cordl_internal_get__ts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ts;
}
constexpr ::System::Security::Cryptography::TailStream* const& System::Security::Cryptography::MACTripleDES::__cordl_internal_get__ts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ts;
}
constexpr void System::Security::Cryptography::MACTripleDES::__cordl_internal_set__ts(::System::Security::Cryptography::TailStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Security::Cryptography::MACTripleDES::__cordl_internal_get_m_bytesPerBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_bytesPerBlock;
}
constexpr int32_t const& System::Security::Cryptography::MACTripleDES::__cordl_internal_get_m_bytesPerBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_bytesPerBlock;
}
constexpr void System::Security::Cryptography::MACTripleDES::__cordl_internal_set_m_bytesPerBlock(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_bytesPerBlock = value;
}
constexpr ::System::Security::Cryptography::TripleDES*& System::Security::Cryptography::MACTripleDES::__cordl_internal_get_des() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___des;
}
constexpr ::System::Security::Cryptography::TripleDES* const& System::Security::Cryptography::MACTripleDES::__cordl_internal_get_des() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___des;
}
constexpr void System::Security::Cryptography::MACTripleDES::__cordl_internal_set_des(::System::Security::Cryptography::TripleDES* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___des)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Security::Cryptography::MACTripleDES::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::MACTripleDES::Initialize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::MACTripleDES::HashCore(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbData, int32_t ibStart, int32_t cbSize) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rgbData, ibStart, cbSize);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Security::Cryptography::MACTripleDES::HashFinal() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::MACTripleDES::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline ::System::Security::Cryptography::MACTripleDES* System::Security::Cryptography::MACTripleDES::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Cryptography::MACTripleDES*>());
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::MACTripleDES::MACTripleDES() {}
