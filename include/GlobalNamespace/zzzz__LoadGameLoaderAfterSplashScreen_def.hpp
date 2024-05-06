#pragma once
// IWYU pragma private; include "GlobalNamespace/LoadGameLoaderAfterSplashScreen.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LoadGameLoaderAfterSplashScreen)
namespace GlobalNamespace {
class __LoadGameLoaderAfterSplashScreen___Start_d__2;
}
namespace GlobalNamespace {
class __LoadGameLoaderAfterSplashScreen____c;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
class IDisposable;
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
class __LoadGameLoaderAfterSplashScreen___Start_d__2;
}
namespace GlobalNamespace {
class __LoadGameLoaderAfterSplashScreen____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LoadGameLoaderAfterSplashScreen);
MARK_REF_PTR_T(::GlobalNamespace::__LoadGameLoaderAfterSplashScreen___Start_d__2);
MARK_REF_PTR_T(::GlobalNamespace::__LoadGameLoaderAfterSplashScreen____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LoadGameLoaderAfterSplashScreen::<>c*
class CORDL_TYPE __LoadGameLoaderAfterSplashScreen____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__LoadGameLoaderAfterSplashScreen____c* __9;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__2_0, put = setStaticF___9__2_0))::System::Func_1<bool>* __9__2_0;

  static inline ::GlobalNamespace::__LoadGameLoaderAfterSplashScreen____c* New_ctor();

  /// @brief Method <Start>b__2_0, addr 0x25ff538, size 0x8, virtual false, abstract: false, final false
  inline bool _Start_b__2_0();

  /// @brief Method .ctor, addr 0x25ff530, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__LoadGameLoaderAfterSplashScreen____c* getStaticF___9();

  static inline ::System::Func_1<bool>* getStaticF___9__2_0();

  static inline void setStaticF___9(::GlobalNamespace::__LoadGameLoaderAfterSplashScreen____c* value);

  static inline void setStaticF___9__2_0(::System::Func_1<bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoadGameLoaderAfterSplashScreen____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LoadGameLoaderAfterSplashScreen____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LoadGameLoaderAfterSplashScreen____c(__LoadGameLoaderAfterSplashScreen____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LoadGameLoaderAfterSplashScreen____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LoadGameLoaderAfterSplashScreen____c(__LoadGameLoaderAfterSplashScreen____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LoadGameLoaderAfterSplashScreen____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<Start>d__2
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LoadGameLoaderAfterSplashScreen::<Start>d__2*
class CORDL_TYPE __LoadGameLoaderAfterSplashScreen___Start_d__2 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::LoadGameLoaderAfterSplashScreen> __4__this;

  /// @brief Field <sceneAsyncLoad>5__2, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneAsyncLoad_5__2, put = __cordl_internal_set__sceneAsyncLoad_5__2))::UnityEngine::AsyncOperation* _sceneAsyncLoad_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x25ff544, size 0x1ec, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__LoadGameLoaderAfterSplashScreen___Start_d__2* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x25ff730, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x25ff738, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x25ff778, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x25ff540, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::LoadGameLoaderAfterSplashScreen> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::LoadGameLoaderAfterSplashScreen>& __cordl_internal_get___4__this();

  constexpr ::UnityEngine::AsyncOperation*& __cordl_internal_get__sceneAsyncLoad_5__2();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AsyncOperation*> const& __cordl_internal_get__sceneAsyncLoad_5__2() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::LoadGameLoaderAfterSplashScreen> value);

  constexpr void __cordl_internal_set__sceneAsyncLoad_5__2(::UnityEngine::AsyncOperation* value);

  /// @brief Method .ctor, addr 0x25ff49c, size 0x28, virtual false, abstract: false, final false
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
  constexpr __LoadGameLoaderAfterSplashScreen___Start_d__2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LoadGameLoaderAfterSplashScreen___Start_d__2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LoadGameLoaderAfterSplashScreen___Start_d__2(__LoadGameLoaderAfterSplashScreen___Start_d__2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LoadGameLoaderAfterSplashScreen___Start_d__2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LoadGameLoaderAfterSplashScreen___Start_d__2(__LoadGameLoaderAfterSplashScreen___Start_d__2 const&) = delete;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LoadGameLoaderAfterSplashScreen___Start_d__2, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LoadGameLoaderAfterSplashScreen___Start_d__2, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LoadGameLoaderAfterSplashScreen___Start_d__2, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LoadGameLoaderAfterSplashScreen___Start_d__2, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LoadGameLoaderAfterSplashScreen___Start_d__2, ____sceneAsyncLoad_5__2) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LoadGameLoaderAfterSplashScreen
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LoadGameLoaderAfterSplashScreen*
class CORDL_TYPE LoadGameLoaderAfterSplashScreen : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _Start_d__2 = ::GlobalNamespace::__LoadGameLoaderAfterSplashScreen___Start_d__2;

  using __c = ::GlobalNamespace::__LoadGameLoaderAfterSplashScreen____c;

  /// @brief Field _camera, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__camera, put = __cordl_internal_set__camera))::UnityW<::UnityEngine::Camera> _camera;

  static inline ::GlobalNamespace::LoadGameLoaderAfterSplashScreen* New_ctor();

  /// @brief Method Start, addr 0x25ff434, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* Start();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__camera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__camera();

  constexpr void __cordl_internal_set__camera(::UnityW<::UnityEngine::Camera> value);

  /// @brief Method .ctor, addr 0x25ff4c4, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _camera, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ____camera;

  /// @brief Field kGameLoaderSceneName offset 0xffffffff size 0x8
  static constexpr ::ConstString kGameLoaderSceneName{ u"GameLoader" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LoadGameLoaderAfterSplashScreen, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LoadGameLoaderAfterSplashScreen, ____camera) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LoadGameLoaderAfterSplashScreen);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LoadGameLoaderAfterSplashScreen*, "", "LoadGameLoaderAfterSplashScreen");
NEED_NO_BOX(::GlobalNamespace::__LoadGameLoaderAfterSplashScreen___Start_d__2);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LoadGameLoaderAfterSplashScreen___Start_d__2*, "", "LoadGameLoaderAfterSplashScreen/<Start>d__2");
NEED_NO_BOX(::GlobalNamespace::__LoadGameLoaderAfterSplashScreen____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LoadGameLoaderAfterSplashScreen____c*, "", "LoadGameLoaderAfterSplashScreen/<>c");
