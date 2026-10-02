#pragma once
// IWYU pragma private; include "GlobalNamespace/ConnectionFailedReasonMethods.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ConnectionFailedReasonMethods)
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
// Forward declare root types
namespace GlobalNamespace {
class ConnectionFailedReasonMethods;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ConnectionFailedReasonMethods*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ConnectionFailedReasonMethods*, "", "ConnectionFailedReasonMethods");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ConnectionFailedReasonMethods
class CORDL_TYPE ConnectionFailedReasonMethods : public ::System::Object {
public:
  // Declarations
  /// [Extension]
  /// @brief Method ErrorCode, addr 0x39bff38, size 0x94, virtual false, abstract: false, final false
  static inline ::StringW ErrorCode(::GlobalNamespace::ConnectionFailedReason connectionFailedReason);

  /// [Extension]
  /// @brief Method LocalizedKey, addr 0x39bfe08, size 0x130, virtual false, abstract: false, final false
  static inline ::StringW LocalizedKey(::GlobalNamespace::ConnectionFailedReason connectionFailedReason);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectionFailedReasonMethods();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConnectionFailedReasonMethods", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConnectionFailedReasonMethods(ConnectionFailedReasonMethods&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConnectionFailedReasonMethods", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConnectionFailedReasonMethods(ConnectionFailedReasonMethods const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15328 };

  /// @brief Field kConnectionFailedFailedToFindMatch offset 0xffffffff size 0x8
  static constexpr ::ConstString kConnectionFailedFailedToFindMatch{ u"CONNECTION_FAILED_FAILED_TO_FIND_MATCH" };

  /// @brief Field kConnectionFailedGameSessionEnded offset 0xffffffff size 0x8
  static constexpr ::ConstString kConnectionFailedGameSessionEnded{ u"CONNECTION_FAILED_GAME_SESSION_ENDED" };

  /// @brief Field kConnectionFailedIncompatibleServerEnvironment offset 0xffffffff size 0x8
  static constexpr ::ConstString kConnectionFailedIncompatibleServerEnvironment{ u"CONNECTION_FAILED_INCOMPATIBLE_SERVER_ENVIRONMENT" };

  /// @brief Field kConnectionFailedInvalidPassword offset 0xffffffff size 0x8
  static constexpr ::ConstString kConnectionFailedInvalidPassword{ u"CONNECTION_FAILED_INVALID_PASSWORD" };

  /// @brief Field kConnectionFailedServerAtCapacity offset 0xffffffff size 0x8
  static constexpr ::ConstString kConnectionFailedServerAtCapacity{ u"CONNECTION_FAILED_SERVER_AT_CAPACITY" };

  /// @brief Field kConnectionFailedTimeout offset 0xffffffff size 0x8
  static constexpr ::ConstString kConnectionFailedTimeout{ u"CONNECTION_FAILED_TIMEOUT" };

  /// @brief Field kConnectionFailedVersionMismatch offset 0xffffffff size 0x8
  static constexpr ::ConstString kConnectionFailedVersionMismatch{ u"CONNECTION_FAILED_VERSION_MISMATCH" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ConnectionFailedReasonMethods) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
