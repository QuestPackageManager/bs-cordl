#pragma once
// IWYU pragma private; include "System/Security/AccessControl/ObjectAce.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/AccessControl/zzzz__ObjectAceFlags_def.hpp"
#include "System/Security/AccessControl/zzzz__QualifiedAce_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectAce)
namespace System::Security::AccessControl {
struct AceFlags;
}
namespace System::Security::AccessControl {
struct AceQualifier;
}
namespace System::Security::AccessControl {
struct AceType;
}
namespace System::Security::AccessControl {
struct ObjectAceFlags;
}
namespace System::Security::Principal {
class SecurityIdentifier;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace System::Security::AccessControl {
class ObjectAce;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::AccessControl::ObjectAce);
// Dependencies System.Guid, System.Security.AccessControl.ObjectAceFlags, System.Security.AccessControl.QualifiedAce
namespace System::Security::AccessControl {
// Is value type: false
// CS Name: System.Security.AccessControl.ObjectAce
class CORDL_TYPE ObjectAce : public ::System::Security::AccessControl::QualifiedAce {
public:
  // Declarations
  __declspec(property(get = get_BinaryLength)) int32_t BinaryLength;

  __declspec(property(get = get_InheritedObjectAceType, put = set_InheritedObjectAceType)) ::System::Guid InheritedObjectAceType;

  __declspec(property(get = get_InheritedObjectAceTypePresent)) bool InheritedObjectAceTypePresent;

  __declspec(property(get = get_ObjectAceFlags, put = set_ObjectAceFlags)) ::System::Security::AccessControl::ObjectAceFlags ObjectAceFlags;

  __declspec(property(get = get_ObjectAceType, put = set_ObjectAceType)) ::System::Guid ObjectAceType;

  __declspec(property(get = get_ObjectAceTypePresent)) bool ObjectAceTypePresent;

  /// @brief Field inherited_object_type, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get_inherited_object_type, put = __cordl_internal_set_inherited_object_type)) ::System::Guid inherited_object_type;

  /// @brief Field object_ace_flags, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_object_ace_flags, put = __cordl_internal_set_object_ace_flags)) ::System::Security::AccessControl::ObjectAceFlags object_ace_flags;

  /// @brief Field object_ace_type, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_object_ace_type, put = __cordl_internal_set_object_ace_type)) ::System::Guid object_ace_type;

  /// @brief Method ConvertType, addr 0x3cc6370, size 0x10c, virtual false, abstract: false, final false
  static inline ::System::Security::AccessControl::AceType ConvertType(::System::Security::AccessControl::AceQualifier qualifier, bool isCallback);

  /// @brief Method GetBinaryForm, addr 0x3cc65b8, size 0x16c, virtual true, abstract: false, final false
  inline void GetBinaryForm(::ArrayW<uint8_t, ::Array<uint8_t>*> binaryForm, int32_t offset);

  static inline ::System::Security::AccessControl::ObjectAce* New_ctor(::System::Security::AccessControl::AceFlags aceFlags, ::System::Security::AccessControl::AceQualifier qualifier,
                                                                       int32_t accessMask, ::System::Security::Principal::SecurityIdentifier* sid,
                                                                       ::System::Security::AccessControl::ObjectAceFlags flags, ::System::Guid type, ::System::Guid inheritedType, bool isCallback,
                                                                       ::ArrayW<uint8_t, ::Array<uint8_t>*> opaque);

  static inline ::System::Security::AccessControl::ObjectAce* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> binaryForm, int32_t offset);

  /// @brief Method ReadGuid, addr 0x3cc6494, size 0x98, virtual false, abstract: false, final false
  inline ::System::Guid ReadGuid(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset);

  /// @brief Method WriteGuid, addr 0x3cc6724, size 0x4c, virtual false, abstract: false, final false
  inline void WriteGuid(::System::Guid val, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset);

  constexpr ::System::Guid const& __cordl_internal_get_inherited_object_type() const;

  constexpr ::System::Guid& __cordl_internal_get_inherited_object_type();

  constexpr ::System::Security::AccessControl::ObjectAceFlags const& __cordl_internal_get_object_ace_flags() const;

  constexpr ::System::Security::AccessControl::ObjectAceFlags& __cordl_internal_get_object_ace_flags();

  constexpr ::System::Guid const& __cordl_internal_get_object_ace_type() const;

  constexpr ::System::Guid& __cordl_internal_get_object_ace_type();

  constexpr void __cordl_internal_set_inherited_object_type(::System::Guid value);

  constexpr void __cordl_internal_set_object_ace_flags(::System::Security::AccessControl::ObjectAceFlags value);

  constexpr void __cordl_internal_set_object_ace_type(::System::Guid value);

  /// @brief Method .ctor, addr 0x3cc455c, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::AccessControl::AceFlags aceFlags, ::System::Security::AccessControl::AceQualifier qualifier, int32_t accessMask,
                    ::System::Security::Principal::SecurityIdentifier* sid, ::System::Security::AccessControl::ObjectAceFlags flags, ::System::Guid type, ::System::Guid inheritedType, bool isCallback,
                    ::ArrayW<uint8_t, ::Array<uint8_t>*> opaque);

  /// @brief Method .ctor, addr 0x3cc58d4, size 0x258, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> binaryForm, int32_t offset);

  /// @brief Method get_BinaryLength, addr 0x3cc652c, size 0x54, virtual true, abstract: false, final false
  inline int32_t get_BinaryLength();

  /// @brief Method get_InheritedObjectAceType, addr 0x3cc6580, size 0xc, virtual false, abstract: false, final false
  inline ::System::Guid get_InheritedObjectAceType();

  /// @brief Method get_InheritedObjectAceTypePresent, addr 0x3cc6488, size 0xc, virtual false, abstract: false, final false
  inline bool get_InheritedObjectAceTypePresent();

  /// @brief Method get_ObjectAceFlags, addr 0x3cc6594, size 0x8, virtual false, abstract: false, final false
  inline ::System::Security::AccessControl::ObjectAceFlags get_ObjectAceFlags();

  /// @brief Method get_ObjectAceType, addr 0x3cc65a4, size 0xc, virtual false, abstract: false, final false
  inline ::System::Guid get_ObjectAceType();

  /// @brief Method get_ObjectAceTypePresent, addr 0x3cc647c, size 0xc, virtual false, abstract: false, final false
  inline bool get_ObjectAceTypePresent();

  /// @brief Method set_InheritedObjectAceType, addr 0x3cc658c, size 0x8, virtual false, abstract: false, final false
  inline void set_InheritedObjectAceType(::System::Guid value);

  /// @brief Method set_ObjectAceFlags, addr 0x3cc659c, size 0x8, virtual false, abstract: false, final false
  inline void set_ObjectAceFlags(::System::Security::AccessControl::ObjectAceFlags value);

  /// @brief Method set_ObjectAceType, addr 0x3cc65b0, size 0x8, virtual false, abstract: false, final false
  inline void set_ObjectAceType(::System::Guid value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectAce();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObjectAce", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectAce(ObjectAce&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectAce", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectAce(ObjectAce const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3041 };

  /// @brief Field object_ace_type, offset: 0x28, size: 0x10, def value: None
  ::System::Guid ___object_ace_type;

  /// @brief Field inherited_object_type, offset: 0x38, size: 0x10, def value: None
  ::System::Guid ___inherited_object_type;

  /// @brief Field object_ace_flags, offset: 0x48, size: 0x4, def value: None
  ::System::Security::AccessControl::ObjectAceFlags ___object_ace_flags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::AccessControl::ObjectAce, ___object_ace_type) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Security::AccessControl::ObjectAce, ___inherited_object_type) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Security::AccessControl::ObjectAce, ___object_ace_flags) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::ObjectAce, 0x50>, "Size mismatch!");

} // namespace System::Security::AccessControl
NEED_NO_BOX(::System::Security::AccessControl::ObjectAce);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::ObjectAce*, "System.Security.AccessControl", "ObjectAce");
