#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MouseDownEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(MouseDownEvent)
namespace UnityEngine::UIElements {
class IPointerEvent;
}
namespace UnityEngine::UIElements {
class PointerDownEvent;
}
namespace UnityEngine::UIElements {
class PointerMoveEvent;
}
namespace UnityEngine::UIElements {
class __MouseDownEvent____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseDownEvent;
}
namespace UnityEngine::UIElements {
class __MouseDownEvent____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseDownEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::__MouseDownEvent____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::MouseDownEvent::<>c*
class CORDL_TYPE __MouseDownEvent____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::__MouseDownEvent____c* __9;

  static inline ::UnityEngine::UIElements::__MouseDownEvent____c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x49b1470, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::MouseDownEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x49b1468, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__MouseDownEvent____c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::__MouseDownEvent____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MouseDownEvent____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MouseDownEvent____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MouseDownEvent____c(__MouseDownEvent____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MouseDownEvent____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MouseDownEvent____c(__MouseDownEvent____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5823 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__MouseDownEvent____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::MouseDownEvent
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::MouseDownEvent*
class CORDL_TYPE MouseDownEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::MouseDownEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__MouseDownEvent____c;

  /// @brief Method GetPooled, addr 0x49b1364, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::MouseDownEvent* GetPooled(::UnityEngine::UIElements::PointerDownEvent* pointerEvent);

  /// @brief Method GetPooled, addr 0x49b13b8, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::MouseDownEvent* GetPooled(::UnityEngine::UIElements::PointerMoveEvent* pointerEvent);

  /// @brief Method Init, addr 0x49b1048, size 0x54, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x49b109c, size 0xc, virtual false, abstract: false, final false
  inline void LocalInit();

  /// @brief Method MakeFromPointerEvent, addr 0x49b10fc, size 0x18c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::MouseDownEvent* MakeFromPointerEvent(::UnityEngine::UIElements::IPointerEvent* pointerEvent);

  static inline ::UnityEngine::UIElements::MouseDownEvent* New_ctor();

  /// @brief Method .ctor, addr 0x49b10a8, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseDownEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MouseDownEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseDownEvent(MouseDownEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseDownEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseDownEvent(MouseDownEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5824 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseDownEvent, 0xb8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MouseDownEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseDownEvent*, "UnityEngine.UIElements", "MouseDownEvent");
NEED_NO_BOX(::UnityEngine::UIElements::__MouseDownEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__MouseDownEvent____c*, "UnityEngine.UIElements", "MouseDownEvent/<>c");
