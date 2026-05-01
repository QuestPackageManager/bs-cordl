#pragma once
// IWYU pragma private; include "System/Reflection/InterfaceMapping.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(InterfaceMapping)
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
struct InterfaceMapping;
}
// Write type traits
MARK_VAL_T(::System::Reflection::InterfaceMapping);
// Dependencies
namespace System::Reflection {
// Is value type: true
// CS Name: System.Reflection.InterfaceMapping
struct CORDL_TYPE InterfaceMapping {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr InterfaceMapping();

  // Ctor Parameters [CppParam { name: "TargetType", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "InterfaceType", ty: "::System::Type*", modifiers: "", def_value: None },
  // CppParam { name: "TargetMethods", ty: "::ArrayW<::System::Reflection::MethodInfo*,::Array<::System::Reflection::MethodInfo*>*>", modifiers: "", def_value: None }, CppParam { name:
  // "InterfaceMethods", ty: "::ArrayW<::System::Reflection::MethodInfo*,::Array<::System::Reflection::MethodInfo*>*>", modifiers: "", def_value: None }]
  constexpr InterfaceMapping(::System::Type* TargetType, ::System::Type* InterfaceType, ::ArrayW<::System::Reflection::MethodInfo*, ::Array<::System::Reflection::MethodInfo*>*> TargetMethods,
                             ::ArrayW<::System::Reflection::MethodInfo*, ::Array<::System::Reflection::MethodInfo*>*> InterfaceMethods) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3493 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field TargetType, offset: 0x0, size: 0x8, def value: None
  ::System::Type* TargetType;

  /// @brief Field InterfaceType, offset: 0x8, size: 0x8, def value: None
  ::System::Type* InterfaceType;

  /// @brief Field TargetMethods, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Reflection::MethodInfo*, ::Array<::System::Reflection::MethodInfo*>*> TargetMethods;

  /// @brief Field InterfaceMethods, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Reflection::MethodInfo*, ::Array<::System::Reflection::MethodInfo*>*> InterfaceMethods;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Reflection::InterfaceMapping, TargetType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::InterfaceMapping, InterfaceType) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::InterfaceMapping, TargetMethods) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::InterfaceMapping, InterfaceMethods) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Reflection::InterfaceMapping, 0x20>, "Size mismatch!");

} // namespace System::Reflection
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::InterfaceMapping, "System.Reflection", "InterfaceMapping");
