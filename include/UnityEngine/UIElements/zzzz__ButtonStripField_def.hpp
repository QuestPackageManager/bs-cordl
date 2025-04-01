#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ButtonStripField.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ButtonStripField)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
class ButtonStripField_UxmlFactory;
}
namespace UnityEngine::UIElements {
class ButtonStripField_UxmlTraits;
}
namespace UnityEngine::UIElements {
class Button;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ButtonStripField;
}
namespace UnityEngine::UIElements {
class ButtonStripField_UxmlFactory;
}
namespace UnityEngine::UIElements {
class ButtonStripField_UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ButtonStripField);
MARK_REF_PTR_T(::UnityEngine::UIElements::ButtonStripField_UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::ButtonStripField_UxmlTraits);
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ButtonStripField/UxmlFactory
class CORDL_TYPE ButtonStripField_UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::ButtonStripField*, ::UnityEngine::UIElements::ButtonStripField_UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::ButtonStripField_UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x4988004, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ButtonStripField_UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ButtonStripField_UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ButtonStripField_UxmlFactory(ButtonStripField_UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ButtonStripField_UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ButtonStripField_UxmlFactory(ButtonStripField_UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5534 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ButtonStripField_UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BaseField`1::UxmlTraits<TValueType>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ButtonStripField/UxmlTraits
class CORDL_TYPE ButtonStripField_UxmlTraits : public ::UnityEngine::UIElements::BaseField_1_UxmlTraits<int32_t> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::ButtonStripField_UxmlTraits* New_ctor();

  /// @brief Method .ctor, addr 0x498804c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ButtonStripField_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ButtonStripField_UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ButtonStripField_UxmlTraits(ButtonStripField_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ButtonStripField_UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ButtonStripField_UxmlTraits(ButtonStripField_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5535 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ButtonStripField_UxmlTraits, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BaseField`1<TValueType>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ButtonStripField
class CORDL_TYPE ButtonStripField : public ::UnityEngine::UIElements::BaseField_1<int32_t> {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::ButtonStripField_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::ButtonStripField_UxmlTraits;

  /// @brief Field m_Buttons, offset 0x440, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Buttons, put = __cordl_internal_set_m_Buttons)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Button*>* m_Buttons;

  static inline ::UnityEngine::UIElements::ButtonStripField* New_ctor();

  /// @brief Method RefreshButtonsState, addr 0x4987f2c, size 0xd8, virtual false, abstract: false, final false
  inline void RefreshButtonsState();

  /// @brief Method SetValueWithoutNotify, addr 0x4987ea8, size 0x84, virtual true, abstract: false, final false
  inline void SetValueWithoutNotify(int32_t newValue);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Button*>* const& __cordl_internal_get_m_Buttons() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Button*>*& __cordl_internal_get_m_Buttons();

  constexpr void __cordl_internal_set_m_Buttons(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Button*>* value);

  /// @brief Method .ctor, addr 0x4987df0, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ButtonStripField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ButtonStripField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ButtonStripField(ButtonStripField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ButtonStripField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ButtonStripField(ButtonStripField const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5536 };

  /// @brief Field m_Buttons, offset: 0x440, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Button*>* ___m_Buttons;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ButtonStripField, ___m_Buttons) == 0x440, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ButtonStripField, 0x448>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ButtonStripField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ButtonStripField*, "UnityEngine.UIElements", "ButtonStripField");
NEED_NO_BOX(::UnityEngine::UIElements::ButtonStripField_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ButtonStripField_UxmlFactory*, "UnityEngine.UIElements", "ButtonStripField/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::ButtonStripField_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ButtonStripField_UxmlTraits*, "UnityEngine.UIElements", "ButtonStripField/UxmlTraits");
