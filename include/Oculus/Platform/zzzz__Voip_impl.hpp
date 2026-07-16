#pragma once
// IWYU pragma private; include "Oculus/Platform/Voip.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__Voip_def.hpp"
#include "Oculus/Platform/Models/zzzz__MicrophoneAvailabilityState_def.hpp"
#include "Oculus/Platform/Models/zzzz__SystemVoipState_def.hpp"
#include "Oculus/Platform/zzzz__CAPI_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
#include "Oculus/Platform/zzzz__SystemVoipStatus_def.hpp"
#include "Oculus/Platform/zzzz__VoipBitrate_def.hpp"
#include "Oculus/Platform/zzzz__VoipDtxState_def.hpp"
#include "Oculus/Platform/zzzz__VoipMuteState_def.hpp"
#include "Oculus/Platform/zzzz__VoipOptions_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Voip.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t)>(&::Oculus::Platform::Voip::Start)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5ddf5f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Voip*>(), { "Start", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Voip.Accept
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t)>(&::Oculus::Platform::Voip::Accept)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5ddf6d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Voip*>(), { "Accept", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Voip.Stop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t)>(&::Oculus::Platform::Voip::Stop)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5ddf7b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Voip*>(), { "Stop", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Voip.SetMicrophoneFilterCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Oculus::Platform::CAPI_FilterCallback*)>(&::Oculus::Platform::Voip::SetMicrophoneFilterCallback)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5ddf890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Voip*>(), { "SetMicrophoneFilterCallback", {}, { ::i2c::type_of<::Oculus::Platform::CAPI_FilterCallback*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Voip.SetMicrophoneMuted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Oculus::Platform::VoipMuteState)>(&::Oculus::Platform::Voip::SetMicrophoneMuted)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5ddf974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Voip*>(), { "SetMicrophoneMuted", {}, { ::i2c::type_of<::Oculus::Platform::VoipMuteState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Voip.GetSystemVoipMicrophoneMuted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::VoipMuteState (*)()>(&::Oculus::Platform::Voip::GetSystemVoipMicrophoneMuted)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5ddfa54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Voip*>(), { "GetSystemVoipMicrophoneMuted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Voip.GetSystemVoipStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::SystemVoipStatus (*)()>(&::Oculus::Platform::Voip::GetSystemVoipStatus)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5ddfb24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Voip*>(), { "GetSystemVoipStatus", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Voip.GetIsConnectionUsingDtx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::VoipDtxState (*)(uint64_t)>(&::Oculus::Platform::Voip::GetIsConnectionUsingDtx)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5ddfbf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Voip*>(), { "GetIsConnectionUsingDtx", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Voip.GetLocalBitrate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::VoipBitrate (*)(uint64_t)>(&::Oculus::Platform::Voip::GetLocalBitrate)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5ddfcd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Voip*>(), { "GetLocalBitrate", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Voip.GetRemoteBitrate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::VoipBitrate (*)(uint64_t)>(&::Oculus::Platform::Voip::GetRemoteBitrate)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5ddfdbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Voip*>(), { "GetRemoteBitrate", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Voip.SetNewConnectionOptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Oculus::Platform::VoipOptions*)>(&::Oculus::Platform::Voip::SetNewConnectionOptions)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5ddfea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Voip*>(), { "SetNewConnectionOptions", {}, { ::i2c::type_of<::Oculus::Platform::VoipOptions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Voip.GetMicrophoneAvailability
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MicrophoneAvailabilityState*>* (*)()>(
    &::Oculus::Platform::Voip::GetMicrophoneAvailability)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5ddff94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Voip*>(), { "GetMicrophoneAvailability", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Voip.SetSystemVoipSuppressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::SystemVoipState*>* (*)(bool)>(&::Oculus::Platform::Voip::SetSystemVoipSuppressed)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5de00ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Voip*>(), { "SetSystemVoipSuppressed", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Voip.SetMicrophoneAvailabilityStateUpdateNotificationCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Oculus::Platform::Message_1_Callback<::StringW>*)>(
    &::Oculus::Platform::Voip::SetMicrophoneAvailabilityStateUpdateNotificationCallback)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5de0254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Voip*>(),
                                                { "SetMicrophoneAvailabilityStateUpdateNotificationCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_1_Callback<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Voip.SetSystemVoipStateNotificationCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::SystemVoipState*>*)>(
    &::Oculus::Platform::Voip::SetSystemVoipStateNotificationCallback)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5de02d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Voip*>(),
                            { "SetSystemVoipStateNotificationCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::SystemVoipState*>*>() } })));
    return ___internal_method;
  }
};
inline void Oculus::Platform::Voip::Start(uint64_t userID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Voip*>(), { "Start", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, userID);
}
inline void Oculus::Platform::Voip::Accept(uint64_t userID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Voip*>(), { "Accept", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, userID);
}
inline void Oculus::Platform::Voip::Stop(uint64_t userID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Voip*>(), { "Stop", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, userID);
}
inline void Oculus::Platform::Voip::SetMicrophoneFilterCallback(::Oculus::Platform::CAPI_FilterCallback* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Voip*>(), { "SetMicrophoneFilterCallback", {}, { ::i2c::type_of<::Oculus::Platform::CAPI_FilterCallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void Oculus::Platform::Voip::SetMicrophoneMuted(::Oculus::Platform::VoipMuteState state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Voip*>(), { "SetMicrophoneMuted", {}, { ::i2c::type_of<::Oculus::Platform::VoipMuteState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
inline ::Oculus::Platform::VoipMuteState Oculus::Platform::Voip::GetSystemVoipMicrophoneMuted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Voip*>(), { "GetSystemVoipMicrophoneMuted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::VoipMuteState>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::SystemVoipStatus Oculus::Platform::Voip::GetSystemVoipStatus() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Voip*>(), { "GetSystemVoipStatus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::SystemVoipStatus>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::VoipDtxState Oculus::Platform::Voip::GetIsConnectionUsingDtx(uint64_t peerID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Voip*>(), { "GetIsConnectionUsingDtx", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::VoipDtxState>(nullptr, ___internal_method, peerID);
}
inline ::Oculus::Platform::VoipBitrate Oculus::Platform::Voip::GetLocalBitrate(uint64_t peerID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Voip*>(), { "GetLocalBitrate", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::VoipBitrate>(nullptr, ___internal_method, peerID);
}
inline ::Oculus::Platform::VoipBitrate Oculus::Platform::Voip::GetRemoteBitrate(uint64_t peerID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Voip*>(), { "GetRemoteBitrate", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::VoipBitrate>(nullptr, ___internal_method, peerID);
}
inline void Oculus::Platform::Voip::SetNewConnectionOptions(::Oculus::Platform::VoipOptions* voipOptions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Voip*>(), { "SetNewConnectionOptions", {}, { ::i2c::type_of<::Oculus::Platform::VoipOptions*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, voipOptions);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MicrophoneAvailabilityState*>* Oculus::Platform::Voip::GetMicrophoneAvailability() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Voip*>(), { "GetMicrophoneAvailability", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MicrophoneAvailabilityState*>*>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::SystemVoipState*>* Oculus::Platform::Voip::SetSystemVoipSuppressed(bool suppressed) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Voip*>(), { "SetSystemVoipSuppressed", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::SystemVoipState*>*>(nullptr, ___internal_method, suppressed);
}
inline void Oculus::Platform::Voip::SetMicrophoneAvailabilityStateUpdateNotificationCallback(::Oculus::Platform::Message_1_Callback<::StringW>* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Voip*>(),
                                              { "SetMicrophoneAvailabilityStateUpdateNotificationCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_1_Callback<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void Oculus::Platform::Voip::SetSystemVoipStateNotificationCallback(::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::SystemVoipState*>* callback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Voip*>(),
                                       { "SetSystemVoipStateNotificationCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::SystemVoipState*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Voip::Voip() {}
