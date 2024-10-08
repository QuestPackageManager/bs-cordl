#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TransitionEndEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__TransitionEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(TransitionEndEvent)
namespace UnityEngine::UIElements {
class __TransitionEndEvent____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TransitionEndEvent;
}
namespace UnityEngine::UIElements {
class __TransitionEndEvent____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TransitionEndEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::__TransitionEndEvent____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::TransitionEndEvent::<>c*
class CORDL_TYPE __TransitionEndEvent____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::__TransitionEndEvent____c* __9;

  static inline ::UnityEngine::UIElements::__TransitionEndEvent____c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x49ba158, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TransitionEndEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x49ba150, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__TransitionEndEvent____c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::__TransitionEndEvent____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TransitionEndEvent____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TransitionEndEvent____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TransitionEndEvent____c(__TransitionEndEvent____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TransitionEndEvent____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TransitionEndEvent____c(__TransitionEndEvent____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5909 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__TransitionEndEvent____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::TransitionEndEvent
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::TransitionEndEvent*
class CORDL_TYPE TransitionEndEvent : public ::UnityEngine::UIElements::TransitionEventBase_1<::UnityEngine::UIElements::TransitionEndEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__TransitionEndEvent____c;

  static inline ::UnityEngine::UIElements::TransitionEndEvent* New_ctor();

  /// @brief Method .ctor, addr 0x49ba0ac, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransitionEndEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TransitionEndEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TransitionEndEvent(TransitionEndEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TransitionEndEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TransitionEndEvent(TransitionEndEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5910 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TransitionEndEvent, 0x98>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TransitionEndEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TransitionEndEvent*, "UnityEngine.UIElements", "TransitionEndEvent");
NEED_NO_BOX(::UnityEngine::UIElements::__TransitionEndEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__TransitionEndEvent____c*, "UnityEngine.UIElements", "TransitionEndEvent/<>c");
