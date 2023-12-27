#pragma once
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
// Type: Oculus.Platform::StandalonePlatformSettings
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13390))
// CS Name: ::Oculus.Platform::StandalonePlatformSettings*
class CORDL_TYPE StandalonePlatformSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Method get_OculusPlatformTestUserEmail addr 0x2701100 size 0x48 virtual false final false
  static inline ::StringW get_OculusPlatformTestUserEmail();

  /// @brief Method set_OculusPlatformTestUserEmail addr 0x2701148 size 0x4 virtual false final false
  static inline void set_OculusPlatformTestUserEmail(::StringW value);

  /// @brief Method get_OculusPlatformTestUserPassword addr 0x270114c size 0x48 virtual false final false
  static inline ::StringW get_OculusPlatformTestUserPassword();

  /// @brief Method set_OculusPlatformTestUserPassword addr 0x2701194 size 0x4 virtual false final false
  static inline void set_OculusPlatformTestUserPassword(::StringW value);

  /// @brief Method get_OculusPlatformTestUserAccessToken addr 0x2701198 size 0x48 virtual false final false
  static inline ::StringW get_OculusPlatformTestUserAccessToken();

  /// @brief Method set_OculusPlatformTestUserAccessToken addr 0x27011e0 size 0x4 virtual false final false
  static inline void set_OculusPlatformTestUserAccessToken(::StringW value);

  static inline ::Oculus::Platform::StandalonePlatformSettings* New_ctor();

  /// @brief Method .ctor addr 0x27011e4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "StandalonePlatformSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandalonePlatformSettings(StandalonePlatformSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandalonePlatformSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandalonePlatformSettings(StandalonePlatformSettings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandalonePlatformSettings();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::StandalonePlatformSettings, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::StandalonePlatformSettings);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::StandalonePlatformSettings*, "Oculus.Platform", "StandalonePlatformSettings");
