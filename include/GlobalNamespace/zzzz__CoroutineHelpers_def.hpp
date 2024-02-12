#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CoroutineHelpers)
namespace GlobalNamespace {
class ICoroutineStarter;
}
namespace GlobalNamespace {
class __CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0;
}
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
namespace UnityEngine {
class Coroutine;
}
// Forward declare root types
namespace GlobalNamespace {
class CoroutineHelpers;
}
namespace GlobalNamespace {
class __CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CoroutineHelpers);
MARK_REF_PTR_T(::GlobalNamespace::__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0);
// Type: ::<ExecuteAfterDelayCoroutine>d__0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15593))
// CS Name: ::CoroutineHelpers::<ExecuteAfterDelayCoroutine>d__0*
class CORDL_TYPE __CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field timeSeconds, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_timeSeconds, put = __cordl_internal_set_timeSeconds)) float_t timeSeconds;

  /// @brief Field action, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_action, put = __cordl_internal_set_action))::System::Action* action;

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

  constexpr float_t& __cordl_internal_get_timeSeconds();

  constexpr float_t const& __cordl_internal_get_timeSeconds() const;

  constexpr void __cordl_internal_set_timeSeconds(float_t value);

  constexpr ::System::Action*& __cordl_internal_get_action();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_action() const;

  constexpr void __cordl_internal_set_action(::System::Action* value);

  static inline ::GlobalNamespace::__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0xe50d94, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0xe50f38, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0xe50f3c, size 0xb8, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xe50ff4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0xe50ffc, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0xe5103c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0(__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0(__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field timeSeconds, offset: 0x20, size: 0x4, def value: None
  float_t ___timeSeconds;

  /// @brief Field action, offset: 0x28, size: 0x8, def value: None
  ::System::Action* ___action;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0, ___timeSeconds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0, ___action) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::CoroutineHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15594))
// CS Name: ::CoroutineHelpers*
class CORDL_TYPE CoroutineHelpers : public ::System::Object {
public:
  // Declarations
  using _ExecuteAfterDelayCoroutine_d__0 = ::GlobalNamespace::__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0;

  /// @brief Method ExecuteAfterDelayCoroutine, addr 0xe50d1c, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Collections::IEnumerator* ExecuteAfterDelayCoroutine(::System::Action* action, float_t timeSeconds);

  /// @brief Method StartSingleCoroutine, addr 0xe50dbc, size 0xc4, virtual false, abstract: false, final false
  static inline void StartSingleCoroutine(::GlobalNamespace::ICoroutineStarter* coroutineStarter, ByRef<::UnityEngine::Coroutine*> handle, ::System::Collections::IEnumerator* routine);

  /// @brief Method StopSingleCoroutine, addr 0xe50e80, size 0xb8, virtual false, abstract: false, final false
  static inline void StopSingleCoroutine(::GlobalNamespace::ICoroutineStarter* coroutineStarter, ByRef<::UnityEngine::Coroutine*> handle);

  // Ctor Parameters [CppParam { name: "", ty: "CoroutineHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CoroutineHelpers(CoroutineHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CoroutineHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CoroutineHelpers(CoroutineHelpers const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CoroutineHelpers();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CoroutineHelpers, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CoroutineHelpers);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CoroutineHelpers*, "", "CoroutineHelpers");
NEED_NO_BOX(::GlobalNamespace::__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CoroutineHelpers___ExecuteAfterDelayCoroutine_d__0*, "", "CoroutineHelpers/<ExecuteAfterDelayCoroutine>d__0");
