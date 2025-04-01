#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentShaderWarmup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnvironmentShaderWarmup)
namespace GlobalNamespace {
class EnvironmentShaderWarmup__Start_d__7;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class MainCamera;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentShaderWarmup;
}
namespace GlobalNamespace {
class EnvironmentShaderWarmup__Start_d__7;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentShaderWarmup);
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentShaderWarmup__Start_d__7);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EnvironmentShaderWarmup/<Start>d__7
class CORDL_TYPE EnvironmentShaderWarmup__Start_d__7 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::EnvironmentShaderWarmup> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3ac48e0, size 0x584, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::EnvironmentShaderWarmup__Start_d__7* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x3ac4e64, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3ac4e6c, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3ac4ea4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3ac48dc, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::EnvironmentShaderWarmup> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::EnvironmentShaderWarmup>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::EnvironmentShaderWarmup> value);

  /// @brief Method .ctor, addr 0x3ac48ac, size 0x28, virtual false, abstract: false, final false
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
  constexpr EnvironmentShaderWarmup__Start_d__7();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentShaderWarmup__Start_d__7", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentShaderWarmup__Start_d__7(EnvironmentShaderWarmup__Start_d__7&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentShaderWarmup__Start_d__7", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentShaderWarmup__Start_d__7(EnvironmentShaderWarmup__Start_d__7 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3971 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EnvironmentShaderWarmup> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EnvironmentShaderWarmup__Start_d__7, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentShaderWarmup__Start_d__7, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentShaderWarmup__Start_d__7, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentShaderWarmup__Start_d__7, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: EnvironmentShaderWarmup
class CORDL_TYPE EnvironmentShaderWarmup : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _Start_d__7 = ::GlobalNamespace::EnvironmentShaderWarmup__Start_d__7;

  /// @brief Field _audioTimeSource, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSource, put = __cordl_internal_set__audioTimeSource)) ::GlobalNamespace::IAudioTimeSource* _audioTimeSource;

  /// @brief Field _gameScenesManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__gameScenesManager, put = __cordl_internal_set__gameScenesManager)) ::UnityW<::GlobalNamespace::GameScenesManager> _gameScenesManager;

  /// @brief Field _mainCamera, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__mainCamera, put = __cordl_internal_set__mainCamera)) ::UnityW<::GlobalNamespace::MainCamera> _mainCamera;

  /// @brief Field _materials, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__materials, put = __cordl_internal_set__materials)) ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>
      _materials;

  /// @brief Field _parentingTransform, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__parentingTransform, put = __cordl_internal_set__parentingTransform)) ::UnityW<::UnityEngine::Transform> _parentingTransform;

  static inline ::GlobalNamespace::EnvironmentShaderWarmup* New_ctor();

  /// @brief Method Start, addr 0x3ac484c, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* Start();

  constexpr ::GlobalNamespace::IAudioTimeSource* const& __cordl_internal_get__audioTimeSource() const;

  constexpr ::GlobalNamespace::IAudioTimeSource*& __cordl_internal_get__audioTimeSource();

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get__gameScenesManager() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get__gameScenesManager();

  constexpr ::UnityW<::GlobalNamespace::MainCamera> const& __cordl_internal_get__mainCamera() const;

  constexpr ::UnityW<::GlobalNamespace::MainCamera>& __cordl_internal_get__mainCamera();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> const& __cordl_internal_get__materials() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>& __cordl_internal_get__materials();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__parentingTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__parentingTransform();

  constexpr void __cordl_internal_set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value);

  constexpr void __cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set__mainCamera(::UnityW<::GlobalNamespace::MainCamera> value);

  constexpr void __cordl_internal_set__materials(::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> value);

  constexpr void __cordl_internal_set__parentingTransform(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x3ac48d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentShaderWarmup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentShaderWarmup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentShaderWarmup(EnvironmentShaderWarmup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentShaderWarmup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentShaderWarmup(EnvironmentShaderWarmup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3972 };

  /// @brief Field kNumberOfColumns offset 0xffffffff size 0x4
  static constexpr int32_t kNumberOfColumns{ static_cast<int32_t>(0x4) };

  /// @brief Field kNumberOfRows offset 0xffffffff size 0x4
  static constexpr int32_t kNumberOfRows{ static_cast<int32_t>(0x4) };

  /// @brief Field _materials, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> ____materials;

  /// @brief Field _mainCamera, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainCamera> ____mainCamera;

  /// @brief Field _gameScenesManager, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> ____gameScenesManager;

  /// @brief Field _audioTimeSource, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSource;

  /// @brief Field _parentingTransform, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____parentingTransform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EnvironmentShaderWarmup, ____materials) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentShaderWarmup, ____mainCamera) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentShaderWarmup, ____gameScenesManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentShaderWarmup, ____audioTimeSource) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentShaderWarmup, ____parentingTransform) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentShaderWarmup, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentShaderWarmup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentShaderWarmup*, "", "EnvironmentShaderWarmup");
NEED_NO_BOX(::GlobalNamespace::EnvironmentShaderWarmup__Start_d__7);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentShaderWarmup__Start_d__7*, "", "EnvironmentShaderWarmup/<Start>d__7");
