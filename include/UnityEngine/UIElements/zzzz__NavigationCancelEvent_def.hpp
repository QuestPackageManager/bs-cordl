#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/NavigationCancelEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(NavigationCancelEvent)
namespace UnityEngine::UIElements {
class __NavigationCancelEvent____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class NavigationCancelEvent;
}
namespace UnityEngine::UIElements {
class __NavigationCancelEvent____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::NavigationCancelEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::__NavigationCancelEvent____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::NavigationCancelEvent::<>c*
class CORDL_TYPE __NavigationCancelEvent____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::__NavigationCancelEvent____c* __9;

  static inline ::UnityEngine::UIElements::__NavigationCancelEvent____c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x49c8e7c, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::NavigationCancelEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x49c8e74, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__NavigationCancelEvent____c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::__NavigationCancelEvent____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NavigationCancelEvent____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NavigationCancelEvent____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NavigationCancelEvent____c(__NavigationCancelEvent____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NavigationCancelEvent____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NavigationCancelEvent____c(__NavigationCancelEvent____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5861 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__NavigationCancelEvent____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::NavigationCancelEvent
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::NavigationCancelEvent*
class CORDL_TYPE NavigationCancelEvent : public ::UnityEngine::UIElements::NavigationEventBase_1<::UnityEngine::UIElements::NavigationCancelEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__NavigationCancelEvent____c;

  static inline ::UnityEngine::UIElements::NavigationCancelEvent* New_ctor();

  /// @brief Method .ctor, addr 0x49c8dd0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NavigationCancelEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NavigationCancelEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NavigationCancelEvent(NavigationCancelEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NavigationCancelEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NavigationCancelEvent(NavigationCancelEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5862 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::NavigationCancelEvent, 0x90>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::NavigationCancelEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::NavigationCancelEvent*, "UnityEngine.UIElements", "NavigationCancelEvent");
NEED_NO_BOX(::UnityEngine::UIElements::__NavigationCancelEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__NavigationCancelEvent____c*, "UnityEngine.UIElements", "NavigationCancelEvent/<>c");
