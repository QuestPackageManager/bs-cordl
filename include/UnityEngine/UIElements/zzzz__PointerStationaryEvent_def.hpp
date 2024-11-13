#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PointerStationaryEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(PointerStationaryEvent)
namespace UnityEngine::UIElements {
class __PointerStationaryEvent____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerStationaryEvent;
}
namespace UnityEngine::UIElements {
class __PointerStationaryEvent____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerStationaryEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::__PointerStationaryEvent____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::PointerStationaryEvent::<>c*
class CORDL_TYPE __PointerStationaryEvent____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::__PointerStationaryEvent____c* __9;

  static inline ::UnityEngine::UIElements::__PointerStationaryEvent____c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x49cbfb8, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PointerStationaryEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x49cbfb0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__PointerStationaryEvent____c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::__PointerStationaryEvent____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PointerStationaryEvent____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PointerStationaryEvent____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PointerStationaryEvent____c(__PointerStationaryEvent____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PointerStationaryEvent____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PointerStationaryEvent____c(__PointerStationaryEvent____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5885 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__PointerStationaryEvent____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::PointerStationaryEvent
// SizeInfo { instance_size: 264, native_size: -1, calculated_instance_size: 264, calculated_native_size: 262, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::PointerStationaryEvent*
class CORDL_TYPE PointerStationaryEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerStationaryEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__PointerStationaryEvent____c;

  /// @brief Method Init, addr 0x49cbdb0, size 0x50, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x49cbe00, size 0x104, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::PointerStationaryEvent* New_ctor();

  /// @brief Method .ctor, addr 0x49cbf04, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerStationaryEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerStationaryEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerStationaryEvent(PointerStationaryEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerStationaryEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerStationaryEvent(PointerStationaryEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5886 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerStationaryEvent, 0x108>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerStationaryEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerStationaryEvent*, "UnityEngine.UIElements", "PointerStationaryEvent");
NEED_NO_BOX(::UnityEngine::UIElements::__PointerStationaryEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__PointerStationaryEvent____c*, "UnityEngine.UIElements", "PointerStationaryEvent/<>c");
