#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseUxmlTraits.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BaseUxmlTraits)
// Forward declare root types
namespace UnityEngine::UIElements {
class BaseUxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::BaseUxmlTraits);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BaseUxmlTraits
class CORDL_TYPE BaseUxmlTraits : public ::System::Object {
public:
  // Declarations
  /// @brief Field <canHaveAnyAttribute>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__canHaveAnyAttribute_k__BackingField, put = __cordl_internal_set__canHaveAnyAttribute_k__BackingField)) bool _canHaveAnyAttribute_k__BackingField;

  __declspec(property(put = set_canHaveAnyAttribute)) bool canHaveAnyAttribute;

  static inline ::UnityEngine::UIElements::BaseUxmlTraits* New_ctor();

  constexpr bool const& __cordl_internal_get__canHaveAnyAttribute_k__BackingField() const;

  constexpr bool& __cordl_internal_get__canHaveAnyAttribute_k__BackingField();

  constexpr void __cordl_internal_set__canHaveAnyAttribute_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x4a9e25c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_canHaveAnyAttribute, addr 0x4a9e27c, size 0xc, virtual false, abstract: false, final false
  inline void set_canHaveAnyAttribute(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseUxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseUxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseUxmlTraits(BaseUxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseUxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseUxmlTraits(BaseUxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6270 };

  /// @brief Field <canHaveAnyAttribute>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____canHaveAnyAttribute_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BaseUxmlTraits, ____canHaveAnyAttribute_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BaseUxmlTraits, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::BaseUxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseUxmlTraits*, "UnityEngine.UIElements", "BaseUxmlTraits");
