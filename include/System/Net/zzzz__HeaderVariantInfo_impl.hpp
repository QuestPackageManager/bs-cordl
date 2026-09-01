#pragma once
// IWYU pragma private; include "System\Net\HeaderVariantInfo.hpp"
#include "System/Net/zzzz__CookieVariant_impl.hpp"
#include "System/Net/zzzz__HeaderVariantInfo_def.hpp"
#include "System/Net/zzzz__CookieVariant_def.hpp"
//  Writing Method size for method: ::System::Net::HeaderVariantInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HeaderVariantInfo::*)(::StringW, ::System::Net::CookieVariant)>(&::System::Net::HeaderVariantInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x641d264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::HeaderVariantInfo>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::CookieVariant>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HeaderVariantInfo.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::HeaderVariantInfo::*)()>(&::System::Net::HeaderVariantInfo::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x641d270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HeaderVariantInfo>(), { "get_Name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HeaderVariantInfo.get_Variant
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::CookieVariant (::System::Net::HeaderVariantInfo::*)()>(&::System::Net::HeaderVariantInfo::get_Variant)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x641d278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HeaderVariantInfo>(), { "get_Variant", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Net::HeaderVariantInfo::_ctor(::StringW name, ::System::Net::CookieVariant variant) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HeaderVariantInfo>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::CookieVariant>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name, variant);
}
inline ::StringW System::Net::HeaderVariantInfo::get_Name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HeaderVariantInfo>(), { "get_Name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::System::Net::CookieVariant System::Net::HeaderVariantInfo::get_Variant() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HeaderVariantInfo>(), { "get_Variant", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::CookieVariant>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_variant", ty: "::System::Net::CookieVariant", modifiers: "", def_value:
// Some("{}") }]
constexpr ::System::Net::HeaderVariantInfo::HeaderVariantInfo(::StringW m_name, ::System::Net::CookieVariant m_variant) noexcept {
  this->m_name = m_name;
  this->m_variant = m_variant;
}
// Ctor Parameters []
constexpr ::System::Net::HeaderVariantInfo::HeaderVariantInfo() {}
