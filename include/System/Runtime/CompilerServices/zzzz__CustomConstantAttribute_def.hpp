#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/CustomConstantAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(CustomConstantAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class CustomConstantAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::CustomConstantAttribute);
// Dependencies System.Attribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: System.Runtime.CompilerServices.CustomConstantAttribute
class CORDL_TYPE CustomConstantAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_Value)) ::System::Object* Value;

  static inline ::System::Runtime::CompilerServices::CustomConstantAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x59c0344, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Value, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* get_Value();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomConstantAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CustomConstantAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomConstantAttribute(CustomConstantAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomConstantAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomConstantAttribute(CustomConstantAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3380 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::CustomConstantAttribute, 0x10>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::CustomConstantAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::CustomConstantAttribute*, "System.Runtime.CompilerServices", "CustomConstantAttribute");
