#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngineInternal/Input/zzzz__NativeInputSystem_def.hpp"
#include "UnityEngineInternal/Input/zzzz__NativeUpdateCallback_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngineInternal/Input/zzzz__NativeInputUpdateType_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.get_onDeviceDiscovered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action_2<int32_t, ::StringW>* (*)()>(
    &::UnityEngineInternal::Input::NativeInputSystem::get_onDeviceDiscovered)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2d0fd58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(),
                                                                               "get_onDeviceDiscovered", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.set_onDeviceDiscovered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<int32_t, ::StringW>*)>(
    &::UnityEngineInternal::Input::NativeInputSystem::set_onDeviceDiscovered)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2d0fdb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(), "set_onDeviceDiscovered", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<int32_t, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.NotifyBeforeUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngineInternal::Input::NativeInputUpdateType)>(
    &::UnityEngineInternal::Input::NativeInputSystem::NotifyBeforeUpdate)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2d0fea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(), "NotifyBeforeUpdate", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngineInternal::Input::NativeInputUpdateType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.NotifyUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngineInternal::Input::NativeInputUpdateType, void*)>(
    &::UnityEngineInternal::Input::NativeInputSystem::NotifyUpdate)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2d0ff1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(), "NotifyUpdate", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngineInternal::Input::NativeInputUpdateType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.NotifyDeviceDiscovered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::StringW)>(&::UnityEngineInternal::Input::NativeInputSystem::NotifyDeviceDiscovered)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2d0ffb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(), "NotifyDeviceDiscovered", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.ShouldRunUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngineInternal::Input::NativeInputUpdateType, ByRef<bool>)>(
    &::UnityEngineInternal::Input::NativeInputSystem::ShouldRunUpdate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2d10048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(), "ShouldRunUpdate", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngineInternal::Input::NativeInputUpdateType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.set_hasDeviceDiscoveredCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::UnityEngineInternal::Input::NativeInputSystem::set_hasDeviceDiscoveredCallback)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d0fe34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(), "set_hasDeviceDiscoveredCallback",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.get_currentTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)()>(&::UnityEngineInternal::Input::NativeInputSystem::get_currentTime)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2d100d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(),
                                                                               "get_currentTime", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.get_currentTimeOffsetToRealtimeSinceStartup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)()>(&::UnityEngineInternal::Input::NativeInputSystem::get_currentTimeOffsetToRealtimeSinceStartup)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2d10100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(),
                                                                               "get_currentTimeOffsetToRealtimeSinceStartup", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.AllocateDeviceId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::UnityEngineInternal::Input::NativeInputSystem::AllocateDeviceId)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2d10128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(),
                                                                               "AllocateDeviceId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.QueueInputEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(void*)>(&::UnityEngineInternal::Input::NativeInputSystem::QueueInputEvent)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d10150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(), "QueueInputEvent",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.IOCTL
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(int32_t, int32_t, void*, int32_t)>(&::UnityEngineInternal::Input::NativeInputSystem::IOCTL)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d1018c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(), "IOCTL", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.SetPollingFrequency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t)>(&::UnityEngineInternal::Input::NativeInputSystem::SetPollingFrequency)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2d101e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(), "SetPollingFrequency",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngineInternal::Input::NativeInputUpdateType)>(
    &::UnityEngineInternal::Input::NativeInputSystem::Update)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d10220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(), "Update", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngineInternal::Input::NativeInputUpdateType>::get() })));
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
                                                                             "get_onDeviceDiscovered", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Action_2<int32_t, ::StringW>*, false>(nullptr, ___internal_method);
}
inline void UnityEngineInternal::Input::NativeInputSystem::set_onDeviceDiscovered(::System::Action_2<int32_t, ::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(), "set_onDeviceDiscovered", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<int32_t, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngineInternal::Input::NativeInputSystem::NotifyBeforeUpdate(::UnityEngineInternal::Input::NativeInputUpdateType updateType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(), "NotifyBeforeUpdate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngineInternal::Input::NativeInputUpdateType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, updateType);
}
inline void UnityEngineInternal::Input::NativeInputSystem::NotifyUpdate(::UnityEngineInternal::Input::NativeInputUpdateType updateType, void* eventBuffer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(), "NotifyUpdate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngineInternal::Input::NativeInputUpdateType>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, updateType, eventBuffer);
}
inline void UnityEngineInternal::Input::NativeInputSystem::NotifyDeviceDiscovered(int32_t deviceId, ::StringW deviceDescriptor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(), "NotifyDeviceDiscovered", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, deviceId, deviceDescriptor);
}
inline void UnityEngineInternal::Input::NativeInputSystem::ShouldRunUpdate(::UnityEngineInternal::Input::NativeInputUpdateType updateType, ByRef<bool> retval) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(), "ShouldRunUpdate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngineInternal::Input::NativeInputUpdateType>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, updateType, retval);
}
inline void UnityEngineInternal::Input::NativeInputSystem::set_hasDeviceDiscoveredCallback(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(), "set_hasDeviceDiscoveredCallback",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline double_t UnityEngineInternal::Input::NativeInputSystem::get_currentTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(),
                                                                             "get_currentTime", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method);
}
inline double_t UnityEngineInternal::Input::NativeInputSystem::get_currentTimeOffsetToRealtimeSinceStartup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(),
                                                                             "get_currentTimeOffsetToRealtimeSinceStartup", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method);
}
inline int32_t UnityEngineInternal::Input::NativeInputSystem::AllocateDeviceId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(),
                                                                             "AllocateDeviceId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void UnityEngineInternal::Input::NativeInputSystem::QueueInputEvent(void* inputEvent) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(), "QueueInputEvent",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, inputEvent);
}
inline int64_t UnityEngineInternal::Input::NativeInputSystem::IOCTL(int32_t deviceId, int32_t code, void* data, int32_t sizeInBytes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(), "IOCTL", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, deviceId, code, data, sizeInBytes);
}
inline void UnityEngineInternal::Input::NativeInputSystem::SetPollingFrequency(float_t hertz) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(), "SetPollingFrequency",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, hertz);
}
inline void UnityEngineInternal::Input::NativeInputSystem::Update(::UnityEngineInternal::Input::NativeInputUpdateType updateType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeInputSystem*>::get(), "Update", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngineInternal::Input::NativeInputUpdateType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, updateType);
}
// Ctor Parameters []
constexpr ::UnityEngineInternal::Input::NativeInputSystem::NativeInputSystem() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
