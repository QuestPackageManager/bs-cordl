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
class __HoverHintController___ShowHintAfterDelay_d__10;
}
namespace HMUI {
class __HoverHintController___HideHintAfterDelay_d__11;
}
namespace HMUI {
class HoverHint;
}
namespace HMUI {
class HoverHintPanel;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
class Transform;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class Object;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13533))
// CS Name: ::HoverHintController::<ShowHintAfterDelay>d__10*
class CORDL_TYPE __HoverHintController___ShowHintAfterDelay_d__10 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field delay, offset 0x20, size 0x4
  __declspec(property(get = __get_delay, put = __set_delay)) float_t delay;

  /// @brief Field hoverHint, offset 0x28, size 0x8
  __declspec(property(get = __get_hoverHint, put = __set_hoverHint))::HMUI::HoverHint* hoverHint;

  /// @brief Field <>4__this, offset 0x30, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::HMUI::HoverHintController* __4__this;

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

  constexpr float_t& __get_delay();

  constexpr float_t const& __get_delay() const;

  constexpr void __set_delay(float_t value);

  constexpr ::HMUI::HoverHint*& __get_hoverHint();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::HoverHint*> const& __get_hoverHint() const;

  constexpr void __set_hoverHint(::HMUI::HoverHint* value);

  constexpr ::HMUI::HoverHintController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::HoverHintController*> const& __get___4__this() const;

  constexpr void __set___4__this(::HMUI::HoverHintController* value);

  static inline ::HMUI::__HoverHintController___ShowHintAfterDelay_d__10* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x211d138 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x211d554 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x211d558 size 0xec virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x211d644 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x211d64c size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x211d68c size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__HoverHintController___ShowHintAfterDelay_d__10", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HoverHintController___ShowHintAfterDelay_d__10(__HoverHintController___ShowHintAfterDelay_d__10&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HoverHintController___ShowHintAfterDelay_d__10", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HoverHintController___ShowHintAfterDelay_d__10(__HoverHintController___ShowHintAfterDelay_d__10 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HoverHintController___ShowHintAfterDelay_d__10();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field delay, offset: 0x20, size: 0x4, def value: None
  float_t ___delay;

  /// @brief Field hoverHint, offset: 0x28, size: 0x8, def value: None
  ::HMUI::HoverHint* ___hoverHint;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::HMUI::HoverHintController* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__HoverHintController___ShowHintAfterDelay_d__10, 0x38>, "Size mismatch!");

} // namespace HMUI
// Type: ::<HideHintAfterDelay>d__11
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13534))
// CS Name: ::HoverHintController::<HideHintAfterDelay>d__11*
class CORDL_TYPE __HoverHintController___HideHintAfterDelay_d__11 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::HMUI::HoverHintController* __4__this;

  /// @brief Field delay, offset 0x28, size 0x4
  __declspec(property(get = __get_delay, put = __set_delay)) float_t delay;

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

  constexpr ::HMUI::HoverHintController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::HoverHintController*> const& __get___4__this() const;

  constexpr void __set___4__this(::HMUI::HoverHintController* value);

  constexpr float_t& __get_delay();

  constexpr float_t const& __get_delay() const;

  constexpr void __set_delay(float_t value);

  static inline ::HMUI::__HoverHintController___HideHintAfterDelay_d__11* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x211d160 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x211d694 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x211d698 size 0xcc virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x211d764 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x211d76c size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x211d7ac size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__HoverHintController___HideHintAfterDelay_d__11", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HoverHintController___HideHintAfterDelay_d__11(__HoverHintController___HideHintAfterDelay_d__11&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HoverHintController___HideHintAfterDelay_d__11", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HoverHintController___HideHintAfterDelay_d__11(__HoverHintController___HideHintAfterDelay_d__11 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HoverHintController___HideHintAfterDelay_d__11();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::HMUI::HoverHintController* _____4__this;

  /// @brief Field delay, offset: 0x28, size: 0x4, def value: None
  float_t ___delay;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__HoverHintController___HideHintAfterDelay_d__11, 0x30>, "Size mismatch!");

} // namespace HMUI
// Type: HMUI::HoverHintController
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13535))
// CS Name: ::HMUI::HoverHintController*
class CORDL_TYPE HoverHintController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _HideHintAfterDelay_d__11 = ::HMUI::__HoverHintController___HideHintAfterDelay_d__11;

  using _ShowHintAfterDelay_d__10 = ::HMUI::__HoverHintController___ShowHintAfterDelay_d__10;

  /// @brief Field _hoverHintPanelPrefab, offset 0x18, size 0x8
  __declspec(property(get = __get__hoverHintPanelPrefab, put = __set__hoverHintPanelPrefab))::HMUI::HoverHintPanel* _hoverHintPanelPrefab;

  /// @brief Field _hoverHintPanel, offset 0x20, size 0x8
  __declspec(property(get = __get__hoverHintPanel, put = __set__hoverHintPanel))::HMUI::HoverHintPanel* _hoverHintPanel;

  /// @brief Field _isHiding, offset 0x28, size 0x1
  __declspec(property(get = __get__isHiding, put = __set__isHiding)) bool _isHiding;

  constexpr ::HMUI::HoverHintPanel*& __get__hoverHintPanelPrefab();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::HoverHintPanel*> const& __get__hoverHintPanelPrefab() const;

  constexpr void __set__hoverHintPanelPrefab(::HMUI::HoverHintPanel* value);

  constexpr ::HMUI::HoverHintPanel*& __get__hoverHintPanel();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::HoverHintPanel*> const& __get__hoverHintPanel() const;

  constexpr void __set__hoverHintPanel(::HMUI::HoverHintPanel* value);

  constexpr bool& __get__isHiding();

  constexpr bool const& __get__isHiding() const;

  constexpr void __set__isHiding(bool value);

  /// @brief Method Awake addr 0x211cdfc size 0xa0 virtual false final false
  inline void Awake();

  /// @brief Method OnApplicationFocus addr 0x211cec4 size 0x2c virtual false final false
  inline void OnApplicationFocus(bool hasFocus);

  /// @brief Method ShowHint addr 0x211cb5c size 0x94 virtual false final false
  inline void ShowHint(::HMUI::HoverHint* hoverHint);

  /// @brief Method HideHint addr 0x211cce0 size 0x44 virtual false final false
  inline void HideHint();

  /// @brief Method HideHintInstant addr 0x211ccac size 0x34 virtual false final false
  inline void HideHintInstant();

  /// @brief Method ShowHintAfterDelay addr 0x211d03c size 0x84 virtual false final false
  inline ::System::Collections::IEnumerator* ShowHintAfterDelay(::HMUI::HoverHint* hoverHint, float_t delay);

  /// @brief Method HideHintAfterDelay addr 0x211d0c0 size 0x78 virtual false final false
  inline ::System::Collections::IEnumerator* HideHintAfterDelay(float_t delay);

  /// @brief Method SetupAndShowHintPanel addr 0x211cef0 size 0x14c virtual false final false
  inline void SetupAndShowHintPanel(::HMUI::HoverHint* hoverHint);

  /// @brief Method GetScreenTransformForHoverHint addr 0x211d188 size 0x150 virtual false final false
  static inline ::UnityEngine::Transform* GetScreenTransformForHoverHint(::HMUI::HoverHint* hoverHint);

  static inline ::HMUI::HoverHintController* New_ctor();

  /// @brief Method .ctor addr 0x211d54c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HoverHintController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HoverHintController(HoverHintController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HoverHintController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HoverHintController(HoverHintController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HoverHintController();

public:
  /// @brief Field _hoverHintPanelPrefab, offset: 0x18, size: 0x8, def value: None
  ::HMUI::HoverHintPanel* ____hoverHintPanelPrefab;

  /// @brief Field _hoverHintPanel, offset: 0x20, size: 0x8, def value: None
  ::HMUI::HoverHintPanel* ____hoverHintPanel;

  /// @brief Field _isHiding, offset: 0x28, size: 0x1, def value: None
  bool ____isHiding;

  /// @brief Field kShowHintDelay offset 0xffffffff size 0x4
  static constexpr float_t kShowHintDelay{ 0.6 };

  /// @brief Field kHideHintDelay offset 0xffffffff size 0x4
  static constexpr float_t kHideHintDelay{ 0.3 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::HoverHintController, 0x30>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::HoverHintController);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::HoverHintController*, "HMUI", "HoverHintController");
NEED_NO_BOX(::HMUI::__HoverHintController___HideHintAfterDelay_d__11);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__HoverHintController___HideHintAfterDelay_d__11*, "HMUI", "HoverHintController/<HideHintAfterDelay>d__11");
NEED_NO_BOX(::HMUI::__HoverHintController___ShowHintAfterDelay_d__10);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__HoverHintController___ShowHintAfterDelay_d__10*, "HMUI", "HoverHintController/<ShowHintAfterDelay>d__10");
