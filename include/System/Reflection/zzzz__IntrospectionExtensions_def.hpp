#pragma once
// IWYU pragma private; include "System/Reflection/IntrospectionExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(IntrospectionExtensions)
namespace System::Reflection {
class TypeInfo;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
class IntrospectionExtensions;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::IntrospectionExtensions);
// Dependencies System.Object
namespace System::Reflection {
// Is value type: false
// CS Name: System.Reflection.IntrospectionExtensions
class CORDL_TYPE IntrospectionExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetTypeInfo, addr 0x3d23418, size 0x160, virtual false, abstract: false, final false
  static inline ::System::Reflection::TypeInfo* GetTypeInfo(::System::Type* type);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntrospectionExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IntrospectionExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IntrospectionExtensions(IntrospectionExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IntrospectionExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IntrospectionExtensions(IntrospectionExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3473 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::IntrospectionExtensions, 0x10>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::IntrospectionExtensions);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::IntrospectionExtensions*, "System.Reflection", "IntrospectionExtensions");
