#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/InterfaceTypeAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__ComInterfaceType_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(InterfaceTypeAttribute)
namespace System::Runtime::InteropServices {
struct ComInterfaceType;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class InterfaceTypeAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::InterfaceTypeAttribute);
// Dependencies System.Attribute, System.Runtime.InteropServices.ComInterfaceType
namespace System::Runtime::InteropServices {
// Is value type: false
// CS Name: System.Runtime.InteropServices.InterfaceTypeAttribute
class CORDL_TYPE InterfaceTypeAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field _val, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__val, put = __cordl_internal_set__val)) ::System::Runtime::InteropServices::ComInterfaceType _val;

  static inline ::System::Runtime::InteropServices::InterfaceTypeAttribute* New_ctor(::System::Runtime::InteropServices::ComInterfaceType interfaceType);

  constexpr ::System::Runtime::InteropServices::ComInterfaceType const& __cordl_internal_get__val() const;

  constexpr ::System::Runtime::InteropServices::ComInterfaceType& __cordl_internal_get__val();

  constexpr void __cordl_internal_set__val(::System::Runtime::InteropServices::ComInterfaceType value);

  /// @brief Method .ctor, addr 0x3d1487c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::InteropServices::ComInterfaceType interfaceType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InterfaceTypeAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InterfaceTypeAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InterfaceTypeAttribute(InterfaceTypeAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InterfaceTypeAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InterfaceTypeAttribute(InterfaceTypeAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3315 };

  /// @brief Field _val, offset: 0x10, size: 0x4, def value: None
  ::System::Runtime::InteropServices::ComInterfaceType ____val;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::InteropServices::InterfaceTypeAttribute, ____val) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::InterfaceTypeAttribute, 0x18>, "Size mismatch!");

} // namespace System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::InterfaceTypeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::InterfaceTypeAttribute*, "System.Runtime.InteropServices", "InterfaceTypeAttribute");
