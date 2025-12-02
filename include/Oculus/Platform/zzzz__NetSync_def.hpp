#pragma once
// IWYU pragma private; include "Oculus/Platform/NetSync.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NetSync)
namespace Oculus::Platform::Models {
class NetSyncConnection;
}
namespace Oculus::Platform::Models {
class NetSyncSessionsChangedNotification;
}
namespace Oculus::Platform {
template <typename T> class Message_1_Callback;
}
// Forward declare root types
namespace Oculus::Platform {
class NetSync;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::NetSync);
// Dependencies System.Object
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.NetSync
class CORDL_TYPE NetSync : public ::System::Object {
public:
  // Declarations
  /// @brief Method SetConnectionStatusChangedNotificationCallback, addr 0x5bd565c, size 0x7c, virtual false, abstract: false, final false
  static inline void SetConnectionStatusChangedNotificationCallback(::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::NetSyncConnection*>* callback);

  /// @brief Method SetSessionsChangedNotificationCallback, addr 0x5bd56d8, size 0x7c, virtual false, abstract: false, final false
  static inline void SetSessionsChangedNotificationCallback(::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::NetSyncSessionsChangedNotification*>* callback);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetSync();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetSync", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetSync(NetSync&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetSync", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetSync(NetSync const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17917 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::NetSync, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::NetSync);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::NetSync*, "Oculus.Platform", "NetSync");
