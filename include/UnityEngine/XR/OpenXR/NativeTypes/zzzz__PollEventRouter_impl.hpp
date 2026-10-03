#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/PollEventRouter.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__PollEventRouter_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrEventDataBaseHeader_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrPollEventCallback_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_def.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRLoaderBase_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter.get_numSubscribersToEventReceived
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter::get_numSubscribersToEventReceived)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6e3cd40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter*>(), { "get_numSubscribersToEventReceived", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter.RegisterNativeCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter::RegisterNativeCallback)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6e3cde8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter*>(), { "RegisterNativeCallback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter.UnregisterNativeCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter::UnregisterNativeCallback)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6e3cfa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter*>(), { "UnregisterNativeCallback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter.ClearAllState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::OpenXR::OpenXRLoaderBase*)>(&::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter::ClearAllState)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x6e3d144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter*>(),
                                                                                           { "ClearAllState", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter.OnXrPollEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::OpenXR::NativeTypes::XrEventDataBaseHeader*)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter::OnXrPollEvent)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x6e3caec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter*>(),
                                                             { "OnXrPollEvent", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrEventDataBaseHeader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter.TrySubscribeToAllEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback*)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter::TrySubscribeToAllEvents)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6e3d2e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter*>(),
                                                             { "TrySubscribeToAllEvents", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter.TrySubscribeToEventType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType, ::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback*)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter::TrySubscribeToEventType)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x6e3d3b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter*>(),
                            { "TrySubscribeToEventType",
                              {},
                              { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter.TryUnsubscribeFromAllEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback*)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter::TryUnsubscribeFromAllEvents)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6e3d570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter*>(),
                                                             { "TryUnsubscribeFromAllEvents", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter.TryUnsubscribeFromEventType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType, ::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback*)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter::TryUnsubscribeFromEventType)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6e3d634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter*>(),
                            { "TryUnsubscribeFromEventType",
                              {},
                              { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter.Internal_RegisterPollEventCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter::Internal_RegisterPollEventCallback)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e3cf2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter*>(),
                                                                                           { "Internal_RegisterPollEventCallback", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter.Internal_UnregisterPollEventCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter::Internal_UnregisterPollEventCallback)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6e3d0e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter*>(), { "Internal_UnregisterPollEventCallback", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter::setStaticF_s_SubscribersToAllEvents(
    ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback*>*, "s_SubscribersToAllEvents",
                                    ::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter*>(
      std::forward<::System::Collections::Generic::HashSet_1<::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback*>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback*>*
UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter::getStaticF_s_SubscribersToAllEvents() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback*>*, "s_SubscribersToAllEvents",
                                           ::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter*>();
}
inline void UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter::setStaticF_s_TypedEventSubscribers(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType,
                                                 ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback*>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType,
                                                                                 ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback*>*>*,
                                    "s_TypedEventSubscribers", ::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType,
                                                                ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback*>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType,
                                                    ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback*>*>*
UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter::getStaticF_s_TypedEventSubscribers() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType,
                                                                                        ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback*>*>*,
                                           "s_TypedEventSubscribers", ::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter*>();
}
inline void UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter::setStaticF_s_XrPollEventCallback(::System::IntPtr value) {
  ::cordl_internals::setStaticField<::System::IntPtr, "s_XrPollEventCallback", ::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter::getStaticF_s_XrPollEventCallback() {
  return ::cordl_internals::getStaticField<::System::IntPtr, "s_XrPollEventCallback", ::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter*>();
}
inline int32_t UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter::get_numSubscribersToEventReceived() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter*>(), { "get_numSubscribersToEventReceived", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter::RegisterNativeCallback() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter*>(), { "RegisterNativeCallback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter::UnregisterNativeCallback() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter*>(), { "UnregisterNativeCallback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter::ClearAllState(::UnityEngine::XR::OpenXR::OpenXRLoaderBase* _) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter*>(),
                                                                                         { "ClearAllState", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter::OnXrPollEvent(::UnityEngine::XR::OpenXR::NativeTypes::XrEventDataBaseHeader* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter*>(),
                                                           { "OnXrPollEvent", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrEventDataBaseHeader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, eventData);
}
inline bool UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter::TrySubscribeToAllEvents(::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback* callback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter*>(),
                                                           { "TrySubscribeToAllEvents", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, callback);
}
inline bool UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter::TrySubscribeToEventType(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType eventType,
                                                                                           ::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter*>(),
                          { "TrySubscribeToEventType",
                            {},
                            { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, eventType, callback);
}
inline bool UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter::TryUnsubscribeFromAllEvents(::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback* callback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter*>(),
                                                           { "TryUnsubscribeFromAllEvents", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, callback);
}
inline bool UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter::TryUnsubscribeFromEventType(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType eventType,
                                                                                               ::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter*>(),
                          { "TryUnsubscribeFromEventType",
                            {},
                            { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, eventType, callback);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter::Internal_RegisterPollEventCallback(::System::IntPtr callback) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter*>(),
                                                                                         { "Internal_RegisterPollEventCallback", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter::Internal_UnregisterPollEventCallback() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter*>(), { "Internal_UnregisterPollEventCallback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter::PollEventRouter() {}
