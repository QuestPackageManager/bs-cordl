#pragma once
// IWYU pragma private; include "Oculus/Platform/StandalonePlatformSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StandalonePlatformSettings)
// Forward declare root types
namespace Oculus::Platform {
class StandalonePlatformSettings;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::StandalonePlatformSettings);
// Dependencies System.Object
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.StandalonePlatformSettings
class CORDL_TYPE StandalonePlatformSettings : public ::System::Object {
public:
  // Declarations
  static inline ::Oculus::Platform::StandalonePlatformSettings* New_ctor();

  /// @brief Method .ctor, addr 0x3f8dac4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_OculusPlatformTestUserAccessToken, addr 0x3f8da78, size 0x48, virtual false, abstract: false, final false
  static inline ::StringW get_OculusPlatformTestUserAccessToken();

  /// @brief Method get_OculusPlatformTestUserEmail, addr 0x3f8d9e0, size 0x48, virtual false, abstract: false, final false
  static inline ::StringW get_OculusPlatformTestUserEmail();

  /// @brief Method get_OculusPlatformTestUserPassword, addr 0x3f8da2c, size 0x48, virtual false, abstract: false, final false
  static inline ::StringW get_OculusPlatformTestUserPassword();

  /// @brief Method set_OculusPlatformTestUserAccessToken, addr 0x3f8dac0, size 0x4, virtual false, abstract: false, final false
  static inline void set_OculusPlatformTestUserAccessToken(::StringW value);

  /// @brief Method set_OculusPlatformTestUserEmail, addr 0x3f8da28, size 0x4, virtual false, abstract: false, final false
  static inline void set_OculusPlatformTestUserEmail(::StringW value);

  /// @brief Method set_OculusPlatformTestUserPassword, addr 0x3f8da74, size 0x4, virtual false, abstract: false, final false
  static inline void set_OculusPlatformTestUserPassword(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandalonePlatformSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StandalonePlatformSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandalonePlatformSettings(StandalonePlatformSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandalonePlatformSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandalonePlatformSettings(StandalonePlatformSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15481 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::StandalonePlatformSettings, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::StandalonePlatformSettings);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::StandalonePlatformSettings*, "Oculus.Platform", "StandalonePlatformSettings");
