#pragma once
// IWYU pragma private; include "GlobalNamespace/FadeInOnSceneTransitionFinished.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ZenjectSafeBehaviour_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FadeInOnSceneTransitionFinished)
namespace GlobalNamespace {
class FadeInOnSceneTransitionFinished__FadeCoroutine_d__4;
}
namespace GlobalNamespace {
class FadeInOutController;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class FadeInOnSceneTransitionFinished;
}
namespace GlobalNamespace {
class FadeInOnSceneTransitionFinished__FadeCoroutine_d__4;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FadeInOnSceneTransitionFinished);
MARK_REF_PTR_T(::GlobalNamespace::FadeInOnSceneTransitionFinished__FadeCoroutine_d__4);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FadeInOnSceneTransitionFinished/<FadeCoroutine>d__4
class CORDL_TYPE FadeInOnSceneTransitionFinished__FadeCoroutine_d__4 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::FadeInOnSceneTransitionFinished> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x4081e8c, size 0xbc, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::FadeInOnSceneTransitionFinished__FadeCoroutine_d__4* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x4081f48, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x4081f50, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x4081f88, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x4081e88, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::FadeInOnSceneTransitionFinished> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::FadeInOnSceneTransitionFinished>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::FadeInOnSceneTransitionFinished> value);

  /// @brief Method .ctor, addr 0x4081e50, size 0x28, virtual false, abstract: false, final false
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
  constexpr FadeInOnSceneTransitionFinished__FadeCoroutine_d__4();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FadeInOnSceneTransitionFinished__FadeCoroutine_d__4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FadeInOnSceneTransitionFinished__FadeCoroutine_d__4(FadeInOnSceneTransitionFinished__FadeCoroutine_d__4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FadeInOnSceneTransitionFinished__FadeCoroutine_d__4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FadeInOnSceneTransitionFinished__FadeCoroutine_d__4(FadeInOnSceneTransitionFinished__FadeCoroutine_d__4 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17867 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FadeInOnSceneTransitionFinished> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FadeInOnSceneTransitionFinished__FadeCoroutine_d__4, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FadeInOnSceneTransitionFinished__FadeCoroutine_d__4, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FadeInOnSceneTransitionFinished__FadeCoroutine_d__4, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FadeInOnSceneTransitionFinished__FadeCoroutine_d__4, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ZenjectSafeBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FadeInOnSceneTransitionFinished
class CORDL_TYPE FadeInOnSceneTransitionFinished : public ::GlobalNamespace::ZenjectSafeBehaviour {
public:
  // Declarations
  using _FadeCoroutine_d__4 = ::GlobalNamespace::FadeInOnSceneTransitionFinished__FadeCoroutine_d__4;

  /// @brief Field _fadeInOut, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeInOut, put = __cordl_internal_set__fadeInOut)) ::UnityW<::GlobalNamespace::FadeInOutController> _fadeInOut;

  /// @brief Field _gameScenesManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__gameScenesManager, put = __cordl_internal_set__gameScenesManager)) ::UnityW<::GlobalNamespace::GameScenesManager> _gameScenesManager;

  /// @brief Method FadeCoroutine, addr 0x4081de8, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* FadeCoroutine();

  static inline ::GlobalNamespace::FadeInOnSceneTransitionFinished* New_ctor();

  /// @brief Method OnDisable, addr 0x4081e48, size 0x8, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnablePostInjection, addr 0x4081dc8, size 0x20, virtual true, abstract: false, final false
  inline void OnEnablePostInjection();

  constexpr ::UnityW<::GlobalNamespace::FadeInOutController> const& __cordl_internal_get__fadeInOut() const;

  constexpr ::UnityW<::GlobalNamespace::FadeInOutController>& __cordl_internal_get__fadeInOut();

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get__gameScenesManager() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get__gameScenesManager();

  constexpr void __cordl_internal_set__fadeInOut(::UnityW<::GlobalNamespace::FadeInOutController> value);

  constexpr void __cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value);

  /// @brief Method .ctor, addr 0x4081e78, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FadeInOnSceneTransitionFinished();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FadeInOnSceneTransitionFinished", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FadeInOnSceneTransitionFinished(FadeInOnSceneTransitionFinished&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FadeInOnSceneTransitionFinished", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FadeInOnSceneTransitionFinished(FadeInOnSceneTransitionFinished const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17868 };

  /// @brief Field _fadeInOut, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FadeInOutController> ____fadeInOut;

  /// @brief Field _gameScenesManager, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> ____gameScenesManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FadeInOnSceneTransitionFinished, ____fadeInOut) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FadeInOnSceneTransitionFinished, ____gameScenesManager) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FadeInOnSceneTransitionFinished, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FadeInOnSceneTransitionFinished);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FadeInOnSceneTransitionFinished*, "", "FadeInOnSceneTransitionFinished");
NEED_NO_BOX(::GlobalNamespace::FadeInOnSceneTransitionFinished__FadeCoroutine_d__4);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FadeInOnSceneTransitionFinished__FadeCoroutine_d__4*, "", "FadeInOnSceneTransitionFinished/<FadeCoroutine>d__4");
