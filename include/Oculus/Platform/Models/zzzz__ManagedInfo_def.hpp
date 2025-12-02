#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/ManagedInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ManagedInfo)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class ManagedInfo;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::ManagedInfo);
// Dependencies System.Object
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.ManagedInfo
class CORDL_TYPE ManagedInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field Department, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Department, put = __cordl_internal_set_Department)) ::StringW Department;

  /// @brief Field Email, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Email, put = __cordl_internal_set_Email)) ::StringW Email;

  /// @brief Field EmployeeNumber, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_EmployeeNumber, put = __cordl_internal_set_EmployeeNumber)) ::StringW EmployeeNumber;

  /// @brief Field ExternalId, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_ExternalId, put = __cordl_internal_set_ExternalId)) ::StringW ExternalId;

  /// @brief Field Location, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_Location, put = __cordl_internal_set_Location)) ::StringW Location;

  /// @brief Field Manager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_Manager, put = __cordl_internal_set_Manager)) ::StringW Manager;

  /// @brief Field Name, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_Name, put = __cordl_internal_set_Name)) ::StringW Name;

  /// @brief Field OrganizationId, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_OrganizationId, put = __cordl_internal_set_OrganizationId)) ::StringW OrganizationId;

  /// @brief Field OrganizationName, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_OrganizationName, put = __cordl_internal_set_OrganizationName)) ::StringW OrganizationName;

  /// @brief Field Position, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_Position, put = __cordl_internal_set_Position)) ::StringW Position;

  static inline ::Oculus::Platform::Models::ManagedInfo* New_ctor(::System::IntPtr o);

  constexpr ::StringW const& __cordl_internal_get_Department() const;

  constexpr ::StringW& __cordl_internal_get_Department();

  constexpr ::StringW const& __cordl_internal_get_Email() const;

  constexpr ::StringW& __cordl_internal_get_Email();

  constexpr ::StringW const& __cordl_internal_get_EmployeeNumber() const;

  constexpr ::StringW& __cordl_internal_get_EmployeeNumber();

  constexpr ::StringW const& __cordl_internal_get_ExternalId() const;

  constexpr ::StringW& __cordl_internal_get_ExternalId();

  constexpr ::StringW const& __cordl_internal_get_Location() const;

  constexpr ::StringW& __cordl_internal_get_Location();

  constexpr ::StringW const& __cordl_internal_get_Manager() const;

  constexpr ::StringW& __cordl_internal_get_Manager();

  constexpr ::StringW const& __cordl_internal_get_Name() const;

  constexpr ::StringW& __cordl_internal_get_Name();

  constexpr ::StringW const& __cordl_internal_get_OrganizationId() const;

  constexpr ::StringW& __cordl_internal_get_OrganizationId();

  constexpr ::StringW const& __cordl_internal_get_OrganizationName() const;

  constexpr ::StringW& __cordl_internal_get_OrganizationName();

  constexpr ::StringW const& __cordl_internal_get_Position() const;

  constexpr ::StringW& __cordl_internal_get_Position();

  constexpr void __cordl_internal_set_Department(::StringW value);

  constexpr void __cordl_internal_set_Email(::StringW value);

  constexpr void __cordl_internal_set_EmployeeNumber(::StringW value);

  constexpr void __cordl_internal_set_ExternalId(::StringW value);

  constexpr void __cordl_internal_set_Location(::StringW value);

  constexpr void __cordl_internal_set_Manager(::StringW value);

  constexpr void __cordl_internal_set_Name(::StringW value);

  constexpr void __cordl_internal_set_OrganizationId(::StringW value);

  constexpr void __cordl_internal_set_OrganizationName(::StringW value);

  constexpr void __cordl_internal_set_Position(::StringW value);

  /// @brief Method .ctor, addr 0x5bdbd48, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ManagedInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ManagedInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ManagedInfo(ManagedInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ManagedInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ManagedInfo(ManagedInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18020 };

  /// @brief Field Department, offset: 0x10, size: 0x8, def value: None
  ::StringW ___Department;

  /// @brief Field Email, offset: 0x18, size: 0x8, def value: None
  ::StringW ___Email;

  /// @brief Field EmployeeNumber, offset: 0x20, size: 0x8, def value: None
  ::StringW ___EmployeeNumber;

  /// @brief Field ExternalId, offset: 0x28, size: 0x8, def value: None
  ::StringW ___ExternalId;

  /// @brief Field Location, offset: 0x30, size: 0x8, def value: None
  ::StringW ___Location;

  /// @brief Field Manager, offset: 0x38, size: 0x8, def value: None
  ::StringW ___Manager;

  /// @brief Field Name, offset: 0x40, size: 0x8, def value: None
  ::StringW ___Name;

  /// @brief Field OrganizationId, offset: 0x48, size: 0x8, def value: None
  ::StringW ___OrganizationId;

  /// @brief Field OrganizationName, offset: 0x50, size: 0x8, def value: None
  ::StringW ___OrganizationName;

  /// @brief Field Position, offset: 0x58, size: 0x8, def value: None
  ::StringW ___Position;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Models::ManagedInfo, ___Department) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::ManagedInfo, ___Email) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::ManagedInfo, ___EmployeeNumber) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::ManagedInfo, ___ExternalId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::ManagedInfo, ___Location) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::ManagedInfo, ___Manager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::ManagedInfo, ___Name) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::ManagedInfo, ___OrganizationId) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::ManagedInfo, ___OrganizationName) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::ManagedInfo, ___Position) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::ManagedInfo, 0x60>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::ManagedInfo);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::ManagedInfo*, "Oculus.Platform.Models", "ManagedInfo");
