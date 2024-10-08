#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TransitionCancelEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__TransitionEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(TransitionCancelEvent)
namespace UnityEngine::UIElements {
class __TransitionCancelEvent____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TransitionCancelEvent;
}
namespace UnityEngine::UIElements {
class __TransitionCancelEvent____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TransitionCancelEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::__TransitionCancelEvent____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::TransitionCancelEvent::<>c*
class CORDL_TYPE __TransitionCancelEvent____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::__TransitionCancelEvent____c* __9;

  static inline ::UnityEngine::UIElements::__TransitionCancelEvent____c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x49ba338, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TransitionCancelEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x49ba330, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__TransitionCancelEvent____c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::__TransitionCancelEvent____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TransitionCancelEvent____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TransitionCancelEvent____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TransitionCancelEvent____c(__TransitionCancelEvent____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TransitionCancelEvent____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TransitionCancelEvent____c(__TransitionCancelEvent____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5911 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__TransitionCancelEvent____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::TransitionCancelEvent
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::TransitionCancelEvent*
class CORDL_TYPE TransitionCancelEvent : public ::UnityEngine::UIElements::TransitionEventBase_1<::UnityEngine::UIElements::TransitionCancelEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__TransitionCancelEvent____c;

  static inline ::UnityEngine::UIElements::TransitionCancelEvent* New_ctor();

  /// @brief Method .ctor, addr 0x49ba28c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransitionCancelEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TransitionCancelEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TransitionCancelEvent(TransitionCancelEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TransitionCancelEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TransitionCancelEvent(TransitionCancelEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5912 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TransitionCancelEvent, 0x98>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TransitionCancelEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TransitionCancelEvent*, "UnityEngine.UIElements", "TransitionCancelEvent");
NEED_NO_BOX(::UnityEngine::UIElements::__TransitionCancelEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__TransitionCancelEvent____c*, "UnityEngine.UIElements", "TransitionCancelEvent/<>c");
