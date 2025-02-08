#pragma once
// IWYU pragma private; include "System/Security/AccessControl/GenericAce.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/AccessControl/zzzz__AceFlags_def.hpp"
#include "System/Security/AccessControl/zzzz__AceType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GenericAce)
namespace System::Security::AccessControl {
struct AceFlags;
}
namespace System::Security::AccessControl {
struct AceType;
}
namespace System::Security::AccessControl {
struct AuditFlags;
}
namespace System::Security::AccessControl {
struct InheritanceFlags;
}
namespace System::Security::AccessControl {
struct PropagationFlags;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Security::AccessControl {
class GenericAce;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::AccessControl::GenericAce);
// Dependencies System.Object, System.Security.AccessControl.AceFlags, System.Security.AccessControl.AceType
namespace System::Security::AccessControl {
// Is value type: false
// CS Name: System.Security.AccessControl.GenericAce
class CORDL_TYPE GenericAce : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AceFlags)) ::System::Security::AccessControl::AceFlags AceFlags;

  __declspec(property(get = get_AceType)) ::System::Security::AccessControl::AceType AceType;

  __declspec(property(get = get_AuditFlags)) ::System::Security::AccessControl::AuditFlags AuditFlags;

  __declspec(property(get = get_BinaryLength)) int32_t BinaryLength;

  __declspec(property(get = get_InheritanceFlags)) ::System::Security::AccessControl::InheritanceFlags InheritanceFlags;

  __declspec(property(get = get_IsInherited)) bool IsInherited;

  __declspec(property(get = get_PropagationFlags)) ::System::Security::AccessControl::PropagationFlags PropagationFlags;

  /// @brief Field ace_flags, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_ace_flags, put = __cordl_internal_set_ace_flags)) ::System::Security::AccessControl::AceFlags ace_flags;

  /// @brief Field ace_type, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_ace_type, put = __cordl_internal_set_ace_type)) ::System::Security::AccessControl::AceType ace_type;

  /// @brief Method CreateFromBinaryForm, addr 0x3cc9514, size 0x1a8, virtual false, abstract: false, final false
  static inline ::System::Security::AccessControl::GenericAce* CreateFromBinaryForm(::ArrayW<uint8_t, ::Array<uint8_t>*> binaryForm, int32_t offset);

  /// @brief Method Equals, addr 0x3cca598, size 0x80, virtual true, abstract: false, final true
  inline bool Equals(::System::Object* o);

  /// @brief Method GetBinaryForm, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void GetBinaryForm(::ArrayW<uint8_t, ::Array<uint8_t>*> binaryForm, int32_t offset);

  /// @brief Method GetHashCode, addr 0x3cca618, size 0xcc, virtual true, abstract: false, final true
  inline int32_t GetHashCode();

  /// @brief Method IsObjectType, addr 0x3cca318, size 0x28, virtual false, abstract: false, final false
  static inline bool IsObjectType(::System::Security::AccessControl::AceType type);

  static inline ::System::Security::AccessControl::GenericAce* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> binaryForm, int32_t offset);

  static inline ::System::Security::AccessControl::GenericAce* New_ctor(::System::Security::AccessControl::AceType type, ::System::Security::AccessControl::AceFlags flags);

  /// @brief Method ReadInt, addr 0x3cc79ac, size 0x74, virtual false, abstract: false, final false
  static inline int32_t ReadInt(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset);

  /// @brief Method ReadUShort, addr 0x3cc796c, size 0x40, virtual false, abstract: false, final false
  static inline uint16_t ReadUShort(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset);

  /// @brief Method WriteInt, addr 0x3cc7c44, size 0x80, virtual false, abstract: false, final false
  static inline void WriteInt(int32_t val, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset);

  /// @brief Method WriteUShort, addr 0x3cc7bfc, size 0x48, virtual false, abstract: false, final false
  static inline void WriteUShort(uint16_t val, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset);

  constexpr ::System::Security::AccessControl::AceFlags const& __cordl_internal_get_ace_flags() const;

  constexpr ::System::Security::AccessControl::AceFlags& __cordl_internal_get_ace_flags();

  constexpr ::System::Security::AccessControl::AceType const& __cordl_internal_get_ace_type() const;

  constexpr ::System::Security::AccessControl::AceType& __cordl_internal_get_ace_type();

  constexpr void __cordl_internal_set_ace_flags(::System::Security::AccessControl::AceFlags value);

  constexpr void __cordl_internal_set_ace_type(::System::Security::AccessControl::AceType value);

  /// @brief Method .ctor, addr 0x3cca1b0, size 0x13c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> binaryForm, int32_t offset);

  /// @brief Method .ctor, addr 0x3cca124, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::AccessControl::AceType type, ::System::Security::AccessControl::AceFlags flags);

  /// @brief Method get_AceFlags, addr 0x3cca2ec, size 0x8, virtual false, abstract: false, final false
  inline ::System::Security::AccessControl::AceFlags get_AceFlags();

  /// @brief Method get_AceType, addr 0x3cca2f4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Security::AccessControl::AceType get_AceType();

  /// @brief Method get_AuditFlags, addr 0x3cca038, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Security::AccessControl::AuditFlags get_AuditFlags();

  /// @brief Method get_BinaryLength, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_BinaryLength();

  /// @brief Method get_InheritanceFlags, addr 0x3cca2fc, size 0x10, virtual false, abstract: false, final false
  inline ::System::Security::AccessControl::InheritanceFlags get_InheritanceFlags();

  /// @brief Method get_IsInherited, addr 0x3cc8734, size 0xc, virtual false, abstract: false, final false
  inline bool get_IsInherited();

  /// @brief Method get_PropagationFlags, addr 0x3cca30c, size 0xc, virtual false, abstract: false, final false
  inline ::System::Security::AccessControl::PropagationFlags get_PropagationFlags();

  /// @brief Method op_Equality, addr 0x3cc8938, size 0x154, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Security::AccessControl::GenericAce* left, ::System::Security::AccessControl::GenericAce* right);

  /// @brief Method op_Inequality, addr 0x3cc8580, size 0x150, virtual false, abstract: false, final false
  static inline bool op_Inequality(::System::Security::AccessControl::GenericAce* left, ::System::Security::AccessControl::GenericAce* right);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GenericAce();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GenericAce", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GenericAce(GenericAce&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GenericAce", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GenericAce(GenericAce const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3034 };

  /// @brief Field ace_flags, offset: 0x10, size: 0x1, def value: None
  ::System::Security::AccessControl::AceFlags ___ace_flags;

  /// @brief Field ace_type, offset: 0x11, size: 0x1, def value: None
  ::System::Security::AccessControl::AceType ___ace_type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::AccessControl::GenericAce, ___ace_flags) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::AccessControl::GenericAce, ___ace_type) == 0x11, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::GenericAce, 0x18>, "Size mismatch!");

} // namespace System::Security::AccessControl
NEED_NO_BOX(::System::Security::AccessControl::GenericAce);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::GenericAce*, "System.Security.AccessControl", "GenericAce");
