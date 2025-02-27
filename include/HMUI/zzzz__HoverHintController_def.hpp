#pragma once
// IWYU pragma private; include "HMUI/HoverHintController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HoverHintController)
namespace HMUI {
class HoverHintController__HideHintAfterDelay_d__12;
}
namespace HMUI {
class HoverHintController__ShowHintAfterDelay_d__11;
}
namespace HMUI {
class HoverHintPanel;
}
namespace HMUI {
class HoverHint;
}
namespace System::Collections {
class IEnumerator;
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
class HoverHintController__HideHintAfterDelay_d__12;
}
namespace HMUI {
class HoverHintController__ShowHintAfterDelay_d__11;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::HoverHintController);
MARK_REF_PTR_T(::HMUI::HoverHintController__HideHintAfterDelay_d__12);
MARK_REF_PTR_T(::HMUI::HoverHintController__ShowHintAfterDelay_d__11);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace HMUI {
// Is value type: false
// CS Name: HMUI.HoverHintController/<HideHintAfterDelay>d__12
class CORDL_TYPE HoverHintController__HideHintAfterDelay_d__12 : public ::System::Object {
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

  /// @brief Method MoveNext, addr 0x39fbec4, size 0xc8, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::HMUI::HoverHintController__HideHintAfterDelay_d__12* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x39fbf8c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x39fbf94, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x39fbfcc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x39fbec0, size 0x4, virtual true, abstract: false, final true
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

  /// @brief Method .ctor, addr 0x39fbae8, size 0x28, virtual false, abstract: false, final false
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
  constexpr HoverHintController__HideHintAfterDelay_d__12();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HoverHintController__HideHintAfterDelay_d__12", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HoverHintController__HideHintAfterDelay_d__12(HoverHintController__HideHintAfterDelay_d__12&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HoverHintController__HideHintAfterDelay_d__12", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HoverHintController__HideHintAfterDelay_d__12(HoverHintController__HideHintAfterDelay_d__12 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16042 };

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
static_assert(offsetof(::HMUI::HoverHintController__HideHintAfterDelay_d__12, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverHintController__HideHintAfterDelay_d__12, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverHintController__HideHintAfterDelay_d__12, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverHintController__HideHintAfterDelay_d__12, ___delay) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::HoverHintController__HideHintAfterDelay_d__12, 0x30>, "Size mismatch!");

} // namespace HMUI
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace HMUI {
// Is value type: false
// CS Name: HMUI.HoverHintController/<ShowHintAfterDelay>d__11
class CORDL_TYPE HoverHintController__ShowHintAfterDelay_d__11 : public ::System::Object {
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

  /// @brief Method MoveNext, addr 0x39fbfd8, size 0xe8, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::HMUI::HoverHintController__ShowHintAfterDelay_d__11* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x39fc0c0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x39fc0c8, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x39fc100, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x39fbfd4, size 0x4, virtual true, abstract: false, final true
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

  /// @brief Method .ctor, addr 0x39fbac0, size 0x28, virtual false, abstract: false, final false
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
  constexpr HoverHintController__ShowHintAfterDelay_d__11();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HoverHintController__ShowHintAfterDelay_d__11", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HoverHintController__ShowHintAfterDelay_d__11(HoverHintController__ShowHintAfterDelay_d__11&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HoverHintController__ShowHintAfterDelay_d__11", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HoverHintController__ShowHintAfterDelay_d__11(HoverHintController__ShowHintAfterDelay_d__11 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16043 };

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
static_assert(offsetof(::HMUI::HoverHintController__ShowHintAfterDelay_d__11, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverHintController__ShowHintAfterDelay_d__11, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverHintController__ShowHintAfterDelay_d__11, ___delay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverHintController__ShowHintAfterDelay_d__11, ___hoverHint) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverHintController__ShowHintAfterDelay_d__11, _____4__this) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::HoverHintController__ShowHintAfterDelay_d__11, 0x38>, "Size mismatch!");

} // namespace HMUI
// Dependencies UnityEngine.MonoBehaviour
namespace HMUI {
// Is value type: false
// CS Name: HMUI.HoverHintController
class CORDL_TYPE HoverHintController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _HideHintAfterDelay_d__12 = ::HMUI::HoverHintController__HideHintAfterDelay_d__12;

  using _ShowHintAfterDelay_d__11 = ::HMUI::HoverHintController__ShowHintAfterDelay_d__11;

  /// @brief Field _hoverHintPanel, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__hoverHintPanel, put = __cordl_internal_set__hoverHintPanel)) ::UnityW<::HMUI::HoverHintPanel> _hoverHintPanel;

  /// @brief Field _hoverHintPanelPrefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__hoverHintPanelPrefab, put = __cordl_internal_set__hoverHintPanelPrefab)) ::UnityW<::HMUI::HoverHintPanel> _hoverHintPanelPrefab;

  /// @brief Field _isHiding, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__isHiding, put = __cordl_internal_set__isHiding)) bool _isHiding;

  /// @brief Method Awake, addr 0x39fb770, size 0xa0, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method GetScreenTransformForHoverHint, addr 0x39fbb10, size 0x150, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Transform> GetScreenTransformForHoverHint(::HMUI::HoverHint* hoverHint);

  /// @brief Method HideHint, addr 0x39fb654, size 0x44, virtual false, abstract: false, final false
  inline void HideHint(::HMUI::HoverHint* hoverHint);

  /// @brief Method HideHintAfterDelay, addr 0x39fba50, size 0x70, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* HideHintAfterDelay(float_t delay);

  /// @brief Method HideHintInstant, addr 0x39fb620, size 0x34, virtual false, abstract: false, final false
  inline void HideHintInstant(::HMUI::HoverHint* hoverHint);

  static inline ::HMUI::HoverHintController* New_ctor();

  /// @brief Method OnApplicationFocus, addr 0x39fb838, size 0x2c, virtual false, abstract: false, final false
  inline void OnApplicationFocus(bool hasFocus);

  /// @brief Method SetupAndShowHintPanel, addr 0x39fb8d0, size 0x104, virtual false, abstract: false, final false
  inline void SetupAndShowHintPanel(::HMUI::HoverHint* hoverHint);

  /// @brief Method ShowHint, addr 0x39fb518, size 0x4c, virtual false, abstract: false, final false
  inline void ShowHint(::HMUI::HoverHint* hoverHint);

  /// @brief Method ShowHintAfterDelay, addr 0x39fb9d4, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* ShowHintAfterDelay(::HMUI::HoverHint* hoverHint, float_t delay);

  /// @brief Method ShowHintInternal, addr 0x39fb864, size 0x6c, virtual false, abstract: false, final false
  inline void ShowHintInternal(::HMUI::HoverHint* hoverHint);

  constexpr ::UnityW<::HMUI::HoverHintPanel> const& __cordl_internal_get__hoverHintPanel() const;

  constexpr ::UnityW<::HMUI::HoverHintPanel>& __cordl_internal_get__hoverHintPanel();

  constexpr ::UnityW<::HMUI::HoverHintPanel> const& __cordl_internal_get__hoverHintPanelPrefab() const;

  constexpr ::UnityW<::HMUI::HoverHintPanel>& __cordl_internal_get__hoverHintPanelPrefab();

  constexpr bool const& __cordl_internal_get__isHiding() const;

  constexpr bool& __cordl_internal_get__isHiding();

  constexpr void __cordl_internal_set__hoverHintPanel(::UnityW<::HMUI::HoverHintPanel> value);

  constexpr void __cordl_internal_set__hoverHintPanelPrefab(::UnityW<::HMUI::HoverHintPanel> value);

  constexpr void __cordl_internal_set__isHiding(bool value);

  /// @brief Method .ctor, addr 0x39fbeb8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HoverHintController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HoverHintController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HoverHintController(HoverHintController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HoverHintController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HoverHintController(HoverHintController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16044 };

  /// @brief Field kHideHintDelay offset 0xffffffff size 0x4
  static constexpr float_t kHideHintDelay{ static_cast<float_t>(0.3f) };

  /// @brief Field kShowHintDelay offset 0xffffffff size 0x4
  static constexpr float_t kShowHintDelay{ static_cast<float_t>(0.6f) };

  /// @brief Field _hoverHintPanelPrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::HoverHintPanel> ____hoverHintPanelPrefab;

  /// @brief Field _isHiding, offset: 0x28, size: 0x1, def value: None
  bool ____isHiding;

  /// @brief Field _hoverHintPanel, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::HMUI::HoverHintPanel> ____hoverHintPanel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::HoverHintController, ____hoverHintPanelPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverHintController, ____isHiding) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverHintController, ____hoverHintPanel) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::HoverHintController, 0x38>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::HoverHintController);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::HoverHintController*, "HMUI", "HoverHintController");
NEED_NO_BOX(::HMUI::HoverHintController__HideHintAfterDelay_d__12);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::HoverHintController__HideHintAfterDelay_d__12*, "HMUI", "HoverHintController/<HideHintAfterDelay>d__12");
NEED_NO_BOX(::HMUI::HoverHintController__ShowHintAfterDelay_d__11);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::HoverHintController__ShowHintAfterDelay_d__11*, "HMUI", "HoverHintController/<ShowHintAfterDelay>d__11");
