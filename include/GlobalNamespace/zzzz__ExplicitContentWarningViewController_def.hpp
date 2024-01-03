#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExplicitContentWarningViewController)
namespace GlobalNamespace {
class __ExplicitContentWarningViewController___MainCoroutine_d__9;
}
namespace UnityEngine::UI {
class Button;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace System {
class Action;
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
namespace GlobalNamespace {
class ExplicitContentWarningViewController;
}
namespace GlobalNamespace {
class __ExplicitContentWarningViewController___MainCoroutine_d__9;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ExplicitContentWarningViewController);
MARK_REF_PTR_T(::GlobalNamespace::__ExplicitContentWarningViewController___MainCoroutine_d__9);
// Type: ::<MainCoroutine>d__9
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5631))
// CS Name: ::ExplicitContentWarningViewController::<MainCoroutine>d__9*
class CORDL_TYPE __ExplicitContentWarningViewController___MainCoroutine_d__9 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::ExplicitContentWarningViewController* __4__this;

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

  constexpr ::GlobalNamespace::ExplicitContentWarningViewController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ExplicitContentWarningViewController*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::ExplicitContentWarningViewController* value);

  static inline ::GlobalNamespace::__ExplicitContentWarningViewController___MainCoroutine_d__9* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x22b0ae0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x22b0be0, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x22b0be4, size 0xc0, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x22b0ca4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x22b0cac, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x22b0cec, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__ExplicitContentWarningViewController___MainCoroutine_d__9", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ExplicitContentWarningViewController___MainCoroutine_d__9(__ExplicitContentWarningViewController___MainCoroutine_d__9&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ExplicitContentWarningViewController___MainCoroutine_d__9", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ExplicitContentWarningViewController___MainCoroutine_d__9(__ExplicitContentWarningViewController___MainCoroutine_d__9 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ExplicitContentWarningViewController___MainCoroutine_d__9();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::ExplicitContentWarningViewController* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ExplicitContentWarningViewController___MainCoroutine_d__9, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ExplicitContentWarningViewController___MainCoroutine_d__9, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ExplicitContentWarningViewController___MainCoroutine_d__9, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ExplicitContentWarningViewController___MainCoroutine_d__9, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ExplicitContentWarningViewController
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 145, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5632))
// CS Name: ::ExplicitContentWarningViewController*
class CORDL_TYPE ExplicitContentWarningViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using _MainCoroutine_d__9 = ::GlobalNamespace::__ExplicitContentWarningViewController___MainCoroutine_d__9;

  /// @brief Field _showButton, offset 0x70, size 0x8
  __declspec(property(get = __get__showButton, put = __set__showButton))::UnityEngine::UI::Button* _showButton;

  /// @brief Field _hideButton, offset 0x78, size 0x8
  __declspec(property(get = __get__hideButton, put = __set__hideButton))::UnityEngine::UI::Button* _hideButton;

  /// @brief Field _playerDataModel, offset 0x80, size 0x8
  __declspec(property(get = __get__playerDataModel, put = __set__playerDataModel))::GlobalNamespace::PlayerDataModel* _playerDataModel;

  /// @brief Field didFinishEvent, offset 0x88, size 0x8
  __declspec(property(get = __get_didFinishEvent, put = __set_didFinishEvent))::System::Action* didFinishEvent;

  /// @brief Field _coroutineInProgress, offset 0x90, size 0x1
  __declspec(property(get = __get__coroutineInProgress, put = __set__coroutineInProgress)) bool _coroutineInProgress;

  constexpr ::UnityEngine::UI::Button*& __get__showButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__showButton() const;

  constexpr void __set__showButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get__hideButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__hideButton() const;

  constexpr void __set__hideButton(::UnityEngine::UI::Button* value);

  constexpr ::GlobalNamespace::PlayerDataModel*& __get__playerDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& __get__playerDataModel() const;

  constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel* value);

  constexpr ::System::Action*& __get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_didFinishEvent() const;

  constexpr void __set_didFinishEvent(::System::Action* value);

  constexpr bool& __get__coroutineInProgress();

  constexpr bool const& __get__coroutineInProgress() const;

  constexpr void __set__coroutineInProgress(bool value);

  /// @brief Method add_didFinishEvent, addr 0x22b0794, size 0x9c, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action* value);

  /// @brief Method remove_didFinishEvent, addr 0x22b0830, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action* value);

  /// @brief Method DidActivate, addr 0x22b08cc, size 0x150, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x22b0a84, size 0x5c, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method MainCoroutine, addr 0x22b0a1c, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* MainCoroutine();

  static inline ::GlobalNamespace::ExplicitContentWarningViewController* New_ctor();

  /// @brief Method .ctor, addr 0x22b0b08, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <DidActivate>b__7_0, addr 0x22b0b10, size 0x68, virtual false, abstract: false, final false
  inline void _DidActivate_b__7_0();

  /// @brief Method <DidActivate>b__7_1, addr 0x22b0b78, size 0x68, virtual false, abstract: false, final false
  inline void _DidActivate_b__7_1();

  // Ctor Parameters [CppParam { name: "", ty: "ExplicitContentWarningViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExplicitContentWarningViewController(ExplicitContentWarningViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExplicitContentWarningViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExplicitContentWarningViewController(ExplicitContentWarningViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExplicitContentWarningViewController();

public:
  /// @brief Field _showButton, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____showButton;

  /// @brief Field _hideButton, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____hideButton;

  /// @brief Field _playerDataModel, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::PlayerDataModel* ____playerDataModel;

  /// @brief Field didFinishEvent, offset: 0x88, size: 0x8, def value: None
  ::System::Action* ___didFinishEvent;

  /// @brief Field _coroutineInProgress, offset: 0x90, size: 0x1, def value: None
  bool ____coroutineInProgress;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ExplicitContentWarningViewController, 0x98>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ExplicitContentWarningViewController, ____showButton) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExplicitContentWarningViewController, ____hideButton) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExplicitContentWarningViewController, ____playerDataModel) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExplicitContentWarningViewController, ___didFinishEvent) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExplicitContentWarningViewController, ____coroutineInProgress) == 0x90, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ExplicitContentWarningViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ExplicitContentWarningViewController*, "", "ExplicitContentWarningViewController");
NEED_NO_BOX(::GlobalNamespace::__ExplicitContentWarningViewController___MainCoroutine_d__9);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ExplicitContentWarningViewController___MainCoroutine_d__9*, "", "ExplicitContentWarningViewController/<MainCoroutine>d__9");
