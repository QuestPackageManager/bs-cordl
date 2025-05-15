#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiClickButtonController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultiClickButtonController)
namespace HMUI {
class ButtonBinder;
}
namespace System {
class Action;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiClickButtonController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiClickButtonController);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiClickButtonController
class CORDL_TYPE MultiClickButtonController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _button, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__button, put = __cordl_internal_set__button)) ::UnityW<::UnityEngine::UI::Button> _button;

  /// @brief Field _buttonBinder, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonBinder, put = __cordl_internal_set__buttonBinder)) ::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Field _currentNumberOfClicks, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__currentNumberOfClicks, put = __cordl_internal_set__currentNumberOfClicks)) int32_t _currentNumberOfClicks;

  /// @brief Field _numberOfClicksRequired, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__numberOfClicksRequired, put = __cordl_internal_set__numberOfClicksRequired)) int32_t _numberOfClicksRequired;

  /// @brief Field wasTriggeredEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_wasTriggeredEvent, put = __cordl_internal_set_wasTriggeredEvent)) ::System::Action* wasTriggeredEvent;

  /// @brief Method HandleButtonClicked, addr 0x3bfff10, size 0x38, virtual false, abstract: false, final false
  inline void HandleButtonClicked();

  static inline ::GlobalNamespace::MultiClickButtonController* New_ctor();

  /// @brief Method OnDisable, addr 0x3bffef4, size 0x1c, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x3bffe5c, size 0x98, virtual false, abstract: false, final false
  inline void OnEnable();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__button() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__button();

  constexpr ::HMUI::ButtonBinder* const& __cordl_internal_get__buttonBinder() const;

  constexpr ::HMUI::ButtonBinder*& __cordl_internal_get__buttonBinder();

  constexpr int32_t const& __cordl_internal_get__currentNumberOfClicks() const;

  constexpr int32_t& __cordl_internal_get__currentNumberOfClicks();

  constexpr int32_t const& __cordl_internal_get__numberOfClicksRequired() const;

  constexpr int32_t& __cordl_internal_get__numberOfClicksRequired();

  constexpr ::System::Action* const& __cordl_internal_get_wasTriggeredEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_wasTriggeredEvent();

  constexpr void __cordl_internal_set__button(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value);

  constexpr void __cordl_internal_set__currentNumberOfClicks(int32_t value);

  constexpr void __cordl_internal_set__numberOfClicksRequired(int32_t value);

  constexpr void __cordl_internal_set_wasTriggeredEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x3bfff48, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_wasTriggeredEvent, addr 0x3bffd24, size 0x9c, virtual false, abstract: false, final false
  inline void add_wasTriggeredEvent(::System::Action* value);

  /// @brief Method remove_wasTriggeredEvent, addr 0x3bffdc0, size 0x9c, virtual false, abstract: false, final false
  inline void remove_wasTriggeredEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiClickButtonController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiClickButtonController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiClickButtonController(MultiClickButtonController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiClickButtonController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiClickButtonController(MultiClickButtonController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4763 };

  /// @brief Field _button, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____button;

  /// @brief Field _numberOfClicksRequired, offset: 0x28, size: 0x4, def value: None
  int32_t ____numberOfClicksRequired;

  /// @brief Field wasTriggeredEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action* ___wasTriggeredEvent;

  /// @brief Field _currentNumberOfClicks, offset: 0x38, size: 0x4, def value: None
  int32_t ____currentNumberOfClicks;

  /// @brief Field _buttonBinder, offset: 0x40, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiClickButtonController, ____button) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiClickButtonController, ____numberOfClicksRequired) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiClickButtonController, ___wasTriggeredEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiClickButtonController, ____currentNumberOfClicks) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiClickButtonController, ____buttonBinder) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiClickButtonController, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiClickButtonController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiClickButtonController*, "", "MultiClickButtonController");
