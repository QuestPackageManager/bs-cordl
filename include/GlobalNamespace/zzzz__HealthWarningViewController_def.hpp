#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HealthWarningViewController)
namespace GlobalNamespace {
class ICoroutineStarter;
}
namespace GlobalNamespace {
class SafeAreaRectChecker;
}
namespace GlobalNamespace {
class __HealthWarningViewController___DismissHealthAndSafety_d__15;
}
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
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine {
class Coroutine;
}
// Forward declare root types
namespace GlobalNamespace {
class HealthWarningViewController;
}
namespace GlobalNamespace {
class __HealthWarningViewController___DismissHealthAndSafety_d__15;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HealthWarningViewController);
MARK_REF_PTR_T(::GlobalNamespace::__HealthWarningViewController___DismissHealthAndSafety_d__15);
// Type: ::<DismissHealthAndSafety>d__15
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::HealthWarningViewController::<DismissHealthAndSafety>d__15*
class CORDL_TYPE __HealthWarningViewController___DismissHealthAndSafety_d__15 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::HealthWarningViewController> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x23b73d0, size 0xc8, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__HealthWarningViewController___DismissHealthAndSafety_d__15* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x23b7498, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x23b74a0, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x23b74e0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x23b73cc, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::HealthWarningViewController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::HealthWarningViewController>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::HealthWarningViewController> value);

  /// @brief Method .ctor, addr 0x23b7380, size 0x28, virtual false, abstract: false, final false
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
  constexpr __HealthWarningViewController___DismissHealthAndSafety_d__15();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HealthWarningViewController___DismissHealthAndSafety_d__15", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HealthWarningViewController___DismissHealthAndSafety_d__15(__HealthWarningViewController___DismissHealthAndSafety_d__15&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HealthWarningViewController___DismissHealthAndSafety_d__15", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HealthWarningViewController___DismissHealthAndSafety_d__15(__HealthWarningViewController___DismissHealthAndSafety_d__15 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HealthWarningViewController> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__HealthWarningViewController___DismissHealthAndSafety_d__15, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__HealthWarningViewController___DismissHealthAndSafety_d__15, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HealthWarningViewController___DismissHealthAndSafety_d__15, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HealthWarningViewController___DismissHealthAndSafety_d__15, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::HealthWarningViewController
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 192, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::HealthWarningViewController*
class CORDL_TYPE HealthWarningViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using _DismissHealthAndSafety_d__15 = ::GlobalNamespace::__HealthWarningViewController___DismissHealthAndSafety_d__15;

  /// @brief Field _continueButton, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__continueButton, put = __cordl_internal_set__continueButton))::UnityW<::UnityEngine::UI::Button> _continueButton;

  /// @brief Field _coroutineStarter, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__coroutineStarter, put = __cordl_internal_set__coroutineStarter))::GlobalNamespace::ICoroutineStarter* _coroutineStarter;

  /// @brief Field _dismissCoroutine, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__dismissCoroutine, put = __cordl_internal_set__dismissCoroutine))::UnityEngine::Coroutine* _dismissCoroutine;

  /// @brief Field _duration, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get__duration, put = __cordl_internal_set__duration)) float_t _duration;

  /// @brief Field _healthAndSafetyLocalizationKey, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__healthAndSafetyLocalizationKey, put = __cordl_internal_set__healthAndSafetyLocalizationKey))::StringW _healthAndSafetyLocalizationKey;

  /// @brief Field _healthAndSafetyPSLocalizationKey, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__healthAndSafetyPSLocalizationKey, put = __cordl_internal_set__healthAndSafetyPSLocalizationKey))::StringW _healthAndSafetyPSLocalizationKey;

  /// @brief Field _healthAndSafetyTextMesh, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__healthAndSafetyTextMesh, put = __cordl_internal_set__healthAndSafetyTextMesh))::UnityW<::TMPro::TextMeshProUGUI> _healthAndSafetyTextMesh;

  /// @brief Field _requiresInteraction, offset 0xb0, size 0x1
  __declspec(property(get = __cordl_internal_get__requiresInteraction, put = __cordl_internal_set__requiresInteraction)) bool _requiresInteraction;

  /// @brief Field _safeAreaRectChecker, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__safeAreaRectChecker, put = __cordl_internal_set__safeAreaRectChecker))::UnityW<::GlobalNamespace::SafeAreaRectChecker> _safeAreaRectChecker;

  /// @brief Field didFinishEvent, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent, put = __cordl_internal_set_didFinishEvent))::System::Action* didFinishEvent;

  /// @brief Method DidActivate, addr 0x23b70a4, size 0x1a4, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x23b72b0, size 0xc4, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method DismissHealthAndSafety, addr 0x23b7248, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* DismissHealthAndSafety();

  /// @brief Method Init, addr 0x23b7374, size 0xc, virtual false, abstract: false, final false
  inline void Init(bool requiresInteraction);

  static inline ::GlobalNamespace::HealthWarningViewController* New_ctor();

  /// @brief Method <DidActivate>b__12_0, addr 0x23b73b0, size 0x1c, virtual false, abstract: false, final false
  inline void _DidActivate_b__12_0();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__continueButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__continueButton();

  constexpr ::GlobalNamespace::ICoroutineStarter*& __cordl_internal_get__coroutineStarter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ICoroutineStarter*> const& __cordl_internal_get__coroutineStarter() const;

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__dismissCoroutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get__dismissCoroutine() const;

  constexpr float_t const& __cordl_internal_get__duration() const;

  constexpr float_t& __cordl_internal_get__duration();

  constexpr ::StringW const& __cordl_internal_get__healthAndSafetyLocalizationKey() const;

  constexpr ::StringW& __cordl_internal_get__healthAndSafetyLocalizationKey();

  constexpr ::StringW const& __cordl_internal_get__healthAndSafetyPSLocalizationKey() const;

  constexpr ::StringW& __cordl_internal_get__healthAndSafetyPSLocalizationKey();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__healthAndSafetyTextMesh() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__healthAndSafetyTextMesh();

  constexpr bool const& __cordl_internal_get__requiresInteraction() const;

  constexpr bool& __cordl_internal_get__requiresInteraction();

  constexpr ::UnityW<::GlobalNamespace::SafeAreaRectChecker> const& __cordl_internal_get__safeAreaRectChecker() const;

  constexpr ::UnityW<::GlobalNamespace::SafeAreaRectChecker>& __cordl_internal_get__safeAreaRectChecker();

  constexpr ::System::Action*& __cordl_internal_get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didFinishEvent() const;

  constexpr void __cordl_internal_set__continueButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__coroutineStarter(::GlobalNamespace::ICoroutineStarter* value);

  constexpr void __cordl_internal_set__dismissCoroutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set__duration(float_t value);

  constexpr void __cordl_internal_set__healthAndSafetyLocalizationKey(::StringW value);

  constexpr void __cordl_internal_set__healthAndSafetyPSLocalizationKey(::StringW value);

  constexpr void __cordl_internal_set__healthAndSafetyTextMesh(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__requiresInteraction(bool value);

  constexpr void __cordl_internal_set__safeAreaRectChecker(::UnityW<::GlobalNamespace::SafeAreaRectChecker> value);

  constexpr void __cordl_internal_set_didFinishEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x23b73a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x23b6f6c, size 0x9c, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action* value);

  /// @brief Method remove_didFinishEvent, addr 0x23b7008, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HealthWarningViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HealthWarningViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HealthWarningViewController(HealthWarningViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HealthWarningViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HealthWarningViewController(HealthWarningViewController const&) = delete;

  /// @brief Field _continueButton, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____continueButton;

  /// @brief Field _safeAreaRectChecker, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SafeAreaRectChecker> ____safeAreaRectChecker;

  /// @brief Field _duration, offset: 0x80, size: 0x4, def value: None
  float_t ____duration;

  /// @brief Field _healthAndSafetyTextMesh, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____healthAndSafetyTextMesh;

  /// @brief Field _healthAndSafetyLocalizationKey, offset: 0x90, size: 0x8, def value: None
  ::StringW ____healthAndSafetyLocalizationKey;

  /// @brief Field _healthAndSafetyPSLocalizationKey, offset: 0x98, size: 0x8, def value: None
  ::StringW ____healthAndSafetyPSLocalizationKey;

  /// @brief Field _coroutineStarter, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::ICoroutineStarter* ____coroutineStarter;

  /// @brief Field didFinishEvent, offset: 0xa8, size: 0x8, def value: None
  ::System::Action* ___didFinishEvent;

  /// @brief Field _requiresInteraction, offset: 0xb0, size: 0x1, def value: None
  bool ____requiresInteraction;

  /// @brief Field _dismissCoroutine, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ____dismissCoroutine;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HealthWarningViewController, 0xc0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningViewController, ____continueButton) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningViewController, ____safeAreaRectChecker) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningViewController, ____duration) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningViewController, ____healthAndSafetyTextMesh) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningViewController, ____healthAndSafetyLocalizationKey) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningViewController, ____healthAndSafetyPSLocalizationKey) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningViewController, ____coroutineStarter) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningViewController, ___didFinishEvent) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningViewController, ____requiresInteraction) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningViewController, ____dismissCoroutine) == 0xb8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HealthWarningViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HealthWarningViewController*, "", "HealthWarningViewController");
NEED_NO_BOX(::GlobalNamespace::__HealthWarningViewController___DismissHealthAndSafety_d__15);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__HealthWarningViewController___DismissHealthAndSafety_d__15*, "", "HealthWarningViewController/<DismissHealthAndSafety>d__15");
