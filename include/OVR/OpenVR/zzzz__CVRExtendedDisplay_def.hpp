#pragma once
// IWYU pragma private; include "OVR/OpenVR/CVRExtendedDisplay.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__IVRExtendedDisplay_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CVRExtendedDisplay)
namespace OVR::OpenVR {
struct EVREye;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRExtendedDisplay;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::CVRExtendedDisplay);
// Dependencies OVR.OpenVR.IVRExtendedDisplay, System.Object
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.CVRExtendedDisplay
class CORDL_TYPE CVRExtendedDisplay : public ::System::Object {
public:
  // Declarations
  /// @brief Field FnTable, offset 0x10, size 0x18
  __declspec(property(get = __cordl_internal_get_FnTable, put = __cordl_internal_set_FnTable)) ::OVR::OpenVR::IVRExtendedDisplay FnTable;

  /// @brief Method GetDXGIOutputInfo, addr 0x4076f38, size 0x2c, virtual false, abstract: false, final false
  inline void GetDXGIOutputInfo(::ByRef<int32_t> pnAdapterIndex, ::ByRef<int32_t> pnAdapterOutputIndex);

  /// @brief Method GetEyeOutputViewport, addr 0x4076f04, size 0x34, virtual false, abstract: false, final false
  inline void GetEyeOutputViewport(::OVR::OpenVR::EVREye eEye, ::ByRef<uint32_t> pnX, ::ByRef<uint32_t> pnY, ::ByRef<uint32_t> pnWidth, ::ByRef<uint32_t> pnHeight);

  /// @brief Method GetWindowBounds, addr 0x4076ed0, size 0x34, virtual false, abstract: false, final false
  inline void GetWindowBounds(::ByRef<int32_t> pnX, ::ByRef<int32_t> pnY, ::ByRef<uint32_t> pnWidth, ::ByRef<uint32_t> pnHeight);

  static inline ::OVR::OpenVR::CVRExtendedDisplay* New_ctor(::System::IntPtr pInterface);

  constexpr ::OVR::OpenVR::IVRExtendedDisplay const& __cordl_internal_get_FnTable() const;

  constexpr ::OVR::OpenVR::IVRExtendedDisplay& __cordl_internal_get_FnTable();

  constexpr void __cordl_internal_set_FnTable(::OVR::OpenVR::IVRExtendedDisplay value);

  /// @brief Method .ctor, addr 0x4076dbc, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr pInterface);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CVRExtendedDisplay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CVRExtendedDisplay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CVRExtendedDisplay(CVRExtendedDisplay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CVRExtendedDisplay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CVRExtendedDisplay(CVRExtendedDisplay const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8876 };

  /// @brief Field FnTable, offset: 0x10, size: 0x18, def value: None
  ::OVR::OpenVR::IVRExtendedDisplay ___FnTable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::CVRExtendedDisplay, ___FnTable) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::CVRExtendedDisplay, 0x28>, "Size mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::CVRExtendedDisplay);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRExtendedDisplay*, "OVR.OpenVR", "CVRExtendedDisplay");
