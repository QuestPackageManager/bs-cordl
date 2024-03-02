#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TweenRunner_1)
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
namespace UnityEngine::UI::CoroutineTween {
template <typename T> class __TweenRunner_1___Start_d__2;
}
namespace UnityEngine {
class MonoBehaviour;
}
// Forward declare root types
namespace UnityEngine::UI::CoroutineTween {
template <typename T> class TweenRunner_1;
}
namespace UnityEngine::UI::CoroutineTween {
template <typename T> class __TweenRunner_1___Start_d__2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UI::CoroutineTween::TweenRunner_1);
MARK_GEN_REF_PTR_T(::UnityEngine::UI::CoroutineTween::__TweenRunner_1___Start_d__2);
// Type: ::<Start>d__2
// SizeInfo { instance_size: 48, native_size: 44, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI::CoroutineTween {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::TweenRunner`1::<Start>d__2<T>*
class CORDL_TYPE __TweenRunner_1___Start_d__2 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <elapsedTime>5__2, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__elapsedTime_5__2, put = __cordl_internal_set__elapsedTime_5__2)) float_t _elapsedTime_5__2;

  /// @brief Field tweenInfo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_tweenInfo, put = __cordl_internal_set_tweenInfo)) T tweenInfo;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::UI::CoroutineTween::__TweenRunner_1___Start_d__2<T>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr float_t const& __cordl_internal_get__elapsedTime_5__2() const;

  constexpr float_t& __cordl_internal_get__elapsedTime_5__2();

  constexpr T const& __cordl_internal_get_tweenInfo() const;

  constexpr T& __cordl_internal_get_tweenInfo();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set__elapsedTime_5__2(float_t value);

  constexpr void __cordl_internal_set_tweenInfo(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
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
  constexpr __TweenRunner_1___Start_d__2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TweenRunner_1___Start_d__2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TweenRunner_1___Start_d__2(__TweenRunner_1___Start_d__2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TweenRunner_1___Start_d__2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TweenRunner_1___Start_d__2(__TweenRunner_1___Start_d__2 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field tweenInfo, offset: 0x20, size: 0x8, def value: None
  T ___tweenInfo;

  /// @brief Field <elapsedTime>5__2, offset: 0x28, size: 0x4, def value: None
  float_t ____elapsedTime_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UI::CoroutineTween
// Type: UnityEngine.UI.CoroutineTween::TweenRunner`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI::CoroutineTween {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::UnityEngine.UI.CoroutineTween::TweenRunner`1<T>*
class CORDL_TYPE TweenRunner_1 : public ::System::Object {
public:
  // Declarations
  using _Start_d__2 = ::UnityEngine::UI::CoroutineTween::__TweenRunner_1___Start_d__2<T>;

  /// @brief Field m_CoroutineContainer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CoroutineContainer, put = __cordl_internal_set_m_CoroutineContainer))::UnityW<::UnityEngine::MonoBehaviour> m_CoroutineContainer;

  /// @brief Field m_Tween, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Tween, put = __cordl_internal_set_m_Tween))::System::Collections::IEnumerator* m_Tween;

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Init(::UnityEngine::MonoBehaviour* coroutineContainer);

  static inline ::UnityEngine::UI::CoroutineTween::TweenRunner_1<T>* New_ctor();

  /// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Collections::IEnumerator* Start(T tweenInfo);

  /// @brief Method StartTween, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void StartTween(T info);

  /// @brief Method StopTween, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void StopTween();

  constexpr ::UnityW<::UnityEngine::MonoBehaviour> const& __cordl_internal_get_m_CoroutineContainer() const;

  constexpr ::UnityW<::UnityEngine::MonoBehaviour>& __cordl_internal_get_m_CoroutineContainer();

  constexpr ::System::Collections::IEnumerator*& __cordl_internal_get_m_Tween();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> const& __cordl_internal_get_m_Tween() const;

  constexpr void __cordl_internal_set_m_CoroutineContainer(::UnityW<::UnityEngine::MonoBehaviour> value);

  constexpr void __cordl_internal_set_m_Tween(::System::Collections::IEnumerator* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TweenRunner_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TweenRunner_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TweenRunner_1(TweenRunner_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TweenRunner_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TweenRunner_1(TweenRunner_1 const&) = delete;

  /// @brief Field m_CoroutineContainer, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MonoBehaviour> ___m_CoroutineContainer;

  /// @brief Field m_Tween, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::IEnumerator* ___m_Tween;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UI::CoroutineTween
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UI::CoroutineTween::TweenRunner_1, "UnityEngine.UI.CoroutineTween", "TweenRunner`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UI::CoroutineTween::__TweenRunner_1___Start_d__2, "UnityEngine.UI.CoroutineTween", "TweenRunner`1/<Start>d__2");
