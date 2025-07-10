#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/User.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__UserPresenceStatus_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(User)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class User;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::User);
// Dependencies Oculus.Platform.UserPresenceStatus, System.Object
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.User
class CORDL_TYPE User : public ::System::Object {
public:
  // Declarations
  /// @brief Field DisplayName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_DisplayName, put = __cordl_internal_set_DisplayName)) ::StringW DisplayName;

  /// @brief Field ImageURL, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_ImageURL, put = __cordl_internal_set_ImageURL)) ::StringW ImageURL;

  /// @brief Field OculusID, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_OculusID, put = __cordl_internal_set_OculusID)) ::StringW OculusID;

  /// @brief Field Presence, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_Presence, put = __cordl_internal_set_Presence)) ::StringW Presence;

  /// @brief Field PresenceDeeplinkMessage, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_PresenceDeeplinkMessage, put = __cordl_internal_set_PresenceDeeplinkMessage)) ::StringW PresenceDeeplinkMessage;

  /// @brief Field PresenceDestinationApiName, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_PresenceDestinationApiName, put = __cordl_internal_set_PresenceDestinationApiName)) ::StringW PresenceDestinationApiName;

  /// @brief Field PresenceLobbySessionId, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_PresenceLobbySessionId, put = __cordl_internal_set_PresenceLobbySessionId)) ::StringW PresenceLobbySessionId;

  /// @brief Field PresenceMatchSessionId, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_PresenceMatchSessionId, put = __cordl_internal_set_PresenceMatchSessionId)) ::StringW PresenceMatchSessionId;

  /// @brief Field PresenceStatus, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_PresenceStatus, put = __cordl_internal_set_PresenceStatus)) ::Oculus::Platform::UserPresenceStatus PresenceStatus;

  /// @brief Field SmallImageUrl, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_SmallImageUrl, put = __cordl_internal_set_SmallImageUrl)) ::StringW SmallImageUrl;

  /// @brief Field ID, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__cordl_ID, put = __cordl_internal_set__cordl_ID)) uint64_t _cordl_ID;

  static inline ::Oculus::Platform::Models::User* New_ctor(::System::IntPtr o);

  constexpr ::StringW const& __cordl_internal_get_DisplayName() const;

  constexpr ::StringW& __cordl_internal_get_DisplayName();

  constexpr ::StringW const& __cordl_internal_get_ImageURL() const;

  constexpr ::StringW& __cordl_internal_get_ImageURL();

  constexpr ::StringW const& __cordl_internal_get_OculusID() const;

  constexpr ::StringW& __cordl_internal_get_OculusID();

  constexpr ::StringW const& __cordl_internal_get_Presence() const;

  constexpr ::StringW& __cordl_internal_get_Presence();

  constexpr ::StringW const& __cordl_internal_get_PresenceDeeplinkMessage() const;

  constexpr ::StringW& __cordl_internal_get_PresenceDeeplinkMessage();

  constexpr ::StringW const& __cordl_internal_get_PresenceDestinationApiName() const;

  constexpr ::StringW& __cordl_internal_get_PresenceDestinationApiName();

  constexpr ::StringW const& __cordl_internal_get_PresenceLobbySessionId() const;

  constexpr ::StringW& __cordl_internal_get_PresenceLobbySessionId();

  constexpr ::StringW const& __cordl_internal_get_PresenceMatchSessionId() const;

  constexpr ::StringW& __cordl_internal_get_PresenceMatchSessionId();

  constexpr ::Oculus::Platform::UserPresenceStatus const& __cordl_internal_get_PresenceStatus() const;

  constexpr ::Oculus::Platform::UserPresenceStatus& __cordl_internal_get_PresenceStatus();

  constexpr ::StringW const& __cordl_internal_get_SmallImageUrl() const;

  constexpr ::StringW& __cordl_internal_get_SmallImageUrl();

  constexpr uint64_t const& __cordl_internal_get__cordl_ID() const;

  constexpr uint64_t& __cordl_internal_get__cordl_ID();

  constexpr void __cordl_internal_set_DisplayName(::StringW value);

  constexpr void __cordl_internal_set_ImageURL(::StringW value);

  constexpr void __cordl_internal_set_OculusID(::StringW value);

  constexpr void __cordl_internal_set_Presence(::StringW value);

  constexpr void __cordl_internal_set_PresenceDeeplinkMessage(::StringW value);

  constexpr void __cordl_internal_set_PresenceDestinationApiName(::StringW value);

  constexpr void __cordl_internal_set_PresenceLobbySessionId(::StringW value);

  constexpr void __cordl_internal_set_PresenceMatchSessionId(::StringW value);

  constexpr void __cordl_internal_set_PresenceStatus(::Oculus::Platform::UserPresenceStatus value);

  constexpr void __cordl_internal_set_SmallImageUrl(::StringW value);

  constexpr void __cordl_internal_set__cordl_ID(uint64_t value);

  /// @brief Method .ctor, addr 0x3f8f50c, size 0x118, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr User();

public:
  // Ctor Parameters [CppParam { name: "", ty: "User", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  User(User&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "User", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  User(User const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15575 };

  /// @brief Field DisplayName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___DisplayName;

  /// @brief Field ID, offset: 0x18, size: 0x8, def value: None
  uint64_t ____cordl_ID;

  /// @brief Field ImageURL, offset: 0x20, size: 0x8, def value: None
  ::StringW ___ImageURL;

  /// @brief Field OculusID, offset: 0x28, size: 0x8, def value: None
  ::StringW ___OculusID;

  /// @brief Field Presence, offset: 0x30, size: 0x8, def value: None
  ::StringW ___Presence;

  /// @brief Field PresenceDeeplinkMessage, offset: 0x38, size: 0x8, def value: None
  ::StringW ___PresenceDeeplinkMessage;

  /// @brief Field PresenceDestinationApiName, offset: 0x40, size: 0x8, def value: None
  ::StringW ___PresenceDestinationApiName;

  /// @brief Field PresenceLobbySessionId, offset: 0x48, size: 0x8, def value: None
  ::StringW ___PresenceLobbySessionId;

  /// @brief Field PresenceMatchSessionId, offset: 0x50, size: 0x8, def value: None
  ::StringW ___PresenceMatchSessionId;

  /// @brief Field PresenceStatus, offset: 0x58, size: 0x4, def value: None
  ::Oculus::Platform::UserPresenceStatus ___PresenceStatus;

  /// @brief Field SmallImageUrl, offset: 0x60, size: 0x8, def value: None
  ::StringW ___SmallImageUrl;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Models::User, ___DisplayName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::User, ____cordl_ID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::User, ___ImageURL) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::User, ___OculusID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::User, ___Presence) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::User, ___PresenceDeeplinkMessage) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::User, ___PresenceDestinationApiName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::User, ___PresenceLobbySessionId) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::User, ___PresenceMatchSessionId) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::User, ___PresenceStatus) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::User, ___SmallImageUrl) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::User, 0x68>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::User);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::User*, "Oculus.Platform.Models", "User");
