#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PointerCaptureOutEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerCaptureEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(PointerCaptureOutEvent)
namespace UnityEngine::UIElements {
class __PointerCaptureOutEvent____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerCaptureOutEvent;
}
namespace UnityEngine::UIElements {
class __PointerCaptureOutEvent____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerCaptureOutEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::__PointerCaptureOutEvent____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::PointerCaptureOutEvent::<>c*
class CORDL_TYPE __PointerCaptureOutEvent____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::__PointerCaptureOutEvent____c* __9;

  static inline ::UnityEngine::UIElements::__PointerCaptureOutEvent____c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x49a8898, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PointerCaptureOutEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x49a8890, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__PointerCaptureOutEvent____c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::__PointerCaptureOutEvent____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PointerCaptureOutEvent____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PointerCaptureOutEvent____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PointerCaptureOutEvent____c(__PointerCaptureOutEvent____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PointerCaptureOutEvent____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PointerCaptureOutEvent____c(__PointerCaptureOutEvent____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5750 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__PointerCaptureOutEvent____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::PointerCaptureOutEvent
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 148, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::PointerCaptureOutEvent*
class CORDL_TYPE PointerCaptureOutEvent : public ::UnityEngine::UIElements::PointerCaptureEventBase_1<::UnityEngine::UIElements::PointerCaptureOutEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__PointerCaptureOutEvent____c;

  static inline ::UnityEngine::UIElements::PointerCaptureOutEvent* New_ctor();

  /// @brief Method .ctor, addr 0x49a87ec, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerCaptureOutEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerCaptureOutEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerCaptureOutEvent(PointerCaptureOutEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerCaptureOutEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerCaptureOutEvent(PointerCaptureOutEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5751 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerCaptureOutEvent, 0x98>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerCaptureOutEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerCaptureOutEvent*, "UnityEngine.UIElements", "PointerCaptureOutEvent");
NEED_NO_BOX(::UnityEngine::UIElements::__PointerCaptureOutEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__PointerCaptureOutEvent____c*, "UnityEngine.UIElements", "PointerCaptureOutEvent/<>c");
