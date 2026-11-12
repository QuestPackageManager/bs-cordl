#pragma once
// IWYU pragma private; include "UnityEngine/SystemInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
MARK_REF_T(::UnityEngine::SystemInfo*);
DEFINE_IL2CPP_CLASS(::UnityEngine::SystemInfo*, "UnityEngine", "SystemInfo");
// [NativeHeader("Runtime/Input/GetInput.h")]
// [NativeHeader("Runtime/Misc/SystemInfoRendering.h")]
// [NativeHeader("Runtime/Misc/SystemInfoMemory.h")]
// [NativeHeader("Runtime/Misc/SystemInfo.h")]
// [NativeHeader("Runtime/Shaders/GraphicsCapsScriptBindings.h")]
// [NativeHeader("Runtime/Graphics/GraphicsFormatUtility.bindings.h")]
// [NativeHeader("Runtime/Camera/RenderLoops/MotionVectorRenderLoop.h")]
// [NativeHeader("Runtime/Graphics/Mesh/MeshScriptBindings.h")]
// [NativeHeader("Runtime/Misc/SystemInfoAudio.h")]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.SystemInfo
class CORDL_TYPE SystemInfo : public ::System::Object {
public:
  // Declarations
  /// [FreeFunction("systeminfo::GetBatteryLevel")]
  /// @brief Method GetBatteryLevel, addr 0x6f88f5c, size 0x28, virtual false, abstract: false, final false
  static inline float_t GetBatteryLevel();

  /// [FreeFunction("systeminfo::GetBatteryStatus")]
  /// @brief Method GetBatteryStatus, addr 0x6f88fac, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::BatteryStatus GetBatteryStatus();

  /// [FreeFunction("ScriptingGraphicsCaps::GetCompatibleFormat")]
  /// @brief Method GetCompatibleFormat, addr 0x6f8a748, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetCompatibleFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                                                           ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage usage);

  /// [FreeFunction("ScriptingGraphicsCaps::GetCopyTextureSupport")]
  /// @brief Method GetCopyTextureSupport, addr 0x6f89af4, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::CopyTextureSupport GetCopyTextureSupport();

  /// [FreeFunction("systeminfo::GetDeviceModel")]
  /// @brief Method GetDeviceModel, addr 0x6f89428, size 0xc0, virtual false, abstract: false, final false
  static inline ::StringW GetDeviceModel();

  /// @brief Method GetDeviceModel_Injected, addr 0x6f8a614, size 0x3c, virtual false, abstract: false, final false
  static inline void GetDeviceModel_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// [FreeFunction("systeminfo::GetDeviceName")]
  /// @brief Method GetDeviceName, addr 0x6f89364, size 0xc0, virtual false, abstract: false, final false
  static inline ::StringW GetDeviceName();

  /// @brief Method GetDeviceName_Injected, addr 0x6f8a5d8, size 0x3c, virtual false, abstract: false, final false
  static inline void GetDeviceName_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// [FreeFunction("systeminfo::GetDeviceType")]
  /// @brief Method GetDeviceType, addr 0x6f89510, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::DeviceType GetDeviceType();

  /// [FreeFunction("systeminfo::GetDeviceUniqueIdentifier")]
  /// @brief Method GetDeviceUniqueIdentifier, addr 0x6f892a0, size 0xc0, virtual false, abstract: false, final false
  static inline ::StringW GetDeviceUniqueIdentifier();

  /// @brief Method GetDeviceUniqueIdentifier_Injected, addr 0x6f8a59c, size 0x3c, virtual false, abstract: false, final false
  static inline void GetDeviceUniqueIdentifier_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// [FreeFunction("ScriptingGraphicsCaps::GetFoveatedRenderingCaps")]
  /// @brief Method GetFoveatedRenderingCaps, addr 0x6f89a04, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::FoveatedRenderingCaps GetFoveatedRenderingCaps();

  /// [FreeFunction("ScriptingGraphicsCaps::GetGraphicsDeviceID")]
  /// @brief Method GetGraphicsDeviceID, addr 0x6f89738, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetGraphicsDeviceID();

  /// [FreeFunction("ScriptingGraphicsCaps::GetGraphicsDeviceName")]
  /// @brief Method GetGraphicsDeviceName, addr 0x6f8958c, size 0xc0, virtual false, abstract: false, final false
  static inline ::StringW GetGraphicsDeviceName();

  /// @brief Method GetGraphicsDeviceName_Injected, addr 0x6f8a650, size 0x3c, virtual false, abstract: false, final false
  static inline void GetGraphicsDeviceName_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// [FreeFunction("ScriptingGraphicsCaps::GetGraphicsDeviceType")]
  /// @brief Method GetGraphicsDeviceType, addr 0x6f897b0, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::GraphicsDeviceType GetGraphicsDeviceType();

  /// [FreeFunction("ScriptingGraphicsCaps::GetGraphicsDeviceVendor")]
  /// @brief Method GetGraphicsDeviceVendor, addr 0x6f89650, size 0xc0, virtual false, abstract: false, final false
  static inline ::StringW GetGraphicsDeviceVendor();

  /// [FreeFunction("ScriptingGraphicsCaps::GetGraphicsDeviceVendorID")]
  /// @brief Method GetGraphicsDeviceVendorID, addr 0x6f89788, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetGraphicsDeviceVendorID();

  /// @brief Method GetGraphicsDeviceVendor_Injected, addr 0x6f8a68c, size 0x3c, virtual false, abstract: false, final false
  static inline void GetGraphicsDeviceVendor_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// [FreeFunction("ScriptingGraphicsCaps::GetGraphicsDeviceVersion")]
  /// @brief Method GetGraphicsDeviceVersion, addr 0x6f8982c, size 0xc0, virtual false, abstract: false, final false
  static inline ::StringW GetGraphicsDeviceVersion();

  /// @brief Method GetGraphicsDeviceVersion_Injected, addr 0x6f8a6c8, size 0x3c, virtual false, abstract: false, final false
  static inline void GetGraphicsDeviceVersion_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// [FreeFunction("ScriptingGraphicsCaps::GetGraphicsFormat")]
  /// @brief Method GetGraphicsFormat, addr 0x6f8a78c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat(::UnityEngine::Experimental::Rendering::DefaultFormat format);

  /// [FreeFunction("ScriptingGraphicsCaps::GetGraphicsMemorySize")]
  /// @brief Method GetGraphicsMemorySize, addr 0x6f89560, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetGraphicsMemorySize();

  /// [FreeFunction("ScriptingGraphicsCaps::GetGraphicsMultiThreaded")]
  /// @brief Method GetGraphicsMultiThreaded, addr 0x6f89964, size 0x28, virtual false, abstract: false, final false
  static inline bool GetGraphicsMultiThreaded();

  /// [FreeFunction("ScriptingGraphicsCaps::GetGraphicsShaderLevel")]
  /// @brief Method GetGraphicsShaderLevel, addr 0x6f89914, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetGraphicsShaderLevel();

  /// [FreeFunction("ScriptingGraphicsCaps::GetGraphicsUVStartsAtTop")]
  /// @brief Method GetGraphicsUVStartsAtTop, addr 0x6f89800, size 0x28, virtual false, abstract: false, final false
  static inline bool GetGraphicsUVStartsAtTop();

  /// [FreeFunction("ScriptingGraphicsCaps::GetHDRDisplaySupportFlags")]
  /// @brief Method GetHDRDisplaySupportFlags, addr 0x6f8a394, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::HDRDisplaySupportFlags GetHDRDisplaySupportFlags();

  /// [FreeFunction("ScriptingGraphicsCaps::GetMaxRenderTextureSize")]
  /// @brief Method GetMaxRenderTextureSize, addr 0x6f8a27c, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetMaxRenderTextureSize();

  /// [FreeFunction("ScriptingGraphicsCaps::GetMaxTextureSize")]
  /// @brief Method GetMaxTextureSize, addr 0x6f8a22c, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetMaxTextureSize();

  /// [FreeFunction("systeminfo::GetOperatingSystem")]
  /// @brief Method GetOperatingSystem, addr 0x6f88fd8, size 0xc0, virtual false, abstract: false, final false
  static inline ::StringW GetOperatingSystem();

  /// [FreeFunction("systeminfo::GetOperatingSystemFamily")]
  /// @brief Method GetOperatingSystemFamily, addr 0x6f890c0, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::OperatingSystemFamily GetOperatingSystemFamily();

  /// @brief Method GetOperatingSystem_Injected, addr 0x6f8a524, size 0x3c, virtual false, abstract: false, final false
  static inline void GetOperatingSystem_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// [FreeFunction("systeminfo::GetPhysicalMemoryMB")]
  /// @brief Method GetPhysicalMemoryMB, addr 0x6f89274, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetPhysicalMemoryMB();

  /// [FreeFunction("systeminfo::GetProcessorCount")]
  /// @brief Method GetProcessorCount, addr 0x6f89224, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetProcessorCount();

  /// [FreeFunction("systeminfo::GetProcessorFrequencyMHz")]
  /// @brief Method GetProcessorFrequencyMHz, addr 0x6f891d4, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetProcessorFrequencyMHz();

  /// [FreeFunction("systeminfo::GetProcessorType")]
  /// @brief Method GetProcessorType, addr 0x6f890ec, size 0xc0, virtual false, abstract: false, final false
  static inline ::StringW GetProcessorType();

  /// @brief Method GetProcessorType_Injected, addr 0x6f8a560, size 0x3c, virtual false, abstract: false, final false
  static inline void GetProcessorType_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// [FreeFunction("ScriptingGraphicsCaps::GetRenderTextureSupportedMSAASampleCount")]
  /// @brief Method GetRenderTextureSupportedMSAASampleCount, addr 0x6f8a7c8, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetRenderTextureSupportedMSAASampleCount(::UnityEngine::RenderTextureDescriptor desc);

  /// @brief Method GetRenderTextureSupportedMSAASampleCount_Injected, addr 0x6f8a804, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetRenderTextureSupportedMSAASampleCount_Injected(::by_ref<::UnityEngine::RenderTextureDescriptor const> desc);

  /// [FreeFunction("ScriptingGraphicsCaps::GetRenderingThreadingMode")]
  /// @brief Method GetRenderingThreadingMode, addr 0x6f899b4, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderingThreadingMode GetRenderingThreadingMode();

  /// [FreeFunction("ScriptingGraphicsCaps::GetTiledRenderTargetStorageSize")]
  /// @brief Method GetTiledRenderTargetStorageSize, addr 0x6f8a840, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetTiledRenderTargetStorageSize(::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t sampleCount);

  /// [FreeFunction("ScriptingGraphicsCaps::HasHiddenSurfaceRemovalOnGPU")]
  /// @brief Method HasHiddenSurfaceRemovalOnGPU, addr 0x6f89a54, size 0x28, virtual false, abstract: false, final false
  static inline bool HasHiddenSurfaceRemovalOnGPU();

  /// [FreeFunction("ScriptingGraphicsCaps::HasRenderTexture")]
  /// @brief Method HasRenderTextureNative, addr 0x6f89fb0, size 0x3c, virtual false, abstract: false, final false
  static inline bool HasRenderTextureNative(::UnityEngine::RenderTextureFormat format);

  /// [FreeFunction("ScriptingGraphicsCaps::IsFormatSupported")]
  /// @brief Method IsFormatSupported, addr 0x6f8a704, size 0x44, virtual false, abstract: false, final false
  static inline bool IsFormatSupported(::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage usage);

  /// @brief Method IsValidEnumValue, addr 0x6f89e8c, size 0x54, virtual false, abstract: false, final false
  static inline bool IsValidEnumValue(::System::Enum* value);

  /// [FreeFunction("ScriptingGraphicsCaps::MaxGraphicsBufferSize")]
  /// @brief Method MaxGraphicsBufferSize, addr 0x6f8a344, size 0x28, virtual false, abstract: false, final false
  static inline int64_t MaxGraphicsBufferSize();

  /// [FreeFunction("ScriptingGraphicsCaps::MaxTiledPixelStorageSize")]
  /// @brief Method MaxTiledPixelStorageSize, addr 0x6f89e64, size 0x28, virtual false, abstract: false, final false
  static inline int32_t MaxTiledPixelStorageSize();

  /// [FreeFunction("ScriptingGraphicsCaps::SupportedRenderTargetCount")]
  /// @brief Method SupportedRenderTargetCount, addr 0x6f89c34, size 0x28, virtual false, abstract: false, final false
  static inline int32_t SupportedRenderTargetCount();

  /// [FreeFunction("ScriptingGraphicsCaps::SupportsComputeShaders")]
  /// @brief Method SupportsComputeShaders, addr 0x6f89b44, size 0x28, virtual false, abstract: false, final false
  static inline bool SupportsComputeShaders();

  /// [FreeFunction("ScriptingGraphicsCaps::SupportsGPUFence")]
  /// @brief Method SupportsGPUFence, addr 0x6f8a2cc, size 0x28, virtual false, abstract: false, final false
  static inline bool SupportsGPUFence();

  /// [FreeFunction("ScriptingGraphicsCaps::SupportsIndirectArgumentsBuffer")]
  /// @brief Method SupportsIndirectArgumentsBuffer, addr 0x6f8a4fc, size 0x28, virtual false, abstract: false, final false
  static inline bool SupportsIndirectArgumentsBuffer();

  /// [FreeFunction("ScriptingGraphicsCaps::SupportsInstancing")]
  /// @brief Method SupportsInstancing, addr 0x6f89be4, size 0x28, virtual false, abstract: false, final false
  static inline bool SupportsInstancing();

  /// [FreeFunction("ScriptingGraphicsCaps::SupportsMemorylessTextures")]
  /// @brief Method SupportsMemorylessTextures, addr 0x6f89d24, size 0x28, virtual false, abstract: false, final false
  static inline bool SupportsMemorylessTextures();

  /// [FreeFunction("ScriptingGraphicsCaps::SupportsMultisampleAutoResolve")]
  /// @brief Method SupportsMultisampleAutoResolve, addr 0x6f89d74, size 0x28, virtual false, abstract: false, final false
  static inline bool SupportsMultisampleAutoResolve();

  /// [FreeFunction("ScriptingGraphicsCaps::SupportsMultisampleResolveDepth")]
  /// @brief Method SupportsMultisampleResolveDepth, addr 0x6f8a484, size 0x28, virtual false, abstract: false, final false
  static inline bool SupportsMultisampleResolveDepth();

  /// [FreeFunction("ScriptingGraphicsCaps::SupportsMultisampleResolveStencil")]
  /// @brief Method SupportsMultisampleResolveStencil, addr 0x6f8a4d4, size 0x28, virtual false, abstract: false, final false
  static inline bool SupportsMultisampleResolveStencil();

  /// [FreeFunction("ScriptingGraphicsCaps::SupportsMultisampledBackBuffer")]
  /// @brief Method SupportsMultisampledBackBuffer, addr 0x6f89cd4, size 0x28, virtual false, abstract: false, final false
  static inline bool SupportsMultisampledBackBuffer();

  /// [FreeFunction("ScriptingGraphicsCaps::SupportsMultisampledShaderResolve")]
  /// @brief Method SupportsMultisampledShaderResolve, addr 0x6f89dc4, size 0x28, virtual false, abstract: false, final false
  static inline bool SupportsMultisampledShaderResolve();

  /// [FreeFunction("ScriptingGraphicsCaps::SupportsMultisampledTextures")]
  /// @brief Method SupportsMultisampledTextures, addr 0x6f89c84, size 0x28, virtual false, abstract: false, final false
  static inline int32_t SupportsMultisampledTextures();

  /// [FreeFunction("ScriptingGraphicsCaps::SupportsMultiview")]
  /// @brief Method SupportsMultiview, addr 0x6f8a3e4, size 0x28, virtual false, abstract: false, final false
  static inline bool SupportsMultiview();

  /// @brief Method SupportsRandomWriteOnRenderTextureFormat, addr 0x6f89fec, size 0xd0, virtual false, abstract: false, final false
  static inline bool SupportsRandomWriteOnRenderTextureFormat(::UnityEngine::RenderTextureFormat format);

  /// [FreeFunction("ScriptingGraphicsCaps::SupportsRandomWriteOnRenderTextureFormat")]
  /// @brief Method SupportsRandomWriteOnRenderTextureFormatNative, addr 0x6f8a0bc, size 0x3c, virtual false, abstract: false, final false
  static inline bool SupportsRandomWriteOnRenderTextureFormatNative(::UnityEngine::RenderTextureFormat format);

  /// [FreeFunction("ScriptingGraphicsCaps::SupportsRayTracing")]
  /// @brief Method SupportsRayTracing, addr 0x6f8a31c, size 0x28, virtual false, abstract: false, final false
  static inline bool SupportsRayTracing();

  /// [FreeFunction("ScriptingGraphicsCaps::SupportsRenderTargetArrayIndexFromVertexShader")]
  /// @brief Method SupportsRenderTargetArrayIndexFromVertexShader, addr 0x6f89b94, size 0x28, virtual false, abstract: false, final false
  static inline bool SupportsRenderTargetArrayIndexFromVertexShader();

  /// @brief Method SupportsRenderTextureFormat, addr 0x6f89ee0, size 0xd0, virtual false, abstract: false, final false
  static inline bool SupportsRenderTextureFormat(::UnityEngine::RenderTextureFormat format);

  /// [FreeFunction("ScriptingGraphicsCaps::SupportsShadows")]
  /// @brief Method SupportsShadows, addr 0x6f89aa4, size 0x28, virtual false, abstract: false, final false
  static inline bool SupportsShadows();

  /// [FreeFunction("ScriptingGraphicsCaps::SupportsStoreAndResolveAction")]
  /// @brief Method SupportsStoreAndResolveAction, addr 0x6f8a434, size 0x28, virtual false, abstract: false, final false
  static inline bool SupportsStoreAndResolveAction();

  /// @brief Method SupportsTextureFormat, addr 0x6f8a0f8, size 0xd0, virtual false, abstract: false, final false
  static inline bool SupportsTextureFormat(::UnityEngine::TextureFormat format);

  /// [FreeFunction("ScriptingGraphicsCaps::SupportsTextureFormat")]
  /// @brief Method SupportsTextureFormatNative, addr 0x6f8a1c8, size 0x3c, virtual false, abstract: false, final false
  static inline bool SupportsTextureFormatNative(::UnityEngine::TextureFormat format);

  /// [FreeFunction("ScriptingGraphicsCaps::UsesReversedZBuffer")]
  /// @brief Method UsesReversedZBuffer, addr 0x6f89e14, size 0x28, virtual false, abstract: false, final false
  static inline bool UsesReversedZBuffer();

  /// @brief Method get_batteryLevel, addr 0x6f88f34, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_batteryLevel();

  /// @brief Method get_batteryStatus, addr 0x6f88f84, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::BatteryStatus get_batteryStatus();

  /// @brief Method get_copyTextureSupport, addr 0x6f89acc, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::CopyTextureSupport get_copyTextureSupport();

  /// @brief Method get_deviceModel, addr 0x6f89424, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW get_deviceModel();

  /// @brief Method get_deviceName, addr 0x6f89360, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW get_deviceName();

  /// @brief Method get_deviceType, addr 0x6f894e8, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::DeviceType get_deviceType();

  /// @brief Method get_deviceUniqueIdentifier, addr 0x6f8929c, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW get_deviceUniqueIdentifier();

  /// @brief Method get_foveatedRenderingCaps, addr 0x6f899dc, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::FoveatedRenderingCaps get_foveatedRenderingCaps();

  /// @brief Method get_graphicsDeviceID, addr 0x6f89710, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_graphicsDeviceID();

  /// @brief Method get_graphicsDeviceName, addr 0x6f89588, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW get_graphicsDeviceName();

  /// @brief Method get_graphicsDeviceType, addr 0x6f8889c, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::GraphicsDeviceType get_graphicsDeviceType();

  /// @brief Method get_graphicsDeviceVendor, addr 0x6f8964c, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW get_graphicsDeviceVendor();

  /// @brief Method get_graphicsDeviceVendorID, addr 0x6f89760, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_graphicsDeviceVendorID();

  /// @brief Method get_graphicsDeviceVersion, addr 0x6f89828, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW get_graphicsDeviceVersion();

  /// @brief Method get_graphicsMemorySize, addr 0x6f89538, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_graphicsMemorySize();

  /// @brief Method get_graphicsMultiThreaded, addr 0x6f8993c, size 0x28, virtual false, abstract: false, final false
  static inline bool get_graphicsMultiThreaded();

  /// @brief Method get_graphicsShaderLevel, addr 0x6f898ec, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_graphicsShaderLevel();

  /// @brief Method get_graphicsUVStartsAtTop, addr 0x6f897d8, size 0x28, virtual false, abstract: false, final false
  static inline bool get_graphicsUVStartsAtTop();

  /// @brief Method get_hasHiddenSurfaceRemovalOnGPU, addr 0x6f89a2c, size 0x28, virtual false, abstract: false, final false
  static inline bool get_hasHiddenSurfaceRemovalOnGPU();

  /// @brief Method get_hdrDisplaySupportFlags, addr 0x6f8a36c, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::HDRDisplaySupportFlags get_hdrDisplaySupportFlags();

  /// @brief Method get_maxGraphicsBufferSize, addr 0x6f8547c, size 0x28, virtual false, abstract: false, final false
  static inline int64_t get_maxGraphicsBufferSize();

  /// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
  /// @brief Method get_maxRenderTextureSize, addr 0x6f8a254, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_maxRenderTextureSize();

  /// @brief Method get_maxTextureSize, addr 0x6f8a204, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_maxTextureSize();

  /// @brief Method get_maxTiledPixelStorageSize, addr 0x6f89e3c, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_maxTiledPixelStorageSize();

  /// @brief Method get_operatingSystem, addr 0x6f88fd4, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW get_operatingSystem();

  /// @brief Method get_operatingSystemFamily, addr 0x6f89098, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::OperatingSystemFamily get_operatingSystemFamily();

  /// @brief Method get_processorCount, addr 0x6f891fc, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_processorCount();

  /// @brief Method get_processorFrequency, addr 0x6f891ac, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_processorFrequency();

  /// @brief Method get_processorType, addr 0x6f890e8, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW get_processorType();

  /// @brief Method get_renderingThreadingMode, addr 0x6f8998c, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderingThreadingMode get_renderingThreadingMode();

  /// @brief Method get_supportedRenderTargetCount, addr 0x6f89c0c, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_supportedRenderTargetCount();

  /// @brief Method get_supportsComputeShaders, addr 0x6f89b1c, size 0x28, virtual false, abstract: false, final false
  static inline bool get_supportsComputeShaders();

  /// @brief Method get_supportsGraphicsFence, addr 0x6f8a2a4, size 0x28, virtual false, abstract: false, final false
  static inline bool get_supportsGraphicsFence();

  /// @brief Method get_supportsIndirectArgumentsBuffer, addr 0x6f888c4, size 0x28, virtual false, abstract: false, final false
  static inline bool get_supportsIndirectArgumentsBuffer();

  /// @brief Method get_supportsInstancing, addr 0x6f89bbc, size 0x28, virtual false, abstract: false, final false
  static inline bool get_supportsInstancing();

  /// @brief Method get_supportsMemorylessTextures, addr 0x6f89cfc, size 0x28, virtual false, abstract: false, final false
  static inline bool get_supportsMemorylessTextures();

  /// @brief Method get_supportsMultisampleAutoResolve, addr 0x6f89d4c, size 0x28, virtual false, abstract: false, final false
  static inline bool get_supportsMultisampleAutoResolve();

  /// @brief Method get_supportsMultisampleResolveDepth, addr 0x6f8a45c, size 0x28, virtual false, abstract: false, final false
  static inline bool get_supportsMultisampleResolveDepth();

  /// @brief Method get_supportsMultisampleResolveStencil, addr 0x6f8a4ac, size 0x28, virtual false, abstract: false, final false
  static inline bool get_supportsMultisampleResolveStencil();

  /// @brief Method get_supportsMultisampledBackBuffer, addr 0x6f89cac, size 0x28, virtual false, abstract: false, final false
  static inline bool get_supportsMultisampledBackBuffer();

  /// @brief Method get_supportsMultisampledShaderResolve, addr 0x6f89d9c, size 0x28, virtual false, abstract: false, final false
  static inline bool get_supportsMultisampledShaderResolve();

  /// @brief Method get_supportsMultisampledTextures, addr 0x6f89c5c, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_supportsMultisampledTextures();

  /// @brief Method get_supportsMultiview, addr 0x6f8a3bc, size 0x28, virtual false, abstract: false, final false
  static inline bool get_supportsMultiview();

  /// @brief Method get_supportsRayTracing, addr 0x6f8a2f4, size 0x28, virtual false, abstract: false, final false
  static inline bool get_supportsRayTracing();

  /// @brief Method get_supportsRenderTargetArrayIndexFromVertexShader, addr 0x6f89b6c, size 0x28, virtual false, abstract: false, final false
  static inline bool get_supportsRenderTargetArrayIndexFromVertexShader();

  /// @brief Method get_supportsShadows, addr 0x6f89a7c, size 0x28, virtual false, abstract: false, final false
  static inline bool get_supportsShadows();

  /// @brief Method get_supportsStoreAndResolveAction, addr 0x6f8a40c, size 0x28, virtual false, abstract: false, final false
  static inline bool get_supportsStoreAndResolveAction();

  /// @brief Method get_systemMemorySize, addr 0x6f8924c, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_systemMemorySize();

  /// @brief Method get_usesReversedZBuffer, addr 0x6f89dec, size 0x28, virtual false, abstract: false, final false
  static inline bool get_usesReversedZBuffer();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SystemInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SystemInfo", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SystemInfo(SystemInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SystemInfo", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SystemInfo(SystemInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10002 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::SystemInfo) == 0x10, "Size mismatch!");

} // namespace UnityEngine
