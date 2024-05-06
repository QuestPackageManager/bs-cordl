#pragma once
// IWYU pragma private; include "Zenject/TypeValuePair.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(TypeValuePair)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Zenject {
struct TypeValuePair;
}
// Write type traits
MARK_VAL_T(::Zenject::TypeValuePair);
// Type: Zenject::TypeValuePair
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: true
// CS Name: ::Zenject::TypeValuePair
struct CORDL_TYPE TypeValuePair {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x363f4a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::System::Object* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeValuePair();

  // Ctor Parameters [CppParam { name: "Type", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "Value", ty: "::System::Object*", modifiers: "", def_value: None }]
  constexpr TypeValuePair(::System::Type* Type, ::System::Object* Value) noexcept;

  /// @brief Field Type, offset: 0x0, size: 0x8, def value: None
  ::System::Type* Type;

  /// @brief Field Value, offset: 0x8, size: 0x8, def value: None
  ::System::Object* Value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::TypeValuePair, 0x10>, "Size mismatch!");

static_assert(offsetof(::Zenject::TypeValuePair, Type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Zenject::TypeValuePair, Value) == 0x8, "Offset mismatch!");

} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE(::Zenject::TypeValuePair, "Zenject", "TypeValuePair");
