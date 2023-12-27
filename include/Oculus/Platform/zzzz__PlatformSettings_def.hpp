#pragma once
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
// Type: Oculus.Platform::PlatformSettings
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13378))
// CS Name: ::Oculus.Platform::PlatformSettings*
class CORDL_TYPE PlatformSettings : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field ovrAppID, offset 0x18, size 0x8
  __declspec(property(get = __get_ovrAppID, put = __set_ovrAppID))::StringW ovrAppID;

  /// @brief Field ovrMobileAppID, offset 0x20, size 0x8
  __declspec(property(get = __get_ovrMobileAppID, put = __set_ovrMobileAppID))::StringW ovrMobileAppID;

  /// @brief Field ovrUseStandalonePlatform, offset 0x28, size 0x1
  __declspec(property(get = __get_ovrUseStandalonePlatform, put = __set_ovrUseStandalonePlatform)) bool ovrUseStandalonePlatform;

  /// @brief Field instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_instance, put = setStaticF_instance))::Oculus::Platform::PlatformSettings* instance;

  constexpr ::StringW& __get_ovrAppID();

  constexpr ::StringW const& __get_ovrAppID() const;

  constexpr void __set_ovrAppID(::StringW value);

  constexpr ::StringW& __get_ovrMobileAppID();

  constexpr ::StringW const& __get_ovrMobileAppID() const;

  constexpr void __set_ovrMobileAppID(::StringW value);

  constexpr bool& __get_ovrUseStandalonePlatform();

  constexpr bool const& __get_ovrUseStandalonePlatform() const;

  constexpr void __set_ovrUseStandalonePlatform(bool value);

  static inline void setStaticF_instance(::Oculus::Platform::PlatformSettings* value);

  static inline ::Oculus::Platform::PlatformSettings* getStaticF_instance();

  /// @brief Method get_AppID addr 0x26f5a24 size 0x1c virtual false final false
  static inline ::StringW get_AppID();

  /// @brief Method set_AppID addr 0x2700b9c size 0x20 virtual false final false
  static inline void set_AppID(::StringW value);

  /// @brief Method get_MobileAppID addr 0x26f5a08 size 0x1c virtual false final false
  static inline ::StringW get_MobileAppID();

  /// @brief Method set_MobileAppID addr 0x2700bbc size 0x20 virtual false final false
  static inline void set_MobileAppID(::StringW value);

  /// @brief Method get_UseStandalonePlatform addr 0x26f4fc8 size 0x1c virtual false final false
  static inline bool get_UseStandalonePlatform();

  /// @brief Method set_UseStandalonePlatform addr 0x2700bdc size 0x24 virtual false final false
  static inline void set_UseStandalonePlatform(bool value);

  /// @brief Method get_Instance addr 0x2700a78 size 0x124 virtual false final false
  static inline ::Oculus::Platform::PlatformSettings* get_Instance();

  /// @brief Method set_Instance addr 0x2700c00 size 0x4c virtual false final false
  static inline void set_Instance(::Oculus::Platform::PlatformSettings* value);

  static inline ::Oculus::Platform::PlatformSettings* New_ctor();

  /// @brief Method .ctor addr 0x2700c4c size 0x58 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PlatformSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformSettings(PlatformSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformSettings(PlatformSettings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformSettings();

public:
  /// @brief Field ovrAppID, offset: 0x18, size: 0x8, def value: None
  ::StringW ___ovrAppID;

  /// @brief Field ovrMobileAppID, offset: 0x20, size: 0x8, def value: None
  ::StringW ___ovrMobileAppID;

  /// @brief Field ovrUseStandalonePlatform, offset: 0x28, size: 0x1, def value: None
  bool ___ovrUseStandalonePlatform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::PlatformSettings, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::PlatformSettings);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::PlatformSettings*, "Oculus.Platform", "PlatformSettings");
