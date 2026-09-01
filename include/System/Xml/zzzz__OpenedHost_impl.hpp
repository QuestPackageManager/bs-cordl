#pragma once
// IWYU pragma private; include "System\Xml\OpenedHost.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__OpenedHost_def.hpp"
//  Writing Method size for method: ::System::Xml::OpenedHost._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::OpenedHost::*)()>(&::System::Xml::OpenedHost::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62e1cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::OpenedHost*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Xml::OpenedHost::__cordl_internal_get_nonCachedConnectionsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nonCachedConnectionsCount;
}
constexpr int32_t const& System::Xml::OpenedHost::__cordl_internal_get_nonCachedConnectionsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nonCachedConnectionsCount;
}
constexpr void System::Xml::OpenedHost::__cordl_internal_set_nonCachedConnectionsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nonCachedConnectionsCount = value;
}
inline void System::Xml::OpenedHost::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::OpenedHost*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::OpenedHost* System::Xml::OpenedHost::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::OpenedHost*>());
}
// Ctor Parameters []
constexpr ::System::Xml::OpenedHost::OpenedHost() {}
