#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderWarmupSceneStart)
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class ShaderWarmupSceneSetupData;
}
namespace GlobalNamespace {
class __ShaderWarmupSceneStart___Start_d__2;
}
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
// Forward declare root types
namespace GlobalNamespace {
class ShaderWarmupSceneStart;
}
namespace GlobalNamespace {
class __ShaderWarmupSceneStart___Start_d__2;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ShaderWarmupSceneStart);
MARK_REF_PTR_T(::GlobalNamespace::__ShaderWarmupSceneStart___Start_d__2);
// Type: ::<Start>d__2
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ShaderWarmupSceneStart::<Start>d__2*
class CORDL_TYPE __ShaderWarmupSceneStart___Start_d__2 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::ShaderWarmupSceneStart> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x241ae3c, size 0x90, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__ShaderWarmupSceneStart___Start_d__2* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x241aecc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x241aed4, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x241af14, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x241ae38, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::ShaderWarmupSceneStart> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::ShaderWarmupSceneStart>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ShaderWarmupSceneStart> value);

  /// @brief Method .ctor, addr 0x241ae08, size 0x28, virtual false, abstract: false, final false
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
  constexpr __ShaderWarmupSceneStart___Start_d__2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ShaderWarmupSceneStart___Start_d__2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ShaderWarmupSceneStart___Start_d__2(__ShaderWarmupSceneStart___Start_d__2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ShaderWarmupSceneStart___Start_d__2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ShaderWarmupSceneStart___Start_d__2(__ShaderWarmupSceneStart___Start_d__2 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ShaderWarmupSceneStart> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ShaderWarmupSceneStart___Start_d__2, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ShaderWarmupSceneStart___Start_d__2, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ShaderWarmupSceneStart___Start_d__2, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ShaderWarmupSceneStart___Start_d__2, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ShaderWarmupSceneStart
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ShaderWarmupSceneStart*
class CORDL_TYPE ShaderWarmupSceneStart : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _Start_d__2 = ::GlobalNamespace::__ShaderWarmupSceneStart___Start_d__2;

  /// @brief Field _gameScenesManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__gameScenesManager, put = __cordl_internal_set__gameScenesManager))::UnityW<::GlobalNamespace::GameScenesManager> _gameScenesManager;

  /// @brief Field _sceneSetupData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneSetupData, put = __cordl_internal_set__sceneSetupData))::GlobalNamespace::ShaderWarmupSceneSetupData* _sceneSetupData;

  static inline ::GlobalNamespace::ShaderWarmupSceneStart* New_ctor();

  /// @brief Method Start, addr 0x241ada0, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* Start();

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get__gameScenesManager() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get__gameScenesManager();

  constexpr ::GlobalNamespace::ShaderWarmupSceneSetupData*& __cordl_internal_get__sceneSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ShaderWarmupSceneSetupData*> const& __cordl_internal_get__sceneSetupData() const;

  constexpr void __cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set__sceneSetupData(::GlobalNamespace::ShaderWarmupSceneSetupData* value);

  /// @brief Method .ctor, addr 0x241ae30, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderWarmupSceneStart();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShaderWarmupSceneStart", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShaderWarmupSceneStart(ShaderWarmupSceneStart&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShaderWarmupSceneStart", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShaderWarmupSceneStart(ShaderWarmupSceneStart const&) = delete;

  /// @brief Field _sceneSetupData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::ShaderWarmupSceneSetupData* ____sceneSetupData;

  /// @brief Field _gameScenesManager, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> ____gameScenesManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ShaderWarmupSceneStart, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ShaderWarmupSceneStart, ____sceneSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShaderWarmupSceneStart, ____gameScenesManager) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ShaderWarmupSceneStart);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ShaderWarmupSceneStart*, "", "ShaderWarmupSceneStart");
NEED_NO_BOX(::GlobalNamespace::__ShaderWarmupSceneStart___Start_d__2);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ShaderWarmupSceneStart___Start_d__2*, "", "ShaderWarmupSceneStart/<Start>d__2");
