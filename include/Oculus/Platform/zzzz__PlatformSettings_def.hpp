#pragma once
// IWYU pragma private; include "Oculus/Platform/PlatformSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PlatformSettings)
// Forward declare root types
namespace Oculus::Platform {
class PlatformSettings;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::PlatformSettings);
// Dependencies UnityEngine.ScriptableObject
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.PlatformSettings
class CORDL_TYPE PlatformSettings : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_instance, put = setStaticF_instance)) ::UnityW<::Oculus::Platform::PlatformSettings> instance;

  /// @brief Field ovrAppID, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ovrAppID, put = __cordl_internal_set_ovrAppID)) ::StringW ovrAppID;

  /// @brief Field ovrMobileAppID, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_ovrMobileAppID, put = __cordl_internal_set_ovrMobileAppID)) ::StringW ovrMobileAppID;

  /// @brief Field ovrUseStandalonePlatform, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_ovrUseStandalonePlatform, put = __cordl_internal_set_ovrUseStandalonePlatform)) bool ovrUseStandalonePlatform;

  static inline ::Oculus::Platform::PlatformSettings* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_ovrAppID() const;

  constexpr ::StringW& __cordl_internal_get_ovrAppID();

  constexpr ::StringW const& __cordl_internal_get_ovrMobileAppID() const;

  constexpr ::StringW& __cordl_internal_get_ovrMobileAppID();

  constexpr bool const& __cordl_internal_get_ovrUseStandalonePlatform() const;

  constexpr bool& __cordl_internal_get_ovrUseStandalonePlatform();

  constexpr void __cordl_internal_set_ovrAppID(::StringW value);

  constexpr void __cordl_internal_set_ovrMobileAppID(::StringW value);

  constexpr void __cordl_internal_set_ovrUseStandalonePlatform(bool value);

  /// @brief Method .ctor, addr 0x3f8d1fc, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityW<::Oculus::Platform::PlatformSettings> getStaticF_instance();

  /// @brief Method get_AppID, addr 0x3f8265c, size 0x1c, virtual false, abstract: false, final false
  static inline ::StringW get_AppID();

  /// @brief Method get_Instance, addr 0x3f8d028, size 0x124, virtual false, abstract: false, final false
  static inline ::UnityW<::Oculus::Platform::PlatformSettings> get_Instance();

  /// @brief Method get_MobileAppID, addr 0x3f82640, size 0x1c, virtual false, abstract: false, final false
  static inline ::StringW get_MobileAppID();

  /// @brief Method get_UseStandalonePlatform, addr 0x3f81c18, size 0x1c, virtual false, abstract: false, final false
  static inline bool get_UseStandalonePlatform();

  static inline void setStaticF_instance(::UnityW<::Oculus::Platform::PlatformSettings> value);

  /// @brief Method set_AppID, addr 0x3f8d14c, size 0x20, virtual false, abstract: false, final false
  static inline void set_AppID(::StringW value);

  /// @brief Method set_Instance, addr 0x3f8d1b0, size 0x4c, virtual false, abstract: false, final false
  static inline void set_Instance(::Oculus::Platform::PlatformSettings* value);

  /// @brief Method set_MobileAppID, addr 0x3f8d16c, size 0x20, virtual false, abstract: false, final false
  static inline void set_MobileAppID(::StringW value);

  /// @brief Method set_UseStandalonePlatform, addr 0x3f8d18c, size 0x24, virtual false, abstract: false, final false
  static inline void set_UseStandalonePlatform(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformSettings(PlatformSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformSettings(PlatformSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15469 };

  /// @brief Field ovrAppID, offset: 0x18, size: 0x8, def value: None
  ::StringW ___ovrAppID;

  /// @brief Field ovrMobileAppID, offset: 0x20, size: 0x8, def value: None
  ::StringW ___ovrMobileAppID;

  /// @brief Field ovrUseStandalonePlatform, offset: 0x28, size: 0x1, def value: None
  bool ___ovrUseStandalonePlatform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::PlatformSettings, ___ovrAppID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::PlatformSettings, ___ovrMobileAppID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::PlatformSettings, ___ovrUseStandalonePlatform) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::PlatformSettings, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::PlatformSettings);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::PlatformSettings*, "Oculus.Platform", "PlatformSettings");
