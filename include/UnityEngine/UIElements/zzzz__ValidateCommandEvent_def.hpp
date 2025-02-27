#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ValidateCommandEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__CommandEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(ValidateCommandEvent)
namespace UnityEngine::UIElements {
class ValidateCommandEvent___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ValidateCommandEvent;
}
namespace UnityEngine::UIElements {
class ValidateCommandEvent___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ValidateCommandEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::ValidateCommandEvent___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ValidateCommandEvent/<>c
class CORDL_TYPE ValidateCommandEvent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::ValidateCommandEvent___c* __9;

  static inline ::UnityEngine::UIElements::ValidateCommandEvent___c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x4a31960, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ValidateCommandEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x4a31958, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::ValidateCommandEvent___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::ValidateCommandEvent___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ValidateCommandEvent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ValidateCommandEvent___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ValidateCommandEvent___c(ValidateCommandEvent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ValidateCommandEvent___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ValidateCommandEvent___c(ValidateCommandEvent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5799 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ValidateCommandEvent___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.CommandEventBase`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ValidateCommandEvent
class CORDL_TYPE ValidateCommandEvent : public ::UnityEngine::UIElements::CommandEventBase_1<::UnityEngine::UIElements::ValidateCommandEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::ValidateCommandEvent___c;

  static inline ::UnityEngine::UIElements::ValidateCommandEvent* New_ctor();

  /// @brief Method .ctor, addr 0x4a318b4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ValidateCommandEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ValidateCommandEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ValidateCommandEvent(ValidateCommandEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ValidateCommandEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ValidateCommandEvent(ValidateCommandEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5800 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ValidateCommandEvent, 0x90>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ValidateCommandEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ValidateCommandEvent*, "UnityEngine.UIElements", "ValidateCommandEvent");
NEED_NO_BOX(::UnityEngine::UIElements::ValidateCommandEvent___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ValidateCommandEvent___c*, "UnityEngine.UIElements", "ValidateCommandEvent/<>c");
