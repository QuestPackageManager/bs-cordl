#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/HelpBox.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include "UnityEngine/UIElements/zzzz__HelpBoxMessageType_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HelpBox)
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
struct HelpBoxMessageType;
}
namespace UnityEngine::UIElements {
class HelpBox_UxmlFactory;
}
namespace UnityEngine::UIElements {
class HelpBox_UxmlTraits;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class Label;
}
namespace UnityEngine::UIElements {
template <typename T> class UxmlEnumAttributeDescription_1;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class HelpBox;
}
namespace UnityEngine::UIElements {
class HelpBox_UxmlFactory;
}
namespace UnityEngine::UIElements {
class HelpBox_UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::HelpBox);
MARK_REF_PTR_T(::UnityEngine::UIElements::HelpBox_UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::HelpBox_UxmlTraits);
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.HelpBox/UxmlFactory
class CORDL_TYPE HelpBox_UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::HelpBox*, ::UnityEngine::UIElements::HelpBox_UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::HelpBox_UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x6b132b4, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HelpBox_UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HelpBox_UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HelpBox_UxmlFactory(HelpBox_UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HelpBox_UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HelpBox_UxmlFactory(HelpBox_UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4209 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::HelpBox_UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.VisualElement::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.HelpBox/UxmlTraits
class CORDL_TYPE HelpBox_UxmlTraits : public ::UnityEngine::UIElements::VisualElement_UxmlTraits {
public:
  // Declarations
  /// @brief Field m_MessageType, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MessageType,
                      put = __cordl_internal_set_m_MessageType)) ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::HelpBoxMessageType>* m_MessageType;

  /// @brief Field m_Text, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Text, put = __cordl_internal_set_m_Text)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Text;

  /// @brief Method Init, addr 0x6b1331c, size 0x160, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::HelpBox_UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::HelpBoxMessageType>* const& __cordl_internal_get_m_MessageType() const;

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::HelpBoxMessageType>*& __cordl_internal_get_m_MessageType();

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& __cordl_internal_get_m_Text() const;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_Text();

  constexpr void __cordl_internal_set_m_MessageType(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::HelpBoxMessageType>* value);

  constexpr void __cordl_internal_set_m_Text(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  /// @brief Method .ctor, addr 0x6b1347c, size 0x110, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HelpBox_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HelpBox_UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HelpBox_UxmlTraits(HelpBox_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HelpBox_UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HelpBox_UxmlTraits(HelpBox_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4210 };

  /// @brief Field m_Text, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Text;

  /// @brief Field m_MessageType, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::HelpBoxMessageType>* ___m_MessageType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::HelpBox_UxmlTraits, ___m_Text) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::HelpBox_UxmlTraits, ___m_MessageType) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::HelpBox_UxmlTraits, 0x98>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BindingId, UnityEngine.UIElements.HelpBoxMessageType, UnityEngine.UIElements.VisualElement
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.HelpBox
class CORDL_TYPE HelpBox : public ::UnityEngine::UIElements::VisualElement {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::HelpBox_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::HelpBox_UxmlTraits;

  /// @brief Field iconErrorUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_iconErrorUssClassName, put = setStaticF_iconErrorUssClassName)) ::StringW iconErrorUssClassName;

  /// @brief Field iconInfoUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_iconInfoUssClassName, put = setStaticF_iconInfoUssClassName)) ::StringW iconInfoUssClassName;

  /// @brief Field iconUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_iconUssClassName, put = setStaticF_iconUssClassName)) ::StringW iconUssClassName;

  /// @brief Field iconwarningUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_iconwarningUssClassName, put = setStaticF_iconwarningUssClassName)) ::StringW iconwarningUssClassName;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName)) ::StringW labelUssClassName;

  /// @brief Field m_HelpBoxMessageType, offset 0x4a8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HelpBoxMessageType, put = __cordl_internal_set_m_HelpBoxMessageType)) ::UnityEngine::UIElements::HelpBoxMessageType m_HelpBoxMessageType;

  /// @brief Field m_Icon, offset 0x4b0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Icon, put = __cordl_internal_set_m_Icon)) ::UnityEngine::UIElements::VisualElement* m_Icon;

  /// @brief Field m_IconClass, offset 0x4b8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IconClass, put = __cordl_internal_set_m_IconClass)) ::StringW m_IconClass;

  /// @brief Field m_Label, offset 0x4c0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Label, put = __cordl_internal_set_m_Label)) ::UnityEngine::UIElements::Label* m_Label;

  __declspec(property(get = get_messageType, put = set_messageType)) ::UnityEngine::UIElements::HelpBoxMessageType messageType;

  /// @brief Field messageTypeProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_messageTypeProperty, put = setStaticF_messageTypeProperty)) ::UnityEngine::UIElements::BindingId messageTypeProperty;

  __declspec(property(get = get_text, put = set_text)) ::StringW text;

  /// @brief Field textProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_textProperty, put = setStaticF_textProperty)) ::UnityEngine::UIElements::BindingId textProperty;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief Method GetIconClass, addr 0x6b12f30, size 0xcc, virtual false, abstract: false, final false
  inline ::StringW GetIconClass(::UnityEngine::UIElements::HelpBoxMessageType messageType);

  static inline ::UnityEngine::UIElements::HelpBox* New_ctor();

  static inline ::UnityEngine::UIElements::HelpBox* New_ctor(::StringW text, ::UnityEngine::UIElements::HelpBoxMessageType messageType);

  /// @brief Method UpdateIcon, addr 0x6b12d1c, size 0xa4, virtual false, abstract: false, final false
  inline void UpdateIcon(::UnityEngine::UIElements::HelpBoxMessageType messageType);

  constexpr ::UnityEngine::UIElements::HelpBoxMessageType const& __cordl_internal_get_m_HelpBoxMessageType() const;

  constexpr ::UnityEngine::UIElements::HelpBoxMessageType& __cordl_internal_get_m_HelpBoxMessageType();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_Icon() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_Icon();

  constexpr ::StringW const& __cordl_internal_get_m_IconClass() const;

  constexpr ::StringW& __cordl_internal_get_m_IconClass();

  constexpr ::UnityEngine::UIElements::Label* const& __cordl_internal_get_m_Label() const;

  constexpr ::UnityEngine::UIElements::Label*& __cordl_internal_get_m_Label();

  constexpr void __cordl_internal_set_m_HelpBoxMessageType(::UnityEngine::UIElements::HelpBoxMessageType value);

  constexpr void __cordl_internal_set_m_Icon(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_IconClass(::StringW value);

  constexpr void __cordl_internal_set_m_Label(::UnityEngine::UIElements::Label* value);

  /// @brief Method .ctor, addr 0x6b12dc0, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6b12dd8, size 0x158, virtual false, abstract: false, final false
  inline void _ctor(::StringW text, ::UnityEngine::UIElements::HelpBoxMessageType messageType);

  static inline ::StringW getStaticF_iconErrorUssClassName();

  static inline ::StringW getStaticF_iconInfoUssClassName();

  static inline ::StringW getStaticF_iconUssClassName();

  static inline ::StringW getStaticF_iconwarningUssClassName();

  static inline ::StringW getStaticF_labelUssClassName();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_messageTypeProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_textProperty();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_messageType, addr 0x6b12c74, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::HelpBoxMessageType get_messageType();

  /// @brief Method get_text, addr 0x6b12b68, size 0x20, virtual false, abstract: false, final false
  inline ::StringW get_text();

  static inline void setStaticF_iconErrorUssClassName(::StringW value);

  static inline void setStaticF_iconInfoUssClassName(::StringW value);

  static inline void setStaticF_iconUssClassName(::StringW value);

  static inline void setStaticF_iconwarningUssClassName(::StringW value);

  static inline void setStaticF_labelUssClassName(::StringW value);

  static inline void setStaticF_messageTypeProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_textProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_ussClassName(::StringW value);

  /// @brief Method set_messageType, addr 0x6b12c7c, size 0xa0, virtual false, abstract: false, final false
  inline void set_messageType(::UnityEngine::UIElements::HelpBoxMessageType value);

  /// @brief Method set_text, addr 0x6b12b88, size 0xec, virtual false, abstract: false, final false
  inline void set_text(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HelpBox();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HelpBox", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HelpBox(HelpBox&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HelpBox", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HelpBox(HelpBox const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4211 };

  /// @brief Field m_HelpBoxMessageType, offset: 0x4a8, size: 0x4, def value: None
  ::UnityEngine::UIElements::HelpBoxMessageType ___m_HelpBoxMessageType;

  /// @brief Field m_Icon, offset: 0x4b0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_Icon;

  /// @brief Field m_IconClass, offset: 0x4b8, size: 0x8, def value: None
  ::StringW ___m_IconClass;

  /// @brief Field m_Label, offset: 0x4c0, size: 0x8, def value: None
  ::UnityEngine::UIElements::Label* ___m_Label;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::HelpBox, ___m_HelpBoxMessageType) == 0x4a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::HelpBox, ___m_Icon) == 0x4b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::HelpBox, ___m_IconClass) == 0x4b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::HelpBox, ___m_Label) == 0x4c0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::HelpBox, 0x4c8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::HelpBox);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::HelpBox*, "UnityEngine.UIElements", "HelpBox");
NEED_NO_BOX(::UnityEngine::UIElements::HelpBox_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::HelpBox_UxmlFactory*, "UnityEngine.UIElements", "HelpBox/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::HelpBox_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::HelpBox_UxmlTraits*, "UnityEngine.UIElements", "HelpBox/UxmlTraits");
