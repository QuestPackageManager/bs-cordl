#pragma once
// IWYU pragma private; include "System/Security/NamedPermissionSet.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/zzzz__PermissionSet_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NamedPermissionSet)
namespace System::Security::Permissions {
struct PermissionState;
}
namespace System::Security {
class SecurityElement;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Security {
class NamedPermissionSet;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::NamedPermissionSet);
// Dependencies System.Security.PermissionSet
namespace System::Security {
// Is value type: false
// CS Name: System.Security.NamedPermissionSet
class CORDL_TYPE NamedPermissionSet : public ::System::Security::PermissionSet {
public:
  // Declarations
  __declspec(property(get = get_Name, put = set_Name)) ::StringW Name;

  /// @brief Field description, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_description, put = __cordl_internal_set_description)) ::StringW description;

  /// @brief Field name, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::StringW name;

  /// @brief Method Equals, addr 0x3c9944c, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x3c99678, size 0x38, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Security::NamedPermissionSet* New_ctor();

  static inline ::System::Security::NamedPermissionSet* New_ctor(::StringW name);

  static inline ::System::Security::NamedPermissionSet* New_ctor(::StringW name, ::System::Security::Permissions::PermissionState state);

  /// @brief Method ToXml, addr 0x3c98f5c, size 0x98, virtual true, abstract: false, final false
  inline ::System::Security::SecurityElement* ToXml();

  constexpr ::StringW const& __cordl_internal_get_description() const;

  constexpr ::StringW& __cordl_internal_get_description();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr void __cordl_internal_set_description(::StringW value);

  constexpr void __cordl_internal_set_name(::StringW value);

  /// @brief Method .ctor, addr 0x3c98d2c, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3c98f4c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method .ctor, addr 0x3c98de4, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::System::Security::Permissions::PermissionState state);

  /// @brief Method get_Name, addr 0x3c98f54, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method set_Name, addr 0x3c98e94, size 0xb8, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NamedPermissionSet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NamedPermissionSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NamedPermissionSet(NamedPermissionSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NamedPermissionSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NamedPermissionSet(NamedPermissionSet const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2886 };

  /// @brief Field name, offset: 0x30, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field description, offset: 0x38, size: 0x8, def value: None
  ::StringW ___description;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::NamedPermissionSet, ___name) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Security::NamedPermissionSet, ___description) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::NamedPermissionSet, 0x40>, "Size mismatch!");

} // namespace System::Security
NEED_NO_BOX(::System::Security::NamedPermissionSet);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::NamedPermissionSet*, "System.Security", "NamedPermissionSet");
