#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/NetSyncSessionsChangedNotification.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetSyncSessionsChangedNotification)
namespace Oculus::Platform::Models {
class NetSyncSessionList;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class NetSyncSessionsChangedNotification;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::NetSyncSessionsChangedNotification);
// Type: Oculus.Platform.Models::NetSyncSessionsChangedNotification
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: ::Oculus.Platform.Models::NetSyncSessionsChangedNotification*
class CORDL_TYPE NetSyncSessionsChangedNotification : public ::System::Object {
public:
  // Declarations
  /// @brief Field ConnectionId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ConnectionId, put = __cordl_internal_set_ConnectionId)) int64_t ConnectionId;

  /// @brief Field Sessions, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Sessions, put = __cordl_internal_set_Sessions)) ::Oculus::Platform::Models::NetSyncSessionList* Sessions;

  static inline ::Oculus::Platform::Models::NetSyncSessionsChangedNotification* New_ctor(::System::IntPtr o);

  constexpr int64_t const& __cordl_internal_get_ConnectionId() const;

  constexpr int64_t& __cordl_internal_get_ConnectionId();

  constexpr ::Oculus::Platform::Models::NetSyncSessionList*& __cordl_internal_get_Sessions();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::NetSyncSessionList*> const& __cordl_internal_get_Sessions() const;

  constexpr void __cordl_internal_set_ConnectionId(int64_t value);

  constexpr void __cordl_internal_set_Sessions(::Oculus::Platform::Models::NetSyncSessionList* value);

  /// @brief Method .ctor, addr 0x3f310d4, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetSyncSessionsChangedNotification();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetSyncSessionsChangedNotification", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetSyncSessionsChangedNotification(NetSyncSessionsChangedNotification&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetSyncSessionsChangedNotification", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetSyncSessionsChangedNotification(NetSyncSessionsChangedNotification const&) = delete;

  /// @brief Field ConnectionId, offset: 0x10, size: 0x8, def value: None
  int64_t ___ConnectionId;

  /// @brief Field Sessions, offset: 0x18, size: 0x8, def value: None
  ::Oculus::Platform::Models::NetSyncSessionList* ___Sessions;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15508 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::NetSyncSessionsChangedNotification, 0x20>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::NetSyncSessionsChangedNotification, ___ConnectionId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::NetSyncSessionsChangedNotification, ___Sessions) == 0x18, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::NetSyncSessionsChangedNotification);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::NetSyncSessionsChangedNotification*, "Oculus.Platform.Models", "NetSyncSessionsChangedNotification");
