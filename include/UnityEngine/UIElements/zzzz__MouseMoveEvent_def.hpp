#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MouseMoveEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(MouseMoveEvent)
namespace UnityEngine::UIElements {
class PointerMoveEvent;
}
namespace UnityEngine::UIElements {
class __MouseMoveEvent____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseMoveEvent;
}
namespace UnityEngine::UIElements {
class __MouseMoveEvent____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseMoveEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::__MouseMoveEvent____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::MouseMoveEvent::<>c*
class CORDL_TYPE __MouseMoveEvent____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::__MouseMoveEvent____c* __9;

  static inline ::UnityEngine::UIElements::__MouseMoveEvent____c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x49c63cc, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::MouseMoveEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x49c63c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__MouseMoveEvent____c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::__MouseMoveEvent____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MouseMoveEvent____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MouseMoveEvent____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MouseMoveEvent____c(__MouseMoveEvent____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MouseMoveEvent____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MouseMoveEvent____c(__MouseMoveEvent____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5832 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__MouseMoveEvent____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::MouseMoveEvent
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::MouseMoveEvent*
class CORDL_TYPE MouseMoveEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::MouseMoveEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__MouseMoveEvent____c;

  /// @brief Method GetPooled, addr 0x49c6320, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::MouseMoveEvent* GetPooled(::UnityEngine::UIElements::PointerMoveEvent* pointerEvent);

  /// @brief Method Init, addr 0x49c626c, size 0x54, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x49c62c0, size 0xc, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::MouseMoveEvent* New_ctor();

  /// @brief Method .ctor, addr 0x49c62cc, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseMoveEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MouseMoveEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseMoveEvent(MouseMoveEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseMoveEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseMoveEvent(MouseMoveEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5833 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseMoveEvent, 0xb8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MouseMoveEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseMoveEvent*, "UnityEngine.UIElements", "MouseMoveEvent");
NEED_NO_BOX(::UnityEngine::UIElements::__MouseMoveEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__MouseMoveEvent____c*, "UnityEngine.UIElements", "MouseMoveEvent/<>c");
