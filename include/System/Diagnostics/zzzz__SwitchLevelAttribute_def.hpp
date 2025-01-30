#pragma once
// IWYU pragma private; include "System/Diagnostics/SwitchLevelAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(SwitchLevelAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace System::Diagnostics {
class SwitchLevelAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::SwitchLevelAttribute);
// Dependencies System.Attribute
namespace System::Diagnostics {
// Is value type: false
// CS Name: System.Diagnostics.SwitchLevelAttribute
class CORDL_TYPE SwitchLevelAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(put = set_SwitchLevelType)) ::System::Type* SwitchLevelType;

  /// @brief Field type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::System::Type* type;

  static inline ::System::Diagnostics::SwitchLevelAttribute* New_ctor(::System::Type* switchLevelType);

  constexpr ::System::Type* const& __cordl_internal_get_type() const;

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_type(::System::Type* value);

  /// @brief Method .ctor, addr 0x442d2d8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* switchLevelType);

  /// @brief Method set_SwitchLevelType, addr 0x442d304, size 0xbc, virtual false, abstract: false, final false
  inline void set_SwitchLevelType(::System::Type* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SwitchLevelAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SwitchLevelAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SwitchLevelAttribute(SwitchLevelAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SwitchLevelAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SwitchLevelAttribute(SwitchLevelAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9255 };

  /// @brief Field type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Diagnostics::SwitchLevelAttribute, ___type) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Diagnostics::SwitchLevelAttribute, 0x18>, "Size mismatch!");

} // namespace System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::SwitchLevelAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::SwitchLevelAttribute*, "System.Diagnostics", "SwitchLevelAttribute");
