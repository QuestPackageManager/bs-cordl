#pragma once
// IWYU pragma private; include "System\Globalization\CodePageDataItem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Globalization/zzzz__CodePageDataItem_def.hpp"
//  Writing Method size for method: ::System::Globalization::CodePageDataItem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::CodePageDataItem::*)(int32_t)>(&::System::Globalization::CodePageDataItem::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5bd2f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CodePageDataItem*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CodePageDataItem.CreateString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, uint32_t)>(&::System::Globalization::CodePageDataItem::CreateString)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5bd2fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CodePageDataItem*>(), { "CreateString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CodePageDataItem.get_WebName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::CodePageDataItem::*)()>(&::System::Globalization::CodePageDataItem::get_WebName)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5bd30b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CodePageDataItem*>(), { "get_WebName", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Globalization::CodePageDataItem::__cordl_internal_get_m_dataIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_dataIndex;
}
constexpr int32_t const& System::Globalization::CodePageDataItem::__cordl_internal_get_m_dataIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_dataIndex;
}
constexpr void System::Globalization::CodePageDataItem::__cordl_internal_set_m_dataIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_dataIndex = value;
}
constexpr int32_t& System::Globalization::CodePageDataItem::__cordl_internal_get_m_uiFamilyCodePage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_uiFamilyCodePage;
}
constexpr int32_t const& System::Globalization::CodePageDataItem::__cordl_internal_get_m_uiFamilyCodePage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_uiFamilyCodePage;
}
constexpr void System::Globalization::CodePageDataItem::__cordl_internal_set_m_uiFamilyCodePage(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_uiFamilyCodePage = value;
}
constexpr ::StringW& System::Globalization::CodePageDataItem::__cordl_internal_get_m_webName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_webName;
}
constexpr ::StringW const& System::Globalization::CodePageDataItem::__cordl_internal_get_m_webName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_webName;
}
constexpr void System::Globalization::CodePageDataItem::__cordl_internal_set_m_webName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_webName = value;
}
constexpr uint32_t& System::Globalization::CodePageDataItem::__cordl_internal_get_m_flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_flags;
}
constexpr uint32_t const& System::Globalization::CodePageDataItem::__cordl_internal_get_m_flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_flags;
}
constexpr void System::Globalization::CodePageDataItem::__cordl_internal_set_m_flags(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_flags = value;
}
inline void System::Globalization::CodePageDataItem::setStaticF_sep(::ArrayW<char16_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t>, "sep", ::System::Globalization::CodePageDataItem*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> System::Globalization::CodePageDataItem::getStaticF_sep() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "sep", ::System::Globalization::CodePageDataItem*>();
}
inline void System::Globalization::CodePageDataItem::_ctor(int32_t dataIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CodePageDataItem*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataIndex);
}
inline ::StringW System::Globalization::CodePageDataItem::CreateString(::StringW pStrings, uint32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CodePageDataItem*>(), { "CreateString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, pStrings, index);
}
inline ::StringW System::Globalization::CodePageDataItem::get_WebName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CodePageDataItem*>(), { "get_WebName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Globalization::CodePageDataItem* System::Globalization::CodePageDataItem::New_ctor(int32_t dataIndex) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Globalization::CodePageDataItem*>(dataIndex));
}
// Ctor Parameters []
constexpr ::System::Globalization::CodePageDataItem::CodePageDataItem() {}
