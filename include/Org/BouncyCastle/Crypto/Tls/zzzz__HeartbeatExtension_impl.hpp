#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__HeartbeatExtension_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::*)(uint8_t)>(
    &::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x11f0ee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension.get_Mode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::get_Mode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11f0f90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension.Encode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::Encode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x11f0f98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension* (*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::Parse)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x11f1004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension*>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
constexpr uint8_t& Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::__cordl_internal_get_mMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mMode;
}
constexpr uint8_t const& Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::__cordl_internal_get_mMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mMode;
}
constexpr void Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::__cordl_internal_set_mMode(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mMode = value;
}
inline ::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension* Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::New_ctor(uint8_t mode) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension*>(mode));
}
inline void Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::_ctor(uint8_t mode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mode);
}
inline uint8_t Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::get_Mode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::Encode(::System::IO::Stream* output) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, output);
}
inline ::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension* Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::Parse(::System::IO::Stream* input) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension*>::get(), "Parse",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension*, false>(nullptr, ___internal_method, input);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::HeartbeatExtension() {}
