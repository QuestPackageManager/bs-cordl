#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\X509\Qualified\TypeOfBiometricData.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/Qualified/zzzz__TypeOfBiometricData_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Choice_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData::GetInstance)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x3557c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData::*)(int32_t)>(
    &::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x3559818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35598f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData.get_IsPredefined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData::*)()>(
    &::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData::get_IsPredefined)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3559900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData*>(), { "get_IsPredefined", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData.get_PredefinedBiometricType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData::*)()>(
    &::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData::get_PredefinedBiometricType)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3559980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData*>(), { "get_PredefinedBiometricType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData.get_BiometricDataOid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData::*)()>(
    &::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData::get_BiometricDataOid)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3559a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData*>(), { "get_BiometricDataOid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData::*)()>(
    &::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData::ToAsn1Object)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3559a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData::__cordl_internal_get_obj() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable* const& Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData::__cordl_internal_get_obj() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj;
}
constexpr void Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData::__cordl_internal_set_obj(::Org::BouncyCastle::Asn1::Asn1Encodable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___obj = value;
}
inline ::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData* Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData::GetInstance(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData::_ctor(int32_t predefinedBiometricType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, predefinedBiometricType);
}
inline void Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData::_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* biometricDataOid) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, biometricDataOid);
}
inline bool Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData::get_IsPredefined() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData*>(), { "get_IsPredefined", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData::get_PredefinedBiometricType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData*>(), { "get_PredefinedBiometricType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData::get_BiometricDataOid() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData*>(), { "get_BiometricDataOid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData* Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData::New_ctor(int32_t predefinedBiometricType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData*>(predefinedBiometricType));
}
inline ::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData*
Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData::New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* biometricDataOid) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData*>(biometricDataOid));
}
/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData::operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Choice*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData::i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Choice*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData::TypeOfBiometricData() {}
