#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HoverHintController)
namespace HMUI {
class HoverHintPanel;
}
namespace HMUI {
class HoverHint;
}
namespace HMUI {
class __HoverHintController___HideHintAfterDelay_d__11;
}
namespace HMUI {
class __HoverHintController___ShowHintAfterDelay_d__10;
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
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace HMUI {
class HoverHintController;
}
namespace HMUI {
class __HoverHintController___HideHintAfterDelay_d__11;
}
namespace HMUI {
class __HoverHintController___ShowHintAfterDelay_d__10;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::HoverHintController);
MARK_REF_PTR_T(::HMUI::__HoverHintController___HideHintAfterDelay_d__11);
MARK_REF_PTR_T(::HMUI::__HoverHintController___ShowHintAfterDelay_d__10);
// Type: ::<ShowHintAfterDelay>d__10
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HoverHintController::<ShowHintAfterDelay>d__10*
class CORDL_TYPE __HoverHintController___ShowHintAfterDelay_d__10 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::HMUI::HoverHintController> __4__this;

  /// @brief Field delay, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_delay, put = __cordl_internal_set_delay)) float_t delay;

  /// @brief Field hoverHint, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_hoverHint, put = __cordl_internal_set_hoverHint))::UnityW<::HMUI::HoverHint> hoverHint;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x23ff81c, size 0xec, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::HMUI::__HoverHintController___ShowHintAfterDelay_d__10* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x23ff908, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x23ff910, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x23ff950, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x23ff818, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

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

  /// @brief Method .ctor, addr 0x23ff3fc, size 0x28, virtual false, abstract: false, final false
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
  constexpr __HoverHintController___ShowHintAfterDelay_d__10();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HoverHintController___ShowHintAfterDelay_d__10", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HoverHintController___ShowHintAfterDelay_d__10(__HoverHintController___ShowHintAfterDelay_d__10&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HoverHintController___ShowHintAfterDelay_d__10", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HoverHintController___ShowHintAfterDelay_d__10(__HoverHintController___ShowHintAfterDelay_d__10 const&) = delete;

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
static_assert(::cordl_internals::size_check_v<::HMUI::__HoverHintController___ShowHintAfterDelay_d__10, 0x38>, "Size mismatch!");

static_assert(offsetof(::HMUI::__HoverHintController___ShowHintAfterDelay_d__10, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::__HoverHintController___ShowHintAfterDelay_d__10, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::__HoverHintController___ShowHintAfterDelay_d__10, ___delay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::__HoverHintController___ShowHintAfterDelay_d__10, ___hoverHint) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::__HoverHintController___ShowHintAfterDelay_d__10, _____4__this) == 0x30, "Offset mismatch!");

} // namespace HMUI
// Type: ::<HideHintAfterDelay>d__11
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HoverHintController::<HideHintAfterDelay>d__11*
class CORDL_TYPE __HoverHintController___HideHintAfterDelay_d__11 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::HMUI::HoverHintController> __4__this;

  /// @brief Field delay, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_delay, put = __cordl_internal_set_delay)) float_t delay;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x23ff95c, size 0xcc, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::HMUI::__HoverHintController___HideHintAfterDelay_d__11* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x23ffa28, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x23ffa30, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x23ffa70, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x23ff958, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::HMUI::HoverHintController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::HMUI::HoverHintController>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get_delay() const;

  constexpr float_t& __cordl_internal_get_delay();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::HMUI::HoverHintController> value);

  constexpr void __cordl_internal_set_delay(float_t value);

  /// @brief Method .ctor, addr 0x23ff424, size 0x28, virtual false, abstract: false, final false
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
  constexpr __HoverHintController___HideHintAfterDelay_d__11();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HoverHintController___HideHintAfterDelay_d__11", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HoverHintController___HideHintAfterDelay_d__11(__HoverHintController___HideHintAfterDelay_d__11&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HoverHintController___HideHintAfterDelay_d__11", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HoverHintController___HideHintAfterDelay_d__11(__HoverHintController___HideHintAfterDelay_d__11 const&) = delete;

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
static_assert(::cordl_internals::size_check_v<::HMUI::__HoverHintController___HideHintAfterDelay_d__11, 0x30>, "Size mismatch!");

static_assert(offsetof(::HMUI::__HoverHintController___HideHintAfterDelay_d__11, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::__HoverHintController___HideHintAfterDelay_d__11, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::__HoverHintController___HideHintAfterDelay_d__11, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::__HoverHintController___HideHintAfterDelay_d__11, ___delay) == 0x28, "Offset mismatch!");

} // namespace HMUI
// Type: HMUI::HoverHintController
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::HoverHintController*
class CORDL_TYPE HoverHintController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _HideHintAfterDelay_d__11 = ::HMUI::__HoverHintController___HideHintAfterDelay_d__11;

  using _ShowHintAfterDelay_d__10 = ::HMUI::__HoverHintController___ShowHintAfterDelay_d__10;

  /// @brief Field _hoverHintPanel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__hoverHintPanel, put = __cordl_internal_set__hoverHintPanel))::UnityW<::HMUI::HoverHintPanel> _hoverHintPanel;

  /// @brief Field _hoverHintPanelPrefab, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__hoverHintPanelPrefab, put = __cordl_internal_set__hoverHintPanelPrefab))::UnityW<::HMUI::HoverHintPanel> _hoverHintPanelPrefab;

  /// @brief Field _isHiding, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__isHiding, put = __cordl_internal_set__isHiding)) bool _isHiding;

  /// @brief Method Awake, addr 0x23ff0c0, size 0xa0, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method GetScreenTransformForHoverHint, addr 0x23ff44c, size 0x150, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Transform> GetScreenTransformForHoverHint(::HMUI::HoverHint* hoverHint);

  /// @brief Method HideHint, addr 0x23fefa4, size 0x44, virtual false, abstract: false, final false
  inline void HideHint();

  /// @brief Method HideHintAfterDelay, addr 0x23ff384, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* HideHintAfterDelay(float_t delay);

  /// @brief Method HideHintInstant, addr 0x23fef70, size 0x34, virtual false, abstract: false, final false
  inline void HideHintInstant();

  static inline ::HMUI::HoverHintController* New_ctor();

  /// @brief Method OnApplicationFocus, addr 0x23ff188, size 0x2c, virtual false, abstract: false, final false
  inline void OnApplicationFocus(bool hasFocus);

  /// @brief Method SetupAndShowHintPanel, addr 0x23ff1b4, size 0x14c, virtual false, abstract: false, final false
  inline void SetupAndShowHintPanel(::HMUI::HoverHint* hoverHint);

  /// @brief Method ShowHint, addr 0x23fee20, size 0x94, virtual false, abstract: false, final false
  inline void ShowHint(::HMUI::HoverHint* hoverHint);

  /// @brief Method ShowHintAfterDelay, addr 0x23ff300, size 0x84, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* ShowHintAfterDelay(::HMUI::HoverHint* hoverHint, float_t delay);

  constexpr ::UnityW<::HMUI::HoverHintPanel> const& __cordl_internal_get__hoverHintPanel() const;

  constexpr ::UnityW<::HMUI::HoverHintPanel>& __cordl_internal_get__hoverHintPanel();

  constexpr ::UnityW<::HMUI::HoverHintPanel> const& __cordl_internal_get__hoverHintPanelPrefab() const;

  constexpr ::UnityW<::HMUI::HoverHintPanel>& __cordl_internal_get__hoverHintPanelPrefab();

  constexpr bool const& __cordl_internal_get__isHiding() const;

  constexpr bool& __cordl_internal_get__isHiding();

  constexpr void __cordl_internal_set__hoverHintPanel(::UnityW<::HMUI::HoverHintPanel> value);

  constexpr void __cordl_internal_set__hoverHintPanelPrefab(::UnityW<::HMUI::HoverHintPanel> value);

  constexpr void __cordl_internal_set__isHiding(bool value);

  /// @brief Method .ctor, addr 0x23ff810, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _hoverHintPanelPrefab, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::HMUI::HoverHintPanel> ____hoverHintPanelPrefab;

  /// @brief Field _hoverHintPanel, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::HoverHintPanel> ____hoverHintPanel;

  /// @brief Field _isHiding, offset: 0x28, size: 0x1, def value: None
  bool ____isHiding;

  /// @brief Field kHideHintDelay offset 0xffffffff size 0x4
  static constexpr float_t kHideHintDelay{ 0.3 };

  /// @brief Field kShowHintDelay offset 0xffffffff size 0x4
  static constexpr float_t kShowHintDelay{ 0.6 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::HoverHintController, 0x30>, "Size mismatch!");

static_assert(offsetof(::HMUI::HoverHintController, ____hoverHintPanelPrefab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverHintController, ____hoverHintPanel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverHintController, ____isHiding) == 0x28, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::HoverHintController);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::HoverHintController*, "HMUI", "HoverHintController");
NEED_NO_BOX(::HMUI::__HoverHintController___HideHintAfterDelay_d__11);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__HoverHintController___HideHintAfterDelay_d__11*, "HMUI", "HoverHintController/<HideHintAfterDelay>d__11");
NEED_NO_BOX(::HMUI::__HoverHintController___ShowHintAfterDelay_d__10);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__HoverHintController___ShowHintAfterDelay_d__10*, "HMUI", "HoverHintController/<ShowHintAfterDelay>d__10");
