#pragma once
// IWYU pragma private; include "System\Threading\PlatformHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__PlatformHelper_def.hpp"
//  Writing Method size for method: ::System::Threading::PlatformHelper.get_ProcessorCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::System::Threading::PlatformHelper::get_ProcessorCount)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5cab624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::PlatformHelper*>(), { "get_ProcessorCount", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Threading::PlatformHelper::setStaticF_s_processorCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_processorCount", ::System::Threading::PlatformHelper*>(std::forward<int32_t>(value));
}
inline int32_t System::Threading::PlatformHelper::getStaticF_s_processorCount() {
  return ::cordl_internals::getStaticField<int32_t, "s_processorCount", ::System::Threading::PlatformHelper*>();
}
inline void System::Threading::PlatformHelper::setStaticF_s_lastProcessorCountRefreshTicks(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_lastProcessorCountRefreshTicks", ::System::Threading::PlatformHelper*>(std::forward<int32_t>(value));
}
inline int32_t System::Threading::PlatformHelper::getStaticF_s_lastProcessorCountRefreshTicks() {
  return ::cordl_internals::getStaticField<int32_t, "s_lastProcessorCountRefreshTicks", ::System::Threading::PlatformHelper*>();
}
inline void System::Threading::PlatformHelper::setStaticF_IsSingleProcessor(bool value) {
  ::cordl_internals::setStaticField<bool, "IsSingleProcessor", ::System::Threading::PlatformHelper*>(std::forward<bool>(value));
}
inline bool System::Threading::PlatformHelper::getStaticF_IsSingleProcessor() {
  return ::cordl_internals::getStaticField<bool, "IsSingleProcessor", ::System::Threading::PlatformHelper*>();
}
inline int32_t System::Threading::PlatformHelper::get_ProcessorCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::PlatformHelper*>(), { "get_ProcessorCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Threading::PlatformHelper::PlatformHelper() {}
