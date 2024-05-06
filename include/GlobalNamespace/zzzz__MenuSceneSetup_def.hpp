#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MenuSceneSetup)
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class __MenuSceneSetup___Start_d__3;
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
class MenuSceneSetup;
}
namespace GlobalNamespace {
class __MenuSceneSetup___Start_d__3;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MenuSceneSetup);
MARK_REF_PTR_T(::GlobalNamespace::__MenuSceneSetup___Start_d__3);
// Type: ::<Start>d__3
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MenuSceneSetup::<Start>d__3*
class CORDL_TYPE __MenuSceneSetup___Start_d__3 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::MenuSceneSetup> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x26a0584, size 0x94, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__MenuSceneSetup___Start_d__3* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x26a0618, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x26a0620, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x26a0660, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x26a0580, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::MenuSceneSetup> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MenuSceneSetup>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MenuSceneSetup> value);

  /// @brief Method .ctor, addr 0x26a0550, size 0x28, virtual false, abstract: false, final false
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
  constexpr __MenuSceneSetup___Start_d__3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MenuSceneSetup___Start_d__3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuSceneSetup___Start_d__3(__MenuSceneSetup___Start_d__3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuSceneSetup___Start_d__3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuSceneSetup___Start_d__3(__MenuSceneSetup___Start_d__3 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuSceneSetup> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuSceneSetup___Start_d__3, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuSceneSetup___Start_d__3, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuSceneSetup___Start_d__3, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuSceneSetup___Start_d__3, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MenuSceneSetup
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MenuSceneSetup*
class CORDL_TYPE MenuSceneSetup : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _Start_d__3 = ::GlobalNamespace::__MenuSceneSetup___Start_d__3;

  /// @brief Field _gameScenesManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__gameScenesManager, put = __cordl_internal_set__gameScenesManager))::UnityW<::GlobalNamespace::GameScenesManager> _gameScenesManager;

  /// @brief Field _hierarchyManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__hierarchyManager, put = __cordl_internal_set__hierarchyManager))::UnityW<::HMUI::HierarchyManager> _hierarchyManager;

  /// @brief Field _rootFlowCoordinator, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__rootFlowCoordinator, put = __cordl_internal_set__rootFlowCoordinator))::UnityW<::HMUI::FlowCoordinator> _rootFlowCoordinator;

  static inline ::GlobalNamespace::MenuSceneSetup* New_ctor();

  /// @brief Method Start, addr 0x26a04e8, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* Start();

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get__gameScenesManager() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get__gameScenesManager();

  constexpr ::UnityW<::HMUI::HierarchyManager> const& __cordl_internal_get__hierarchyManager() const;

  constexpr ::UnityW<::HMUI::HierarchyManager>& __cordl_internal_get__hierarchyManager();

  constexpr ::UnityW<::HMUI::FlowCoordinator> const& __cordl_internal_get__rootFlowCoordinator() const;

  constexpr ::UnityW<::HMUI::FlowCoordinator>& __cordl_internal_get__rootFlowCoordinator();

  constexpr void __cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set__hierarchyManager(::UnityW<::HMUI::HierarchyManager> value);

  constexpr void __cordl_internal_set__rootFlowCoordinator(::UnityW<::HMUI::FlowCoordinator> value);

  /// @brief Method .ctor, addr 0x26a0578, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuSceneSetup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuSceneSetup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuSceneSetup(MenuSceneSetup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuSceneSetup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuSceneSetup(MenuSceneSetup const&) = delete;

  /// @brief Field _rootFlowCoordinator, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::HMUI::FlowCoordinator> ____rootFlowCoordinator;

  /// @brief Field _gameScenesManager, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> ____gameScenesManager;

  /// @brief Field _hierarchyManager, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::HMUI::HierarchyManager> ____hierarchyManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuSceneSetup, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuSceneSetup, ____rootFlowCoordinator) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuSceneSetup, ____gameScenesManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuSceneSetup, ____hierarchyManager) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MenuSceneSetup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuSceneSetup*, "", "MenuSceneSetup");
NEED_NO_BOX(::GlobalNamespace::__MenuSceneSetup___Start_d__3);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuSceneSetup___Start_d__3*, "", "MenuSceneSetup/<Start>d__3");
