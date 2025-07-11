#pragma once
// IWYU pragma private; include "GlobalNamespace/SignalListener.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SignalListener)
namespace GlobalNamespace {
class Signal;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class SignalListener;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SignalListener);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SignalListener
class CORDL_TYPE SignalListener : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _signal, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__signal, put = __cordl_internal_set__signal)) ::UnityW<::GlobalNamespace::Signal> _signal;

  /// @brief Field _unityEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__unityEvent, put = __cordl_internal_set__unityEvent)) ::UnityEngine::Events::UnityEvent* _unityEvent;

  /// @brief Method HandleEvent, addr 0x39c4804, size 0x1c, virtual false, abstract: false, final false
  inline void HandleEvent();

  static inline ::GlobalNamespace::SignalListener* New_ctor();

  /// @brief Method OnDisable, addr 0x39c4778, size 0x8c, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x39c46e0, size 0x98, virtual false, abstract: false, final false
  inline void OnEnable();

  constexpr ::UnityW<::GlobalNamespace::Signal> const& __cordl_internal_get__signal() const;

  constexpr ::UnityW<::GlobalNamespace::Signal>& __cordl_internal_get__signal();

  constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__unityEvent() const;

  constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__unityEvent();

  constexpr void __cordl_internal_set__signal(::UnityW<::GlobalNamespace::Signal> value);

  constexpr void __cordl_internal_set__unityEvent(::UnityEngine::Events::UnityEvent* value);

  /// @brief Method .ctor, addr 0x39c4820, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignalListener();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignalListener", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignalListener(SignalListener&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignalListener", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignalListener(SignalListener const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16451 };

  /// @brief Field _signal, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Signal> ____signal;

  /// @brief Field _unityEvent, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Events::UnityEvent* ____unityEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SignalListener, ____signal) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SignalListener, ____unityEvent) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SignalListener, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SignalListener);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SignalListener*, "", "SignalListener");
