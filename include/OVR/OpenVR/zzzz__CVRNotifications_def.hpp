#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__IVRNotifications_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CVRNotifications)
namespace OVR::OpenVR {
struct EVRNotificationType;
}
namespace OVR::OpenVR {
struct EVRNotificationError;
}
namespace OVR::OpenVR {
struct EVRNotificationStyle;
}
namespace OVR::OpenVR {
struct NotificationBitmap_t;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRNotifications;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::CVRNotifications);
// Type: OVR.OpenVR::CVRNotifications
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(9262))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9340))
// CS Name: ::OVR.OpenVR::CVRNotifications*
class CORDL_TYPE CVRNotifications : public ::System::Object {
public:
  // Declarations
  /// @brief Field FnTable, offset 0x10, size 0x10
  __declspec(property(get = __get_FnTable, put = __set_FnTable))::OVR::OpenVR::IVRNotifications FnTable;

  constexpr ::OVR::OpenVR::IVRNotifications& __get_FnTable();

  constexpr ::OVR::OpenVR::IVRNotifications const& __get_FnTable() const;

  constexpr void __set_FnTable(::OVR::OpenVR::IVRNotifications value);

  static inline ::OVR::OpenVR::CVRNotifications* New_ctor(void* pInterface);

  /// @brief Method .ctor addr 0x267e168 size 0x10c virtual false final false
  inline void _ctor(void* pInterface);

  /// @brief Method CreateNotification addr 0x267e274 size 0x2c virtual false final false
  inline ::OVR::OpenVR::EVRNotificationError CreateNotification(uint64_t ulOverlayHandle, uint64_t ulUserValue, ::OVR::OpenVR::EVRNotificationType type, ::StringW pchText,
                                                                ::OVR::OpenVR::EVRNotificationStyle style, ByRef<::OVR::OpenVR::NotificationBitmap_t> pImage, ByRef<uint32_t> pNotificationId);

  /// @brief Method RemoveNotification addr 0x267e2a0 size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVRNotificationError RemoveNotification(uint32_t notificationId);

  // Ctor Parameters [CppParam { name: "", ty: "CVRNotifications", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CVRNotifications(CVRNotifications&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CVRNotifications", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CVRNotifications(CVRNotifications const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CVRNotifications();

public:
  /// @brief Field FnTable, offset: 0x10, size: 0x10, def value: None
  ::OVR::OpenVR::IVRNotifications ___FnTable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::CVRNotifications, 0x20>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::CVRNotifications, ___FnTable) == 0x10, "Offset mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::CVRNotifications);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRNotifications*, "OVR.OpenVR", "CVRNotifications");
