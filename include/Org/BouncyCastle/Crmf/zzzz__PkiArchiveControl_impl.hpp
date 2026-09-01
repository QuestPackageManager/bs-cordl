#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crmf\PkiArchiveControl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__PkiArchiveControl_def.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__PkiArchiveOptions_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsEnvelopedData_def.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__IControl_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::PkiArchiveControl._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crmf::PkiArchiveControl::*)(::Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions*)>(
    &::Org::BouncyCastle::Crmf::PkiArchiveControl::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36d80a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PkiArchiveControl*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::PkiArchiveControl.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (::Org::BouncyCastle::Crmf::PkiArchiveControl::*)()>(
    &::Org::BouncyCastle::Crmf::PkiArchiveControl::get_Type)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x36db4b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PkiArchiveControl*>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::PkiArchiveControl.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Encodable* (::Org::BouncyCastle::Crmf::PkiArchiveControl::*)()>(
    &::Org::BouncyCastle::Crmf::PkiArchiveControl::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36db510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PkiArchiveControl*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::PkiArchiveControl.get_ArchiveType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crmf::PkiArchiveControl::*)()>(&::Org::BouncyCastle::Crmf::PkiArchiveControl::get_ArchiveType)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x36db518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PkiArchiveControl*>(), { "get_ArchiveType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::PkiArchiveControl.get_EnvelopedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crmf::PkiArchiveControl::*)()>(&::Org::BouncyCastle::Crmf::PkiArchiveControl::get_EnvelopedData)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x36db534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PkiArchiveControl*>(), { "get_EnvelopedData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::PkiArchiveControl.GetEnvelopedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cms::CmsEnvelopedData* (::Org::BouncyCastle::Crmf::PkiArchiveControl::*)()>(
    &::Org::BouncyCastle::Crmf::PkiArchiveControl::GetEnvelopedData)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x36db578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PkiArchiveControl*>(), { "GetEnvelopedData", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions*& Org::BouncyCastle::Crmf::PkiArchiveControl::__cordl_internal_get_pkiArchiveOptions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pkiArchiveOptions;
}
constexpr ::Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions* const& Org::BouncyCastle::Crmf::PkiArchiveControl::__cordl_internal_get_pkiArchiveOptions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pkiArchiveOptions;
}
constexpr void Org::BouncyCastle::Crmf::PkiArchiveControl::__cordl_internal_set_pkiArchiveOptions(::Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pkiArchiveOptions = value;
}
inline void Org::BouncyCastle::Crmf::PkiArchiveControl::setStaticF_encryptedPrivKey(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "encryptedPrivKey", ::Org::BouncyCastle::Crmf::PkiArchiveControl*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crmf::PkiArchiveControl::getStaticF_encryptedPrivKey() {
  return ::cordl_internals::getStaticField<int32_t, "encryptedPrivKey", ::Org::BouncyCastle::Crmf::PkiArchiveControl*>();
}
inline void Org::BouncyCastle::Crmf::PkiArchiveControl::setStaticF_keyGenParameters(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "keyGenParameters", ::Org::BouncyCastle::Crmf::PkiArchiveControl*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crmf::PkiArchiveControl::getStaticF_keyGenParameters() {
  return ::cordl_internals::getStaticField<int32_t, "keyGenParameters", ::Org::BouncyCastle::Crmf::PkiArchiveControl*>();
}
inline void Org::BouncyCastle::Crmf::PkiArchiveControl::setStaticF_archiveRemGenPrivKey(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "archiveRemGenPrivKey", ::Org::BouncyCastle::Crmf::PkiArchiveControl*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crmf::PkiArchiveControl::getStaticF_archiveRemGenPrivKey() {
  return ::cordl_internals::getStaticField<int32_t, "archiveRemGenPrivKey", ::Org::BouncyCastle::Crmf::PkiArchiveControl*>();
}
inline void Org::BouncyCastle::Crmf::PkiArchiveControl::setStaticF_type(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "type", ::Org::BouncyCastle::Crmf::PkiArchiveControl*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Crmf::PkiArchiveControl::getStaticF_type() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "type", ::Org::BouncyCastle::Crmf::PkiArchiveControl*>();
}
inline void Org::BouncyCastle::Crmf::PkiArchiveControl::_ctor(::Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions* pkiArchiveOptions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PkiArchiveControl*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pkiArchiveOptions);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Crmf::PkiArchiveControl::get_Type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PkiArchiveControl*>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* Org::BouncyCastle::Crmf::PkiArchiveControl::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PkiArchiveControl*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Encodable*>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crmf::PkiArchiveControl::get_ArchiveType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PkiArchiveControl*>(), { "get_ArchiveType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crmf::PkiArchiveControl::get_EnvelopedData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PkiArchiveControl*>(), { "get_EnvelopedData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::CmsEnvelopedData* Org::BouncyCastle::Crmf::PkiArchiveControl::GetEnvelopedData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PkiArchiveControl*>(), { "GetEnvelopedData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::CmsEnvelopedData*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crmf::PkiArchiveControl* Org::BouncyCastle::Crmf::PkiArchiveControl::New_ctor(::Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions* pkiArchiveOptions) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crmf::PkiArchiveControl*>(pkiArchiveOptions));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crmf::IControl"
constexpr Org::BouncyCastle::Crmf::PkiArchiveControl::operator ::Org::BouncyCastle::Crmf::IControl*() noexcept {
  return static_cast<::Org::BouncyCastle::Crmf::IControl*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crmf::IControl"
constexpr ::Org::BouncyCastle::Crmf::IControl* Org::BouncyCastle::Crmf::PkiArchiveControl::i___Org__BouncyCastle__Crmf__IControl() noexcept {
  return static_cast<::Org::BouncyCastle::Crmf::IControl*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crmf::PkiArchiveControl::PkiArchiveControl() {}
