#pragma once
// IWYU pragma private; include "System\Threading\TimeoutHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__TimeoutHelper_def.hpp"
//  Writing Method size for method: ::System::Threading::TimeoutHelper.GetTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::System::Threading::TimeoutHelper::GetTime)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5caaee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::TimeoutHelper*>(), { "GetTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::TimeoutHelper.UpdateTimeOut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint32_t, int32_t)>(&::System::Threading::TimeoutHelper::UpdateTimeOut)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5caafe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::TimeoutHelper*>(), { "UpdateTimeOut", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline uint32_t System::Threading::TimeoutHelper::GetTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::TimeoutHelper*>(), { "GetTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline int32_t System::Threading::TimeoutHelper::UpdateTimeOut(uint32_t startTime, int32_t originalWaitMillisecondsTimeout) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::TimeoutHelper*>(), { "UpdateTimeOut", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, startTime, originalWaitMillisecondsTimeout);
}
// Ctor Parameters []
constexpr ::System::Threading::TimeoutHelper::TimeoutHelper() {}
