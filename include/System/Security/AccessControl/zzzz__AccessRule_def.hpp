#pragma once
// IWYU pragma private; include "System/Security/AccessControl/AccessRule.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/AccessControl/zzzz__AccessControlType_def.hpp"
#include "System/Security/AccessControl/zzzz__AuthorizationRule_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AccessRule)
namespace System::Security::AccessControl {
struct AccessControlType;
}
namespace System::Security::AccessControl {
struct InheritanceFlags;
}
namespace System::Security::AccessControl {
struct PropagationFlags;
}
namespace System::Security::Principal {
class IdentityReference;
}
// Forward declare root types
namespace System::Security::AccessControl {
class AccessRule;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::AccessControl::AccessRule);
// Type: System.Security.AccessControl::AccessRule
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Security::AccessControl {
// Is value type: false
// CS Name: ::System.Security.AccessControl::AccessRule*
class CORDL_TYPE AccessRule : public ::System::Security::AccessControl::AuthorizationRule {
public:
  // Declarations
  __declspec(property(get = get_AccessControlType))::System::Security::AccessControl::AccessControlType AccessControlType;

  /// @brief Field type, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type))::System::Security::AccessControl::AccessControlType type;

  static inline ::System::Security::AccessControl::AccessRule* New_ctor(::System::Security::Principal::IdentityReference* identity, int32_t accessMask, bool isInherited,
                                                                        ::System::Security::AccessControl::InheritanceFlags inheritanceFlags,
                                                                        ::System::Security::AccessControl::PropagationFlags propagationFlags,
                                                                        ::System::Security::AccessControl::AccessControlType type);

  constexpr ::System::Security::AccessControl::AccessControlType const& __cordl_internal_get_type() const;

  constexpr ::System::Security::AccessControl::AccessControlType& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_type(::System::Security::AccessControl::AccessControlType value);

  /// @brief Method .ctor, addr 0x28013e4, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Principal::IdentityReference* identity, int32_t accessMask, bool isInherited, ::System::Security::AccessControl::InheritanceFlags inheritanceFlags,
                    ::System::Security::AccessControl::PropagationFlags propagationFlags, ::System::Security::AccessControl::AccessControlType type);

  /// @brief Method get_AccessControlType, addr 0x2801610, size 0x8, virtual false, abstract: false, final false
  inline ::System::Security::AccessControl::AccessControlType get_AccessControlType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AccessRule();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AccessRule", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AccessRule(AccessRule&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AccessRule", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AccessRule(AccessRule const&) = delete;

  /// @brief Field type, offset: 0x28, size: 0x4, def value: None
  ::System::Security::AccessControl::AccessControlType ___type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::AccessRule, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Security::AccessControl::AccessRule, ___type) == 0x28, "Offset mismatch!");

} // namespace System::Security::AccessControl
NEED_NO_BOX(::System::Security::AccessControl::AccessRule);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::AccessRule*, "System.Security.AccessControl", "AccessRule");
