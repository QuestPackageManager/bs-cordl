#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/URPDefaultVolumeProfileSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(URPDefaultVolumeProfileSettings)
namespace UnityEngine::Rendering::Universal {
struct URPDefaultVolumeProfileSettings_Version;
}
namespace UnityEngine::Rendering {
class IDefaultVolumeProfileSettings;
}
namespace UnityEngine::Rendering {
class IRenderPipelineGraphicsSettings;
}
namespace UnityEngine::Rendering {
class VolumeProfile;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct URPDefaultVolumeProfileSettings_Version;
}
namespace UnityEngine::Rendering::Universal {
class URPDefaultVolumeProfileSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings_Version);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.URPDefaultVolumeProfileSettings/Version
struct CORDL_TYPE URPDefaultVolumeProfileSettings_Version {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __URPDefaultVolumeProfileSettings_Version_Unwrapped
  enum struct __URPDefaultVolumeProfileSettings_Version_Unwrapped : int32_t {
    __E_Initial = static_cast<int32_t>(0x0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __URPDefaultVolumeProfileSettings_Version_Unwrapped() const noexcept {
    return static_cast<__URPDefaultVolumeProfileSettings_Version_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr URPDefaultVolumeProfileSettings_Version();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr URPDefaultVolumeProfileSettings_Version(int32_t value__) noexcept;

  /// @brief Field Initial value: I32(0)
  static ::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings_Version const Initial;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12924 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings_Version, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings_Version, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.Universal.URPDefaultVolumeProfileSettings::Version
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.URPDefaultVolumeProfileSettings
class CORDL_TYPE URPDefaultVolumeProfileSettings : public ::System::Object {
public:
  // Declarations
  using Version = ::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings_Version;

  /// @brief Field m_Version, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Version, put = __cordl_internal_set_m_Version)) ::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings_Version m_Version;

  /// @brief Field m_VolumeProfile, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VolumeProfile, put = __cordl_internal_set_m_VolumeProfile)) ::UnityW<::UnityEngine::Rendering::VolumeProfile> m_VolumeProfile;

  __declspec(property(get = get_version)) int32_t version;

  __declspec(property(get = get_volumeProfile, put = set_volumeProfile)) ::UnityW<::UnityEngine::Rendering::VolumeProfile> volumeProfile;

  /// @brief Convert operator to "::UnityEngine::Rendering::IDefaultVolumeProfileSettings"
  constexpr operator ::UnityEngine::Rendering::IDefaultVolumeProfileSettings*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept;

  static inline ::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings_Version const& __cordl_internal_get_m_Version() const;

  constexpr ::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings_Version& __cordl_internal_get_m_Version();

  constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile> const& __cordl_internal_get_m_VolumeProfile() const;

  constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile>& __cordl_internal_get_m_VolumeProfile();

  constexpr void __cordl_internal_set_m_Version(::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings_Version value);

  constexpr void __cordl_internal_set_m_VolumeProfile(::UnityW<::UnityEngine::Rendering::VolumeProfile> value);

  /// @brief Method .ctor, addr 0x6701f20, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_version, addr 0x6701ea0, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_version();

  /// @brief Method get_volumeProfile, addr 0x6701ea8, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Rendering::VolumeProfile> get_volumeProfile();

  /// @brief Convert to "::UnityEngine::Rendering::IDefaultVolumeProfileSettings"
  constexpr ::UnityEngine::Rendering::IDefaultVolumeProfileSettings* i___UnityEngine__Rendering__IDefaultVolumeProfileSettings() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept;

  /// @brief Method set_volumeProfile, addr 0x6701eb0, size 0x70, virtual true, abstract: false, final true
  inline void set_volumeProfile(::UnityEngine::Rendering::VolumeProfile* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr URPDefaultVolumeProfileSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "URPDefaultVolumeProfileSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  URPDefaultVolumeProfileSettings(URPDefaultVolumeProfileSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "URPDefaultVolumeProfileSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  URPDefaultVolumeProfileSettings(URPDefaultVolumeProfileSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12925 };

  /// @brief Field m_Version, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings_Version ___m_Version;

  /// @brief Field m_VolumeProfile, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::VolumeProfile> ___m_VolumeProfile;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings, ___m_Version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings, ___m_VolumeProfile) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings_Version, "UnityEngine.Rendering.Universal", "URPDefaultVolumeProfileSettings/Version");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings*, "UnityEngine.Rendering.Universal", "URPDefaultVolumeProfileSettings");
