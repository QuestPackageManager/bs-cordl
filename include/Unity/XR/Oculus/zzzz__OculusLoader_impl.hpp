#pragma once
#include "UnityEngine/XR/Management/zzzz__XRLoaderHelper_impl.hpp"
#include "Unity/XR/Oculus/zzzz__OculusLoader_def.hpp"
#include "Unity/XR/Oculus/zzzz__OculusLoader_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/XR/Oculus/zzzz__OculusSettings_def.hpp"
#include "UnityEngine/XR/zzzz__XRInputSubsystem_def.hpp"
#include "UnityEngine/XR/zzzz__XRDisplaySubsystemDescriptor_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::XR::Oculus::__OculusLoader__DeviceSupportedResult::__OculusLoader__DeviceSupportedResult(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::XR::Oculus::__OculusLoader__DeviceSupportedResult::__OculusLoader__DeviceSupportedResult() {}
constexpr ::Unity::XR::Oculus::__OculusLoader__DeviceSupportedResult Unity::XR::Oculus::__OculusLoader__DeviceSupportedResult::Supported{ static_cast<int32_t>(0x0) };
constexpr ::Unity::XR::Oculus::__OculusLoader__DeviceSupportedResult Unity::XR::Oculus::__OculusLoader__DeviceSupportedResult::NotSupported{ static_cast<int32_t>(0x1) };
constexpr ::Unity::XR::Oculus::__OculusLoader__DeviceSupportedResult Unity::XR::Oculus::__OculusLoader__DeviceSupportedResult::ExitApplication{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::Unity::XR::Oculus::OculusLoader.IsDeviceSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::XR::Oculus::__OculusLoader__DeviceSupportedResult (*)()>(
    &::Unity::XR::Oculus::OculusLoader::IsDeviceSupported)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2c77b64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusLoader*>::get(), "IsDeviceSupported",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::OculusLoader.get_displaySubsystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Il2CppObject* (::Unity::XR::Oculus::OculusLoader::*)()>(&::Unity::XR::Oculus::OculusLoader::get_displaySubsystem)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2c77bf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusLoader*>::get(),
                                                                               "get_displaySubsystem", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::OculusLoader.get_inputSubsystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::XRInputSubsystem* (::Unity::XR::Oculus::OculusLoader::*)()>(
    &::Unity::XR::Oculus::OculusLoader::get_inputSubsystem)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2c77c68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusLoader*>::get(), "get_inputSubsystem",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::OculusLoader.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::XR::Oculus::OculusLoader::*)()>(&::Unity::XR::Oculus::OculusLoader::Initialize)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x2c77cd8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusLoader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusLoader*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::OculusLoader.PermissionGrantedCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::Oculus::OculusLoader::*)(::StringW)>(
    &::Unity::XR::Oculus::OculusLoader::PermissionGrantedCallback)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2c784a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusLoader*>::get(), "PermissionGrantedCallback",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::OculusLoader.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::XR::Oculus::OculusLoader::*)()>(&::Unity::XR::Oculus::OculusLoader::Start)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2c7850c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusLoader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusLoader*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::OculusLoader.Stop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::XR::Oculus::OculusLoader::*)()>(&::Unity::XR::Oculus::OculusLoader::Stop)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2c78588;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusLoader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusLoader*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::OculusLoader.Deinitialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::XR::Oculus::OculusLoader::*)()>(&::Unity::XR::Oculus::OculusLoader::Deinitialize)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2c78604;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusLoader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusLoader*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::OculusLoader.RuntimeLoadOVRPlugin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Unity::XR::Oculus::OculusLoader::RuntimeLoadOVRPlugin)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2c786fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusLoader*>::get(),
                                                                               "RuntimeLoadOVRPlugin", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::OculusLoader.GetSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::XR::Oculus::OculusSettings* (::Unity::XR::Oculus::OculusLoader::*)()>(
    &::Unity::XR::Oculus::OculusLoader::GetSettings)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2c78878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusLoader*>::get(), "GetSettings",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::OculusLoader.CheckUnityVersionCompatibility
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::XR::Oculus::OculusLoader::*)()>(&::Unity::XR::Oculus::OculusLoader::CheckUnityVersionCompatibility)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x2c78110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusLoader*>::get(),
                                                                               "CheckUnityVersionCompatibility", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::OculusLoader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::Oculus::OculusLoader::*)()>(&::Unity::XR::Oculus::OculusLoader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c788c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusLoader*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void Unity::XR::Oculus::OculusLoader::setStaticF_s_DisplaySubsystemDescriptors(::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>*, "s_DisplaySubsystemDescriptors",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusLoader*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>* Unity::XR::Oculus::OculusLoader::getStaticF_s_DisplaySubsystemDescriptors() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>*, "s_DisplaySubsystemDescriptors",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusLoader*>::get>();
}
inline void Unity::XR::Oculus::OculusLoader::setStaticF_s_InputSubsystemDescriptors(::System::Collections::Generic::List_1<Il2CppObject*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<Il2CppObject*>*, "s_InputSubsystemDescriptors",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusLoader*>::get>(
      std::forward<::System::Collections::Generic::List_1<Il2CppObject*>*>(value));
}
inline ::System::Collections::Generic::List_1<Il2CppObject*>* Unity::XR::Oculus::OculusLoader::getStaticF_s_InputSubsystemDescriptors() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<Il2CppObject*>*, "s_InputSubsystemDescriptors",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusLoader*>::get>();
}
inline ::Unity::XR::Oculus::__OculusLoader__DeviceSupportedResult Unity::XR::Oculus::OculusLoader::IsDeviceSupported() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusLoader*>::get(), "IsDeviceSupported",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Unity::XR::Oculus::__OculusLoader__DeviceSupportedResult, false>(nullptr, ___internal_method);
}
inline Il2CppObject* Unity::XR::Oculus::OculusLoader::get_displaySubsystem() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusLoader*>::get(), "get_displaySubsystem",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<Il2CppObject*, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::XRInputSubsystem* Unity::XR::Oculus::OculusLoader::get_inputSubsystem() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusLoader*>::get(), "get_inputSubsystem",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::XRInputSubsystem*, false>(this, ___internal_method);
}
inline bool Unity::XR::Oculus::OculusLoader::Initialize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusLoader*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Unity::XR::Oculus::OculusLoader::PermissionGrantedCallback(::StringW permissionName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusLoader*>::get(), "PermissionGrantedCallback",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, permissionName);
}
inline bool Unity::XR::Oculus::OculusLoader::Start() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusLoader*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Unity::XR::Oculus::OculusLoader::Stop() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusLoader*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Unity::XR::Oculus::OculusLoader::Deinitialize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusLoader*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Unity::XR::Oculus::OculusLoader::RuntimeLoadOVRPlugin() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusLoader*>::get(), "RuntimeLoadOVRPlugin",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::Unity::XR::Oculus::OculusSettings* Unity::XR::Oculus::OculusLoader::GetSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusLoader*>::get(), "GetSettings",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Unity::XR::Oculus::OculusSettings*, false>(this, ___internal_method);
}
inline bool Unity::XR::Oculus::OculusLoader::CheckUnityVersionCompatibility() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusLoader*>::get(),
                                                                             "CheckUnityVersionCompatibility", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Unity::XR::Oculus::OculusLoader* Unity::XR::Oculus::OculusLoader::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Unity::XR::Oculus::OculusLoader*>());
}
inline void Unity::XR::Oculus::OculusLoader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusLoader*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::XR::Oculus::OculusLoader::OculusLoader() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
