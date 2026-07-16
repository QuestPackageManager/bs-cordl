#pragma once
// IWYU pragma private; include "UnityEngine/SystemInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__SystemInfo_def.hpp"
#include "System/zzzz__Enum_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__DefaultFormat_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormatUsage_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/zzzz__CopyTextureSupport_def.hpp"
#include "UnityEngine/Rendering/zzzz__FoveatedRenderingCaps_def.hpp"
#include "UnityEngine/Rendering/zzzz__GraphicsDeviceType_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderingThreadingMode_def.hpp"
#include "UnityEngine/zzzz__BatteryStatus_def.hpp"
#include "UnityEngine/zzzz__DeviceType_def.hpp"
#include "UnityEngine/zzzz__HDRDisplaySupportFlags_def.hpp"
#include "UnityEngine/zzzz__OperatingSystemFamily_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__RenderTextureFormat_def.hpp"
#include "UnityEngine/zzzz__TextureFormat_def.hpp"
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_batteryLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::SystemInfo::get_batteryLevel)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aed018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_batteryLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_batteryStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::BatteryStatus (*)()>(&::UnityEngine::SystemInfo::get_batteryStatus)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aed068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_batteryStatus", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_operatingSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::SystemInfo::get_operatingSystem)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6aed0b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_operatingSystem", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_operatingSystemFamily
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::OperatingSystemFamily (*)()>(&::UnityEngine::SystemInfo::get_operatingSystemFamily)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aed180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_operatingSystemFamily", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_processorType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::SystemInfo::get_processorType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6aed1d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_processorType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_processorFrequency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::SystemInfo::get_processorFrequency)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aed298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_processorFrequency", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_processorCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::SystemInfo::get_processorCount)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aed2e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_processorCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_systemMemorySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::SystemInfo::get_systemMemorySize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aed338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_systemMemorySize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_deviceUniqueIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::SystemInfo::get_deviceUniqueIdentifier)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6aed388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_deviceUniqueIdentifier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_deviceName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::SystemInfo::get_deviceName)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6aed450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_deviceName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_deviceModel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::SystemInfo::get_deviceModel)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6aed518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_deviceModel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_deviceType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::DeviceType (*)()>(&::UnityEngine::SystemInfo::get_deviceType)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aed5e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_deviceType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_graphicsMemorySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::SystemInfo::get_graphicsMemorySize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aed630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_graphicsMemorySize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_graphicsDeviceName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::SystemInfo::get_graphicsDeviceName)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6aed680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_graphicsDeviceName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_graphicsDeviceVendor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::SystemInfo::get_graphicsDeviceVendor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6aed748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_graphicsDeviceVendor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_graphicsDeviceID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::SystemInfo::get_graphicsDeviceID)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aed810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_graphicsDeviceID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_graphicsDeviceVendorID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::SystemInfo::get_graphicsDeviceVendorID)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aed860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_graphicsDeviceVendorID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_graphicsDeviceType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::GraphicsDeviceType (*)()>(&::UnityEngine::SystemInfo::get_graphicsDeviceType)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aec958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_graphicsDeviceType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_graphicsUVStartsAtTop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::SystemInfo::get_graphicsUVStartsAtTop)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aed8d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_graphicsUVStartsAtTop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_graphicsDeviceVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::SystemInfo::get_graphicsDeviceVersion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6aed928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_graphicsDeviceVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_graphicsShaderLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::SystemInfo::get_graphicsShaderLevel)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aed9f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_graphicsShaderLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_graphicsMultiThreaded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::SystemInfo::get_graphicsMultiThreaded)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aeda40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_graphicsMultiThreaded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_renderingThreadingMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderingThreadingMode (*)()>(&::UnityEngine::SystemInfo::get_renderingThreadingMode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aeda90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_renderingThreadingMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_foveatedRenderingCaps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::FoveatedRenderingCaps (*)()>(&::UnityEngine::SystemInfo::get_foveatedRenderingCaps)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aedae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_foveatedRenderingCaps", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_hasHiddenSurfaceRemovalOnGPU
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::SystemInfo::get_hasHiddenSurfaceRemovalOnGPU)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aedb30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_hasHiddenSurfaceRemovalOnGPU", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_supportsShadows
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::SystemInfo::get_supportsShadows)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aedb80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_supportsShadows", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_copyTextureSupport
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::CopyTextureSupport (*)()>(&::UnityEngine::SystemInfo::get_copyTextureSupport)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aedbd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_copyTextureSupport", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_supportsComputeShaders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::SystemInfo::get_supportsComputeShaders)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aedc20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_supportsComputeShaders", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_supportsRenderTargetArrayIndexFromVertexShader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::SystemInfo::get_supportsRenderTargetArrayIndexFromVertexShader)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aedc70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_supportsRenderTargetArrayIndexFromVertexShader", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_supportsInstancing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::SystemInfo::get_supportsInstancing)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aedcc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_supportsInstancing", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_supportedRenderTargetCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::SystemInfo::get_supportedRenderTargetCount)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aedd10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_supportedRenderTargetCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_supportsMultisampledTextures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::SystemInfo::get_supportsMultisampledTextures)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aedd60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_supportsMultisampledTextures", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_supportsMultisampledBackBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::SystemInfo::get_supportsMultisampledBackBuffer)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aeddb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_supportsMultisampledBackBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_supportsMultisampleAutoResolve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::SystemInfo::get_supportsMultisampleAutoResolve)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aede00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_supportsMultisampleAutoResolve", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_usesReversedZBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::SystemInfo::get_usesReversedZBuffer)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aede50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_usesReversedZBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.IsValidEnumValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Enum*)>(&::UnityEngine::SystemInfo::IsValidEnumValue)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6aedea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "IsValidEnumValue", {}, { ::i2c::type_of<::System::Enum*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.SupportsRenderTextureFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::RenderTextureFormat)>(&::UnityEngine::SystemInfo::SupportsRenderTextureFormat)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6aedef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "SupportsRenderTextureFormat", {}, { ::i2c::type_of<::UnityEngine::RenderTextureFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.SupportsTextureFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::TextureFormat)>(&::UnityEngine::SystemInfo::SupportsTextureFormat)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6aee000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "SupportsTextureFormat", {}, { ::i2c::type_of<::UnityEngine::TextureFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_maxTextureSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::SystemInfo::get_maxTextureSize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aee10c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_maxTextureSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_maxRenderTextureSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::SystemInfo::get_maxRenderTextureSize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aee15c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_maxRenderTextureSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_supportsGraphicsFence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::SystemInfo::get_supportsGraphicsFence)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aee1ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_supportsGraphicsFence", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_maxGraphicsBufferSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)()>(&::UnityEngine::SystemInfo::get_maxGraphicsBufferSize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6ae935c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_maxGraphicsBufferSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_usesLoadStoreActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::SystemInfo::get_usesLoadStoreActions)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aee224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_usesLoadStoreActions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_hdrDisplaySupportFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::HDRDisplaySupportFlags (*)()>(&::UnityEngine::SystemInfo::get_hdrDisplaySupportFlags)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aee274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_hdrDisplaySupportFlags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_supportsMultiview
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::SystemInfo::get_supportsMultiview)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aee2c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_supportsMultiview", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_supportsStoreAndResolveAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::SystemInfo::get_supportsStoreAndResolveAction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aee314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_supportsStoreAndResolveAction", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_supportsMultisampleResolveDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::SystemInfo::get_supportsMultisampleResolveDepth)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aee364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_supportsMultisampleResolveDepth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_supportsMultisampleResolveStencil
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::SystemInfo::get_supportsMultisampleResolveStencil)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aee3b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_supportsMultisampleResolveStencil", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.get_supportsIndirectArgumentsBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::SystemInfo::get_supportsIndirectArgumentsBuffer)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aec980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_supportsIndirectArgumentsBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.GetBatteryLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::SystemInfo::GetBatteryLevel)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aed040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetBatteryLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.GetBatteryStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::BatteryStatus (*)()>(&::UnityEngine::SystemInfo::GetBatteryStatus)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aed090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetBatteryStatus", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.GetOperatingSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::SystemInfo::GetOperatingSystem)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6aed0bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetOperatingSystem", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.GetOperatingSystemFamily
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::OperatingSystemFamily (*)()>(&::UnityEngine::SystemInfo::GetOperatingSystemFamily)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aed1a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetOperatingSystemFamily", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.GetProcessorType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::SystemInfo::GetProcessorType)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6aed1d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetProcessorType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.GetProcessorFrequencyMHz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::SystemInfo::GetProcessorFrequencyMHz)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aed2c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetProcessorFrequencyMHz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.GetProcessorCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::SystemInfo::GetProcessorCount)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aed310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetProcessorCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.GetPhysicalMemoryMB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::SystemInfo::GetPhysicalMemoryMB)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aed360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetPhysicalMemoryMB", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.GetDeviceUniqueIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::SystemInfo::GetDeviceUniqueIdentifier)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6aed38c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetDeviceUniqueIdentifier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.GetDeviceName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::SystemInfo::GetDeviceName)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6aed454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetDeviceName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.GetDeviceModel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::SystemInfo::GetDeviceModel)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6aed51c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetDeviceModel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.GetDeviceType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::DeviceType (*)()>(&::UnityEngine::SystemInfo::GetDeviceType)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aed608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetDeviceType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.GetGraphicsMemorySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::SystemInfo::GetGraphicsMemorySize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aed658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetGraphicsMemorySize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.GetGraphicsDeviceName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::SystemInfo::GetGraphicsDeviceName)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6aed684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetGraphicsDeviceName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.GetGraphicsDeviceVendor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::SystemInfo::GetGraphicsDeviceVendor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6aed74c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetGraphicsDeviceVendor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.GetGraphicsDeviceID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::SystemInfo::GetGraphicsDeviceID)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aed838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetGraphicsDeviceID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.GetGraphicsDeviceVendorID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::SystemInfo::GetGraphicsDeviceVendorID)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aed888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetGraphicsDeviceVendorID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.GetGraphicsDeviceType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::GraphicsDeviceType (*)()>(&::UnityEngine::SystemInfo::GetGraphicsDeviceType)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aed8b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetGraphicsDeviceType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.GetGraphicsUVStartsAtTop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::SystemInfo::GetGraphicsUVStartsAtTop)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aed900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetGraphicsUVStartsAtTop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.GetGraphicsDeviceVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::SystemInfo::GetGraphicsDeviceVersion)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6aed92c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetGraphicsDeviceVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.GetGraphicsShaderLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::SystemInfo::GetGraphicsShaderLevel)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aeda18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetGraphicsShaderLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.GetGraphicsMultiThreaded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::SystemInfo::GetGraphicsMultiThreaded)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aeda68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetGraphicsMultiThreaded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.GetRenderingThreadingMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderingThreadingMode (*)()>(&::UnityEngine::SystemInfo::GetRenderingThreadingMode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aedab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetRenderingThreadingMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.GetFoveatedRenderingCaps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::FoveatedRenderingCaps (*)()>(&::UnityEngine::SystemInfo::GetFoveatedRenderingCaps)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aedb08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetFoveatedRenderingCaps", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.HasHiddenSurfaceRemovalOnGPU
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::SystemInfo::HasHiddenSurfaceRemovalOnGPU)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aedb58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "HasHiddenSurfaceRemovalOnGPU", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.SupportsShadows
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::SystemInfo::SupportsShadows)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aedba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "SupportsShadows", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.GetCopyTextureSupport
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::CopyTextureSupport (*)()>(&::UnityEngine::SystemInfo::GetCopyTextureSupport)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aedbf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetCopyTextureSupport", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.SupportsComputeShaders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::SystemInfo::SupportsComputeShaders)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aedc48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "SupportsComputeShaders", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.SupportsRenderTargetArrayIndexFromVertexShader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::SystemInfo::SupportsRenderTargetArrayIndexFromVertexShader)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aedc98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "SupportsRenderTargetArrayIndexFromVertexShader", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.SupportsInstancing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::SystemInfo::SupportsInstancing)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aedce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "SupportsInstancing", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.SupportedRenderTargetCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::SystemInfo::SupportedRenderTargetCount)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aedd38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "SupportedRenderTargetCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.SupportsMultisampledTextures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::SystemInfo::SupportsMultisampledTextures)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aedd88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "SupportsMultisampledTextures", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.SupportsMultisampledBackBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::SystemInfo::SupportsMultisampledBackBuffer)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aeddd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "SupportsMultisampledBackBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.SupportsMultisampleAutoResolve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::SystemInfo::SupportsMultisampleAutoResolve)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aede28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "SupportsMultisampleAutoResolve", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.UsesReversedZBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::SystemInfo::UsesReversedZBuffer)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aede78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "UsesReversedZBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.HasRenderTextureNative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::RenderTextureFormat)>(&::UnityEngine::SystemInfo::HasRenderTextureNative)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6aedfc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "HasRenderTextureNative", {}, { ::i2c::type_of<::UnityEngine::RenderTextureFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.SupportsTextureFormatNative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::TextureFormat)>(&::UnityEngine::SystemInfo::SupportsTextureFormatNative)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6aee0d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "SupportsTextureFormatNative", {}, { ::i2c::type_of<::UnityEngine::TextureFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.GetMaxTextureSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::SystemInfo::GetMaxTextureSize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aee134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetMaxTextureSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.GetMaxRenderTextureSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::SystemInfo::GetMaxRenderTextureSize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aee184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetMaxRenderTextureSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.SupportsGPUFence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::SystemInfo::SupportsGPUFence)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aee1d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "SupportsGPUFence", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.MaxGraphicsBufferSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)()>(&::UnityEngine::SystemInfo::MaxGraphicsBufferSize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aee1fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "MaxGraphicsBufferSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.IsFormatSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage)>(
    &::UnityEngine::SystemInfo::IsFormatSupported)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6aee60c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::SystemInfo*>(),
            { "IsFormatSupported", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUsage>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.GetCompatibleFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)(
    ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage)>(&::UnityEngine::SystemInfo::GetCompatibleFormat)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6aee650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetCompatibleFormat",
                                                                                                              {},
                                                                                                              { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                                                                                ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUsage>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.GetGraphicsFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)(::UnityEngine::Experimental::Rendering::DefaultFormat)>(
    &::UnityEngine::SystemInfo::GetGraphicsFormat)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6aee694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetGraphicsFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::DefaultFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.GetRenderTextureSupportedMSAASampleCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::RenderTextureDescriptor)>(&::UnityEngine::SystemInfo::GetRenderTextureSupportedMSAASampleCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6aee6d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetRenderTextureSupportedMSAASampleCount", {}, { ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.UsesLoadStoreActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::SystemInfo::UsesLoadStoreActions)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aee24c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "UsesLoadStoreActions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.GetHDRDisplaySupportFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::HDRDisplaySupportFlags (*)()>(&::UnityEngine::SystemInfo::GetHDRDisplaySupportFlags)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aee29c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetHDRDisplaySupportFlags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.SupportsMultiview
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::SystemInfo::SupportsMultiview)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aee2ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "SupportsMultiview", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.SupportsStoreAndResolveAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::SystemInfo::SupportsStoreAndResolveAction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aee33c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "SupportsStoreAndResolveAction", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.SupportsMultisampleResolveDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::SystemInfo::SupportsMultisampleResolveDepth)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aee38c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "SupportsMultisampleResolveDepth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.SupportsMultisampleResolveStencil
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::SystemInfo::SupportsMultisampleResolveStencil)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aee3dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "SupportsMultisampleResolveStencil", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.SupportsIndirectArgumentsBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::SystemInfo::SupportsIndirectArgumentsBuffer)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aee404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "SupportsIndirectArgumentsBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.GetOperatingSystem_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::SystemInfo::GetOperatingSystem_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6aee42c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetOperatingSystem_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.GetProcessorType_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::SystemInfo::GetProcessorType_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6aee468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetProcessorType_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.GetDeviceUniqueIdentifier_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::SystemInfo::GetDeviceUniqueIdentifier_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6aee4a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetDeviceUniqueIdentifier_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.GetDeviceName_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::SystemInfo::GetDeviceName_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6aee4e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetDeviceName_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.GetDeviceModel_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::SystemInfo::GetDeviceModel_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6aee51c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetDeviceModel_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.GetGraphicsDeviceName_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::SystemInfo::GetGraphicsDeviceName_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6aee558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetGraphicsDeviceName_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.GetGraphicsDeviceVendor_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::SystemInfo::GetGraphicsDeviceVendor_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6aee594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetGraphicsDeviceVendor_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.GetGraphicsDeviceVersion_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::SystemInfo::GetGraphicsDeviceVersion_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6aee5d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetGraphicsDeviceVersion_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SystemInfo.GetRenderTextureSupportedMSAASampleCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::RenderTextureDescriptor>)>(&::UnityEngine::SystemInfo::GetRenderTextureSupportedMSAASampleCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6aee70c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(),
                                                             { "GetRenderTextureSupportedMSAASampleCount_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>() } })));
    return ___internal_method;
  }
};
inline float_t UnityEngine::SystemInfo::get_batteryLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_batteryLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline ::UnityEngine::BatteryStatus UnityEngine::SystemInfo::get_batteryStatus() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_batteryStatus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::BatteryStatus>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::SystemInfo::get_operatingSystem() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_operatingSystem", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::UnityEngine::OperatingSystemFamily UnityEngine::SystemInfo::get_operatingSystemFamily() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_operatingSystemFamily", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::OperatingSystemFamily>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::SystemInfo::get_processorType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_processorType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::SystemInfo::get_processorFrequency() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_processorFrequency", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::SystemInfo::get_processorCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_processorCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::SystemInfo::get_systemMemorySize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_systemMemorySize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::SystemInfo::get_deviceUniqueIdentifier() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_deviceUniqueIdentifier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::SystemInfo::get_deviceName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_deviceName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::SystemInfo::get_deviceModel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_deviceModel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::UnityEngine::DeviceType UnityEngine::SystemInfo::get_deviceType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_deviceType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::DeviceType>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::SystemInfo::get_graphicsMemorySize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_graphicsMemorySize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::SystemInfo::get_graphicsDeviceName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_graphicsDeviceName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::SystemInfo::get_graphicsDeviceVendor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_graphicsDeviceVendor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::SystemInfo::get_graphicsDeviceID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_graphicsDeviceID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::SystemInfo::get_graphicsDeviceVendorID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_graphicsDeviceVendorID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::GraphicsDeviceType UnityEngine::SystemInfo::get_graphicsDeviceType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_graphicsDeviceType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::GraphicsDeviceType>(nullptr, ___internal_method);
}
inline bool UnityEngine::SystemInfo::get_graphicsUVStartsAtTop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_graphicsUVStartsAtTop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::SystemInfo::get_graphicsDeviceVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_graphicsDeviceVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::SystemInfo::get_graphicsShaderLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_graphicsShaderLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline bool UnityEngine::SystemInfo::get_graphicsMultiThreaded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_graphicsMultiThreaded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderingThreadingMode UnityEngine::SystemInfo::get_renderingThreadingMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_renderingThreadingMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderingThreadingMode>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::FoveatedRenderingCaps UnityEngine::SystemInfo::get_foveatedRenderingCaps() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_foveatedRenderingCaps", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::FoveatedRenderingCaps>(nullptr, ___internal_method);
}
inline bool UnityEngine::SystemInfo::get_hasHiddenSurfaceRemovalOnGPU() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_hasHiddenSurfaceRemovalOnGPU", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::SystemInfo::get_supportsShadows() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_supportsShadows", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::CopyTextureSupport UnityEngine::SystemInfo::get_copyTextureSupport() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_copyTextureSupport", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CopyTextureSupport>(nullptr, ___internal_method);
}
inline bool UnityEngine::SystemInfo::get_supportsComputeShaders() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_supportsComputeShaders", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::SystemInfo::get_supportsRenderTargetArrayIndexFromVertexShader() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_supportsRenderTargetArrayIndexFromVertexShader", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::SystemInfo::get_supportsInstancing() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_supportsInstancing", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::SystemInfo::get_supportedRenderTargetCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_supportedRenderTargetCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::SystemInfo::get_supportsMultisampledTextures() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_supportsMultisampledTextures", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline bool UnityEngine::SystemInfo::get_supportsMultisampledBackBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_supportsMultisampledBackBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::SystemInfo::get_supportsMultisampleAutoResolve() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_supportsMultisampleAutoResolve", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::SystemInfo::get_usesReversedZBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_usesReversedZBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::SystemInfo::IsValidEnumValue(::System::Enum* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "IsValidEnumValue", {}, { ::i2c::type_of<::System::Enum*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::SystemInfo::SupportsRenderTextureFormat(::UnityEngine::RenderTextureFormat format) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "SupportsRenderTextureFormat", {}, { ::i2c::type_of<::UnityEngine::RenderTextureFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, format);
}
inline bool UnityEngine::SystemInfo::SupportsTextureFormat(::UnityEngine::TextureFormat format) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "SupportsTextureFormat", {}, { ::i2c::type_of<::UnityEngine::TextureFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, format);
}
inline int32_t UnityEngine::SystemInfo::get_maxTextureSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_maxTextureSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::SystemInfo::get_maxRenderTextureSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_maxRenderTextureSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline bool UnityEngine::SystemInfo::get_supportsGraphicsFence() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_supportsGraphicsFence", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline int64_t UnityEngine::SystemInfo::get_maxGraphicsBufferSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_maxGraphicsBufferSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method);
}
inline bool UnityEngine::SystemInfo::get_usesLoadStoreActions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_usesLoadStoreActions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityEngine::HDRDisplaySupportFlags UnityEngine::SystemInfo::get_hdrDisplaySupportFlags() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_hdrDisplaySupportFlags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::HDRDisplaySupportFlags>(nullptr, ___internal_method);
}
inline bool UnityEngine::SystemInfo::get_supportsMultiview() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_supportsMultiview", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::SystemInfo::get_supportsStoreAndResolveAction() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_supportsStoreAndResolveAction", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::SystemInfo::get_supportsMultisampleResolveDepth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_supportsMultisampleResolveDepth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::SystemInfo::get_supportsMultisampleResolveStencil() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_supportsMultisampleResolveStencil", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::SystemInfo::get_supportsIndirectArgumentsBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "get_supportsIndirectArgumentsBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline float_t UnityEngine::SystemInfo::GetBatteryLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetBatteryLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline ::UnityEngine::BatteryStatus UnityEngine::SystemInfo::GetBatteryStatus() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetBatteryStatus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::BatteryStatus>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::SystemInfo::GetOperatingSystem() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetOperatingSystem", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::UnityEngine::OperatingSystemFamily UnityEngine::SystemInfo::GetOperatingSystemFamily() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetOperatingSystemFamily", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::OperatingSystemFamily>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::SystemInfo::GetProcessorType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetProcessorType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::SystemInfo::GetProcessorFrequencyMHz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetProcessorFrequencyMHz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::SystemInfo::GetProcessorCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetProcessorCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::SystemInfo::GetPhysicalMemoryMB() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetPhysicalMemoryMB", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::SystemInfo::GetDeviceUniqueIdentifier() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetDeviceUniqueIdentifier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::SystemInfo::GetDeviceName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetDeviceName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::SystemInfo::GetDeviceModel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetDeviceModel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::UnityEngine::DeviceType UnityEngine::SystemInfo::GetDeviceType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetDeviceType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::DeviceType>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::SystemInfo::GetGraphicsMemorySize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetGraphicsMemorySize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::SystemInfo::GetGraphicsDeviceName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetGraphicsDeviceName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::SystemInfo::GetGraphicsDeviceVendor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetGraphicsDeviceVendor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::SystemInfo::GetGraphicsDeviceID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetGraphicsDeviceID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::SystemInfo::GetGraphicsDeviceVendorID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetGraphicsDeviceVendorID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::GraphicsDeviceType UnityEngine::SystemInfo::GetGraphicsDeviceType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetGraphicsDeviceType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::GraphicsDeviceType>(nullptr, ___internal_method);
}
inline bool UnityEngine::SystemInfo::GetGraphicsUVStartsAtTop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetGraphicsUVStartsAtTop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::SystemInfo::GetGraphicsDeviceVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetGraphicsDeviceVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::SystemInfo::GetGraphicsShaderLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetGraphicsShaderLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline bool UnityEngine::SystemInfo::GetGraphicsMultiThreaded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetGraphicsMultiThreaded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderingThreadingMode UnityEngine::SystemInfo::GetRenderingThreadingMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetRenderingThreadingMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderingThreadingMode>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::FoveatedRenderingCaps UnityEngine::SystemInfo::GetFoveatedRenderingCaps() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetFoveatedRenderingCaps", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::FoveatedRenderingCaps>(nullptr, ___internal_method);
}
inline bool UnityEngine::SystemInfo::HasHiddenSurfaceRemovalOnGPU() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "HasHiddenSurfaceRemovalOnGPU", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::SystemInfo::SupportsShadows() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "SupportsShadows", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::CopyTextureSupport UnityEngine::SystemInfo::GetCopyTextureSupport() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetCopyTextureSupport", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CopyTextureSupport>(nullptr, ___internal_method);
}
inline bool UnityEngine::SystemInfo::SupportsComputeShaders() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "SupportsComputeShaders", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::SystemInfo::SupportsRenderTargetArrayIndexFromVertexShader() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "SupportsRenderTargetArrayIndexFromVertexShader", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::SystemInfo::SupportsInstancing() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "SupportsInstancing", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::SystemInfo::SupportedRenderTargetCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "SupportedRenderTargetCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::SystemInfo::SupportsMultisampledTextures() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "SupportsMultisampledTextures", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline bool UnityEngine::SystemInfo::SupportsMultisampledBackBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "SupportsMultisampledBackBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::SystemInfo::SupportsMultisampleAutoResolve() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "SupportsMultisampleAutoResolve", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::SystemInfo::UsesReversedZBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "UsesReversedZBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::SystemInfo::HasRenderTextureNative(::UnityEngine::RenderTextureFormat format) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "HasRenderTextureNative", {}, { ::i2c::type_of<::UnityEngine::RenderTextureFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, format);
}
inline bool UnityEngine::SystemInfo::SupportsTextureFormatNative(::UnityEngine::TextureFormat format) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "SupportsTextureFormatNative", {}, { ::i2c::type_of<::UnityEngine::TextureFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, format);
}
inline int32_t UnityEngine::SystemInfo::GetMaxTextureSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetMaxTextureSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::SystemInfo::GetMaxRenderTextureSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetMaxRenderTextureSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline bool UnityEngine::SystemInfo::SupportsGPUFence() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "SupportsGPUFence", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline int64_t UnityEngine::SystemInfo::MaxGraphicsBufferSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "MaxGraphicsBufferSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method);
}
inline bool UnityEngine::SystemInfo::IsFormatSupported(::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage usage) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::SystemInfo*>(),
          { "IsFormatSupported", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUsage>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, format, usage);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::SystemInfo::GetCompatibleFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                                                                           ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage usage) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::SystemInfo*>(),
          { "GetCompatibleFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUsage>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(nullptr, ___internal_method, format, usage);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::SystemInfo::GetGraphicsFormat(::UnityEngine::Experimental::Rendering::DefaultFormat format) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetGraphicsFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::DefaultFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(nullptr, ___internal_method, format);
}
inline int32_t UnityEngine::SystemInfo::GetRenderTextureSupportedMSAASampleCount(::UnityEngine::RenderTextureDescriptor desc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetRenderTextureSupportedMSAASampleCount", {}, { ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, desc);
}
inline bool UnityEngine::SystemInfo::UsesLoadStoreActions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "UsesLoadStoreActions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityEngine::HDRDisplaySupportFlags UnityEngine::SystemInfo::GetHDRDisplaySupportFlags() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetHDRDisplaySupportFlags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::HDRDisplaySupportFlags>(nullptr, ___internal_method);
}
inline bool UnityEngine::SystemInfo::SupportsMultiview() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "SupportsMultiview", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::SystemInfo::SupportsStoreAndResolveAction() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "SupportsStoreAndResolveAction", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::SystemInfo::SupportsMultisampleResolveDepth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "SupportsMultisampleResolveDepth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::SystemInfo::SupportsMultisampleResolveStencil() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "SupportsMultisampleResolveStencil", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::SystemInfo::SupportsIndirectArgumentsBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "SupportsIndirectArgumentsBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::SystemInfo::GetOperatingSystem_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetOperatingSystem_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::SystemInfo::GetProcessorType_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetProcessorType_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::SystemInfo::GetDeviceUniqueIdentifier_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetDeviceUniqueIdentifier_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::SystemInfo::GetDeviceName_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetDeviceName_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::SystemInfo::GetDeviceModel_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetDeviceModel_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::SystemInfo::GetGraphicsDeviceName_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetGraphicsDeviceName_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::SystemInfo::GetGraphicsDeviceVendor_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetGraphicsDeviceVendor_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::SystemInfo::GetGraphicsDeviceVersion_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(), { "GetGraphicsDeviceVersion_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline int32_t UnityEngine::SystemInfo::GetRenderTextureSupportedMSAASampleCount_Injected(::by_ref<::UnityEngine::RenderTextureDescriptor> desc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SystemInfo*>(),
                                                           { "GetRenderTextureSupportedMSAASampleCount_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, desc);
}
// Ctor Parameters []
constexpr ::UnityEngine::SystemInfo::SystemInfo() {}
