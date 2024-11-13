#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DropdownField.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__PopupField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DropdownField)
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class UxmlIntAttributeDescription;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class __DropdownField__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __DropdownField__UxmlTraits;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DropdownField;
}
namespace UnityEngine::UIElements {
class __DropdownField__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __DropdownField__UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::DropdownField);
MARK_REF_PTR_T(::UnityEngine::UIElements::__DropdownField__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__DropdownField__UxmlTraits);
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::DropdownField::UxmlFactory*
class CORDL_TYPE __DropdownField__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::DropdownField*, ::UnityEngine::UIElements::__DropdownField__UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__DropdownField__UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x492c09c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DropdownField__UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DropdownField__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DropdownField__UxmlFactory(__DropdownField__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DropdownField__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DropdownField__UxmlFactory(__DropdownField__UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5540 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__DropdownField__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UxmlTraits
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::DropdownField::UxmlTraits*
class CORDL_TYPE __DropdownField__UxmlTraits : public ::UnityEngine::UIElements::__BaseField_1__UxmlTraits<::StringW> {
public:
  // Declarations
  /// @brief Field m_Choices, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Choices, put = __cordl_internal_set_m_Choices)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Choices;

  /// @brief Field m_Index, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Index, put = __cordl_internal_set_m_Index)) ::UnityEngine::UIElements::UxmlIntAttributeDescription* m_Index;

  /// @brief Method Init, addr 0x492c0e4, size 0x19c, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::__DropdownField__UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_Choices();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const& __cordl_internal_get_m_Choices() const;

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& __cordl_internal_get_m_Index();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlIntAttributeDescription*> const& __cordl_internal_get_m_Index() const;

  constexpr void __cordl_internal_set_m_Choices(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  constexpr void __cordl_internal_set_m_Index(::UnityEngine::UIElements::UxmlIntAttributeDescription* value);

  /// @brief Method .ctor, addr 0x492c280, size 0xf8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DropdownField__UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DropdownField__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DropdownField__UxmlTraits(__DropdownField__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DropdownField__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DropdownField__UxmlTraits(__DropdownField__UxmlTraits const&) = delete;

  /// @brief Field m_Index, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlIntAttributeDescription* ___m_Index;

  /// @brief Field m_Choices, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Choices;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5541 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__DropdownField__UxmlTraits, 0x90>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__DropdownField__UxmlTraits, ___m_Index) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__DropdownField__UxmlTraits, ___m_Choices) == 0x88, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::DropdownField
// SizeInfo { instance_size: 1144, native_size: -1, calculated_instance_size: 1144, calculated_native_size: 1140, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::DropdownField*
class CORDL_TYPE DropdownField : public ::UnityEngine::UIElements::PopupField_1<::StringW> {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::__DropdownField__UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::__DropdownField__UxmlTraits;

  static inline ::UnityEngine::UIElements::DropdownField* New_ctor();

  static inline ::UnityEngine::UIElements::DropdownField* New_ctor(::StringW label);

  /// @brief Method .ctor, addr 0x492c018, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x492c020, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::StringW label);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DropdownField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DropdownField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DropdownField(DropdownField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DropdownField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DropdownField(DropdownField const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5542 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DropdownField, 0x478>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::DropdownField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DropdownField*, "UnityEngine.UIElements", "DropdownField");
NEED_NO_BOX(::UnityEngine::UIElements::__DropdownField__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__DropdownField__UxmlFactory*, "UnityEngine.UIElements", "DropdownField/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__DropdownField__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__DropdownField__UxmlTraits*, "UnityEngine.UIElements", "DropdownField/UxmlTraits");
