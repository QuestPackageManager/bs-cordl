#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ApplicationInvite)
namespace Oculus::Platform::Models {
class User;
}
namespace Oculus::Platform::Models {
class Destination;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13414))
// CS Name: ::Oculus.Platform.Models::ApplicationInvite*
class CORDL_TYPE ApplicationInvite : public ::System::Object {
public:
  // Declarations
  /// @brief Field DestinationOptional, offset 0x10, size 0x8
  __declspec(property(get = __get_DestinationOptional, put = __set_DestinationOptional))::Oculus::Platform::Models::Destination* DestinationOptional;

  /// @brief Field Destination, offset 0x18, size 0x8
  __declspec(property(get = __get_Destination, put = __set_Destination))::Oculus::Platform::Models::Destination* Destination;

  /// @brief Field ID, offset 0x20, size 0x8
  __declspec(property(get = __get__cordl_ID, put = __set__cordl_ID)) uint64_t _cordl_ID;

  /// @brief Field IsActive, offset 0x28, size 0x1
  __declspec(property(get = __get_IsActive, put = __set_IsActive)) bool IsActive;

  /// @brief Field LobbySessionId, offset 0x30, size 0x8
  __declspec(property(get = __get_LobbySessionId, put = __set_LobbySessionId))::StringW LobbySessionId;

  /// @brief Field MatchSessionId, offset 0x38, size 0x8
  __declspec(property(get = __get_MatchSessionId, put = __set_MatchSessionId))::StringW MatchSessionId;

  /// @brief Field RecipientOptional, offset 0x40, size 0x8
  __declspec(property(get = __get_RecipientOptional, put = __set_RecipientOptional))::Oculus::Platform::Models::User* RecipientOptional;

  /// @brief Field Recipient, offset 0x48, size 0x8
  __declspec(property(get = __get_Recipient, put = __set_Recipient))::Oculus::Platform::Models::User* Recipient;

  constexpr ::Oculus::Platform::Models::Destination*& __get_DestinationOptional();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::Destination*> const& __get_DestinationOptional() const;

  constexpr void __set_DestinationOptional(::Oculus::Platform::Models::Destination* value);

  constexpr ::Oculus::Platform::Models::Destination*& __get_Destination();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::Destination*> const& __get_Destination() const;

  constexpr void __set_Destination(::Oculus::Platform::Models::Destination* value);

  constexpr uint64_t& __get__cordl_ID();

  constexpr uint64_t const& __get__cordl_ID() const;

  constexpr void __set__cordl_ID(uint64_t value);

  constexpr bool& __get_IsActive();

  constexpr bool const& __get_IsActive() const;

  constexpr void __set_IsActive(bool value);

  constexpr ::StringW& __get_LobbySessionId();

  constexpr ::StringW const& __get_LobbySessionId() const;

  constexpr void __set_LobbySessionId(::StringW value);

  constexpr ::StringW& __get_MatchSessionId();

  constexpr ::StringW const& __get_MatchSessionId() const;

  constexpr void __set_MatchSessionId(::StringW value);

  constexpr ::Oculus::Platform::Models::User*& __get_RecipientOptional();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::User*> const& __get_RecipientOptional() const;

  constexpr void __set_RecipientOptional(::Oculus::Platform::Models::User* value);

  constexpr ::Oculus::Platform::Models::User*& __get_Recipient();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::User*> const& __get_Recipient() const;

  constexpr void __set_Recipient(::Oculus::Platform::Models::User* value);

  static inline ::Oculus::Platform::Models::ApplicationInvite* New_ctor(void* o);

  /// @brief Method .ctor addr 0x2703ef8 size 0x1bc virtual false final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "ApplicationInvite", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ApplicationInvite(ApplicationInvite&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ApplicationInvite", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ApplicationInvite(ApplicationInvite const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ApplicationInvite();

public:
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

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::ApplicationInvite);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::ApplicationInvite*, "Oculus.Platform.Models", "ApplicationInvite");
