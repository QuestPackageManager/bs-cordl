#pragma once
// IWYU pragma private; include "System\Security\Cryptography\X509Certificates\X509ChainElement.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainStatusFlags_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainStatus_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainElement_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainStatusFlags_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainStatus_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainElement._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509ChainElement::*)(
    ::System::Security::Cryptography::X509Certificates::X509Certificate2*)>(&::System::Security::Cryptography::X509Certificates::X509ChainElement::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x63abb8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainElement*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainElement.get_Certificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2* (
    ::System::Security::Cryptography::X509Certificates::X509ChainElement::*)()>(&::System::Security::Cryptography::X509Certificates::X509ChainElement::get_Certificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63abba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainElement*>(), { "get_Certificate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainElement.get_ChainElementStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus> (
    ::System::Security::Cryptography::X509Certificates::X509ChainElement::*)()>(&::System::Security::Cryptography::X509Certificates::X509ChainElement::get_ChainElementStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63abbb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainElement*>(), { "get_ChainElementStatus", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainElement.get_StatusFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags (
    ::System::Security::Cryptography::X509Certificates::X509ChainElement::*)()>(&::System::Security::Cryptography::X509Certificates::X509ChainElement::get_StatusFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63abbb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainElement*>(), { "get_StatusFlags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainElement.set_StatusFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509ChainElement::*)(
    ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags)>(&::System::Security::Cryptography::X509Certificates::X509ChainElement::set_StatusFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63abbc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainElement*>(),
                                                             { "set_StatusFlags", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainElement.Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::X509Certificates::X509ChainElement::*)(
    ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags)>(&::System::Security::Cryptography::X509Certificates::X509ChainElement::Count)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x63abbc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainElement*>(),
                                                             { "Count", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainElement.Set
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509ChainElement::*)(
    ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus>, ::by_ref<int32_t>, ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags,
    ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags)>(&::System::Security::Cryptography::X509Certificates::X509ChainElement::Set)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x63abbec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainElement*>(),
                                                             { "Set",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                                 ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>(),
                                                                 ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainElement.UncompressFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509ChainElement::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509ChainElement::UncompressFlags)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x63abc70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainElement*>(), { "UncompressFlags", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2*& System::Security::Cryptography::X509Certificates::X509ChainElement::__cordl_internal_get_certificate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificate;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2* const& System::Security::Cryptography::X509Certificates::X509ChainElement::__cordl_internal_get_certificate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificate;
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainElement::__cordl_internal_set_certificate(::System::Security::Cryptography::X509Certificates::X509Certificate2* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certificate = value;
}
constexpr ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus>& System::Security::Cryptography::X509Certificates::X509ChainElement::__cordl_internal_get_status() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status;
}
constexpr ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus> const& System::Security::Cryptography::X509Certificates::X509ChainElement::__cordl_internal_get_status() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status;
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainElement::__cordl_internal_set_status(::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___status = value;
}
constexpr ::StringW& System::Security::Cryptography::X509Certificates::X509ChainElement::__cordl_internal_get_info() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___info;
}
constexpr ::StringW const& System::Security::Cryptography::X509Certificates::X509ChainElement::__cordl_internal_get_info() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___info;
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainElement::__cordl_internal_set_info(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___info = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags& System::Security::Cryptography::X509Certificates::X509ChainElement::__cordl_internal_get_compressed_status_flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compressed_status_flags;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const&
System::Security::Cryptography::X509Certificates::X509ChainElement::__cordl_internal_get_compressed_status_flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compressed_status_flags;
}
constexpr void
System::Security::Cryptography::X509Certificates::X509ChainElement::__cordl_internal_set_compressed_status_flags(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___compressed_status_flags = value;
}
inline void System::Security::Cryptography::X509Certificates::X509ChainElement::_ctor(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainElement*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certificate);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* System::Security::Cryptography::X509Certificates::X509ChainElement::get_Certificate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainElement*>(), { "get_Certificate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(this, ___internal_method);
}
inline ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus> System::Security::Cryptography::X509Certificates::X509ChainElement::get_ChainElementStatus() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainElement*>(), { "get_ChainElementStatus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus>>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags System::Security::Cryptography::X509Certificates::X509ChainElement::get_StatusFlags() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainElement*>(), { "get_StatusFlags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>(this, ___internal_method);
}
inline void System::Security::Cryptography::X509Certificates::X509ChainElement::set_StatusFlags(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainElement*>(),
                                                           { "set_StatusFlags", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Security::Cryptography::X509Certificates::X509ChainElement::Count(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainElement*>(),
                                                           { "Count", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, flags);
}
inline void System::Security::Cryptography::X509Certificates::X509ChainElement::Set(::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus> status, ::by_ref<int32_t> position,
                                                                                    ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags flags,
                                                                                    ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags mask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainElement*>(),
                                                           { "Set",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                               ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>(),
                                                               ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, status, position, flags, mask);
}
inline void System::Security::Cryptography::X509Certificates::X509ChainElement::UncompressFlags() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainElement*>(), { "UncompressFlags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509ChainElement*
System::Security::Cryptography::X509Certificates::X509ChainElement::New_ctor(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X509ChainElement*>(certificate));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainElement::X509ChainElement() {}
