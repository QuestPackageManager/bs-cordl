#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CreditsController)
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class CreditsScenesTransitionSetupDataSO;
}
namespace HMUI {
class ButtonBinder;
}
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class __CreditsController___ScrollCoroutine_d__13;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class AudioPlayerBase;
}
namespace UnityEngine {
class RectTransform;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
// Forward declare root types
namespace GlobalNamespace {
class CreditsController;
}
namespace GlobalNamespace {
class __CreditsController___ScrollCoroutine_d__13;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CreditsController);
MARK_REF_PTR_T(::GlobalNamespace::__CreditsController___ScrollCoroutine_d__13);
// Type: ::<ScrollCoroutine>d__13
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5471))
// CS Name: ::CreditsController::<ScrollCoroutine>d__13*
class CORDL_TYPE __CreditsController___ScrollCoroutine_d__13 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::CreditsController* __4__this;

  /// @brief Field <contentHeight>5__2, offset 0x28, size 0x4
  __declspec(property(get = __get__contentHeight_5__2, put = __set__contentHeight_5__2)) float_t _contentHeight_5__2;

  /// @brief Field <contentWrapperHeight>5__3, offset 0x2c, size 0x4
  __declspec(property(get = __get__contentWrapperHeight_5__3, put = __set__contentWrapperHeight_5__3)) float_t _contentWrapperHeight_5__3;

  /// @brief Field <posY>5__4, offset 0x30, size 0x4
  __declspec(property(get = __get__posY_5__4, put = __set__posY_5__4)) float_t _posY_5__4;

  /// @brief Field <scrollingSpeed>5__5, offset 0x34, size 0x4
  __declspec(property(get = __get__scrollingSpeed_5__5, put = __set__scrollingSpeed_5__5)) float_t _scrollingSpeed_5__5;

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

  constexpr ::GlobalNamespace::CreditsController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CreditsController*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::CreditsController* value);

  constexpr float_t& __get__contentHeight_5__2();

  constexpr float_t const& __get__contentHeight_5__2() const;

  constexpr void __set__contentHeight_5__2(float_t value);

  constexpr float_t& __get__contentWrapperHeight_5__3();

  constexpr float_t const& __get__contentWrapperHeight_5__3() const;

  constexpr void __set__contentWrapperHeight_5__3(float_t value);

  constexpr float_t& __get__posY_5__4();

  constexpr float_t const& __get__posY_5__4() const;

  constexpr void __set__posY_5__4(float_t value);

  constexpr float_t& __get__scrollingSpeed_5__5();

  constexpr float_t const& __get__scrollingSpeed_5__5() const;

  constexpr void __set__scrollingSpeed_5__5(float_t value);

  static inline ::GlobalNamespace::__CreditsController___ScrollCoroutine_d__13* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x22830a4 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x2283108 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x228310c size 0x26c virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2283378 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x2283380 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x22833c0 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__CreditsController___ScrollCoroutine_d__13", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CreditsController___ScrollCoroutine_d__13(__CreditsController___ScrollCoroutine_d__13&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CreditsController___ScrollCoroutine_d__13", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CreditsController___ScrollCoroutine_d__13(__CreditsController___ScrollCoroutine_d__13 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CreditsController___ScrollCoroutine_d__13();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::CreditsController* _____4__this;

  /// @brief Field <contentHeight>5__2, offset: 0x28, size: 0x4, def value: None
  float_t ____contentHeight_5__2;

  /// @brief Field <contentWrapperHeight>5__3, offset: 0x2c, size: 0x4, def value: None
  float_t ____contentWrapperHeight_5__3;

  /// @brief Field <posY>5__4, offset: 0x30, size: 0x4, def value: None
  float_t ____posY_5__4;

  /// @brief Field <scrollingSpeed>5__5, offset: 0x34, size: 0x4, def value: None
  float_t ____scrollingSpeed_5__5;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CreditsController___ScrollCoroutine_d__13, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::CreditsController
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 90, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5472))
// CS Name: ::CreditsController*
class CORDL_TYPE CreditsController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _ScrollCoroutine_d__13 = ::GlobalNamespace::__CreditsController___ScrollCoroutine_d__13;

  /// @brief Field _creditsSceneSetupDataSO, offset 0x18, size 0x8
  __declspec(property(get = __get__creditsSceneSetupDataSO, put = __set__creditsSceneSetupDataSO))::GlobalNamespace::CreditsScenesTransitionSetupDataSO* _creditsSceneSetupDataSO;

  /// @brief Field _audioPlayer, offset 0x20, size 0x8
  __declspec(property(get = __get__audioPlayer, put = __set__audioPlayer))::GlobalNamespace::AudioPlayerBase* _audioPlayer;

  /// @brief Field _continueButton, offset 0x28, size 0x8
  __declspec(property(get = __get__continueButton, put = __set__continueButton))::UnityEngine::UI::Button* _continueButton;

  /// @brief Field _contentRectTransform, offset 0x30, size 0x8
  __declspec(property(get = __get__contentRectTransform, put = __set__contentRectTransform))::UnityEngine::RectTransform* _contentRectTransform;

  /// @brief Field _overflowHeight, offset 0x38, size 0x4
  __declspec(property(get = __get__overflowHeight, put = __set__overflowHeight)) float_t _overflowHeight;

  /// @brief Field _contentWrapper, offset 0x40, size 0x8
  __declspec(property(get = __get__contentWrapper, put = __set__contentWrapper))::UnityEngine::RectTransform* _contentWrapper;

  /// @brief Field _vrPlatformHelper, offset 0x48, size 0x8
  __declspec(property(get = __get__vrPlatformHelper, put = __set__vrPlatformHelper))::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  /// @brief Field _buttonBinder, offset 0x50, size 0x8
  __declspec(property(get = __get__buttonBinder, put = __set__buttonBinder))::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Field _didFinish, offset 0x58, size 0x1
  __declspec(property(get = __get__didFinish, put = __set__didFinish)) bool _didFinish;

  /// @brief Field _isPaused, offset 0x59, size 0x1
  __declspec(property(get = __get__isPaused, put = __set__isPaused)) bool _isPaused;

  constexpr ::GlobalNamespace::CreditsScenesTransitionSetupDataSO*& __get__creditsSceneSetupDataSO();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CreditsScenesTransitionSetupDataSO*> const& __get__creditsSceneSetupDataSO() const;

  constexpr void __set__creditsSceneSetupDataSO(::GlobalNamespace::CreditsScenesTransitionSetupDataSO* value);

  constexpr ::GlobalNamespace::AudioPlayerBase*& __get__audioPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioPlayerBase*> const& __get__audioPlayer() const;

  constexpr void __set__audioPlayer(::GlobalNamespace::AudioPlayerBase* value);

  constexpr ::UnityEngine::UI::Button*& __get__continueButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__continueButton() const;

  constexpr void __set__continueButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::RectTransform*& __get__contentRectTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get__contentRectTransform() const;

  constexpr void __set__contentRectTransform(::UnityEngine::RectTransform* value);

  constexpr float_t& __get__overflowHeight();

  constexpr float_t const& __get__overflowHeight() const;

  constexpr void __set__overflowHeight(float_t value);

  constexpr ::UnityEngine::RectTransform*& __get__contentWrapper();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get__contentWrapper() const;

  constexpr void __set__contentWrapper(::UnityEngine::RectTransform* value);

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __get__vrPlatformHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& __get__vrPlatformHelper() const;

  constexpr void __set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  constexpr ::HMUI::ButtonBinder*& __get__buttonBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& __get__buttonBinder() const;

  constexpr void __set__buttonBinder(::HMUI::ButtonBinder* value);

  constexpr bool& __get__didFinish();

  constexpr bool const& __get__didFinish() const;

  constexpr void __set__didFinish(bool value);

  constexpr bool& __get__isPaused();

  constexpr bool const& __get__isPaused() const;

  constexpr void __set__isPaused(bool value);

  /// @brief Method Start addr 0x22829f8 size 0x29c virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x2282d2c size 0x1b4 virtual false final false
  inline void OnDestroy();

  /// @brief Method Finish addr 0x2282ee0 size 0x1c4 virtual false final false
  inline void Finish();

  /// @brief Method ScrollCoroutine addr 0x2282cc4 size 0x68 virtual false final false
  inline ::System::Collections::IEnumerator* ScrollCoroutine();

  /// @brief Method HandleInputFocusCaptured addr 0x2282c94 size 0x30 virtual false final false
  inline void HandleInputFocusCaptured();

  /// @brief Method HandleInputFocusReleased addr 0x22830cc size 0x2c virtual false final false
  inline void HandleInputFocusReleased();

  static inline ::GlobalNamespace::CreditsController* New_ctor();

  /// @brief Method .ctor addr 0x22830f8 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CreditsController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CreditsController(CreditsController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CreditsController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CreditsController(CreditsController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CreditsController();

public:
  /// @brief Field _creditsSceneSetupDataSO, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::CreditsScenesTransitionSetupDataSO* ____creditsSceneSetupDataSO;

  /// @brief Field _audioPlayer, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::AudioPlayerBase* ____audioPlayer;

  /// @brief Field _continueButton, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____continueButton;

  /// @brief Field _contentRectTransform, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ____contentRectTransform;

  /// @brief Field _overflowHeight, offset: 0x38, size: 0x4, def value: None
  float_t ____overflowHeight;

  /// @brief Field _contentWrapper, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ____contentWrapper;

  /// @brief Field _vrPlatformHelper, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  /// @brief Field _buttonBinder, offset: 0x50, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  /// @brief Field _didFinish, offset: 0x58, size: 0x1, def value: None
  bool ____didFinish;

  /// @brief Field _isPaused, offset: 0x59, size: 0x1, def value: None
  bool ____isPaused;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CreditsController, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CreditsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CreditsController*, "", "CreditsController");
NEED_NO_BOX(::GlobalNamespace::__CreditsController___ScrollCoroutine_d__13);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CreditsController___ScrollCoroutine_d__13*, "", "CreditsController/<ScrollCoroutine>d__13");
