#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/RuntimeCompatibilityAttribute.hpp"
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
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: ::System.Runtime.CompilerServices::RuntimeCompatibilityAttribute*
class CORDL_TYPE RuntimeCompatibilityAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(put = set_WrapNonExceptionThrows)) bool WrapNonExceptionThrows;

  /// @brief Field <WrapNonExceptionThrows>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__WrapNonExceptionThrows_k__BackingField,
                      put = __cordl_internal_set__WrapNonExceptionThrows_k__BackingField)) bool _WrapNonExceptionThrows_k__BackingField;

  static inline ::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute* New_ctor();

  constexpr bool const& __cordl_internal_get__WrapNonExceptionThrows_k__BackingField() const;

  constexpr bool& __cordl_internal_get__WrapNonExceptionThrows_k__BackingField();

  constexpr void __cordl_internal_set__WrapNonExceptionThrows_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x3ca2d40, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_WrapNonExceptionThrows, addr 0x3ca2d48, size 0xc, virtual false, abstract: false, final false
  inline void set_WrapNonExceptionThrows(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeCompatibilityAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimeCompatibilityAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeCompatibilityAttribute(RuntimeCompatibilityAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeCompatibilityAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeCompatibilityAttribute(RuntimeCompatibilityAttribute const&) = delete;

  /// @brief Field <WrapNonExceptionThrows>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____WrapNonExceptionThrows_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3381 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute, ____WrapNonExceptionThrows_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute*, "System.Runtime.CompilerServices", "RuntimeCompatibilityAttribute");
