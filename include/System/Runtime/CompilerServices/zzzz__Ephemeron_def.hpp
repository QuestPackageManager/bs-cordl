#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/Ephemeron.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(Ephemeron)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
struct Ephemeron;
}
// Write type traits
MARK_VAL_T(::System::Runtime::CompilerServices::Ephemeron);
// Type: System.Runtime.CompilerServices::Ephemeron
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: true
// CS Name: ::System.Runtime.CompilerServices::Ephemeron
struct CORDL_TYPE Ephemeron {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Ephemeron();

  // Ctor Parameters [CppParam { name: "key", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::System::Object*", modifiers: "", def_value: None }]
  constexpr Ephemeron(::System::Object* key, ::System::Object* value) noexcept;

  /// @brief Field key, offset: 0x0, size: 0x8, def value: None
  ::System::Object* key;

  /// @brief Field value, offset: 0x8, size: 0x8, def value: None
  ::System::Object* value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::Ephemeron, 0x10>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::Ephemeron, key) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::Ephemeron, value) == 0x8, "Offset mismatch!");

} // namespace System::Runtime::CompilerServices
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::Ephemeron, "System.Runtime.CompilerServices", "Ephemeron");
