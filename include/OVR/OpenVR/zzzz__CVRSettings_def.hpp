#pragma once
// IWYU pragma private; include "OVR/OpenVR/CVRSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__IVRSettings_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CVRSettings)
namespace OVR::OpenVR {
struct EVRSettingsError;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRSettings;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::CVRSettings);
// Type: OVR.OpenVR::CVRSettings
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::OVR.OpenVR::CVRSettings*
class CORDL_TYPE CVRSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field FnTable, offset 0x10, size 0x60
  __declspec(property(get = __cordl_internal_get_FnTable, put = __cordl_internal_set_FnTable))::OVR::OpenVR::IVRSettings FnTable;

  /// @brief Method GetBool, addr 0x2beab00, size 0x24, virtual false, abstract: false, final false
  inline bool GetBool(::StringW pchSection, ::StringW pchSettingsKey, ByRef<::OVR::OpenVR::EVRSettingsError> peError);

  /// @brief Method GetFloat, addr 0x2beab48, size 0x24, virtual false, abstract: false, final false
  inline float_t GetFloat(::StringW pchSection, ::StringW pchSettingsKey, ByRef<::OVR::OpenVR::EVRSettingsError> peError);

  /// @brief Method GetInt32, addr 0x2beab24, size 0x24, virtual false, abstract: false, final false
  inline int32_t GetInt32(::StringW pchSection, ::StringW pchSettingsKey, ByRef<::OVR::OpenVR::EVRSettingsError> peError);

  /// @brief Method GetSettingsErrorNameFromEnum, addr 0x2bea9c0, size 0x84, virtual false, abstract: false, final false
  inline ::StringW GetSettingsErrorNameFromEnum(::OVR::OpenVR::EVRSettingsError eError);

  /// @brief Method GetString, addr 0x2beab6c, size 0x24, virtual false, abstract: false, final false
  inline void GetString(::StringW pchSection, ::StringW pchSettingsKey, ::System::Text::StringBuilder* pchValue, uint32_t unValueLen, ByRef<::OVR::OpenVR::EVRSettingsError> peError);

  static inline ::OVR::OpenVR::CVRSettings* New_ctor(::System::IntPtr pInterface);

  /// @brief Method RemoveKeyInSection, addr 0x2beabb4, size 0x24, virtual false, abstract: false, final false
  inline void RemoveKeyInSection(::StringW pchSection, ::StringW pchSettingsKey, ByRef<::OVR::OpenVR::EVRSettingsError> peError);

  /// @brief Method RemoveSection, addr 0x2beab90, size 0x24, virtual false, abstract: false, final false
  inline void RemoveSection(::StringW pchSection, ByRef<::OVR::OpenVR::EVRSettingsError> peError);

  /// @brief Method SetBool, addr 0x2beaa6c, size 0x28, virtual false, abstract: false, final false
  inline void SetBool(::StringW pchSection, ::StringW pchSettingsKey, bool bValue, ByRef<::OVR::OpenVR::EVRSettingsError> peError);

  /// @brief Method SetFloat, addr 0x2beaab8, size 0x24, virtual false, abstract: false, final false
  inline void SetFloat(::StringW pchSection, ::StringW pchSettingsKey, float_t flValue, ByRef<::OVR::OpenVR::EVRSettingsError> peError);

  /// @brief Method SetInt32, addr 0x2beaa94, size 0x24, virtual false, abstract: false, final false
  inline void SetInt32(::StringW pchSection, ::StringW pchSettingsKey, int32_t nValue, ByRef<::OVR::OpenVR::EVRSettingsError> peError);

  /// @brief Method SetString, addr 0x2beaadc, size 0x24, virtual false, abstract: false, final false
  inline void SetString(::StringW pchSection, ::StringW pchSettingsKey, ::StringW pchValue, ByRef<::OVR::OpenVR::EVRSettingsError> peError);

  /// @brief Method Sync, addr 0x2beaa44, size 0x28, virtual false, abstract: false, final false
  inline bool Sync(bool bForce, ByRef<::OVR::OpenVR::EVRSettingsError> peError);

  constexpr ::OVR::OpenVR::IVRSettings const& __cordl_internal_get_FnTable() const;

  constexpr ::OVR::OpenVR::IVRSettings& __cordl_internal_get_FnTable();

  constexpr void __cordl_internal_set_FnTable(::OVR::OpenVR::IVRSettings value);

  /// @brief Method .ctor, addr 0x2bea8ac, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr pInterface);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CVRSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CVRSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CVRSettings(CVRSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CVRSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CVRSettings(CVRSettings const&) = delete;

  /// @brief Field FnTable, offset: 0x10, size: 0x60, def value: None
  ::OVR::OpenVR::IVRSettings ___FnTable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::CVRSettings, 0x70>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::CVRSettings, ___FnTable) == 0x10, "Offset mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::CVRSettings);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRSettings*, "OVR.OpenVR", "CVRSettings");
