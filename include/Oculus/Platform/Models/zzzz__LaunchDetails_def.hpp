#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/LaunchDetails.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__LaunchType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LaunchDetails)
namespace Oculus::Platform::Models {
class UserList;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class LaunchDetails;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::LaunchDetails);
// Dependencies Oculus.Platform.LaunchType, System.Object
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.LaunchDetails
class CORDL_TYPE LaunchDetails : public ::System::Object {
public:
  // Declarations
  /// @brief Field DeeplinkMessage, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_DeeplinkMessage, put = __cordl_internal_set_DeeplinkMessage)) ::StringW DeeplinkMessage;

  /// @brief Field DestinationApiName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_DestinationApiName, put = __cordl_internal_set_DestinationApiName)) ::StringW DestinationApiName;

  /// @brief Field LaunchSource, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_LaunchSource, put = __cordl_internal_set_LaunchSource)) ::StringW LaunchSource;

  /// @brief Field LaunchType, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_LaunchType, put = __cordl_internal_set_LaunchType)) ::Oculus::Platform::LaunchType LaunchType;

  /// @brief Field TrackingID, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_TrackingID, put = __cordl_internal_set_TrackingID)) ::StringW TrackingID;

  /// @brief Field Users, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_Users, put = __cordl_internal_set_Users)) ::Oculus::Platform::Models::UserList* Users;

  /// @brief Field UsersOptional, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_UsersOptional, put = __cordl_internal_set_UsersOptional)) ::Oculus::Platform::Models::UserList* UsersOptional;

  static inline ::Oculus::Platform::Models::LaunchDetails* New_ctor(::System::IntPtr o);

  constexpr ::StringW const& __cordl_internal_get_DeeplinkMessage() const;

  constexpr ::StringW& __cordl_internal_get_DeeplinkMessage();

  constexpr ::StringW const& __cordl_internal_get_DestinationApiName() const;

  constexpr ::StringW& __cordl_internal_get_DestinationApiName();

  constexpr ::StringW const& __cordl_internal_get_LaunchSource() const;

  constexpr ::StringW& __cordl_internal_get_LaunchSource();

  constexpr ::Oculus::Platform::LaunchType const& __cordl_internal_get_LaunchType() const;

  constexpr ::Oculus::Platform::LaunchType& __cordl_internal_get_LaunchType();

  constexpr ::StringW const& __cordl_internal_get_TrackingID() const;

  constexpr ::StringW& __cordl_internal_get_TrackingID();

  constexpr ::Oculus::Platform::Models::UserList* const& __cordl_internal_get_Users() const;

  constexpr ::Oculus::Platform::Models::UserList*& __cordl_internal_get_Users();

  constexpr ::Oculus::Platform::Models::UserList* const& __cordl_internal_get_UsersOptional() const;

  constexpr ::Oculus::Platform::Models::UserList*& __cordl_internal_get_UsersOptional();

  constexpr void __cordl_internal_set_DeeplinkMessage(::StringW value);

  constexpr void __cordl_internal_set_DestinationApiName(::StringW value);

  constexpr void __cordl_internal_set_LaunchSource(::StringW value);

  constexpr void __cordl_internal_set_LaunchType(::Oculus::Platform::LaunchType value);

  constexpr void __cordl_internal_set_TrackingID(::StringW value);

  constexpr void __cordl_internal_set_Users(::Oculus::Platform::Models::UserList* value);

  constexpr void __cordl_internal_set_UsersOptional(::Oculus::Platform::Models::UserList* value);

  /// @brief Method .ctor, addr 0x3f9317c, size 0x118, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LaunchDetails();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LaunchDetails", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LaunchDetails(LaunchDetails&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LaunchDetails", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LaunchDetails(LaunchDetails const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15527 };

  /// @brief Field DeeplinkMessage, offset: 0x10, size: 0x8, def value: None
  ::StringW ___DeeplinkMessage;

  /// @brief Field DestinationApiName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___DestinationApiName;

  /// @brief Field LaunchSource, offset: 0x20, size: 0x8, def value: None
  ::StringW ___LaunchSource;

  /// @brief Field LaunchType, offset: 0x28, size: 0x4, def value: None
  ::Oculus::Platform::LaunchType ___LaunchType;

  /// @brief Field TrackingID, offset: 0x30, size: 0x8, def value: None
  ::StringW ___TrackingID;

  /// @brief Field UsersOptional, offset: 0x38, size: 0x8, def value: None
  ::Oculus::Platform::Models::UserList* ___UsersOptional;

  /// @brief Field Users, offset: 0x40, size: 0x8, def value: None
  ::Oculus::Platform::Models::UserList* ___Users;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Models::LaunchDetails, ___DeeplinkMessage) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LaunchDetails, ___DestinationApiName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LaunchDetails, ___LaunchSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LaunchDetails, ___LaunchType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LaunchDetails, ___TrackingID) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LaunchDetails, ___UsersOptional) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LaunchDetails, ___Users) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::LaunchDetails, 0x48>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::LaunchDetails);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::LaunchDetails*, "Oculus.Platform.Models", "LaunchDetails");
