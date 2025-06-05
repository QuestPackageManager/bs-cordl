#pragma once
// IWYU pragma private; include "GlobalNamespace/LoadGameLoaderAfterSplashScreen.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LoadGameLoaderAfterSplashScreen)
namespace GlobalNamespace {
class LoadGameLoaderAfterSplashScreen__Start_d__2;
}
namespace GlobalNamespace {
class LoadGameLoaderAfterSplashScreen___c;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
class LoadGameLoaderAfterSplashScreen;
}
namespace GlobalNamespace {
class LoadGameLoaderAfterSplashScreen__Start_d__2;
}
namespace GlobalNamespace {
class LoadGameLoaderAfterSplashScreen___c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LoadGameLoaderAfterSplashScreen);
MARK_REF_PTR_T(::GlobalNamespace::LoadGameLoaderAfterSplashScreen__Start_d__2);
MARK_REF_PTR_T(::GlobalNamespace::LoadGameLoaderAfterSplashScreen___c);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LoadGameLoaderAfterSplashScreen/<>c
class CORDL_TYPE LoadGameLoaderAfterSplashScreen___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::LoadGameLoaderAfterSplashScreen___c* __9;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_0, put = setStaticF___9__2_0)) ::System::Func_1<bool>* __9__2_0;

  static inline ::GlobalNamespace::LoadGameLoaderAfterSplashScreen___c* New_ctor();

  /// @brief Method <Start>b__2_0, addr 0x2718be0, size 0x8, virtual false, abstract: false, final false
  inline bool _Start_b__2_0();

  /// @brief Method .ctor, addr 0x2718bd8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::LoadGameLoaderAfterSplashScreen___c* getStaticF___9();

  static inline ::System::Func_1<bool>* getStaticF___9__2_0();

  static inline void setStaticF___9(::GlobalNamespace::LoadGameLoaderAfterSplashScreen___c* value);

  static inline void setStaticF___9__2_0(::System::Func_1<bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LoadGameLoaderAfterSplashScreen___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LoadGameLoaderAfterSplashScreen___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LoadGameLoaderAfterSplashScreen___c(LoadGameLoaderAfterSplashScreen___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LoadGameLoaderAfterSplashScreen___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LoadGameLoaderAfterSplashScreen___c(LoadGameLoaderAfterSplashScreen___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17793 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LoadGameLoaderAfterSplashScreen___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LoadGameLoaderAfterSplashScreen/<Start>d__2
class CORDL_TYPE LoadGameLoaderAfterSplashScreen__Start_d__2 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::LoadGameLoaderAfterSplashScreen> __4__this;

  /// @brief Field <sceneAsyncLoad>5__2, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneAsyncLoad_5__2, put = __cordl_internal_set__sceneAsyncLoad_5__2)) ::UnityEngine::AsyncOperation* _sceneAsyncLoad_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2718bec, size 0x1e4, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::LoadGameLoaderAfterSplashScreen__Start_d__2* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2718dd0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2718dd8, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2718e10, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2718be8, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::LoadGameLoaderAfterSplashScreen> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::LoadGameLoaderAfterSplashScreen>& __cordl_internal_get___4__this();

  constexpr ::UnityEngine::AsyncOperation* const& __cordl_internal_get__sceneAsyncLoad_5__2() const;

  constexpr ::UnityEngine::AsyncOperation*& __cordl_internal_get__sceneAsyncLoad_5__2();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::LoadGameLoaderAfterSplashScreen> value);

  constexpr void __cordl_internal_set__sceneAsyncLoad_5__2(::UnityEngine::AsyncOperation* value);

  /// @brief Method .ctor, addr 0x2718b4c, size 0x28, virtual false, abstract: false, final false
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
  constexpr LoadGameLoaderAfterSplashScreen__Start_d__2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LoadGameLoaderAfterSplashScreen__Start_d__2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LoadGameLoaderAfterSplashScreen__Start_d__2(LoadGameLoaderAfterSplashScreen__Start_d__2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LoadGameLoaderAfterSplashScreen__Start_d__2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LoadGameLoaderAfterSplashScreen__Start_d__2(LoadGameLoaderAfterSplashScreen__Start_d__2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17794 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LoadGameLoaderAfterSplashScreen> _____4__this;

  /// @brief Field <sceneAsyncLoad>5__2, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::AsyncOperation* ____sceneAsyncLoad_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LoadGameLoaderAfterSplashScreen__Start_d__2, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LoadGameLoaderAfterSplashScreen__Start_d__2, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LoadGameLoaderAfterSplashScreen__Start_d__2, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LoadGameLoaderAfterSplashScreen__Start_d__2, ____sceneAsyncLoad_5__2) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LoadGameLoaderAfterSplashScreen__Start_d__2, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LoadGameLoaderAfterSplashScreen
class CORDL_TYPE LoadGameLoaderAfterSplashScreen : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _Start_d__2 = ::GlobalNamespace::LoadGameLoaderAfterSplashScreen__Start_d__2;

  using __c = ::GlobalNamespace::LoadGameLoaderAfterSplashScreen___c;

  /// @brief Field _camera, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__camera, put = __cordl_internal_set__camera)) ::UnityW<::UnityEngine::Camera> _camera;

  static inline ::GlobalNamespace::LoadGameLoaderAfterSplashScreen* New_ctor();

  /// @brief Method Start, addr 0x2718aec, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* Start();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__camera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__camera();

  constexpr void __cordl_internal_set__camera(::UnityW<::UnityEngine::Camera> value);

  /// @brief Method .ctor, addr 0x2718b74, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LoadGameLoaderAfterSplashScreen();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LoadGameLoaderAfterSplashScreen", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LoadGameLoaderAfterSplashScreen(LoadGameLoaderAfterSplashScreen&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LoadGameLoaderAfterSplashScreen", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LoadGameLoaderAfterSplashScreen(LoadGameLoaderAfterSplashScreen const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17795 };

  /// @brief Field kGameLoaderSceneName offset 0xffffffff size 0x8
  static constexpr ::ConstString kGameLoaderSceneName{ u"GameLoader" };

  /// @brief Field _camera, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ____camera;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LoadGameLoaderAfterSplashScreen, ____camera) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LoadGameLoaderAfterSplashScreen, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LoadGameLoaderAfterSplashScreen);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LoadGameLoaderAfterSplashScreen*, "", "LoadGameLoaderAfterSplashScreen");
NEED_NO_BOX(::GlobalNamespace::LoadGameLoaderAfterSplashScreen__Start_d__2);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LoadGameLoaderAfterSplashScreen__Start_d__2*, "", "LoadGameLoaderAfterSplashScreen/<Start>d__2");
NEED_NO_BOX(::GlobalNamespace::LoadGameLoaderAfterSplashScreen___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LoadGameLoaderAfterSplashScreen___c*, "", "LoadGameLoaderAfterSplashScreen/<>c");
