#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EulaViewController)
namespace GlobalNamespace {
struct __EulaViewController__ButtonType;
}
namespace UnityEngine::UI {
class Image;
}
namespace GlobalNamespace {
class __EulaViewController___EnableButtonsCoroutine_d__21;
}
namespace GlobalNamespace {
class __EulaViewController__InitData;
}
namespace HMUI {
class TextPageScrollView;
}
namespace GlobalNamespace {
class ICoroutineStarter;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::UI {
class Button;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine {
class Coroutine;
}
namespace GlobalNamespace {
class LocalizedTextAsset;
}
namespace System {
class Object;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct __EulaViewController__ButtonType;
}
namespace GlobalNamespace {
class EulaViewController;
}
namespace GlobalNamespace {
class __EulaViewController__InitData;
}
namespace GlobalNamespace {
class __EulaViewController___EnableButtonsCoroutine_d__21;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__EulaViewController__ButtonType);
MARK_REF_PTR_T(::GlobalNamespace::EulaViewController);
MARK_REF_PTR_T(::GlobalNamespace::__EulaViewController__InitData);
MARK_REF_PTR_T(::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21);
// Type: ::ButtonType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5627))
// CS Name: ::EulaViewController::ButtonType
struct CORDL_TYPE __EulaViewController__ButtonType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____EulaViewController__ButtonType_Unwrapped
  enum struct ____EulaViewController__ButtonType_Unwrapped : int32_t {
    __E_Agree = static_cast<int32_t>(0x0),
    __E_DoNotAgree = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____EulaViewController__ButtonType_Unwrapped() const noexcept {
    return static_cast<____EulaViewController__ButtonType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __EulaViewController__ButtonType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __EulaViewController__ButtonType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Agree value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__EulaViewController__ButtonType const Agree;

  /// @brief Field DoNotAgree value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__EulaViewController__ButtonType const DoNotAgree;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EulaViewController__ButtonType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__EulaViewController__ButtonType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::InitData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5628))
// CS Name: ::EulaViewController::InitData*
class CORDL_TYPE __EulaViewController__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field showDoNotAgreeButton, offset 0x10, size 0x1
  __declspec(property(get = __get_showDoNotAgreeButton, put = __set_showDoNotAgreeButton)) bool showDoNotAgreeButton;

  constexpr bool& __get_showDoNotAgreeButton();

  constexpr bool const& __get_showDoNotAgreeButton() const;

  constexpr void __set_showDoNotAgreeButton(bool value);

  static inline ::GlobalNamespace::__EulaViewController__InitData* New_ctor(bool showDoNotAgreeButton);

  /// @brief Method .ctor, addr 0x22b059c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool showDoNotAgreeButton);

  // Ctor Parameters [CppParam { name: "", ty: "__EulaViewController__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EulaViewController__InitData(__EulaViewController__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EulaViewController__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EulaViewController__InitData(__EulaViewController__InitData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EulaViewController__InitData();

public:
  /// @brief Field showDoNotAgreeButton, offset: 0x10, size: 0x1, def value: None
  bool ___showDoNotAgreeButton;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EulaViewController__InitData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__EulaViewController__InitData, ___showDoNotAgreeButton) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<EnableButtonsCoroutine>d__21
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5629))
// CS Name: ::EulaViewController::<EnableButtonsCoroutine>d__21*
class CORDL_TYPE __EulaViewController___EnableButtonsCoroutine_d__21 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::EulaViewController* __4__this;

  /// @brief Field delay, offset 0x28, size 0x4
  __declspec(property(get = __get_delay, put = __set_delay)) float_t delay;

  /// @brief Field <startProgressBarWidth>5__2, offset 0x2c, size 0x4
  __declspec(property(get = __get__startProgressBarWidth_5__2, put = __set__startProgressBarWidth_5__2)) float_t _startProgressBarWidth_5__2;

  /// @brief Field <elapsedTime>5__3, offset 0x30, size 0x4
  __declspec(property(get = __get__elapsedTime_5__3, put = __set__elapsedTime_5__3)) float_t _elapsedTime_5__3;

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

  constexpr ::GlobalNamespace::EulaViewController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EulaViewController*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::EulaViewController* value);

  constexpr float_t& __get_delay();

  constexpr float_t const& __get_delay() const;

  constexpr void __set_delay(float_t value);

  constexpr float_t& __get__startProgressBarWidth_5__2();

  constexpr float_t const& __get__startProgressBarWidth_5__2() const;

  constexpr void __set__startProgressBarWidth_5__2(float_t value);

  constexpr float_t& __get__elapsedTime_5__3();

  constexpr float_t const& __get__elapsedTime_5__3() const;

  constexpr void __set__elapsedTime_5__3(float_t value);

  static inline ::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x22b0504, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x22b05c4, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x22b05c8, size 0x17c, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x22b0744, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x22b074c, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x22b078c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__EulaViewController___EnableButtonsCoroutine_d__21", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EulaViewController___EnableButtonsCoroutine_d__21(__EulaViewController___EnableButtonsCoroutine_d__21&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EulaViewController___EnableButtonsCoroutine_d__21", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EulaViewController___EnableButtonsCoroutine_d__21(__EulaViewController___EnableButtonsCoroutine_d__21 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EulaViewController___EnableButtonsCoroutine_d__21();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::EulaViewController* _____4__this;

  /// @brief Field delay, offset: 0x28, size: 0x4, def value: None
  float_t ___delay;

  /// @brief Field <startProgressBarWidth>5__2, offset: 0x2c, size: 0x4, def value: None
  float_t ____startProgressBarWidth_5__2;

  /// @brief Field <elapsedTime>5__3, offset: 0x30, size: 0x4, def value: None
  float_t ____elapsedTime_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21, ___delay) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21, ____startProgressBarWidth_5__2) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21, ____elapsedTime_5__3) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::EulaViewController
// SizeInfo { instance_size: 216, native_size: -1, calculated_instance_size: 216, calculated_native_size: 216, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5630))
// CS Name: ::EulaViewController*
class CORDL_TYPE EulaViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using _EnableButtonsCoroutine_d__21 = ::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21;

  using InitData = ::GlobalNamespace::__EulaViewController__InitData;

  using ButtonType = ::GlobalNamespace::__EulaViewController__ButtonType;

  /// @brief Field _agreeButton, offset 0x70, size 0x8
  __declspec(property(get = __get__agreeButton, put = __set__agreeButton))::UnityEngine::UI::Button* _agreeButton;

  /// @brief Field _doNotAgreeButton, offset 0x78, size 0x8
  __declspec(property(get = __get__doNotAgreeButton, put = __set__doNotAgreeButton))::UnityEngine::UI::Button* _doNotAgreeButton;

  /// @brief Field _continueButton, offset 0x80, size 0x8
  __declspec(property(get = __get__continueButton, put = __set__continueButton))::UnityEngine::UI::Button* _continueButton;

  /// @brief Field _disableButtonsProgress, offset 0x88, size 0x8
  __declspec(property(get = __get__disableButtonsProgress, put = __set__disableButtonsProgress))::UnityEngine::UI::Image* _disableButtonsProgress;

  /// @brief Field _disabledButtonDelay, offset 0x90, size 0x4
  __declspec(property(get = __get__disabledButtonDelay, put = __set__disabledButtonDelay)) float_t _disabledButtonDelay;

  /// @brief Field _textPageScrollView, offset 0x98, size 0x8
  __declspec(property(get = __get__textPageScrollView, put = __set__textPageScrollView))::HMUI::TextPageScrollView* _textPageScrollView;

  /// @brief Field _eulaLocalizedTextAsset, offset 0xa0, size 0x8
  __declspec(property(get = __get__eulaLocalizedTextAsset, put = __set__eulaLocalizedTextAsset))::GlobalNamespace::LocalizedTextAsset* _eulaLocalizedTextAsset;

  /// @brief Field _updateNoticeLocalizationKey, offset 0xa8, size 0x8
  __declspec(property(get = __get__updateNoticeLocalizationKey, put = __set__updateNoticeLocalizationKey))::StringW _updateNoticeLocalizationKey;

  /// @brief Field _initData, offset 0xb0, size 0x8
  __declspec(property(get = __get__initData, put = __set__initData))::GlobalNamespace::__EulaViewController__InitData* _initData;

  /// @brief Field _coroutineStarter, offset 0xb8, size 0x8
  __declspec(property(get = __get__coroutineStarter, put = __set__coroutineStarter))::GlobalNamespace::ICoroutineStarter* _coroutineStarter;

  /// @brief Field didFinishEvent, offset 0xc0, size 0x8
  __declspec(property(get = __get_didFinishEvent, put = __set_didFinishEvent))::System::Action_1<::GlobalNamespace::__EulaViewController__ButtonType>* didFinishEvent;

  /// @brief Field _showUpdate, offset 0xc8, size 0x1
  __declspec(property(get = __get__showUpdate, put = __set__showUpdate)) bool _showUpdate;

  /// @brief Field _showOnlyContinueButton, offset 0xc9, size 0x1
  __declspec(property(get = __get__showOnlyContinueButton, put = __set__showOnlyContinueButton)) bool _showOnlyContinueButton;

  /// @brief Field _buttonsCoroutine, offset 0xd0, size 0x8
  __declspec(property(get = __get__buttonsCoroutine, put = __set__buttonsCoroutine))::UnityEngine::Coroutine* _buttonsCoroutine;

  constexpr ::UnityEngine::UI::Button*& __get__agreeButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__agreeButton() const;

  constexpr void __set__agreeButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get__doNotAgreeButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__doNotAgreeButton() const;

  constexpr void __set__doNotAgreeButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get__continueButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__continueButton() const;

  constexpr void __set__continueButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Image*& __get__disableButtonsProgress();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& __get__disableButtonsProgress() const;

  constexpr void __set__disableButtonsProgress(::UnityEngine::UI::Image* value);

  constexpr float_t& __get__disabledButtonDelay();

  constexpr float_t const& __get__disabledButtonDelay() const;

  constexpr void __set__disabledButtonDelay(float_t value);

  constexpr ::HMUI::TextPageScrollView*& __get__textPageScrollView();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::TextPageScrollView*> const& __get__textPageScrollView() const;

  constexpr void __set__textPageScrollView(::HMUI::TextPageScrollView* value);

  constexpr ::GlobalNamespace::LocalizedTextAsset*& __get__eulaLocalizedTextAsset();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LocalizedTextAsset*> const& __get__eulaLocalizedTextAsset() const;

  constexpr void __set__eulaLocalizedTextAsset(::GlobalNamespace::LocalizedTextAsset* value);

  constexpr ::StringW& __get__updateNoticeLocalizationKey();

  constexpr ::StringW const& __get__updateNoticeLocalizationKey() const;

  constexpr void __set__updateNoticeLocalizationKey(::StringW value);

  constexpr ::GlobalNamespace::__EulaViewController__InitData*& __get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__EulaViewController__InitData*> const& __get__initData() const;

  constexpr void __set__initData(::GlobalNamespace::__EulaViewController__InitData* value);

  constexpr ::GlobalNamespace::ICoroutineStarter*& __get__coroutineStarter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ICoroutineStarter*> const& __get__coroutineStarter() const;

  constexpr void __set__coroutineStarter(::GlobalNamespace::ICoroutineStarter* value);

  constexpr ::System::Action_1<::GlobalNamespace::__EulaViewController__ButtonType>*& __get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__EulaViewController__ButtonType>*> const& __get_didFinishEvent() const;

  constexpr void __set_didFinishEvent(::System::Action_1<::GlobalNamespace::__EulaViewController__ButtonType>* value);

  constexpr bool& __get__showUpdate();

  constexpr bool const& __get__showUpdate() const;

  constexpr void __set__showUpdate(bool value);

  constexpr bool& __get__showOnlyContinueButton();

  constexpr bool const& __get__showOnlyContinueButton() const;

  constexpr void __set__showOnlyContinueButton(bool value);

  constexpr ::UnityEngine::Coroutine*& __get__buttonsCoroutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __get__buttonsCoroutine() const;

  constexpr void __set__buttonsCoroutine(::UnityEngine::Coroutine* value);

  /// @brief Method add_didFinishEvent, addr 0x22aff24, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_1<::GlobalNamespace::__EulaViewController__ButtonType>* value);

  /// @brief Method remove_didFinishEvent, addr 0x22affd4, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_1<::GlobalNamespace::__EulaViewController__ButtonType>* value);

  /// @brief Method DidActivate, addr 0x22b0084, size 0x334, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x22b0430, size 0xc0, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method Init, addr 0x22b04f0, size 0x14, virtual false, abstract: false, final false
  inline void Init(bool showUpdate, bool showOnlyContinueButton);

  /// @brief Method EnableButtonsCoroutine, addr 0x22b03b8, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* EnableButtonsCoroutine(float_t delay);

  static inline ::GlobalNamespace::EulaViewController* New_ctor();

  /// @brief Method .ctor, addr 0x22b052c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <DidActivate>b__18_0, addr 0x22b053c, size 0x20, virtual false, abstract: false, final false
  inline void _DidActivate_b__18_0();

  /// @brief Method <DidActivate>b__18_1, addr 0x22b055c, size 0x20, virtual false, abstract: false, final false
  inline void _DidActivate_b__18_1();

  /// @brief Method <DidActivate>b__18_2, addr 0x22b057c, size 0x20, virtual false, abstract: false, final false
  inline void _DidActivate_b__18_2();

  // Ctor Parameters [CppParam { name: "", ty: "EulaViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EulaViewController(EulaViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EulaViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EulaViewController(EulaViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EulaViewController();

public:
  /// @brief Field _agreeButton, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____agreeButton;

  /// @brief Field _doNotAgreeButton, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____doNotAgreeButton;

  /// @brief Field _continueButton, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____continueButton;

  /// @brief Field _disableButtonsProgress, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UI::Image* ____disableButtonsProgress;

  /// @brief Field _disabledButtonDelay, offset: 0x90, size: 0x4, def value: None
  float_t ____disabledButtonDelay;

  /// @brief Field _textPageScrollView, offset: 0x98, size: 0x8, def value: None
  ::HMUI::TextPageScrollView* ____textPageScrollView;

  /// @brief Field _eulaLocalizedTextAsset, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::LocalizedTextAsset* ____eulaLocalizedTextAsset;

  /// @brief Field _updateNoticeLocalizationKey, offset: 0xa8, size: 0x8, def value: None
  ::StringW ____updateNoticeLocalizationKey;

  /// @brief Field _initData, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::__EulaViewController__InitData* ____initData;

  /// @brief Field _coroutineStarter, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::ICoroutineStarter* ____coroutineStarter;

  /// @brief Field didFinishEvent, offset: 0xc0, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::__EulaViewController__ButtonType>* ___didFinishEvent;

  /// @brief Field _showUpdate, offset: 0xc8, size: 0x1, def value: None
  bool ____showUpdate;

  /// @brief Field _showOnlyContinueButton, offset: 0xc9, size: 0x1, def value: None
  bool ____showOnlyContinueButton;

  /// @brief Field _buttonsCoroutine, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ____buttonsCoroutine;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EulaViewController, 0xd8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EulaViewController, ____agreeButton) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EulaViewController, ____doNotAgreeButton) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EulaViewController, ____continueButton) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EulaViewController, ____disableButtonsProgress) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EulaViewController, ____disabledButtonDelay) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EulaViewController, ____textPageScrollView) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EulaViewController, ____eulaLocalizedTextAsset) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EulaViewController, ____updateNoticeLocalizationKey) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EulaViewController, ____initData) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EulaViewController, ____coroutineStarter) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EulaViewController, ___didFinishEvent) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EulaViewController, ____showUpdate) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EulaViewController, ____showOnlyContinueButton) == 0xc9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EulaViewController, ____buttonsCoroutine) == 0xd0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EulaViewController__ButtonType, "", "EulaViewController/ButtonType");
NEED_NO_BOX(::GlobalNamespace::EulaViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EulaViewController*, "", "EulaViewController");
NEED_NO_BOX(::GlobalNamespace::__EulaViewController__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EulaViewController__InitData*, "", "EulaViewController/InitData");
NEED_NO_BOX(::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21*, "", "EulaViewController/<EnableButtonsCoroutine>d__21");
