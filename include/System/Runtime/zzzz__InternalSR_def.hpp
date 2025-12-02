#pragma once
// IWYU pragma private; include "System/Runtime/InternalSR.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InternalSR)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime {
class InternalSR;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InternalSR);
// Dependencies System.Object
namespace System::Runtime {
// Is value type: false
// CS Name: System.Runtime.InternalSR
class CORDL_TYPE InternalSR : public ::System::Object {
public:
  // Declarations
  /// @brief Method EtwRegistrationFailed, addr 0x5f6df44, size 0x80, virtual false, abstract: false, final false
  static inline ::StringW EtwRegistrationFailed(::System::Object* arg);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InternalSR();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InternalSR", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InternalSR(InternalSR&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InternalSR", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InternalSR(InternalSR const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21093 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InternalSR, 0x10>, "Size mismatch!");

} // namespace System::Runtime
NEED_NO_BOX(::System::Runtime::InternalSR);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InternalSR*, "System.Runtime", "InternalSR");
