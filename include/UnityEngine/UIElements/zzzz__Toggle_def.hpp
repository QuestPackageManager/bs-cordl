#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseBoolField_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseFieldTraits_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlBoolAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Toggle)
namespace UnityEngine::UIElements {
class __Toggle__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __Toggle__UxmlTraits;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class VisualElement;
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
// Type: ::UxmlTraits
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7131)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7131), inst: 914 }),
// TypeDefinitionIndex(TypeDefinitionIndex(6992))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7092)) CS Name: ::Toggle::UxmlTraits*
class CORDL_TYPE __Toggle__UxmlTraits : public ::UnityEngine::UIElements::BaseFieldTraits_2<bool, ::UnityEngine::UIElements::UxmlBoolAttributeDescription*> {
public:
  // Declarations
  /// @brief Field m_Text, offset 0x88, size 0x8
  __declspec(property(get = __get_m_Text, put = __set_m_Text))::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Text;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __get_m_Text();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const& __get_m_Text() const;

  constexpr void __set_m_Text(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  /// @brief Method Init, addr 0x2e338f0, size 0x118, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::__Toggle__UxmlTraits* New_ctor();

  /// @brief Method .ctor, addr 0x2e33a08, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__Toggle__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Toggle__UxmlTraits(__Toggle__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Toggle__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Toggle__UxmlTraits(__Toggle__UxmlTraits const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Toggle__UxmlTraits();

public:
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7067))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7093))
// CS Name: ::UnityEngine.UIElements::Toggle*
class CORDL_TYPE Toggle : public ::UnityEngine::UIElements::BaseBoolField {
public:
  // Declarations
  using UxmlTraits = ::UnityEngine::UIElements::__Toggle__UxmlTraits;

  using UxmlFactory = ::UnityEngine::UIElements::__Toggle__UxmlFactory;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName))::StringW ussClassName;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName))::StringW labelUssClassName;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName))::StringW inputUssClassName;

  /// @brief Field noTextVariantUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_noTextVariantUssClassName, put = setStaticF_noTextVariantUssClassName))::StringW noTextVariantUssClassName;

  /// @brief Field checkmarkUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_checkmarkUssClassName, put = setStaticF_checkmarkUssClassName))::StringW checkmarkUssClassName;

  /// @brief Field textUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_textUssClassName, put = setStaticF_textUssClassName))::StringW textUssClassName;

  static inline void setStaticF_ussClassName(::StringW value);

  static inline ::StringW getStaticF_ussClassName();

  static inline void setStaticF_labelUssClassName(::StringW value);

  static inline ::StringW getStaticF_labelUssClassName();

  static inline void setStaticF_inputUssClassName(::StringW value);

  static inline ::StringW getStaticF_inputUssClassName();

  static inline void setStaticF_noTextVariantUssClassName(::StringW value);

  static inline ::StringW getStaticF_noTextVariantUssClassName();

  static inline void setStaticF_checkmarkUssClassName(::StringW value);

  static inline ::StringW getStaticF_checkmarkUssClassName();

  static inline void setStaticF_textUssClassName(::StringW value);

  static inline ::StringW getStaticF_textUssClassName();

  static inline ::UnityEngine::UIElements::Toggle* New_ctor();

  /// @brief Method .ctor, addr 0x2e32ce0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::Toggle* New_ctor(::StringW label);

  /// @brief Method .ctor, addr 0x2e335c4, size 0xfc, virtual false, abstract: false, final false
  inline void _ctor(::StringW label);

  /// @brief Method InitLabel, addr 0x2e336c0, size 0x78, virtual true, abstract: false, final false
  inline void InitLabel();

  // Ctor Parameters [CppParam { name: "", ty: "Toggle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Toggle(Toggle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Toggle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Toggle(Toggle const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Toggle();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Toggle, 0x428>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7092)), TypeDefinitionIndex(TypeDefinitionIndex(6997)), TypeDefinitionIndex(TypeDefinitionIndex(7093)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6997), inst: 5281 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(7091)) CS Name: ::Toggle::UxmlFactory*
class CORDL_TYPE __Toggle__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::Toggle*, ::UnityEngine::UIElements::__Toggle__UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__Toggle__UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x2e338a8, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__Toggle__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Toggle__UxmlFactory(__Toggle__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Toggle__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Toggle__UxmlFactory(__Toggle__UxmlFactory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Toggle__UxmlFactory();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__Toggle__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::Toggle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Toggle*, "UnityEngine.UIElements", "Toggle");
NEED_NO_BOX(::UnityEngine::UIElements::__Toggle__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__Toggle__UxmlFactory*, "UnityEngine.UIElements", "Toggle/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__Toggle__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__Toggle__UxmlTraits*, "UnityEngine.UIElements", "Toggle/UxmlTraits");
