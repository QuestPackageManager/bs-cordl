#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputEventListener.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IObservable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(InputEventListener)
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class IDisposable;
}
namespace System {
template <typename T> class IObserver_1;
}
namespace UnityEngine::InputSystem::LowLevel {
class InputEventListener_DisposableObserver;
}
namespace UnityEngine::InputSystem::LowLevel {
class InputEventListener_ObserverState;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class InputEventListener_DisposableObserver;
}
namespace UnityEngine::InputSystem::LowLevel {
class InputEventListener_ObserverState;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventListener;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::InputEventListener_DisposableObserver);
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::InputEventListener_ObserverState);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::InputEventListener);
// Dependencies System.Object, UnityEngine.InputSystem.Utilities.InlinedArray`1<TValue>
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// CS Name: UnityEngine.InputSystem.LowLevel.InputEventListener/ObserverState
class CORDL_TYPE InputEventListener_ObserverState : public ::System::Object {
public:
  // Declarations
  /// @brief Field observers, offset 0x10, size 0x18
  __declspec(property(get = __cordl_internal_get_observers,
                      put = __cordl_internal_set_observers)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>
      observers;

  /// @brief Field onEventDelegate, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_onEventDelegate,
                      put = __cordl_internal_set_onEventDelegate)) ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* onEventDelegate;

  static inline ::UnityEngine::InputSystem::LowLevel::InputEventListener_ObserverState* New_ctor();

  constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> const& __cordl_internal_get_observers() const;

  constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>& __cordl_internal_get_observers();

  constexpr ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* const& __cordl_internal_get_onEventDelegate() const;

  constexpr ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*& __cordl_internal_get_onEventDelegate();

  constexpr void __cordl_internal_set_observers(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> value);

  constexpr void __cordl_internal_set_onEventDelegate(::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* value);

  /// @brief Method <.ctor>b__2_0, addr 0x460b340, size 0xf4, virtual false, abstract: false, final false
  inline void __ctor_b__2_0(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method .ctor, addr 0x460b2b0, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputEventListener_ObserverState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputEventListener_ObserverState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputEventListener_ObserverState(InputEventListener_ObserverState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputEventListener_ObserverState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputEventListener_ObserverState(InputEventListener_ObserverState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6943 };

  /// @brief Field observers, offset: 0x10, size: 0x18, def value: None
  ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> ___observers;

  /// @brief Field onEventDelegate, offset: 0x28, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* ___onEventDelegate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventListener_ObserverState, ___observers) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventListener_ObserverState, ___onEventDelegate) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputEventListener_ObserverState, 0x30>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Dependencies System.IDisposable, System.Object
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// CS Name: UnityEngine.InputSystem.LowLevel.InputEventListener/DisposableObserver
class CORDL_TYPE InputEventListener_DisposableObserver : public ::System::Object {
public:
  // Declarations
  /// @brief Field observer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_observer, put = __cordl_internal_set_observer)) ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* observer;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x460b434, size 0x138, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::UnityEngine::InputSystem::LowLevel::InputEventListener_DisposableObserver* New_ctor();

  constexpr ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* const& __cordl_internal_get_observer() const;

  constexpr ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*& __cordl_internal_get_observer();

  constexpr void __cordl_internal_set_observer(::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value);

  /// @brief Method .ctor, addr 0x460b338, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputEventListener_DisposableObserver();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputEventListener_DisposableObserver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputEventListener_DisposableObserver(InputEventListener_DisposableObserver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputEventListener_DisposableObserver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputEventListener_DisposableObserver(InputEventListener_DisposableObserver const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6944 };

  /// @brief Field observer, offset: 0x10, size: 0x8, def value: None
  ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* ___observer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventListener_DisposableObserver, ___observer) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputEventListener_DisposableObserver, 0x18>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Dependencies System.IObservable`1<T>, UnityEngine.InputSystem.LowLevel.InputEventPtr
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.InputEventListener
#pragma pack(push, 0)
struct CORDL_TYPE InputEventListener {
public:
  // Declarations
  using DisposableObserver = ::UnityEngine::InputSystem::LowLevel::InputEventListener_DisposableObserver;

  using ObserverState = ::UnityEngine::InputSystem::LowLevel::InputEventListener_ObserverState;

  /// @brief Field s_ObserverState, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ObserverState, put = setStaticF_s_ObserverState)) ::UnityEngine::InputSystem::LowLevel::InputEventListener_ObserverState* s_ObserverState;

  /// @brief Convert operator to "::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
  constexpr operator ::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*();

  /// @brief Method Subscribe, addr 0x460b158, size 0x158, virtual true, abstract: false, final true
  inline ::System::IDisposable* Subscribe(::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* observer);

  static inline ::UnityEngine::InputSystem::LowLevel::InputEventListener_ObserverState* getStaticF_s_ObserverState();

  /// @brief Convert to "::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
  constexpr ::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* i___System__IObservable_1___UnityEngine__InputSystem__LowLevel__InputEventPtr_();

  /// @brief Method op_Addition, addr 0x4605104, size 0x178, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::LowLevel::InputEventListener
  op_Addition(::UnityEngine::InputSystem::LowLevel::InputEventListener _, ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* callback);

  /// @brief Method op_Subtraction, addr 0x46053e0, size 0x178, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::LowLevel::InputEventListener
  op_Subtraction(::UnityEngine::InputSystem::LowLevel::InputEventListener _,
                 ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* callback);

  static inline void setStaticF_s_ObserverState(::UnityEngine::InputSystem::LowLevel::InputEventListener_ObserverState* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputEventListener();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6945 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputEventListener, 0x1>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::InputEventListener_DisposableObserver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputEventListener_DisposableObserver*, "UnityEngine.InputSystem.LowLevel", "InputEventListener/DisposableObserver");
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::InputEventListener_ObserverState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputEventListener_ObserverState*, "UnityEngine.InputSystem.LowLevel", "InputEventListener/ObserverState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputEventListener, "UnityEngine.InputSystem.LowLevel", "InputEventListener");
