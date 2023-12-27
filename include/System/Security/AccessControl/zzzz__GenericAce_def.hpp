#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/AccessControl/zzzz__AceFlags_def.hpp"
#include "System/Security/AccessControl/zzzz__AceType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GenericAce)
namespace System::Security::AccessControl {
struct PropagationFlags;
}
namespace System {
class Object;
}
namespace System::Security::AccessControl {
struct AuditFlags;
}
namespace System::Security::AccessControl {
struct AceFlags;
}
namespace System::Security::AccessControl {
struct AceType;
}
namespace System::Security::AccessControl {
struct InheritanceFlags;
}
// Forward declare root types
namespace System::Security::AccessControl {
class GenericAce;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::AccessControl::GenericAce);
// Type: System.Security.AccessControl::GenericAce
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 18, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3019)), TypeDefinitionIndex(TypeDefinitionIndex(3017)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3035))
// CS Name: ::System.Security.AccessControl::GenericAce*
class CORDL_TYPE GenericAce : public ::System::Object {
public:
  // Declarations
  /// @brief Field ace_flags, offset 0x10, size 0x1
  __declspec(property(get = __get_ace_flags, put = __set_ace_flags))::System::Security::AccessControl::AceFlags ace_flags;

  /// @brief Field ace_type, offset 0x11, size 0x1
  __declspec(property(get = __get_ace_type, put = __set_ace_type))::System::Security::AccessControl::AceType ace_type;

  __declspec(property(get = get_AceFlags))::System::Security::AccessControl::AceFlags AceFlags;

  __declspec(property(get = get_AceType))::System::Security::AccessControl::AceType AceType;

  __declspec(property(get = get_AuditFlags))::System::Security::AccessControl::AuditFlags AuditFlags;

  __declspec(property(get = get_BinaryLength)) int32_t BinaryLength;

  __declspec(property(get = get_InheritanceFlags))::System::Security::AccessControl::InheritanceFlags InheritanceFlags;

  __declspec(property(get = get_IsInherited)) bool IsInherited;

  __declspec(property(get = get_PropagationFlags))::System::Security::AccessControl::PropagationFlags PropagationFlags;

  constexpr ::System::Security::AccessControl::AceFlags& __get_ace_flags();

  constexpr ::System::Security::AccessControl::AceFlags const& __get_ace_flags() const;

  constexpr void __set_ace_flags(::System::Security::AccessControl::AceFlags value);

  constexpr ::System::Security::AccessControl::AceType& __get_ace_type();

  constexpr ::System::Security::AccessControl::AceType const& __get_ace_type() const;

  constexpr void __set_ace_type(::System::Security::AccessControl::AceType value);

  static inline ::System::Security::AccessControl::GenericAce* New_ctor(::System::Security::AccessControl::AceType type, ::System::Security::AccessControl::AceFlags flags);

  /// @brief Method .ctor addr 0x248366c size 0x90 virtual false final false
  inline void _ctor(::System::Security::AccessControl::AceType type, ::System::Security::AccessControl::AceFlags flags);

  static inline ::System::Security::AccessControl::GenericAce* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> binaryForm, int32_t offset);

  /// @brief Method .ctor addr 0x24836fc size 0x144 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> binaryForm, int32_t offset);

  /// @brief Method get_AceFlags addr 0x2483840 size 0x8 virtual false final false
  inline ::System::Security::AccessControl::AceFlags get_AceFlags();

  /// @brief Method get_AceType addr 0x2483848 size 0x8 virtual false final false
  inline ::System::Security::AccessControl::AceType get_AceType();

  /// @brief Method get_AuditFlags addr 0x2483578 size 0x1c virtual false final false
  inline ::System::Security::AccessControl::AuditFlags get_AuditFlags();

  /// @brief Method get_BinaryLength addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_BinaryLength();

  /// @brief Method get_InheritanceFlags addr 0x2483850 size 0x10 virtual false final false
  inline ::System::Security::AccessControl::InheritanceFlags get_InheritanceFlags();

  /// @brief Method get_IsInherited addr 0x2481ba8 size 0xc virtual false final false
  inline bool get_IsInherited();

  /// @brief Method get_PropagationFlags addr 0x2483860 size 0xc virtual false final false
  inline ::System::Security::AccessControl::PropagationFlags get_PropagationFlags();

  /// @brief Method CreateFromBinaryForm addr 0x2482a0c size 0x1c8 virtual false final false
  static inline ::System::Security::AccessControl::GenericAce* CreateFromBinaryForm(::ArrayW<uint8_t, ::Array<uint8_t>*> binaryForm, int32_t offset);

  /// @brief Method Equals addr 0x2483b10 size 0x80 virtual true final true
  inline bool Equals(::System::Object* o);

  /// @brief Method GetBinaryForm addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void GetBinaryForm(::ArrayW<uint8_t, ::Array<uint8_t>*> binaryForm, int32_t offset);

  /// @brief Method GetHashCode addr 0x2483b90 size 0xcc virtual true final true
  inline int32_t GetHashCode();

  /// @brief Method op_Equality addr 0x2481db4 size 0x148 virtual false final false
  static inline bool op_Equality(::System::Security::AccessControl::GenericAce* left, ::System::Security::AccessControl::GenericAce* right);

  /// @brief Method op_Inequality addr 0x24819f4 size 0x148 virtual false final false
  static inline bool op_Inequality(::System::Security::AccessControl::GenericAce* left, ::System::Security::AccessControl::GenericAce* right);

  /// @brief Method IsObjectType addr 0x248386c size 0x40 virtual false final false
  static inline bool IsObjectType(::System::Security::AccessControl::AceType type);

  /// @brief Method ReadUShort addr 0x2480dbc size 0x40 virtual false final false
  static inline uint16_t ReadUShort(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset);

  /// @brief Method ReadInt addr 0x2480dfc size 0x74 virtual false final false
  static inline int32_t ReadInt(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset);

  /// @brief Method WriteInt addr 0x2481094 size 0x80 virtual false final false
  static inline void WriteInt(int32_t val, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset);

  /// @brief Method WriteUShort addr 0x248104c size 0x48 virtual false final false
  static inline void WriteUShort(uint16_t val, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset);

  // Ctor Parameters [CppParam { name: "", ty: "GenericAce", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GenericAce(GenericAce&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GenericAce", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GenericAce(GenericAce const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GenericAce();

public:
  /// @brief Field ace_flags, offset: 0x10, size: 0x1, def value: None
  ::System::Security::AccessControl::AceFlags ___ace_flags;

  /// @brief Field ace_type, offset: 0x11, size: 0x1, def value: None
  ::System::Security::AccessControl::AceType ___ace_type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::GenericAce, 0x18>, "Size mismatch!");

} // namespace System::Security::AccessControl
NEED_NO_BOX(::System::Security::AccessControl::GenericAce);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::GenericAce*, "System.Security.AccessControl", "GenericAce");
