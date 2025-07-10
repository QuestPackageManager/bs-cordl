#pragma once
// IWYU pragma private; include "OVR/OpenVR/IVRNotifications.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IVRNotifications)
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
class IVRNotifications__CreateNotification;
}
namespace OVR::OpenVR {
class IVRNotifications__RemoveNotification;
}
namespace OVR::OpenVR {
struct NotificationBitmap_t;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace OVR::OpenVR {
class IVRNotifications__CreateNotification;
}
namespace OVR::OpenVR {
class IVRNotifications__RemoveNotification;
}
namespace OVR::OpenVR {
struct IVRNotifications;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::IVRNotifications__CreateNotification);
MARK_REF_PTR_T(::OVR::OpenVR::IVRNotifications__RemoveNotification);
MARK_VAL_T(::OVR::OpenVR::IVRNotifications);
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRNotifications/_CreateNotification
class CORDL_TYPE IVRNotifications__CreateNotification : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x406bce8, size 0x164, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, uint64_t ulUserValue, ::OVR::OpenVR::EVRNotificationType type, ::StringW pchText, ::OVR::OpenVR::EVRNotificationStyle style,
                                             ::ByRef<::OVR::OpenVR::NotificationBitmap_t> pImage, ::ByRef<uint32_t> pNotificationId, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x406be4c, size 0x34, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRNotificationError EndInvoke(::ByRef<::OVR::OpenVR::NotificationBitmap_t> pImage, ::ByRef<uint32_t> pNotificationId, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x406bcd0, size 0x18, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRNotificationError Invoke(uint64_t ulOverlayHandle, uint64_t ulUserValue, ::OVR::OpenVR::EVRNotificationType type, ::StringW pchText,
                                                    ::OVR::OpenVR::EVRNotificationStyle style, ::ByRef<::OVR::OpenVR::NotificationBitmap_t> pImage, ::ByRef<uint32_t> pNotificationId);

  static inline ::OVR::OpenVR::IVRNotifications__CreateNotification* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x406bc44, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRNotifications__CreateNotification();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRNotifications__CreateNotification", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRNotifications__CreateNotification(IVRNotifications__CreateNotification&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRNotifications__CreateNotification", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRNotifications__CreateNotification(IVRNotifications__CreateNotification const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8809 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRNotifications__CreateNotification, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRNotifications/_RemoveNotification
class CORDL_TYPE IVRNotifications__RemoveNotification : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x406bf20, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t notificationId, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x406bfa4, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRNotificationError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x406bf0c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRNotificationError Invoke(uint32_t notificationId);

  static inline ::OVR::OpenVR::IVRNotifications__RemoveNotification* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x406be80, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRNotifications__RemoveNotification();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRNotifications__RemoveNotification", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRNotifications__RemoveNotification(IVRNotifications__RemoveNotification&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRNotifications__RemoveNotification", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRNotifications__RemoveNotification(IVRNotifications__RemoveNotification const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8810 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRNotifications__RemoveNotification, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.IVRNotifications
struct CORDL_TYPE IVRNotifications {
public:
  // Declarations
  using _CreateNotification = ::OVR::OpenVR::IVRNotifications__CreateNotification;

  using _RemoveNotification = ::OVR::OpenVR::IVRNotifications__RemoveNotification;

  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRNotifications();

  // Ctor Parameters [CppParam { name: "CreateNotification", ty: "::OVR::OpenVR::IVRNotifications__CreateNotification*", modifiers: "", def_value: None }, CppParam { name: "RemoveNotification", ty:
  // "::OVR::OpenVR::IVRNotifications__RemoveNotification*", modifiers: "", def_value: None }]
  constexpr IVRNotifications(::OVR::OpenVR::IVRNotifications__CreateNotification* CreateNotification, ::OVR::OpenVR::IVRNotifications__RemoveNotification* RemoveNotification) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8811 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field CreateNotification, offset: 0x0, size: 0x8, def value: None
  ::OVR::OpenVR::IVRNotifications__CreateNotification* CreateNotification;

  /// @brief Field RemoveNotification, offset: 0x8, size: 0x8, def value: None
  ::OVR::OpenVR::IVRNotifications__RemoveNotification* RemoveNotification;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::IVRNotifications, CreateNotification) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRNotifications, RemoveNotification) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRNotifications, 0x10>, "Size mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::IVRNotifications__CreateNotification);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRNotifications__CreateNotification*, "OVR.OpenVR", "IVRNotifications/_CreateNotification");
NEED_NO_BOX(::OVR::OpenVR::IVRNotifications__RemoveNotification);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRNotifications__RemoveNotification*, "OVR.OpenVR", "IVRNotifications/_RemoveNotification");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRNotifications, "OVR.OpenVR", "IVRNotifications");
