#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/ComVisibleAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(ComVisibleAttribute)
// Forward declare root types
namespace System::Runtime::InteropServices {
class ComVisibleAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::ComVisibleAttribute);
// Dependencies System.Attribute
namespace System::Runtime::InteropServices {
// Is value type: false
// CS Name: System.Runtime.InteropServices.ComVisibleAttribute
class CORDL_TYPE ComVisibleAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field _val, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__val, put = __cordl_internal_set__val)) bool _val;

  static inline ::System::Runtime::InteropServices::ComVisibleAttribute* New_ctor(bool visibility);

  constexpr bool const& __cordl_internal_get__val() const;

  constexpr bool& __cordl_internal_get__val();

  constexpr void __cordl_internal_set__val(bool value);

  /// @brief Method .ctor, addr 0x3d0fd60, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool visibility);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ComVisibleAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ComVisibleAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ComVisibleAttribute(ComVisibleAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ComVisibleAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ComVisibleAttribute(ComVisibleAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3319 };

  /// @brief Field _val, offset: 0x10, size: 0x1, def value: None
  bool ____val;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::InteropServices::ComVisibleAttribute, ____val) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::ComVisibleAttribute, 0x18>, "Size mismatch!");

} // namespace System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::ComVisibleAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::ComVisibleAttribute*, "System.Runtime.InteropServices", "ComVisibleAttribute");
