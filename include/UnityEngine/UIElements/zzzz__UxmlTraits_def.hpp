#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UxmlTraits)
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlTraits);
// Type: UnityEngine.UIElements::UxmlTraits
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::UxmlTraits*
class CORDL_TYPE UxmlTraits : public ::System::Object {
public:
  // Declarations
  /// @brief Field <canHaveAnyAttribute>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__canHaveAnyAttribute_k__BackingField, put = __cordl_internal_set__canHaveAnyAttribute_k__BackingField)) bool _canHaveAnyAttribute_k__BackingField;

  __declspec(property(put = set_canHaveAnyAttribute)) bool canHaveAnyAttribute;

  /// @brief Method Init, addr 0x3361078, size 0x4, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::UxmlTraits* New_ctor();

  constexpr bool const& __cordl_internal_get__canHaveAnyAttribute_k__BackingField() const;

  constexpr bool& __cordl_internal_get__canHaveAnyAttribute_k__BackingField();

  constexpr void __cordl_internal_set__canHaveAnyAttribute_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x336104c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_canHaveAnyAttribute, addr 0x336106c, size 0xc, virtual false, abstract: false, final false
  inline void set_canHaveAnyAttribute(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlTraits(UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlTraits(UxmlTraits const&) = delete;

  /// @brief Field <canHaveAnyAttribute>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____canHaveAnyAttribute_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlTraits, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UxmlTraits, ____canHaveAnyAttribute_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlTraits*, "UnityEngine.UIElements", "UxmlTraits");
