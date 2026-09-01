#pragma once
// IWYU pragma private; include "Oculus\Platform\Livestreaming.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__Livestreaming_def.hpp"
#include "Oculus/Platform/Models/zzzz__LivestreamingStatus_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Livestreaming.SetStatusUpdateNotificationCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::LivestreamingStatus*>*)>(
    &::Oculus::Platform::Livestreaming::SetStatusUpdateNotificationCallback)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5dea3fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Livestreaming*>(),
                            { "SetStatusUpdateNotificationCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::LivestreamingStatus*>*>() } })));
    return ___internal_method;
  }
};
inline void Oculus::Platform::Livestreaming::SetStatusUpdateNotificationCallback(::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::LivestreamingStatus*>* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Livestreaming*>(),
                          { "SetStatusUpdateNotificationCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::LivestreamingStatus*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Livestreaming::Livestreaming() {}
