#pragma once
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
class Button;
}
namespace UnityEngine::UIElements {
class __ButtonStripField__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __ButtonStripField__UxmlTraits;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ButtonStripField;
}
namespace UnityEngine::UIElements {
class __ButtonStripField__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __ButtonStripField__UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ButtonStripField);
MARK_REF_PTR_T(::UnityEngine::UIElements::__ButtonStripField__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__ButtonStripField__UxmlTraits);
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::ButtonStripField::UxmlFactory*
class CORDL_TYPE __ButtonStripField__UxmlFactory
    : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::ButtonStripField*, ::UnityEngine::UIElements::__ButtonStripField__UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__ButtonStripField__UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x3384160, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ButtonStripField__UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ButtonStripField__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ButtonStripField__UxmlFactory(__ButtonStripField__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ButtonStripField__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ButtonStripField__UxmlFactory(__ButtonStripField__UxmlFactory const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__ButtonStripField__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UxmlTraits
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::ButtonStripField::UxmlTraits*
class CORDL_TYPE __ButtonStripField__UxmlTraits : public ::UnityEngine::UIElements::__BaseField_1__UxmlTraits<int32_t> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__ButtonStripField__UxmlTraits* New_ctor();

  /// @brief Method .ctor, addr 0x33841a8, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ButtonStripField__UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ButtonStripField__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ButtonStripField__UxmlTraits(__ButtonStripField__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ButtonStripField__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ButtonStripField__UxmlTraits(__ButtonStripField__UxmlTraits const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__ButtonStripField__UxmlTraits, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::ButtonStripField
// SizeInfo { instance_size: 1040, native_size: -1, calculated_instance_size: 1040, calculated_native_size: 1040, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::ButtonStripField*
class CORDL_TYPE ButtonStripField : public ::UnityEngine::UIElements::BaseField_1<int32_t> {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::__ButtonStripField__UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::__ButtonStripField__UxmlTraits;

  __declspec(property(get = get_buttons))::System::Collections::Generic::List_1<::UnityEngine::UIElements::Button*>* buttons;

  /// @brief Field m_Buttons, offset 0x408, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Buttons, put = __cordl_internal_set_m_Buttons))::System::Collections::Generic::List_1<::UnityEngine::UIElements::Button*>* m_Buttons;

  static inline ::UnityEngine::UIElements::ButtonStripField* New_ctor();

  /// @brief Method RefreshButtonsState, addr 0x3384080, size 0xe0, virtual false, abstract: false, final false
  inline void RefreshButtonsState();

  /// @brief Method SetValueWithoutNotify, addr 0x3383ff8, size 0x88, virtual true, abstract: false, final false
  inline void SetValueWithoutNotify(int32_t newValue);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Button*>*& __cordl_internal_get_m_Buttons();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::Button*>*> const& __cordl_internal_get_m_Buttons() const;

  constexpr void __cordl_internal_set_m_Buttons(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Button*>* value);

  /// @brief Method .ctor, addr 0x3383f38, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_buttons, addr 0x3383e44, size 0xf4, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Button*>* get_buttons();

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

  /// @brief Field m_Buttons, offset: 0x408, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Button*>* ___m_Buttons;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ButtonStripField, 0x410>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ButtonStripField, ___m_Buttons) == 0x408, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ButtonStripField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ButtonStripField*, "UnityEngine.UIElements", "ButtonStripField");
NEED_NO_BOX(::UnityEngine::UIElements::__ButtonStripField__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__ButtonStripField__UxmlFactory*, "UnityEngine.UIElements", "ButtonStripField/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__ButtonStripField__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__ButtonStripField__UxmlTraits*, "UnityEngine.UIElements", "ButtonStripField/UxmlTraits");
