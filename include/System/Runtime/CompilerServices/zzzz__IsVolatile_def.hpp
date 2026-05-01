#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/IsVolatile.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(IsVolatile)
// Forward declare root types
namespace System::Runtime::CompilerServices {
class IsVolatile;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::IsVolatile);
// Dependencies System.Object
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: System.Runtime.CompilerServices.IsVolatile
class CORDL_TYPE IsVolatile : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IsVolatile();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IsVolatile", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IsVolatile(IsVolatile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IsVolatile", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IsVolatile(IsVolatile const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3394 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::IsVolatile, 0x10>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::IsVolatile);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::IsVolatile*, "System.Runtime.CompilerServices", "IsVolatile");
