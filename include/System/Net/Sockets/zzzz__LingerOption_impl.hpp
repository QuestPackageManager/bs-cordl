#pragma once
// IWYU pragma private; include "System/Net/Sockets/LingerOption.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Sockets/zzzz__LingerOption_def.hpp"
//  Writing Method size for method: ::System::Net::Sockets::LingerOption._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::LingerOption::*)(bool, int32_t)>(&::System::Net::Sockets::LingerOption::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x63648bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::LingerOption*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::LingerOption.set_Enabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::LingerOption::*)(bool)>(&::System::Net::Sockets::LingerOption::set_Enabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63648c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::LingerOption*>(), { "set_Enabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::LingerOption.set_LingerTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::LingerOption::*)(int32_t)>(&::System::Net::Sockets::LingerOption::set_LingerTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63648d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::LingerOption*>(), { "set_LingerTime", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr bool& System::Net::Sockets::LingerOption::__cordl_internal_get_enabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enabled;
}
constexpr bool const& System::Net::Sockets::LingerOption::__cordl_internal_get_enabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enabled;
}
constexpr void System::Net::Sockets::LingerOption::__cordl_internal_set_enabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enabled = value;
}
constexpr int32_t& System::Net::Sockets::LingerOption::__cordl_internal_get_lingerTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lingerTime;
}
constexpr int32_t const& System::Net::Sockets::LingerOption::__cordl_internal_get_lingerTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lingerTime;
}
constexpr void System::Net::Sockets::LingerOption::__cordl_internal_set_lingerTime(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lingerTime = value;
}
inline void System::Net::Sockets::LingerOption::_ctor(bool enable, int32_t seconds) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::LingerOption*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enable, seconds);
}
inline void System::Net::Sockets::LingerOption::set_Enabled(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::LingerOption*>(), { "set_Enabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::Sockets::LingerOption::set_LingerTime(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::LingerOption*>(), { "set_LingerTime", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::Sockets::LingerOption* System::Net::Sockets::LingerOption::New_ctor(bool enable, int32_t seconds) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Sockets::LingerOption*>(enable, seconds));
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::LingerOption::LingerOption() {}
