#pragma once
// IWYU pragma private; include "GlobalNamespace/EulaViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CompletableViewController_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EulaViewController)
namespace GlobalNamespace {
struct EulaViewController_ButtonType;
}
namespace GlobalNamespace {
class EulaViewController__EnableButtonsCoroutine_d__17;
}
namespace GlobalNamespace {
class ICoroutineStarter;
}
namespace GlobalNamespace {
class LocalizedTextAsset;
}
namespace HMUI {
class TextPageScrollView;
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
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class Coroutine;
}
// Forward declare root types
namespace GlobalNamespace {
struct EulaViewController_ButtonType;
}
namespace GlobalNamespace {
class EulaViewController;
}
namespace GlobalNamespace {
class EulaViewController__EnableButtonsCoroutine_d__17;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EulaViewController_ButtonType);
MARK_REF_PTR_T(::GlobalNamespace::EulaViewController);
MARK_REF_PTR_T(::GlobalNamespace::EulaViewController__EnableButtonsCoroutine_d__17);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: EulaViewController/ButtonType
struct CORDL_TYPE EulaViewController_ButtonType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EulaViewController_ButtonType_Unwrapped
  enum struct __EulaViewController_ButtonType_Unwrapped : int32_t {
    __E_Agree = static_cast<int32_t>(0x0),
    __E_DoNotAgree = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EulaViewController_ButtonType_Unwrapped() const noexcept {
    return static_cast<__EulaViewController_ButtonType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EulaViewController_ButtonType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EulaViewController_ButtonType(int32_t value__) noexcept;

  /// @brief Field Agree value: I32(0)
  static ::GlobalNamespace::EulaViewController_ButtonType const Agree;

  /// @brief Field DoNotAgree value: I32(1)
  static ::GlobalNamespace::EulaViewController_ButtonType const DoNotAgree;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6476 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EulaViewController_ButtonType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EulaViewController_ButtonType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EulaViewController/<EnableButtonsCoroutine>d__17
class CORDL_TYPE EulaViewController__EnableButtonsCoroutine_d__17 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::EulaViewController> __4__this;

  /// @brief Field <elapsedTime>5__3, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__elapsedTime_5__3, put = __cordl_internal_set__elapsedTime_5__3)) float_t _elapsedTime_5__3;

  /// @brief Field <startProgressBarWidth>5__2, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__startProgressBarWidth_5__2, put = __cordl_internal_set__startProgressBarWidth_5__2)) float_t _startProgressBarWidth_5__2;

  /// @brief Field delay, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_delay, put = __cordl_internal_set_delay)) float_t delay;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x580f0d8, size 0x174, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::EulaViewController__EnableButtonsCoroutine_d__17* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x580f24c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x580f254, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x580f28c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x580f0d4, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::EulaViewController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::EulaViewController>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get__elapsedTime_5__3() const;

  constexpr float_t& __cordl_internal_get__elapsedTime_5__3();

  constexpr float_t const& __cordl_internal_get__startProgressBarWidth_5__2() const;

  constexpr float_t& __cordl_internal_get__startProgressBarWidth_5__2();

  constexpr float_t const& __cordl_internal_get_delay() const;

  constexpr float_t& __cordl_internal_get_delay();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::EulaViewController> value);

  constexpr void __cordl_internal_set__elapsedTime_5__3(float_t value);

  constexpr void __cordl_internal_set__startProgressBarWidth_5__2(float_t value);

  constexpr void __cordl_internal_set_delay(float_t value);

  /// @brief Method .ctor, addr 0x580ef90, size 0x8, virtual false, abstract: false, final false
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
  constexpr EulaViewController__EnableButtonsCoroutine_d__17();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EulaViewController__EnableButtonsCoroutine_d__17", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EulaViewController__EnableButtonsCoroutine_d__17(EulaViewController__EnableButtonsCoroutine_d__17&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EulaViewController__EnableButtonsCoroutine_d__17", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EulaViewController__EnableButtonsCoroutine_d__17(EulaViewController__EnableButtonsCoroutine_d__17 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6477 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EulaViewController> _____4__this;

  /// @brief Field delay, offset: 0x28, size: 0x4, def value: None
  float_t ___delay;

  /// @brief Field <startProgressBarWidth>5__2, offset: 0x2c, size: 0x4, def value: None
  float_t ____startProgressBarWidth_5__2;

  /// @brief Field <elapsedTime>5__3, offset: 0x30, size: 0x4, def value: None
  float_t ____elapsedTime_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EulaViewController__EnableButtonsCoroutine_d__17, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EulaViewController__EnableButtonsCoroutine_d__17, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EulaViewController__EnableButtonsCoroutine_d__17, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EulaViewController__EnableButtonsCoroutine_d__17, ___delay) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EulaViewController__EnableButtonsCoroutine_d__17, ____startProgressBarWidth_5__2) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EulaViewController__EnableButtonsCoroutine_d__17, ____elapsedTime_5__3) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EulaViewController__EnableButtonsCoroutine_d__17, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies CompletableViewController`1<T>, EulaViewController::ButtonType
namespace GlobalNamespace {
// Is value type: false
// CS Name: EulaViewController
class CORDL_TYPE EulaViewController : public ::GlobalNamespace::CompletableViewController_1<::GlobalNamespace::EulaViewController_ButtonType> {
public:
  // Declarations
  using ButtonType = ::GlobalNamespace::EulaViewController_ButtonType;

  using _EnableButtonsCoroutine_d__17 = ::GlobalNamespace::EulaViewController__EnableButtonsCoroutine_d__17;

  /// @brief Field _agreeButton, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__agreeButton, put = __cordl_internal_set__agreeButton)) ::UnityW<::UnityEngine::UI::Button> _agreeButton;

  /// @brief Field _buttonsCoroutine, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonsCoroutine, put = __cordl_internal_set__buttonsCoroutine)) ::UnityEngine::Coroutine* _buttonsCoroutine;

  /// @brief Field _continueButton, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__continueButton, put = __cordl_internal_set__continueButton)) ::UnityW<::UnityEngine::UI::Button> _continueButton;

  /// @brief Field _coroutineStarter, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__coroutineStarter, put = __cordl_internal_set__coroutineStarter)) ::GlobalNamespace::ICoroutineStarter* _coroutineStarter;

  /// @brief Field _disableButtonsProgress, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__disableButtonsProgress, put = __cordl_internal_set__disableButtonsProgress)) ::UnityW<::UnityEngine::UI::Image> _disableButtonsProgress;

  /// @brief Field _disabledButtonDelay, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get__disabledButtonDelay, put = __cordl_internal_set__disabledButtonDelay)) float_t _disabledButtonDelay;

  /// @brief Field _doNotAgreeButton, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__doNotAgreeButton, put = __cordl_internal_set__doNotAgreeButton)) ::UnityW<::UnityEngine::UI::Button> _doNotAgreeButton;

  /// @brief Field _eulaLocalizedTextAsset, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__eulaLocalizedTextAsset, put = __cordl_internal_set__eulaLocalizedTextAsset)) ::UnityW<::GlobalNamespace::LocalizedTextAsset> _eulaLocalizedTextAsset;

  /// @brief Field _showOnlyContinueButton, offset 0xc9, size 0x1
  __declspec(property(get = __cordl_internal_get__showOnlyContinueButton, put = __cordl_internal_set__showOnlyContinueButton)) bool _showOnlyContinueButton;

  /// @brief Field _showUpdate, offset 0xc8, size 0x1
  __declspec(property(get = __cordl_internal_get__showUpdate, put = __cordl_internal_set__showUpdate)) bool _showUpdate;

  /// @brief Field _textPageScrollView, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__textPageScrollView, put = __cordl_internal_set__textPageScrollView)) ::UnityW<::HMUI::TextPageScrollView> _textPageScrollView;

  /// @brief Field _updateNoticeLocalizationKey, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__updateNoticeLocalizationKey, put = __cordl_internal_set__updateNoticeLocalizationKey)) ::StringW _updateNoticeLocalizationKey;

  /// @brief Method Awake, addr 0x580ea94, size 0x38, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method DidActivate, addr 0x580eacc, size 0x388, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x580eeb8, size 0xcc, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method EnableButtonsCoroutine, addr 0x580ee54, size 0x64, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* EnableButtonsCoroutine(float_t delay);

  /// @brief Method Init, addr 0x580ef84, size 0xc, virtual false, abstract: false, final false
  inline void Init(bool showUpdate, bool showOnlyContinueButton);

  static inline ::GlobalNamespace::EulaViewController* New_ctor();

  /// @brief Method <DidActivate>b__14_0, addr 0x580efe4, size 0x50, virtual false, abstract: false, final false
  inline void _DidActivate_b__14_0();

  /// @brief Method <DidActivate>b__14_1, addr 0x580f034, size 0x50, virtual false, abstract: false, final false
  inline void _DidActivate_b__14_1();

  /// @brief Method <DidActivate>b__14_2, addr 0x580f084, size 0x50, virtual false, abstract: false, final false
  inline void _DidActivate_b__14_2();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__agreeButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__agreeButton();

  constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__buttonsCoroutine() const;

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__buttonsCoroutine();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__continueButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__continueButton();

  constexpr ::GlobalNamespace::ICoroutineStarter* const& __cordl_internal_get__coroutineStarter() const;

  constexpr ::GlobalNamespace::ICoroutineStarter*& __cordl_internal_get__coroutineStarter();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__disableButtonsProgress() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__disableButtonsProgress();

  constexpr float_t const& __cordl_internal_get__disabledButtonDelay() const;

  constexpr float_t& __cordl_internal_get__disabledButtonDelay();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__doNotAgreeButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__doNotAgreeButton();

  constexpr ::UnityW<::GlobalNamespace::LocalizedTextAsset> const& __cordl_internal_get__eulaLocalizedTextAsset() const;

  constexpr ::UnityW<::GlobalNamespace::LocalizedTextAsset>& __cordl_internal_get__eulaLocalizedTextAsset();

  constexpr bool const& __cordl_internal_get__showOnlyContinueButton() const;

  constexpr bool& __cordl_internal_get__showOnlyContinueButton();

  constexpr bool const& __cordl_internal_get__showUpdate() const;

  constexpr bool& __cordl_internal_get__showUpdate();

  constexpr ::UnityW<::HMUI::TextPageScrollView> const& __cordl_internal_get__textPageScrollView() const;

  constexpr ::UnityW<::HMUI::TextPageScrollView>& __cordl_internal_get__textPageScrollView();

  constexpr ::StringW const& __cordl_internal_get__updateNoticeLocalizationKey() const;

  constexpr ::StringW& __cordl_internal_get__updateNoticeLocalizationKey();

  constexpr void __cordl_internal_set__agreeButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__buttonsCoroutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set__continueButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__coroutineStarter(::GlobalNamespace::ICoroutineStarter* value);

  constexpr void __cordl_internal_set__disableButtonsProgress(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__disabledButtonDelay(float_t value);

  constexpr void __cordl_internal_set__doNotAgreeButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__eulaLocalizedTextAsset(::UnityW<::GlobalNamespace::LocalizedTextAsset> value);

  constexpr void __cordl_internal_set__showOnlyContinueButton(bool value);

  constexpr void __cordl_internal_set__showUpdate(bool value);

  constexpr void __cordl_internal_set__textPageScrollView(::UnityW<::HMUI::TextPageScrollView> value);

  constexpr void __cordl_internal_set__updateNoticeLocalizationKey(::StringW value);

  /// @brief Method .ctor, addr 0x580ef98, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EulaViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EulaViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EulaViewController(EulaViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EulaViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EulaViewController(EulaViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6478 };

  /// @brief Field _agreeButton, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____agreeButton;

  /// @brief Field _doNotAgreeButton, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____doNotAgreeButton;

  /// @brief Field _continueButton, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____continueButton;

  /// @brief Field _disabledButtonDelay, offset: 0x98, size: 0x4, def value: None
  float_t ____disabledButtonDelay;

  /// @brief Field _disableButtonsProgress, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____disableButtonsProgress;

  /// @brief Field _textPageScrollView, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::HMUI::TextPageScrollView> ____textPageScrollView;

  /// @brief Field _eulaLocalizedTextAsset, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LocalizedTextAsset> ____eulaLocalizedTextAsset;

  /// @brief Field _updateNoticeLocalizationKey, offset: 0xb8, size: 0x8, def value: None
  ::StringW ____updateNoticeLocalizationKey;

  /// @brief Field _coroutineStarter, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::ICoroutineStarter* ____coroutineStarter;

  /// @brief Field _showUpdate, offset: 0xc8, size: 0x1, def value: None
  bool ____showUpdate;

  /// @brief Field _showOnlyContinueButton, offset: 0xc9, size: 0x1, def value: None
  bool ____showOnlyContinueButton;

  /// @brief Field _buttonsCoroutine, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ____buttonsCoroutine;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EulaViewController, ____agreeButton) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EulaViewController, ____doNotAgreeButton) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EulaViewController, ____continueButton) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EulaViewController, ____disabledButtonDelay) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EulaViewController, ____disableButtonsProgress) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EulaViewController, ____textPageScrollView) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EulaViewController, ____eulaLocalizedTextAsset) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EulaViewController, ____updateNoticeLocalizationKey) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EulaViewController, ____coroutineStarter) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EulaViewController, ____showUpdate) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EulaViewController, ____showOnlyContinueButton) == 0xc9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EulaViewController, ____buttonsCoroutine) == 0xd0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EulaViewController, 0xd8>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EulaViewController_ButtonType, "", "EulaViewController/ButtonType");
NEED_NO_BOX(::GlobalNamespace::EulaViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EulaViewController*, "", "EulaViewController");
NEED_NO_BOX(::GlobalNamespace::EulaViewController__EnableButtonsCoroutine_d__17);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EulaViewController__EnableButtonsCoroutine_d__17*, "", "EulaViewController/<EnableButtonsCoroutine>d__17");
