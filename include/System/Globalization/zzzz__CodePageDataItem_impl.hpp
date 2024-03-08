#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Globalization/zzzz__CodePageDataItem_def.hpp"
//  Writing Method size for method: ::System::Globalization::CodePageDataItem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::CodePageDataItem::*)(int32_t)>(&::System::Globalization::CodePageDataItem::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x26c0c08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CodePageDataItem*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CodePageDataItem.CreateString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, uint32_t)>(&::System::Globalization::CodePageDataItem::CreateString)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x26c0cac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CodePageDataItem*>::get(), "CreateString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CodePageDataItem.get_WebName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::CodePageDataItem::*)()>(
    &::System::Globalization::CodePageDataItem::get_WebName)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x26c0d60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CodePageDataItem*>::get(), "get_WebName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_webName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
inline void System::Globalization::CodePageDataItem::setStaticF_sep(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t, ::Array<char16_t>*>, "sep", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CodePageDataItem*>::get>(
      std::forward<::ArrayW<char16_t, ::Array<char16_t>*>>(value));
}
inline ::ArrayW<char16_t, ::Array<char16_t>*> System::Globalization::CodePageDataItem::getStaticF_sep() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t, ::Array<char16_t>*>, "sep", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CodePageDataItem*>::get>();
}
inline ::System::Globalization::CodePageDataItem* System::Globalization::CodePageDataItem::New_ctor(int32_t dataIndex) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Globalization::CodePageDataItem*>(dataIndex));
}
inline void System::Globalization::CodePageDataItem::_ctor(int32_t dataIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CodePageDataItem*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataIndex);
}
inline ::StringW System::Globalization::CodePageDataItem::CreateString(::StringW pStrings, uint32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CodePageDataItem*>::get(), "CreateString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, pStrings, index);
}
inline ::StringW System::Globalization::CodePageDataItem::get_WebName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CodePageDataItem*>::get(), "get_WebName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Globalization::CodePageDataItem::CodePageDataItem() {}
