#pragma once
// IWYU pragma private; include "HMUI/HoverTextController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HoverTextController)
namespace HMUI {
class __HoverTextController___HideTextCoroutine_d__12;
}
namespace HMUI {
class __HoverTextController___ShowTextCoroutine_d__10;
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
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace HMUI {
class HoverTextController;
}
namespace HMUI {
class __HoverTextController___HideTextCoroutine_d__12;
}
namespace HMUI {
class __HoverTextController___ShowTextCoroutine_d__10;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::HoverTextController);
MARK_REF_PTR_T(::HMUI::__HoverTextController___HideTextCoroutine_d__12);
MARK_REF_PTR_T(::HMUI::__HoverTextController___ShowTextCoroutine_d__10);
// Type: ::<HideTextCoroutine>d__12
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HoverTextController::<HideTextCoroutine>d__12*
class CORDL_TYPE __HoverTextController___HideTextCoroutine_d__12 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::HMUI::HoverTextController> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3998d74, size 0xe8, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::HMUI::__HoverTextController___HideTextCoroutine_d__12* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x3998e5c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3998e64, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3998e9c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3998d70, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::HMUI::HoverTextController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::HMUI::HoverTextController>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::HMUI::HoverTextController> value);

  /// @brief Method .ctor, addr 0x3998d2c, size 0x28, virtual false, abstract: false, final false
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
  constexpr __HoverTextController___HideTextCoroutine_d__12();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HoverTextController___HideTextCoroutine_d__12", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HoverTextController___HideTextCoroutine_d__12(__HoverTextController___HideTextCoroutine_d__12&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HoverTextController___HideTextCoroutine_d__12", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HoverTextController___HideTextCoroutine_d__12(__HoverTextController___HideTextCoroutine_d__12 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::HoverTextController> _____4__this;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16006 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__HoverTextController___HideTextCoroutine_d__12, 0x28>, "Size mismatch!");

static_assert(offsetof(::HMUI::__HoverTextController___HideTextCoroutine_d__12, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::__HoverTextController___HideTextCoroutine_d__12, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::__HoverTextController___HideTextCoroutine_d__12, _____4__this) == 0x20, "Offset mismatch!");

} // namespace HMUI
// Type: ::<ShowTextCoroutine>d__10
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HoverTextController::<ShowTextCoroutine>d__10*
class CORDL_TYPE __HoverTextController___ShowTextCoroutine_d__10 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::HMUI::HoverTextController> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3998ea8, size 0x154, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::HMUI::__HoverTextController___ShowTextCoroutine_d__10* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x3998ffc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3999004, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x399903c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3998ea4, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::HMUI::HoverTextController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::HMUI::HoverTextController>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::HMUI::HoverTextController> value);

  /// @brief Method .ctor, addr 0x3998c38, size 0x28, virtual false, abstract: false, final false
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
  constexpr __HoverTextController___ShowTextCoroutine_d__10();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HoverTextController___ShowTextCoroutine_d__10", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HoverTextController___ShowTextCoroutine_d__10(__HoverTextController___ShowTextCoroutine_d__10&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HoverTextController___ShowTextCoroutine_d__10", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HoverTextController___ShowTextCoroutine_d__10(__HoverTextController___ShowTextCoroutine_d__10 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::HoverTextController> _____4__this;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16007 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__HoverTextController___ShowTextCoroutine_d__10, 0x28>, "Size mismatch!");

static_assert(offsetof(::HMUI::__HoverTextController___ShowTextCoroutine_d__10, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::__HoverTextController___ShowTextCoroutine_d__10, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::__HoverTextController___ShowTextCoroutine_d__10, _____4__this) == 0x20, "Offset mismatch!");

} // namespace HMUI
// Type: HMUI::HoverTextController
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 54, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::HoverTextController*
class CORDL_TYPE HoverTextController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _HideTextCoroutine_d__12 = ::HMUI::__HoverTextController___HideTextCoroutine_d__12;

  using _ShowTextCoroutine_d__10 = ::HMUI::__HoverTextController___ShowTextCoroutine_d__10;

  /// @brief Field _fadeInDelay, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__fadeInDelay, put = __cordl_internal_set__fadeInDelay)) float_t _fadeInDelay;

  /// @brief Field _fadeInSpeed, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__fadeInSpeed, put = __cordl_internal_set__fadeInSpeed)) float_t _fadeInSpeed;

  /// @brief Field _fadeOutSpeed, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__fadeOutSpeed, put = __cordl_internal_set__fadeOutSpeed)) float_t _fadeOutSpeed;

  /// @brief Field _isFadingIn, offset 0x35, size 0x1
  __declspec(property(get = __cordl_internal_get__isFadingIn, put = __cordl_internal_set__isFadingIn)) bool _isFadingIn;

  /// @brief Field _isFadingOut, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get__isFadingOut, put = __cordl_internal_set__isFadingOut)) bool _isFadingOut;

  /// @brief Field _textMesh, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__textMesh, put = __cordl_internal_set__textMesh)) ::UnityW<::TMPro::TextMeshProUGUI> _textMesh;

  /// @brief Method Awake, addr 0x3998b04, size 0x20, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HideText, addr 0x3998c60, size 0x6c, virtual false, abstract: false, final false
  inline void HideText();

  /// @brief Method HideTextCoroutine, addr 0x3998ccc, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* HideTextCoroutine();

  static inline ::HMUI::HoverTextController* New_ctor();

  /// @brief Method OnApplicationFocus, addr 0x3998b4c, size 0x2c, virtual false, abstract: false, final false
  inline void OnApplicationFocus(bool hasFocus);

  /// @brief Method OnDisable, addr 0x3998b24, size 0x28, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method ShowText, addr 0x3998b78, size 0x60, virtual false, abstract: false, final false
  inline void ShowText(::StringW text);

  /// @brief Method ShowTextCoroutine, addr 0x3998bd8, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* ShowTextCoroutine();

  constexpr float_t const& __cordl_internal_get__fadeInDelay() const;

  constexpr float_t& __cordl_internal_get__fadeInDelay();

  constexpr float_t const& __cordl_internal_get__fadeInSpeed() const;

  constexpr float_t& __cordl_internal_get__fadeInSpeed();

  constexpr float_t const& __cordl_internal_get__fadeOutSpeed() const;

  constexpr float_t& __cordl_internal_get__fadeOutSpeed();

  constexpr bool const& __cordl_internal_get__isFadingIn() const;

  constexpr bool& __cordl_internal_get__isFadingIn();

  constexpr bool const& __cordl_internal_get__isFadingOut() const;

  constexpr bool& __cordl_internal_get__isFadingOut();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__textMesh() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__textMesh();

  constexpr void __cordl_internal_set__fadeInDelay(float_t value);

  constexpr void __cordl_internal_set__fadeInSpeed(float_t value);

  constexpr void __cordl_internal_set__fadeOutSpeed(float_t value);

  constexpr void __cordl_internal_set__isFadingIn(bool value);

  constexpr void __cordl_internal_set__isFadingOut(bool value);

  constexpr void __cordl_internal_set__textMesh(::UnityW<::TMPro::TextMeshProUGUI> value);

  /// @brief Method .ctor, addr 0x3998d54, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HoverTextController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HoverTextController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HoverTextController(HoverTextController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HoverTextController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HoverTextController(HoverTextController const&) = delete;

  /// @brief Field _textMesh, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____textMesh;

  /// @brief Field _fadeInDelay, offset: 0x28, size: 0x4, def value: None
  float_t ____fadeInDelay;

  /// @brief Field _fadeInSpeed, offset: 0x2c, size: 0x4, def value: None
  float_t ____fadeInSpeed;

  /// @brief Field _fadeOutSpeed, offset: 0x30, size: 0x4, def value: None
  float_t ____fadeOutSpeed;

  /// @brief Field _isFadingOut, offset: 0x34, size: 0x1, def value: None
  bool ____isFadingOut;

  /// @brief Field _isFadingIn, offset: 0x35, size: 0x1, def value: None
  bool ____isFadingIn;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16008 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::HoverTextController, 0x38>, "Size mismatch!");

static_assert(offsetof(::HMUI::HoverTextController, ____textMesh) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverTextController, ____fadeInDelay) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverTextController, ____fadeInSpeed) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverTextController, ____fadeOutSpeed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverTextController, ____isFadingOut) == 0x34, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverTextController, ____isFadingIn) == 0x35, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::HoverTextController);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::HoverTextController*, "HMUI", "HoverTextController");
NEED_NO_BOX(::HMUI::__HoverTextController___HideTextCoroutine_d__12);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__HoverTextController___HideTextCoroutine_d__12*, "HMUI", "HoverTextController/<HideTextCoroutine>d__12");
NEED_NO_BOX(::HMUI::__HoverTextController___ShowTextCoroutine_d__10);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__HoverTextController___ShowTextCoroutine_d__10*, "HMUI", "HoverTextController/<ShowTextCoroutine>d__10");
