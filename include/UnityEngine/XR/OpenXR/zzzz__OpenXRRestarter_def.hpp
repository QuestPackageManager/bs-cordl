#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OpenXRRestarter)
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine::XR::OpenXR {
class __OpenXRRestarter___RestartCoroutine_d__25;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Action;
}
namespace UnityEngine::XR::OpenXR {
class __OpenXRRestarter___PauseAndRestartCoroutine_d__24;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR {
class OpenXRRestarter;
}
namespace UnityEngine::XR::OpenXR {
class __OpenXRRestarter___PauseAndRestartCoroutine_d__24;
}
namespace UnityEngine::XR::OpenXR {
class __OpenXRRestarter___RestartCoroutine_d__25;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::OpenXRRestarter);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::__OpenXRRestarter___PauseAndRestartCoroutine_d__24);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::__OpenXRRestarter___RestartCoroutine_d__25);
// Type: ::<PauseAndRestartCoroutine>d__24
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14412))
// CS Name: ::OpenXRRestarter::<PauseAndRestartCoroutine>d__24*
class CORDL_TYPE __OpenXRRestarter___PauseAndRestartCoroutine_d__24 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field pauseTimeInSeconds, offset 0x20, size 0x4
  __declspec(property(get = __get_pauseTimeInSeconds, put = __set_pauseTimeInSeconds)) float_t pauseTimeInSeconds;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::UnityEngine::XR::OpenXR::OpenXRRestarter* __4__this;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr float_t& __get_pauseTimeInSeconds();

  constexpr float_t const& __get_pauseTimeInSeconds() const;

  constexpr void __set_pauseTimeInSeconds(float_t value);

  constexpr ::UnityEngine::XR::OpenXR::OpenXRRestarter*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::OpenXR::OpenXRRestarter*> const& __get___4__this() const;

  constexpr void __set___4__this(::UnityEngine::XR::OpenXR::OpenXRRestarter* value);

  static inline ::UnityEngine::XR::OpenXR::__OpenXRRestarter___PauseAndRestartCoroutine_d__24* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x2b01ea0 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x2b01ef8 size 0x1c virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x2b01f14 size 0x254 virtual true final true
  inline bool MoveNext();

  /// @brief Method <>m__Finally1 addr 0x2b02168 size 0x40 virtual false final false
  inline void __m__Finally1();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2b021a8 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x2b021b0 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x2b021f0 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__OpenXRRestarter___PauseAndRestartCoroutine_d__24", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OpenXRRestarter___PauseAndRestartCoroutine_d__24(__OpenXRRestarter___PauseAndRestartCoroutine_d__24&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OpenXRRestarter___PauseAndRestartCoroutine_d__24", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OpenXRRestarter___PauseAndRestartCoroutine_d__24(__OpenXRRestarter___PauseAndRestartCoroutine_d__24 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OpenXRRestarter___PauseAndRestartCoroutine_d__24();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field pauseTimeInSeconds, offset: 0x20, size: 0x4, def value: None
  float_t ___pauseTimeInSeconds;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::OpenXRRestarter* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::__OpenXRRestarter___PauseAndRestartCoroutine_d__24, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::__OpenXRRestarter___PauseAndRestartCoroutine_d__24, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::__OpenXRRestarter___PauseAndRestartCoroutine_d__24, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::__OpenXRRestarter___PauseAndRestartCoroutine_d__24, ___pauseTimeInSeconds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::__OpenXRRestarter___PauseAndRestartCoroutine_d__24, _____4__this) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::XR::OpenXR
// Type: ::<RestartCoroutine>d__25
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14413))
// CS Name: ::OpenXRRestarter::<RestartCoroutine>d__25*
class CORDL_TYPE __OpenXRRestarter___RestartCoroutine_d__25 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::UnityEngine::XR::OpenXR::OpenXRRestarter* __4__this;

  /// @brief Field shouldRestart, offset 0x28, size 0x1
  __declspec(property(get = __get_shouldRestart, put = __set_shouldRestart)) bool shouldRestart;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr ::UnityEngine::XR::OpenXR::OpenXRRestarter*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::OpenXR::OpenXRRestarter*> const& __get___4__this() const;

  constexpr void __set___4__this(::UnityEngine::XR::OpenXR::OpenXRRestarter* value);

  constexpr bool& __get_shouldRestart();

  constexpr bool const& __get_shouldRestart() const;

  constexpr void __set_shouldRestart(bool value);

  static inline ::UnityEngine::XR::OpenXR::__OpenXRRestarter___RestartCoroutine_d__25* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x2b01ec8 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x2b021f8 size 0x2c virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x2b02224 size 0x488 virtual true final true
  inline bool MoveNext();

  /// @brief Method <>m__Finally1 addr 0x2b0273c size 0x40 virtual false final false
  inline void __m__Finally1();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2b0277c size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x2b02784 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x2b027c4 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__OpenXRRestarter___RestartCoroutine_d__25", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OpenXRRestarter___RestartCoroutine_d__25(__OpenXRRestarter___RestartCoroutine_d__25&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OpenXRRestarter___RestartCoroutine_d__25", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OpenXRRestarter___RestartCoroutine_d__25(__OpenXRRestarter___RestartCoroutine_d__25 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OpenXRRestarter___RestartCoroutine_d__25();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::OpenXRRestarter* _____4__this;

  /// @brief Field shouldRestart, offset: 0x28, size: 0x1, def value: None
  bool ___shouldRestart;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::__OpenXRRestarter___RestartCoroutine_d__25, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::__OpenXRRestarter___RestartCoroutine_d__25, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::__OpenXRRestarter___RestartCoroutine_d__25, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::__OpenXRRestarter___RestartCoroutine_d__25, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::__OpenXRRestarter___RestartCoroutine_d__25, ___shouldRestart) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::XR::OpenXR
// Type: UnityEngine.XR.OpenXR::OpenXRRestarter
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14414))
// CS Name: ::UnityEngine.XR.OpenXR::OpenXRRestarter*
class CORDL_TYPE OpenXRRestarter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _RestartCoroutine_d__25 = ::UnityEngine::XR::OpenXR::__OpenXRRestarter___RestartCoroutine_d__25;

  using _PauseAndRestartCoroutine_d__24 = ::UnityEngine::XR::OpenXR::__OpenXRRestarter___PauseAndRestartCoroutine_d__24;

  /// @brief Field onAfterRestart, offset 0x18, size 0x8
  __declspec(property(get = __get_onAfterRestart, put = __set_onAfterRestart))::System::Action* onAfterRestart;

  /// @brief Field onAfterShutdown, offset 0x20, size 0x8
  __declspec(property(get = __get_onAfterShutdown, put = __set_onAfterShutdown))::System::Action* onAfterShutdown;

  /// @brief Field onQuit, offset 0x28, size 0x8
  __declspec(property(get = __get_onQuit, put = __set_onQuit))::System::Action* onQuit;

  /// @brief Field onAfterCoroutine, offset 0x30, size 0x8
  __declspec(property(get = __get_onAfterCoroutine, put = __set_onAfterCoroutine))::System::Action* onAfterCoroutine;

  /// @brief Field onAfterSuccessfulRestart, offset 0x38, size 0x8
  __declspec(property(get = __get_onAfterSuccessfulRestart, put = __set_onAfterSuccessfulRestart))::System::Action* onAfterSuccessfulRestart;

  /// @brief Field m_Coroutine, offset 0x40, size 0x8
  __declspec(property(get = __get_m_Coroutine, put = __set_m_Coroutine))::UnityEngine::Coroutine* m_Coroutine;

  /// @brief Field m_pauseAndRestartCoroutine, offset 0x48, size 0x8
  __declspec(property(get = __get_m_pauseAndRestartCoroutine, put = __set_m_pauseAndRestartCoroutine))::UnityEngine::Coroutine* m_pauseAndRestartCoroutine;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance))::UnityEngine::XR::OpenXR::OpenXRRestarter* s_Instance;

  /// @brief Field m_pauseAndRestartAttempts, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_m_pauseAndRestartAttempts, put = setStaticF_m_pauseAndRestartAttempts)) int32_t m_pauseAndRestartAttempts;

  /// @brief Field <TimeBetweenRestartAttempts>k__BackingField, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__TimeBetweenRestartAttempts_k__BackingField,
                             put = setStaticF__TimeBetweenRestartAttempts_k__BackingField)) float_t _TimeBetweenRestartAttempts_k__BackingField;

  __declspec(property(get = get_isRunning)) bool isRunning;

  constexpr ::System::Action*& __get_onAfterRestart();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_onAfterRestart() const;

  constexpr void __set_onAfterRestart(::System::Action* value);

  constexpr ::System::Action*& __get_onAfterShutdown();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_onAfterShutdown() const;

  constexpr void __set_onAfterShutdown(::System::Action* value);

  constexpr ::System::Action*& __get_onQuit();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_onQuit() const;

  constexpr void __set_onQuit(::System::Action* value);

  constexpr ::System::Action*& __get_onAfterCoroutine();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_onAfterCoroutine() const;

  constexpr void __set_onAfterCoroutine(::System::Action* value);

  constexpr ::System::Action*& __get_onAfterSuccessfulRestart();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_onAfterSuccessfulRestart() const;

  constexpr void __set_onAfterSuccessfulRestart(::System::Action* value);

  constexpr ::UnityEngine::Coroutine*& __get_m_Coroutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __get_m_Coroutine() const;

  constexpr void __set_m_Coroutine(::UnityEngine::Coroutine* value);

  constexpr ::UnityEngine::Coroutine*& __get_m_pauseAndRestartCoroutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __get_m_pauseAndRestartCoroutine() const;

  constexpr void __set_m_pauseAndRestartCoroutine(::UnityEngine::Coroutine* value);

  static inline void setStaticF_s_Instance(::UnityEngine::XR::OpenXR::OpenXRRestarter* value);

  static inline ::UnityEngine::XR::OpenXR::OpenXRRestarter* getStaticF_s_Instance();

  static inline void setStaticF_m_pauseAndRestartAttempts(int32_t value);

  static inline int32_t getStaticF_m_pauseAndRestartAttempts();

  static inline void setStaticF__TimeBetweenRestartAttempts_k__BackingField(float_t value);

  static inline float_t getStaticF__TimeBetweenRestartAttempts_k__BackingField();

  /// @brief Method ResetCallbacks addr 0x2b01c1c size 0x6c virtual false final false
  inline void ResetCallbacks();

  /// @brief Method get_isRunning addr 0x2b01c88 size 0x10 virtual false final false
  inline bool get_isRunning();

  /// @brief Method get_TimeBetweenRestartAttempts addr 0x2b01c98 size 0x58 virtual false final false
  static inline float_t get_TimeBetweenRestartAttempts();

  /// @brief Method set_TimeBetweenRestartAttempts addr 0x2b01cf0 size 0x64 virtual false final false
  static inline void set_TimeBetweenRestartAttempts(float_t value);

  /// @brief Method get_PauseAndRestartAttempts addr 0x2b01d54 size 0x58 virtual false final false
  static inline int32_t get_PauseAndRestartAttempts();

  /// @brief Method get_Instance addr 0x2b00ea8 size 0x1b0 virtual false final false
  static inline ::UnityEngine::XR::OpenXR::OpenXRRestarter* get_Instance();

  /// @brief Method Shutdown addr 0x2b01650 size 0x13c virtual false final false
  inline void Shutdown();

  /// @brief Method ShutdownAndRestart addr 0x2b01058 size 0x13c virtual false final false
  inline void ShutdownAndRestart();

  /// @brief Method PauseAndRestart addr 0x2b01194 size 0x1bc virtual false final false
  inline void PauseAndRestart();

  /// @brief Method PauseAndRestartCoroutine addr 0x2b01e28 size 0x78 virtual false final false
  inline ::System::Collections::IEnumerator* PauseAndRestartCoroutine(float_t pauseTimeInSeconds);

  /// @brief Method RestartCoroutine addr 0x2b01dac size 0x7c virtual false final false
  inline ::System::Collections::IEnumerator* RestartCoroutine(bool shouldRestart);

  static inline ::UnityEngine::XR::OpenXR::OpenXRRestarter* New_ctor();

  /// @brief Method .ctor addr 0x2b01ef0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRRestarter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenXRRestarter(OpenXRRestarter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRRestarter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenXRRestarter(OpenXRRestarter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRRestarter();

public:
  /// @brief Field onAfterRestart, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___onAfterRestart;

  /// @brief Field onAfterShutdown, offset: 0x20, size: 0x8, def value: None
  ::System::Action* ___onAfterShutdown;

  /// @brief Field onQuit, offset: 0x28, size: 0x8, def value: None
  ::System::Action* ___onQuit;

  /// @brief Field onAfterCoroutine, offset: 0x30, size: 0x8, def value: None
  ::System::Action* ___onAfterCoroutine;

  /// @brief Field onAfterSuccessfulRestart, offset: 0x38, size: 0x8, def value: None
  ::System::Action* ___onAfterSuccessfulRestart;

  /// @brief Field m_Coroutine, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___m_Coroutine;

  /// @brief Field m_pauseAndRestartCoroutine, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___m_pauseAndRestartCoroutine;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::OpenXRRestarter, 0x50>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRRestarter, ___onAfterRestart) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRRestarter, ___onAfterShutdown) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRRestarter, ___onQuit) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRRestarter, ___onAfterCoroutine) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRRestarter, ___onAfterSuccessfulRestart) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRRestarter, ___m_Coroutine) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRRestarter, ___m_pauseAndRestartCoroutine) == 0x48, "Offset mismatch!");

} // namespace UnityEngine::XR::OpenXR
NEED_NO_BOX(::UnityEngine::XR::OpenXR::OpenXRRestarter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::OpenXRRestarter*, "UnityEngine.XR.OpenXR", "OpenXRRestarter");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::__OpenXRRestarter___PauseAndRestartCoroutine_d__24);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::__OpenXRRestarter___PauseAndRestartCoroutine_d__24*, "UnityEngine.XR.OpenXR", "OpenXRRestarter/<PauseAndRestartCoroutine>d__24");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::__OpenXRRestarter___RestartCoroutine_d__25);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::__OpenXRRestarter___RestartCoroutine_d__25*, "UnityEngine.XR.OpenXR", "OpenXRRestarter/<RestartCoroutine>d__25");
