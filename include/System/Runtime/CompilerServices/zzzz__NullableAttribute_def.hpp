#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/NullableAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NullableAttribute)
// Forward declare root types
namespace System::Runtime::CompilerServices {
class NullableAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::NullableAttribute);
// Dependencies System.Attribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: System.Runtime.CompilerServices.NullableAttribute
class CORDL_TYPE NullableAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field NullableFlags, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_NullableFlags, put = __cordl_internal_set_NullableFlags)) ::ArrayW<uint8_t, ::Array<uint8_t>*> NullableFlags;

  static inline ::System::Runtime::CompilerServices::NullableAttribute* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> _cordl_fixed_empty_name_whitespace);

  static inline ::System::Runtime::CompilerServices::NullableAttribute* New_ctor(uint8_t _cordl_fixed_empty_name_whitespace);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_NullableFlags() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_NullableFlags();

  constexpr void __cordl_internal_set_NullableFlags(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x3ac47fc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> _cordl_fixed_empty_name_whitespace);

  /// @brief Method .ctor, addr 0x3ac477c, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(uint8_t _cordl_fixed_empty_name_whitespace);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NullableAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NullableAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NullableAttribute(NullableAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NullableAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NullableAttribute(NullableAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3969 };

  /// @brief Field NullableFlags, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___NullableFlags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::CompilerServices::NullableAttribute, ___NullableFlags) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::NullableAttribute, 0x18>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::NullableAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::NullableAttribute*, "System.Runtime.CompilerServices", "NullableAttribute");
