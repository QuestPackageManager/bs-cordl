#pragma once
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
// Type: System.Security::NamedPermissionSet
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security {
// Is value type: false
// CS Name: ::System.Security::NamedPermissionSet*
class CORDL_TYPE NamedPermissionSet : public ::System::Security::PermissionSet {
public:
  // Declarations
  __declspec(property(get = get_Name, put = set_Name))::StringW Name;

  /// @brief Field description, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_description, put = __cordl_internal_set_description))::StringW description;

  /// @brief Field name, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name))::StringW name;

  /// @brief Method Equals, addr 0x25458c8, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x2545af4, size 0x38, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Security::NamedPermissionSet* New_ctor();

  static inline ::System::Security::NamedPermissionSet* New_ctor(::StringW name);

  static inline ::System::Security::NamedPermissionSet* New_ctor(::StringW name, ::System::Security::Permissions::PermissionState state);

  /// @brief Method ToXml, addr 0x25453d4, size 0x98, virtual true, abstract: false, final false
  inline ::System::Security::SecurityElement* ToXml();

  constexpr ::StringW const& __cordl_internal_get_description() const;

  constexpr ::StringW& __cordl_internal_get_description();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr void __cordl_internal_set_description(::StringW value);

  constexpr void __cordl_internal_set_name(::StringW value);

  /// @brief Method .ctor, addr 0x2545194, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x25453c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method .ctor, addr 0x2545254, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::System::Security::Permissions::PermissionState state);

  /// @brief Method get_Name, addr 0x25453cc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method set_Name, addr 0x2545304, size 0xc0, virtual false, abstract: false, final false
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

  /// @brief Field name, offset: 0x30, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field description, offset: 0x38, size: 0x8, def value: None
  ::StringW ___description;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::NamedPermissionSet, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Security::NamedPermissionSet, ___name) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Security::NamedPermissionSet, ___description) == 0x38, "Offset mismatch!");

} // namespace System::Security
NEED_NO_BOX(::System::Security::NamedPermissionSet);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::NamedPermissionSet*, "System.Security", "NamedPermissionSet");
