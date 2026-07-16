#pragma once
// IWYU pragma private; include "UnityEngineInternal/Input/NativeInputSystem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngineInternal/Input/zzzz__NativeInputSystem_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngineInternal/Input/zzzz__NativeInputUpdateType_def.hpp"
#include "UnityEngineInternal/Input/zzzz__NativeUpdateCallback_def.hpp"
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.get_onDeviceDiscovered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_2<int32_t, ::StringW>* (*)()>(&::UnityEngineInternal::Input::NativeInputSystem::get_onDeviceDiscovered)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6b604cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::Input::NativeInputSystem*>(), { "get_onDeviceDiscovered", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.set_onDeviceDiscovered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<int32_t, ::StringW>*)>(&::UnityEngineInternal::Input::NativeInputSystem::set_onDeviceDiscovered)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6b60528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::Input::NativeInputSystem*>(),
                                                                                           { "set_onDeviceDiscovered", {}, { ::i2c::type_of<::System::Action_2<int32_t, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.NotifyBeforeUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngineInternal::Input::NativeInputUpdateType)>(&::UnityEngineInternal::Input::NativeInputSystem::NotifyBeforeUpdate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b6061c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::Input::NativeInputSystem*>(),
                                                                                           { "NotifyBeforeUpdate", {}, { ::i2c::type_of<::UnityEngineInternal::Input::NativeInputUpdateType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.NotifyUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngineInternal::Input::NativeInputUpdateType, ::System::IntPtr)>(
    &::UnityEngineInternal::Input::NativeInputSystem::NotifyUpdate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6b6069c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::Input::NativeInputSystem*>(),
                                                             { "NotifyUpdate", {}, { ::i2c::type_of<::UnityEngineInternal::Input::NativeInputUpdateType>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.NotifyDeviceDiscovered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::StringW)>(&::UnityEngineInternal::Input::NativeInputSystem::NotifyDeviceDiscovered)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b6073c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::Input::NativeInputSystem*>(),
                                                                                           { "NotifyDeviceDiscovered", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.ShouldRunUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngineInternal::Input::NativeInputUpdateType, ::by_ref<bool>)>(
    &::UnityEngineInternal::Input::NativeInputSystem::ShouldRunUpdate)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b607d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::Input::NativeInputSystem*>(),
                                                             { "ShouldRunUpdate", {}, { ::i2c::type_of<::UnityEngineInternal::Input::NativeInputUpdateType>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.set_hasDeviceDiscoveredCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngineInternal::Input::NativeInputSystem::set_hasDeviceDiscoveredCallback)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b605b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::Input::NativeInputSystem*>(), { "set_hasDeviceDiscoveredCallback", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.get_currentTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)()>(&::UnityEngineInternal::Input::NativeInputSystem::get_currentTime)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b60864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::Input::NativeInputSystem*>(), { "get_currentTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.get_currentTimeOffsetToRealtimeSinceStartup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)()>(&::UnityEngineInternal::Input::NativeInputSystem::get_currentTimeOffsetToRealtimeSinceStartup)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b6088c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::Input::NativeInputSystem*>(), { "get_currentTimeOffsetToRealtimeSinceStartup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.AllocateDeviceId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngineInternal::Input::NativeInputSystem::AllocateDeviceId)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b608b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::Input::NativeInputSystem*>(), { "AllocateDeviceId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.QueueInputEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngineInternal::Input::NativeInputSystem::QueueInputEvent)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b608dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::Input::NativeInputSystem*>(), { "QueueInputEvent", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.IOCTL
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(int32_t, int32_t, ::System::IntPtr, int32_t)>(&::UnityEngineInternal::Input::NativeInputSystem::IOCTL)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6b60918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::Input::NativeInputSystem*>(),
                                                { "IOCTL", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.SetPollingFrequency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::UnityEngineInternal::Input::NativeInputSystem::SetPollingFrequency)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6b60974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::Input::NativeInputSystem*>(), { "SetPollingFrequency", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngineInternal::Input::NativeInputUpdateType)>(&::UnityEngineInternal::Input::NativeInputSystem::Update)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b609ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::Input::NativeInputSystem*>(),
                                                                                           { "Update", {}, { ::i2c::type_of<::UnityEngineInternal::Input::NativeInputUpdateType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.get_normalizeScrollWheelDelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngineInternal::Input::NativeInputSystem::get_normalizeScrollWheelDelta)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b609e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::Input::NativeInputSystem*>(), { "get_normalizeScrollWheelDelta", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.set_normalizeScrollWheelDelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngineInternal::Input::NativeInputSystem::set_normalizeScrollWheelDelta)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b60a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::Input::NativeInputSystem*>(), { "set_normalizeScrollWheelDelta", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.GetScrollWheelDeltaPerTick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngineInternal::Input::NativeInputSystem::GetScrollWheelDeltaPerTick)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b60a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::Input::NativeInputSystem*>(), { "GetScrollWheelDeltaPerTick", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngineInternal::Input::NativeInputSystem::setStaticF_onUpdate(::UnityEngineInternal::Input::NativeUpdateCallback* value) {
  ::cordl_internals::setStaticField<::UnityEngineInternal::Input::NativeUpdateCallback*, "onUpdate", ::UnityEngineInternal::Input::NativeInputSystem*>(
      std::forward<::UnityEngineInternal::Input::NativeUpdateCallback*>(value));
}
inline ::UnityEngineInternal::Input::NativeUpdateCallback* UnityEngineInternal::Input::NativeInputSystem::getStaticF_onUpdate() {
  return ::cordl_internals::getStaticField<::UnityEngineInternal::Input::NativeUpdateCallback*, "onUpdate", ::UnityEngineInternal::Input::NativeInputSystem*>();
}
inline void UnityEngineInternal::Input::NativeInputSystem::setStaticF_onBeforeUpdate(::System::Action_1<::UnityEngineInternal::Input::NativeInputUpdateType>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityEngineInternal::Input::NativeInputUpdateType>*, "onBeforeUpdate", ::UnityEngineInternal::Input::NativeInputSystem*>(
      std::forward<::System::Action_1<::UnityEngineInternal::Input::NativeInputUpdateType>*>(value));
}
inline ::System::Action_1<::UnityEngineInternal::Input::NativeInputUpdateType>* UnityEngineInternal::Input::NativeInputSystem::getStaticF_onBeforeUpdate() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngineInternal::Input::NativeInputUpdateType>*, "onBeforeUpdate", ::UnityEngineInternal::Input::NativeInputSystem*>();
}
inline void UnityEngineInternal::Input::NativeInputSystem::setStaticF_onShouldRunUpdate(::System::Func_2<::UnityEngineInternal::Input::NativeInputUpdateType, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngineInternal::Input::NativeInputUpdateType, bool>*, "onShouldRunUpdate", ::UnityEngineInternal::Input::NativeInputSystem*>(
      std::forward<::System::Func_2<::UnityEngineInternal::Input::NativeInputUpdateType, bool>*>(value));
}
inline ::System::Func_2<::UnityEngineInternal::Input::NativeInputUpdateType, bool>* UnityEngineInternal::Input::NativeInputSystem::getStaticF_onShouldRunUpdate() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngineInternal::Input::NativeInputUpdateType, bool>*, "onShouldRunUpdate", ::UnityEngineInternal::Input::NativeInputSystem*>();
}
inline void UnityEngineInternal::Input::NativeInputSystem::setStaticF_s_OnDeviceDiscoveredCallback(::System::Action_2<int32_t, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<int32_t, ::StringW>*, "s_OnDeviceDiscoveredCallback", ::UnityEngineInternal::Input::NativeInputSystem*>(
      std::forward<::System::Action_2<int32_t, ::StringW>*>(value));
}
inline ::System::Action_2<int32_t, ::StringW>* UnityEngineInternal::Input::NativeInputSystem::getStaticF_s_OnDeviceDiscoveredCallback() {
  return ::cordl_internals::getStaticField<::System::Action_2<int32_t, ::StringW>*, "s_OnDeviceDiscoveredCallback", ::UnityEngineInternal::Input::NativeInputSystem*>();
}
inline ::System::Action_2<int32_t, ::StringW>* UnityEngineInternal::Input::NativeInputSystem::get_onDeviceDiscovered() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::Input::NativeInputSystem*>(), { "get_onDeviceDiscovered", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Action_2<int32_t, ::StringW>*>(nullptr, ___internal_method);
}
inline void UnityEngineInternal::Input::NativeInputSystem::set_onDeviceDiscovered(::System::Action_2<int32_t, ::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::Input::NativeInputSystem*>(),
                                                                                         { "set_onDeviceDiscovered", {}, { ::i2c::type_of<::System::Action_2<int32_t, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngineInternal::Input::NativeInputSystem::NotifyBeforeUpdate(::UnityEngineInternal::Input::NativeInputUpdateType updateType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::Input::NativeInputSystem*>(),
                                                                                         { "NotifyBeforeUpdate", {}, { ::i2c::type_of<::UnityEngineInternal::Input::NativeInputUpdateType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, updateType);
}
inline void UnityEngineInternal::Input::NativeInputSystem::NotifyUpdate(::UnityEngineInternal::Input::NativeInputUpdateType updateType, ::System::IntPtr eventBuffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::Input::NativeInputSystem*>(),
                                                           { "NotifyUpdate", {}, { ::i2c::type_of<::UnityEngineInternal::Input::NativeInputUpdateType>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, updateType, eventBuffer);
}
inline void UnityEngineInternal::Input::NativeInputSystem::NotifyDeviceDiscovered(int32_t deviceId, ::StringW deviceDescriptor) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::Input::NativeInputSystem*>(),
                                                                                         { "NotifyDeviceDiscovered", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, deviceId, deviceDescriptor);
}
inline void UnityEngineInternal::Input::NativeInputSystem::ShouldRunUpdate(::UnityEngineInternal::Input::NativeInputUpdateType updateType, ::by_ref<bool> retval) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::Input::NativeInputSystem*>(),
                                                           { "ShouldRunUpdate", {}, { ::i2c::type_of<::UnityEngineInternal::Input::NativeInputUpdateType>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, updateType, retval);
}
inline void UnityEngineInternal::Input::NativeInputSystem::set_hasDeviceDiscoveredCallback(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::Input::NativeInputSystem*>(), { "set_hasDeviceDiscoveredCallback", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline double_t UnityEngineInternal::Input::NativeInputSystem::get_currentTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::Input::NativeInputSystem*>(), { "get_currentTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method);
}
inline double_t UnityEngineInternal::Input::NativeInputSystem::get_currentTimeOffsetToRealtimeSinceStartup() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::Input::NativeInputSystem*>(), { "get_currentTimeOffsetToRealtimeSinceStartup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngineInternal::Input::NativeInputSystem::AllocateDeviceId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::Input::NativeInputSystem*>(), { "AllocateDeviceId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngineInternal::Input::NativeInputSystem::QueueInputEvent(::System::IntPtr inputEvent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::Input::NativeInputSystem*>(), { "QueueInputEvent", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, inputEvent);
}
inline int64_t UnityEngineInternal::Input::NativeInputSystem::IOCTL(int32_t deviceId, int32_t code, ::System::IntPtr data, int32_t sizeInBytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::Input::NativeInputSystem*>(),
                                                           { "IOCTL", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, deviceId, code, data, sizeInBytes);
}
inline void UnityEngineInternal::Input::NativeInputSystem::SetPollingFrequency(float_t hertz) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::Input::NativeInputSystem*>(), { "SetPollingFrequency", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hertz);
}
inline void UnityEngineInternal::Input::NativeInputSystem::Update(::UnityEngineInternal::Input::NativeInputUpdateType updateType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::Input::NativeInputSystem*>(),
                                                                                         { "Update", {}, { ::i2c::type_of<::UnityEngineInternal::Input::NativeInputUpdateType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, updateType);
}
inline bool UnityEngineInternal::Input::NativeInputSystem::get_normalizeScrollWheelDelta() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::Input::NativeInputSystem*>(), { "get_normalizeScrollWheelDelta", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngineInternal::Input::NativeInputSystem::set_normalizeScrollWheelDelta(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::Input::NativeInputSystem*>(), { "set_normalizeScrollWheelDelta", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline float_t UnityEngineInternal::Input::NativeInputSystem::GetScrollWheelDeltaPerTick() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::Input::NativeInputSystem*>(), { "GetScrollWheelDeltaPerTick", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngineInternal::Input::NativeInputSystem::NativeInputSystem() {}
