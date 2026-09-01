#pragma once
// IWYU pragma private; include "System\Xml\XmlComplianceUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__XmlComplianceUtil_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlComplianceUtil.NonCDataNormalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Xml::XmlComplianceUtil::NonCDataNormalize)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x62da0c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlComplianceUtil*>(), { "NonCDataNormalize", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlComplianceUtil.CDataNormalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Xml::XmlComplianceUtil::CDataNormalize)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x62da3d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlComplianceUtil*>(), { "CDataNormalize", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline ::StringW System::Xml::XmlComplianceUtil::NonCDataNormalize(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlComplianceUtil*>(), { "NonCDataNormalize", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::XmlComplianceUtil::CDataNormalize(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlComplianceUtil*>(), { "CDataNormalize", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::System::Xml::XmlComplianceUtil::XmlComplianceUtil() {}
