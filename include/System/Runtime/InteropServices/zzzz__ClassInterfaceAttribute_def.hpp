#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__ClassInterfaceType_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(ClassInterfaceAttribute)
namespace System::Runtime::InteropServices {
struct ClassInterfaceType;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class ClassInterfaceAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::ClassInterfaceAttribute);
// Type: System.Runtime.InteropServices::ClassInterfaceAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3317)), TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3318))
// CS Name: ::System.Runtime.InteropServices::ClassInterfaceAttribute*
class CORDL_TYPE ClassInterfaceAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field _val, offset 0x10, size 0x4
  __declspec(property(get = __get__val, put = __set__val))::System::Runtime::InteropServices::ClassInterfaceType _val;

  constexpr ::System::Runtime::InteropServices::ClassInterfaceType& __get__val();

  constexpr ::System::Runtime::InteropServices::ClassInterfaceType const& __get__val() const;

  constexpr void __set__val(::System::Runtime::InteropServices::ClassInterfaceType value);

  static inline ::System::Runtime::InteropServices::ClassInterfaceAttribute* New_ctor(::System::Runtime::InteropServices::ClassInterfaceType classInterfaceType);

  /// @brief Method .ctor, addr 0x24d7248, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::InteropServices::ClassInterfaceType classInterfaceType);

  // Ctor Parameters [CppParam { name: "", ty: "ClassInterfaceAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClassInterfaceAttribute(ClassInterfaceAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClassInterfaceAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClassInterfaceAttribute(ClassInterfaceAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClassInterfaceAttribute();

public:
  /// @brief Field _val, offset: 0x10, size: 0x4, def value: None
  ::System::Runtime::InteropServices::ClassInterfaceType ____val;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::ClassInterfaceAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::ClassInterfaceAttribute, ____val) == 0x10, "Offset mismatch!");

} // namespace System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::ClassInterfaceAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::ClassInterfaceAttribute*, "System.Runtime.InteropServices", "ClassInterfaceAttribute");
