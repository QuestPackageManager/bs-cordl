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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action_2<int32_t, ::StringW>* (*)()>(
    &::UnityEngineInternal::Input::NativeInputSystem::get_onDeviceDiscovered)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x48ed57c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(),
                                                                               "get_onDeviceDiscovered", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.set_onDeviceDiscovered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<int32_t, ::StringW>*)>(
    &::UnityEngineInternal::Input::NativeInputSystem::set_onDeviceDiscovered)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x48ed5d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(), "set_onDeviceDiscovered", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<int32_t, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.NotifyBeforeUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngineInternal::Input::NativeInputUpdateType)>(
    &::UnityEngineInternal::Input::NativeInputSystem::NotifyBeforeUpdate)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x48ed6c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(), "NotifyBeforeUpdate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngineInternal::Input::NativeInputUpdateType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.NotifyUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngineInternal::Input::NativeInputUpdateType, ::System::IntPtr)>(
    &::UnityEngineInternal::Input::NativeInputSystem::NotifyUpdate)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x48ed740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(), "NotifyUpdate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngineInternal::Input::NativeInputUpdateType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.NotifyDeviceDiscovered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::StringW)>(&::UnityEngineInternal::Input::NativeInputSystem::NotifyDeviceDiscovered)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x48ed7dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(), "NotifyDeviceDiscovered", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.ShouldRunUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngineInternal::Input::NativeInputUpdateType, ::ByRef<bool>)>(
    &::UnityEngineInternal::Input::NativeInputSystem::ShouldRunUpdate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x48ed86c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(), "ShouldRunUpdate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngineInternal::Input::NativeInputUpdateType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.set_hasDeviceDiscoveredCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::UnityEngineInternal::Input::NativeInputSystem::set_hasDeviceDiscoveredCallback)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x48ed658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(), "set_hasDeviceDiscoveredCallback",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.get_currentTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)()>(&::UnityEngineInternal::Input::NativeInputSystem::get_currentTime)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x48ed8fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(),
                                                                               "get_currentTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.get_currentTimeOffsetToRealtimeSinceStartup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)()>(&::UnityEngineInternal::Input::NativeInputSystem::get_currentTimeOffsetToRealtimeSinceStartup)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x48ed924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(),
                                                 "get_currentTimeOffsetToRealtimeSinceStartup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.AllocateDeviceId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::UnityEngineInternal::Input::NativeInputSystem::AllocateDeviceId)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x48ed94c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(),
                                                                               "AllocateDeviceId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.QueueInputEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngineInternal::Input::NativeInputSystem::QueueInputEvent)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x48ed974;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(), "QueueInputEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.IOCTL
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(int32_t, int32_t, ::System::IntPtr, int32_t)>(&::UnityEngineInternal::Input::NativeInputSystem::IOCTL)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x48ed9b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(), "IOCTL", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.SetPollingFrequency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t)>(&::UnityEngineInternal::Input::NativeInputSystem::SetPollingFrequency)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x48eda0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(), "SetPollingFrequency",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngineInternal::Input::NativeInputUpdateType)>(
    &::UnityEngineInternal::Input::NativeInputSystem::Update)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x48eda44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngineInternal::Input::NativeInputUpdateType>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngineInternal::Input::NativeInputSystem::setStaticF_onUpdate(::UnityEngineInternal::Input::NativeUpdateCallback* value) {
  ::cordl_internals::setStaticField<::UnityEngineInternal::Input::NativeUpdateCallback*, "onUpdate",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get>(
      std::forward<::UnityEngineInternal::Input::NativeUpdateCallback*>(value));
}
inline ::UnityEngineInternal::Input::NativeUpdateCallback* UnityEngineInternal::Input::NativeInputSystem::getStaticF_onUpdate() {
  return ::cordl_internals::getStaticField<::UnityEngineInternal::Input::NativeUpdateCallback*, "onUpdate",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get>();
}
inline void UnityEngineInternal::Input::NativeInputSystem::setStaticF_onBeforeUpdate(::System::Action_1<::UnityEngineInternal::Input::NativeInputUpdateType>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityEngineInternal::Input::NativeInputUpdateType>*, "onBeforeUpdate",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get>(
      std::forward<::System::Action_1<::UnityEngineInternal::Input::NativeInputUpdateType>*>(value));
}
inline ::System::Action_1<::UnityEngineInternal::Input::NativeInputUpdateType>* UnityEngineInternal::Input::NativeInputSystem::getStaticF_onBeforeUpdate() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngineInternal::Input::NativeInputUpdateType>*, "onBeforeUpdate",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get>();
}
inline void UnityEngineInternal::Input::NativeInputSystem::setStaticF_onShouldRunUpdate(::System::Func_2<::UnityEngineInternal::Input::NativeInputUpdateType, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngineInternal::Input::NativeInputUpdateType, bool>*, "onShouldRunUpdate",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get>(
      std::forward<::System::Func_2<::UnityEngineInternal::Input::NativeInputUpdateType, bool>*>(value));
}
inline ::System::Func_2<::UnityEngineInternal::Input::NativeInputUpdateType, bool>* UnityEngineInternal::Input::NativeInputSystem::getStaticF_onShouldRunUpdate() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngineInternal::Input::NativeInputUpdateType, bool>*, "onShouldRunUpdate",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get>();
}
inline void UnityEngineInternal::Input::NativeInputSystem::setStaticF_s_OnDeviceDiscoveredCallback(::System::Action_2<int32_t, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<int32_t, ::StringW>*, "s_OnDeviceDiscoveredCallback",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get>(
      std::forward<::System::Action_2<int32_t, ::StringW>*>(value));
}
inline ::System::Action_2<int32_t, ::StringW>* UnityEngineInternal::Input::NativeInputSystem::getStaticF_s_OnDeviceDiscoveredCallback() {
  return ::cordl_internals::getStaticField<::System::Action_2<int32_t, ::StringW>*, "s_OnDeviceDiscoveredCallback",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get>();
}
inline ::System::Action_2<int32_t, ::StringW>* UnityEngineInternal::Input::NativeInputSystem::get_onDeviceDiscovered() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(),
                                                                             "get_onDeviceDiscovered", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Action_2<int32_t, ::StringW>*, false>(nullptr, ___internal_method);
}
inline void UnityEngineInternal::Input::NativeInputSystem::set_onDeviceDiscovered(::System::Action_2<int32_t, ::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(), "set_onDeviceDiscovered", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<int32_t, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngineInternal::Input::NativeInputSystem::NotifyBeforeUpdate(::UnityEngineInternal::Input::NativeInputUpdateType updateType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(), "NotifyBeforeUpdate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngineInternal::Input::NativeInputUpdateType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, updateType);
}
inline void UnityEngineInternal::Input::NativeInputSystem::NotifyUpdate(::UnityEngineInternal::Input::NativeInputUpdateType updateType, ::System::IntPtr eventBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(), "NotifyUpdate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngineInternal::Input::NativeInputUpdateType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, updateType, eventBuffer);
}
inline void UnityEngineInternal::Input::NativeInputSystem::NotifyDeviceDiscovered(int32_t deviceId, ::StringW deviceDescriptor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(), "NotifyDeviceDiscovered", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, deviceId, deviceDescriptor);
}
inline void UnityEngineInternal::Input::NativeInputSystem::ShouldRunUpdate(::UnityEngineInternal::Input::NativeInputUpdateType updateType, ::ByRef<bool> retval) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(), "ShouldRunUpdate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngineInternal::Input::NativeInputUpdateType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, updateType, retval);
}
inline void UnityEngineInternal::Input::NativeInputSystem::set_hasDeviceDiscoveredCallback(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(), "set_hasDeviceDiscoveredCallback",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline double_t UnityEngineInternal::Input::NativeInputSystem::get_currentTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(),
                                                                             "get_currentTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method);
}
inline double_t UnityEngineInternal::Input::NativeInputSystem::get_currentTimeOffsetToRealtimeSinceStartup() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(),
                                               "get_currentTimeOffsetToRealtimeSinceStartup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method);
}
inline int32_t UnityEngineInternal::Input::NativeInputSystem::AllocateDeviceId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(),
                                                                             "AllocateDeviceId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void UnityEngineInternal::Input::NativeInputSystem::QueueInputEvent(::System::IntPtr inputEvent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(), "QueueInputEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, inputEvent);
}
inline int64_t UnityEngineInternal::Input::NativeInputSystem::IOCTL(int32_t deviceId, int32_t code, ::System::IntPtr data, int32_t sizeInBytes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(), "IOCTL", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, deviceId, code, data, sizeInBytes);
}
inline void UnityEngineInternal::Input::NativeInputSystem::SetPollingFrequency(float_t hertz) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(), "SetPollingFrequency",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, hertz);
}
inline void UnityEngineInternal::Input::NativeInputSystem::Update(::UnityEngineInternal::Input::NativeInputUpdateType updateType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngineInternal::Input::NativeInputUpdateType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, updateType);
}
// Ctor Parameters []
constexpr ::UnityEngineInternal::Input::NativeInputSystem::NativeInputSystem() {}
