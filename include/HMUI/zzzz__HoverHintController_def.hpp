#pragma once
// IWYU pragma private; include "HMUI/HoverHintController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HoverHintController)
namespace HMUI {
class HoverHintController__HideHintAfterDelay_d__14;
}
namespace HMUI {
class HoverHintController__ShowHintAfterDelay_d__13;
}
namespace HMUI {
class HoverHintPanel;
}
namespace HMUI {
class HoverHint;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
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
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace HMUI {
class HoverHintController;
}
namespace HMUI {
class HoverHintController__HideHintAfterDelay_d__14;
}
namespace HMUI {
class HoverHintController__ShowHintAfterDelay_d__13;
}
// Write type traits
MARK_REF_T(::HMUI::HoverHintController*);
MARK_REF_T(::HMUI::HoverHintController__HideHintAfterDelay_d__14*);
MARK_REF_T(::HMUI::HoverHintController__ShowHintAfterDelay_d__13*);
DEFINE_IL2CPP_CLASS(::HMUI::HoverHintController*, "HMUI", "HoverHintController");
DEFINE_IL2CPP_CLASS(::HMUI::HoverHintController__HideHintAfterDelay_d__14*, "HMUI", "HoverHintController/<HideHintAfterDelay>d__14");
DEFINE_IL2CPP_CLASS(::HMUI::HoverHintController__ShowHintAfterDelay_d__13*, "HMUI", "HoverHintController/<ShowHintAfterDelay>d__13");
// [CompilerGenerated]
// Dependencies System.Object
namespace HMUI {
// Is value type: false
// CS Name: HMUI.HoverHintController/<HideHintAfterDelay>d__14
class CORDL_TYPE HoverHintController__HideHintAfterDelay_d__14 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::HMUI::HoverHintController> __4__this;

  /// @brief Field delay, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_delay, put = __cordl_internal_set_delay)) float_t delay;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x5cc97d4, size 0xc0, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief [DebuggerHidden]
  static inline ::HMUI::HoverHintController__HideHintAfterDelay_d__14* New_ctor(int32_t __1__state);

  /// [DebuggerHidden]
  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5cc9894, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// [DebuggerHidden]
  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x5cc989c, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// [DebuggerHidden]
  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5cc98d4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// [DebuggerHidden]
  /// @brief Method System.IDisposable.Dispose, addr 0x5cc97d0, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::HMUI::HoverHintController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::HMUI::HoverHintController>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get_delay() const;

  constexpr float_t& __cordl_internal_get_delay();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::HMUI::HoverHintController> value);

  constexpr void __cordl_internal_set_delay(float_t value);

  /// [DebuggerHidden]
  /// @brief Method .ctor, addr 0x5cc9374, size 0x8, virtual false, abstract: false, final false
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
  constexpr HoverHintController__HideHintAfterDelay_d__14();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HoverHintController__HideHintAfterDelay_d__14", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HoverHintController__HideHintAfterDelay_d__14(HoverHintController__HideHintAfterDelay_d__14&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HoverHintController__HideHintAfterDelay_d__14", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HoverHintController__HideHintAfterDelay_d__14(HoverHintController__HideHintAfterDelay_d__14 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19632 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::HoverHintController> _____4__this;

  /// @brief Field delay, offset: 0x28, size: 0x4, def value: None
  float_t ___delay;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::HoverHintController__HideHintAfterDelay_d__14, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverHintController__HideHintAfterDelay_d__14, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverHintController__HideHintAfterDelay_d__14, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverHintController__HideHintAfterDelay_d__14, ___delay) == 0x28, "Offset mismatch!");

static_assert(sizeof(::HMUI::HoverHintController__HideHintAfterDelay_d__14) == 0x30, "Size mismatch!");

} // namespace HMUI
// [CompilerGenerated]
// Dependencies System.Object
namespace HMUI {
// Is value type: false
// CS Name: HMUI.HoverHintController/<ShowHintAfterDelay>d__13
class CORDL_TYPE HoverHintController__ShowHintAfterDelay_d__13 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::HMUI::HoverHintController> __4__this;

  /// @brief Field delay, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_delay, put = __cordl_internal_set_delay)) float_t delay;

  /// @brief Field hoverHint, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_hoverHint, put = __cordl_internal_set_hoverHint)) ::UnityW<::HMUI::HoverHint> hoverHint;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x5cc98e0, size 0xf0, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief [DebuggerHidden]
  static inline ::HMUI::HoverHintController__ShowHintAfterDelay_d__13* New_ctor(int32_t __1__state);

  /// [DebuggerHidden]
  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5cc99d0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// [DebuggerHidden]
  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x5cc99d8, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// [DebuggerHidden]
  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5cc9a10, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// [DebuggerHidden]
  /// @brief Method System.IDisposable.Dispose, addr 0x5cc98dc, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::HMUI::HoverHintController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::HMUI::HoverHintController>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get_delay() const;

  constexpr float_t& __cordl_internal_get_delay();

  constexpr ::UnityW<::HMUI::HoverHint> const& __cordl_internal_get_hoverHint() const;

  constexpr ::UnityW<::HMUI::HoverHint>& __cordl_internal_get_hoverHint();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::HMUI::HoverHintController> value);

  constexpr void __cordl_internal_set_delay(float_t value);

  constexpr void __cordl_internal_set_hoverHint(::UnityW<::HMUI::HoverHint> value);

  /// [DebuggerHidden]
  /// @brief Method .ctor, addr 0x5cc936c, size 0x8, virtual false, abstract: false, final false
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
  constexpr HoverHintController__ShowHintAfterDelay_d__13();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HoverHintController__ShowHintAfterDelay_d__13", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HoverHintController__ShowHintAfterDelay_d__13(HoverHintController__ShowHintAfterDelay_d__13&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HoverHintController__ShowHintAfterDelay_d__13", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HoverHintController__ShowHintAfterDelay_d__13(HoverHintController__ShowHintAfterDelay_d__13 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19633 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field delay, offset: 0x20, size: 0x4, def value: None
  float_t ___delay;

  /// @brief Field hoverHint, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::HMUI::HoverHint> ___hoverHint;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::HMUI::HoverHintController> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::HoverHintController__ShowHintAfterDelay_d__13, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverHintController__ShowHintAfterDelay_d__13, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverHintController__ShowHintAfterDelay_d__13, ___delay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverHintController__ShowHintAfterDelay_d__13, ___hoverHint) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverHintController__ShowHintAfterDelay_d__13, _____4__this) == 0x30, "Offset mismatch!");

static_assert(sizeof(::HMUI::HoverHintController__ShowHintAfterDelay_d__13) == 0x38, "Size mismatch!");

} // namespace HMUI
// Dependencies UnityEngine.MonoBehaviour
namespace HMUI {
// Is value type: false
// CS Name: HMUI.HoverHintController
class CORDL_TYPE HoverHintController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _HideHintAfterDelay_d__14 = ::HMUI::HoverHintController__HideHintAfterDelay_d__14;

  using _ShowHintAfterDelay_d__13 = ::HMUI::HoverHintController__ShowHintAfterDelay_d__13;

  /// @brief Field _activeHints, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__activeHints, put = __cordl_internal_set__activeHints)) ::System::Collections::Generic::List_1<::UnityW<::HMUI::HoverHint>>* _activeHints;

  /// @brief Field _hoverHintPanel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__hoverHintPanel, put = __cordl_internal_set__hoverHintPanel)) ::UnityW<::HMUI::HoverHintPanel> _hoverHintPanel;

  /// @brief Field _isHiding, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__isHiding, put = __cordl_internal_set__isHiding)) bool _isHiding;

  /// @brief Method Awake, addr 0x5cc8a54, size 0x148, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method GetScreenTransformForHoverHint, addr 0x5cc937c, size 0x15c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Transform> GetScreenTransformForHoverHint(::HMUI::HoverHint* hoverHint);

  /// @brief Method HandleHoverHintPanelPointerDidEnter, addr 0x5cc9738, size 0x1c, virtual false, abstract: false, final false
  inline void HandleHoverHintPanelPointerDidEnter();

  /// @brief Method HandleHoverHintPanelPointerDidExit, addr 0x5cc9754, size 0x4, virtual false, abstract: false, final false
  inline void HandleHoverHintPanelPointerDidExit();

  /// @brief Method HideHint, addr 0x5cc88ec, size 0x84, virtual false, abstract: false, final false
  inline void HideHint(::HMUI::HoverHint* hoverHint);

  /// [IteratorStateMachine(typeof(HMUI.HoverHintController::<HideHintAfterDelay>d__14))]
  /// @brief Method HideHintAfterDelay, addr 0x5cc9308, size 0x64, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* HideHintAfterDelay(float_t delay);

  /// @brief Method HideHintInstant, addr 0x5cc87f8, size 0xf4, virtual false, abstract: false, final false
  inline void HideHintInstant(::HMUI::HoverHint* hoverHint);

  static inline ::HMUI::HoverHintController* New_ctor();

  /// @brief Method OnApplicationFocus, addr 0x5cc9000, size 0x24, virtual false, abstract: false, final false
  inline void OnApplicationFocus(bool hasFocus);

  /// @brief Method OnDestroy, addr 0x5cc8d1c, size 0x18c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method RetargetPanelOrHideAfterDelay, addr 0x5cc9238, size 0xd0, virtual false, abstract: false, final false
  inline void RetargetPanelOrHideAfterDelay();

  /// @brief Method SetupAndShowHintPanel, addr 0x5cc9090, size 0x138, virtual false, abstract: false, final false
  inline void SetupAndShowHintPanel(::HMUI::HoverHint* hoverHint);

  /// @brief Method ShowHint, addr 0x5cc8650, size 0xdc, virtual false, abstract: false, final false
  inline void ShowHint(::HMUI::HoverHint* hoverHint);

  /// [IteratorStateMachine(typeof(HMUI.HoverHintController::<ShowHintAfterDelay>d__13))]
  /// @brief Method ShowHintAfterDelay, addr 0x5cc91c8, size 0x70, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* ShowHintAfterDelay(::HMUI::HoverHint* hoverHint, float_t delay);

  /// @brief Method ShowHintInternal, addr 0x5cc9024, size 0x6c, virtual false, abstract: false, final false
  inline void ShowHintInternal(::HMUI::HoverHint* hoverHint);

  constexpr ::System::Collections::Generic::List_1<::UnityW<::HMUI::HoverHint>>* const& __cordl_internal_get__activeHints() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::HMUI::HoverHint>>*& __cordl_internal_get__activeHints();

  constexpr ::UnityW<::HMUI::HoverHintPanel> const& __cordl_internal_get__hoverHintPanel() const;

  constexpr ::UnityW<::HMUI::HoverHintPanel>& __cordl_internal_get__hoverHintPanel();

  constexpr bool const& __cordl_internal_get__isHiding() const;

  constexpr bool& __cordl_internal_get__isHiding();

  constexpr void __cordl_internal_set__activeHints(::System::Collections::Generic::List_1<::UnityW<::HMUI::HoverHint>>* value);

  constexpr void __cordl_internal_set__hoverHintPanel(::UnityW<::HMUI::HoverHintPanel> value);

  constexpr void __cordl_internal_set__isHiding(bool value);

  /// @brief Method .ctor, addr 0x5cc9758, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HoverHintController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HoverHintController", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HoverHintController(HoverHintController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HoverHintController", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HoverHintController(HoverHintController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19634 };

  /// @brief Field kHideHintDelay offset 0xffffffff size 0x4
  static constexpr float_t kHideHintDelay{ static_cast<float_t>(0.3f) };

  /// @brief Field kShowHintDelay offset 0xffffffff size 0x4
  static constexpr float_t kShowHintDelay{ static_cast<float_t>(0.6f) };

  /// [SerializeField]
  /// @brief Field _hoverHintPanel, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::HoverHintPanel> ____hoverHintPanel;

  /// @brief Field _isHiding, offset: 0x28, size: 0x1, def value: None
  bool ____isHiding;

  /// @brief Field _activeHints, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::HMUI::HoverHint>>* ____activeHints;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::HoverHintController, ____hoverHintPanel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverHintController, ____isHiding) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverHintController, ____activeHints) == 0x30, "Offset mismatch!");

static_assert(sizeof(::HMUI::HoverHintController) == 0x38, "Size mismatch!");

} // namespace HMUI
