#pragma once
// IWYU pragma private; include "UnityEngine/SystemInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SystemInfo)
namespace System {
class Enum;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Experimental::Rendering {
struct DefaultFormat;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormatUsage;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering {
struct CopyTextureSupport;
}
namespace UnityEngine::Rendering {
struct FoveatedRenderingCaps;
}
namespace UnityEngine::Rendering {
struct GraphicsDeviceType;
}
namespace UnityEngine::Rendering {
struct RenderingThreadingMode;
}
namespace UnityEngine {
struct BatteryStatus;
}
namespace UnityEngine {
struct DeviceType;
}
namespace UnityEngine {
struct HDRDisplaySupportFlags;
}
namespace UnityEngine {
struct OperatingSystemFamily;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
struct RenderTextureFormat;
}
namespace UnityEngine {
struct TextureFormat;
}
// Forward declare root types
namespace UnityEngine {
class SystemInfo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SystemInfo);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.SystemInfo
class CORDL_TYPE SystemInfo : public ::System::Object {
public:
// Declarations
/// @brief Method GetBatteryLevel, addr 0x6925cec, size 0x28, virtual false, abstract: false, final false
static inline float_t GetBatteryLevel() ;

/// @brief Method GetBatteryStatus, addr 0x6925d3c, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::BatteryStatus GetBatteryStatus() ;

/// @brief Method GetCompatibleFormat, addr 0x69272fc, size 0x44, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetCompatibleFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage  usage) ;

/// @brief Method GetCopyTextureSupport, addr 0x69268a4, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::CopyTextureSupport GetCopyTextureSupport() ;

/// @brief Method GetDeviceModel, addr 0x69261c8, size 0xc4, virtual false, abstract: false, final false
static inline ::StringW GetDeviceModel() ;

/// @brief Method GetDeviceModel_Injected, addr 0x69271c8, size 0x3c, virtual false, abstract: false, final false
static inline void GetDeviceModel_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method GetDeviceName, addr 0x6926100, size 0xc4, virtual false, abstract: false, final false
static inline ::StringW GetDeviceName() ;

/// @brief Method GetDeviceName_Injected, addr 0x692718c, size 0x3c, virtual false, abstract: false, final false
static inline void GetDeviceName_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method GetDeviceType, addr 0x69262b4, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::DeviceType GetDeviceType() ;

/// @brief Method GetDeviceUniqueIdentifier, addr 0x6926038, size 0xc4, virtual false, abstract: false, final false
static inline ::StringW GetDeviceUniqueIdentifier() ;

/// @brief Method GetDeviceUniqueIdentifier_Injected, addr 0x6927150, size 0x3c, virtual false, abstract: false, final false
static inline void GetDeviceUniqueIdentifier_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method GetFoveatedRenderingCaps, addr 0x69267b4, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::FoveatedRenderingCaps GetFoveatedRenderingCaps() ;

/// @brief Method GetGraphicsDeviceID, addr 0x69264e4, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetGraphicsDeviceID() ;

/// @brief Method GetGraphicsDeviceName, addr 0x6926330, size 0xc4, virtual false, abstract: false, final false
static inline ::StringW GetGraphicsDeviceName() ;

/// @brief Method GetGraphicsDeviceName_Injected, addr 0x6927204, size 0x3c, virtual false, abstract: false, final false
static inline void GetGraphicsDeviceName_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method GetGraphicsDeviceType, addr 0x692655c, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::GraphicsDeviceType GetGraphicsDeviceType() ;

/// @brief Method GetGraphicsDeviceVendor, addr 0x69263f8, size 0xc4, virtual false, abstract: false, final false
static inline ::StringW GetGraphicsDeviceVendor() ;

/// @brief Method GetGraphicsDeviceVendorID, addr 0x6926534, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetGraphicsDeviceVendorID() ;

/// @brief Method GetGraphicsDeviceVendor_Injected, addr 0x6927240, size 0x3c, virtual false, abstract: false, final false
static inline void GetGraphicsDeviceVendor_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method GetGraphicsDeviceVersion, addr 0x69265d8, size 0xc4, virtual false, abstract: false, final false
static inline ::StringW GetGraphicsDeviceVersion() ;

/// @brief Method GetGraphicsDeviceVersion_Injected, addr 0x692727c, size 0x3c, virtual false, abstract: false, final false
static inline void GetGraphicsDeviceVersion_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method GetGraphicsFormat, addr 0x6927340, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat(::UnityEngine::Experimental::Rendering::DefaultFormat  format) ;

/// @brief Method GetGraphicsMemorySize, addr 0x6926304, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetGraphicsMemorySize() ;

/// @brief Method GetGraphicsMultiThreaded, addr 0x6926714, size 0x28, virtual false, abstract: false, final false
static inline bool GetGraphicsMultiThreaded() ;

/// @brief Method GetGraphicsShaderLevel, addr 0x69266c4, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetGraphicsShaderLevel() ;

/// @brief Method GetGraphicsUVStartsAtTop, addr 0x69265ac, size 0x28, virtual false, abstract: false, final false
static inline bool GetGraphicsUVStartsAtTop() ;

/// @brief Method GetHDRDisplaySupportFlags, addr 0x6926f48, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::HDRDisplaySupportFlags GetHDRDisplaySupportFlags() ;

/// @brief Method GetMaxRenderTextureSize, addr 0x6926e30, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetMaxRenderTextureSize() ;

/// @brief Method GetMaxTextureSize, addr 0x6926de0, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetMaxTextureSize() ;

/// @brief Method GetOperatingSystem, addr 0x6925d68, size 0xc4, virtual false, abstract: false, final false
static inline ::StringW GetOperatingSystem() ;

/// @brief Method GetOperatingSystemFamily, addr 0x6925e54, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::OperatingSystemFamily GetOperatingSystemFamily() ;

/// @brief Method GetOperatingSystem_Injected, addr 0x69270d8, size 0x3c, virtual false, abstract: false, final false
static inline void GetOperatingSystem_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method GetPhysicalMemoryMB, addr 0x692600c, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetPhysicalMemoryMB() ;

/// @brief Method GetProcessorCount, addr 0x6925fbc, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetProcessorCount() ;

/// @brief Method GetProcessorFrequencyMHz, addr 0x6925f6c, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetProcessorFrequencyMHz() ;

/// @brief Method GetProcessorType, addr 0x6925e80, size 0xc4, virtual false, abstract: false, final false
static inline ::StringW GetProcessorType() ;

/// @brief Method GetProcessorType_Injected, addr 0x6927114, size 0x3c, virtual false, abstract: false, final false
static inline void GetProcessorType_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method GetRenderTextureSupportedMSAASampleCount, addr 0x692737c, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetRenderTextureSupportedMSAASampleCount(::UnityEngine::RenderTextureDescriptor  desc) ;

/// @brief Method GetRenderTextureSupportedMSAASampleCount_Injected, addr 0x69273b8, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetRenderTextureSupportedMSAASampleCount_Injected(::ByRef<::UnityEngine::RenderTextureDescriptor>  desc) ;

/// @brief Method GetRenderingThreadingMode, addr 0x6926764, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::RenderingThreadingMode GetRenderingThreadingMode() ;

/// @brief Method HasHiddenSurfaceRemovalOnGPU, addr 0x6926804, size 0x28, virtual false, abstract: false, final false
static inline bool HasHiddenSurfaceRemovalOnGPU() ;

/// @brief Method HasRenderTextureNative, addr 0x6926c70, size 0x3c, virtual false, abstract: false, final false
static inline bool HasRenderTextureNative(::UnityEngine::RenderTextureFormat  format) ;

/// @brief Method IsFormatSupported, addr 0x69272b8, size 0x44, virtual false, abstract: false, final false
static inline bool IsFormatSupported(::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage  usage) ;

/// @brief Method IsValidEnumValue, addr 0x6926b4c, size 0x54, virtual false, abstract: false, final false
static inline bool IsValidEnumValue(::System::Enum*  value) ;

/// @brief Method MaxGraphicsBufferSize, addr 0x6926ea8, size 0x28, virtual false, abstract: false, final false
static inline int64_t MaxGraphicsBufferSize() ;

/// @brief Method SupportedRenderTargetCount, addr 0x69269e4, size 0x28, virtual false, abstract: false, final false
static inline int32_t SupportedRenderTargetCount() ;

/// @brief Method SupportsComputeShaders, addr 0x69268f4, size 0x28, virtual false, abstract: false, final false
static inline bool SupportsComputeShaders() ;

/// @brief Method SupportsGPUFence, addr 0x6926e80, size 0x28, virtual false, abstract: false, final false
static inline bool SupportsGPUFence() ;

/// @brief Method SupportsIndirectArgumentsBuffer, addr 0x69270b0, size 0x28, virtual false, abstract: false, final false
static inline bool SupportsIndirectArgumentsBuffer() ;

/// @brief Method SupportsInstancing, addr 0x6926994, size 0x28, virtual false, abstract: false, final false
static inline bool SupportsInstancing() ;

/// @brief Method SupportsMultisampleAutoResolve, addr 0x6926ad4, size 0x28, virtual false, abstract: false, final false
static inline bool SupportsMultisampleAutoResolve() ;

/// @brief Method SupportsMultisampleResolveDepth, addr 0x6927038, size 0x28, virtual false, abstract: false, final false
static inline bool SupportsMultisampleResolveDepth() ;

/// @brief Method SupportsMultisampleResolveStencil, addr 0x6927088, size 0x28, virtual false, abstract: false, final false
static inline bool SupportsMultisampleResolveStencil() ;

/// @brief Method SupportsMultisampledBackBuffer, addr 0x6926a84, size 0x28, virtual false, abstract: false, final false
static inline bool SupportsMultisampledBackBuffer() ;

/// @brief Method SupportsMultisampledTextures, addr 0x6926a34, size 0x28, virtual false, abstract: false, final false
static inline int32_t SupportsMultisampledTextures() ;

/// @brief Method SupportsMultiview, addr 0x6926f98, size 0x28, virtual false, abstract: false, final false
static inline bool SupportsMultiview() ;

/// @brief Method SupportsRenderTargetArrayIndexFromVertexShader, addr 0x6926944, size 0x28, virtual false, abstract: false, final false
static inline bool SupportsRenderTargetArrayIndexFromVertexShader() ;

/// @brief Method SupportsRenderTextureFormat, addr 0x6926ba0, size 0xd0, virtual false, abstract: false, final false
static inline bool SupportsRenderTextureFormat(::UnityEngine::RenderTextureFormat  format) ;

/// @brief Method SupportsShadows, addr 0x6926854, size 0x28, virtual false, abstract: false, final false
static inline bool SupportsShadows() ;

/// @brief Method SupportsStoreAndResolveAction, addr 0x6926fe8, size 0x28, virtual false, abstract: false, final false
static inline bool SupportsStoreAndResolveAction() ;

/// @brief Method SupportsTextureFormat, addr 0x6926cac, size 0xd0, virtual false, abstract: false, final false
static inline bool SupportsTextureFormat(::UnityEngine::TextureFormat  format) ;

/// @brief Method SupportsTextureFormatNative, addr 0x6926d7c, size 0x3c, virtual false, abstract: false, final false
static inline bool SupportsTextureFormatNative(::UnityEngine::TextureFormat  format) ;

/// @brief Method UsesLoadStoreActions, addr 0x6926ef8, size 0x28, virtual false, abstract: false, final false
static inline bool UsesLoadStoreActions() ;

/// @brief Method UsesReversedZBuffer, addr 0x6926b24, size 0x28, virtual false, abstract: false, final false
static inline bool UsesReversedZBuffer() ;

/// @brief Method get_batteryLevel, addr 0x6925cc4, size 0x28, virtual false, abstract: false, final false
static inline float_t get_batteryLevel() ;

/// @brief Method get_batteryStatus, addr 0x6925d14, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::BatteryStatus get_batteryStatus() ;

/// @brief Method get_copyTextureSupport, addr 0x692687c, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::CopyTextureSupport get_copyTextureSupport() ;

/// @brief Method get_deviceModel, addr 0x69261c4, size 0x4, virtual false, abstract: false, final false
static inline ::StringW get_deviceModel() ;

/// @brief Method get_deviceName, addr 0x69260fc, size 0x4, virtual false, abstract: false, final false
static inline ::StringW get_deviceName() ;

/// @brief Method get_deviceType, addr 0x692628c, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::DeviceType get_deviceType() ;

/// @brief Method get_deviceUniqueIdentifier, addr 0x6926034, size 0x4, virtual false, abstract: false, final false
static inline ::StringW get_deviceUniqueIdentifier() ;

/// @brief Method get_foveatedRenderingCaps, addr 0x692678c, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::FoveatedRenderingCaps get_foveatedRenderingCaps() ;

/// @brief Method get_graphicsDeviceID, addr 0x69264bc, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_graphicsDeviceID() ;

/// @brief Method get_graphicsDeviceName, addr 0x692632c, size 0x4, virtual false, abstract: false, final false
static inline ::StringW get_graphicsDeviceName() ;

/// @brief Method get_graphicsDeviceType, addr 0x6925b18, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::GraphicsDeviceType get_graphicsDeviceType() ;

/// @brief Method get_graphicsDeviceVendor, addr 0x69263f4, size 0x4, virtual false, abstract: false, final false
static inline ::StringW get_graphicsDeviceVendor() ;

/// @brief Method get_graphicsDeviceVendorID, addr 0x692650c, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_graphicsDeviceVendorID() ;

/// @brief Method get_graphicsDeviceVersion, addr 0x69265d4, size 0x4, virtual false, abstract: false, final false
static inline ::StringW get_graphicsDeviceVersion() ;

/// @brief Method get_graphicsMemorySize, addr 0x69262dc, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_graphicsMemorySize() ;

/// @brief Method get_graphicsMultiThreaded, addr 0x69266ec, size 0x28, virtual false, abstract: false, final false
static inline bool get_graphicsMultiThreaded() ;

/// @brief Method get_graphicsShaderLevel, addr 0x692669c, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_graphicsShaderLevel() ;

/// @brief Method get_graphicsUVStartsAtTop, addr 0x6926584, size 0x28, virtual false, abstract: false, final false
static inline bool get_graphicsUVStartsAtTop() ;

/// @brief Method get_hasHiddenSurfaceRemovalOnGPU, addr 0x69267dc, size 0x28, virtual false, abstract: false, final false
static inline bool get_hasHiddenSurfaceRemovalOnGPU() ;

/// @brief Method get_hdrDisplaySupportFlags, addr 0x6926f20, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::HDRDisplaySupportFlags get_hdrDisplaySupportFlags() ;

/// @brief Method get_maxGraphicsBufferSize, addr 0x692251c, size 0x28, virtual false, abstract: false, final false
static inline int64_t get_maxGraphicsBufferSize() ;

/// @brief Method get_maxRenderTextureSize, addr 0x6926e08, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_maxRenderTextureSize() ;

/// @brief Method get_maxTextureSize, addr 0x6926db8, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_maxTextureSize() ;

/// @brief Method get_operatingSystem, addr 0x6925d64, size 0x4, virtual false, abstract: false, final false
static inline ::StringW get_operatingSystem() ;

/// @brief Method get_operatingSystemFamily, addr 0x6925e2c, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::OperatingSystemFamily get_operatingSystemFamily() ;

/// @brief Method get_processorCount, addr 0x6925f94, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_processorCount() ;

/// @brief Method get_processorFrequency, addr 0x6925f44, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_processorFrequency() ;

/// @brief Method get_processorType, addr 0x6925e7c, size 0x4, virtual false, abstract: false, final false
static inline ::StringW get_processorType() ;

/// @brief Method get_renderingThreadingMode, addr 0x692673c, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::RenderingThreadingMode get_renderingThreadingMode() ;

/// @brief Method get_supportedRenderTargetCount, addr 0x69269bc, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_supportedRenderTargetCount() ;

/// @brief Method get_supportsComputeShaders, addr 0x69268cc, size 0x28, virtual false, abstract: false, final false
static inline bool get_supportsComputeShaders() ;

/// @brief Method get_supportsGraphicsFence, addr 0x6926e58, size 0x28, virtual false, abstract: false, final false
static inline bool get_supportsGraphicsFence() ;

/// @brief Method get_supportsIndirectArgumentsBuffer, addr 0x6925b40, size 0x28, virtual false, abstract: false, final false
static inline bool get_supportsIndirectArgumentsBuffer() ;

/// @brief Method get_supportsInstancing, addr 0x692696c, size 0x28, virtual false, abstract: false, final false
static inline bool get_supportsInstancing() ;

/// @brief Method get_supportsMultisampleAutoResolve, addr 0x6926aac, size 0x28, virtual false, abstract: false, final false
static inline bool get_supportsMultisampleAutoResolve() ;

/// @brief Method get_supportsMultisampleResolveDepth, addr 0x6927010, size 0x28, virtual false, abstract: false, final false
static inline bool get_supportsMultisampleResolveDepth() ;

/// @brief Method get_supportsMultisampleResolveStencil, addr 0x6927060, size 0x28, virtual false, abstract: false, final false
static inline bool get_supportsMultisampleResolveStencil() ;

/// @brief Method get_supportsMultisampledBackBuffer, addr 0x6926a5c, size 0x28, virtual false, abstract: false, final false
static inline bool get_supportsMultisampledBackBuffer() ;

/// @brief Method get_supportsMultisampledTextures, addr 0x6926a0c, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_supportsMultisampledTextures() ;

/// @brief Method get_supportsMultiview, addr 0x6926f70, size 0x28, virtual false, abstract: false, final false
static inline bool get_supportsMultiview() ;

/// @brief Method get_supportsRenderTargetArrayIndexFromVertexShader, addr 0x692691c, size 0x28, virtual false, abstract: false, final false
static inline bool get_supportsRenderTargetArrayIndexFromVertexShader() ;

/// @brief Method get_supportsShadows, addr 0x692682c, size 0x28, virtual false, abstract: false, final false
static inline bool get_supportsShadows() ;

/// @brief Method get_supportsStoreAndResolveAction, addr 0x6926fc0, size 0x28, virtual false, abstract: false, final false
static inline bool get_supportsStoreAndResolveAction() ;

/// @brief Method get_systemMemorySize, addr 0x6925fe4, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_systemMemorySize() ;

/// @brief Method get_usesLoadStoreActions, addr 0x6926ed0, size 0x28, virtual false, abstract: false, final false
static inline bool get_usesLoadStoreActions() ;

/// @brief Method get_usesReversedZBuffer, addr 0x6926afc, size 0x28, virtual false, abstract: false, final false
static inline bool get_usesReversedZBuffer() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SystemInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SystemInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SystemInfo(SystemInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SystemInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SystemInfo(SystemInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10388};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SystemInfo, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::SystemInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SystemInfo*, "UnityEngine", "SystemInfo");
