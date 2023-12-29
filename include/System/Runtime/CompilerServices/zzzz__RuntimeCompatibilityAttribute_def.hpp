#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(RuntimeCompatibilityAttribute)
// Forward declare root types
namespace System::Runtime::CompilerServices {
class RuntimeCompatibilityAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute);
// Type: System.Runtime.CompilerServices::RuntimeCompatibilityAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2545))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3376))
// CS Name: ::System.Runtime.CompilerServices::RuntimeCompatibilityAttribute*
class CORDL_TYPE RuntimeCompatibilityAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <WrapNonExceptionThrows>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __get__WrapNonExceptionThrows_k__BackingField, put = __set__WrapNonExceptionThrows_k__BackingField)) bool _WrapNonExceptionThrows_k__BackingField;

  __declspec(property(put = set_WrapNonExceptionThrows)) bool WrapNonExceptionThrows;

  constexpr bool& __get__WrapNonExceptionThrows_k__BackingField();

  constexpr bool const& __get__WrapNonExceptionThrows_k__BackingField() const;

  constexpr void __set__WrapNonExceptionThrows_k__BackingField(bool value);

  static inline ::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute* New_ctor();

  /// @brief Method .ctor addr 0x2381850 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method set_WrapNonExceptionThrows addr 0x2381858 size 0xc virtual false final false
  inline void set_WrapNonExceptionThrows(bool value);

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeCompatibilityAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeCompatibilityAttribute(RuntimeCompatibilityAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeCompatibilityAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeCompatibilityAttribute(RuntimeCompatibilityAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeCompatibilityAttribute();

public:
  /// @brief Field <WrapNonExceptionThrows>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____WrapNonExceptionThrows_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute, ____WrapNonExceptionThrows_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute*, "System.Runtime.CompilerServices", "RuntimeCompatibilityAttribute");
