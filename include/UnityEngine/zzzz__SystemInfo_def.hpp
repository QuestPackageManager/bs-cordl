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
namespace UnityEngine::Experimental::Rendering {
struct DefaultFormat;
}
namespace UnityEngine::Experimental::Rendering {
struct FormatUsage;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
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
struct OperatingSystemFamily;
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
  /// @brief Method GetBatteryLevel, addr 0x48b6e90, size 0x28, virtual false, abstract: false, final false
  static inline float_t GetBatteryLevel();

  /// @brief Method GetBatteryStatus, addr 0x48b6ee0, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::BatteryStatus GetBatteryStatus();

  /// @brief Method GetCompatibleFormat, addr 0x48b79b4, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetCompatibleFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                                                           ::UnityEngine::Experimental::Rendering::FormatUsage usage);

  /// @brief Method GetDeviceModel, addr 0x48b71b0, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW GetDeviceModel();

  /// @brief Method GetDeviceName, addr 0x48b7160, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW GetDeviceName();

  /// @brief Method GetDeviceType, addr 0x48b7200, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::DeviceType GetDeviceType();

  /// @brief Method GetDeviceUniqueIdentifier, addr 0x48b7110, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW GetDeviceUniqueIdentifier();

  /// @brief Method GetGraphicsDeviceID, addr 0x48b7340, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetGraphicsDeviceID();

  /// @brief Method GetGraphicsDeviceName, addr 0x48b72a0, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW GetGraphicsDeviceName();

  /// @brief Method GetGraphicsDeviceType, addr 0x48b73e0, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::GraphicsDeviceType GetGraphicsDeviceType();

  /// @brief Method GetGraphicsDeviceVendor, addr 0x48b72f0, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW GetGraphicsDeviceVendor();

  /// @brief Method GetGraphicsDeviceVendorID, addr 0x48b7390, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetGraphicsDeviceVendorID();

  /// @brief Method GetGraphicsDeviceVersion, addr 0x48b7430, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW GetGraphicsDeviceVersion();

  /// @brief Method GetGraphicsFormat, addr 0x48b79f8, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat(::UnityEngine::Experimental::Rendering::DefaultFormat format);

  /// @brief Method GetGraphicsMemorySize, addr 0x48b7250, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetGraphicsMemorySize();

  /// @brief Method GetGraphicsMultiThreaded, addr 0x48b74d0, size 0x28, virtual false, abstract: false, final false
  static inline bool GetGraphicsMultiThreaded();

  /// @brief Method GetGraphicsShaderLevel, addr 0x48b7480, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetGraphicsShaderLevel();

  /// @brief Method GetMaxRenderTextureSize, addr 0x48b7948, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetMaxRenderTextureSize();

  /// @brief Method GetMaxTextureSize, addr 0x48b78f8, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetMaxTextureSize();

  /// @brief Method GetOperatingSystem, addr 0x48b6f30, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW GetOperatingSystem();

  /// @brief Method GetOperatingSystemFamily, addr 0x48b6f80, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::OperatingSystemFamily GetOperatingSystemFamily();

  /// @brief Method GetPhysicalMemoryMB, addr 0x48b70c0, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetPhysicalMemoryMB();

  /// @brief Method GetProcessorCount, addr 0x48b7070, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetProcessorCount();

  /// @brief Method GetProcessorFrequencyMHz, addr 0x48b7020, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetProcessorFrequencyMHz();

  /// @brief Method GetProcessorType, addr 0x48b6fd0, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW GetProcessorType();

  /// @brief Method GetRenderingThreadingMode, addr 0x48b7520, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderingThreadingMode GetRenderingThreadingMode();

  /// @brief Method HasRenderTextureNative, addr 0x48b7784, size 0x3c, virtual false, abstract: false, final false
  static inline bool HasRenderTextureNative(::UnityEngine::RenderTextureFormat format);

  /// @brief Method IsFormatSupported, addr 0x48b7970, size 0x44, virtual false, abstract: false, final false
  static inline bool IsFormatSupported(::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::FormatUsage usage);

  /// @brief Method IsValidEnumValue, addr 0x48b7638, size 0x78, virtual false, abstract: false, final false
  static inline bool IsValidEnumValue(::System::Enum* value);

  /// @brief Method SupportsComputeShaders, addr 0x48b7570, size 0x28, virtual false, abstract: false, final false
  static inline bool SupportsComputeShaders();

  /// @brief Method SupportsInstancing, addr 0x48b75c0, size 0x28, virtual false, abstract: false, final false
  static inline bool SupportsInstancing();

  /// @brief Method SupportsRenderTextureFormat, addr 0x48b76b0, size 0xd4, virtual false, abstract: false, final false
  static inline bool SupportsRenderTextureFormat(::UnityEngine::RenderTextureFormat format);

  /// @brief Method SupportsTextureFormat, addr 0x48b77c0, size 0xd4, virtual false, abstract: false, final false
  static inline bool SupportsTextureFormat(::UnityEngine::TextureFormat format);

  /// @brief Method SupportsTextureFormatNative, addr 0x48b7894, size 0x3c, virtual false, abstract: false, final false
  static inline bool SupportsTextureFormatNative(::UnityEngine::TextureFormat format);

  /// @brief Method UsesReversedZBuffer, addr 0x48b7610, size 0x28, virtual false, abstract: false, final false
  static inline bool UsesReversedZBuffer();

  /// @brief Method get_batteryLevel, addr 0x48b6e68, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_batteryLevel();

  /// @brief Method get_batteryStatus, addr 0x48b6eb8, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::BatteryStatus get_batteryStatus();

  /// @brief Method get_deviceModel, addr 0x48b7188, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW get_deviceModel();

  /// @brief Method get_deviceName, addr 0x48b7138, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW get_deviceName();

  /// @brief Method get_deviceType, addr 0x48b71d8, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::DeviceType get_deviceType();

  /// @brief Method get_deviceUniqueIdentifier, addr 0x48b70e8, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW get_deviceUniqueIdentifier();

  /// @brief Method get_graphicsDeviceID, addr 0x48b7318, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_graphicsDeviceID();

  /// @brief Method get_graphicsDeviceName, addr 0x48b7278, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW get_graphicsDeviceName();

  /// @brief Method get_graphicsDeviceType, addr 0x48b73b8, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::GraphicsDeviceType get_graphicsDeviceType();

  /// @brief Method get_graphicsDeviceVendor, addr 0x48b72c8, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW get_graphicsDeviceVendor();

  /// @brief Method get_graphicsDeviceVendorID, addr 0x48b7368, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_graphicsDeviceVendorID();

  /// @brief Method get_graphicsDeviceVersion, addr 0x48b7408, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW get_graphicsDeviceVersion();

  /// @brief Method get_graphicsMemorySize, addr 0x48b7228, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_graphicsMemorySize();

  /// @brief Method get_graphicsMultiThreaded, addr 0x48b74a8, size 0x28, virtual false, abstract: false, final false
  static inline bool get_graphicsMultiThreaded();

  /// @brief Method get_graphicsShaderLevel, addr 0x48b7458, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_graphicsShaderLevel();

  /// @brief Method get_maxRenderTextureSize, addr 0x48b7920, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_maxRenderTextureSize();

  /// @brief Method get_maxTextureSize, addr 0x48b78d0, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_maxTextureSize();

  /// @brief Method get_operatingSystem, addr 0x48b6f08, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW get_operatingSystem();

  /// @brief Method get_operatingSystemFamily, addr 0x48b6f58, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::OperatingSystemFamily get_operatingSystemFamily();

  /// @brief Method get_processorCount, addr 0x48b7048, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_processorCount();

  /// @brief Method get_processorFrequency, addr 0x48b6ff8, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_processorFrequency();

  /// @brief Method get_processorType, addr 0x48b6fa8, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW get_processorType();

  /// @brief Method get_renderingThreadingMode, addr 0x48b74f8, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderingThreadingMode get_renderingThreadingMode();

  /// @brief Method get_supportsComputeShaders, addr 0x48b7548, size 0x28, virtual false, abstract: false, final false
  static inline bool get_supportsComputeShaders();

  /// @brief Method get_supportsInstancing, addr 0x48b7598, size 0x28, virtual false, abstract: false, final false
  static inline bool get_supportsInstancing();

  /// @brief Method get_systemMemorySize, addr 0x48b7098, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_systemMemorySize();

  /// @brief Method get_usesReversedZBuffer, addr 0x48b75e8, size 0x28, virtual false, abstract: false, final false
  static inline bool get_usesReversedZBuffer();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SystemInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SystemInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SystemInfo(SystemInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SystemInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SystemInfo(SystemInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10941 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SystemInfo, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::SystemInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SystemInfo*, "UnityEngine", "SystemInfo");
