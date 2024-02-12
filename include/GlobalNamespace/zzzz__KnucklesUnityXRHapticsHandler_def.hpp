#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/zzzz__InputDevice_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(KnucklesUnityXRHapticsHandler)
namespace GlobalNamespace {
class IUnityXRHapticsHandler;
}
namespace GlobalNamespace {
class __KnucklesUnityXRHapticsHandler___HapticsCoroutine_d__9;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
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
class __KnucklesUnityXRHapticsHandler___HapticsCoroutine_d__9;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::KnucklesUnityXRHapticsHandler);
MARK_REF_PTR_T(::GlobalNamespace::__KnucklesUnityXRHapticsHandler___HapticsCoroutine_d__9);
// Type: ::<HapticsCoroutine>d__9
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15752))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14562))
// CS Name: ::KnucklesUnityXRHapticsHandler::<HapticsCoroutine>d__9*
class CORDL_TYPE __KnucklesUnityXRHapticsHandler___HapticsCoroutine_d__9 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::GlobalNamespace::KnucklesUnityXRHapticsHandler* __4__this;

  /// @brief Field <device>5__2, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get__device_5__2, put = __cordl_internal_set__device_5__2))::UnityEngine::XR::InputDevice _device_5__2;

  /// @brief Field <waiter>5__3, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__waiter_5__3, put = __cordl_internal_set__waiter_5__3))::UnityEngine::WaitForSecondsRealtime* _waiter_5__3;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr ::GlobalNamespace::KnucklesUnityXRHapticsHandler*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::KnucklesUnityXRHapticsHandler*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::KnucklesUnityXRHapticsHandler* value);

  constexpr ::UnityEngine::XR::InputDevice& __cordl_internal_get__device_5__2();

  constexpr ::UnityEngine::XR::InputDevice const& __cordl_internal_get__device_5__2() const;

  constexpr void __cordl_internal_set__device_5__2(::UnityEngine::XR::InputDevice value);

  constexpr ::UnityEngine::WaitForSecondsRealtime*& __cordl_internal_get__waiter_5__3();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::WaitForSecondsRealtime*> const& __cordl_internal_get__waiter_5__3() const;

  constexpr void __cordl_internal_set__waiter_5__3(::UnityEngine::WaitForSecondsRealtime* value);

  static inline ::GlobalNamespace::__KnucklesUnityXRHapticsHandler___HapticsCoroutine_d__9* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x218aba8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x218ac54, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x218ac58, size 0x110, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x218ad68, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x218ad70, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x218adb0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__KnucklesUnityXRHapticsHandler___HapticsCoroutine_d__9", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __KnucklesUnityXRHapticsHandler___HapticsCoroutine_d__9(__KnucklesUnityXRHapticsHandler___HapticsCoroutine_d__9&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__KnucklesUnityXRHapticsHandler___HapticsCoroutine_d__9", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __KnucklesUnityXRHapticsHandler___HapticsCoroutine_d__9(__KnucklesUnityXRHapticsHandler___HapticsCoroutine_d__9 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __KnucklesUnityXRHapticsHandler___HapticsCoroutine_d__9();

public:
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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__KnucklesUnityXRHapticsHandler___HapticsCoroutine_d__9, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__KnucklesUnityXRHapticsHandler___HapticsCoroutine_d__9, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__KnucklesUnityXRHapticsHandler___HapticsCoroutine_d__9, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__KnucklesUnityXRHapticsHandler___HapticsCoroutine_d__9, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__KnucklesUnityXRHapticsHandler___HapticsCoroutine_d__9, ____device_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__KnucklesUnityXRHapticsHandler___HapticsCoroutine_d__9, ____waiter_5__3) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::KnucklesUnityXRHapticsHandler
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15745))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14563))
// CS Name: ::KnucklesUnityXRHapticsHandler*
class CORDL_TYPE KnucklesUnityXRHapticsHandler : public ::System::Object {
public:
  // Declarations
  using _HapticsCoroutine_d__9 = ::GlobalNamespace::__KnucklesUnityXRHapticsHandler___HapticsCoroutine_d__9;

  /// @brief Field _coroutineRunner, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__coroutineRunner, put = __cordl_internal_set__coroutineRunner))::UnityW<::UnityEngine::MonoBehaviour> _coroutineRunner;

  /// @brief Field _hapticsCoroutine, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__hapticsCoroutine, put = __cordl_internal_set__hapticsCoroutine))::UnityEngine::Coroutine* _hapticsCoroutine;

  /// @brief Field _node, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__node, put = __cordl_internal_set__node))::UnityEngine::XR::XRNode _node;

  /// @brief Field _remainingTime, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__remainingTime, put = __cordl_internal_set__remainingTime)) float_t _remainingTime;

  /// @brief Field _amplitude, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__amplitude, put = __cordl_internal_set__amplitude)) float_t _amplitude;

  /// @brief Convert operator to "::GlobalNamespace::IUnityXRHapticsHandler"
  constexpr operator ::GlobalNamespace::IUnityXRHapticsHandler*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IUnityXRHapticsHandler"
  constexpr ::GlobalNamespace::IUnityXRHapticsHandler* i___GlobalNamespace__IUnityXRHapticsHandler() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr ::UnityW<::UnityEngine::MonoBehaviour>& __cordl_internal_get__coroutineRunner();

  constexpr ::UnityW<::UnityEngine::MonoBehaviour> const& __cordl_internal_get__coroutineRunner() const;

  constexpr void __cordl_internal_set__coroutineRunner(::UnityW<::UnityEngine::MonoBehaviour> value);

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__hapticsCoroutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get__hapticsCoroutine() const;

  constexpr void __cordl_internal_set__hapticsCoroutine(::UnityEngine::Coroutine* value);

  constexpr ::UnityEngine::XR::XRNode& __cordl_internal_get__node();

  constexpr ::UnityEngine::XR::XRNode const& __cordl_internal_get__node() const;

  constexpr void __cordl_internal_set__node(::UnityEngine::XR::XRNode value);

  constexpr float_t& __cordl_internal_get__remainingTime();

  constexpr float_t const& __cordl_internal_get__remainingTime() const;

  constexpr void __cordl_internal_set__remainingTime(float_t value);

  constexpr float_t& __cordl_internal_get__amplitude();

  constexpr float_t const& __cordl_internal_get__amplitude() const;

  constexpr void __cordl_internal_set__amplitude(float_t value);

  static inline ::GlobalNamespace::KnucklesUnityXRHapticsHandler* New_ctor(::UnityEngine::XR::XRNode node, ::UnityEngine::MonoBehaviour* coroutineRunner);

  /// @brief Method .ctor, addr 0x218aab0, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::XR::XRNode node, ::UnityEngine::MonoBehaviour* coroutineRunner);

  /// @brief Method TriggerHapticPulse, addr 0x218ab70, size 0x20, virtual true, abstract: false, final true
  inline void TriggerHapticPulse(float_t strength, float_t duration);

  /// @brief Method StopHaptics, addr 0x218ab90, size 0x18, virtual true, abstract: false, final true
  inline void StopHaptics();

  /// @brief Method HapticsCoroutine, addr 0x218ab08, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* HapticsCoroutine();

  /// @brief Method Dispose, addr 0x218abd0, size 0x84, virtual true, abstract: false, final true
  inline void Dispose();

  // Ctor Parameters [CppParam { name: "", ty: "KnucklesUnityXRHapticsHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KnucklesUnityXRHapticsHandler(KnucklesUnityXRHapticsHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KnucklesUnityXRHapticsHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KnucklesUnityXRHapticsHandler(KnucklesUnityXRHapticsHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KnucklesUnityXRHapticsHandler();

public:
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

  /// @brief Field kRate offset 0xffffffff size 0x4
  static constexpr float_t kRate{ 0.0125 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::KnucklesUnityXRHapticsHandler, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::KnucklesUnityXRHapticsHandler, ____coroutineRunner) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KnucklesUnityXRHapticsHandler, ____hapticsCoroutine) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KnucklesUnityXRHapticsHandler, ____node) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KnucklesUnityXRHapticsHandler, ____remainingTime) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KnucklesUnityXRHapticsHandler, ____amplitude) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::KnucklesUnityXRHapticsHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::KnucklesUnityXRHapticsHandler*, "", "KnucklesUnityXRHapticsHandler");
NEED_NO_BOX(::GlobalNamespace::__KnucklesUnityXRHapticsHandler___HapticsCoroutine_d__9);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__KnucklesUnityXRHapticsHandler___HapticsCoroutine_d__9*, "", "KnucklesUnityXRHapticsHandler/<HapticsCoroutine>d__9");
