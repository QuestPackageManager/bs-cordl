#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NullableAttribute)
// Forward declare root types
namespace System::Runtime::CompilerServices {
class NullableAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::NullableAttribute);
// Type: System.Runtime.CompilerServices::NullableAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16053))
// CS Name: ::System.Runtime.CompilerServices::NullableAttribute*
class CORDL_TYPE NullableAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field NullableFlags, offset 0x10, size 0x8
  __declspec(property(get = __get_NullableFlags, put = __set_NullableFlags))::ArrayW<uint8_t, ::Array<uint8_t>*> NullableFlags;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_NullableFlags();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_NullableFlags() const;

  constexpr void __set_NullableFlags(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::System::Runtime::CompilerServices::NullableAttribute* New_ctor(uint8_t _cordl_fixed_empty_name_whitespace);

  /// @brief Method .ctor, addr 0x2a0ac9c, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(uint8_t _cordl_fixed_empty_name_whitespace);

  static inline ::System::Runtime::CompilerServices::NullableAttribute* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> _cordl_fixed_empty_name_whitespace);

  /// @brief Method .ctor, addr 0x2a0ad1c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> _cordl_fixed_empty_name_whitespace);

  // Ctor Parameters [CppParam { name: "", ty: "NullableAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NullableAttribute(NullableAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NullableAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NullableAttribute(NullableAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NullableAttribute();

public:
  /// @brief Field NullableFlags, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___NullableFlags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::NullableAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::NullableAttribute, ___NullableFlags) == 0x10, "Offset mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::NullableAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::NullableAttribute*, "System.Runtime.CompilerServices", "NullableAttribute");
