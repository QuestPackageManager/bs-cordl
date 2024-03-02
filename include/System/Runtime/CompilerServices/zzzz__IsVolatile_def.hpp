#pragma once
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
// Type: System.Runtime.CompilerServices::IsVolatile
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: ::System.Runtime.CompilerServices::IsVolatile*
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::IsVolatile, 0x10>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::IsVolatile);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::IsVolatile*, "System.Runtime.CompilerServices", "IsVolatile");
