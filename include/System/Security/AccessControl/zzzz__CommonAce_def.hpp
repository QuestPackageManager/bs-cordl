#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/AccessControl/zzzz__QualifiedAce_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CommonAce)
namespace System::Security::AccessControl {
struct AceFlags;
}
namespace System::Security::AccessControl {
struct AceQualifier;
}
namespace System::Security::AccessControl {
struct AceType;
}
namespace System::Security::Principal {
class SecurityIdentifier;
}
// Forward declare root types
namespace System::Security::AccessControl {
class CommonAce;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::AccessControl::CommonAce);
// Type: System.Security.AccessControl::CommonAce
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::AccessControl {
// Is value type: false
// CS Name: ::System.Security.AccessControl::CommonAce*
class CORDL_TYPE CommonAce : public ::System::Security::AccessControl::QualifiedAce {
public:
  // Declarations
  __declspec(property(get = get_BinaryLength)) int32_t BinaryLength;

  /// @brief Method ConvertType, addr 0x25d6ff8, size 0x110, virtual false, abstract: false, final false
  static inline ::System::Security::AccessControl::AceType ConvertType(::System::Security::AccessControl::AceQualifier qualifier, bool isCallback);

  /// @brief Method GetBinaryForm, addr 0x25d74d0, size 0xe4, virtual true, abstract: false, final false
  inline void GetBinaryForm(::ArrayW<uint8_t, ::Array<uint8_t>*> binaryForm, int32_t offset);

  static inline ::System::Security::AccessControl::CommonAce* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> binaryForm, int32_t offset);

  static inline ::System::Security::AccessControl::CommonAce* New_ctor(::System::Security::AccessControl::AceFlags flags, ::System::Security::AccessControl::AceQualifier qualifier, int32_t accessMask,
                                                                       ::System::Security::Principal::SecurityIdentifier* sid, bool isCallback, ::ArrayW<uint8_t, ::Array<uint8_t>*> opaque);

  /// @brief Method .ctor, addr 0x25d7130, size 0x1f0, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> binaryForm, int32_t offset);

  /// @brief Method .ctor, addr 0x25d6f98, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::AccessControl::AceFlags flags, ::System::Security::AccessControl::AceQualifier qualifier, int32_t accessMask,
                    ::System::Security::Principal::SecurityIdentifier* sid, bool isCallback, ::ArrayW<uint8_t, ::Array<uint8_t>*> opaque);

  /// @brief Method get_BinaryLength, addr 0x25d7480, size 0x38, virtual true, abstract: false, final false
  inline int32_t get_BinaryLength();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommonAce();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommonAce", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommonAce(CommonAce&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommonAce", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommonAce(CommonAce const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::CommonAce, 0x28>, "Size mismatch!");

} // namespace System::Security::AccessControl
NEED_NO_BOX(::System::Security::AccessControl::CommonAce);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::CommonAce*, "System.Security.AccessControl", "CommonAce");
