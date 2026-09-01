#pragma once
// IWYU pragma private; include "Assets\OVR\Scripts\Record.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Assets/OVR/Scripts/zzzz__Record_def.hpp"
//  Writing Method size for method: ::Assets::OVR::Scripts::Record._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Assets::OVR::Scripts::Record::*)(int32_t, ::StringW, ::StringW)>(&::Assets::OVR::Scripts::Record::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e49c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Assets::OVR::Scripts::Record*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& Assets::OVR::Scripts::Record::__cordl_internal_get_sortOrder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sortOrder;
}
constexpr int32_t const& Assets::OVR::Scripts::Record::__cordl_internal_get_sortOrder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sortOrder;
}
constexpr void Assets::OVR::Scripts::Record::__cordl_internal_set_sortOrder(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sortOrder = value;
}
constexpr ::StringW& Assets::OVR::Scripts::Record::__cordl_internal_get_category() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___category;
}
constexpr ::StringW const& Assets::OVR::Scripts::Record::__cordl_internal_get_category() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___category;
}
constexpr void Assets::OVR::Scripts::Record::__cordl_internal_set_category(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___category = value;
}
constexpr ::StringW& Assets::OVR::Scripts::Record::__cordl_internal_get_message() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___message;
}
constexpr ::StringW const& Assets::OVR::Scripts::Record::__cordl_internal_get_message() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___message;
}
constexpr void Assets::OVR::Scripts::Record::__cordl_internal_set_message(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___message = value;
}
inline void Assets::OVR::Scripts::Record::_ctor(int32_t order, ::StringW cat, ::StringW msg) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Assets::OVR::Scripts::Record*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, order, cat, msg);
}
inline ::Assets::OVR::Scripts::Record* Assets::OVR::Scripts::Record::New_ctor(int32_t order, ::StringW cat, ::StringW msg) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Assets::OVR::Scripts::Record*>(order, cat, msg));
}
// Ctor Parameters []
constexpr ::Assets::OVR::Scripts::Record::Record() {}
