#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/DecimalConstantAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DecimalConstantAttribute)
namespace System {
struct Decimal;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class DecimalConstantAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::DecimalConstantAttribute);
// Dependencies System.Attribute, System.Decimal
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: System.Runtime.CompilerServices.DecimalConstantAttribute
class CORDL_TYPE DecimalConstantAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_Value)) ::System::Decimal Value;

  /// @brief Field _dec, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get__dec, put = __cordl_internal_set__dec)) ::System::Decimal _dec;

  static inline ::System::Runtime::CompilerServices::DecimalConstantAttribute* New_ctor(uint8_t scale, uint8_t sign, uint32_t hi, uint32_t mid, uint32_t low);

  constexpr ::System::Decimal const& __cordl_internal_get__dec() const;

  constexpr ::System::Decimal& __cordl_internal_get__dec();

  constexpr void __cordl_internal_set__dec(::System::Decimal value);

  /// @brief Method .ctor, addr 0x3d13b64, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(uint8_t scale, uint8_t sign, uint32_t hi, uint32_t mid, uint32_t low);

  /// @brief Method get_Value, addr 0x3d13c00, size 0xc, virtual false, abstract: false, final false
  inline ::System::Decimal get_Value();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecimalConstantAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecimalConstantAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecimalConstantAttribute(DecimalConstantAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecimalConstantAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecimalConstantAttribute(DecimalConstantAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3367 };

  /// @brief Field _dec, offset: 0x10, size: 0x10, def value: None
  ::System::Decimal ____dec;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::CompilerServices::DecimalConstantAttribute, ____dec) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::DecimalConstantAttribute, 0x20>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::DecimalConstantAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::DecimalConstantAttribute*, "System.Runtime.CompilerServices", "DecimalConstantAttribute");
