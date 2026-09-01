#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Utilities\EnumInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__EnumInfo_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::EnumInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Utilities::EnumInfo::*)(bool, ::ArrayW<uint64_t>, ::ArrayW<::StringW>, ::ArrayW<::StringW>)>(
    &::Newtonsoft::Json::Utilities::EnumInfo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d26370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::EnumInfo*>(),
                            { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint64_t>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
constexpr bool& Newtonsoft::Json::Utilities::EnumInfo::__cordl_internal_get_IsFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsFlags;
}
constexpr bool const& Newtonsoft::Json::Utilities::EnumInfo::__cordl_internal_get_IsFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsFlags;
}
constexpr void Newtonsoft::Json::Utilities::EnumInfo::__cordl_internal_set_IsFlags(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IsFlags = value;
}
constexpr ::ArrayW<uint64_t>& Newtonsoft::Json::Utilities::EnumInfo::__cordl_internal_get_Values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Values;
}
constexpr ::ArrayW<uint64_t> const& Newtonsoft::Json::Utilities::EnumInfo::__cordl_internal_get_Values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Values;
}
constexpr void Newtonsoft::Json::Utilities::EnumInfo::__cordl_internal_set_Values(::ArrayW<uint64_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Values = value;
}
constexpr ::ArrayW<::StringW>& Newtonsoft::Json::Utilities::EnumInfo::__cordl_internal_get_Names() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Names;
}
constexpr ::ArrayW<::StringW> const& Newtonsoft::Json::Utilities::EnumInfo::__cordl_internal_get_Names() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Names;
}
constexpr void Newtonsoft::Json::Utilities::EnumInfo::__cordl_internal_set_Names(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Names = value;
}
constexpr ::ArrayW<::StringW>& Newtonsoft::Json::Utilities::EnumInfo::__cordl_internal_get_ResolvedNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ResolvedNames;
}
constexpr ::ArrayW<::StringW> const& Newtonsoft::Json::Utilities::EnumInfo::__cordl_internal_get_ResolvedNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ResolvedNames;
}
constexpr void Newtonsoft::Json::Utilities::EnumInfo::__cordl_internal_set_ResolvedNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ResolvedNames = value;
}
inline void Newtonsoft::Json::Utilities::EnumInfo::_ctor(bool isFlags, ::ArrayW<uint64_t> values, ::ArrayW<::StringW> names, ::ArrayW<::StringW> resolvedNames) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::EnumInfo*>(),
                          { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint64_t>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isFlags, values, names, resolvedNames);
}
inline ::Newtonsoft::Json::Utilities::EnumInfo* Newtonsoft::Json::Utilities::EnumInfo::New_ctor(bool isFlags, ::ArrayW<uint64_t> values, ::ArrayW<::StringW> names, ::ArrayW<::StringW> resolvedNames) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Utilities::EnumInfo*>(isFlags, values, names, resolvedNames));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::EnumInfo::EnumInfo() {}
