#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/DisplayStringFormatAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DisplayStringFormatAttribute)
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class DisplayStringFormatAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute);
// Dependencies System.Attribute
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Utilities.DisplayStringFormatAttribute
class CORDL_TYPE DisplayStringFormatAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <formatString>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__formatString_k__BackingField, put = __cordl_internal_set__formatString_k__BackingField)) ::StringW _formatString_k__BackingField;

  __declspec(property(get = get_formatString, put = set_formatString)) ::StringW formatString;

  static inline ::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute* New_ctor(::StringW formatString);

  constexpr ::StringW const& __cordl_internal_get__formatString_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__formatString_k__BackingField();

  constexpr void __cordl_internal_set__formatString_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x45682f0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW formatString);

  /// @brief Method get_formatString, addr 0x45682e0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_formatString();

  /// @brief Method set_formatString, addr 0x45682e8, size 0x8, virtual false, abstract: false, final false
  inline void set_formatString(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisplayStringFormatAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DisplayStringFormatAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisplayStringFormatAttribute(DisplayStringFormatAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisplayStringFormatAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisplayStringFormatAttribute(DisplayStringFormatAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7075 };

  /// @brief Field <formatString>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____formatString_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute, ____formatString_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute, 0x18>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute*, "UnityEngine.InputSystem.Utilities", "DisplayStringFormatAttribute");
