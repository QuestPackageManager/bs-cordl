#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/ApplicationInvite.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ApplicationInvite)
namespace Oculus::Platform::Models {
class Destination;
}
namespace Oculus::Platform::Models {
class User;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class ApplicationInvite;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::ApplicationInvite);
// Type: Oculus.Platform.Models::ApplicationInvite
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: ::Oculus.Platform.Models::ApplicationInvite*
class CORDL_TYPE ApplicationInvite : public ::System::Object {
public:
  // Declarations
  /// @brief Field Destination, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Destination, put = __cordl_internal_set_Destination))::Oculus::Platform::Models::Destination* Destination;

  /// @brief Field DestinationOptional, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_DestinationOptional, put = __cordl_internal_set_DestinationOptional))::Oculus::Platform::Models::Destination* DestinationOptional;

  /// @brief Field IsActive, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_IsActive, put = __cordl_internal_set_IsActive)) bool IsActive;

  /// @brief Field LobbySessionId, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_LobbySessionId, put = __cordl_internal_set_LobbySessionId))::StringW LobbySessionId;

  /// @brief Field MatchSessionId, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_MatchSessionId, put = __cordl_internal_set_MatchSessionId))::StringW MatchSessionId;

  /// @brief Field Recipient, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_Recipient, put = __cordl_internal_set_Recipient))::Oculus::Platform::Models::User* Recipient;

  /// @brief Field RecipientOptional, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_RecipientOptional, put = __cordl_internal_set_RecipientOptional))::Oculus::Platform::Models::User* RecipientOptional;

  /// @brief Field ID, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__cordl_ID, put = __cordl_internal_set__cordl_ID)) uint64_t _cordl_ID;

  static inline ::Oculus::Platform::Models::ApplicationInvite* New_ctor(::System::IntPtr o);

  constexpr ::Oculus::Platform::Models::Destination*& __cordl_internal_get_Destination();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::Destination*> const& __cordl_internal_get_Destination() const;

  constexpr ::Oculus::Platform::Models::Destination*& __cordl_internal_get_DestinationOptional();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::Destination*> const& __cordl_internal_get_DestinationOptional() const;

  constexpr bool const& __cordl_internal_get_IsActive() const;

  constexpr bool& __cordl_internal_get_IsActive();

  constexpr ::StringW const& __cordl_internal_get_LobbySessionId() const;

  constexpr ::StringW& __cordl_internal_get_LobbySessionId();

  constexpr ::StringW const& __cordl_internal_get_MatchSessionId() const;

  constexpr ::StringW& __cordl_internal_get_MatchSessionId();

  constexpr ::Oculus::Platform::Models::User*& __cordl_internal_get_Recipient();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::User*> const& __cordl_internal_get_Recipient() const;

  constexpr ::Oculus::Platform::Models::User*& __cordl_internal_get_RecipientOptional();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::User*> const& __cordl_internal_get_RecipientOptional() const;

  constexpr uint64_t const& __cordl_internal_get__cordl_ID() const;

  constexpr uint64_t& __cordl_internal_get__cordl_ID();

  constexpr void __cordl_internal_set_Destination(::Oculus::Platform::Models::Destination* value);

  constexpr void __cordl_internal_set_DestinationOptional(::Oculus::Platform::Models::Destination* value);

  constexpr void __cordl_internal_set_IsActive(bool value);

  constexpr void __cordl_internal_set_LobbySessionId(::StringW value);

  constexpr void __cordl_internal_set_MatchSessionId(::StringW value);

  constexpr void __cordl_internal_set_Recipient(::Oculus::Platform::Models::User* value);

  constexpr void __cordl_internal_set_RecipientOptional(::Oculus::Platform::Models::User* value);

  constexpr void __cordl_internal_set__cordl_ID(uint64_t value);

  /// @brief Method .ctor, addr 0x2b0e14c, size 0x1bc, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ApplicationInvite();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ApplicationInvite", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ApplicationInvite(ApplicationInvite&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ApplicationInvite", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ApplicationInvite(ApplicationInvite const&) = delete;

  /// @brief Field DestinationOptional, offset: 0x10, size: 0x8, def value: None
  ::Oculus::Platform::Models::Destination* ___DestinationOptional;

  /// @brief Field Destination, offset: 0x18, size: 0x8, def value: None
  ::Oculus::Platform::Models::Destination* ___Destination;

  /// @brief Field ID, offset: 0x20, size: 0x8, def value: None
  uint64_t ____cordl_ID;

  /// @brief Field IsActive, offset: 0x28, size: 0x1, def value: None
  bool ___IsActive;

  /// @brief Field LobbySessionId, offset: 0x30, size: 0x8, def value: None
  ::StringW ___LobbySessionId;

  /// @brief Field MatchSessionId, offset: 0x38, size: 0x8, def value: None
  ::StringW ___MatchSessionId;

  /// @brief Field RecipientOptional, offset: 0x40, size: 0x8, def value: None
  ::Oculus::Platform::Models::User* ___RecipientOptional;

  /// @brief Field Recipient, offset: 0x48, size: 0x8, def value: None
  ::Oculus::Platform::Models::User* ___Recipient;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::ApplicationInvite, 0x50>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::ApplicationInvite, ___DestinationOptional) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::ApplicationInvite, ___Destination) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::ApplicationInvite, ____cordl_ID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::ApplicationInvite, ___IsActive) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::ApplicationInvite, ___LobbySessionId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::ApplicationInvite, ___MatchSessionId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::ApplicationInvite, ___RecipientOptional) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::ApplicationInvite, ___Recipient) == 0x48, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::ApplicationInvite);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::ApplicationInvite*, "Oculus.Platform.Models", "ApplicationInvite");
