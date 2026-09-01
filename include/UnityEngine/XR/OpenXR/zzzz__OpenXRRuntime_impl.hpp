#pragma once
// IWYU pragma private; include "UnityEngine\XR\OpenXR\OpenXRRuntime.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRRuntime_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRRuntime.get_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::XR::OpenXR::OpenXRRuntime::get_name)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x69ee1c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "get_name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRRuntime.get_version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::XR::OpenXR::OpenXRRuntime::get_version)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x69ee250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "get_version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRRuntime.get_apiVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::XR::OpenXR::OpenXRRuntime::get_apiVersion)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x69ee3ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "get_apiVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRRuntime.get_pluginVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::XR::OpenXR::OpenXRRuntime::get_pluginVersion)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x69ee360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "get_pluginVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRRuntime.isRuntimeAPIVersionGreaterThan1_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::XR::OpenXR::OpenXRRuntime::isRuntimeAPIVersionGreaterThan1_1)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x69f5cb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "isRuntimeAPIVersionGreaterThan1_1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRRuntime.IsExtensionEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::UnityEngine::XR::OpenXR::OpenXRRuntime::IsExtensionEnabled)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69f5d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "IsExtensionEnabled", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRRuntime.GetExtensionVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::StringW)>(&::UnityEngine::XR::OpenXR::OpenXRRuntime::GetExtensionVersion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69ee7a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "GetExtensionVersion", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRRuntime.GetEnabledExtensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)()>(&::UnityEngine::XR::OpenXR::OpenXRRuntime::GetEnabledExtensions)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x69ee4fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "GetEnabledExtensions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRRuntime.GetAvailableExtensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)()>(&::UnityEngine::XR::OpenXR::OpenXRRuntime::GetAvailableExtensions)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x69ee5d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "GetAvailableExtensions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRRuntime.add_wantsToQuit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Func_1<bool>*)>(&::UnityEngine::XR::OpenXR::OpenXRRuntime::add_wantsToQuit)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x69f6064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "add_wantsToQuit", {}, { ::i2c::type_of<::System::Func_1<bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRRuntime.remove_wantsToQuit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Func_1<bool>*)>(&::UnityEngine::XR::OpenXR::OpenXRRuntime::remove_wantsToQuit)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x69f6144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "remove_wantsToQuit", {}, { ::i2c::type_of<::System::Func_1<bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRRuntime.add_wantsToRestart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Func_1<bool>*)>(&::UnityEngine::XR::OpenXR::OpenXRRuntime::add_wantsToRestart)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x69f6224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "add_wantsToRestart", {}, { ::i2c::type_of<::System::Func_1<bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRRuntime.remove_wantsToRestart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Func_1<bool>*)>(&::UnityEngine::XR::OpenXR::OpenXRRuntime::remove_wantsToRestart)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x69f6308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "remove_wantsToRestart", {}, { ::i2c::type_of<::System::Func_1<bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRRuntime.get_retryInitializationOnFormFactorErrors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::XR::OpenXR::OpenXRRuntime::get_retryInitializationOnFormFactorErrors)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69f63ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "get_retryInitializationOnFormFactorErrors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRRuntime.set_retryInitializationOnFormFactorErrors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::XR::OpenXR::OpenXRRuntime::set_retryInitializationOnFormFactorErrors)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69f645c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "set_retryInitializationOnFormFactorErrors", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRRuntime.InvokeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Func_1<bool>*)>(&::UnityEngine::XR::OpenXR::OpenXRRuntime::InvokeEvent)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x69f64dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "InvokeEvent", {}, { ::i2c::type_of<::System::Func_1<bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRRuntime.ShouldQuit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::XR::OpenXR::OpenXRRuntime::ShouldQuit)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x69f59ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "ShouldQuit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRRuntime.ShouldRestart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::XR::OpenXR::OpenXRRuntime::ShouldRestart)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x69f5960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "ShouldRestart", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRRuntime.Internal_GetRuntimeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::OpenXR::OpenXRRuntime::Internal_GetRuntimeName)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x69f5a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "Internal_GetRuntimeName", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRRuntime.Internal_GetRuntimeVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<uint16_t>, ::by_ref<uint16_t>, ::by_ref<uint32_t>)>(&::UnityEngine::XR::OpenXR::OpenXRRuntime::Internal_GetRuntimeVersion)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x69f5afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(),
                                         { "Internal_GetRuntimeVersion", {}, { ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRRuntime.Internal_GetAPIVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<uint16_t>, ::by_ref<uint16_t>, ::by_ref<uint32_t>)>(&::UnityEngine::XR::OpenXR::OpenXRRuntime::Internal_GetAPIVersion)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x69f5b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(),
                                         { "Internal_GetAPIVersion", {}, { ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRRuntime.Internal_GetPluginVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::OpenXR::OpenXRRuntime::Internal_GetPluginVersion)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x69f5c34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "Internal_GetPluginVersion", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRRuntime.Internal_IsExtensionEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::UnityEngine::XR::OpenXR::OpenXRRuntime::Internal_IsExtensionEnabled)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x69f5d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "Internal_IsExtensionEnabled", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRRuntime.Internal_GetExtensionVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::StringW)>(&::UnityEngine::XR::OpenXR::OpenXRRuntime::Internal_GetExtensionVersion)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x69f5da4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "Internal_GetExtensionVersion", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRRuntime.Internal_GetEnabledExtensionCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::UnityEngine::XR::OpenXR::OpenXRRuntime::Internal_GetEnabledExtensionCount)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x69f5e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "Internal_GetEnabledExtensionCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRRuntime.Internal_GetEnabledExtensionNamePtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t, ::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::OpenXR::OpenXRRuntime::Internal_GetEnabledExtensionNamePtr)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x69f6694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(),
                                                             { "Internal_GetEnabledExtensionNamePtr", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRRuntime.Internal_SetSoftRestartLoopAtInitialization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::XR::OpenXR::OpenXRRuntime::Internal_SetSoftRestartLoopAtInitialization)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x69f6460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "Internal_SetSoftRestartLoopAtInitialization", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRRuntime.Internal_GetSoftRestartLoopAtInitialization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::XR::OpenXR::OpenXRRuntime::Internal_GetSoftRestartLoopAtInitialization)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x69f63f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "Internal_GetSoftRestartLoopAtInitialization", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRRuntime.Internal_GetEnabledExtensionName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t, ::by_ref<::StringW>)>(&::UnityEngine::XR::OpenXR::OpenXRRuntime::Internal_GetEnabledExtensionName)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x69f5ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(),
                                                             { "Internal_GetEnabledExtensionName", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRRuntime.Internal_GetAvailableExtensionCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::UnityEngine::XR::OpenXR::OpenXRRuntime::Internal_GetAvailableExtensionCount)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x69f5f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "Internal_GetAvailableExtensionCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRRuntime.Internal_GetAvailableExtensionNamePtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t, ::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::OpenXR::OpenXRRuntime::Internal_GetAvailableExtensionNamePtr)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x69f6718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(),
                                                             { "Internal_GetAvailableExtensionNamePtr", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRRuntime.Internal_GetAvailableExtensionName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t, ::by_ref<::StringW>)>(&::UnityEngine::XR::OpenXR::OpenXRRuntime::Internal_GetAvailableExtensionName)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x69f5fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(),
                                                             { "Internal_GetAvailableExtensionName", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRRuntime.Internal_GetLastError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::OpenXR::OpenXRRuntime::Internal_GetLastError)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x69f679c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "Internal_GetLastError", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRRuntime.GetLastError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::StringW>)>(&::UnityEngine::XR::OpenXR::OpenXRRuntime::GetLastError)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x69f6818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "GetLastError", {}, { ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRRuntime.LogLastError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::OpenXRRuntime::LogLastError)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x69f68c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "LogLastError", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::OpenXRRuntime::setStaticF_wantsToQuit(::System::Func_1<bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<bool>*, "wantsToQuit", ::UnityEngine::XR::OpenXR::OpenXRRuntime*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* UnityEngine::XR::OpenXR::OpenXRRuntime::getStaticF_wantsToQuit() {
  return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "wantsToQuit", ::UnityEngine::XR::OpenXR::OpenXRRuntime*>();
}
inline void UnityEngine::XR::OpenXR::OpenXRRuntime::setStaticF_wantsToRestart(::System::Func_1<bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<bool>*, "wantsToRestart", ::UnityEngine::XR::OpenXR::OpenXRRuntime*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* UnityEngine::XR::OpenXR::OpenXRRuntime::getStaticF_wantsToRestart() {
  return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "wantsToRestart", ::UnityEngine::XR::OpenXR::OpenXRRuntime*>();
}
inline ::StringW UnityEngine::XR::OpenXR::OpenXRRuntime::get_name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "get_name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::XR::OpenXR::OpenXRRuntime::get_version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "get_version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::XR::OpenXR::OpenXRRuntime::get_apiVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "get_apiVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::XR::OpenXR::OpenXRRuntime::get_pluginVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "get_pluginVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRRuntime::isRuntimeAPIVersionGreaterThan1_1() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "isRuntimeAPIVersionGreaterThan1_1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRRuntime::IsExtensionEnabled(::StringW extensionName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "IsExtensionEnabled", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, extensionName);
}
inline uint32_t UnityEngine::XR::OpenXR::OpenXRRuntime::GetExtensionVersion(::StringW extensionName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "GetExtensionVersion", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, extensionName);
}
inline ::ArrayW<::StringW> UnityEngine::XR::OpenXR::OpenXRRuntime::GetEnabledExtensions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "GetEnabledExtensions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method);
}
inline ::ArrayW<::StringW> UnityEngine::XR::OpenXR::OpenXRRuntime::GetAvailableExtensions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "GetAvailableExtensions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRRuntime::add_wantsToQuit(::System::Func_1<bool>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "add_wantsToQuit", {}, { ::i2c::type_of<::System::Func_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::XR::OpenXR::OpenXRRuntime::remove_wantsToQuit(::System::Func_1<bool>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "remove_wantsToQuit", {}, { ::i2c::type_of<::System::Func_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::XR::OpenXR::OpenXRRuntime::add_wantsToRestart(::System::Func_1<bool>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "add_wantsToRestart", {}, { ::i2c::type_of<::System::Func_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::XR::OpenXR::OpenXRRuntime::remove_wantsToRestart(::System::Func_1<bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "remove_wantsToRestart", {}, { ::i2c::type_of<::System::Func_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::XR::OpenXR::OpenXRRuntime::get_retryInitializationOnFormFactorErrors() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "get_retryInitializationOnFormFactorErrors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRRuntime::set_retryInitializationOnFormFactorErrors(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "set_retryInitializationOnFormFactorErrors", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::XR::OpenXR::OpenXRRuntime::InvokeEvent(::System::Func_1<bool>* func) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "InvokeEvent", {}, { ::i2c::type_of<::System::Func_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, func);
}
inline bool UnityEngine::XR::OpenXR::OpenXRRuntime::ShouldQuit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "ShouldQuit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRRuntime::ShouldRestart() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "ShouldRestart", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRRuntime::Internal_GetRuntimeName(::by_ref<::System::IntPtr> runtimeNamePtr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "Internal_GetRuntimeName", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, runtimeNamePtr);
}
inline bool UnityEngine::XR::OpenXR::OpenXRRuntime::Internal_GetRuntimeVersion(::by_ref<uint16_t> major, ::by_ref<uint16_t> minor, ::by_ref<uint32_t> patch) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(),
                                       { "Internal_GetRuntimeVersion", {}, { ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, major, minor, patch);
}
inline bool UnityEngine::XR::OpenXR::OpenXRRuntime::Internal_GetAPIVersion(::by_ref<uint16_t> major, ::by_ref<uint16_t> minor, ::by_ref<uint32_t> patch) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(),
                                              { "Internal_GetAPIVersion", {}, { ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, major, minor, patch);
}
inline bool UnityEngine::XR::OpenXR::OpenXRRuntime::Internal_GetPluginVersion(::by_ref<::System::IntPtr> pluginVersionPtr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "Internal_GetPluginVersion", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pluginVersionPtr);
}
inline bool UnityEngine::XR::OpenXR::OpenXRRuntime::Internal_IsExtensionEnabled(::StringW extensionName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "Internal_IsExtensionEnabled", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, extensionName);
}
inline uint32_t UnityEngine::XR::OpenXR::OpenXRRuntime::Internal_GetExtensionVersion(::StringW extensionName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "Internal_GetExtensionVersion", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, extensionName);
}
inline uint32_t UnityEngine::XR::OpenXR::OpenXRRuntime::Internal_GetEnabledExtensionCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "Internal_GetEnabledExtensionCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRRuntime::Internal_GetEnabledExtensionNamePtr(uint32_t index, ::by_ref<::System::IntPtr> outName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(),
                                                           { "Internal_GetEnabledExtensionNamePtr", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, index, outName);
}
inline void UnityEngine::XR::OpenXR::OpenXRRuntime::Internal_SetSoftRestartLoopAtInitialization(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "Internal_SetSoftRestartLoopAtInitialization", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::XR::OpenXR::OpenXRRuntime::Internal_GetSoftRestartLoopAtInitialization() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "Internal_GetSoftRestartLoopAtInitialization", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRRuntime::Internal_GetEnabledExtensionName(uint32_t index, ::by_ref<::StringW> extensionName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(),
                                                           { "Internal_GetEnabledExtensionName", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, index, extensionName);
}
inline uint32_t UnityEngine::XR::OpenXR::OpenXRRuntime::Internal_GetAvailableExtensionCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "Internal_GetAvailableExtensionCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRRuntime::Internal_GetAvailableExtensionNamePtr(uint32_t index, ::by_ref<::System::IntPtr> extensionName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(),
                                                           { "Internal_GetAvailableExtensionNamePtr", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, index, extensionName);
}
inline bool UnityEngine::XR::OpenXR::OpenXRRuntime::Internal_GetAvailableExtensionName(uint32_t index, ::by_ref<::StringW> extensionName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(),
                                                           { "Internal_GetAvailableExtensionName", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, index, extensionName);
}
inline bool UnityEngine::XR::OpenXR::OpenXRRuntime::Internal_GetLastError(::by_ref<::System::IntPtr> error) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "Internal_GetLastError", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, error);
}
inline bool UnityEngine::XR::OpenXR::OpenXRRuntime::GetLastError(::by_ref<::StringW> error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "GetLastError", {}, { ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, error);
}
inline void UnityEngine::XR::OpenXR::OpenXRRuntime::LogLastError() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRRuntime*>(), { "LogLastError", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::OpenXRRuntime::OpenXRRuntime() {}
