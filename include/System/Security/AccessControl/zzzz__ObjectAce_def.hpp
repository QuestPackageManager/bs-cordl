#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/AccessControl/zzzz__ObjectAceFlags_def.hpp"
#include "System/Security/AccessControl/zzzz__QualifiedAce_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectAce)
namespace System::Security::AccessControl {
struct AceFlags;
}
namespace System::Security::AccessControl {
struct AceQualifier;
}
namespace System::Security::Principal {
class SecurityIdentifier;
}
namespace System {
struct Guid;
}
namespace System::Security::AccessControl {
struct AceType;
}
namespace System::Security::AccessControl {
struct ObjectAceFlags;
}
// Forward declare root types
namespace System::Security::AccessControl {
class ObjectAce;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::AccessControl::ObjectAce);
// Type: System.Security.AccessControl::ObjectAce
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3042)), TypeDefinitionIndex(TypeDefinitionIndex(3045)), TypeDefinitionIndex(TypeDefinitionIndex(2406))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3041))
// CS Name: ::System.Security.AccessControl::ObjectAce*
class CORDL_TYPE ObjectAce : public ::System::Security::AccessControl::QualifiedAce {
public:
  // Declarations
  /// @brief Field object_ace_type, offset 0x28, size 0x10
  __declspec(property(get = __get_object_ace_type, put = __set_object_ace_type))::System::Guid object_ace_type;

  /// @brief Field inherited_object_type, offset 0x38, size 0x10
  __declspec(property(get = __get_inherited_object_type, put = __set_inherited_object_type))::System::Guid inherited_object_type;

  /// @brief Field object_ace_flags, offset 0x48, size 0x4
  __declspec(property(get = __get_object_ace_flags, put = __set_object_ace_flags))::System::Security::AccessControl::ObjectAceFlags object_ace_flags;

  __declspec(property(get = get_BinaryLength)) int32_t BinaryLength;

  __declspec(property(get = get_InheritedObjectAceType, put = set_InheritedObjectAceType))::System::Guid InheritedObjectAceType;

  __declspec(property(get = get_InheritedObjectAceTypePresent)) bool InheritedObjectAceTypePresent;

  __declspec(property(get = get_ObjectAceFlags, put = set_ObjectAceFlags))::System::Security::AccessControl::ObjectAceFlags ObjectAceFlags;

  __declspec(property(get = get_ObjectAceType, put = set_ObjectAceType))::System::Guid ObjectAceType;

  __declspec(property(get = get_ObjectAceTypePresent)) bool ObjectAceTypePresent;

  constexpr ::System::Guid& __get_object_ace_type();

  constexpr ::System::Guid const& __get_object_ace_type() const;

  constexpr void __set_object_ace_type(::System::Guid value);

  constexpr ::System::Guid& __get_inherited_object_type();

  constexpr ::System::Guid const& __get_inherited_object_type() const;

  constexpr void __set_inherited_object_type(::System::Guid value);

  constexpr ::System::Security::AccessControl::ObjectAceFlags& __get_object_ace_flags();

  constexpr ::System::Security::AccessControl::ObjectAceFlags const& __get_object_ace_flags() const;

  constexpr void __set_object_ace_flags(::System::Security::AccessControl::ObjectAceFlags value);

  static inline ::System::Security::AccessControl::ObjectAce* New_ctor(::System::Security::AccessControl::AceFlags aceFlags, ::System::Security::AccessControl::AceQualifier qualifier,
                                                                       int32_t accessMask, ::System::Security::Principal::SecurityIdentifier* sid,
                                                                       ::System::Security::AccessControl::ObjectAceFlags flags, ::System::Guid type, ::System::Guid inheritedType, bool isCallback,
                                                                       ::ArrayW<uint8_t, ::Array<uint8_t>*> opaque);

  /// @brief Method .ctor addr 0x232a9b8 size 0x98 virtual false final false
  inline void _ctor(::System::Security::AccessControl::AceFlags aceFlags, ::System::Security::AccessControl::AceQualifier qualifier, int32_t accessMask,
                    ::System::Security::Principal::SecurityIdentifier* sid, ::System::Security::AccessControl::ObjectAceFlags flags, ::System::Guid type, ::System::Guid inheritedType, bool isCallback,
                    ::ArrayW<uint8_t, ::Array<uint8_t>*> opaque);

  static inline ::System::Security::AccessControl::ObjectAce* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> binaryForm, int32_t offset);

  /// @brief Method .ctor addr 0x232bdb8 size 0x264 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> binaryForm, int32_t offset);

  /// @brief Method get_BinaryLength addr 0x232ca90 size 0x54 virtual true final false
  inline int32_t get_BinaryLength();

  /// @brief Method get_InheritedObjectAceType addr 0x232cae4 size 0xc virtual false final false
  inline ::System::Guid get_InheritedObjectAceType();

  /// @brief Method set_InheritedObjectAceType addr 0x232caf0 size 0x8 virtual false final false
  inline void set_InheritedObjectAceType(::System::Guid value);

  /// @brief Method get_InheritedObjectAceTypePresent addr 0x232c9ec size 0xc virtual false final false
  inline bool get_InheritedObjectAceTypePresent();

  /// @brief Method get_ObjectAceFlags addr 0x232caf8 size 0x8 virtual false final false
  inline ::System::Security::AccessControl::ObjectAceFlags get_ObjectAceFlags();

  /// @brief Method set_ObjectAceFlags addr 0x232cb00 size 0x8 virtual false final false
  inline void set_ObjectAceFlags(::System::Security::AccessControl::ObjectAceFlags value);

  /// @brief Method get_ObjectAceType addr 0x232cb08 size 0xc virtual false final false
  inline ::System::Guid get_ObjectAceType();

  /// @brief Method set_ObjectAceType addr 0x232cb14 size 0x8 virtual false final false
  inline void set_ObjectAceType(::System::Guid value);

  /// @brief Method get_ObjectAceTypePresent addr 0x232c9e0 size 0xc virtual false final false
  inline bool get_ObjectAceTypePresent();

  /// @brief Method GetBinaryForm addr 0x232cb1c size 0x16c virtual true final false
  inline void GetBinaryForm(::ArrayW<uint8_t, ::Array<uint8_t>*> binaryForm, int32_t offset);

  /// @brief Method ConvertType addr 0x232c8d0 size 0x110 virtual false final false
  static inline ::System::Security::AccessControl::AceType ConvertType(::System::Security::AccessControl::AceQualifier qualifier, bool isCallback);

  /// @brief Method WriteGuid addr 0x232cc88 size 0x4c virtual false final false
  inline void WriteGuid(::System::Guid val, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset);

  /// @brief Method ReadGuid addr 0x232c9f8 size 0x98 virtual false final false
  inline ::System::Guid ReadGuid(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset);

  // Ctor Parameters [CppParam { name: "", ty: "ObjectAce", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectAce(ObjectAce&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectAce", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectAce(ObjectAce const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectAce();

public:
  /// @brief Field object_ace_type, offset: 0x28, size: 0x10, def value: None
  ::System::Guid ___object_ace_type;

  /// @brief Field inherited_object_type, offset: 0x38, size: 0x10, def value: None
  ::System::Guid ___inherited_object_type;

  /// @brief Field object_ace_flags, offset: 0x48, size: 0x4, def value: None
  ::System::Security::AccessControl::ObjectAceFlags ___object_ace_flags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::ObjectAce, 0x50>, "Size mismatch!");

static_assert(offsetof(::System::Security::AccessControl::ObjectAce, ___object_ace_type) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Security::AccessControl::ObjectAce, ___inherited_object_type) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Security::AccessControl::ObjectAce, ___object_ace_flags) == 0x48, "Offset mismatch!");

} // namespace System::Security::AccessControl
NEED_NO_BOX(::System::Security::AccessControl::ObjectAce);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::ObjectAce*, "System.Security.AccessControl", "ObjectAce");
