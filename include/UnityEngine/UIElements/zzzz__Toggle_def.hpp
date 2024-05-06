#pragma once
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
class UxmlBoolAttributeDescription;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class __Toggle__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __Toggle__UxmlTraits;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class Toggle;
}
namespace UnityEngine::UIElements {
class __Toggle__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __Toggle__UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Toggle);
MARK_REF_PTR_T(::UnityEngine::UIElements::__Toggle__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__Toggle__UxmlTraits);
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::Toggle::UxmlFactory*
class CORDL_TYPE __Toggle__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::Toggle*, ::UnityEngine::UIElements::__Toggle__UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__Toggle__UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x3588744, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Toggle__UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Toggle__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Toggle__UxmlFactory(__Toggle__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Toggle__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Toggle__UxmlFactory(__Toggle__UxmlFactory const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__Toggle__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UxmlTraits
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::Toggle::UxmlTraits*
class CORDL_TYPE __Toggle__UxmlTraits : public ::UnityEngine::UIElements::BaseFieldTraits_2<bool, ::UnityEngine::UIElements::UxmlBoolAttributeDescription*> {
public:
  // Declarations
  /// @brief Field m_Text, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Text, put = __cordl_internal_set_m_Text))::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Text;

  /// @brief Method Init, addr 0x358878c, size 0x118, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::__Toggle__UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_Text();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const& __cordl_internal_get_m_Text() const;

  constexpr void __cordl_internal_set_m_Text(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  /// @brief Method .ctor, addr 0x35888a4, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Toggle__UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Toggle__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Toggle__UxmlTraits(__Toggle__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Toggle__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Toggle__UxmlTraits(__Toggle__UxmlTraits const&) = delete;

  /// @brief Field m_Text, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Text;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__Toggle__UxmlTraits, 0x90>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__Toggle__UxmlTraits, ___m_Text) == 0x88, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::Toggle
// SizeInfo { instance_size: 1064, native_size: -1, calculated_instance_size: 1064, calculated_native_size: 1064, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::Toggle*
class CORDL_TYPE Toggle : public ::UnityEngine::UIElements::BaseBoolField {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::__Toggle__UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::__Toggle__UxmlTraits;

  /// @brief Field checkmarkUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_checkmarkUssClassName, put = setStaticF_checkmarkUssClassName))::StringW checkmarkUssClassName;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName))::StringW inputUssClassName;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName))::StringW labelUssClassName;

  /// @brief Field noTextVariantUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_noTextVariantUssClassName, put = setStaticF_noTextVariantUssClassName))::StringW noTextVariantUssClassName;

  /// @brief Field textUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_textUssClassName, put = setStaticF_textUssClassName))::StringW textUssClassName;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName))::StringW ussClassName;

  /// @brief Method InitLabel, addr 0x358855c, size 0x78, virtual true, abstract: false, final false
  inline void InitLabel();

  static inline ::UnityEngine::UIElements::Toggle* New_ctor();

  static inline ::UnityEngine::UIElements::Toggle* New_ctor(::StringW label);

  /// @brief Method .ctor, addr 0x3587b7c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3588460, size 0xfc, virtual false, abstract: false, final false
  inline void _ctor(::StringW label);

  static inline ::StringW getStaticF_checkmarkUssClassName();

  static inline ::StringW getStaticF_inputUssClassName();

  static inline ::StringW getStaticF_labelUssClassName();

  static inline ::StringW getStaticF_noTextVariantUssClassName();

  static inline ::StringW getStaticF_textUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  static inline void setStaticF_checkmarkUssClassName(::StringW value);

  static inline void setStaticF_inputUssClassName(::StringW value);

  static inline void setStaticF_labelUssClassName(::StringW value);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Toggle, 0x428>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::Toggle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Toggle*, "UnityEngine.UIElements", "Toggle");
NEED_NO_BOX(::UnityEngine::UIElements::__Toggle__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__Toggle__UxmlFactory*, "UnityEngine.UIElements", "Toggle/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__Toggle__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__Toggle__UxmlTraits*, "UnityEngine.UIElements", "Toggle/UxmlTraits");
