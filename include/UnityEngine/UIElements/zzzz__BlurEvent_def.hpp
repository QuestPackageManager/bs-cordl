#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BlurEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(BlurEvent)
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
class __BlurEvent____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class BlurEvent;
}
namespace UnityEngine::UIElements {
class __BlurEvent____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::BlurEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::__BlurEvent____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::BlurEvent::<>c*
class CORDL_TYPE __BlurEvent____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::__BlurEvent____c* __9;

  static inline ::UnityEngine::UIElements::__BlurEvent____c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x49ad7d0, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BlurEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x49ad7c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__BlurEvent____c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::__BlurEvent____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BlurEvent____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BlurEvent____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BlurEvent____c(__BlurEvent____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BlurEvent____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BlurEvent____c(__BlurEvent____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5795 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__BlurEvent____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::BlurEvent
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 161, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::BlurEvent*
class CORDL_TYPE BlurEvent : public ::UnityEngine::UIElements::FocusEventBase_1<::UnityEngine::UIElements::BlurEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__BlurEvent____c;

  static inline ::UnityEngine::UIElements::BlurEvent* New_ctor();

  /// @brief Method PreDispatch, addr 0x49ad67c, size 0x8c, virtual true, abstract: false, final false
  inline void PreDispatch(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method .ctor, addr 0x49ad724, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BlurEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BlurEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BlurEvent(BlurEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BlurEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BlurEvent(BlurEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5796 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BlurEvent, 0xa8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::BlurEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BlurEvent*, "UnityEngine.UIElements", "BlurEvent");
NEED_NO_BOX(::UnityEngine::UIElements::__BlurEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__BlurEvent____c*, "UnityEngine.UIElements", "BlurEvent/<>c");
