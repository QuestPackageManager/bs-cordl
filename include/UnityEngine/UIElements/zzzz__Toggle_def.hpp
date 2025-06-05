#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Toggle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseBoolField_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseFieldTraits_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Toggle)
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class Toggle_UxmlFactory;
}
namespace UnityEngine::UIElements {
class Toggle_UxmlTraits;
}
namespace UnityEngine::UIElements {
class UxmlBoolAttributeDescription;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class Toggle;
}
namespace UnityEngine::UIElements {
class Toggle_UxmlFactory;
}
namespace UnityEngine::UIElements {
class Toggle_UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Toggle);
MARK_REF_PTR_T(::UnityEngine::UIElements::Toggle_UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::Toggle_UxmlTraits);
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Toggle/UxmlFactory
class CORDL_TYPE Toggle_UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::Toggle*, ::UnityEngine::UIElements::Toggle_UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::Toggle_UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x4a0e904, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Toggle_UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Toggle_UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Toggle_UxmlFactory(Toggle_UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Toggle_UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Toggle_UxmlFactory(Toggle_UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5707 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Toggle_UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BaseFieldTraits`2<TValueType, TValueUxmlAttributeType>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Toggle/UxmlTraits
class CORDL_TYPE Toggle_UxmlTraits : public ::UnityEngine::UIElements::BaseFieldTraits_2<bool, ::UnityEngine::UIElements::UxmlBoolAttributeDescription*> {
public:
  // Declarations
  /// @brief Field m_Text, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Text, put = __cordl_internal_set_m_Text)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Text;

  /// @brief Method Init, addr 0x4a0e94c, size 0x11c, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::Toggle_UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& __cordl_internal_get_m_Text() const;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_Text();

  constexpr void __cordl_internal_set_m_Text(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  /// @brief Method .ctor, addr 0x4a0ea68, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Toggle_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Toggle_UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Toggle_UxmlTraits(Toggle_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Toggle_UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Toggle_UxmlTraits(Toggle_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5708 };

  /// @brief Field m_Text, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Text;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Toggle_UxmlTraits, ___m_Text) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Toggle_UxmlTraits, 0x90>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BaseBoolField
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Toggle
class CORDL_TYPE Toggle : public ::UnityEngine::UIElements::BaseBoolField {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::Toggle_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::Toggle_UxmlTraits;

  /// @brief Field checkmarkUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_checkmarkUssClassName, put = setStaticF_checkmarkUssClassName)) ::StringW checkmarkUssClassName;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName)) ::StringW inputUssClassName;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName)) ::StringW labelUssClassName;

  /// @brief Field mixedValuesUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_mixedValuesUssClassName, put = setStaticF_mixedValuesUssClassName)) ::StringW mixedValuesUssClassName;

  /// @brief Field noTextVariantUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_noTextVariantUssClassName, put = setStaticF_noTextVariantUssClassName)) ::StringW noTextVariantUssClassName;

  /// @brief Field textUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_textUssClassName, put = setStaticF_textUssClassName)) ::StringW textUssClassName;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief Method InitLabel, addr 0x4a0e53c, size 0x7c, virtual true, abstract: false, final false
  inline void InitLabel();

  static inline ::UnityEngine::UIElements::Toggle* New_ctor();

  static inline ::UnityEngine::UIElements::Toggle* New_ctor(::StringW label);

  /// @brief Method UpdateMixedValueContent, addr 0x4a0e5b8, size 0x1ac, virtual true, abstract: false, final false
  inline void UpdateMixedValueContent();

  /// @brief Method .ctor, addr 0x4a0e434, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4a0e43c, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::StringW label);

  static inline ::StringW getStaticF_checkmarkUssClassName();

  static inline ::StringW getStaticF_inputUssClassName();

  static inline ::StringW getStaticF_labelUssClassName();

  static inline ::StringW getStaticF_mixedValuesUssClassName();

  static inline ::StringW getStaticF_noTextVariantUssClassName();

  static inline ::StringW getStaticF_textUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  static inline void setStaticF_checkmarkUssClassName(::StringW value);

  static inline void setStaticF_inputUssClassName(::StringW value);

  static inline void setStaticF_labelUssClassName(::StringW value);

  static inline void setStaticF_mixedValuesUssClassName(::StringW value);

  static inline void setStaticF_noTextVariantUssClassName(::StringW value);

  static inline void setStaticF_textUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Toggle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Toggle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Toggle(Toggle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Toggle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Toggle(Toggle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5709 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Toggle, 0x460>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::Toggle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Toggle*, "UnityEngine.UIElements", "Toggle");
NEED_NO_BOX(::UnityEngine::UIElements::Toggle_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Toggle_UxmlFactory*, "UnityEngine.UIElements", "Toggle/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::Toggle_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Toggle_UxmlTraits*, "UnityEngine.UIElements", "Toggle/UxmlTraits");
