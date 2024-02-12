#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IObserver_1_def.hpp"
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
template <typename T> class IObservable_1;
}
namespace System {
template <typename T> class IObserver_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::LowLevel {
class __InputEventListener__DisposableObserver;
}
namespace UnityEngine::InputSystem::LowLevel {
class __InputEventListener__ObserverState;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class __InputEventListener__DisposableObserver;
}
namespace UnityEngine::InputSystem::LowLevel {
class __InputEventListener__ObserverState;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventListener;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::__InputEventListener__DisposableObserver);
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::InputEventListener);
// Type: ::ObserverState
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2420)), TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(5795)),
// TypeDefinitionIndex(TypeDefinitionIndex(5928)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2420), inst: 330 }), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(5928), inst: 3846 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(5792)) CS Name: ::InputEventListener::ObserverState*
class CORDL_TYPE __InputEventListener__ObserverState : public ::System::Object {
public:
  // Declarations
  /// @brief Field observers, offset 0x10, size 0x18
  __declspec(
      property(get = __cordl_internal_get_observers,
               put = __cordl_internal_set_observers))::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> observers;

  /// @brief Field onEventDelegate, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_onEventDelegate,
                      put = __cordl_internal_set_onEventDelegate))::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* onEventDelegate;

  constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>& __cordl_internal_get_observers();

  constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> const& __cordl_internal_get_observers() const;

  constexpr void __cordl_internal_set_observers(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> value);

  constexpr ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*& __cordl_internal_get_onEventDelegate();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*> const&
  __cordl_internal_get_onEventDelegate() const;

  constexpr void __cordl_internal_set_onEventDelegate(::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* value);

  static inline ::UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState* New_ctor();

  /// @brief Method .ctor, addr 0x2aecef4, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <.ctor>b__2_0, addr 0x2aecf84, size 0xf4, virtual false, abstract: false, final false
  inline void __ctor_b__2_0(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::UnityEngine::InputSystem::InputDevice* device);

  // Ctor Parameters [CppParam { name: "", ty: "__InputEventListener__ObserverState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputEventListener__ObserverState(__InputEventListener__ObserverState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputEventListener__ObserverState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputEventListener__ObserverState(__InputEventListener__ObserverState const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputEventListener__ObserverState();

public:
  /// @brief Field observers, offset: 0x10, size: 0x18, def value: None
  ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> ___observers;

  /// @brief Field onEventDelegate, offset: 0x28, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* ___onEventDelegate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState, ___observers) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState, ___onEventDelegate) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Type: ::DisposableObserver
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5793))
// CS Name: ::InputEventListener::DisposableObserver*
class CORDL_TYPE __InputEventListener__DisposableObserver : public ::System::Object {
public:
  // Declarations
  /// @brief Field observer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_observer, put = __cordl_internal_set_observer))::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* observer;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*& __cordl_internal_get_observer();

  constexpr ::cordl_internals::to_const_pointer<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> const& __cordl_internal_get_observer() const;

  constexpr void __cordl_internal_set_observer(::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value);

  /// @brief Method Dispose, addr 0x2aed078, size 0x138, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::UnityEngine::InputSystem::LowLevel::__InputEventListener__DisposableObserver* New_ctor();

  /// @brief Method .ctor, addr 0x2aecf7c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__InputEventListener__DisposableObserver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputEventListener__DisposableObserver(__InputEventListener__DisposableObserver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputEventListener__DisposableObserver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputEventListener__DisposableObserver(__InputEventListener__DisposableObserver const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputEventListener__DisposableObserver();

public:
  /// @brief Field observer, offset: 0x10, size: 0x8, def value: None
  ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* ___observer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__InputEventListener__DisposableObserver, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__InputEventListener__DisposableObserver, ___observer) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::InputEventListener
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5794))
// CS Name: ::UnityEngine.InputSystem.LowLevel::InputEventListener
#pragma pack(push, 0)
struct CORDL_TYPE InputEventListener {
public:
  // Declarations
  using DisposableObserver = ::UnityEngine::InputSystem::LowLevel::__InputEventListener__DisposableObserver;

  using ObserverState = ::UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState;

  /// @brief Field s_ObserverState, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ObserverState, put = setStaticF_s_ObserverState))::UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState* s_ObserverState;

  /// @brief Convert operator to "::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
  constexpr operator ::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*();

  /// @brief Convert to "::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
  constexpr ::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* i___System__IObservable_1___UnityEngine__InputSystem__LowLevel__InputEventPtr_();

  static inline void setStaticF_s_ObserverState(::UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState* value);

  static inline ::UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState* getStaticF_s_ObserverState();

  /// @brief Method op_Addition, addr 0x2ae6bf8, size 0x180, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::LowLevel::InputEventListener
  op_Addition(::UnityEngine::InputSystem::LowLevel::InputEventListener _, ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* callback);

  /// @brief Method op_Subtraction, addr 0x2ae6edc, size 0x180, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::LowLevel::InputEventListener
  op_Subtraction(::UnityEngine::InputSystem::LowLevel::InputEventListener _,
                 ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* callback);

  /// @brief Method Subscribe, addr 0x2aecd98, size 0x15c, virtual true, abstract: false, final true
  inline ::System::IDisposable* Subscribe(::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* observer);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputEventListener();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputEventListener, 0x1>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::__InputEventListener__DisposableObserver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__InputEventListener__DisposableObserver*, "UnityEngine.InputSystem.LowLevel", "InputEventListener/DisposableObserver");
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState*, "UnityEngine.InputSystem.LowLevel", "InputEventListener/ObserverState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputEventListener, "UnityEngine.InputSystem.LowLevel", "InputEventListener");
