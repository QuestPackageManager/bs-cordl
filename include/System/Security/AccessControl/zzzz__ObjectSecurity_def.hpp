#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/AccessControl/zzzz__AccessControlSections_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectSecurity)
namespace System::Security::AccessControl {
struct AccessControlSections;
}
namespace System::Security::AccessControl {
struct AccessControlType;
}
namespace System::Security::AccessControl {
class AccessRule;
}
namespace System::Security::AccessControl {
class AuthorizationRuleCollection;
}
namespace System::Security::AccessControl {
class CommonSecurityDescriptor;
}
namespace System::Security::AccessControl {
struct InheritanceFlags;
}
namespace System::Security::AccessControl {
struct PropagationFlags;
}
namespace System::Security::AccessControl {
class QualifiedAce;
}
namespace System::Security::Principal {
class IdentityReference;
}
namespace System::Threading {
class ReaderWriterLock;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Security::AccessControl {
class ObjectSecurity;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::AccessControl::ObjectSecurity);
// Type: System.Security.AccessControl::ObjectSecurity
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::AccessControl {
// Is value type: false
// CS Name: ::System.Security.AccessControl::ObjectSecurity*
class CORDL_TYPE ObjectSecurity : public ::System::Object {
public:
  // Declarations
  __declspec(property(put = set_AccessControlSectionsModified))::System::Security::AccessControl::AccessControlSections AccessControlSectionsModified;

  /// @brief Field descriptor, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_descriptor, put = __cordl_internal_set_descriptor))::System::Security::AccessControl::CommonSecurityDescriptor* descriptor;

  /// @brief Field rw_lock, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_rw_lock, put = __cordl_internal_set_rw_lock))::System::Threading::ReaderWriterLock* rw_lock;

  /// @brief Field sections_modified, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_sections_modified, put = __cordl_internal_set_sections_modified))::System::Security::AccessControl::AccessControlSections sections_modified;

  /// @brief Method AccessRuleFactory, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Security::AccessControl::AccessRule* AccessRuleFactory(::System::Security::Principal::IdentityReference* identityReference, int32_t accessMask, bool isInherited,
                                                                          ::System::Security::AccessControl::InheritanceFlags inheritanceFlags,
                                                                          ::System::Security::AccessControl::PropagationFlags propagationFlags,
                                                                          ::System::Security::AccessControl::AccessControlType type);

  /// @brief Method InternalAccessRuleFactory, addr 0x25786c0, size 0x70, virtual true, abstract: false, final false
  inline ::System::Security::AccessControl::AccessRule* InternalAccessRuleFactory(::System::Security::AccessControl::QualifiedAce* ace, ::System::Type* targetType,
                                                                                  ::System::Security::AccessControl::AccessControlType type);

  /// @brief Method InternalGetAccessRules, addr 0x2576a54, size 0x324, virtual false, abstract: false, final false
  inline ::System::Security::AccessControl::AuthorizationRuleCollection* InternalGetAccessRules(bool includeExplicit, bool includeInherited, ::System::Type* targetType);

  static inline ::System::Security::AccessControl::ObjectSecurity* New_ctor(bool isContainer, bool isDS);

  static inline ::System::Security::AccessControl::ObjectSecurity* New_ctor(::System::Security::AccessControl::CommonSecurityDescriptor* securityDescriptor);

  /// @brief Method ReadLock, addr 0x2578668, size 0x20, virtual false, abstract: false, final false
  inline void ReadLock();

  /// @brief Method ReadUnlock, addr 0x2578688, size 0x1c, virtual false, abstract: false, final false
  inline void ReadUnlock();

  /// @brief Method WriteLock, addr 0x2577e4c, size 0x20, virtual false, abstract: false, final false
  inline void WriteLock();

  /// @brief Method WriteUnlock, addr 0x25786a4, size 0x1c, virtual false, abstract: false, final false
  inline void WriteUnlock();

  /// @brief Method Writing, addr 0x25785f8, size 0x70, virtual false, abstract: false, final false
  inline void Writing();

  constexpr ::System::Security::AccessControl::CommonSecurityDescriptor*& __cordl_internal_get_descriptor();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::AccessControl::CommonSecurityDescriptor*> const& __cordl_internal_get_descriptor() const;

  constexpr ::System::Threading::ReaderWriterLock*& __cordl_internal_get_rw_lock();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::ReaderWriterLock*> const& __cordl_internal_get_rw_lock() const;

  constexpr ::System::Security::AccessControl::AccessControlSections const& __cordl_internal_get_sections_modified() const;

  constexpr ::System::Security::AccessControl::AccessControlSections& __cordl_internal_get_sections_modified();

  constexpr void __cordl_internal_set_descriptor(::System::Security::AccessControl::CommonSecurityDescriptor* value);

  constexpr void __cordl_internal_set_rw_lock(::System::Threading::ReaderWriterLock* value);

  constexpr void __cordl_internal_set_sections_modified(::System::Security::AccessControl::AccessControlSections value);

  /// @brief Method .ctor, addr 0x257694c, size 0xfc, virtual false, abstract: false, final false
  inline void _ctor(bool isContainer, bool isDS);

  /// @brief Method .ctor, addr 0x2578534, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::AccessControl::CommonSecurityDescriptor* securityDescriptor);

  /// @brief Method set_AccessControlSectionsModified, addr 0x2577e6c, size 0x24, virtual false, abstract: false, final false
  inline void set_AccessControlSectionsModified(::System::Security::AccessControl::AccessControlSections value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectSecurity();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObjectSecurity", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectSecurity(ObjectSecurity&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectSecurity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectSecurity(ObjectSecurity const&) = delete;

  /// @brief Field descriptor, offset: 0x10, size: 0x8, def value: None
  ::System::Security::AccessControl::CommonSecurityDescriptor* ___descriptor;

  /// @brief Field sections_modified, offset: 0x18, size: 0x4, def value: None
  ::System::Security::AccessControl::AccessControlSections ___sections_modified;

  /// @brief Field rw_lock, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::ReaderWriterLock* ___rw_lock;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::ObjectSecurity, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Security::AccessControl::ObjectSecurity, ___descriptor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::AccessControl::ObjectSecurity, ___sections_modified) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Security::AccessControl::ObjectSecurity, ___rw_lock) == 0x20, "Offset mismatch!");

} // namespace System::Security::AccessControl
NEED_NO_BOX(::System::Security::AccessControl::ObjectSecurity);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::ObjectSecurity*, "System.Security.AccessControl", "ObjectSecurity");
