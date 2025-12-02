#pragma once
// IWYU pragma private; include "System/Runtime/PartialTrustHelpers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PartialTrustHelpers)
// Forward declare root types
namespace System::Runtime {
class PartialTrustHelpers;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::PartialTrustHelpers);
// Dependencies System.Object
namespace System::Runtime {
// Is value type: false
// CS Name: System.Runtime.PartialTrustHelpers
class CORDL_TYPE PartialTrustHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method HasEtwPermissions, addr 0x5f6b2e4, size 0x8, virtual false, abstract: false, final false
  static inline bool HasEtwPermissions();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PartialTrustHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PartialTrustHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PartialTrustHelpers(PartialTrustHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PartialTrustHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PartialTrustHelpers(PartialTrustHelpers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21086 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::PartialTrustHelpers, 0x10>, "Size mismatch!");

} // namespace System::Runtime
NEED_NO_BOX(::System::Runtime::PartialTrustHelpers);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::PartialTrustHelpers*, "System.Runtime", "PartialTrustHelpers");
