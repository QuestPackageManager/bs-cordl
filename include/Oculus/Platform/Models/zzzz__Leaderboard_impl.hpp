#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/Leaderboard.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__Leaderboard_def.hpp"
#include "Oculus/Platform/Models/zzzz__Destination_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::Leaderboard._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::Leaderboard::*)(::System::IntPtr)>(&::Oculus::Platform::Models::Leaderboard::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5dec6ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::Leaderboard*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Platform::Models::Leaderboard::__cordl_internal_get_ApiName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ApiName;
}
constexpr ::StringW const& Oculus::Platform::Models::Leaderboard::__cordl_internal_get_ApiName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ApiName;
}
constexpr void Oculus::Platform::Models::Leaderboard::__cordl_internal_set_ApiName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ApiName = value;
}
constexpr ::Oculus::Platform::Models::Destination*& Oculus::Platform::Models::Leaderboard::__cordl_internal_get_DestinationOptional() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DestinationOptional;
}
constexpr ::Oculus::Platform::Models::Destination* const& Oculus::Platform::Models::Leaderboard::__cordl_internal_get_DestinationOptional() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DestinationOptional;
}
constexpr void Oculus::Platform::Models::Leaderboard::__cordl_internal_set_DestinationOptional(::Oculus::Platform::Models::Destination* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DestinationOptional = value;
}
constexpr ::Oculus::Platform::Models::Destination*& Oculus::Platform::Models::Leaderboard::__cordl_internal_get_Destination() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Destination;
}
constexpr ::Oculus::Platform::Models::Destination* const& Oculus::Platform::Models::Leaderboard::__cordl_internal_get_Destination() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Destination;
}
constexpr void Oculus::Platform::Models::Leaderboard::__cordl_internal_set_Destination(::Oculus::Platform::Models::Destination* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Destination = value;
}
constexpr uint64_t& Oculus::Platform::Models::Leaderboard::__cordl_internal_get__cordl_ID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr uint64_t const& Oculus::Platform::Models::Leaderboard::__cordl_internal_get__cordl_ID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr void Oculus::Platform::Models::Leaderboard::__cordl_internal_set__cordl_ID(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cordl_ID = value;
}
inline void Oculus::Platform::Models::Leaderboard::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::Leaderboard*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::Leaderboard* Oculus::Platform::Models::Leaderboard::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::Leaderboard*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::Leaderboard::Leaderboard() {}
