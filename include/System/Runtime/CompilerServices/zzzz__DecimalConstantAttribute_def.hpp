#pragma once
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
// Type: System.Runtime.CompilerServices::DecimalConstantAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547)), TypeDefinitionIndex(TypeDefinitionIndex(2655))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3367))
// CS Name: ::System.Runtime.CompilerServices::DecimalConstantAttribute*
class CORDL_TYPE DecimalConstantAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field _dec, offset 0x10, size 0x10
  __declspec(property(get = __get__dec, put = __set__dec))::System::Decimal _dec;

  __declspec(property(get = get_Value))::System::Decimal Value;

  constexpr ::System::Decimal& __get__dec();

  constexpr ::System::Decimal const& __get__dec() const;

  constexpr void __set__dec(::System::Decimal value);

  static inline ::System::Runtime::CompilerServices::DecimalConstantAttribute* New_ctor(uint8_t scale, uint8_t sign, uint32_t hi, uint32_t mid, uint32_t low);

  /// @brief Method .ctor addr 0x24daf94 size 0x9c virtual false final false
  inline void _ctor(uint8_t scale, uint8_t sign, uint32_t hi, uint32_t mid, uint32_t low);

  /// @brief Method get_Value addr 0x24db030 size 0xc virtual false final false
  inline ::System::Decimal get_Value();

  // Ctor Parameters [CppParam { name: "", ty: "DecimalConstantAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecimalConstantAttribute(DecimalConstantAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecimalConstantAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecimalConstantAttribute(DecimalConstantAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecimalConstantAttribute();

public:
  /// @brief Field _dec, offset: 0x10, size: 0x10, def value: None
  ::System::Decimal ____dec;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::DecimalConstantAttribute, 0x20>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::DecimalConstantAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::DecimalConstantAttribute*, "System.Runtime.CompilerServices", "DecimalConstantAttribute");
