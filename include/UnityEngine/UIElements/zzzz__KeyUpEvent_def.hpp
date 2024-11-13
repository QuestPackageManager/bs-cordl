#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/KeyUpEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__KeyboardEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(KeyUpEvent)
namespace UnityEngine::UIElements {
class __KeyUpEvent____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class KeyUpEvent;
}
namespace UnityEngine::UIElements {
class __KeyUpEvent____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::KeyUpEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::__KeyUpEvent____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::KeyUpEvent::<>c*
class CORDL_TYPE __KeyUpEvent____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::__KeyUpEvent____c* __9;

  static inline ::UnityEngine::UIElements::__KeyUpEvent____c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x49c43b4, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::KeyUpEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x49c43ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__KeyUpEvent____c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::__KeyUpEvent____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __KeyUpEvent____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__KeyUpEvent____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __KeyUpEvent____c(__KeyUpEvent____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__KeyUpEvent____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __KeyUpEvent____c(__KeyUpEvent____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5818 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__KeyUpEvent____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::KeyUpEvent
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::KeyUpEvent*
class CORDL_TYPE KeyUpEvent : public ::UnityEngine::UIElements::KeyboardEventBase_1<::UnityEngine::UIElements::KeyUpEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__KeyUpEvent____c;

  static inline ::UnityEngine::UIElements::KeyUpEvent* New_ctor();

  /// @brief Method .ctor, addr 0x49c4308, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyUpEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyUpEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyUpEvent(KeyUpEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyUpEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyUpEvent(KeyUpEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5819 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::KeyUpEvent, 0x90>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::KeyUpEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::KeyUpEvent*, "UnityEngine.UIElements", "KeyUpEvent");
NEED_NO_BOX(::UnityEngine::UIElements::__KeyUpEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__KeyUpEvent____c*, "UnityEngine.UIElements", "KeyUpEvent/<>c");
