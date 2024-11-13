#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MouseCaptureEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__MouseCaptureEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(MouseCaptureEvent)
namespace UnityEngine::UIElements {
class __MouseCaptureEvent____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseCaptureEvent;
}
namespace UnityEngine::UIElements {
class __MouseCaptureEvent____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseCaptureEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::__MouseCaptureEvent____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::MouseCaptureEvent::<>c*
class CORDL_TYPE __MouseCaptureEvent____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::__MouseCaptureEvent____c* __9;

  static inline ::UnityEngine::UIElements::__MouseCaptureEvent____c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x49bd550, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::MouseCaptureEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x49bd548, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__MouseCaptureEvent____c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::__MouseCaptureEvent____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MouseCaptureEvent____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MouseCaptureEvent____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MouseCaptureEvent____c(__MouseCaptureEvent____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MouseCaptureEvent____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MouseCaptureEvent____c(__MouseCaptureEvent____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5762 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__MouseCaptureEvent____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::MouseCaptureEvent
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 148, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::MouseCaptureEvent*
class CORDL_TYPE MouseCaptureEvent : public ::UnityEngine::UIElements::MouseCaptureEventBase_1<::UnityEngine::UIElements::MouseCaptureEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__MouseCaptureEvent____c;

  static inline ::UnityEngine::UIElements::MouseCaptureEvent* New_ctor();

  /// @brief Method .ctor, addr 0x49bd4a4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseCaptureEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MouseCaptureEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseCaptureEvent(MouseCaptureEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseCaptureEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseCaptureEvent(MouseCaptureEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5763 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseCaptureEvent, 0x98>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MouseCaptureEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseCaptureEvent*, "UnityEngine.UIElements", "MouseCaptureEvent");
NEED_NO_BOX(::UnityEngine::UIElements::__MouseCaptureEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__MouseCaptureEvent____c*, "UnityEngine.UIElements", "MouseCaptureEvent/<>c");
