#pragma once
// IWYU pragma private; include "OVR\OpenVR\CVRNotifications.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__IVRNotifications_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CVRNotifications)
namespace OVR::OpenVR {
struct EVRNotificationError;
}
namespace OVR::OpenVR {
struct EVRNotificationStyle;
}
namespace OVR::OpenVR {
struct EVRNotificationType;
}
namespace OVR::OpenVR {
struct NotificationBitmap_t;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRNotifications;
}
// Write type traits
MARK_REF_T(::OVR::OpenVR::CVRNotifications*);
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::CVRNotifications*, "OVR.OpenVR", "CVRNotifications");
// Dependencies OVR.OpenVR.IVRNotifications, System.Object
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.CVRNotifications
class CORDL_TYPE CVRNotifications : public ::System::Object {
public:
  // Declarations
  /// @brief Field FnTable, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_FnTable, put = __cordl_internal_set_FnTable)) ::OVR::OpenVR::IVRNotifications FnTable;

  /// @brief Method CreateNotification, addr 0x5e46d04, size 0x2c, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRNotificationError CreateNotification(uint64_t ulOverlayHandle, uint64_t ulUserValue, ::OVR::OpenVR::EVRNotificationType type, ::StringW pchText,
                                                                ::OVR::OpenVR::EVRNotificationStyle style, ::by_ref<::OVR::OpenVR::NotificationBitmap_t> pImage, ::by_ref<uint32_t> pNotificationId);

  static inline ::OVR::OpenVR::CVRNotifications* New_ctor(::System::IntPtr pInterface);

  /// @brief Method RemoveNotification, addr 0x5e46d30, size 0x20, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRNotificationError RemoveNotification(uint32_t notificationId);

  constexpr ::OVR::OpenVR::IVRNotifications const& __cordl_internal_get_FnTable() const;

  constexpr ::OVR::OpenVR::IVRNotifications& __cordl_internal_get_FnTable();

  constexpr void __cordl_internal_set_FnTable(::OVR::OpenVR::IVRNotifications value);

  /// @brief Method .ctor, addr 0x5e46c10, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr pInterface);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CVRNotifications();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CVRNotifications", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CVRNotifications(CVRNotifications&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CVRNotifications", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CVRNotifications(CVRNotifications const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8389 };

  /// @brief Field FnTable, offset: 0x10, size: 0x10, def value: None
  ::OVR::OpenVR::IVRNotifications ___FnTable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::CVRNotifications, ___FnTable) == 0x10, "Offset mismatch!");

static_assert(sizeof(::OVR::OpenVR::CVRNotifications) == 0x20, "Size mismatch!");

} // namespace OVR::OpenVR
