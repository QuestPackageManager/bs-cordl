#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LoadAppInitAfterSplashScreen)
namespace GlobalNamespace {
class AppInitScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class __LoadAppInitAfterSplashScreen____c;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
class Camera;
}
namespace GlobalNamespace {
class __LoadAppInitAfterSplashScreen___Start_d__2;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace System {
template <typename TResult> class Func_1;
}
// Forward declare root types
namespace GlobalNamespace {
class LoadAppInitAfterSplashScreen;
}
namespace GlobalNamespace {
class __LoadAppInitAfterSplashScreen___Start_d__2;
}
namespace GlobalNamespace {
class __LoadAppInitAfterSplashScreen____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LoadAppInitAfterSplashScreen);
MARK_REF_PTR_T(::GlobalNamespace::__LoadAppInitAfterSplashScreen___Start_d__2);
MARK_REF_PTR_T(::GlobalNamespace::__LoadAppInitAfterSplashScreen____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4024))
// CS Name: ::LoadAppInitAfterSplashScreen::<>c*
class CORDL_TYPE __LoadAppInitAfterSplashScreen____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__LoadAppInitAfterSplashScreen____c* __9;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__2_0, put = setStaticF___9__2_0))::System::Func_1<bool>* __9__2_0;

  static inline void setStaticF___9(::GlobalNamespace::__LoadAppInitAfterSplashScreen____c* value);

  static inline ::GlobalNamespace::__LoadAppInitAfterSplashScreen____c* getStaticF___9();

  static inline void setStaticF___9__2_0(::System::Func_1<bool>* value);

  static inline ::System::Func_1<bool>* getStaticF___9__2_0();

  static inline ::GlobalNamespace::__LoadAppInitAfterSplashScreen____c* New_ctor();

  /// @brief Method .ctor, addr 0x2226038, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Start>b__2_0, addr 0x2226040, size 0x8, virtual false, abstract: false, final false
  inline bool _Start_b__2_0();

  // Ctor Parameters [CppParam { name: "", ty: "__LoadAppInitAfterSplashScreen____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LoadAppInitAfterSplashScreen____c(__LoadAppInitAfterSplashScreen____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LoadAppInitAfterSplashScreen____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LoadAppInitAfterSplashScreen____c(__LoadAppInitAfterSplashScreen____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoadAppInitAfterSplashScreen____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LoadAppInitAfterSplashScreen____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<Start>d__2
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4025))
// CS Name: ::LoadAppInitAfterSplashScreen::<Start>d__2*
class CORDL_TYPE __LoadAppInitAfterSplashScreen___Start_d__2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::LoadAppInitAfterSplashScreen* __4__this;

  /// @brief Field <sceneAsyncLoad>5__2, offset 0x28, size 0x8
  __declspec(property(get = __get__sceneAsyncLoad_5__2, put = __set__sceneAsyncLoad_5__2))::UnityEngine::AsyncOperation* _sceneAsyncLoad_5__2;

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

  constexpr ::GlobalNamespace::LoadAppInitAfterSplashScreen*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LoadAppInitAfterSplashScreen*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::LoadAppInitAfterSplashScreen* value);

  constexpr ::UnityEngine::AsyncOperation*& __get__sceneAsyncLoad_5__2();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AsyncOperation*> const& __get__sceneAsyncLoad_5__2() const;

  constexpr void __set__sceneAsyncLoad_5__2(::UnityEngine::AsyncOperation* value);

  static inline ::GlobalNamespace::__LoadAppInitAfterSplashScreen___Start_d__2* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x2225fa4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x2226048, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x222604c, size 0x1f0, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x222623c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2226244, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2226284, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__LoadAppInitAfterSplashScreen___Start_d__2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LoadAppInitAfterSplashScreen___Start_d__2(__LoadAppInitAfterSplashScreen___Start_d__2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LoadAppInitAfterSplashScreen___Start_d__2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LoadAppInitAfterSplashScreen___Start_d__2(__LoadAppInitAfterSplashScreen___Start_d__2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoadAppInitAfterSplashScreen___Start_d__2();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::LoadAppInitAfterSplashScreen* _____4__this;

  /// @brief Field <sceneAsyncLoad>5__2, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::AsyncOperation* ____sceneAsyncLoad_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LoadAppInitAfterSplashScreen___Start_d__2, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LoadAppInitAfterSplashScreen___Start_d__2, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LoadAppInitAfterSplashScreen___Start_d__2, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LoadAppInitAfterSplashScreen___Start_d__2, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LoadAppInitAfterSplashScreen___Start_d__2, ____sceneAsyncLoad_5__2) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LoadAppInitAfterSplashScreen
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4026))
// CS Name: ::LoadAppInitAfterSplashScreen*
class CORDL_TYPE LoadAppInitAfterSplashScreen : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _Start_d__2 = ::GlobalNamespace::__LoadAppInitAfterSplashScreen___Start_d__2;

  using __c = ::GlobalNamespace::__LoadAppInitAfterSplashScreen____c;

  /// @brief Field _camera, offset 0x18, size 0x8
  __declspec(property(get = __get__camera, put = __set__camera))::UnityEngine::Camera* _camera;

  /// @brief Field _appInitScenesTransitionSetup, offset 0x20, size 0x8
  __declspec(property(get = __get__appInitScenesTransitionSetup, put = __set__appInitScenesTransitionSetup))::GlobalNamespace::AppInitScenesTransitionSetupDataSO* _appInitScenesTransitionSetup;

  constexpr ::UnityEngine::Camera*& __get__camera();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> const& __get__camera() const;

  constexpr void __set__camera(::UnityEngine::Camera* value);

  constexpr ::GlobalNamespace::AppInitScenesTransitionSetupDataSO*& __get__appInitScenesTransitionSetup();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppInitScenesTransitionSetupDataSO*> const& __get__appInitScenesTransitionSetup() const;

  constexpr void __set__appInitScenesTransitionSetup(::GlobalNamespace::AppInitScenesTransitionSetupDataSO* value);

  /// @brief Method Start, addr 0x2225f3c, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* Start();

  static inline ::GlobalNamespace::LoadAppInitAfterSplashScreen* New_ctor();

  /// @brief Method .ctor, addr 0x2225fcc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LoadAppInitAfterSplashScreen", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LoadAppInitAfterSplashScreen(LoadAppInitAfterSplashScreen&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LoadAppInitAfterSplashScreen", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LoadAppInitAfterSplashScreen(LoadAppInitAfterSplashScreen const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LoadAppInitAfterSplashScreen();

public:
  /// @brief Field _camera, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Camera* ____camera;

  /// @brief Field _appInitScenesTransitionSetup, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::AppInitScenesTransitionSetupDataSO* ____appInitScenesTransitionSetup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LoadAppInitAfterSplashScreen, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LoadAppInitAfterSplashScreen, ____camera) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LoadAppInitAfterSplashScreen, ____appInitScenesTransitionSetup) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LoadAppInitAfterSplashScreen);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LoadAppInitAfterSplashScreen*, "", "LoadAppInitAfterSplashScreen");
NEED_NO_BOX(::GlobalNamespace::__LoadAppInitAfterSplashScreen___Start_d__2);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LoadAppInitAfterSplashScreen___Start_d__2*, "", "LoadAppInitAfterSplashScreen/<Start>d__2");
NEED_NO_BOX(::GlobalNamespace::__LoadAppInitAfterSplashScreen____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LoadAppInitAfterSplashScreen____c*, "", "LoadAppInitAfterSplashScreen/<>c");
