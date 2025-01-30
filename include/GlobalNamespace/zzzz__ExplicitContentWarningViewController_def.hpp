#pragma once
// IWYU pragma private; include "GlobalNamespace/ExplicitContentWarningViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ExplicitContentWarningViewController)
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
struct ExplicitContentWarningViewController__HandleClickedEvent_d__9;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
class Action;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class Toggle;
}
// Forward declare root types
namespace GlobalNamespace {
class ExplicitContentWarningViewController;
}
namespace GlobalNamespace {
struct ExplicitContentWarningViewController__HandleClickedEvent_d__9;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ExplicitContentWarningViewController);
MARK_VAL_T(::GlobalNamespace::ExplicitContentWarningViewController__HandleClickedEvent_d__9);
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: ExplicitContentWarningViewController/<HandleClickedEvent>d__9
struct CORDL_TYPE ExplicitContentWarningViewController__HandleClickedEvent_d__9 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3c19b8c, size 0x220, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3c19dac, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ExplicitContentWarningViewController__HandleClickedEvent_d__9();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<::GlobalNamespace::ExplicitContentWarningViewController>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
  // modifiers: "", def_value: None }]
  constexpr ExplicitContentWarningViewController__HandleClickedEvent_d__9(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                          ::UnityW<::GlobalNamespace::ExplicitContentWarningViewController> __4__this,
                                                                          ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4892 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ExplicitContentWarningViewController> __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ExplicitContentWarningViewController__HandleClickedEvent_d__9, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExplicitContentWarningViewController__HandleClickedEvent_d__9, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExplicitContentWarningViewController__HandleClickedEvent_d__9, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExplicitContentWarningViewController__HandleClickedEvent_d__9, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ExplicitContentWarningViewController__HandleClickedEvent_d__9, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies HMUI.ViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: ExplicitContentWarningViewController
class CORDL_TYPE ExplicitContentWarningViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using _HandleClickedEvent_d__9 = ::GlobalNamespace::ExplicitContentWarningViewController__HandleClickedEvent_d__9;

  /// @brief Field _beatmapLevelsModel, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel)) ::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _continueButton, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__continueButton, put = __cordl_internal_set__continueButton)) ::UnityW<::UnityEngine::UI::Button> _continueButton;

  /// @brief Field _playerDataModel, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel)) ::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _toggleExplicit, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__toggleExplicit, put = __cordl_internal_set__toggleExplicit)) ::UnityW<::UnityEngine::UI::Toggle> _toggleExplicit;

  /// @brief Field didFinishEvent, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent, put = __cordl_internal_set_didFinishEvent)) ::System::Action* didFinishEvent;

  /// @brief Method DidActivate, addr 0x3c19a20, size 0xa4, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x3c19ac4, size 0x30, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleClickedEvent, addr 0x3c19af4, size 0x90, virtual false, abstract: false, final false
  inline void HandleClickedEvent();

  static inline ::GlobalNamespace::ExplicitContentWarningViewController* New_ctor();

  constexpr ::GlobalNamespace::BeatmapLevelsModel* const& __cordl_internal_get__beatmapLevelsModel() const;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__continueButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__continueButton();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__toggleExplicit() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__toggleExplicit();

  constexpr ::System::Action* const& __cordl_internal_get_didFinishEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didFinishEvent();

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__continueButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__toggleExplicit(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set_didFinishEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x3c19b84, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x3c198e8, size 0x9c, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action* value);

  /// @brief Method remove_didFinishEvent, addr 0x3c19984, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExplicitContentWarningViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExplicitContentWarningViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExplicitContentWarningViewController(ExplicitContentWarningViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExplicitContentWarningViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExplicitContentWarningViewController(ExplicitContentWarningViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4893 };

  /// @brief Field _toggleExplicit, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____toggleExplicit;

  /// @brief Field _continueButton, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____continueButton;

  /// @brief Field _playerDataModel, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _beatmapLevelsModel, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field didFinishEvent, offset: 0x98, size: 0x8, def value: None
  ::System::Action* ___didFinishEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ExplicitContentWarningViewController, ____toggleExplicit) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExplicitContentWarningViewController, ____continueButton) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExplicitContentWarningViewController, ____playerDataModel) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExplicitContentWarningViewController, ____beatmapLevelsModel) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExplicitContentWarningViewController, ___didFinishEvent) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ExplicitContentWarningViewController, 0xa0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ExplicitContentWarningViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ExplicitContentWarningViewController*, "", "ExplicitContentWarningViewController");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ExplicitContentWarningViewController__HandleClickedEvent_d__9, "", "ExplicitContentWarningViewController/<HandleClickedEvent>d__9");
