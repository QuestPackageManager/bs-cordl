#pragma once
// IWYU pragma private; include "System/Reflection/Emit/SignatureHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SignatureHelper)
// Forward declare root types
namespace System::Reflection::Emit {
class SignatureHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::Emit::SignatureHelper);
// Dependencies System.Object
namespace System::Reflection::Emit {
// Is value type: false
// CS Name: System.Reflection.Emit.SignatureHelper
class CORDL_TYPE SignatureHelper : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignatureHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignatureHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignatureHelper(SignatureHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignatureHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignatureHelper(SignatureHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3574 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::Emit::SignatureHelper, 0x10>, "Size mismatch!");

} // namespace System::Reflection::Emit
NEED_NO_BOX(::System::Reflection::Emit::SignatureHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::Emit::SignatureHelper*, "System.Reflection.Emit", "SignatureHelper");
