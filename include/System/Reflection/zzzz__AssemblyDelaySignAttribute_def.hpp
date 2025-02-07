#pragma once
// IWYU pragma private; include "System/Reflection/AssemblyDelaySignAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(AssemblyDelaySignAttribute)
// Forward declare root types
namespace System::Reflection {
class AssemblyDelaySignAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::AssemblyDelaySignAttribute);
// Dependencies System.Attribute
namespace System::Reflection {
// Is value type: false
// CS Name: System.Reflection.AssemblyDelaySignAttribute
class CORDL_TYPE AssemblyDelaySignAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <DelaySign>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__DelaySign_k__BackingField, put = __cordl_internal_set__DelaySign_k__BackingField)) bool _DelaySign_k__BackingField;

  static inline ::System::Reflection::AssemblyDelaySignAttribute* New_ctor(bool delaySign);

  constexpr bool const& __cordl_internal_get__DelaySign_k__BackingField() const;

  constexpr bool& __cordl_internal_get__DelaySign_k__BackingField();

  constexpr void __cordl_internal_set__DelaySign_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x3d26724, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool delaySign);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssemblyDelaySignAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssemblyDelaySignAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssemblyDelaySignAttribute(AssemblyDelaySignAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssemblyDelaySignAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssemblyDelaySignAttribute(AssemblyDelaySignAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3448 };

  /// @brief Field <DelaySign>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____DelaySign_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Reflection::AssemblyDelaySignAttribute, ____DelaySign_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Reflection::AssemblyDelaySignAttribute, 0x18>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::AssemblyDelaySignAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::AssemblyDelaySignAttribute*, "System.Reflection", "AssemblyDelaySignAttribute");
