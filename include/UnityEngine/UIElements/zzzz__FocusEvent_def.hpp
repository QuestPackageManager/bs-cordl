#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/FocusEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(FocusEvent)
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
class __FocusEvent____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class FocusEvent;
}
namespace UnityEngine::UIElements {
class __FocusEvent____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::FocusEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::__FocusEvent____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::FocusEvent::<>c*
class CORDL_TYPE __FocusEvent____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::__FocusEvent____c* __9;

  static inline ::UnityEngine::UIElements::__FocusEvent____c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x49adcb4, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::FocusEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x49adcac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__FocusEvent____c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::__FocusEvent____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FocusEvent____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FocusEvent____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FocusEvent____c(__FocusEvent____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FocusEvent____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FocusEvent____c(__FocusEvent____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5799 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__FocusEvent____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::FocusEvent
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 161, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::FocusEvent*
class CORDL_TYPE FocusEvent : public ::UnityEngine::UIElements::FocusEventBase_1<::UnityEngine::UIElements::FocusEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__FocusEvent____c;

  static inline ::UnityEngine::UIElements::FocusEvent* New_ctor();

  /// @brief Method PreDispatch, addr 0x49adb50, size 0xb8, virtual true, abstract: false, final false
  inline void PreDispatch(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method .ctor, addr 0x49adc08, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FocusEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FocusEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FocusEvent(FocusEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FocusEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FocusEvent(FocusEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5800 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::FocusEvent, 0xa8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::FocusEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::FocusEvent*, "UnityEngine.UIElements", "FocusEvent");
NEED_NO_BOX(::UnityEngine::UIElements::__FocusEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__FocusEvent____c*, "UnityEngine.UIElements", "FocusEvent/<>c");
