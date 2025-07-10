#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TemplateContainer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BindableElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TemplateContainer)
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class TemplateContainer_UxmlFactory;
}
namespace UnityEngine::UIElements {
class TemplateContainer_UxmlTraits;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class VisualTreeAsset;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TemplateContainer;
}
namespace UnityEngine::UIElements {
class TemplateContainer_UxmlFactory;
}
namespace UnityEngine::UIElements {
class TemplateContainer_UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TemplateContainer);
MARK_REF_PTR_T(::UnityEngine::UIElements::TemplateContainer_UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::TemplateContainer_UxmlTraits);
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TemplateContainer/UxmlFactory
class CORDL_TYPE TemplateContainer_UxmlFactory
    : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::TemplateContainer*, ::UnityEngine::UIElements::TemplateContainer_UxmlTraits*> {
public:
  // Declarations
  __declspec(property(get = get_uxmlName)) ::StringW uxmlName;

  __declspec(property(get = get_uxmlQualifiedName)) ::StringW uxmlQualifiedName;

  static inline ::UnityEngine::UIElements::TemplateContainer_UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x4a905a0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_uxmlName, addr 0x4a904ec, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_uxmlName();

  /// @brief Method get_uxmlQualifiedName, addr 0x4a9052c, size 0x74, virtual true, abstract: false, final false
  inline ::StringW get_uxmlQualifiedName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TemplateContainer_UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TemplateContainer_UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TemplateContainer_UxmlFactory(TemplateContainer_UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TemplateContainer_UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TemplateContainer_UxmlFactory(TemplateContainer_UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6195 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TemplateContainer_UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BindableElement::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TemplateContainer/UxmlTraits
class CORDL_TYPE TemplateContainer_UxmlTraits : public ::UnityEngine::UIElements::BindableElement_UxmlTraits {
public:
  // Declarations
  /// @brief Field m_Template, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Template, put = __cordl_internal_set_m_Template)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Template;

  /// @brief Method Init, addr 0x4a905e8, size 0x3dc, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::TemplateContainer_UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& __cordl_internal_get_m_Template() const;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_Template();

  constexpr void __cordl_internal_set_m_Template(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  /// @brief Method .ctor, addr 0x4a91354, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TemplateContainer_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TemplateContainer_UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TemplateContainer_UxmlTraits(TemplateContainer_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TemplateContainer_UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TemplateContainer_UxmlTraits(TemplateContainer_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6196 };

  /// @brief Field m_Template, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Template;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TemplateContainer_UxmlTraits, ___m_Template) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TemplateContainer_UxmlTraits, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BindableElement
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TemplateContainer
class CORDL_TYPE TemplateContainer : public ::UnityEngine::UIElements::BindableElement {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::TemplateContainer_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::TemplateContainer_UxmlTraits;

  /// @brief Field <templateId>k__BackingField, offset 0x3d8, size 0x8
  __declspec(property(get = __cordl_internal_get__templateId_k__BackingField, put = __cordl_internal_set__templateId_k__BackingField)) ::StringW _templateId_k__BackingField;

  __declspec(property(get = get_contentContainer)) ::UnityEngine::UIElements::VisualElement* contentContainer;

  /// @brief Field m_ContentContainer, offset 0x3e0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ContentContainer, put = __cordl_internal_set_m_ContentContainer)) ::UnityEngine::UIElements::VisualElement* m_ContentContainer;

  /// @brief Field m_TemplateSource, offset 0x3e8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TemplateSource, put = __cordl_internal_set_m_TemplateSource)) ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> m_TemplateSource;

  __declspec(property(get = get_templateId, put = set_templateId)) ::StringW templateId;

  __declspec(property(put = set_templateSource)) ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> templateSource;

  static inline ::UnityEngine::UIElements::TemplateContainer* New_ctor();

  static inline ::UnityEngine::UIElements::TemplateContainer* New_ctor(::StringW templateId);

  /// @brief Method SetContentContainer, addr 0x4a904e4, size 0x8, virtual false, abstract: false, final false
  inline void SetContentContainer(::UnityEngine::UIElements::VisualElement* content);

  constexpr ::StringW const& __cordl_internal_get__templateId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__templateId_k__BackingField();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_ContentContainer() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_ContentContainer();

  constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> const& __cordl_internal_get_m_TemplateSource() const;

  constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>& __cordl_internal_get_m_TemplateSource();

  constexpr void __cordl_internal_set__templateId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set_m_ContentContainer(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_TemplateSource(::UnityW<::UnityEngine::UIElements::VisualTreeAsset> value);

  /// @brief Method .ctor, addr 0x4a90490, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4a904b0, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW templateId);

  /// @brief Method get_contentContainer, addr 0x4a904dc, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_contentContainer();

  /// @brief Method get_templateId, addr 0x4a90478, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_templateId();

  /// @brief Method set_templateId, addr 0x4a90480, size 0x8, virtual false, abstract: false, final false
  inline void set_templateId(::StringW value);

  /// @brief Method set_templateSource, addr 0x4a90488, size 0x8, virtual false, abstract: false, final false
  inline void set_templateSource(::UnityEngine::UIElements::VisualTreeAsset* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TemplateContainer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TemplateContainer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TemplateContainer(TemplateContainer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TemplateContainer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TemplateContainer(TemplateContainer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6197 };

  /// @brief Field <templateId>k__BackingField, offset: 0x3d8, size: 0x8, def value: None
  ::StringW ____templateId_k__BackingField;

  /// @brief Field m_ContentContainer, offset: 0x3e0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_ContentContainer;

  /// @brief Field m_TemplateSource, offset: 0x3e8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> ___m_TemplateSource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TemplateContainer, ____templateId_k__BackingField) == 0x3d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TemplateContainer, ___m_ContentContainer) == 0x3e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TemplateContainer, ___m_TemplateSource) == 0x3e8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TemplateContainer, 0x3f0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TemplateContainer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TemplateContainer*, "UnityEngine.UIElements", "TemplateContainer");
NEED_NO_BOX(::UnityEngine::UIElements::TemplateContainer_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TemplateContainer_UxmlFactory*, "UnityEngine.UIElements", "TemplateContainer/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::TemplateContainer_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TemplateContainer_UxmlTraits*, "UnityEngine.UIElements", "TemplateContainer/UxmlTraits");
