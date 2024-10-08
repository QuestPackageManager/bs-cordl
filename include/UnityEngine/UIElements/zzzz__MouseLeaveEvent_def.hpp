#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MouseLeaveEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(MouseLeaveEvent)
namespace UnityEngine::UIElements {
class __MouseLeaveEvent____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseLeaveEvent;
}
namespace UnityEngine::UIElements {
class __MouseLeaveEvent____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseLeaveEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::__MouseLeaveEvent____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::MouseLeaveEvent::<>c*
class CORDL_TYPE __MouseLeaveEvent____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::__MouseLeaveEvent____c* __9;

  static inline ::UnityEngine::UIElements::__MouseLeaveEvent____c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x49b2798, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::MouseLeaveEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x49b2790, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__MouseLeaveEvent____c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::__MouseLeaveEvent____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MouseLeaveEvent____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MouseLeaveEvent____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MouseLeaveEvent____c(__MouseLeaveEvent____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MouseLeaveEvent____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MouseLeaveEvent____c(__MouseLeaveEvent____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5835 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__MouseLeaveEvent____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::MouseLeaveEvent
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::MouseLeaveEvent*
class CORDL_TYPE MouseLeaveEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::MouseLeaveEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__MouseLeaveEvent____c;

  /// @brief Method Init, addr 0x49b2680, size 0x54, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x49b26d4, size 0xc, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::MouseLeaveEvent* New_ctor();

  /// @brief Method .ctor, addr 0x49b26e0, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseLeaveEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MouseLeaveEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseLeaveEvent(MouseLeaveEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseLeaveEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseLeaveEvent(MouseLeaveEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5836 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseLeaveEvent, 0xb8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MouseLeaveEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseLeaveEvent*, "UnityEngine.UIElements", "MouseLeaveEvent");
NEED_NO_BOX(::UnityEngine::UIElements::__MouseLeaveEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__MouseLeaveEvent____c*, "UnityEngine.UIElements", "MouseLeaveEvent/<>c");
