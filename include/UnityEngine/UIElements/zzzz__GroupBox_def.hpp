#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/GroupBox.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BindableElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GroupBox)
namespace UnityEngine::UIElements {
struct CreationContext;
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
namespace UnityEngine::UIElements {
class __GroupBox__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __GroupBox__UxmlTraits;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class GroupBox;
}
namespace UnityEngine::UIElements {
class __GroupBox__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __GroupBox__UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::GroupBox);
MARK_REF_PTR_T(::UnityEngine::UIElements::__GroupBox__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__GroupBox__UxmlTraits);
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::GroupBox::UxmlFactory*
class CORDL_TYPE __GroupBox__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::GroupBox*, ::UnityEngine::UIElements::__GroupBox__UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__GroupBox__UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x491dbe0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GroupBox__UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GroupBox__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GroupBox__UxmlFactory(__GroupBox__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GroupBox__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GroupBox__UxmlFactory(__GroupBox__UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5554 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__GroupBox__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UxmlTraits
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::GroupBox::UxmlTraits*
class CORDL_TYPE __GroupBox__UxmlTraits : public ::UnityEngine::UIElements::__BindableElement__UxmlTraits {
public:
  // Declarations
  /// @brief Field m_Text, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Text, put = __cordl_internal_set_m_Text)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Text;

  /// @brief Method Init, addr 0x491dc28, size 0xf8, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::__GroupBox__UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_Text();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const& __cordl_internal_get_m_Text() const;

  constexpr void __cordl_internal_set_m_Text(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  /// @brief Method .ctor, addr 0x491dd20, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GroupBox__UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GroupBox__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GroupBox__UxmlTraits(__GroupBox__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GroupBox__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GroupBox__UxmlTraits(__GroupBox__UxmlTraits const&) = delete;

  /// @brief Field m_Text, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Text;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5555 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__GroupBox__UxmlTraits, 0x80>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__GroupBox__UxmlTraits, ___m_Text) == 0x78, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::GroupBox
// SizeInfo { instance_size: 992, native_size: -1, calculated_instance_size: 992, calculated_native_size: 992, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::GroupBox*
class CORDL_TYPE GroupBox : public ::UnityEngine::UIElements::BindableElement {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::__GroupBox__UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::__GroupBox__UxmlTraits;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName)) ::StringW labelUssClassName;

  /// @brief Field m_TitleLabel, offset 0x3d8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TitleLabel, put = __cordl_internal_set_m_TitleLabel)) ::UnityEngine::UIElements::Label* m_TitleLabel;

  __declspec(property(put = set_text)) ::StringW text;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief Convert operator to "::UnityEngine::UIElements::IGroupBox"
  constexpr operator ::UnityEngine::UIElements::IGroupBox*() noexcept;

  static inline ::UnityEngine::UIElements::GroupBox* New_ctor();

  static inline ::UnityEngine::UIElements::GroupBox* New_ctor(::StringW text);

  /// @brief Method UnityEngine.UIElements.IGroupBox.OnOptionAdded, addr 0x491db38, size 0x4, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IGroupBox_OnOptionAdded(::UnityEngine::UIElements::IGroupBoxOption* option);

  /// @brief Method UnityEngine.UIElements.IGroupBox.OnOptionRemoved, addr 0x491db3c, size 0x4, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IGroupBox_OnOptionRemoved(::UnityEngine::UIElements::IGroupBoxOption* option);

  constexpr ::UnityEngine::UIElements::Label*& __cordl_internal_get_m_TitleLabel();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Label*> const& __cordl_internal_get_m_TitleLabel() const;

  constexpr void __cordl_internal_set_m_TitleLabel(::UnityEngine::UIElements::Label* value);

  /// @brief Method .ctor, addr 0x491daa8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x491dab0, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::StringW text);

  static inline ::StringW getStaticF_labelUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Convert to "::UnityEngine::UIElements::IGroupBox"
  constexpr ::UnityEngine::UIElements::IGroupBox* i___UnityEngine__UIElements__IGroupBox() noexcept;

  static inline void setStaticF_labelUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

  /// @brief Method set_text, addr 0x491d990, size 0x118, virtual false, abstract: false, final false
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

  /// @brief Field m_TitleLabel, offset: 0x3d8, size: 0x8, def value: None
  ::UnityEngine::UIElements::Label* ___m_TitleLabel;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5556 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::GroupBox, 0x3e0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::GroupBox, ___m_TitleLabel) == 0x3d8, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::GroupBox);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::GroupBox*, "UnityEngine.UIElements", "GroupBox");
NEED_NO_BOX(::UnityEngine::UIElements::__GroupBox__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__GroupBox__UxmlFactory*, "UnityEngine.UIElements", "GroupBox/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__GroupBox__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__GroupBox__UxmlTraits*, "UnityEngine.UIElements", "GroupBox/UxmlTraits");
