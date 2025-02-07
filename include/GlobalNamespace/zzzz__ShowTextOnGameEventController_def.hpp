#pragma once
// IWYU pragma private; include "GlobalNamespace/ShowTextOnGameEventController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ShowTextOnGameEventController)
namespace GlobalNamespace {
class ShowTextOnGameEventController_EventTextBinding;
}
namespace GlobalNamespace {
class Signal;
}
namespace GlobalNamespace {
class TextFadeTransitions;
}
// Forward declare root types
namespace GlobalNamespace {
class ShowTextOnGameEventController;
}
namespace GlobalNamespace {
class ShowTextOnGameEventController_EventTextBinding;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ShowTextOnGameEventController);
MARK_REF_PTR_T(::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ShowTextOnGameEventController/EventTextBinding
class CORDL_TYPE ShowTextOnGameEventController_EventTextBinding : public ::System::Object {
public:
  // Declarations
  /// @brief Field _delay, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__delay, put = __cordl_internal_set__delay)) float_t _delay;

  /// @brief Field _signal, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__signal, put = __cordl_internal_set__signal)) ::UnityW<::GlobalNamespace::Signal> _signal;

  /// @brief Field _text, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text)) ::StringW _text;

  /// @brief Field _textFadeTransitions, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__textFadeTransitions, put = __cordl_internal_set__textFadeTransitions)) ::UnityW<::GlobalNamespace::TextFadeTransitions> _textFadeTransitions;

  /// @brief Method Deinit, addr 0x3beca60, size 0x90, virtual false, abstract: false, final false
  inline void Deinit();

  /// @brief Method HandleGameEvent, addr 0x3becaf8, size 0x38, virtual false, abstract: false, final false
  inline void HandleGameEvent();

  /// @brief Method Init, addr 0x3bec96c, size 0x98, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::TextFadeTransitions* textFadeTransitions);

  static inline ::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding* New_ctor();

  constexpr float_t const& __cordl_internal_get__delay() const;

  constexpr float_t& __cordl_internal_get__delay();

  constexpr ::UnityW<::GlobalNamespace::Signal> const& __cordl_internal_get__signal() const;

  constexpr ::UnityW<::GlobalNamespace::Signal>& __cordl_internal_get__signal();

  constexpr ::StringW const& __cordl_internal_get__text() const;

  constexpr ::StringW& __cordl_internal_get__text();

  constexpr ::UnityW<::GlobalNamespace::TextFadeTransitions> const& __cordl_internal_get__textFadeTransitions() const;

  constexpr ::UnityW<::GlobalNamespace::TextFadeTransitions>& __cordl_internal_get__textFadeTransitions();

  constexpr void __cordl_internal_set__delay(float_t value);

  constexpr void __cordl_internal_set__signal(::UnityW<::GlobalNamespace::Signal> value);

  constexpr void __cordl_internal_set__text(::StringW value);

  constexpr void __cordl_internal_set__textFadeTransitions(::UnityW<::GlobalNamespace::TextFadeTransitions> value);

  /// @brief Method .ctor, addr 0x3becbb8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShowTextOnGameEventController_EventTextBinding();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShowTextOnGameEventController_EventTextBinding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShowTextOnGameEventController_EventTextBinding(ShowTextOnGameEventController_EventTextBinding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShowTextOnGameEventController_EventTextBinding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShowTextOnGameEventController_EventTextBinding(ShowTextOnGameEventController_EventTextBinding const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4638 };

  /// @brief Field _signal, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Signal> ____signal;

  /// @brief Field _delay, offset: 0x18, size: 0x4, def value: None
  float_t ____delay;

  /// @brief Field _text, offset: 0x20, size: 0x8, def value: None
  ::StringW ____text;

  /// @brief Field _textFadeTransitions, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TextFadeTransitions> ____textFadeTransitions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding, ____signal) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding, ____delay) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding, ____text) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding, ____textFadeTransitions) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ShowTextOnGameEventController
class CORDL_TYPE ShowTextOnGameEventController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using EventTextBinding = ::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding;

  /// @brief Field _eventTextBindings, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__eventTextBindings,
                      put = __cordl_internal_set__eventTextBindings)) ::ArrayW<::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding*,
                                                                               ::Array<::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding*>*>
      _eventTextBindings;

  /// @brief Field _textFadeTransitions, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__textFadeTransitions, put = __cordl_internal_set__textFadeTransitions)) ::UnityW<::GlobalNamespace::TextFadeTransitions> _textFadeTransitions;

  /// @brief Method Awake, addr 0x3bec908, size 0x64, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::ShowTextOnGameEventController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3beca04, size 0x5c, virtual false, abstract: false, final false
  inline void OnDestroy();

  constexpr ::ArrayW<::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding*, ::Array<::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding*>*> const&
  __cordl_internal_get__eventTextBindings() const;

  constexpr ::ArrayW<::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding*, ::Array<::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding*>*>&
  __cordl_internal_get__eventTextBindings();

  constexpr ::UnityW<::GlobalNamespace::TextFadeTransitions> const& __cordl_internal_get__textFadeTransitions() const;

  constexpr ::UnityW<::GlobalNamespace::TextFadeTransitions>& __cordl_internal_get__textFadeTransitions();

  constexpr void __cordl_internal_set__eventTextBindings(
      ::ArrayW<::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding*, ::Array<::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding*>*> value);

  constexpr void __cordl_internal_set__textFadeTransitions(::UnityW<::GlobalNamespace::TextFadeTransitions> value);

  /// @brief Method .ctor, addr 0x3becaf0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShowTextOnGameEventController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShowTextOnGameEventController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShowTextOnGameEventController(ShowTextOnGameEventController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShowTextOnGameEventController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShowTextOnGameEventController(ShowTextOnGameEventController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4639 };

  /// @brief Field _textFadeTransitions, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TextFadeTransitions> ____textFadeTransitions;

  /// @brief Field _eventTextBindings, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding*, ::Array<::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding*>*> ____eventTextBindings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ShowTextOnGameEventController, ____textFadeTransitions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShowTextOnGameEventController, ____eventTextBindings) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ShowTextOnGameEventController, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ShowTextOnGameEventController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ShowTextOnGameEventController*, "", "ShowTextOnGameEventController");
NEED_NO_BOX(::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding*, "", "ShowTextOnGameEventController/EventTextBinding");
