#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PointerCaptureEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerCaptureEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(PointerCaptureEvent)
namespace UnityEngine::UIElements {
class __PointerCaptureEvent____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerCaptureEvent;
}
namespace UnityEngine::UIElements {
class __PointerCaptureEvent____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerCaptureEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::__PointerCaptureEvent____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::PointerCaptureEvent::<>c*
class CORDL_TYPE __PointerCaptureEvent____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::__PointerCaptureEvent____c* __9;

  static inline ::UnityEngine::UIElements::__PointerCaptureEvent____c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x49a8a78, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PointerCaptureEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x49a8a70, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__PointerCaptureEvent____c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::__PointerCaptureEvent____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PointerCaptureEvent____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PointerCaptureEvent____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PointerCaptureEvent____c(__PointerCaptureEvent____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PointerCaptureEvent____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PointerCaptureEvent____c(__PointerCaptureEvent____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5752 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__PointerCaptureEvent____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::PointerCaptureEvent
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 148, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::PointerCaptureEvent*
class CORDL_TYPE PointerCaptureEvent : public ::UnityEngine::UIElements::PointerCaptureEventBase_1<::UnityEngine::UIElements::PointerCaptureEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__PointerCaptureEvent____c;

  static inline ::UnityEngine::UIElements::PointerCaptureEvent* New_ctor();

  /// @brief Method .ctor, addr 0x49a89cc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerCaptureEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerCaptureEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerCaptureEvent(PointerCaptureEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerCaptureEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerCaptureEvent(PointerCaptureEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5753 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerCaptureEvent, 0x98>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerCaptureEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerCaptureEvent*, "UnityEngine.UIElements", "PointerCaptureEvent");
NEED_NO_BOX(::UnityEngine::UIElements::__PointerCaptureEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__PointerCaptureEvent____c*, "UnityEngine.UIElements", "PointerCaptureEvent/<>c");
