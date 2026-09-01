#pragma once
// IWYU pragma private; include "Mono\Unity\X509ChainImplUnityTls.hpp"
#include "Mono/Unity/zzzz__UnityTls_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainImpl_impl.hpp"
#include "Mono/Unity/zzzz__X509ChainImplUnityTls_def.hpp"
#include "Mono/Unity/zzzz__UnityTls_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainElementCollection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainPolicy_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainStatusFlags_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainStatus_def.hpp"
//  Writing Method size for method: ::Mono::Unity::X509ChainImplUnityTls._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::X509ChainImplUnityTls::*)(::Mono::Unity::UnityTls_unitytls_x509list_ref, bool)>(
    &::Mono::Unity::X509ChainImplUnityTls::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5fd4a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Unity::X509ChainImplUnityTls*>(), { ".ctor", {}, { ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_x509list_ref>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::X509ChainImplUnityTls._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::X509ChainImplUnityTls::*)(::Mono::Unity::UnityTls_unitytls_x509list*, ::Mono::Unity::UnityTls_unitytls_errorstate*, bool)>(
    &::Mono::Unity::X509ChainImplUnityTls::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5fd5edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Mono::Unity::X509ChainImplUnityTls*>(),
                         { ".ctor", {}, { ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_x509list*>(), ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_errorstate*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::X509ChainImplUnityTls.get_IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Unity::X509ChainImplUnityTls::*)()>(&::Mono::Unity::X509ChainImplUnityTls::get_IsValid)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5fd6128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Unity::X509ChainImplUnityTls*>(), { ::i2c::class_of<::Mono::Unity::X509ChainImplUnityTls*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::X509ChainImplUnityTls.get_NativeCertificateChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Unity::UnityTls_unitytls_x509list_ref (::Mono::Unity::X509ChainImplUnityTls::*)()>(
    &::Mono::Unity::X509ChainImplUnityTls::get_NativeCertificateChain)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd6150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Unity::X509ChainImplUnityTls*>(), { "get_NativeCertificateChain", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::X509ChainImplUnityTls.get_ChainElements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* (::Mono::Unity::X509ChainImplUnityTls::*)()>(
    &::Mono::Unity::X509ChainImplUnityTls::get_ChainElements)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x5fd6158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Unity::X509ChainImplUnityTls*>(), { ::i2c::class_of<::Mono::Unity::X509ChainImplUnityTls*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::X509ChainImplUnityTls.AddStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::X509ChainImplUnityTls::*)(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags)>(
    &::Mono::Unity::X509ChainImplUnityTls::AddStatus)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5fd6418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Unity::X509ChainImplUnityTls*>(), { ::i2c::class_of<::Mono::Unity::X509ChainImplUnityTls*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::X509ChainImplUnityTls.get_ChainPolicy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509ChainPolicy* (::Mono::Unity::X509ChainImplUnityTls::*)()>(
    &::Mono::Unity::X509ChainImplUnityTls::get_ChainPolicy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd6534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Unity::X509ChainImplUnityTls*>(), { ::i2c::class_of<::Mono::Unity::X509ChainImplUnityTls*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::X509ChainImplUnityTls.Build
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Unity::X509ChainImplUnityTls::*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*)>(
    &::Mono::Unity::X509ChainImplUnityTls::Build)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd653c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Unity::X509ChainImplUnityTls*>(), { ::i2c::class_of<::Mono::Unity::X509ChainImplUnityTls*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::X509ChainImplUnityTls.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::X509ChainImplUnityTls::*)()>(&::Mono::Unity::X509ChainImplUnityTls::Reset)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5fd6544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Unity::X509ChainImplUnityTls*>(), { ::i2c::class_of<::Mono::Unity::X509ChainImplUnityTls*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::X509ChainImplUnityTls.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::X509ChainImplUnityTls::*)(bool)>(&::Mono::Unity::X509ChainImplUnityTls::Dispose)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fd65c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Unity::X509ChainImplUnityTls*>(), { ::i2c::class_of<::Mono::Unity::X509ChainImplUnityTls*>(), 11 }));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainElementCollection*& Mono::Unity::X509ChainImplUnityTls::__cordl_internal_get_elements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elements;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* const& Mono::Unity::X509ChainImplUnityTls::__cordl_internal_get_elements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elements;
}
constexpr void Mono::Unity::X509ChainImplUnityTls::__cordl_internal_set_elements(::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elements = value;
}
constexpr ::Mono::Unity::UnityTls_unitytls_x509list*& Mono::Unity::X509ChainImplUnityTls::__cordl_internal_get_ownedList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ownedList;
}
constexpr ::Mono::Unity::UnityTls_unitytls_x509list* const& Mono::Unity::X509ChainImplUnityTls::__cordl_internal_get_ownedList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ownedList;
}
constexpr void Mono::Unity::X509ChainImplUnityTls::__cordl_internal_set_ownedList(::Mono::Unity::UnityTls_unitytls_x509list* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ownedList = value;
}
constexpr ::Mono::Unity::UnityTls_unitytls_x509list_ref& Mono::Unity::X509ChainImplUnityTls::__cordl_internal_get_nativeCertificateChain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nativeCertificateChain;
}
constexpr ::Mono::Unity::UnityTls_unitytls_x509list_ref const& Mono::Unity::X509ChainImplUnityTls::__cordl_internal_get_nativeCertificateChain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nativeCertificateChain;
}
constexpr void Mono::Unity::X509ChainImplUnityTls::__cordl_internal_set_nativeCertificateChain(::Mono::Unity::UnityTls_unitytls_x509list_ref value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nativeCertificateChain = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainPolicy*& Mono::Unity::X509ChainImplUnityTls::__cordl_internal_get_policy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___policy;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainPolicy* const& Mono::Unity::X509ChainImplUnityTls::__cordl_internal_get_policy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___policy;
}
constexpr void Mono::Unity::X509ChainImplUnityTls::__cordl_internal_set_policy(::System::Security::Cryptography::X509Certificates::X509ChainPolicy* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___policy = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*& Mono::Unity::X509ChainImplUnityTls::__cordl_internal_get_chainStatusList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chainStatusList;
}
constexpr ::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509ChainStatus>* const&
Mono::Unity::X509ChainImplUnityTls::__cordl_internal_get_chainStatusList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chainStatusList;
}
constexpr void
Mono::Unity::X509ChainImplUnityTls::__cordl_internal_set_chainStatusList(::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509ChainStatus>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chainStatusList = value;
}
constexpr bool& Mono::Unity::X509ChainImplUnityTls::__cordl_internal_get_reverseOrder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reverseOrder;
}
constexpr bool const& Mono::Unity::X509ChainImplUnityTls::__cordl_internal_get_reverseOrder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reverseOrder;
}
constexpr void Mono::Unity::X509ChainImplUnityTls::__cordl_internal_set_reverseOrder(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reverseOrder = value;
}
inline void Mono::Unity::X509ChainImplUnityTls::_ctor(::Mono::Unity::UnityTls_unitytls_x509list_ref nativeCertificateChain, bool reverseOrder) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Mono::Unity::X509ChainImplUnityTls*>(), { ".ctor", {}, { ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_x509list_ref>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nativeCertificateChain, reverseOrder);
}
inline void Mono::Unity::X509ChainImplUnityTls::_ctor(::Mono::Unity::UnityTls_unitytls_x509list* ownedList, ::Mono::Unity::UnityTls_unitytls_errorstate* errorState, bool reverseOrder) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Mono::Unity::X509ChainImplUnityTls*>(),
                          { ".ctor", {}, { ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_x509list*>(), ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_errorstate*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ownedList, errorState, reverseOrder);
}
inline bool Mono::Unity::X509ChainImplUnityTls::get_IsValid() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Unity::X509ChainImplUnityTls*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Mono::Unity::UnityTls_unitytls_x509list_ref Mono::Unity::X509ChainImplUnityTls::get_NativeCertificateChain() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Unity::X509ChainImplUnityTls*>(), { "get_NativeCertificateChain", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Unity::UnityTls_unitytls_x509list_ref>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* Mono::Unity::X509ChainImplUnityTls::get_ChainElements() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Unity::X509ChainImplUnityTls*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509ChainElementCollection*>(this, ___internal_method);
}
inline void Mono::Unity::X509ChainImplUnityTls::AddStatus(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags error) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Unity::X509ChainImplUnityTls*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline ::System::Security::Cryptography::X509Certificates::X509ChainPolicy* Mono::Unity::X509ChainImplUnityTls::get_ChainPolicy() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Unity::X509ChainImplUnityTls*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509ChainPolicy*>(this, ___internal_method);
}
inline bool Mono::Unity::X509ChainImplUnityTls::Build(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Unity::X509ChainImplUnityTls*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, certificate);
}
inline void Mono::Unity::X509ChainImplUnityTls::Reset() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Unity::X509ChainImplUnityTls*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Unity::X509ChainImplUnityTls::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Unity::X509ChainImplUnityTls*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::Mono::Unity::X509ChainImplUnityTls* Mono::Unity::X509ChainImplUnityTls::New_ctor(::Mono::Unity::UnityTls_unitytls_x509list_ref nativeCertificateChain, bool reverseOrder) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Unity::X509ChainImplUnityTls*>(nativeCertificateChain, reverseOrder));
}
inline ::Mono::Unity::X509ChainImplUnityTls* Mono::Unity::X509ChainImplUnityTls::New_ctor(::Mono::Unity::UnityTls_unitytls_x509list* ownedList, ::Mono::Unity::UnityTls_unitytls_errorstate* errorState,
                                                                                          bool reverseOrder) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Unity::X509ChainImplUnityTls*>(ownedList, errorState, reverseOrder));
}
// Ctor Parameters []
constexpr ::Mono::Unity::X509ChainImplUnityTls::X509ChainImplUnityTls() {}
