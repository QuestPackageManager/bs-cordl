#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/enum-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SystemInfo)
namespace UnityEngine {
struct DeviceType;
}
namespace UnityEngine {
struct RenderTextureFormat;
}
namespace UnityEngine::Experimental::Rendering {
struct DefaultFormat;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Experimental::Rendering {
struct FormatUsage;
}
namespace UnityEngine {
struct TextureFormat;
}
namespace UnityEngine {
struct OperatingSystemFamily;
}
namespace UnityEngine::Rendering {
struct GraphicsDeviceType;
}
// Forward declare root types
namespace UnityEngine {
class SystemInfo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SystemInfo);
// Type: UnityEngine::SystemInfo
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10067))
// CS Name: ::UnityEngine::SystemInfo*
class CORDL_TYPE SystemInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Method get_operatingSystem addr 0x2b5e4b4 size 0x28 virtual false final false
  static inline ::StringW get_operatingSystem();

  /// @brief Method get_operatingSystemFamily addr 0x2b5e504 size 0x28 virtual false final false
  static inline ::UnityEngine::OperatingSystemFamily get_operatingSystemFamily();

  /// @brief Method get_processorType addr 0x2b5e554 size 0x28 virtual false final false
  static inline ::StringW get_processorType();

  /// @brief Method get_processorCount addr 0x2b5e5a4 size 0x28 virtual false final false
  static inline int32_t get_processorCount();

  /// @brief Method get_systemMemorySize addr 0x2b5e5f4 size 0x28 virtual false final false
  static inline int32_t get_systemMemorySize();

  /// @brief Method get_deviceModel addr 0x2b5e644 size 0x28 virtual false final false
  static inline ::StringW get_deviceModel();

  /// @brief Method get_deviceType addr 0x2b5e694 size 0x28 virtual false final false
  static inline ::UnityEngine::DeviceType get_deviceType();

  /// @brief Method get_graphicsMemorySize addr 0x2b5e6e4 size 0x28 virtual false final false
  static inline int32_t get_graphicsMemorySize();

  /// @brief Method get_graphicsDeviceName addr 0x2b5e734 size 0x28 virtual false final false
  static inline ::StringW get_graphicsDeviceName();

  /// @brief Method get_graphicsDeviceType addr 0x2b5e784 size 0x28 virtual false final false
  static inline ::UnityEngine::Rendering::GraphicsDeviceType get_graphicsDeviceType();

  /// @brief Method get_graphicsDeviceVersion addr 0x2b5e7d4 size 0x28 virtual false final false
  static inline ::StringW get_graphicsDeviceVersion();

  /// @brief Method get_graphicsShaderLevel addr 0x2b5e824 size 0x28 virtual false final false
  static inline int32_t get_graphicsShaderLevel();

  /// @brief Method get_supportsInstancing addr 0x2b5e874 size 0x28 virtual false final false
  static inline bool get_supportsInstancing();

  /// @brief Method get_usesReversedZBuffer addr 0x2b5e8c4 size 0x28 virtual false final false
  static inline bool get_usesReversedZBuffer();

  /// @brief Method IsValidEnumValue addr 0x2b5e914 size 0x78 virtual false final false
  static inline bool IsValidEnumValue(::bs_hook::EnumPtr value);

  /// @brief Method SupportsRenderTextureFormat addr 0x2b5e98c size 0xd8 virtual false final false
  static inline bool SupportsRenderTextureFormat(::UnityEngine::RenderTextureFormat format);

  /// @brief Method SupportsTextureFormat addr 0x2b5eaa0 size 0xd8 virtual false final false
  static inline bool SupportsTextureFormat(::UnityEngine::TextureFormat format);

  /// @brief Method get_maxTextureSize addr 0x2b5ebb4 size 0x28 virtual false final false
  static inline int32_t get_maxTextureSize();

  /// @brief Method get_maxRenderTextureSize addr 0x2b5ec04 size 0x28 virtual false final false
  static inline int32_t get_maxRenderTextureSize();

  /// @brief Method GetOperatingSystem addr 0x2b5e4dc size 0x28 virtual false final false
  static inline ::StringW GetOperatingSystem();

  /// @brief Method GetOperatingSystemFamily addr 0x2b5e52c size 0x28 virtual false final false
  static inline ::UnityEngine::OperatingSystemFamily GetOperatingSystemFamily();

  /// @brief Method GetProcessorType addr 0x2b5e57c size 0x28 virtual false final false
  static inline ::StringW GetProcessorType();

  /// @brief Method GetProcessorCount addr 0x2b5e5cc size 0x28 virtual false final false
  static inline int32_t GetProcessorCount();

  /// @brief Method GetPhysicalMemoryMB addr 0x2b5e61c size 0x28 virtual false final false
  static inline int32_t GetPhysicalMemoryMB();

  /// @brief Method GetDeviceModel addr 0x2b5e66c size 0x28 virtual false final false
  static inline ::StringW GetDeviceModel();

  /// @brief Method GetDeviceType addr 0x2b5e6bc size 0x28 virtual false final false
  static inline ::UnityEngine::DeviceType GetDeviceType();

  /// @brief Method GetGraphicsMemorySize addr 0x2b5e70c size 0x28 virtual false final false
  static inline int32_t GetGraphicsMemorySize();

  /// @brief Method GetGraphicsDeviceName addr 0x2b5e75c size 0x28 virtual false final false
  static inline ::StringW GetGraphicsDeviceName();

  /// @brief Method GetGraphicsDeviceType addr 0x2b5e7ac size 0x28 virtual false final false
  static inline ::UnityEngine::Rendering::GraphicsDeviceType GetGraphicsDeviceType();

  /// @brief Method GetGraphicsDeviceVersion addr 0x2b5e7fc size 0x28 virtual false final false
  static inline ::StringW GetGraphicsDeviceVersion();

  /// @brief Method GetGraphicsShaderLevel addr 0x2b5e84c size 0x28 virtual false final false
  static inline int32_t GetGraphicsShaderLevel();

  /// @brief Method SupportsInstancing addr 0x2b5e89c size 0x28 virtual false final false
  static inline bool SupportsInstancing();

  /// @brief Method UsesReversedZBuffer addr 0x2b5e8ec size 0x28 virtual false final false
  static inline bool UsesReversedZBuffer();

  /// @brief Method HasRenderTextureNative addr 0x2b5ea64 size 0x3c virtual false final false
  static inline bool HasRenderTextureNative(::UnityEngine::RenderTextureFormat format);

  /// @brief Method SupportsTextureFormatNative addr 0x2b5eb78 size 0x3c virtual false final false
  static inline bool SupportsTextureFormatNative(::UnityEngine::TextureFormat format);

  /// @brief Method GetMaxTextureSize addr 0x2b5ebdc size 0x28 virtual false final false
  static inline int32_t GetMaxTextureSize();

  /// @brief Method GetMaxRenderTextureSize addr 0x2b5ec2c size 0x28 virtual false final false
  static inline int32_t GetMaxRenderTextureSize();

  /// @brief Method IsFormatSupported addr 0x2b5ec54 size 0x44 virtual false final false
  static inline bool IsFormatSupported(::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::FormatUsage usage);

  /// @brief Method GetCompatibleFormat addr 0x2b5ec98 size 0x44 virtual false final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetCompatibleFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                                                           ::UnityEngine::Experimental::Rendering::FormatUsage usage);

  /// @brief Method GetGraphicsFormat addr 0x2b5ecdc size 0x3c virtual false final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat(::UnityEngine::Experimental::Rendering::DefaultFormat format);

  // Ctor Parameters [CppParam { name: "", ty: "SystemInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SystemInfo(SystemInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SystemInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SystemInfo(SystemInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SystemInfo();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SystemInfo, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::SystemInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SystemInfo*, "UnityEngine", "SystemInfo");
