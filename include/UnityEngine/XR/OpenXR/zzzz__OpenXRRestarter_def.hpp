#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/OpenXRRestarter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OpenXRRestarter)
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
namespace UnityEngine::XR::OpenXR {
class OpenXRRestarter__PauseAndRetryInitializationCoroutine_d__35;
}
namespace UnityEngine::XR::OpenXR {
class OpenXRRestarter__PauseAndShutdownAndRestartCoroutine_d__34;
}
namespace UnityEngine::XR::OpenXR {
class OpenXRRestarter__RestartCoroutine_d__36;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR {
class OpenXRRestarter;
}
namespace UnityEngine::XR::OpenXR {
class OpenXRRestarter__PauseAndRetryInitializationCoroutine_d__35;
}
namespace UnityEngine::XR::OpenXR {
class OpenXRRestarter__PauseAndShutdownAndRestartCoroutine_d__34;
}
namespace UnityEngine::XR::OpenXR {
class OpenXRRestarter__RestartCoroutine_d__36;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::OpenXRRestarter);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::OpenXRRestarter__PauseAndRetryInitializationCoroutine_d__35);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::OpenXRRestarter__PauseAndShutdownAndRestartCoroutine_d__34);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::OpenXRRestarter__RestartCoroutine_d__36);
// Dependencies System.Object
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndRetryInitializationCoroutine>d__35
class CORDL_TYPE OpenXRRestarter__PauseAndRetryInitializationCoroutine_d__35 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::UnityEngine::XR::OpenXR::OpenXRRestarter> __4__this;

  /// @brief Field pauseTimeInSeconds, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_pauseTimeInSeconds, put = __cordl_internal_set_pauseTimeInSeconds)) float_t pauseTimeInSeconds;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x67bc85c, size 0x2fc, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::XR::OpenXR::OpenXRRestarter__PauseAndRetryInitializationCoroutine_d__35* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x67bcbdc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x67bcbe4, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x67bcc1c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x67bc830, size 0x2c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::UnityEngine::XR::OpenXR::OpenXRRestarter> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::UnityEngine::XR::OpenXR::OpenXRRestarter>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get_pauseTimeInSeconds() const;

  constexpr float_t& __cordl_internal_get_pauseTimeInSeconds();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::XR::OpenXR::OpenXRRestarter> value);

  constexpr void __cordl_internal_set_pauseTimeInSeconds(float_t value);

  /// @brief Method <>m__Finally1, addr 0x67bcba8, size 0x34, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x67bc7c8, size 0x8, virtual false, abstract: false, final false
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
  constexpr OpenXRRestarter__PauseAndRetryInitializationCoroutine_d__35();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OpenXRRestarter__PauseAndRetryInitializationCoroutine_d__35", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenXRRestarter__PauseAndRetryInitializationCoroutine_d__35(OpenXRRestarter__PauseAndRetryInitializationCoroutine_d__35&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRRestarter__PauseAndRetryInitializationCoroutine_d__35", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenXRRestarter__PauseAndRetryInitializationCoroutine_d__35(OpenXRRestarter__PauseAndRetryInitializationCoroutine_d__35 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18461 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::OpenXR::OpenXRRestarter> _____4__this;

  /// @brief Field pauseTimeInSeconds, offset: 0x28, size: 0x4, def value: None
  float_t ___pauseTimeInSeconds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRRestarter__PauseAndRetryInitializationCoroutine_d__35, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRRestarter__PauseAndRetryInitializationCoroutine_d__35, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRRestarter__PauseAndRetryInitializationCoroutine_d__35, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRRestarter__PauseAndRetryInitializationCoroutine_d__35, ___pauseTimeInSeconds) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::OpenXRRestarter__PauseAndRetryInitializationCoroutine_d__35, 0x30>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
// Dependencies System.Object
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndShutdownAndRestartCoroutine>d__34
class CORDL_TYPE OpenXRRestarter__PauseAndShutdownAndRestartCoroutine_d__34 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::UnityEngine::XR::OpenXR::OpenXRRestarter> __4__this;

  /// @brief Field pauseTimeInSeconds, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_pauseTimeInSeconds, put = __cordl_internal_set_pauseTimeInSeconds)) float_t pauseTimeInSeconds;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x67bcc50, size 0x220, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::XR::OpenXR::OpenXRRestarter__PauseAndShutdownAndRestartCoroutine_d__34* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x67bcea4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x67bceac, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x67bcee4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x67bcc24, size 0x2c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::UnityEngine::XR::OpenXR::OpenXRRestarter> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::UnityEngine::XR::OpenXR::OpenXRRestarter>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get_pauseTimeInSeconds() const;

  constexpr float_t& __cordl_internal_get_pauseTimeInSeconds();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::XR::OpenXR::OpenXRRestarter> value);

  constexpr void __cordl_internal_set_pauseTimeInSeconds(float_t value);

  /// @brief Method <>m__Finally1, addr 0x67bce70, size 0x34, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x67bc7c0, size 0x8, virtual false, abstract: false, final false
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
  constexpr OpenXRRestarter__PauseAndShutdownAndRestartCoroutine_d__34();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OpenXRRestarter__PauseAndShutdownAndRestartCoroutine_d__34", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenXRRestarter__PauseAndShutdownAndRestartCoroutine_d__34(OpenXRRestarter__PauseAndShutdownAndRestartCoroutine_d__34&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRRestarter__PauseAndShutdownAndRestartCoroutine_d__34", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenXRRestarter__PauseAndShutdownAndRestartCoroutine_d__34(OpenXRRestarter__PauseAndShutdownAndRestartCoroutine_d__34 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18462 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::OpenXR::OpenXRRestarter> _____4__this;

  /// @brief Field pauseTimeInSeconds, offset: 0x28, size: 0x4, def value: None
  float_t ___pauseTimeInSeconds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRRestarter__PauseAndShutdownAndRestartCoroutine_d__34, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRRestarter__PauseAndShutdownAndRestartCoroutine_d__34, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRRestarter__PauseAndShutdownAndRestartCoroutine_d__34, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRRestarter__PauseAndShutdownAndRestartCoroutine_d__34, ___pauseTimeInSeconds) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::OpenXRRestarter__PauseAndShutdownAndRestartCoroutine_d__34, 0x30>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
// Dependencies System.Object
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__36
class CORDL_TYPE OpenXRRestarter__RestartCoroutine_d__36 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::UnityEngine::XR::OpenXR::OpenXRRestarter> __4__this;

  /// @brief Field shouldRestart, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_shouldRestart, put = __cordl_internal_set_shouldRestart)) bool shouldRestart;

  /// @brief Field shouldShutdown, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_shouldShutdown, put = __cordl_internal_set_shouldShutdown)) bool shouldShutdown;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x67bcf18, size 0x55c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::XR::OpenXR::OpenXRRestarter__RestartCoroutine_d__36* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x67bd544, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x67bd54c, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x67bd584, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x67bceec, size 0x2c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::UnityEngine::XR::OpenXR::OpenXRRestarter> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::UnityEngine::XR::OpenXR::OpenXRRestarter>& __cordl_internal_get___4__this();

  constexpr bool const& __cordl_internal_get_shouldRestart() const;

  constexpr bool& __cordl_internal_get_shouldRestart();

  constexpr bool const& __cordl_internal_get_shouldShutdown() const;

  constexpr bool& __cordl_internal_get_shouldShutdown();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::XR::OpenXR::OpenXRRestarter> value);

  constexpr void __cordl_internal_set_shouldRestart(bool value);

  constexpr void __cordl_internal_set_shouldShutdown(bool value);

  /// @brief Method <>m__Finally1, addr 0x67bd50c, size 0x38, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x67bc7d0, size 0x8, virtual false, abstract: false, final false
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
  constexpr OpenXRRestarter__RestartCoroutine_d__36();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OpenXRRestarter__RestartCoroutine_d__36", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenXRRestarter__RestartCoroutine_d__36(OpenXRRestarter__RestartCoroutine_d__36&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRRestarter__RestartCoroutine_d__36", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenXRRestarter__RestartCoroutine_d__36(OpenXRRestarter__RestartCoroutine_d__36 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18463 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field shouldShutdown, offset: 0x20, size: 0x1, def value: None
  bool ___shouldShutdown;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::OpenXR::OpenXRRestarter> _____4__this;

  /// @brief Field shouldRestart, offset: 0x30, size: 0x1, def value: None
  bool ___shouldRestart;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRRestarter__RestartCoroutine_d__36, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRRestarter__RestartCoroutine_d__36, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRRestarter__RestartCoroutine_d__36, ___shouldShutdown) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRRestarter__RestartCoroutine_d__36, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRRestarter__RestartCoroutine_d__36, ___shouldRestart) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::OpenXRRestarter__RestartCoroutine_d__36, 0x38>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.OpenXRRestarter
class CORDL_TYPE OpenXRRestarter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _PauseAndRetryInitializationCoroutine_d__35 = ::UnityEngine::XR::OpenXR::OpenXRRestarter__PauseAndRetryInitializationCoroutine_d__35;

  using _PauseAndShutdownAndRestartCoroutine_d__34 = ::UnityEngine::XR::OpenXR::OpenXRRestarter__PauseAndShutdownAndRestartCoroutine_d__34;

  using _RestartCoroutine_d__36 = ::UnityEngine::XR::OpenXR::OpenXRRestarter__RestartCoroutine_d__36;

  /// @brief Field <DisableApplicationQuit>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__DisableApplicationQuit_k__BackingField, put = setStaticF__DisableApplicationQuit_k__BackingField)) bool _DisableApplicationQuit_k__BackingField;

  /// @brief Field <TimeBetweenRestartAttempts>k__BackingField, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__TimeBetweenRestartAttempts_k__BackingField, put = setStaticF__TimeBetweenRestartAttempts_k__BackingField)) float_t _TimeBetweenRestartAttempts_k__BackingField;

  __declspec(property(get = get_isRunning)) bool isRunning;

  /// @brief Field m_Coroutine, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Coroutine, put = __cordl_internal_set_m_Coroutine)) ::UnityEngine::Coroutine* m_Coroutine;

  /// @brief Field m_PauseAndRestartCoroutineCountLock, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PauseAndRestartCoroutineCountLock, put = __cordl_internal_set_m_PauseAndRestartCoroutineCountLock)) ::UnityW<::UnityEngine::Object>
      m_PauseAndRestartCoroutineCountLock;

  /// @brief Field m_pauseAndRestartAttempts, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_m_pauseAndRestartAttempts, put = setStaticF_m_pauseAndRestartAttempts)) int32_t m_pauseAndRestartAttempts;

  /// @brief Field m_pauseAndRestartCoroutineCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_m_pauseAndRestartCoroutineCount, put = setStaticF_m_pauseAndRestartCoroutineCount)) int32_t m_pauseAndRestartCoroutineCount;

  /// @brief Field onAfterCoroutine, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_onAfterCoroutine, put = __cordl_internal_set_onAfterCoroutine)) ::System::Action* onAfterCoroutine;

  /// @brief Field onAfterRestart, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_onAfterRestart, put = __cordl_internal_set_onAfterRestart)) ::System::Action* onAfterRestart;

  /// @brief Field onAfterShutdown, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_onAfterShutdown, put = __cordl_internal_set_onAfterShutdown)) ::System::Action* onAfterShutdown;

  /// @brief Field onAfterSuccessfulRestart, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_onAfterSuccessfulRestart, put = __cordl_internal_set_onAfterSuccessfulRestart)) ::System::Action* onAfterSuccessfulRestart;

  /// @brief Field onQuit, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_onQuit, put = __cordl_internal_set_onQuit)) ::System::Action* onQuit;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance)) ::UnityW<::UnityEngine::XR::OpenXR::OpenXRRestarter> s_Instance;

  /// @brief Method DecrementPauseAndRestartCoroutineCount, addr 0x67bc6c0, size 0x100, virtual false, abstract: false, final false
  inline void DecrementPauseAndRestartCoroutineCount();

  /// @brief Method IncrementPauseAndRestartCoroutineCount, addr 0x67bc5c0, size 0x100, virtual false, abstract: false, final false
  inline void IncrementPauseAndRestartCoroutineCount();

  static inline ::UnityEngine::XR::OpenXR::OpenXRRestarter* New_ctor();

  /// @brief Method PauseAndRetryInitialization, addr 0x67bb74c, size 0x170, virtual false, abstract: false, final false
  inline void PauseAndRetryInitialization();

  /// @brief Method PauseAndRetryInitializationCoroutine, addr 0x67bc55c, size 0x64, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* PauseAndRetryInitializationCoroutine(float_t pauseTimeInSeconds);

  /// @brief Method PauseAndShutdownAndRestart, addr 0x67bb5dc, size 0x170, virtual false, abstract: false, final false
  inline void PauseAndShutdownAndRestart();

  /// @brief Method PauseAndShutdownAndRestartCoroutine, addr 0x67bc4f8, size 0x64, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* PauseAndShutdownAndRestartCoroutine(float_t pauseTimeInSeconds);

  /// @brief Method ResetCallbacks, addr 0x67bc1cc, size 0x6c, virtual false, abstract: false, final false
  inline void ResetCallbacks();

  /// @brief Method RestartCoroutine, addr 0x67bc484, size 0x74, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* RestartCoroutine(bool shouldRestart, bool shouldShutdown);

  /// @brief Method Shutdown, addr 0x67bbbf0, size 0x164, virtual false, abstract: false, final false
  inline void Shutdown();

  /// @brief Method ShutdownAndRestart, addr 0x67bb478, size 0x164, virtual false, abstract: false, final false
  inline void ShutdownAndRestart();

  constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_m_Coroutine() const;

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_m_Coroutine();

  constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_m_PauseAndRestartCoroutineCountLock() const;

  constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_m_PauseAndRestartCoroutineCountLock();

  constexpr ::System::Action* const& __cordl_internal_get_onAfterCoroutine() const;

  constexpr ::System::Action*& __cordl_internal_get_onAfterCoroutine();

  constexpr ::System::Action* const& __cordl_internal_get_onAfterRestart() const;

  constexpr ::System::Action*& __cordl_internal_get_onAfterRestart();

  constexpr ::System::Action* const& __cordl_internal_get_onAfterShutdown() const;

  constexpr ::System::Action*& __cordl_internal_get_onAfterShutdown();

  constexpr ::System::Action* const& __cordl_internal_get_onAfterSuccessfulRestart() const;

  constexpr ::System::Action*& __cordl_internal_get_onAfterSuccessfulRestart();

  constexpr ::System::Action* const& __cordl_internal_get_onQuit() const;

  constexpr ::System::Action*& __cordl_internal_get_onQuit();

  constexpr void __cordl_internal_set_m_Coroutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set_m_PauseAndRestartCoroutineCountLock(::UnityW<::UnityEngine::Object> value);

  constexpr void __cordl_internal_set_onAfterCoroutine(::System::Action* value);

  constexpr void __cordl_internal_set_onAfterRestart(::System::Action* value);

  constexpr void __cordl_internal_set_onAfterShutdown(::System::Action* value);

  constexpr void __cordl_internal_set_onAfterSuccessfulRestart(::System::Action* value);

  constexpr void __cordl_internal_set_onQuit(::System::Action* value);

  /// @brief Method .ctor, addr 0x67bc7d8, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  static inline bool getStaticF__DisableApplicationQuit_k__BackingField();

  static inline float_t getStaticF__TimeBetweenRestartAttempts_k__BackingField();

  static inline int32_t getStaticF_m_pauseAndRestartAttempts();

  static inline int32_t getStaticF_m_pauseAndRestartCoroutineCount();

  static inline ::UnityW<::UnityEngine::XR::OpenXR::OpenXRRestarter> getStaticF_s_Instance();

  /// @brief Method get_DisableApplicationQuit, addr 0x67bc3c4, size 0x5c, virtual false, abstract: false, final false
  static inline bool get_DisableApplicationQuit();

  /// @brief Method get_Instance, addr 0x67bb2ac, size 0x1cc, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::XR::OpenXR::OpenXRRestarter> get_Instance();

  /// @brief Method get_PauseAndRestartAttempts, addr 0x67bc30c, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t get_PauseAndRestartAttempts();

  /// @brief Method get_PauseAndRestartCoroutineCount, addr 0x67bc368, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t get_PauseAndRestartCoroutineCount();

  /// @brief Method get_TimeBetweenRestartAttempts, addr 0x67bc248, size 0x5c, virtual false, abstract: false, final false
  static inline float_t get_TimeBetweenRestartAttempts();

  /// @brief Method get_isRunning, addr 0x67bc238, size 0x10, virtual false, abstract: false, final false
  inline bool get_isRunning();

  static inline void setStaticF__DisableApplicationQuit_k__BackingField(bool value);

  static inline void setStaticF__TimeBetweenRestartAttempts_k__BackingField(float_t value);

  static inline void setStaticF_m_pauseAndRestartAttempts(int32_t value);

  static inline void setStaticF_m_pauseAndRestartCoroutineCount(int32_t value);

  static inline void setStaticF_s_Instance(::UnityW<::UnityEngine::XR::OpenXR::OpenXRRestarter> value);

  /// @brief Method set_DisableApplicationQuit, addr 0x67bc420, size 0x64, virtual false, abstract: false, final false
  static inline void set_DisableApplicationQuit(bool value);

  /// @brief Method set_TimeBetweenRestartAttempts, addr 0x67bc2a4, size 0x68, virtual false, abstract: false, final false
  static inline void set_TimeBetweenRestartAttempts(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRRestarter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OpenXRRestarter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenXRRestarter(OpenXRRestarter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRRestarter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenXRRestarter(OpenXRRestarter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18464 };

  /// @brief Field onAfterRestart, offset: 0x20, size: 0x8, def value: None
  ::System::Action* ___onAfterRestart;

  /// @brief Field onAfterShutdown, offset: 0x28, size: 0x8, def value: None
  ::System::Action* ___onAfterShutdown;

  /// @brief Field onQuit, offset: 0x30, size: 0x8, def value: None
  ::System::Action* ___onQuit;

  /// @brief Field onAfterCoroutine, offset: 0x38, size: 0x8, def value: None
  ::System::Action* ___onAfterCoroutine;

  /// @brief Field onAfterSuccessfulRestart, offset: 0x40, size: 0x8, def value: None
  ::System::Action* ___onAfterSuccessfulRestart;

  /// @brief Field m_Coroutine, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___m_Coroutine;

  /// @brief Field m_PauseAndRestartCoroutineCountLock, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Object> ___m_PauseAndRestartCoroutineCountLock;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRRestarter, ___onAfterRestart) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRRestarter, ___onAfterShutdown) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRRestarter, ___onQuit) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRRestarter, ___onAfterCoroutine) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRRestarter, ___onAfterSuccessfulRestart) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRRestarter, ___m_Coroutine) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRRestarter, ___m_PauseAndRestartCoroutineCountLock) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::OpenXRRestarter, 0x58>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
NEED_NO_BOX(::UnityEngine::XR::OpenXR::OpenXRRestarter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::OpenXRRestarter*, "UnityEngine.XR.OpenXR", "OpenXRRestarter");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::OpenXRRestarter__PauseAndRetryInitializationCoroutine_d__35);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::OpenXRRestarter__PauseAndRetryInitializationCoroutine_d__35*, "UnityEngine.XR.OpenXR", "OpenXRRestarter/<PauseAndRetryInitializationCoroutine>d__35");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::OpenXRRestarter__PauseAndShutdownAndRestartCoroutine_d__34);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::OpenXRRestarter__PauseAndShutdownAndRestartCoroutine_d__34*, "UnityEngine.XR.OpenXR", "OpenXRRestarter/<PauseAndShutdownAndRestartCoroutine>d__34");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::OpenXRRestarter__RestartCoroutine_d__36);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::OpenXRRestarter__RestartCoroutine_d__36*, "UnityEngine.XR.OpenXR", "OpenXRRestarter/<RestartCoroutine>d__36");
