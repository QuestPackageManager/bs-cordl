#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugUpdater.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__ScreenOrientation_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DebugUpdater)
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
namespace UnityEngine::Rendering {
class DebugUpdater__DoAfterInputModuleUpdated_d__9;
}
namespace UnityEngine::Rendering {
class DebugUpdater__RefreshRuntimeUINextFrame_d__15;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class DebugUpdater;
}
namespace UnityEngine::Rendering {
class DebugUpdater__DoAfterInputModuleUpdated_d__9;
}
namespace UnityEngine::Rendering {
class DebugUpdater__RefreshRuntimeUINextFrame_d__15;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugUpdater);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugUpdater__DoAfterInputModuleUpdated_d__9);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugUpdater__RefreshRuntimeUINextFrame_d__15);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugUpdater/<DoAfterInputModuleUpdated>d__9
class CORDL_TYPE DebugUpdater__DoAfterInputModuleUpdated_d__9 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field action, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_action, put = __cordl_internal_set_action)) ::System::Action* action;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x654e480, size 0xd0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::Rendering::DebugUpdater__DoAfterInputModuleUpdated_d__9* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x654e550, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x654e558, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x654e590, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x654e47c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::System::Action* const& __cordl_internal_get_action() const;

  constexpr ::System::Action*& __cordl_internal_get_action();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set_action(::System::Action* value);

  /// @brief Method .ctor, addr 0x654dfdc, size 0x8, virtual false, abstract: false, final false
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
  constexpr DebugUpdater__DoAfterInputModuleUpdated_d__9();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUpdater__DoAfterInputModuleUpdated_d__9", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUpdater__DoAfterInputModuleUpdated_d__9(DebugUpdater__DoAfterInputModuleUpdated_d__9&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUpdater__DoAfterInputModuleUpdated_d__9", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUpdater__DoAfterInputModuleUpdated_d__9(DebugUpdater__DoAfterInputModuleUpdated_d__9 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12004 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field action, offset: 0x20, size: 0x8, def value: None
  ::System::Action* ___action;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugUpdater__DoAfterInputModuleUpdated_d__9, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUpdater__DoAfterInputModuleUpdated_d__9, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUpdater__DoAfterInputModuleUpdated_d__9, ___action) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugUpdater__DoAfterInputModuleUpdated_d__9, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugUpdater/<RefreshRuntimeUINextFrame>d__15
class CORDL_TYPE DebugUpdater__RefreshRuntimeUINextFrame_d__15 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x654e59c, size 0xac, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::Rendering::DebugUpdater__RefreshRuntimeUINextFrame_d__15* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x654e648, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x654e650, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x654e688, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x654e598, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  /// @brief Method .ctor, addr 0x654e470, size 0x8, virtual false, abstract: false, final false
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
  constexpr DebugUpdater__RefreshRuntimeUINextFrame_d__15();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUpdater__RefreshRuntimeUINextFrame_d__15", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUpdater__RefreshRuntimeUINextFrame_d__15(DebugUpdater__RefreshRuntimeUINextFrame_d__15&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUpdater__RefreshRuntimeUINextFrame_d__15", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUpdater__RefreshRuntimeUINextFrame_d__15(DebugUpdater__RefreshRuntimeUINextFrame_d__15 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12005 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugUpdater__RefreshRuntimeUINextFrame_d__15, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUpdater__RefreshRuntimeUINextFrame_d__15, _____2__current) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugUpdater__RefreshRuntimeUINextFrame_d__15, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.ScreenOrientation
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugUpdater
class CORDL_TYPE DebugUpdater : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _DoAfterInputModuleUpdated_d__9 = ::UnityEngine::Rendering::DebugUpdater__DoAfterInputModuleUpdated_d__9;

  using _RefreshRuntimeUINextFrame_d__15 = ::UnityEngine::Rendering::DebugUpdater__RefreshRuntimeUINextFrame_d__15;

  /// @brief Field m_Orientation, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Orientation, put = __cordl_internal_set_m_Orientation)) ::UnityEngine::ScreenOrientation m_Orientation;

  /// @brief Field m_RuntimeUiWasVisibleLastFrame, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RuntimeUiWasVisibleLastFrame, put = __cordl_internal_set_m_RuntimeUiWasVisibleLastFrame)) bool m_RuntimeUiWasVisibleLastFrame;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance)) ::UnityW<::UnityEngine::Rendering::DebugUpdater> s_Instance;

  /// @brief Method AssignDefaultActions, addr 0x654e120, size 0x160, virtual false, abstract: false, final false
  inline void AssignDefaultActions();

  /// @brief Method CheckInputModuleExists, addr 0x654dfe4, size 0x13c, virtual false, abstract: false, final false
  inline void CheckInputModuleExists();

  /// @brief Method CreateDebugEventSystem, addr 0x654de98, size 0xf0, virtual false, abstract: false, final false
  inline void CreateDebugEventSystem();

  /// @brief Method DestroyDebugEventSystem, addr 0x654dd28, size 0x170, virtual false, abstract: false, final false
  inline void DestroyDebugEventSystem();

  /// @brief Method DisableRuntime, addr 0x654d9fc, size 0x134, virtual false, abstract: false, final false
  static inline void DisableRuntime();

  /// @brief Method DoAfterInputModuleUpdated, addr 0x654df88, size 0x54, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* DoAfterInputModuleUpdated(::System::Action* action);

  /// @brief Method EnableRuntime, addr 0x654d848, size 0x1b4, virtual false, abstract: false, final false
  static inline void EnableRuntime();

  /// @brief Method EnsureExactlyOneEventSystem, addr 0x654db30, size 0x1f8, virtual false, abstract: false, final false
  inline void EnsureExactlyOneEventSystem();

  /// @brief Method HandleInternalEventSystemComponents, addr 0x6548880, size 0xc0, virtual false, abstract: false, final false
  static inline void HandleInternalEventSystemComponents(bool uiEnabled);

  static inline ::UnityEngine::Rendering::DebugUpdater* New_ctor();

  /// @brief Method RefreshRuntimeUINextFrame, addr 0x654e424, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Collections::IEnumerator* RefreshRuntimeUINextFrame();

  /// @brief Method RuntimeInit, addr 0x654d844, size 0x4, virtual false, abstract: false, final false
  static inline void RuntimeInit();

  /// @brief Method SetEnabled, addr 0x65485d4, size 0xc, virtual false, abstract: false, final false
  static inline void SetEnabled(bool enabled);

  /// @brief Method Update, addr 0x654e280, size 0x1a4, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityEngine::ScreenOrientation const& __cordl_internal_get_m_Orientation() const;

  constexpr ::UnityEngine::ScreenOrientation& __cordl_internal_get_m_Orientation();

  constexpr bool const& __cordl_internal_get_m_RuntimeUiWasVisibleLastFrame() const;

  constexpr bool& __cordl_internal_get_m_RuntimeUiWasVisibleLastFrame();

  constexpr void __cordl_internal_set_m_Orientation(::UnityEngine::ScreenOrientation value);

  constexpr void __cordl_internal_set_m_RuntimeUiWasVisibleLastFrame(bool value);

  /// @brief Method .ctor, addr 0x654e478, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityW<::UnityEngine::Rendering::DebugUpdater> getStaticF_s_Instance();

  static inline void setStaticF_s_Instance(::UnityW<::UnityEngine::Rendering::DebugUpdater> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUpdater();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUpdater", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUpdater(DebugUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUpdater", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUpdater(DebugUpdater const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12006 };

  /// @brief Field m_Orientation, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::ScreenOrientation ___m_Orientation;

  /// @brief Field m_RuntimeUiWasVisibleLastFrame, offset: 0x24, size: 0x1, def value: None
  bool ___m_RuntimeUiWasVisibleLastFrame;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugUpdater, ___m_Orientation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUpdater, ___m_RuntimeUiWasVisibleLastFrame) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugUpdater, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::DebugUpdater);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugUpdater*, "UnityEngine.Rendering", "DebugUpdater");
NEED_NO_BOX(::UnityEngine::Rendering::DebugUpdater__DoAfterInputModuleUpdated_d__9);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugUpdater__DoAfterInputModuleUpdated_d__9*, "UnityEngine.Rendering", "DebugUpdater/<DoAfterInputModuleUpdated>d__9");
NEED_NO_BOX(::UnityEngine::Rendering::DebugUpdater__RefreshRuntimeUINextFrame_d__15);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugUpdater__RefreshRuntimeUINextFrame_d__15*, "UnityEngine.Rendering", "DebugUpdater/<RefreshRuntimeUINextFrame>d__15");
