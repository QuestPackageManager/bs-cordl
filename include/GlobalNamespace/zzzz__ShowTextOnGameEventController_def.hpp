#pragma once
// IWYU pragma private; include "GlobalNamespace/ShowTextOnGameEventController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ShowTextOnGameEventController)
namespace GlobalNamespace {
class Signal;
}
namespace GlobalNamespace {
class TextFadeTransitions;
}
namespace GlobalNamespace {
class __ShowTextOnGameEventController__EventTextBinding;
}
// Forward declare root types
namespace GlobalNamespace {
class ShowTextOnGameEventController;
}
namespace GlobalNamespace {
class __ShowTextOnGameEventController__EventTextBinding;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ShowTextOnGameEventController);
MARK_REF_PTR_T(::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding);
// Type: ::EventTextBinding
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ShowTextOnGameEventController::EventTextBinding*
class CORDL_TYPE __ShowTextOnGameEventController__EventTextBinding : public ::System::Object {
public:
  // Declarations
  /// @brief Field _signal, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__signal, put = __cordl_internal_set__signal))::UnityW<::GlobalNamespace::Signal> _signal;

  /// @brief Field _text, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text))::StringW _text;

  /// @brief Field _textFadeTransitions, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__textFadeTransitions, put = __cordl_internal_set__textFadeTransitions))::UnityW<::GlobalNamespace::TextFadeTransitions> _textFadeTransitions;

  /// @brief Method Deinit, addr 0x274f894, size 0x8c, virtual false, abstract: false, final false
  inline void Deinit();

  /// @brief Method HandleGameEvent, addr 0x274f928, size 0x2c, virtual false, abstract: false, final false
  inline void HandleGameEvent();

  /// @brief Method Init, addr 0x274f79c, size 0x9c, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::TextFadeTransitions* textFadeTransitions);

  static inline ::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::Signal> const& __cordl_internal_get__signal() const;

  constexpr ::UnityW<::GlobalNamespace::Signal>& __cordl_internal_get__signal();

  constexpr ::StringW const& __cordl_internal_get__text() const;

  constexpr ::StringW& __cordl_internal_get__text();

  constexpr ::UnityW<::GlobalNamespace::TextFadeTransitions> const& __cordl_internal_get__textFadeTransitions() const;

  constexpr ::UnityW<::GlobalNamespace::TextFadeTransitions>& __cordl_internal_get__textFadeTransitions();

  constexpr void __cordl_internal_set__signal(::UnityW<::GlobalNamespace::Signal> value);

  constexpr void __cordl_internal_set__text(::StringW value);

  constexpr void __cordl_internal_set__textFadeTransitions(::UnityW<::GlobalNamespace::TextFadeTransitions> value);

  /// @brief Method .ctor, addr 0x274f9c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ShowTextOnGameEventController__EventTextBinding();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ShowTextOnGameEventController__EventTextBinding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ShowTextOnGameEventController__EventTextBinding(__ShowTextOnGameEventController__EventTextBinding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ShowTextOnGameEventController__EventTextBinding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ShowTextOnGameEventController__EventTextBinding(__ShowTextOnGameEventController__EventTextBinding const&) = delete;

  /// @brief Field _signal, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Signal> ____signal;

  /// @brief Field _text, offset: 0x18, size: 0x8, def value: None
  ::StringW ____text;

  /// @brief Field _textFadeTransitions, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TextFadeTransitions> ____textFadeTransitions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding, ____signal) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding, ____text) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding, ____textFadeTransitions) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ShowTextOnGameEventController
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ShowTextOnGameEventController*
class CORDL_TYPE ShowTextOnGameEventController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using EventTextBinding = ::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding;

  /// @brief Field _eventTextBindings, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__eventTextBindings,
                      put = __cordl_internal_set__eventTextBindings))::ArrayW<::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding*,
                                                                              ::Array<::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding*>*> _eventTextBindings;

  /// @brief Field _textFadeTransitions, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__textFadeTransitions, put = __cordl_internal_set__textFadeTransitions))::UnityW<::GlobalNamespace::TextFadeTransitions> _textFadeTransitions;

  /// @brief Method Awake, addr 0x274f738, size 0x64, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::ShowTextOnGameEventController* New_ctor();

  /// @brief Method OnDestroy, addr 0x274f838, size 0x5c, virtual false, abstract: false, final false
  inline void OnDestroy();

  constexpr ::ArrayW<::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding*, ::Array<::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding*>*> const&
  __cordl_internal_get__eventTextBindings() const;

  constexpr ::ArrayW<::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding*, ::Array<::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding*>*>&
  __cordl_internal_get__eventTextBindings();

  constexpr ::UnityW<::GlobalNamespace::TextFadeTransitions> const& __cordl_internal_get__textFadeTransitions() const;

  constexpr ::UnityW<::GlobalNamespace::TextFadeTransitions>& __cordl_internal_get__textFadeTransitions();

  constexpr void __cordl_internal_set__eventTextBindings(
      ::ArrayW<::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding*, ::Array<::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding*>*> value);

  constexpr void __cordl_internal_set__textFadeTransitions(::UnityW<::GlobalNamespace::TextFadeTransitions> value);

  /// @brief Method .ctor, addr 0x274f920, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _textFadeTransitions, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TextFadeTransitions> ____textFadeTransitions;

  /// @brief Field _eventTextBindings, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding*, ::Array<::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding*>*> ____eventTextBindings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ShowTextOnGameEventController, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ShowTextOnGameEventController, ____textFadeTransitions) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShowTextOnGameEventController, ____eventTextBindings) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ShowTextOnGameEventController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ShowTextOnGameEventController*, "", "ShowTextOnGameEventController");
NEED_NO_BOX(::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding*, "", "ShowTextOnGameEventController/EventTextBinding");
