#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X509EnhancedKeyUsageExtension.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Extension_impl.hpp"
#include "System/Security/Cryptography/zzzz__AsnDecodeStatus_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509EnhancedKeyUsageExtension_def.hpp"
#include "System/Security/Cryptography/zzzz__AsnDecodeStatus_def.hpp"
#include "System/Security/Cryptography/zzzz__AsnEncodedData_def.hpp"
#include "System/Security/Cryptography/zzzz__OidCollection_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x63aa178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension::*)(
    ::System::Security::Cryptography::AsnEncodedData*, bool)>(&::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x63aa208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::AsnEncodedData*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension::*)(
    ::System::Security::Cryptography::OidCollection*, bool)>(&::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension::_ctor)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x63aa538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::OidCollection*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension.get_EnhancedKeyUsages
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::OidCollection* (::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension::get_EnhancedKeyUsages)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x63aa784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension*>(), { "get_EnhancedKeyUsages", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension.CopyFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension::*)(::System::Security::Cryptography::AsnEncodedData*)>(
    &::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension::CopyFrom)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x63aa888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension*>(),
                                                            { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension.Decode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::AsnDecodeStatus (::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension::*)(
    ::ArrayW<uint8_t>)>(&::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension::Decode)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x63aa2c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension*>(),
                                                                                           { "Decode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension::Encode)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x63aa6c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension*>(), { "Encode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension::*)(bool)>(
    &::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension::ToString)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x63aaa4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension*>(),
                                                            { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension*>(), 6 }));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::OidCollection*& System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension::__cordl_internal_get__enhKeyUsage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enhKeyUsage;
}
constexpr ::System::Security::Cryptography::OidCollection* const& System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension::__cordl_internal_get__enhKeyUsage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enhKeyUsage;
}
constexpr void System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension::__cordl_internal_set__enhKeyUsage(::System::Security::Cryptography::OidCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enhKeyUsage = value;
}
constexpr ::System::Security::Cryptography::AsnDecodeStatus& System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension::__cordl_internal_get__status() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____status;
}
constexpr ::System::Security::Cryptography::AsnDecodeStatus const& System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension::__cordl_internal_get__status() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____status;
}
constexpr void System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension::__cordl_internal_set__status(::System::Security::Cryptography::AsnDecodeStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____status = value;
}
inline void System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension::_ctor(::System::Security::Cryptography::AsnEncodedData* encodedEnhancedKeyUsages, bool critical) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::AsnEncodedData*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encodedEnhancedKeyUsages, critical);
}
inline void System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension::_ctor(::System::Security::Cryptography::OidCollection* enhancedKeyUsages, bool critical) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::OidCollection*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enhancedKeyUsages, critical);
}
inline ::System::Security::Cryptography::OidCollection* System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension::get_EnhancedKeyUsages() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension*>(), { "get_EnhancedKeyUsages", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::OidCollection*>(this, ___internal_method);
}
inline void System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension::CopyFrom(::System::Security::Cryptography::AsnEncodedData* asnEncodedData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asnEncodedData);
}
inline ::System::Security::Cryptography::AsnDecodeStatus System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension::Decode(::ArrayW<uint8_t> extension) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension*>(),
                                                                                         { "Decode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::AsnDecodeStatus>(this, ___internal_method, extension);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension::Encode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension*>(), { "Encode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension::ToString(bool multiLine) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, multiLine);
}
inline ::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension* System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension*>());
}
inline ::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension*
System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension::New_ctor(::System::Security::Cryptography::AsnEncodedData* encodedEnhancedKeyUsages, bool critical) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension*>(encodedEnhancedKeyUsages, critical));
}
inline ::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension*
System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension::New_ctor(::System::Security::Cryptography::OidCollection* enhancedKeyUsages, bool critical) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension*>(enhancedKeyUsages, critical));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension::X509EnhancedKeyUsageExtension() {}
