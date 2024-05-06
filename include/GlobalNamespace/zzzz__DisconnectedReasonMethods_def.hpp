#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DisconnectedReasonMethods)
namespace GlobalNamespace {
struct DisconnectedReason;
}
// Forward declare root types
namespace GlobalNamespace {
class DisconnectedReasonMethods;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DisconnectedReasonMethods);
// Type: ::DisconnectedReasonMethods
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DisconnectedReasonMethods*
class CORDL_TYPE DisconnectedReasonMethods : public ::System::Object {
public:
  // Declarations
  /// @brief Method ErrorCode, addr 0x14cfe64, size 0x80, virtual false, abstract: false, final false
  static inline ::StringW ErrorCode(::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method LocalizedKey, addr 0x14cfdbc, size 0xa8, virtual false, abstract: false, final false
  static inline ::StringW LocalizedKey(::GlobalNamespace::DisconnectedReason connectionFailedReason);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisconnectedReasonMethods();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DisconnectedReasonMethods", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisconnectedReasonMethods(DisconnectedReasonMethods&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisconnectedReasonMethods", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisconnectedReasonMethods(DisconnectedReasonMethods const&) = delete;

  /// @brief Field kDisconnectedKicked offset 0xffffffff size 0x8
  static constexpr ::ConstString kDisconnectedKicked{ u"DISCONNECTED_KICKED" };

  /// @brief Field kDisconnectedMasterServerUnreachable offset 0xffffffff size 0x8
  static constexpr ::ConstString kDisconnectedMasterServerUnreachable{ u"DISCONNECTED_MASTER_SERVER_UNREACHABLE" };

  /// @brief Field kDisconnectedServerAtCapacity offset 0xffffffff size 0x8
  static constexpr ::ConstString kDisconnectedServerAtCapacity{ u"DISCONNECTED_SERVER_AT_CAPACITY" };

  /// @brief Field kDisconnectedServerConnectionClosed offset 0xffffffff size 0x8
  static constexpr ::ConstString kDisconnectedServerConnectionClosed{ u"DISCONNECTED_SERVER_SHUT_DOWN" };

  /// @brief Field kDisconnectedServerTerminated offset 0xffffffff size 0x8
  static constexpr ::ConstString kDisconnectedServerTerminated{ u"DISCONNECTED_SERVER_SHUT_DOWN" };

  /// @brief Field kDisconnectedTimeout offset 0xffffffff size 0x8
  static constexpr ::ConstString kDisconnectedTimeout{ u"DISCONNECTED_TIMEOUT" };

  /// @brief Field kDisconnectedUnknown offset 0xffffffff size 0x8
  static constexpr ::ConstString kDisconnectedUnknown{ u"DISCONNECTED_UNKNOWN" };

  /// @brief Field kDisconnectedUserInitiated offset 0xffffffff size 0x8
  static constexpr ::ConstString kDisconnectedUserInitiated{ u"DISCONNECTED_USER_INITIATED" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DisconnectedReasonMethods, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DisconnectedReasonMethods);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DisconnectedReasonMethods*, "", "DisconnectedReasonMethods");
