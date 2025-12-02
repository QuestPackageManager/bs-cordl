#pragma once
// IWYU pragma private; include "GlobalNamespace/DefaultSceneStart.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultSceneStart)
namespace GlobalNamespace {
class DefaultSceneStart__Start_d__3;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace HMUI {
class FlowCoordinator;
}
namespace HMUI {
class HierarchyManager;
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
class DefaultSceneStart;
}
namespace GlobalNamespace {
class DefaultSceneStart__Start_d__3;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DefaultSceneStart);
MARK_REF_PTR_T(::GlobalNamespace::DefaultSceneStart__Start_d__3);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DefaultSceneStart/<Start>d__3
class CORDL_TYPE DefaultSceneStart__Start_d__3 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::DefaultSceneStart> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x57194b8, size 0x84, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::DefaultSceneStart__Start_d__3* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x571953c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x5719544, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x571957c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x57194b4, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::DefaultSceneStart> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::DefaultSceneStart>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::DefaultSceneStart> value);

  /// @brief Method .ctor, addr 0x57194a8, size 0x8, virtual false, abstract: false, final false
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
  constexpr DefaultSceneStart__Start_d__3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultSceneStart__Start_d__3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultSceneStart__Start_d__3(DefaultSceneStart__Start_d__3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultSceneStart__Start_d__3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultSceneStart__Start_d__3(DefaultSceneStart__Start_d__3 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6797 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::DefaultSceneStart> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DefaultSceneStart__Start_d__3, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultSceneStart__Start_d__3, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultSceneStart__Start_d__3, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DefaultSceneStart__Start_d__3, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DefaultSceneStart
class CORDL_TYPE DefaultSceneStart : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _Start_d__3 = ::GlobalNamespace::DefaultSceneStart__Start_d__3;

  /// @brief Field _flowCoordinator, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__flowCoordinator, put = __cordl_internal_set__flowCoordinator)) ::UnityW<::HMUI::FlowCoordinator> _flowCoordinator;

  /// @brief Field _gameScenesManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__gameScenesManager, put = __cordl_internal_set__gameScenesManager)) ::UnityW<::GlobalNamespace::GameScenesManager> _gameScenesManager;

  /// @brief Field _hierarchyManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__hierarchyManager, put = __cordl_internal_set__hierarchyManager)) ::UnityW<::HMUI::HierarchyManager> _hierarchyManager;

  static inline ::GlobalNamespace::DefaultSceneStart* New_ctor();

  /// @brief Method Start, addr 0x5719454, size 0x54, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* Start();

  constexpr ::UnityW<::HMUI::FlowCoordinator> const& __cordl_internal_get__flowCoordinator() const;

  constexpr ::UnityW<::HMUI::FlowCoordinator>& __cordl_internal_get__flowCoordinator();

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get__gameScenesManager() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get__gameScenesManager();

  constexpr ::UnityW<::HMUI::HierarchyManager> const& __cordl_internal_get__hierarchyManager() const;

  constexpr ::UnityW<::HMUI::HierarchyManager>& __cordl_internal_get__hierarchyManager();

  constexpr void __cordl_internal_set__flowCoordinator(::UnityW<::HMUI::FlowCoordinator> value);

  constexpr void __cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set__hierarchyManager(::UnityW<::HMUI::HierarchyManager> value);

  /// @brief Method .ctor, addr 0x57194b0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultSceneStart();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultSceneStart", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultSceneStart(DefaultSceneStart&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultSceneStart", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultSceneStart(DefaultSceneStart const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6798 };

  /// @brief Field _flowCoordinator, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::FlowCoordinator> ____flowCoordinator;

  /// @brief Field _gameScenesManager, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> ____gameScenesManager;

  /// @brief Field _hierarchyManager, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::HMUI::HierarchyManager> ____hierarchyManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DefaultSceneStart, ____flowCoordinator) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultSceneStart, ____gameScenesManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultSceneStart, ____hierarchyManager) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DefaultSceneStart, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DefaultSceneStart);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DefaultSceneStart*, "", "DefaultSceneStart");
NEED_NO_BOX(::GlobalNamespace::DefaultSceneStart__Start_d__3);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DefaultSceneStart__Start_d__3*, "", "DefaultSceneStart/<Start>d__3");
