#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BindableElement)
namespace UnityEngine::UIElements {
class __BindableElement__UxmlFactory;
}
namespace UnityEngine::UIElements {
class IBinding;
}
namespace UnityEngine::UIElements {
class IBindable;
}
namespace UnityEngine::UIElements {
class __BindableElement__UxmlTraits;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class BindableElement;
}
namespace UnityEngine::UIElements {
class __BindableElement__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __BindableElement__UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::BindableElement);
MARK_REF_PTR_T(::UnityEngine::UIElements::__BindableElement__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__BindableElement__UxmlTraits);
// Type: ::UxmlTraits
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6737))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6800))
// CS Name: ::BindableElement::UxmlTraits*
class CORDL_TYPE __BindableElement__UxmlTraits : public ::UnityEngine::UIElements::__VisualElement__UxmlTraits {
public:
  // Declarations
  /// @brief Field m_PropertyPath, offset 0x70, size 0x8
  __declspec(property(get = __get_m_PropertyPath, put = __set_m_PropertyPath))::UnityEngine::UIElements::UxmlStringAttributeDescription* m_PropertyPath;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __get_m_PropertyPath();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const& __get_m_PropertyPath() const;

  constexpr void __set_m_PropertyPath(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  static inline ::UnityEngine::UIElements::__BindableElement__UxmlTraits* New_ctor();

  /// @brief Method .ctor, addr 0x2db972c, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Init, addr 0x2db9570, size 0x134, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  // Ctor Parameters [CppParam { name: "", ty: "__BindableElement__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BindableElement__UxmlTraits(__BindableElement__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BindableElement__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BindableElement__UxmlTraits(__BindableElement__UxmlTraits const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BindableElement__UxmlTraits();

public:
  /// @brief Field m_PropertyPath, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_PropertyPath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__BindableElement__UxmlTraits, 0x78>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__BindableElement__UxmlTraits, ___m_PropertyPath) == 0x70, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::BindableElement
// SizeInfo { instance_size: 960, native_size: -1, calculated_instance_size: 960, calculated_native_size: 960, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6744))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6801))
// CS Name: ::UnityEngine.UIElements::BindableElement*
class CORDL_TYPE BindableElement : public ::UnityEngine::UIElements::VisualElement {
public:
  // Declarations
  using UxmlTraits = ::UnityEngine::UIElements::__BindableElement__UxmlTraits;

  using UxmlFactory = ::UnityEngine::UIElements::__BindableElement__UxmlFactory;

  /// @brief Field <binding>k__BackingField, offset 0x3b0, size 0x8
  __declspec(property(get = __get__binding_k__BackingField, put = __set__binding_k__BackingField))::UnityEngine::UIElements::IBinding* _binding_k__BackingField;

  /// @brief Field <bindingPath>k__BackingField, offset 0x3b8, size 0x8
  __declspec(property(get = __get__bindingPath_k__BackingField, put = __set__bindingPath_k__BackingField))::StringW _bindingPath_k__BackingField;

  __declspec(property(get = get_binding))::UnityEngine::UIElements::IBinding* binding;

  __declspec(property(put = set_bindingPath))::StringW bindingPath;

  /// @brief Convert operator to "::UnityEngine::UIElements::IBindable"
  constexpr operator ::UnityEngine::UIElements::IBindable*() noexcept;

  constexpr ::UnityEngine::UIElements::IBinding*& __get__binding_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IBinding*> const& __get__binding_k__BackingField() const;

  constexpr void __set__binding_k__BackingField(::UnityEngine::UIElements::IBinding* value);

  constexpr ::StringW& __get__bindingPath_k__BackingField();

  constexpr ::StringW const& __get__bindingPath_k__BackingField() const;

  constexpr void __set__bindingPath_k__BackingField(::StringW value);

  /// @brief Method get_binding, addr 0x2dbcf00, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::IBinding* get_binding();

  /// @brief Method set_bindingPath, addr 0x2dbcf08, size 0x8, virtual true, abstract: false, final true
  inline void set_bindingPath(::StringW value);

  static inline ::UnityEngine::UIElements::BindableElement* New_ctor();

  /// @brief Method .ctor, addr 0x2db9070, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BindableElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BindableElement(BindableElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BindableElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BindableElement(BindableElement const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BindableElement();

public:
  /// @brief Field <binding>k__BackingField, offset: 0x3b0, size: 0x8, def value: None
  ::UnityEngine::UIElements::IBinding* ____binding_k__BackingField;

  /// @brief Field <bindingPath>k__BackingField, offset: 0x3b8, size: 0x8, def value: None
  ::StringW ____bindingPath_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BindableElement, 0x3c0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BindableElement, ____binding_k__BackingField) == 0x3b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BindableElement, ____bindingPath_k__BackingField) == 0x3b8, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6997)), TypeDefinitionIndex(TypeDefinitionIndex(6801)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6997), inst: 5256
// }), TypeDefinitionIndex(TypeDefinitionIndex(6800))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6799)) CS Name: ::BindableElement::UxmlFactory*
class CORDL_TYPE __BindableElement__UxmlFactory
    : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::BindableElement*, ::UnityEngine::UIElements::__BindableElement__UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__BindableElement__UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x2dbcf10, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__BindableElement__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BindableElement__UxmlFactory(__BindableElement__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BindableElement__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BindableElement__UxmlFactory(__BindableElement__UxmlFactory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BindableElement__UxmlFactory();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__BindableElement__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::BindableElement);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BindableElement*, "UnityEngine.UIElements", "BindableElement");
NEED_NO_BOX(::UnityEngine::UIElements::__BindableElement__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__BindableElement__UxmlFactory*, "UnityEngine.UIElements", "BindableElement/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__BindableElement__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__BindableElement__UxmlTraits*, "UnityEngine.UIElements", "BindableElement/UxmlTraits");
