#pragma once
// IWYU pragma private; include "GlobalNamespace/AsyncComputeOperation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AsyncComputeOperation_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AsyncComputeOperation.get_elapsedTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::AsyncComputeOperation::*)()>(&::GlobalNamespace::AsyncComputeOperation::get_elapsedTime)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x332a764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AsyncComputeOperation*>(), { "get_elapsedTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AsyncComputeOperation.get_hasTimedOut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AsyncComputeOperation::*)()>(&::GlobalNamespace::AsyncComputeOperation::get_hasTimedOut)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x332a7ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AsyncComputeOperation*>(), { "get_hasTimedOut", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AsyncComputeOperation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AsyncComputeOperation::*)(int32_t)>(&::GlobalNamespace::AsyncComputeOperation::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x332a81c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AsyncComputeOperation*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AsyncComputeOperation.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AsyncComputeOperation::*)(bool)>(&::GlobalNamespace::AsyncComputeOperation::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::AsyncComputeOperation*>(), { ::i2c::class_of<::GlobalNamespace::AsyncComputeOperation*>(), 4 }));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::AsyncComputeOperation::__cordl_internal_get__timeoutMs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeoutMs;
}
constexpr int32_t const& GlobalNamespace::AsyncComputeOperation::__cordl_internal_get__timeoutMs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeoutMs;
}
constexpr void GlobalNamespace::AsyncComputeOperation::__cordl_internal_set__timeoutMs(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeoutMs = value;
}
constexpr ::System::Diagnostics::Stopwatch*& GlobalNamespace::AsyncComputeOperation::__cordl_internal_get__stopwatch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stopwatch;
}
constexpr ::System::Diagnostics::Stopwatch* const& GlobalNamespace::AsyncComputeOperation::__cordl_internal_get__stopwatch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stopwatch;
}
constexpr void GlobalNamespace::AsyncComputeOperation::__cordl_internal_set__stopwatch(::System::Diagnostics::Stopwatch* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stopwatch = value;
}
inline double_t GlobalNamespace::AsyncComputeOperation::get_elapsedTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AsyncComputeOperation*>(), { "get_elapsedTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline bool GlobalNamespace::AsyncComputeOperation::get_hasTimedOut() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AsyncComputeOperation*>(), { "get_hasTimedOut", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AsyncComputeOperation::_ctor(int32_t timeoutMs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AsyncComputeOperation*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeoutMs);
}
inline void GlobalNamespace::AsyncComputeOperation::Execute(bool disposed) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::AsyncComputeOperation*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposed);
}
inline ::GlobalNamespace::AsyncComputeOperation* GlobalNamespace::AsyncComputeOperation::New_ctor(int32_t timeoutMs) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AsyncComputeOperation*>(timeoutMs));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AsyncComputeOperation::AsyncComputeOperation() {}
