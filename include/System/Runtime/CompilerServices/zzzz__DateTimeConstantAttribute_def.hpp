#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__CustomConstantAttribute_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
CORDL_MODULE_EXPORT(DateTimeConstantAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class DateTimeConstantAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::DateTimeConstantAttribute);
// Type: System.Runtime.CompilerServices::DateTimeConstantAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3365)), TypeDefinitionIndex(TypeDefinitionIndex(2368))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3366))
// CS Name: ::System.Runtime.CompilerServices::DateTimeConstantAttribute*
class CORDL_TYPE DateTimeConstantAttribute : public ::System::Runtime::CompilerServices::CustomConstantAttribute {
public:
  // Declarations
  /// @brief Field _date, offset 0x10, size 0x8
  __declspec(property(get = __get__date, put = __set__date))::System::DateTime _date;

  __declspec(property(get = get_Value))::System::Object* Value;

  constexpr ::System::DateTime& __get__date();

  constexpr ::System::DateTime const& __get__date() const;

  constexpr void __set__date(::System::DateTime value);

  /// @brief Method get_Value, addr 0x24daf38, size 0x5c, virtual true, abstract: false, final false
  inline ::System::Object* get_Value();

  // Ctor Parameters [CppParam { name: "", ty: "DateTimeConstantAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DateTimeConstantAttribute(DateTimeConstantAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DateTimeConstantAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DateTimeConstantAttribute(DateTimeConstantAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DateTimeConstantAttribute();

public:
  /// @brief Field _date, offset: 0x10, size: 0x8, def value: None
  ::System::DateTime ____date;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::DateTimeConstantAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::DateTimeConstantAttribute, ____date) == 0x10, "Offset mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::DateTimeConstantAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::DateTimeConstantAttribute*, "System.Runtime.CompilerServices", "DateTimeConstantAttribute");
