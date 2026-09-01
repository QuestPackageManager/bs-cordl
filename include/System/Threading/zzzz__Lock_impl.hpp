#pragma once
// IWYU pragma private; include "System\Threading\Lock.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__Lock_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::Lock.Acquire
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Lock::*)()>(&::System::Threading::Lock::Acquire)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cad93c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Lock*>(), { "Acquire", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Lock.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Lock::*)()>(&::System::Threading::Lock::Release)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cad95c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Lock*>(), { "Release", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Lock._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Lock::*)()>(&::System::Threading::Lock::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5cad96c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Lock*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Threading::Lock::__cordl_internal_get__lock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lock;
}
constexpr ::System::Object* const& System::Threading::Lock::__cordl_internal_get__lock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lock;
}
constexpr void System::Threading::Lock::__cordl_internal_set__lock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lock = value;
}
inline void System::Threading::Lock::Acquire() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Lock*>(), { "Acquire", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::Lock::Release() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Lock*>(), { "Release", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::Lock::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Lock*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Lock* System::Threading::Lock::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Lock*>());
}
// Ctor Parameters []
constexpr ::System::Threading::Lock::Lock() {}
