#pragma once
// IWYU pragma private; include "GlobalNamespace/KnucklesUnityXRHapticsHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IUnityXRHapticsHandler_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/zzzz__InputDevice_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(KnucklesUnityXRHapticsHandler)
namespace GlobalNamespace {
class KnucklesUnityXRHapticsHandler__HapticsCoroutine_d__9;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace UnityEngine {
class WaitForSecondsRealtime;
}
// Forward declare root types
namespace GlobalNamespace {
class KnucklesUnityXRHapticsHandler;
}
namespace GlobalNamespace {
class KnucklesUnityXRHapticsHandler__HapticsCoroutine_d__9;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::KnucklesUnityXRHapticsHandler);
MARK_REF_PTR_T(::GlobalNamespace::KnucklesUnityXRHapticsHandler__HapticsCoroutine_d__9);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object, UnityEngine.XR.InputDevice
namespace GlobalNamespace {
// Is value type: false
// CS Name: KnucklesUnityXRHapticsHandler/<HapticsCoroutine>d__9
class CORDL_TYPE KnucklesUnityXRHapticsHandler__HapticsCoroutine_d__9 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::KnucklesUnityXRHapticsHandler* __4__this;

  /// @brief Field <device>5__2, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get__device_5__2, put = __cordl_internal_set__device_5__2)) ::UnityEngine::XR::InputDevice _device_5__2;

  /// @brief Field <waiter>5__3, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__waiter_5__3, put = __cordl_internal_set__waiter_5__3)) ::UnityEngine::WaitForSecondsRealtime* _waiter_5__3;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x39c6728, size 0x10c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::KnucklesUnityXRHapticsHandler__HapticsCoroutine_d__9* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x39c6834, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x39c683c, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x39c6874, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x39c6724, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::GlobalNamespace::KnucklesUnityXRHapticsHandler* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::KnucklesUnityXRHapticsHandler*& __cordl_internal_get___4__this();

  constexpr ::UnityEngine::XR::InputDevice const& __cordl_internal_get__device_5__2() const;

  constexpr ::UnityEngine::XR::InputDevice& __cordl_internal_get__device_5__2();

  constexpr ::UnityEngine::WaitForSecondsRealtime* const& __cordl_internal_get__waiter_5__3() const;

  constexpr ::UnityEngine::WaitForSecondsRealtime*& __cordl_internal_get__waiter_5__3();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::KnucklesUnityXRHapticsHandler* value);

  constexpr void __cordl_internal_set__device_5__2(::UnityEngine::XR::InputDevice value);

  constexpr void __cordl_internal_set__waiter_5__3(::UnityEngine::WaitForSecondsRealtime* value);

  /// @brief Method .ctor, addr 0x39c6678, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KnucklesUnityXRHapticsHandler__HapticsCoroutine_d__9();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KnucklesUnityXRHapticsHandler__HapticsCoroutine_d__9", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KnucklesUnityXRHapticsHandler__HapticsCoroutine_d__9(KnucklesUnityXRHapticsHandler__HapticsCoroutine_d__9&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KnucklesUnityXRHapticsHandler__HapticsCoroutine_d__9", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KnucklesUnityXRHapticsHandler__HapticsCoroutine_d__9(KnucklesUnityXRHapticsHandler__HapticsCoroutine_d__9 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16469 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::KnucklesUnityXRHapticsHandler* _____4__this;

  /// @brief Field <device>5__2, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::XR::InputDevice ____device_5__2;

  /// @brief Field <waiter>5__3, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::WaitForSecondsRealtime* ____waiter_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KnucklesUnityXRHapticsHandler__HapticsCoroutine_d__9, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KnucklesUnityXRHapticsHandler__HapticsCoroutine_d__9, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KnucklesUnityXRHapticsHandler__HapticsCoroutine_d__9, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KnucklesUnityXRHapticsHandler__HapticsCoroutine_d__9, ____device_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KnucklesUnityXRHapticsHandler__HapticsCoroutine_d__9, ____waiter_5__3) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::KnucklesUnityXRHapticsHandler__HapticsCoroutine_d__9, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IUnityXRHapticsHandler, System.IDisposable, System.Object, UnityEngine.XR.XRNode
namespace GlobalNamespace {
// Is value type: false
// CS Name: KnucklesUnityXRHapticsHandler
class CORDL_TYPE KnucklesUnityXRHapticsHandler : public ::System::Object {
public:
  // Declarations
  using _HapticsCoroutine_d__9 = ::GlobalNamespace::KnucklesUnityXRHapticsHandler__HapticsCoroutine_d__9;

  /// @brief Field _amplitude, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__amplitude, put = __cordl_internal_set__amplitude)) float_t _amplitude;

  /// @brief Field _coroutineRunner, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__coroutineRunner, put = __cordl_internal_set__coroutineRunner)) ::UnityW<::UnityEngine::MonoBehaviour> _coroutineRunner;

  /// @brief Field _hapticsCoroutine, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__hapticsCoroutine, put = __cordl_internal_set__hapticsCoroutine)) ::UnityEngine::Coroutine* _hapticsCoroutine;

  /// @brief Field _node, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__node, put = __cordl_internal_set__node)) ::UnityEngine::XR::XRNode _node;

  /// @brief Field _remainingTime, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__remainingTime, put = __cordl_internal_set__remainingTime)) float_t _remainingTime;

  /// @brief Convert operator to "::GlobalNamespace::IUnityXRHapticsHandler"
  constexpr operator ::GlobalNamespace::IUnityXRHapticsHandler*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x39c66a0, size 0x84, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method HapticsCoroutine, addr 0x39c65e0, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* HapticsCoroutine();

  static inline ::GlobalNamespace::KnucklesUnityXRHapticsHandler* New_ctor(::UnityEngine::XR::XRNode node, ::UnityEngine::MonoBehaviour* coroutineRunner);

  /// @brief Method StopHaptics, addr 0x39c6660, size 0x18, virtual true, abstract: false, final true
  inline void StopHaptics();

  /// @brief Method TriggerHapticPulse, addr 0x39c6640, size 0x20, virtual true, abstract: false, final true
  inline void TriggerHapticPulse(float_t strength, float_t duration);

  constexpr float_t const& __cordl_internal_get__amplitude() const;

  constexpr float_t& __cordl_internal_get__amplitude();

  constexpr ::UnityW<::UnityEngine::MonoBehaviour> const& __cordl_internal_get__coroutineRunner() const;

  constexpr ::UnityW<::UnityEngine::MonoBehaviour>& __cordl_internal_get__coroutineRunner();

  constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__hapticsCoroutine() const;

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__hapticsCoroutine();

  constexpr ::UnityEngine::XR::XRNode const& __cordl_internal_get__node() const;

  constexpr ::UnityEngine::XR::XRNode& __cordl_internal_get__node();

  constexpr float_t const& __cordl_internal_get__remainingTime() const;

  constexpr float_t& __cordl_internal_get__remainingTime();

  constexpr void __cordl_internal_set__amplitude(float_t value);

  constexpr void __cordl_internal_set__coroutineRunner(::UnityW<::UnityEngine::MonoBehaviour> value);

  constexpr void __cordl_internal_set__hapticsCoroutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set__node(::UnityEngine::XR::XRNode value);

  constexpr void __cordl_internal_set__remainingTime(float_t value);

  /// @brief Method .ctor, addr 0x39c6588, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::XR::XRNode node, ::UnityEngine::MonoBehaviour* coroutineRunner);

  /// @brief Convert to "::GlobalNamespace::IUnityXRHapticsHandler"
  constexpr ::GlobalNamespace::IUnityXRHapticsHandler* i___GlobalNamespace__IUnityXRHapticsHandler() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KnucklesUnityXRHapticsHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KnucklesUnityXRHapticsHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KnucklesUnityXRHapticsHandler(KnucklesUnityXRHapticsHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KnucklesUnityXRHapticsHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KnucklesUnityXRHapticsHandler(KnucklesUnityXRHapticsHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16470 };

  /// @brief Field kRate offset 0xffffffff size 0x4
  static constexpr float_t kRate{ static_cast<float_t>(0.0125f) };

  /// @brief Field _coroutineRunner, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MonoBehaviour> ____coroutineRunner;

  /// @brief Field _hapticsCoroutine, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ____hapticsCoroutine;

  /// @brief Field _node, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::XR::XRNode ____node;

  /// @brief Field _remainingTime, offset: 0x24, size: 0x4, def value: None
  float_t ____remainingTime;

  /// @brief Field _amplitude, offset: 0x28, size: 0x4, def value: None
  float_t ____amplitude;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KnucklesUnityXRHapticsHandler, ____coroutineRunner) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KnucklesUnityXRHapticsHandler, ____hapticsCoroutine) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KnucklesUnityXRHapticsHandler, ____node) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KnucklesUnityXRHapticsHandler, ____remainingTime) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KnucklesUnityXRHapticsHandler, ____amplitude) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::KnucklesUnityXRHapticsHandler, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::KnucklesUnityXRHapticsHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::KnucklesUnityXRHapticsHandler*, "", "KnucklesUnityXRHapticsHandler");
NEED_NO_BOX(::GlobalNamespace::KnucklesUnityXRHapticsHandler__HapticsCoroutine_d__9);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::KnucklesUnityXRHapticsHandler__HapticsCoroutine_d__9*, "", "KnucklesUnityXRHapticsHandler/<HapticsCoroutine>d__9");
