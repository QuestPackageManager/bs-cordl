#pragma once
// IWYU pragma private; include "System/Security/AccessControl/CommonSecurityDescriptor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/AccessControl/zzzz__ControlFlags_def.hpp"
#include "System/Security/AccessControl/zzzz__GenericSecurityDescriptor_def.hpp"
CORDL_MODULE_EXPORT(CommonSecurityDescriptor)
namespace System::Security::AccessControl {
class CommonAcl;
}
namespace System::Security::AccessControl {
struct ControlFlags;
}
namespace System::Security::AccessControl {
class DiscretionaryAcl;
}
namespace System::Security::AccessControl {
class SystemAcl;
}
namespace System::Security::Principal {
class SecurityIdentifier;
}
// Forward declare root types
namespace System::Security::AccessControl {
class CommonSecurityDescriptor;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::AccessControl::CommonSecurityDescriptor);
// Dependencies System.Security.AccessControl.ControlFlags, System.Security.AccessControl.GenericSecurityDescriptor
namespace System::Security::AccessControl {
// Is value type: false
// CS Name: System.Security.AccessControl.CommonSecurityDescriptor
class CORDL_TYPE CommonSecurityDescriptor : public ::System::Security::AccessControl::GenericSecurityDescriptor {
public:
  // Declarations
  __declspec(property(get = get_DiscretionaryAcl, put = set_DiscretionaryAcl)) ::System::Security::AccessControl::DiscretionaryAcl* DiscretionaryAcl;

  __declspec(property(put = set_Group)) ::System::Security::Principal::SecurityIdentifier* Group;

  __declspec(property(get = get_IsContainer)) bool IsContainer;

  __declspec(property(get = get_IsDS)) bool IsDS;

  __declspec(property(put = set_Owner)) ::System::Security::Principal::SecurityIdentifier* Owner;

  __declspec(property(put = set_SystemAcl)) ::System::Security::AccessControl::SystemAcl* SystemAcl;

  /// @brief Field discretionary_acl, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_discretionary_acl, put = __cordl_internal_set_discretionary_acl)) ::System::Security::AccessControl::DiscretionaryAcl* discretionary_acl;

  /// @brief Field flags, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_flags, put = __cordl_internal_set_flags)) ::System::Security::AccessControl::ControlFlags flags;

  /// @brief Field group, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_group, put = __cordl_internal_set_group)) ::System::Security::Principal::SecurityIdentifier* group;

  /// @brief Field is_container, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_is_container, put = __cordl_internal_set_is_container)) bool is_container;

  /// @brief Field is_ds, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_is_ds, put = __cordl_internal_set_is_ds)) bool is_ds;

  /// @brief Field owner, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_owner, put = __cordl_internal_set_owner)) ::System::Security::Principal::SecurityIdentifier* owner;

  /// @brief Field system_acl, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_system_acl, put = __cordl_internal_set_system_acl)) ::System::Security::AccessControl::SystemAcl* system_acl;

  /// @brief Method CheckAclConsistency, addr 0x3cc5314, size 0xbc, virtual false, abstract: false, final false
  inline void CheckAclConsistency(::System::Security::AccessControl::CommonAcl* acl);

  /// @brief Method Init, addr 0x3cc50f4, size 0x84, virtual false, abstract: false, final false
  inline void Init(bool isContainer, bool isDS, ::System::Security::AccessControl::ControlFlags flags, ::System::Security::Principal::SecurityIdentifier* owner,
                   ::System::Security::Principal::SecurityIdentifier* group, ::System::Security::AccessControl::SystemAcl* systemAcl,
                   ::System::Security::AccessControl::DiscretionaryAcl* discretionaryAcl);

  static inline ::System::Security::AccessControl::CommonSecurityDescriptor* New_ctor(bool isContainer, bool isDS, ::System::Security::AccessControl::ControlFlags flags,
                                                                                      ::System::Security::Principal::SecurityIdentifier* owner,
                                                                                      ::System::Security::Principal::SecurityIdentifier* group, ::System::Security::AccessControl::SystemAcl* systemAcl,
                                                                                      ::System::Security::AccessControl::DiscretionaryAcl* discretionaryAcl);

  constexpr ::System::Security::AccessControl::DiscretionaryAcl* const& __cordl_internal_get_discretionary_acl() const;

  constexpr ::System::Security::AccessControl::DiscretionaryAcl*& __cordl_internal_get_discretionary_acl();

  constexpr ::System::Security::AccessControl::ControlFlags const& __cordl_internal_get_flags() const;

  constexpr ::System::Security::AccessControl::ControlFlags& __cordl_internal_get_flags();

  constexpr ::System::Security::Principal::SecurityIdentifier* const& __cordl_internal_get_group() const;

  constexpr ::System::Security::Principal::SecurityIdentifier*& __cordl_internal_get_group();

  constexpr bool const& __cordl_internal_get_is_container() const;

  constexpr bool& __cordl_internal_get_is_container();

  constexpr bool const& __cordl_internal_get_is_ds() const;

  constexpr bool& __cordl_internal_get_is_ds();

  constexpr ::System::Security::Principal::SecurityIdentifier* const& __cordl_internal_get_owner() const;

  constexpr ::System::Security::Principal::SecurityIdentifier*& __cordl_internal_get_owner();

  constexpr ::System::Security::AccessControl::SystemAcl* const& __cordl_internal_get_system_acl() const;

  constexpr ::System::Security::AccessControl::SystemAcl*& __cordl_internal_get_system_acl();

  constexpr void __cordl_internal_set_discretionary_acl(::System::Security::AccessControl::DiscretionaryAcl* value);

  constexpr void __cordl_internal_set_flags(::System::Security::AccessControl::ControlFlags value);

  constexpr void __cordl_internal_set_group(::System::Security::Principal::SecurityIdentifier* value);

  constexpr void __cordl_internal_set_is_container(bool value);

  constexpr void __cordl_internal_set_is_ds(bool value);

  constexpr void __cordl_internal_set_owner(::System::Security::Principal::SecurityIdentifier* value);

  constexpr void __cordl_internal_set_system_acl(::System::Security::AccessControl::SystemAcl* value);

  /// @brief Method .ctor, addr 0x3cc5078, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(bool isContainer, bool isDS, ::System::Security::AccessControl::ControlFlags flags, ::System::Security::Principal::SecurityIdentifier* owner,
                    ::System::Security::Principal::SecurityIdentifier* group, ::System::Security::AccessControl::SystemAcl* systemAcl,
                    ::System::Security::AccessControl::DiscretionaryAcl* discretionaryAcl);

  /// @brief Method get_DiscretionaryAcl, addr 0x3cc52a0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Security::AccessControl::DiscretionaryAcl* get_DiscretionaryAcl();

  /// @brief Method get_IsContainer, addr 0x3cc53d8, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsContainer();

  /// @brief Method get_IsDS, addr 0x3cc53e0, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsDS();

  /// @brief Method set_DiscretionaryAcl, addr 0x3cc51a8, size 0xf8, virtual false, abstract: false, final false
  inline void set_DiscretionaryAcl(::System::Security::AccessControl::DiscretionaryAcl* value);

  /// @brief Method set_Group, addr 0x3cc53d0, size 0x8, virtual true, abstract: false, final false
  inline void set_Group(::System::Security::Principal::SecurityIdentifier* value);

  /// @brief Method set_Owner, addr 0x3cc53e8, size 0x8, virtual true, abstract: false, final false
  inline void set_Owner(::System::Security::Principal::SecurityIdentifier* value);

  /// @brief Method set_SystemAcl, addr 0x3cc5178, size 0x30, virtual false, abstract: false, final false
  inline void set_SystemAcl(::System::Security::AccessControl::SystemAcl* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommonSecurityDescriptor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommonSecurityDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommonSecurityDescriptor(CommonSecurityDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommonSecurityDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommonSecurityDescriptor(CommonSecurityDescriptor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3026 };

  /// @brief Field is_container, offset: 0x10, size: 0x1, def value: None
  bool ___is_container;

  /// @brief Field is_ds, offset: 0x11, size: 0x1, def value: None
  bool ___is_ds;

  /// @brief Field flags, offset: 0x14, size: 0x4, def value: None
  ::System::Security::AccessControl::ControlFlags ___flags;

  /// @brief Field owner, offset: 0x18, size: 0x8, def value: None
  ::System::Security::Principal::SecurityIdentifier* ___owner;

  /// @brief Field group, offset: 0x20, size: 0x8, def value: None
  ::System::Security::Principal::SecurityIdentifier* ___group;

  /// @brief Field system_acl, offset: 0x28, size: 0x8, def value: None
  ::System::Security::AccessControl::SystemAcl* ___system_acl;

  /// @brief Field discretionary_acl, offset: 0x30, size: 0x8, def value: None
  ::System::Security::AccessControl::DiscretionaryAcl* ___discretionary_acl;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::AccessControl::CommonSecurityDescriptor, ___is_container) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::AccessControl::CommonSecurityDescriptor, ___is_ds) == 0x11, "Offset mismatch!");

static_assert(offsetof(::System::Security::AccessControl::CommonSecurityDescriptor, ___flags) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Security::AccessControl::CommonSecurityDescriptor, ___owner) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Security::AccessControl::CommonSecurityDescriptor, ___group) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Security::AccessControl::CommonSecurityDescriptor, ___system_acl) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Security::AccessControl::CommonSecurityDescriptor, ___discretionary_acl) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::CommonSecurityDescriptor, 0x38>, "Size mismatch!");

} // namespace System::Security::AccessControl
NEED_NO_BOX(::System::Security::AccessControl::CommonSecurityDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::CommonSecurityDescriptor*, "System.Security.AccessControl", "CommonSecurityDescriptor");
