#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/NullableContextAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NullableContextAttribute)
// Forward declare root types
namespace System::Runtime::CompilerServices {
class NullableContextAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::NullableContextAttribute);
// Dependencies System.Attribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: System.Runtime.CompilerServices.NullableContextAttribute
class CORDL_TYPE NullableContextAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field Flag, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_Flag, put = __cordl_internal_set_Flag)) uint8_t Flag;

  static inline ::System::Runtime::CompilerServices::NullableContextAttribute* New_ctor(uint8_t _cordl_fixed_empty_name_whitespace);

  constexpr uint8_t const& __cordl_internal_get_Flag() const;

  constexpr uint8_t& __cordl_internal_get_Flag();

  constexpr void __cordl_internal_set_Flag(uint8_t value);

  /// @brief Method .ctor, addr 0x3e75c5c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(uint8_t _cordl_fixed_empty_name_whitespace);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NullableContextAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NullableContextAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NullableContextAttribute(NullableContextAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NullableContextAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NullableContextAttribute(NullableContextAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10037 };

  /// @brief Field Flag, offset: 0x10, size: 0x1, def value: None
  uint8_t ___Flag;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::CompilerServices::NullableContextAttribute, ___Flag) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::NullableContextAttribute, 0x18>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::NullableContextAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::NullableContextAttribute*, "System.Runtime.CompilerServices", "NullableContextAttribute");
