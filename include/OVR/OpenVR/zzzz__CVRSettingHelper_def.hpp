#pragma once
// IWYU pragma private; include "OVR/OpenVR/CVRSettingHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CVRSettingHelper)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace OVR::OpenVR {
struct CVRSettingHelper;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::CVRSettingHelper);
// Type: OVR.OpenVR::CVRSettingHelper
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// CS Name: ::OVR.OpenVR::CVRSettingHelper
struct CORDL_TYPE CVRSettingHelper {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr CVRSettingHelper();

  // Ctor Parameters [CppParam { name: "m_pSettings", ty: "::System::IntPtr", modifiers: "", def_value: None }]
  constexpr CVRSettingHelper(::System::IntPtr m_pSettings) noexcept;

  /// @brief Field m_pSettings, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr m_pSettings;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9002 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::CVRSettingHelper, 0x8>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::CVRSettingHelper, m_pSettings) == 0x0, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRSettingHelper, "OVR.OpenVR", "CVRSettingHelper");
