#pragma once
// IWYU pragma private; include "Oculus\Platform\Vrcamera.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__Vrcamera_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Vrcamera.SetGetDataChannelMessageUpdateNotificationCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Oculus::Platform::Message_1_Callback<::StringW>*)>(
    &::Oculus::Platform::Vrcamera::SetGetDataChannelMessageUpdateNotificationCallback)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5deb410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Vrcamera*>(),
                                                             { "SetGetDataChannelMessageUpdateNotificationCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_1_Callback<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Vrcamera.SetGetSurfaceUpdateNotificationCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Oculus::Platform::Message_1_Callback<::StringW>*)>(&::Oculus::Platform::Vrcamera::SetGetSurfaceUpdateNotificationCallback)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5deb48c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Vrcamera*>(),
                                                             { "SetGetSurfaceUpdateNotificationCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_1_Callback<::StringW>*>() } })));
    return ___internal_method;
  }
};
inline void Oculus::Platform::Vrcamera::SetGetDataChannelMessageUpdateNotificationCallback(::Oculus::Platform::Message_1_Callback<::StringW>* callback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Vrcamera*>(),
                                                           { "SetGetDataChannelMessageUpdateNotificationCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_1_Callback<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void Oculus::Platform::Vrcamera::SetGetSurfaceUpdateNotificationCallback(::Oculus::Platform::Message_1_Callback<::StringW>* callback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Vrcamera*>(),
                                                           { "SetGetSurfaceUpdateNotificationCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_1_Callback<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Vrcamera::Vrcamera() {}
