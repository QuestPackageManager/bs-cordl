#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/GroupBox.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BindableElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GroupBox)
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class GroupBox_UxmlFactory;
}
namespace UnityEngine::UIElements {
class GroupBox_UxmlTraits;
}
namespace UnityEngine::UIElements {
class IGroupBoxOption;
}
namespace UnityEngine::UIElements {
class IGroupBox;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class Label;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class GroupBox;
}
namespace UnityEngine::UIElements {
class GroupBox_UxmlFactory;
}
namespace UnityEngine::UIElements {
class GroupBox_UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::GroupBox);
MARK_REF_PTR_T(::UnityEngine::UIElements::GroupBox_UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::GroupBox_UxmlTraits);
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.GroupBox/UxmlFactory
class CORDL_TYPE GroupBox_UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::GroupBox*, ::UnityEngine::UIElements::GroupBox_UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::GroupBox_UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x6b11e30, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GroupBox_UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GroupBox_UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GroupBox_UxmlFactory(GroupBox_UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GroupBox_UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GroupBox_UxmlFactory(GroupBox_UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4201 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::GroupBox_UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BindableElement::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.GroupBox/UxmlTraits
class CORDL_TYPE GroupBox_UxmlTraits : public ::UnityEngine::UIElements::BindableElement_UxmlTraits {
public:
  // Declarations
  /// @brief Field m_Text, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Text, put = __cordl_internal_set_m_Text)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Text;

  /// @brief Method Init, addr 0x6b11e98, size 0x11c, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::GroupBox_UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& __cordl_internal_get_m_Text() const;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_Text();

  constexpr void __cordl_internal_set_m_Text(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  /// @brief Method .ctor, addr 0x6b11fb4, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GroupBox_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GroupBox_UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GroupBox_UxmlTraits(GroupBox_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GroupBox_UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GroupBox_UxmlTraits(GroupBox_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4202 };

  /// @brief Field m_Text, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Text;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::GroupBox_UxmlTraits, ___m_Text) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::GroupBox_UxmlTraits, 0x98>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BindableElement, UnityEngine.UIElements.BindingId
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.GroupBox
class CORDL_TYPE GroupBox : public ::UnityEngine::UIElements::BindableElement {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::GroupBox_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::GroupBox_UxmlTraits;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName)) ::StringW labelUssClassName;

  /// @brief Field m_TitleLabel, offset 0x4b8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TitleLabel, put = __cordl_internal_set_m_TitleLabel)) ::UnityEngine::UIElements::Label* m_TitleLabel;

  __declspec(property(get = get_text, put = set_text)) ::StringW text;

  /// @brief Field textProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_textProperty, put = setStaticF_textProperty)) ::UnityEngine::UIElements::BindingId textProperty;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief Convert operator to "::UnityEngine::UIElements::IGroupBox"
  constexpr operator ::UnityEngine::UIElements::IGroupBox*() noexcept;

  static inline ::UnityEngine::UIElements::GroupBox* New_ctor();

  static inline ::UnityEngine::UIElements::GroupBox* New_ctor(::StringW text);

  /// @brief Method UnityEngine.UIElements.IGroupBox.OnOptionAdded, addr 0x6b11cd0, size 0x4, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IGroupBox_OnOptionAdded(::UnityEngine::UIElements::IGroupBoxOption* option);

  /// @brief Method UnityEngine.UIElements.IGroupBox.OnOptionRemoved, addr 0x6b11cd4, size 0x4, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IGroupBox_OnOptionRemoved(::UnityEngine::UIElements::IGroupBoxOption* option);

  constexpr ::UnityEngine::UIElements::Label* const& __cordl_internal_get_m_TitleLabel() const;

  constexpr ::UnityEngine::UIElements::Label*& __cordl_internal_get_m_TitleLabel();

  constexpr void __cordl_internal_set_m_TitleLabel(::UnityEngine::UIElements::Label* value);

  /// @brief Method .ctor, addr 0x6b11c3c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6b11c44, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::StringW text);

  static inline ::StringW getStaticF_labelUssClassName();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_textProperty();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_text, addr 0x6b119c4, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_text();

  /// @brief Convert to "::UnityEngine::UIElements::IGroupBox"
  constexpr ::UnityEngine::UIElements::IGroupBox* i___UnityEngine__UIElements__IGroupBox() noexcept;

  static inline void setStaticF_labelUssClassName(::StringW value);

  static inline void setStaticF_textProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_ussClassName(::StringW value);

  /// @brief Method set_text, addr 0x6b119e0, size 0x19c, virtual false, abstract: false, final false
  inline void set_text(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GroupBox();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GroupBox", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GroupBox(GroupBox&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GroupBox", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GroupBox(GroupBox const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4203 };

  /// @brief Field m_TitleLabel, offset: 0x4b8, size: 0x8, def value: None
  ::UnityEngine::UIElements::Label* ___m_TitleLabel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::GroupBox, ___m_TitleLabel) == 0x4b8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::GroupBox, 0x4c0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::GroupBox);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::GroupBox*, "UnityEngine.UIElements", "GroupBox");
NEED_NO_BOX(::UnityEngine::UIElements::GroupBox_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::GroupBox_UxmlFactory*, "UnityEngine.UIElements", "GroupBox/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::GroupBox_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::GroupBox_UxmlTraits*, "UnityEngine.UIElements", "GroupBox/UxmlTraits");
