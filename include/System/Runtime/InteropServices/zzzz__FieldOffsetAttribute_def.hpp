#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/FieldOffsetAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FieldOffsetAttribute)
// Forward declare root types
namespace System::Runtime::InteropServices {
class FieldOffsetAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::FieldOffsetAttribute);
// Dependencies System.Attribute
namespace System::Runtime::InteropServices {
// Is value type: false
// CS Name: System.Runtime.InteropServices.FieldOffsetAttribute
class CORDL_TYPE FieldOffsetAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field _val, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__val, put = __cordl_internal_set__val)) int32_t _val;

  static inline ::System::Runtime::InteropServices::FieldOffsetAttribute* New_ctor(int32_t offset);

  constexpr int32_t const& __cordl_internal_get__val() const;

  constexpr int32_t& __cordl_internal_get__val();

  constexpr void __cordl_internal_set__val(int32_t value);

  /// @brief Method .ctor, addr 0x3d16a3c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t offset);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FieldOffsetAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FieldOffsetAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FieldOffsetAttribute(FieldOffsetAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FieldOffsetAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FieldOffsetAttribute(FieldOffsetAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3331 };

  /// @brief Field _val, offset: 0x10, size: 0x4, def value: None
  int32_t ____val;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::InteropServices::FieldOffsetAttribute, ____val) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::FieldOffsetAttribute, 0x18>, "Size mismatch!");

} // namespace System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::FieldOffsetAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::FieldOffsetAttribute*, "System.Runtime.InteropServices", "FieldOffsetAttribute");
