#pragma once
// IWYU pragma private; include "System/Security/AccessControl/KnownAce.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/AccessControl/zzzz__GenericAce_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KnownAce)
namespace System::Security::AccessControl {
struct AceFlags;
}
namespace System::Security::AccessControl {
struct AceType;
}
namespace System::Security::Principal {
class SecurityIdentifier;
}
// Forward declare root types
namespace System::Security::AccessControl {
class KnownAce;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::AccessControl::KnownAce);
// Type: System.Security.AccessControl::KnownAce
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::AccessControl {
// Is value type: false
// CS Name: ::System.Security.AccessControl::KnownAce*
class CORDL_TYPE KnownAce : public ::System::Security::AccessControl::GenericAce {
public:
  // Declarations
  __declspec(property(get = get_AccessMask, put = set_AccessMask)) int32_t AccessMask;

  __declspec(property(get = get_SecurityIdentifier, put = set_SecurityIdentifier))::System::Security::Principal::SecurityIdentifier* SecurityIdentifier;

  /// @brief Field access_mask, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_access_mask, put = __cordl_internal_set_access_mask)) int32_t access_mask;

  /// @brief Field identifier, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_identifier, put = __cordl_internal_set_identifier))::System::Security::Principal::SecurityIdentifier* identifier;

  static inline ::System::Security::AccessControl::KnownAce* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> binaryForm, int32_t offset);

  static inline ::System::Security::AccessControl::KnownAce* New_ctor(::System::Security::AccessControl::AceType type, ::System::Security::AccessControl::AceFlags flags);

  constexpr int32_t const& __cordl_internal_get_access_mask() const;

  constexpr int32_t& __cordl_internal_get_access_mask();

  constexpr ::System::Security::Principal::SecurityIdentifier*& __cordl_internal_get_identifier();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Principal::SecurityIdentifier*> const& __cordl_internal_get_identifier() const;

  constexpr void __cordl_internal_set_access_mask(int32_t value);

  constexpr void __cordl_internal_set_identifier(::System::Security::Principal::SecurityIdentifier* value);

  /// @brief Method .ctor, addr 0x2831c78, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> binaryForm, int32_t offset);

  /// @brief Method .ctor, addr 0x2831c74, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::AccessControl::AceType type, ::System::Security::AccessControl::AceFlags flags);

  /// @brief Method get_AccessMask, addr 0x2831c7c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_AccessMask();

  /// @brief Method get_SecurityIdentifier, addr 0x2831c8c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Security::Principal::SecurityIdentifier* get_SecurityIdentifier();

  /// @brief Method set_AccessMask, addr 0x2831c84, size 0x8, virtual false, abstract: false, final false
  inline void set_AccessMask(int32_t value);

  /// @brief Method set_SecurityIdentifier, addr 0x2831c94, size 0x8, virtual false, abstract: false, final false
  inline void set_SecurityIdentifier(::System::Security::Principal::SecurityIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KnownAce();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KnownAce", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KnownAce(KnownAce&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KnownAce", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KnownAce(KnownAce const&) = delete;

  /// @brief Field access_mask, offset: 0x14, size: 0x4, def value: None
  int32_t ___access_mask;

  /// @brief Field identifier, offset: 0x18, size: 0x8, def value: None
  ::System::Security::Principal::SecurityIdentifier* ___identifier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::KnownAce, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Security::AccessControl::KnownAce, ___access_mask) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Security::AccessControl::KnownAce, ___identifier) == 0x18, "Offset mismatch!");

} // namespace System::Security::AccessControl
NEED_NO_BOX(::System::Security::AccessControl::KnownAce);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::KnownAce*, "System.Security.AccessControl", "KnownAce");
