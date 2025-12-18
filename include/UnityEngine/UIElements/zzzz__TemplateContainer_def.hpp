#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TemplateContainer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BindableElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
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

  /// @brief Method .ctor, addr 0x6ad37d8, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_uxmlName, addr 0x6ad371c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_uxmlName();

  /// @brief Method get_uxmlQualifiedName, addr 0x6ad3760, size 0x78, virtual true, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5085 };

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
  /// @brief Field m_Template, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Template, put = __cordl_internal_set_m_Template)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Template;

  /// @brief Method Init, addr 0x6ad3840, size 0x4b4, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::TemplateContainer_UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& __cordl_internal_get_m_Template() const;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_Template();

  constexpr void __cordl_internal_set_m_Template(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  /// @brief Method .ctor, addr 0x6ad3cf4, size 0x94, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5086 };

  /// @brief Field m_Template, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Template;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TemplateContainer_UxmlTraits, ___m_Template) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TemplateContainer_UxmlTraits, 0x98>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BindableElement, UnityEngine.UIElements.BindingId
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TemplateContainer
class CORDL_TYPE TemplateContainer : public ::UnityEngine::UIElements::BindableElement {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::TemplateContainer_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::TemplateContainer_UxmlTraits;

  /// @brief Field <templateId>k__BackingField, offset 0x4b8, size 0x8
  __declspec(property(get = __cordl_internal_get__templateId_k__BackingField, put = __cordl_internal_set__templateId_k__BackingField)) ::StringW _templateId_k__BackingField;

  __declspec(property(get = get_contentContainer)) ::UnityEngine::UIElements::VisualElement* contentContainer;

  /// @brief Field m_ContentContainer, offset 0x4c0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ContentContainer, put = __cordl_internal_set_m_ContentContainer)) ::UnityEngine::UIElements::VisualElement* m_ContentContainer;

  /// @brief Field m_TemplateSource, offset 0x4c8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TemplateSource, put = __cordl_internal_set_m_TemplateSource)) ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> m_TemplateSource;

  __declspec(property(get = get_templateId, put = set_templateId)) ::StringW templateId;

  /// @brief Field templateIdProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_templateIdProperty, put = setStaticF_templateIdProperty)) ::UnityEngine::UIElements::BindingId templateIdProperty;

  __declspec(property(get = get_templateSource, put = set_templateSource)) ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> templateSource;

  /// @brief Field templateSourceProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_templateSourceProperty, put = setStaticF_templateSourceProperty)) ::UnityEngine::UIElements::BindingId templateSourceProperty;

  static inline ::UnityEngine::UIElements::TemplateContainer* New_ctor();

  static inline ::UnityEngine::UIElements::TemplateContainer* New_ctor(::StringW templateId);

  static inline ::UnityEngine::UIElements::TemplateContainer* New_ctor(::StringW templateId, ::UnityEngine::UIElements::VisualTreeAsset* templateSource);

  /// @brief Method SetContentContainer, addr 0x6ad3588, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x6ad34f8, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6ad351c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::StringW templateId);

  /// @brief Method .ctor, addr 0x6ad354c, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::StringW templateId, ::UnityEngine::UIElements::VisualTreeAsset* templateSource);

  static inline ::UnityEngine::UIElements::BindingId getStaticF_templateIdProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_templateSourceProperty();

  /// @brief Method get_contentContainer, addr 0x6ad3580, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_contentContainer();

  /// @brief Method get_templateId, addr 0x6ad34d8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_templateId();

  /// @brief Method get_templateSource, addr 0x6ad34e8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> get_templateSource();

  static inline void setStaticF_templateIdProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_templateSourceProperty(::UnityEngine::UIElements::BindingId value);

  /// @brief Method set_templateId, addr 0x6ad34e0, size 0x8, virtual false, abstract: false, final false
  inline void set_templateId(::StringW value);

  /// @brief Method set_templateSource, addr 0x6ad34f0, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5087 };

  /// @brief Field <templateId>k__BackingField, offset: 0x4b8, size: 0x8, def value: None
  ::StringW ____templateId_k__BackingField;

  /// @brief Field m_ContentContainer, offset: 0x4c0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_ContentContainer;

  /// @brief Field m_TemplateSource, offset: 0x4c8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> ___m_TemplateSource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TemplateContainer, ____templateId_k__BackingField) == 0x4b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TemplateContainer, ___m_ContentContainer) == 0x4c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TemplateContainer, ___m_TemplateSource) == 0x4c8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TemplateContainer, 0x4d0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TemplateContainer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TemplateContainer*, "UnityEngine.UIElements", "TemplateContainer");
NEED_NO_BOX(::UnityEngine::UIElements::TemplateContainer_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TemplateContainer_UxmlFactory*, "UnityEngine.UIElements", "TemplateContainer/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::TemplateContainer_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TemplateContainer_UxmlTraits*, "UnityEngine.UIElements", "TemplateContainer/UxmlTraits");
