#pragma once
// IWYU pragma private; include "OVR/OpenVR/AppOverrideKeys_t.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AppOverrideKeys_t)
// Forward declare root types
namespace OVR::OpenVR {
struct AppOverrideKeys_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::AppOverrideKeys_t);
// Dependencies System.IntPtr
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.AppOverrideKeys_t
struct CORDL_TYPE AppOverrideKeys_t {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr AppOverrideKeys_t();

  // Ctor Parameters [CppParam { name: "pchKey", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "pchValue", ty: "::System::IntPtr", modifiers: "", def_value: None }]
  constexpr AppOverrideKeys_t(::System::IntPtr pchKey, ::System::IntPtr pchValue) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8498 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field pchKey, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr pchKey;

  /// @brief Field pchValue, offset: 0x8, size: 0x8, def value: None
  ::System::IntPtr pchValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::AppOverrideKeys_t, pchKey) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::AppOverrideKeys_t, pchValue) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::AppOverrideKeys_t, 0x10>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::AppOverrideKeys_t, "OVR.OpenVR", "AppOverrideKeys_t");
