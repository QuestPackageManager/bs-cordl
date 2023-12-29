#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__LaunchType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LaunchDetails)
namespace Oculus::Platform::Models {
class UserList;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class LaunchDetails;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::LaunchDetails);
// Type: Oculus.Platform.Models::LaunchDetails
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(13256))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13488))
// CS Name: ::Oculus.Platform.Models::LaunchDetails*
class CORDL_TYPE LaunchDetails : public ::System::Object {
public:
  // Declarations
  /// @brief Field DeeplinkMessage, offset 0x10, size 0x8
  __declspec(property(get = __get_DeeplinkMessage, put = __set_DeeplinkMessage))::StringW DeeplinkMessage;

  /// @brief Field DestinationApiName, offset 0x18, size 0x8
  __declspec(property(get = __get_DestinationApiName, put = __set_DestinationApiName))::StringW DestinationApiName;

  /// @brief Field LaunchSource, offset 0x20, size 0x8
  __declspec(property(get = __get_LaunchSource, put = __set_LaunchSource))::StringW LaunchSource;

  /// @brief Field LaunchType, offset 0x28, size 0x4
  __declspec(property(get = __get_LaunchType, put = __set_LaunchType))::Oculus::Platform::LaunchType LaunchType;

  /// @brief Field RoomID, offset 0x30, size 0x8
  __declspec(property(get = __get_RoomID, put = __set_RoomID)) uint64_t RoomID;

  /// @brief Field TrackingID, offset 0x38, size 0x8
  __declspec(property(get = __get_TrackingID, put = __set_TrackingID))::StringW TrackingID;

  /// @brief Field UsersOptional, offset 0x40, size 0x8
  __declspec(property(get = __get_UsersOptional, put = __set_UsersOptional))::Oculus::Platform::Models::UserList* UsersOptional;

  /// @brief Field Users, offset 0x48, size 0x8
  __declspec(property(get = __get_Users, put = __set_Users))::Oculus::Platform::Models::UserList* Users;

  constexpr ::StringW& __get_DeeplinkMessage();

  constexpr ::StringW const& __get_DeeplinkMessage() const;

  constexpr void __set_DeeplinkMessage(::StringW value);

  constexpr ::StringW& __get_DestinationApiName();

  constexpr ::StringW const& __get_DestinationApiName() const;

  constexpr void __set_DestinationApiName(::StringW value);

  constexpr ::StringW& __get_LaunchSource();

  constexpr ::StringW const& __get_LaunchSource() const;

  constexpr void __set_LaunchSource(::StringW value);

  constexpr ::Oculus::Platform::LaunchType& __get_LaunchType();

  constexpr ::Oculus::Platform::LaunchType const& __get_LaunchType() const;

  constexpr void __set_LaunchType(::Oculus::Platform::LaunchType value);

  constexpr uint64_t& __get_RoomID();

  constexpr uint64_t const& __get_RoomID() const;

  constexpr void __set_RoomID(uint64_t value);

  constexpr ::StringW& __get_TrackingID();

  constexpr ::StringW const& __get_TrackingID() const;

  constexpr void __set_TrackingID(::StringW value);

  constexpr ::Oculus::Platform::Models::UserList*& __get_UsersOptional();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::UserList*> const& __get_UsersOptional() const;

  constexpr void __set_UsersOptional(::Oculus::Platform::Models::UserList* value);

  constexpr ::Oculus::Platform::Models::UserList*& __get_Users();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::UserList*> const& __get_Users() const;

  constexpr void __set_Users(::Oculus::Platform::Models::UserList* value);

  static inline ::Oculus::Platform::Models::LaunchDetails* New_ctor(void* o);

  /// @brief Method .ctor addr 0x25b3ae8 size 0x150 virtual false final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "LaunchDetails", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LaunchDetails(LaunchDetails&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LaunchDetails", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LaunchDetails(LaunchDetails const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LaunchDetails();

public:
  /// @brief Field DeeplinkMessage, offset: 0x10, size: 0x8, def value: None
  ::StringW ___DeeplinkMessage;

  /// @brief Field DestinationApiName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___DestinationApiName;

  /// @brief Field LaunchSource, offset: 0x20, size: 0x8, def value: None
  ::StringW ___LaunchSource;

  /// @brief Field LaunchType, offset: 0x28, size: 0x4, def value: None
  ::Oculus::Platform::LaunchType ___LaunchType;

  /// @brief Field RoomID, offset: 0x30, size: 0x8, def value: None
  uint64_t ___RoomID;

  /// @brief Field TrackingID, offset: 0x38, size: 0x8, def value: None
  ::StringW ___TrackingID;

  /// @brief Field UsersOptional, offset: 0x40, size: 0x8, def value: None
  ::Oculus::Platform::Models::UserList* ___UsersOptional;

  /// @brief Field Users, offset: 0x48, size: 0x8, def value: None
  ::Oculus::Platform::Models::UserList* ___Users;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::LaunchDetails, 0x50>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LaunchDetails, ___DeeplinkMessage) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LaunchDetails, ___DestinationApiName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LaunchDetails, ___LaunchSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LaunchDetails, ___LaunchType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LaunchDetails, ___RoomID) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LaunchDetails, ___TrackingID) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LaunchDetails, ___UsersOptional) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LaunchDetails, ___Users) == 0x48, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::LaunchDetails);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::LaunchDetails*, "Oculus.Platform.Models", "LaunchDetails");
