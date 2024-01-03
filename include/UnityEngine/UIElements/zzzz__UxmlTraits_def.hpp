#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UxmlTraits)
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
struct CreationContext;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6995))
// CS Name: ::UnityEngine.UIElements::UxmlTraits*
class CORDL_TYPE UxmlTraits : public ::System::Object {
public:
  // Declarations
  /// @brief Field <canHaveAnyAttribute>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __get__canHaveAnyAttribute_k__BackingField, put = __set__canHaveAnyAttribute_k__BackingField)) bool _canHaveAnyAttribute_k__BackingField;

  __declspec(property(put = set_canHaveAnyAttribute)) bool canHaveAnyAttribute;

  constexpr bool& __get__canHaveAnyAttribute_k__BackingField();

  constexpr bool const& __get__canHaveAnyAttribute_k__BackingField() const;

  constexpr void __set__canHaveAnyAttribute_k__BackingField(bool value);

  static inline ::UnityEngine::UIElements::UxmlTraits* New_ctor();

  /// @brief Method .ctor, addr 0x2e0feec, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_canHaveAnyAttribute, addr 0x2e0ff0c, size 0xc, virtual false, abstract: false, final false
  inline void set_canHaveAnyAttribute(bool value);

  /// @brief Method Init, addr 0x2e0ff18, size 0x4, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  // Ctor Parameters [CppParam { name: "", ty: "UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlTraits(UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlTraits(UxmlTraits const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlTraits();

public:
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
