#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BindableElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__IBindable_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BindableElement)
namespace UnityEngine::UIElements {
class BindableElement_UxmlFactory;
}
namespace UnityEngine::UIElements {
class BindableElement_UxmlTraits;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IBinding;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class BindableElement;
}
namespace UnityEngine::UIElements {
class BindableElement_UxmlFactory;
}
namespace UnityEngine::UIElements {
class BindableElement_UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::BindableElement);
MARK_REF_PTR_T(::UnityEngine::UIElements::BindableElement_UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::BindableElement_UxmlTraits);
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BindableElement/UxmlFactory
class CORDL_TYPE BindableElement_UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::BindableElement*, ::UnityEngine::UIElements::BindableElement_UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::BindableElement_UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x496ea08, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BindableElement_UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BindableElement_UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BindableElement_UxmlFactory(BindableElement_UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BindableElement_UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BindableElement_UxmlFactory(BindableElement_UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5453 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BindableElement_UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.VisualElement::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BindableElement/UxmlTraits
class CORDL_TYPE BindableElement_UxmlTraits : public ::UnityEngine::UIElements::VisualElement_UxmlTraits {
public:
  // Declarations
  /// @brief Field m_PropertyPath, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PropertyPath, put = __cordl_internal_set_m_PropertyPath)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_PropertyPath;

  /// @brief Method Init, addr 0x496ead8, size 0x158, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::BindableElement_UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& __cordl_internal_get_m_PropertyPath() const;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_PropertyPath();

  constexpr void __cordl_internal_set_m_PropertyPath(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  /// @brief Method .ctor, addr 0x496ea50, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BindableElement_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BindableElement_UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BindableElement_UxmlTraits(BindableElement_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BindableElement_UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BindableElement_UxmlTraits(BindableElement_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5454 };

  /// @brief Field m_PropertyPath, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_PropertyPath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BindableElement_UxmlTraits, ___m_PropertyPath) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BindableElement_UxmlTraits, 0x78>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.IBindable, UnityEngine.UIElements.VisualElement
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BindableElement
class CORDL_TYPE BindableElement : public ::UnityEngine::UIElements::VisualElement {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::BindableElement_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::BindableElement_UxmlTraits;

  /// @brief Field <bindingPath>k__BackingField, offset 0x3d0, size 0x8
  __declspec(property(get = __cordl_internal_get__bindingPath_k__BackingField, put = __cordl_internal_set__bindingPath_k__BackingField)) ::StringW _bindingPath_k__BackingField;

  /// @brief Field <binding>k__BackingField, offset 0x3c8, size 0x8
  __declspec(property(get = __cordl_internal_get__binding_k__BackingField, put = __cordl_internal_set__binding_k__BackingField)) ::UnityEngine::UIElements::IBinding* _binding_k__BackingField;

  __declspec(property(get = get_binding)) ::UnityEngine::UIElements::IBinding* binding;

  __declspec(property(put = set_bindingPath)) ::StringW bindingPath;

  /// @brief Convert operator to "::UnityEngine::UIElements::IBindable"
  constexpr operator ::UnityEngine::UIElements::IBindable*() noexcept;

  static inline ::UnityEngine::UIElements::BindableElement* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__bindingPath_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__bindingPath_k__BackingField();

  constexpr ::UnityEngine::UIElements::IBinding* const& __cordl_internal_get__binding_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::IBinding*& __cordl_internal_get__binding_k__BackingField();

  constexpr void __cordl_internal_set__bindingPath_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__binding_k__BackingField(::UnityEngine::UIElements::IBinding* value);

  /// @brief Method .ctor, addr 0x496e9b0, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_binding, addr 0x496e9a0, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::IBinding* get_binding();

  /// @brief Convert to "::UnityEngine::UIElements::IBindable"
  constexpr ::UnityEngine::UIElements::IBindable* i___UnityEngine__UIElements__IBindable() noexcept;

  /// @brief Method set_bindingPath, addr 0x496e9a8, size 0x8, virtual true, abstract: false, final true
  inline void set_bindingPath(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BindableElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BindableElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BindableElement(BindableElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BindableElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BindableElement(BindableElement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5455 };

  /// @brief Field <binding>k__BackingField, offset: 0x3c8, size: 0x8, def value: None
  ::UnityEngine::UIElements::IBinding* ____binding_k__BackingField;

  /// @brief Field <bindingPath>k__BackingField, offset: 0x3d0, size: 0x8, def value: None
  ::StringW ____bindingPath_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BindableElement, ____binding_k__BackingField) == 0x3c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BindableElement, ____bindingPath_k__BackingField) == 0x3d0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BindableElement, 0x3d8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::BindableElement);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BindableElement*, "UnityEngine.UIElements", "BindableElement");
NEED_NO_BOX(::UnityEngine::UIElements::BindableElement_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BindableElement_UxmlFactory*, "UnityEngine.UIElements", "BindableElement/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::BindableElement_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BindableElement_UxmlTraits*, "UnityEngine.UIElements", "BindableElement/UxmlTraits");
