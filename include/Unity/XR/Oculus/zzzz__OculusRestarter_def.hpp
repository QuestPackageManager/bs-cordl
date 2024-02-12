#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OculusRestarter)
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace Unity::XR::Oculus {
class __OculusRestarter___PauseAndRestartCoroutine_d__22;
}
namespace Unity::XR::Oculus {
class __OculusRestarter___RestartCoroutine_d__23;
}
namespace UnityEngine {
class Coroutine;
}
// Forward declare root types
namespace Unity::XR::Oculus {
class OculusRestarter;
}
namespace Unity::XR::Oculus {
class __OculusRestarter___PauseAndRestartCoroutine_d__22;
}
namespace Unity::XR::Oculus {
class __OculusRestarter___RestartCoroutine_d__23;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::Oculus::OculusRestarter);
MARK_REF_PTR_T(::Unity::XR::Oculus::__OculusRestarter___PauseAndRestartCoroutine_d__22);
MARK_REF_PTR_T(::Unity::XR::Oculus::__OculusRestarter___RestartCoroutine_d__23);
// Type: ::<PauseAndRestartCoroutine>d__22
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::XR::Oculus {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15183))
// CS Name: ::OculusRestarter::<PauseAndRestartCoroutine>d__22*
class CORDL_TYPE __OculusRestarter___PauseAndRestartCoroutine_d__22 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field pauseTimeInSeconds, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_pauseTimeInSeconds, put = __cordl_internal_set_pauseTimeInSeconds)) float_t pauseTimeInSeconds;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::Unity::XR::Oculus::OculusRestarter> __4__this;

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

  constexpr float_t& __cordl_internal_get_pauseTimeInSeconds();

  constexpr float_t const& __cordl_internal_get_pauseTimeInSeconds() const;

  constexpr void __cordl_internal_set_pauseTimeInSeconds(float_t value);

  constexpr ::UnityW<::Unity::XR::Oculus::OculusRestarter>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::Unity::XR::Oculus::OculusRestarter> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityW<::Unity::XR::Oculus::OculusRestarter> value);

  static inline ::Unity::XR::Oculus::__OculusRestarter___PauseAndRestartCoroutine_d__22* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x2c77d80, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x2c77e54, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x2c77e70, size 0x254, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method <>m__Finally1, addr 0x2c780c4, size 0x40, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2c78104, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2c7810c, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2c7814c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__OculusRestarter___PauseAndRestartCoroutine_d__22", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusRestarter___PauseAndRestartCoroutine_d__22(__OculusRestarter___PauseAndRestartCoroutine_d__22&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusRestarter___PauseAndRestartCoroutine_d__22", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusRestarter___PauseAndRestartCoroutine_d__22(__OculusRestarter___PauseAndRestartCoroutine_d__22 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusRestarter___PauseAndRestartCoroutine_d__22();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field pauseTimeInSeconds, offset: 0x20, size: 0x4, def value: None
  float_t ___pauseTimeInSeconds;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::Unity::XR::Oculus::OculusRestarter> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::__OculusRestarter___PauseAndRestartCoroutine_d__22, 0x30>, "Size mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::__OculusRestarter___PauseAndRestartCoroutine_d__22, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::__OculusRestarter___PauseAndRestartCoroutine_d__22, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::__OculusRestarter___PauseAndRestartCoroutine_d__22, ___pauseTimeInSeconds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::__OculusRestarter___PauseAndRestartCoroutine_d__22, _____4__this) == 0x28, "Offset mismatch!");

} // namespace Unity::XR::Oculus
// Type: ::<RestartCoroutine>d__23
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::XR::Oculus {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15184))
// CS Name: ::OculusRestarter::<RestartCoroutine>d__23*
class CORDL_TYPE __OculusRestarter___RestartCoroutine_d__23 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::Unity::XR::Oculus::OculusRestarter> __4__this;

  /// @brief Field shouldRestart, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_shouldRestart, put = __cordl_internal_set_shouldRestart)) bool shouldRestart;

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

  constexpr ::UnityW<::Unity::XR::Oculus::OculusRestarter>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::Unity::XR::Oculus::OculusRestarter> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityW<::Unity::XR::Oculus::OculusRestarter> value);

  constexpr bool& __cordl_internal_get_shouldRestart();

  constexpr bool const& __cordl_internal_get_shouldRestart() const;

  constexpr void __cordl_internal_set_shouldRestart(bool value);

  static inline ::Unity::XR::Oculus::__OculusRestarter___RestartCoroutine_d__23* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x2c77e24, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x2c78154, size 0x2c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x2c78180, size 0x42c, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method <>m__Finally1, addr 0x2c785ac, size 0x114, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2c786c0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2c786c8, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2c78708, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__OculusRestarter___RestartCoroutine_d__23", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusRestarter___RestartCoroutine_d__23(__OculusRestarter___RestartCoroutine_d__23&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusRestarter___RestartCoroutine_d__23", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusRestarter___RestartCoroutine_d__23(__OculusRestarter___RestartCoroutine_d__23 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusRestarter___RestartCoroutine_d__23();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::Unity::XR::Oculus::OculusRestarter> _____4__this;

  /// @brief Field shouldRestart, offset: 0x28, size: 0x1, def value: None
  bool ___shouldRestart;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::__OculusRestarter___RestartCoroutine_d__23, 0x30>, "Size mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::__OculusRestarter___RestartCoroutine_d__23, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::__OculusRestarter___RestartCoroutine_d__23, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::__OculusRestarter___RestartCoroutine_d__23, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::__OculusRestarter___RestartCoroutine_d__23, ___shouldRestart) == 0x28, "Offset mismatch!");

} // namespace Unity::XR::Oculus
// Type: Unity.XR.Oculus::OculusRestarter
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::XR::Oculus {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8969))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15185))
// CS Name: ::Unity.XR.Oculus::OculusRestarter*
class CORDL_TYPE OculusRestarter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _RestartCoroutine_d__23 = ::Unity::XR::Oculus::__OculusRestarter___RestartCoroutine_d__23;

  using _PauseAndRestartCoroutine_d__22 = ::Unity::XR::Oculus::__OculusRestarter___PauseAndRestartCoroutine_d__22;

  /// @brief Field onAfterRestart, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_onAfterRestart, put = __cordl_internal_set_onAfterRestart))::System::Action* onAfterRestart;

  /// @brief Field onAfterShutdown, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_onAfterShutdown, put = __cordl_internal_set_onAfterShutdown))::System::Action* onAfterShutdown;

  /// @brief Field onQuit, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_onQuit, put = __cordl_internal_set_onQuit))::System::Action* onQuit;

  /// @brief Field onAfterCoroutine, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_onAfterCoroutine, put = __cordl_internal_set_onAfterCoroutine))::System::Action* onAfterCoroutine;

  /// @brief Field m_Coroutine, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Coroutine, put = __cordl_internal_set_m_Coroutine))::UnityEngine::Coroutine* m_Coroutine;

  /// @brief Field m_pauseAndRestartCoroutine, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_pauseAndRestartCoroutine, put = __cordl_internal_set_m_pauseAndRestartCoroutine))::UnityEngine::Coroutine* m_pauseAndRestartCoroutine;

  /// @brief Field k_GameObjectName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_GameObjectName, put = setStaticF_k_GameObjectName))::StringW k_GameObjectName;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance))::UnityW<::Unity::XR::Oculus::OculusRestarter> s_Instance;

  /// @brief Field m_pauseAndRestartAttempts, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_m_pauseAndRestartAttempts, put = setStaticF_m_pauseAndRestartAttempts)) int32_t m_pauseAndRestartAttempts;

  /// @brief Field <TimeBetweenRestartAttempts>k__BackingField, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__TimeBetweenRestartAttempts_k__BackingField,
                             put = setStaticF__TimeBetweenRestartAttempts_k__BackingField)) float_t _TimeBetweenRestartAttempts_k__BackingField;

  __declspec(property(get = get_isRunning)) bool isRunning;

  constexpr ::System::Action*& __cordl_internal_get_onAfterRestart();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_onAfterRestart() const;

  constexpr void __cordl_internal_set_onAfterRestart(::System::Action* value);

  constexpr ::System::Action*& __cordl_internal_get_onAfterShutdown();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_onAfterShutdown() const;

  constexpr void __cordl_internal_set_onAfterShutdown(::System::Action* value);

  constexpr ::System::Action*& __cordl_internal_get_onQuit();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_onQuit() const;

  constexpr void __cordl_internal_set_onQuit(::System::Action* value);

  constexpr ::System::Action*& __cordl_internal_get_onAfterCoroutine();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_onAfterCoroutine() const;

  constexpr void __cordl_internal_set_onAfterCoroutine(::System::Action* value);

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_m_Coroutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get_m_Coroutine() const;

  constexpr void __cordl_internal_set_m_Coroutine(::UnityEngine::Coroutine* value);

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_m_pauseAndRestartCoroutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get_m_pauseAndRestartCoroutine() const;

  constexpr void __cordl_internal_set_m_pauseAndRestartCoroutine(::UnityEngine::Coroutine* value);

  static inline void setStaticF_k_GameObjectName(::StringW value);

  static inline ::StringW getStaticF_k_GameObjectName();

  static inline void setStaticF_s_Instance(::UnityW<::Unity::XR::Oculus::OculusRestarter> value);

  static inline ::UnityW<::Unity::XR::Oculus::OculusRestarter> getStaticF_s_Instance();

  static inline void setStaticF_m_pauseAndRestartAttempts(int32_t value);

  static inline int32_t getStaticF_m_pauseAndRestartAttempts();

  static inline void setStaticF__TimeBetweenRestartAttempts_k__BackingField(float_t value);

  static inline float_t getStaticF__TimeBetweenRestartAttempts_k__BackingField();

  /// @brief Method ResetCallbacks, addr 0x2c77888, size 0x68, virtual false, abstract: false, final false
  inline void ResetCallbacks();

  /// @brief Method get_isRunning, addr 0x2c778f0, size 0x10, virtual false, abstract: false, final false
  inline bool get_isRunning();

  /// @brief Method get_TimeBetweenRestartAttempts, addr 0x2c77900, size 0x58, virtual false, abstract: false, final false
  static inline float_t get_TimeBetweenRestartAttempts();

  /// @brief Method set_TimeBetweenRestartAttempts, addr 0x2c77958, size 0x64, virtual false, abstract: false, final false
  static inline void set_TimeBetweenRestartAttempts(float_t value);

  /// @brief Method get_PauseAndRestartAttempts, addr 0x2c779bc, size 0x58, virtual false, abstract: false, final false
  static inline int32_t get_PauseAndRestartAttempts();

  /// @brief Method get_Instance, addr 0x2c77a14, size 0x1d4, virtual false, abstract: false, final false
  static inline ::UnityW<::Unity::XR::Oculus::OculusRestarter> get_Instance();

  /// @brief Method PauseAndRestart, addr 0x2c77be8, size 0x120, virtual false, abstract: false, final false
  inline void PauseAndRestart();

  /// @brief Method PauseAndRestartCoroutine, addr 0x2c77d08, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* PauseAndRestartCoroutine(float_t pauseTimeInSeconds);

  /// @brief Method RestartCoroutine, addr 0x2c77da8, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* RestartCoroutine(bool shouldRestart);

  static inline ::Unity::XR::Oculus::OculusRestarter* New_ctor();

  /// @brief Method .ctor, addr 0x2c77e4c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OculusRestarter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusRestarter(OculusRestarter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusRestarter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusRestarter(OculusRestarter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusRestarter();

public:
  /// @brief Field onAfterRestart, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___onAfterRestart;

  /// @brief Field onAfterShutdown, offset: 0x20, size: 0x8, def value: None
  ::System::Action* ___onAfterShutdown;

  /// @brief Field onQuit, offset: 0x28, size: 0x8, def value: None
  ::System::Action* ___onQuit;

  /// @brief Field onAfterCoroutine, offset: 0x30, size: 0x8, def value: None
  ::System::Action* ___onAfterCoroutine;

  /// @brief Field m_Coroutine, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___m_Coroutine;

  /// @brief Field m_pauseAndRestartCoroutine, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___m_pauseAndRestartCoroutine;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::OculusRestarter, 0x48>, "Size mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::OculusRestarter, ___onAfterRestart) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::OculusRestarter, ___onAfterShutdown) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::OculusRestarter, ___onQuit) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::OculusRestarter, ___onAfterCoroutine) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::OculusRestarter, ___m_Coroutine) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::OculusRestarter, ___m_pauseAndRestartCoroutine) == 0x40, "Offset mismatch!");

} // namespace Unity::XR::Oculus
NEED_NO_BOX(::Unity::XR::Oculus::OculusRestarter);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::OculusRestarter*, "Unity.XR.Oculus", "OculusRestarter");
NEED_NO_BOX(::Unity::XR::Oculus::__OculusRestarter___PauseAndRestartCoroutine_d__22);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::__OculusRestarter___PauseAndRestartCoroutine_d__22*, "Unity.XR.Oculus", "OculusRestarter/<PauseAndRestartCoroutine>d__22");
NEED_NO_BOX(::Unity::XR::Oculus::__OculusRestarter___RestartCoroutine_d__23);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::__OculusRestarter___RestartCoroutine_d__23*, "Unity.XR.Oculus", "OculusRestarter/<RestartCoroutine>d__23");
