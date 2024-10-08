#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MouseCaptureOutEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__MouseCaptureEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(MouseCaptureOutEvent)
namespace UnityEngine::UIElements {
class __MouseCaptureOutEvent____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseCaptureOutEvent;
}
namespace UnityEngine::UIElements {
class __MouseCaptureOutEvent____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseCaptureOutEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::__MouseCaptureOutEvent____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::MouseCaptureOutEvent::<>c*
class CORDL_TYPE __MouseCaptureOutEvent____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::__MouseCaptureOutEvent____c* __9;

  static inline ::UnityEngine::UIElements::__MouseCaptureOutEvent____c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x49a8c58, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::MouseCaptureOutEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x49a8c50, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__MouseCaptureOutEvent____c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::__MouseCaptureOutEvent____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MouseCaptureOutEvent____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MouseCaptureOutEvent____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MouseCaptureOutEvent____c(__MouseCaptureOutEvent____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MouseCaptureOutEvent____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MouseCaptureOutEvent____c(__MouseCaptureOutEvent____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5755 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__MouseCaptureOutEvent____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::MouseCaptureOutEvent
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 148, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::MouseCaptureOutEvent*
class CORDL_TYPE MouseCaptureOutEvent : public ::UnityEngine::UIElements::MouseCaptureEventBase_1<::UnityEngine::UIElements::MouseCaptureOutEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__MouseCaptureOutEvent____c;

  static inline ::UnityEngine::UIElements::MouseCaptureOutEvent* New_ctor();

  /// @brief Method .ctor, addr 0x49a8bac, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseCaptureOutEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MouseCaptureOutEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseCaptureOutEvent(MouseCaptureOutEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseCaptureOutEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseCaptureOutEvent(MouseCaptureOutEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5756 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseCaptureOutEvent, 0x98>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MouseCaptureOutEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseCaptureOutEvent*, "UnityEngine.UIElements", "MouseCaptureOutEvent");
NEED_NO_BOX(::UnityEngine::UIElements::__MouseCaptureOutEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__MouseCaptureOutEvent____c*, "UnityEngine.UIElements", "MouseCaptureOutEvent/<>c");
