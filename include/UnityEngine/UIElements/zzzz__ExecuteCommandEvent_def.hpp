#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ExecuteCommandEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__CommandEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(ExecuteCommandEvent)
namespace UnityEngine::UIElements {
class ExecuteCommandEvent___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ExecuteCommandEvent;
}
namespace UnityEngine::UIElements {
class ExecuteCommandEvent___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ExecuteCommandEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::ExecuteCommandEvent___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ExecuteCommandEvent/<>c
class CORDL_TYPE ExecuteCommandEvent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::ExecuteCommandEvent___c* __9;

  static inline ::UnityEngine::UIElements::ExecuteCommandEvent___c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x4a1f720, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ExecuteCommandEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x4a1f718, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::ExecuteCommandEvent___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::ExecuteCommandEvent___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExecuteCommandEvent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExecuteCommandEvent___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExecuteCommandEvent___c(ExecuteCommandEvent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExecuteCommandEvent___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExecuteCommandEvent___c(ExecuteCommandEvent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5801 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ExecuteCommandEvent___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.CommandEventBase`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ExecuteCommandEvent
class CORDL_TYPE ExecuteCommandEvent : public ::UnityEngine::UIElements::CommandEventBase_1<::UnityEngine::UIElements::ExecuteCommandEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::ExecuteCommandEvent___c;

  static inline ::UnityEngine::UIElements::ExecuteCommandEvent* New_ctor();

  /// @brief Method .ctor, addr 0x4a1f674, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExecuteCommandEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExecuteCommandEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExecuteCommandEvent(ExecuteCommandEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExecuteCommandEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExecuteCommandEvent(ExecuteCommandEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5802 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ExecuteCommandEvent, 0x90>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ExecuteCommandEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ExecuteCommandEvent*, "UnityEngine.UIElements", "ExecuteCommandEvent");
NEED_NO_BOX(::UnityEngine::UIElements::ExecuteCommandEvent___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ExecuteCommandEvent___c*, "UnityEngine.UIElements", "ExecuteCommandEvent/<>c");
