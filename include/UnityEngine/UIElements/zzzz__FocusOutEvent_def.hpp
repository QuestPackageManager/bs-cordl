#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/FocusOutEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(FocusOutEvent)
namespace UnityEngine::UIElements {
class __FocusOutEvent____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class FocusOutEvent;
}
namespace UnityEngine::UIElements {
class __FocusOutEvent____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::FocusOutEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::__FocusOutEvent____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::FocusOutEvent::<>c*
class CORDL_TYPE __FocusOutEvent____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::__FocusOutEvent____c* __9;

  static inline ::UnityEngine::UIElements::__FocusOutEvent____c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x49ad548, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::FocusOutEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x49ad540, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__FocusOutEvent____c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::__FocusOutEvent____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FocusOutEvent____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FocusOutEvent____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FocusOutEvent____c(__FocusOutEvent____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FocusOutEvent____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FocusOutEvent____c(__FocusOutEvent____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5793 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__FocusOutEvent____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::FocusOutEvent
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 161, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::FocusOutEvent*
class CORDL_TYPE FocusOutEvent : public ::UnityEngine::UIElements::FocusEventBase_1<::UnityEngine::UIElements::FocusOutEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__FocusOutEvent____c;

  /// @brief Method Init, addr 0x49ad430, size 0x54, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x49ad484, size 0xc, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::FocusOutEvent* New_ctor();

  /// @brief Method .ctor, addr 0x49ad490, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FocusOutEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FocusOutEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FocusOutEvent(FocusOutEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FocusOutEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FocusOutEvent(FocusOutEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5794 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::FocusOutEvent, 0xa8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::FocusOutEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::FocusOutEvent*, "UnityEngine.UIElements", "FocusOutEvent");
NEED_NO_BOX(::UnityEngine::UIElements::__FocusOutEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__FocusOutEvent____c*, "UnityEngine.UIElements", "FocusOutEvent/<>c");
