#pragma once
// IWYU pragma private; include "System/Security/AccessControl/DiscretionaryAcl.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/AccessControl/zzzz__CommonAcl_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DiscretionaryAcl)
namespace System::Security::AccessControl {
struct AccessControlType;
}
namespace System::Security::AccessControl {
struct AceQualifier;
}
namespace System::Security::AccessControl {
class GenericAce;
}
namespace System::Security::AccessControl {
struct InheritanceFlags;
}
namespace System::Security::AccessControl {
struct PropagationFlags;
}
namespace System::Security::Principal {
class SecurityIdentifier;
}
// Forward declare root types
namespace System::Security::AccessControl {
class DiscretionaryAcl;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::AccessControl::DiscretionaryAcl);
// Dependencies System.Security.AccessControl.CommonAcl
namespace System::Security::AccessControl {
// Is value type: false
// CS Name: System.Security.AccessControl.DiscretionaryAcl
class CORDL_TYPE DiscretionaryAcl : public ::System::Security::AccessControl::CommonAcl {
public:
  // Declarations
  /// @brief Method AddAccess, addr 0x3cc0720, size 0x60, virtual false, abstract: false, final false
  inline void AddAccess(::System::Security::AccessControl::AccessControlType accessType, ::System::Security::Principal::SecurityIdentifier* sid, int32_t accessMask,
                        ::System::Security::AccessControl::InheritanceFlags inheritanceFlags, ::System::Security::AccessControl::PropagationFlags propagationFlags);

  /// @brief Method ApplyCanonicalSortToExplicitAces, addr 0x3cc08e8, size 0x48, virtual true, abstract: false, final false
  inline void ApplyCanonicalSortToExplicitAces();

  /// @brief Method GetAceInsertPosition, addr 0x3cc0930, size 0x10, virtual true, abstract: false, final false
  inline int32_t GetAceInsertPosition(::System::Security::AccessControl::AceQualifier aceQualifier);

  /// @brief Method GetAceQualifier, addr 0x3cc088c, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Security::AccessControl::AceQualifier GetAceQualifier(::System::Security::AccessControl::AccessControlType accessType);

  /// @brief Method IsAceMeaningless, addr 0x3cc0940, size 0xf8, virtual true, abstract: false, final false
  inline bool IsAceMeaningless(::System::Security::AccessControl::GenericAce* ace);

  static inline ::System::Security::AccessControl::DiscretionaryAcl* New_ctor(bool isContainer, bool isDS, int32_t capacity);

  /// @brief Method .ctor, addr 0x3cc0714, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(bool isContainer, bool isDS, int32_t capacity);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DiscretionaryAcl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DiscretionaryAcl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DiscretionaryAcl(DiscretionaryAcl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DiscretionaryAcl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DiscretionaryAcl(DiscretionaryAcl const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3029 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::DiscretionaryAcl, 0x20>, "Size mismatch!");

} // namespace System::Security::AccessControl
NEED_NO_BOX(::System::Security::AccessControl::DiscretionaryAcl);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::DiscretionaryAcl*, "System.Security.AccessControl", "DiscretionaryAcl");
