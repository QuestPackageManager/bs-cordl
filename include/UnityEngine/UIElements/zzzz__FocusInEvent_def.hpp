#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/FocusInEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(FocusInEvent)
namespace UnityEngine::UIElements {
class FocusInEvent___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class FocusInEvent;
}
namespace UnityEngine::UIElements {
class FocusInEvent___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::FocusInEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::FocusInEvent___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.FocusInEvent/<>c
class CORDL_TYPE FocusInEvent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::FocusInEvent___c* __9;

  static inline ::UnityEngine::UIElements::FocusInEvent___c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x4a35930, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::FocusInEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x4a35928, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::FocusInEvent___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::FocusInEvent___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FocusInEvent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FocusInEvent___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FocusInEvent___c(FocusInEvent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FocusInEvent___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FocusInEvent___c(FocusInEvent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5832 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::FocusInEvent___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.FocusEventBase`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.FocusInEvent
class CORDL_TYPE FocusInEvent : public ::UnityEngine::UIElements::FocusEventBase_1<::UnityEngine::UIElements::FocusInEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::FocusInEvent___c;

  /// @brief Method Init, addr 0x4a35818, size 0x54, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x4a3586c, size 0xc, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::FocusInEvent* New_ctor();

  /// @brief Method .ctor, addr 0x4a35878, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FocusInEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FocusInEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FocusInEvent(FocusInEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FocusInEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FocusInEvent(FocusInEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5833 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::FocusInEvent, 0xa8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::FocusInEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::FocusInEvent*, "UnityEngine.UIElements", "FocusInEvent");
NEED_NO_BOX(::UnityEngine::UIElements::FocusInEvent___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::FocusInEvent___c*, "UnityEngine.UIElements", "FocusInEvent/<>c");
