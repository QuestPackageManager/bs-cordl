#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TransitionStartEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__TransitionEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(TransitionStartEvent)
namespace UnityEngine::UIElements {
class __TransitionStartEvent____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TransitionStartEvent;
}
namespace UnityEngine::UIElements {
class __TransitionStartEvent____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TransitionStartEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::__TransitionStartEvent____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::TransitionStartEvent::<>c*
class CORDL_TYPE __TransitionStartEvent____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::__TransitionStartEvent____c* __9;

  static inline ::UnityEngine::UIElements::__TransitionStartEvent____c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x49b9f78, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TransitionStartEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x49b9f70, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__TransitionStartEvent____c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::__TransitionStartEvent____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TransitionStartEvent____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TransitionStartEvent____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TransitionStartEvent____c(__TransitionStartEvent____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TransitionStartEvent____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TransitionStartEvent____c(__TransitionStartEvent____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5907 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__TransitionStartEvent____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::TransitionStartEvent
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::TransitionStartEvent*
class CORDL_TYPE TransitionStartEvent : public ::UnityEngine::UIElements::TransitionEventBase_1<::UnityEngine::UIElements::TransitionStartEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__TransitionStartEvent____c;

  static inline ::UnityEngine::UIElements::TransitionStartEvent* New_ctor();

  /// @brief Method .ctor, addr 0x49b9ecc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransitionStartEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TransitionStartEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TransitionStartEvent(TransitionStartEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TransitionStartEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TransitionStartEvent(TransitionStartEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5908 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TransitionStartEvent, 0x98>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TransitionStartEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TransitionStartEvent*, "UnityEngine.UIElements", "TransitionStartEvent");
NEED_NO_BOX(::UnityEngine::UIElements::__TransitionStartEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__TransitionStartEvent____c*, "UnityEngine.UIElements", "TransitionStartEvent/<>c");
