#pragma once
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
// Type: ::<ShowTextCoroutine>d__10
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13541))
// CS Name: ::HoverTextController::<ShowTextCoroutine>d__10*
class CORDL_TYPE __HoverTextController___ShowTextCoroutine_d__10 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::HMUI::HoverTextController* __4__this;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr ::HMUI::HoverTextController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::HoverTextController*> const& __get___4__this() const;

  constexpr void __set___4__this(::HMUI::HoverTextController* value);

  static inline ::HMUI::__HoverTextController___ShowTextCoroutine_d__10* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x211e818, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x211e958, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x211e95c, size 0x158, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x211eab4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x211eabc, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x211eafc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__HoverTextController___ShowTextCoroutine_d__10", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HoverTextController___ShowTextCoroutine_d__10(__HoverTextController___ShowTextCoroutine_d__10&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HoverTextController___ShowTextCoroutine_d__10", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HoverTextController___ShowTextCoroutine_d__10(__HoverTextController___ShowTextCoroutine_d__10 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HoverTextController___ShowTextCoroutine_d__10();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::HMUI::HoverTextController* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__HoverTextController___ShowTextCoroutine_d__10, 0x28>, "Size mismatch!");

static_assert(offsetof(::HMUI::__HoverTextController___ShowTextCoroutine_d__10, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::__HoverTextController___ShowTextCoroutine_d__10, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::__HoverTextController___ShowTextCoroutine_d__10, _____4__this) == 0x20, "Offset mismatch!");

} // namespace HMUI
// Type: ::<HideTextCoroutine>d__12
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13542))
// CS Name: ::HoverTextController::<HideTextCoroutine>d__12*
class CORDL_TYPE __HoverTextController___HideTextCoroutine_d__12 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::HMUI::HoverTextController* __4__this;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr ::HMUI::HoverTextController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::HoverTextController*> const& __get___4__this() const;

  constexpr void __set___4__this(::HMUI::HoverTextController* value);

  static inline ::HMUI::__HoverTextController___HideTextCoroutine_d__12* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x211e914, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x211eb04, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x211eb08, size 0xe8, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x211ebf0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x211ebf8, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x211ec38, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__HoverTextController___HideTextCoroutine_d__12", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HoverTextController___HideTextCoroutine_d__12(__HoverTextController___HideTextCoroutine_d__12&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HoverTextController___HideTextCoroutine_d__12", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HoverTextController___HideTextCoroutine_d__12(__HoverTextController___HideTextCoroutine_d__12 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HoverTextController___HideTextCoroutine_d__12();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::HMUI::HoverTextController* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__HoverTextController___HideTextCoroutine_d__12, 0x28>, "Size mismatch!");

static_assert(offsetof(::HMUI::__HoverTextController___HideTextCoroutine_d__12, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::__HoverTextController___HideTextCoroutine_d__12, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::__HoverTextController___HideTextCoroutine_d__12, _____4__this) == 0x20, "Offset mismatch!");

} // namespace HMUI
// Type: HMUI::HoverTextController
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 46, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13543))
// CS Name: ::HMUI::HoverTextController*
class CORDL_TYPE HoverTextController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _HideTextCoroutine_d__12 = ::HMUI::__HoverTextController___HideTextCoroutine_d__12;

  using _ShowTextCoroutine_d__10 = ::HMUI::__HoverTextController___ShowTextCoroutine_d__10;

  /// @brief Field _textMesh, offset 0x18, size 0x8
  __declspec(property(get = __get__textMesh, put = __set__textMesh))::TMPro::TextMeshProUGUI* _textMesh;

  /// @brief Field _fadeInDelay, offset 0x20, size 0x4
  __declspec(property(get = __get__fadeInDelay, put = __set__fadeInDelay)) float_t _fadeInDelay;

  /// @brief Field _fadeInSpeed, offset 0x24, size 0x4
  __declspec(property(get = __get__fadeInSpeed, put = __set__fadeInSpeed)) float_t _fadeInSpeed;

  /// @brief Field _fadeOutSpeed, offset 0x28, size 0x4
  __declspec(property(get = __get__fadeOutSpeed, put = __set__fadeOutSpeed)) float_t _fadeOutSpeed;

  /// @brief Field _isFadingOut, offset 0x2c, size 0x1
  __declspec(property(get = __get__isFadingOut, put = __set__isFadingOut)) bool _isFadingOut;

  /// @brief Field _isFadingIn, offset 0x2d, size 0x1
  __declspec(property(get = __get__isFadingIn, put = __set__isFadingIn)) bool _isFadingIn;

  constexpr ::TMPro::TextMeshProUGUI*& __get__textMesh();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__textMesh() const;

  constexpr void __set__textMesh(::TMPro::TextMeshProUGUI* value);

  constexpr float_t& __get__fadeInDelay();

  constexpr float_t const& __get__fadeInDelay() const;

  constexpr void __set__fadeInDelay(float_t value);

  constexpr float_t& __get__fadeInSpeed();

  constexpr float_t const& __get__fadeInSpeed() const;

  constexpr void __set__fadeInSpeed(float_t value);

  constexpr float_t& __get__fadeOutSpeed();

  constexpr float_t const& __get__fadeOutSpeed() const;

  constexpr void __set__fadeOutSpeed(float_t value);

  constexpr bool& __get__isFadingOut();

  constexpr bool const& __get__isFadingOut() const;

  constexpr void __set__isFadingOut(bool value);

  constexpr bool& __get__isFadingIn();

  constexpr bool const& __get__isFadingIn() const;

  constexpr void __set__isFadingIn(bool value);

  /// @brief Method Awake, addr 0x211e6dc, size 0x20, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method OnDisable, addr 0x211e6fc, size 0x28, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnApplicationFocus, addr 0x211e724, size 0x2c, virtual false, abstract: false, final false
  inline void OnApplicationFocus(bool hasFocus);

  /// @brief Method ShowText, addr 0x211e750, size 0x60, virtual false, abstract: false, final false
  inline void ShowText(::StringW text);

  /// @brief Method ShowTextCoroutine, addr 0x211e7b0, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* ShowTextCoroutine();

  /// @brief Method HideText, addr 0x211e840, size 0x6c, virtual false, abstract: false, final false
  inline void HideText();

  /// @brief Method HideTextCoroutine, addr 0x211e8ac, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* HideTextCoroutine();

  static inline ::HMUI::HoverTextController* New_ctor();

  /// @brief Method .ctor, addr 0x211e93c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HoverTextController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HoverTextController(HoverTextController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HoverTextController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HoverTextController(HoverTextController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HoverTextController();

public:
  /// @brief Field _textMesh, offset: 0x18, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____textMesh;

  /// @brief Field _fadeInDelay, offset: 0x20, size: 0x4, def value: None
  float_t ____fadeInDelay;

  /// @brief Field _fadeInSpeed, offset: 0x24, size: 0x4, def value: None
  float_t ____fadeInSpeed;

  /// @brief Field _fadeOutSpeed, offset: 0x28, size: 0x4, def value: None
  float_t ____fadeOutSpeed;

  /// @brief Field _isFadingOut, offset: 0x2c, size: 0x1, def value: None
  bool ____isFadingOut;

  /// @brief Field _isFadingIn, offset: 0x2d, size: 0x1, def value: None
  bool ____isFadingIn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::HoverTextController, 0x30>, "Size mismatch!");

static_assert(offsetof(::HMUI::HoverTextController, ____textMesh) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverTextController, ____fadeInDelay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverTextController, ____fadeInSpeed) == 0x24, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverTextController, ____fadeOutSpeed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverTextController, ____isFadingOut) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverTextController, ____isFadingIn) == 0x2d, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::HoverTextController);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::HoverTextController*, "HMUI", "HoverTextController");
NEED_NO_BOX(::HMUI::__HoverTextController___HideTextCoroutine_d__12);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__HoverTextController___HideTextCoroutine_d__12*, "HMUI", "HoverTextController/<HideTextCoroutine>d__12");
NEED_NO_BOX(::HMUI::__HoverTextController___ShowTextCoroutine_d__10);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__HoverTextController___ShowTextCoroutine_d__10*, "HMUI", "HoverTextController/<ShowTextCoroutine>d__10");
