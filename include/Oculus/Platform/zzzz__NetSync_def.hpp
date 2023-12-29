#pragma once
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
template <typename T> class __Message_1__Callback;
}
// Forward declare root types
namespace Oculus::Platform {
class NetSync;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::NetSync);
// Type: Oculus.Platform::NetSync
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13400))
// CS Name: ::Oculus.Platform::NetSync*
class CORDL_TYPE NetSync : public ::System::Object {
public:
  // Declarations
  /// @brief Method SetConnectionStatusChangedNotificationCallback addr 0x25aad8c size 0x74 virtual false final false
  static inline void SetConnectionStatusChangedNotificationCallback(::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::NetSyncConnection*>* callback);

  /// @brief Method SetSessionsChangedNotificationCallback addr 0x25aae00 size 0x74 virtual false final false
  static inline void SetSessionsChangedNotificationCallback(::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::NetSyncSessionsChangedNotification*>* callback);

  // Ctor Parameters [CppParam { name: "", ty: "NetSync", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetSync(NetSync&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetSync", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetSync(NetSync const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetSync();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::NetSync, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::NetSync);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::NetSync*, "Oculus.Platform", "NetSync");
