#pragma once
// IWYU pragma private; include "Oculus\Platform\Models\PingResult.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__PingResult_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::PingResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::PingResult::*)(uint64_t, ::System::Nullable_1<uint64_t>)>(&::Oculus::Platform::Models::PingResult::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5df1b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::PingResult*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Nullable_1<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Models::PingResult.get_ID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Oculus::Platform::Models::PingResult::*)()>(&::Oculus::Platform::Models::PingResult::get_ID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5df1b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::PingResult*>(), { "get_ID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Models::PingResult.set_ID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::PingResult::*)(uint64_t)>(&::Oculus::Platform::Models::PingResult::set_ID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5df1b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::PingResult*>(), { "set_ID", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Models::PingResult.get_PingTimeUsec
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Oculus::Platform::Models::PingResult::*)()>(&::Oculus::Platform::Models::PingResult::get_PingTimeUsec)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5df1b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::PingResult*>(), { "get_PingTimeUsec", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Models::PingResult.get_IsTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Platform::Models::PingResult::*)()>(&::Oculus::Platform::Models::PingResult::get_IsTimeout)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5df1bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::PingResult*>(), { "get_IsTimeout", {}, {} })));
    return ___internal_method;
  }
};
constexpr uint64_t& Oculus::Platform::Models::PingResult::__cordl_internal_get__ID_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ID_k__BackingField;
}
constexpr uint64_t const& Oculus::Platform::Models::PingResult::__cordl_internal_get__ID_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ID_k__BackingField;
}
constexpr void Oculus::Platform::Models::PingResult::__cordl_internal_set__ID_k__BackingField(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ID_k__BackingField = value;
}
constexpr ::System::Nullable_1<uint64_t>& Oculus::Platform::Models::PingResult::__cordl_internal_get_pingTimeUsec() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pingTimeUsec;
}
constexpr ::System::Nullable_1<uint64_t> const& Oculus::Platform::Models::PingResult::__cordl_internal_get_pingTimeUsec() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pingTimeUsec;
}
constexpr void Oculus::Platform::Models::PingResult::__cordl_internal_set_pingTimeUsec(::System::Nullable_1<uint64_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pingTimeUsec = value;
}
inline void Oculus::Platform::Models::PingResult::_ctor(uint64_t id, ::System::Nullable_1<uint64_t> pingTimeUsec) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::PingResult*>(), { ".ctor", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Nullable_1<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, pingTimeUsec);
}
inline uint64_t Oculus::Platform::Models::PingResult::get_ID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::PingResult*>(), { "get_ID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline void Oculus::Platform::Models::PingResult::set_ID(uint64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::PingResult*>(), { "set_ID", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint64_t Oculus::Platform::Models::PingResult::get_PingTimeUsec() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::PingResult*>(), { "get_PingTimeUsec", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline bool Oculus::Platform::Models::PingResult::get_IsTimeout() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::PingResult*>(), { "get_IsTimeout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::PingResult* Oculus::Platform::Models::PingResult::New_ctor(uint64_t id, ::System::Nullable_1<uint64_t> pingTimeUsec) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::PingResult*>(id, pingTimeUsec));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::PingResult::PingResult() {}
