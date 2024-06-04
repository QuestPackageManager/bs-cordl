#pragma once
// IWYU pragma private; include "OVR/OpenVR/IVRNotifications.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
struct NotificationBitmap_t;
}
namespace OVR::OpenVR {
class __IVRNotifications___CreateNotification;
}
namespace OVR::OpenVR {
class __IVRNotifications___RemoveNotification;
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
class __IVRNotifications___CreateNotification;
}
namespace OVR::OpenVR {
class __IVRNotifications___RemoveNotification;
}
namespace OVR::OpenVR {
struct IVRNotifications;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::__IVRNotifications___CreateNotification);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRNotifications___RemoveNotification);
MARK_VAL_T(::OVR::OpenVR::IVRNotifications);
// Type: ::_CreateNotification
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRNotifications::_CreateNotification*
class CORDL_TYPE __IVRNotifications___CreateNotification : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2be00ec, size 0x15c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, uint64_t ulUserValue, ::OVR::OpenVR::EVRNotificationType type, ::StringW pchText, ::OVR::OpenVR::EVRNotificationStyle style,
                                             ByRef<::OVR::OpenVR::NotificationBitmap_t> pImage, ByRef<uint32_t> pNotificationId, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2be0248, size 0x34, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRNotificationError EndInvoke(ByRef<::OVR::OpenVR::NotificationBitmap_t> pImage, ByRef<uint32_t> pNotificationId, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2be00d4, size 0x18, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRNotificationError Invoke(uint64_t ulOverlayHandle, uint64_t ulUserValue, ::OVR::OpenVR::EVRNotificationType type, ::StringW pchText,
                                                    ::OVR::OpenVR::EVRNotificationStyle style, ByRef<::OVR::OpenVR::NotificationBitmap_t> pImage, ByRef<uint32_t> pNotificationId);

  static inline ::OVR::OpenVR::__IVRNotifications___CreateNotification* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2be0010, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRNotifications___CreateNotification();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRNotifications___CreateNotification", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRNotifications___CreateNotification(__IVRNotifications___CreateNotification&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRNotifications___CreateNotification", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRNotifications___CreateNotification(__IVRNotifications___CreateNotification const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRNotifications___CreateNotification, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_RemoveNotification
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRNotifications::_RemoveNotification*
class CORDL_TYPE __IVRNotifications___RemoveNotification : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2be0354, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t notificationId, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2be03d8, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRNotificationError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2be0340, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRNotificationError Invoke(uint32_t notificationId);

  static inline ::OVR::OpenVR::__IVRNotifications___RemoveNotification* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2be027c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRNotifications___RemoveNotification();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRNotifications___RemoveNotification", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRNotifications___RemoveNotification(__IVRNotifications___RemoveNotification&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRNotifications___RemoveNotification", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRNotifications___RemoveNotification(__IVRNotifications___RemoveNotification const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRNotifications___RemoveNotification, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: OVR.OpenVR::IVRNotifications
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// CS Name: ::OVR.OpenVR::IVRNotifications
struct CORDL_TYPE IVRNotifications {
public:
  // Declarations
  using _CreateNotification = ::OVR::OpenVR::__IVRNotifications___CreateNotification;

  using _RemoveNotification = ::OVR::OpenVR::__IVRNotifications___RemoveNotification;

  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRNotifications();

  // Ctor Parameters [CppParam { name: "CreateNotification", ty: "::OVR::OpenVR::__IVRNotifications___CreateNotification*", modifiers: "", def_value: None }, CppParam { name: "RemoveNotification", ty:
  // "::OVR::OpenVR::__IVRNotifications___RemoveNotification*", modifiers: "", def_value: None }]
  constexpr IVRNotifications(::OVR::OpenVR::__IVRNotifications___CreateNotification* CreateNotification, ::OVR::OpenVR::__IVRNotifications___RemoveNotification* RemoveNotification) noexcept;

  /// @brief Field CreateNotification, offset: 0x0, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRNotifications___CreateNotification* CreateNotification;

  /// @brief Field RemoveNotification, offset: 0x8, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRNotifications___RemoveNotification* RemoveNotification;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRNotifications, 0x10>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRNotifications, CreateNotification) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRNotifications, RemoveNotification) == 0x8, "Offset mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::__IVRNotifications___CreateNotification);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRNotifications___CreateNotification*, "OVR.OpenVR", "IVRNotifications/_CreateNotification");
NEED_NO_BOX(::OVR::OpenVR::__IVRNotifications___RemoveNotification);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRNotifications___RemoveNotification*, "OVR.OpenVR", "IVRNotifications/_RemoveNotification");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRNotifications, "OVR.OpenVR", "IVRNotifications");
