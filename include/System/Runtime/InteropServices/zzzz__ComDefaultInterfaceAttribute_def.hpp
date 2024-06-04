#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/ComDefaultInterfaceAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(ComDefaultInterfaceAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class ComDefaultInterfaceAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::ComDefaultInterfaceAttribute);
// Type: System.Runtime.InteropServices::ComDefaultInterfaceAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::InteropServices {
// Is value type: false
// CS Name: ::System.Runtime.InteropServices::ComDefaultInterfaceAttribute*
class CORDL_TYPE ComDefaultInterfaceAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field _val, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__val, put = __cordl_internal_set__val))::System::Type* _val;

  static inline ::System::Runtime::InteropServices::ComDefaultInterfaceAttribute* New_ctor(::System::Type* defaultInterface);

  constexpr ::System::Type*& __cordl_internal_get__val();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__val() const;

  constexpr void __cordl_internal_set__val(::System::Type* value);

  /// @brief Method .ctor, addr 0x2871410, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* defaultInterface);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ComDefaultInterfaceAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ComDefaultInterfaceAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ComDefaultInterfaceAttribute(ComDefaultInterfaceAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ComDefaultInterfaceAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ComDefaultInterfaceAttribute(ComDefaultInterfaceAttribute const&) = delete;

  /// @brief Field _val, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____val;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::ComDefaultInterfaceAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::ComDefaultInterfaceAttribute, ____val) == 0x10, "Offset mismatch!");

} // namespace System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::ComDefaultInterfaceAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::ComDefaultInterfaceAttribute*, "System.Runtime.InteropServices", "ComDefaultInterfaceAttribute");
