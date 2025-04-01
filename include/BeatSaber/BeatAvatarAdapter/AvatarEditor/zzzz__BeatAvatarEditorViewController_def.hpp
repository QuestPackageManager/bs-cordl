#pragma once
// IWYU pragma private; include "BeatSaber/BeatAvatarAdapter/AvatarEditor/BeatAvatarEditorViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarPart_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatAvatarEditorViewController)
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
class AvatarEditHistory;
}
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
struct BeatAvatarEditorViewController__HandleCancelButtonWasPressed_d__57;
}
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
class BeatAvatarEditorViewController___c__DisplayClass60_0;
}
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
template <typename T> class BeatAvatarEditorViewController___c__DisplayClass62_0_1;
}
namespace BeatSaber::BeatAvatarSDK {
class AvatarDataModel;
}
namespace BeatSaber::BeatAvatarSDK {
template <typename T> class AvatarPartCollection_1;
}
namespace BeatSaber::BeatAvatarSDK {
struct AvatarPart;
}
namespace BeatSaber::BeatAvatarSDK {
class AvatarPartsModel;
}
namespace BeatSaber::BeatAvatarSDK {
class SkinColorSO;
}
namespace GlobalNamespace {
class ColorPickerButtonController;
}
namespace GlobalNamespace {
class NamedColorListController_ColorValuePair;
}
namespace GlobalNamespace {
class NamedColorListController;
}
namespace GlobalNamespace {
class NamedIntListController_TextValuePair;
}
namespace GlobalNamespace {
class NamedIntListController;
}
namespace HMUI {
class ButtonBinder;
}
namespace HMUI {
class CurvedTextMeshPro;
}
namespace HMUI {
template <typename T> class ValueChangedBinder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4> class Action_4;
}
namespace System {
class Action;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
class BeatAvatarEditorViewController;
}
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
class BeatAvatarEditorViewController___c__DisplayClass60_0;
}
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
template <typename T> class BeatAvatarEditorViewController___c__DisplayClass62_0_1;
}
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
struct BeatAvatarEditorViewController__HandleCancelButtonWasPressed_d__57;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController);
MARK_REF_PTR_T(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass60_0);
MARK_GEN_REF_PTR_T(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass62_0_1);
MARK_VAL_T(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController__HandleCancelButtonWasPressed_d__57);
// Dependencies BeatSaber.BeatAvatarSDK.AvatarPart, System.Object
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
// Is value type: false
// CS Name: BeatSaber.BeatAvatarAdapter.AvatarEditor.BeatAvatarEditorViewController/<>c__DisplayClass60_0
class CORDL_TYPE BeatAvatarEditorViewController___c__DisplayClass60_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController> __4__this;

  /// @brief Field avatarEditPart, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_avatarEditPart, put = __cordl_internal_set_avatarEditPart)) ::BeatSaber::BeatAvatarSDK::AvatarPart avatarEditPart;

  /// @brief Field colorSetter, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_colorSetter, put = __cordl_internal_set_colorSetter)) ::System::Action_1<::UnityEngine::Color>* colorSetter;

  /// @brief Field currentColorGetter, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_currentColorGetter, put = __cordl_internal_set_currentColorGetter)) ::System::Func_1<::UnityEngine::Color>* currentColorGetter;

  /// @brief Field uvSegment, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_uvSegment, put = __cordl_internal_set_uvSegment)) int32_t uvSegment;

  static inline ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass60_0* New_ctor();

  /// @brief Method <SetupColorButton>b__0, addr 0x2254814, size 0x58, virtual false, abstract: false, final false
  inline void _SetupColorButton_b__0();

  constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController>& __cordl_internal_get___4__this();

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart const& __cordl_internal_get_avatarEditPart() const;

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart& __cordl_internal_get_avatarEditPart();

  constexpr ::System::Action_1<::UnityEngine::Color>* const& __cordl_internal_get_colorSetter() const;

  constexpr ::System::Action_1<::UnityEngine::Color>*& __cordl_internal_get_colorSetter();

  constexpr ::System::Func_1<::UnityEngine::Color>* const& __cordl_internal_get_currentColorGetter() const;

  constexpr ::System::Func_1<::UnityEngine::Color>*& __cordl_internal_get_currentColorGetter();

  constexpr int32_t const& __cordl_internal_get_uvSegment() const;

  constexpr int32_t& __cordl_internal_get_uvSegment();

  constexpr void __cordl_internal_set___4__this(::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController> value);

  constexpr void __cordl_internal_set_avatarEditPart(::BeatSaber::BeatAvatarSDK::AvatarPart value);

  constexpr void __cordl_internal_set_colorSetter(::System::Action_1<::UnityEngine::Color>* value);

  constexpr void __cordl_internal_set_currentColorGetter(::System::Func_1<::UnityEngine::Color>* value);

  constexpr void __cordl_internal_set_uvSegment(int32_t value);

  /// @brief Method .ctor, addr 0x2254530, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatAvatarEditorViewController___c__DisplayClass60_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatAvatarEditorViewController___c__DisplayClass60_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatAvatarEditorViewController___c__DisplayClass60_0(BeatAvatarEditorViewController___c__DisplayClass60_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatAvatarEditorViewController___c__DisplayClass60_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatAvatarEditorViewController___c__DisplayClass60_0(BeatAvatarEditorViewController___c__DisplayClass60_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17719 };

  /// @brief Field currentColorGetter, offset: 0x10, size: 0x8, def value: None
  ::System::Func_1<::UnityEngine::Color>* ___currentColorGetter;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController> _____4__this;

  /// @brief Field colorSetter, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::Color>* ___colorSetter;

  /// @brief Field avatarEditPart, offset: 0x28, size: 0x4, def value: None
  ::BeatSaber::BeatAvatarSDK::AvatarPart ___avatarEditPart;

  /// @brief Field uvSegment, offset: 0x2c, size: 0x4, def value: None
  int32_t ___uvSegment;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass60_0, ___currentColorGetter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass60_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass60_0, ___colorSetter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass60_0, ___avatarEditPart) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass60_0, ___uvSegment) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass60_0, 0x30>, "Size mismatch!");

} // namespace BeatSaber::BeatAvatarAdapter::AvatarEditor
// Dependencies BeatSaber.BeatAvatarSDK.AvatarPart, System.Object
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
// cpp template
template <typename T>
// Is value type: false
// CS Name: BeatSaber.BeatAvatarAdapter.AvatarEditor.BeatAvatarEditorViewController/<>c__DisplayClass62_0`1<T>
class CORDL_TYPE BeatAvatarEditorViewController___c__DisplayClass62_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController> __4__this;

  /// @brief Field avatarEditPart, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_avatarEditPart, put = __cordl_internal_set_avatarEditPart)) ::BeatSaber::BeatAvatarSDK::AvatarPart avatarEditPart;

  /// @brief Field partCollection, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_partCollection, put = __cordl_internal_set_partCollection)) ::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>* partCollection;

  /// @brief Field setIdAction, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_setIdAction, put = __cordl_internal_set_setIdAction)) ::System::Action_1<::StringW>* setIdAction;

  static inline ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass62_0_1<T>* New_ctor();

  /// @brief Method <SetupValuePicker>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _SetupValuePicker_b__0(int32_t idx);

  constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController>& __cordl_internal_get___4__this();

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart const& __cordl_internal_get_avatarEditPart() const;

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart& __cordl_internal_get_avatarEditPart();

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>* const& __cordl_internal_get_partCollection() const;

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>*& __cordl_internal_get_partCollection();

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_setIdAction() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_setIdAction();

  constexpr void __cordl_internal_set___4__this(::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController> value);

  constexpr void __cordl_internal_set_avatarEditPart(::BeatSaber::BeatAvatarSDK::AvatarPart value);

  constexpr void __cordl_internal_set_partCollection(::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>* value);

  constexpr void __cordl_internal_set_setIdAction(::System::Action_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatAvatarEditorViewController___c__DisplayClass62_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatAvatarEditorViewController___c__DisplayClass62_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatAvatarEditorViewController___c__DisplayClass62_0_1(BeatAvatarEditorViewController___c__DisplayClass62_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatAvatarEditorViewController___c__DisplayClass62_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatAvatarEditorViewController___c__DisplayClass62_0_1(BeatAvatarEditorViewController___c__DisplayClass62_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17720 };

  /// @brief Field setIdAction, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___setIdAction;

  /// @brief Field partCollection, offset: 0x18, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>* ___partCollection;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController> _____4__this;

  /// @brief Field avatarEditPart, offset: 0x28, size: 0x4, def value: None
  ::BeatSaber::BeatAvatarSDK::AvatarPart ___avatarEditPart;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BeatSaber::BeatAvatarAdapter::AvatarEditor
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
// Is value type: true
// CS Name: BeatSaber.BeatAvatarAdapter.AvatarEditor.BeatAvatarEditorViewController/<HandleCancelButtonWasPressed>d__57
struct CORDL_TYPE BeatAvatarEditorViewController__HandleCancelButtonWasPressed_d__57 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x225486c, size 0x260, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2254acc, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatAvatarEditorViewController__HandleCancelButtonWasPressed_d__57();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr BeatAvatarEditorViewController__HandleCancelButtonWasPressed_d__57(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                               ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController> __4__this,
                                                                               ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17721 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController> __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController__HandleCancelButtonWasPressed_d__57, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController__HandleCancelButtonWasPressed_d__57, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController__HandleCancelButtonWasPressed_d__57, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController__HandleCancelButtonWasPressed_d__57, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController__HandleCancelButtonWasPressed_d__57, 0x38>, "Size mismatch!");

} // namespace BeatSaber::BeatAvatarAdapter::AvatarEditor
// Dependencies BeatSaber.BeatAvatarSDK.AvatarPart, HMUI.ViewController
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
// Is value type: false
// CS Name: BeatSaber.BeatAvatarAdapter.AvatarEditor.BeatAvatarEditorViewController
class CORDL_TYPE BeatAvatarEditorViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using _HandleCancelButtonWasPressed_d__57 = ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController__HandleCancelButtonWasPressed_d__57;

  using __c__DisplayClass60_0 = ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass60_0;

  template <typename T> using __c__DisplayClass62_0_1 = ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass62_0_1<T>;

  /// @brief Field _applyButton, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__applyButton, put = __cordl_internal_set__applyButton)) ::UnityW<::UnityEngine::UI::Button> _applyButton;

  /// @brief Field _applyButtonText, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__applyButtonText, put = __cordl_internal_set__applyButtonText)) ::UnityW<::HMUI::CurvedTextMeshPro> _applyButtonText;

  /// @brief Field _avatarDataModel, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarDataModel, put = __cordl_internal_set__avatarDataModel)) ::BeatSaber::BeatAvatarSDK::AvatarDataModel* _avatarDataModel;

  /// @brief Field _avatarEditHistory, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarEditHistory,
                      put = __cordl_internal_set__avatarEditHistory)) ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory* _avatarEditHistory;

  /// @brief Field _avatarPartsModel, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarPartsModel, put = __cordl_internal_set__avatarPartsModel)) ::BeatSaber::BeatAvatarSDK::AvatarPartsModel* _avatarPartsModel;

  /// @brief Field _buttonBinder, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonBinder, put = __cordl_internal_set__buttonBinder)) ::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Field _cancelButton, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__cancelButton, put = __cordl_internal_set__cancelButton)) ::UnityW<::UnityEngine::UI::Button> _cancelButton;

  /// @brief Field _clothesColorButtonControllerDetail, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__clothesColorButtonControllerDetail,
                      put = __cordl_internal_set__clothesColorButtonControllerDetail)) ::UnityW<::GlobalNamespace::ColorPickerButtonController>
      _clothesColorButtonControllerDetail;

  /// @brief Field _clothesColorButtonControllerPrimary, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__clothesColorButtonControllerPrimary,
                      put = __cordl_internal_set__clothesColorButtonControllerPrimary)) ::UnityW<::GlobalNamespace::ColorPickerButtonController>
      _clothesColorButtonControllerPrimary;

  /// @brief Field _clothesColorButtonControllerSecondary, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__clothesColorButtonControllerSecondary,
                      put = __cordl_internal_set__clothesColorButtonControllerSecondary)) ::UnityW<::GlobalNamespace::ColorPickerButtonController>
      _clothesColorButtonControllerSecondary;

  /// @brief Field _clothesValuePicker, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__clothesValuePicker, put = __cordl_internal_set__clothesValuePicker)) ::UnityW<::GlobalNamespace::NamedIntListController> _clothesValuePicker;

  /// @brief Field _eyesPreviewImage, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__eyesPreviewImage, put = __cordl_internal_set__eyesPreviewImage)) ::UnityW<::UnityEngine::UI::Image> _eyesPreviewImage;

  /// @brief Field _eyesValuePicker, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__eyesValuePicker, put = __cordl_internal_set__eyesValuePicker)) ::UnityW<::GlobalNamespace::NamedIntListController> _eyesValuePicker;

  /// @brief Field _handsColorButtonController, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__handsColorButtonController, put = __cordl_internal_set__handsColorButtonController)) ::UnityW<::GlobalNamespace::ColorPickerButtonController>
      _handsColorButtonController;

  /// @brief Field _handsValuePicker, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__handsValuePicker, put = __cordl_internal_set__handsValuePicker)) ::UnityW<::GlobalNamespace::NamedIntListController> _handsValuePicker;

  /// @brief Field _headTopPrimaryColorButtonController, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__headTopPrimaryColorButtonController,
                      put = __cordl_internal_set__headTopPrimaryColorButtonController)) ::UnityW<::GlobalNamespace::ColorPickerButtonController>
      _headTopPrimaryColorButtonController;

  /// @brief Field _headTopSecondaryColorButtonController, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__headTopSecondaryColorButtonController,
                      put = __cordl_internal_set__headTopSecondaryColorButtonController)) ::UnityW<::GlobalNamespace::ColorPickerButtonController>
      _headTopSecondaryColorButtonController;

  /// @brief Field _headTopValuePicker, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__headTopValuePicker, put = __cordl_internal_set__headTopValuePicker)) ::UnityW<::GlobalNamespace::NamedIntListController> _headTopValuePicker;

  /// @brief Field _intPickerBinder, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get__intPickerBinder, put = __cordl_internal_set__intPickerBinder)) ::HMUI::ValueChangedBinder_1<int32_t>* _intPickerBinder;

  /// @brief Field _lastEditedPart, offset 0x158, size 0x4
  __declspec(property(get = __cordl_internal_get__lastEditedPart, put = __cordl_internal_set__lastEditedPart)) ::BeatSaber::BeatAvatarSDK::AvatarPart _lastEditedPart;

  /// @brief Field _randomizeAllButton, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__randomizeAllButton, put = __cordl_internal_set__randomizeAllButton)) ::UnityW<::UnityEngine::UI::Button> _randomizeAllButton;

  /// @brief Field _redoButton, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__redoButton, put = __cordl_internal_set__redoButton)) ::UnityW<::UnityEngine::UI::Button> _redoButton;

  /// @brief Field _skinColorValuePicker, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__skinColorValuePicker, put = __cordl_internal_set__skinColorValuePicker)) ::UnityW<::GlobalNamespace::NamedColorListController> _skinColorValuePicker;

  /// @brief Field _undoButton, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__undoButton, put = __cordl_internal_set__undoButton)) ::UnityW<::UnityEngine::UI::Button> _undoButton;

  /// @brief Field cancelButtonWasPressedEvent, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get_cancelButtonWasPressedEvent, put = __cordl_internal_set_cancelButtonWasPressedEvent)) ::System::Action* cancelButtonWasPressedEvent;

  /// @brief Field didChangedAvatarPartEvent, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_didChangedAvatarPartEvent,
                      put = __cordl_internal_set_didChangedAvatarPartEvent)) ::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarPart>* didChangedAvatarPartEvent;

  /// @brief Field didRequestColorChangeEvent, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_didRequestColorChangeEvent,
                      put = __cordl_internal_set_didRequestColorChangeEvent)) ::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color,
                                                                                                 ::BeatSaber::BeatAvatarSDK::AvatarPart, int32_t>* didRequestColorChangeEvent;

  /// @brief Field okButtonWasPressedEvent, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get_okButtonWasPressedEvent, put = __cordl_internal_set_okButtonWasPressedEvent)) ::System::Action* okButtonWasPressedEvent;

  /// @brief Field randomizeAllButtonWasPressedEvent, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_randomizeAllButtonWasPressedEvent, put = __cordl_internal_set_randomizeAllButtonWasPressedEvent)) ::System::Action* randomizeAllButtonWasPressedEvent;

  /// @brief Method CreateColorValuePairsForAvatarPartCollection, addr 0x2253e20, size 0x118, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::NamedColorListController_ColorValuePair*, ::Array<::GlobalNamespace::NamedColorListController_ColorValuePair*>*>
  CreateColorValuePairsForAvatarPartCollection(::ArrayW<::BeatSaber::BeatAvatarSDK::SkinColorSO*, ::Array<::BeatSaber::BeatAvatarSDK::SkinColorSO*>*> colors);

  /// @brief Method CreateTextValuePairsForAvatarPartCollection, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::ArrayW<::GlobalNamespace::NamedIntListController_TextValuePair*, ::Array<::GlobalNamespace::NamedIntListController_TextValuePair*>*>
  CreateTextValuePairsForAvatarPartCollection(::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>* partCollection);

  /// @brief Method DidActivate, addr 0x22534fc, size 0x3c, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method EyesValuePickerHasChanged, addr 0x2254160, size 0x98, virtual false, abstract: false, final false
  inline void EyesValuePickerHasChanged(::StringW eyesId);

  /// @brief Method HandleApplyButtonWasPressed, addr 0x22543e0, size 0xc0, virtual false, abstract: false, final false
  inline void HandleApplyButtonWasPressed();

  /// @brief Method HandleCancelButtonWasPressed, addr 0x22544a0, size 0x90, virtual false, abstract: false, final false
  inline void HandleCancelButtonWasPressed();

  /// @brief Method HandleRandomizeAllButtonWasPressed, addr 0x2253f7c, size 0x9c, virtual false, abstract: false, final false
  inline void HandleRandomizeAllButtonWasPressed();

  /// @brief Method HandleRandomizeColorsButtonWasPressed, addr 0x2254370, size 0x70, virtual false, abstract: false, final false
  inline void HandleRandomizeColorsButtonWasPressed();

  /// @brief Method HandleRandomizeModelsButtonWasPressed, addr 0x22542f8, size 0x78, virtual false, abstract: false, final false
  inline void HandleRandomizeModelsButtonWasPressed();

  /// @brief Method HandleRedoButtonWasPressed, addr 0x22541f8, size 0xa8, virtual false, abstract: false, final false
  inline void HandleRedoButtonWasPressed();

  /// @brief Method HandleSkinColorDidChanged, addr 0x22540cc, size 0x94, virtual false, abstract: false, final false
  inline void HandleSkinColorDidChanged(int32_t value);

  /// @brief Method HandleUndoButtonWasPressed, addr 0x2254018, size 0xb4, virtual false, abstract: false, final false
  inline void HandleUndoButtonWasPressed();

  /// @brief Method InitHistory, addr 0x224ee64, size 0x40, virtual false, abstract: false, final false
  inline void InitHistory();

  static inline ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController* New_ctor();

  /// @brief Method OneTimeInitialize, addr 0x2253538, size 0x7f8, virtual false, abstract: false, final false
  inline void OneTimeInitialize();

  /// @brief Method RefreshUi, addr 0x224f004, size 0x32c, virtual false, abstract: false, final false
  inline void RefreshUi();

  /// @brief Method ReportAllChangedAndUpdate, addr 0x22542a0, size 0x58, virtual false, abstract: false, final false
  inline void ReportAllChangedAndUpdate();

  /// @brief Method SaveColorChange, addr 0x224fe10, size 0x28, virtual false, abstract: false, final false
  inline void SaveColorChange(::BeatSaber::BeatAvatarSDK::AvatarPart avatarEditPart);

  /// @brief Method Setup, addr 0x224e5c8, size 0x90, virtual false, abstract: false, final false
  inline void Setup(bool showAsCreateView);

  /// @brief Method SetupColorButton, addr 0x2253d30, size 0xf0, virtual false, abstract: false, final false
  inline void SetupColorButton(::UnityEngine::UI::Button* button, ::System::Action_1<::UnityEngine::Color>* colorSetter, ::System::Func_1<::UnityEngine::Color>* currentColorGetter,
                               ::BeatSaber::BeatAvatarSDK::AvatarPart avatarEditPart, int32_t uvSegment);

  /// @brief Method SetupValuePicker, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void SetupValuePicker(::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>* partCollection, ::GlobalNamespace::NamedIntListController* valuePicker,
                               ::System::Action_1<::StringW>* setIdAction, ::BeatSaber::BeatAvatarSDK::AvatarPart avatarEditPart);

  /// @brief Method Update, addr 0x2253f38, size 0x44, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateButtons, addr 0x22534a4, size 0x58, virtual false, abstract: false, final false
  inline void UpdateButtons();

  /// @brief Method <OneTimeInitialize>b__45_0, addr 0x22545c8, size 0x28, virtual false, abstract: false, final false
  inline void _OneTimeInitialize_b__45_0(::UnityEngine::Color color);

  /// @brief Method <OneTimeInitialize>b__45_1, addr 0x22545f0, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Color _OneTimeInitialize_b__45_1();

  /// @brief Method <OneTimeInitialize>b__45_10, addr 0x2254758, size 0x28, virtual false, abstract: false, final false
  inline void _OneTimeInitialize_b__45_10(::UnityEngine::Color color);

  /// @brief Method <OneTimeInitialize>b__45_11, addr 0x2254780, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Color _OneTimeInitialize_b__45_11();

  /// @brief Method <OneTimeInitialize>b__45_12, addr 0x22547a8, size 0x24, virtual false, abstract: false, final false
  inline void _OneTimeInitialize_b__45_12(::StringW s);

  /// @brief Method <OneTimeInitialize>b__45_13, addr 0x22547cc, size 0x24, virtual false, abstract: false, final false
  inline void _OneTimeInitialize_b__45_13(::StringW s);

  /// @brief Method <OneTimeInitialize>b__45_14, addr 0x22547f0, size 0x24, virtual false, abstract: false, final false
  inline void _OneTimeInitialize_b__45_14(::StringW s);

  /// @brief Method <OneTimeInitialize>b__45_2, addr 0x2254618, size 0x28, virtual false, abstract: false, final false
  inline void _OneTimeInitialize_b__45_2(::UnityEngine::Color color);

  /// @brief Method <OneTimeInitialize>b__45_3, addr 0x2254640, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Color _OneTimeInitialize_b__45_3();

  /// @brief Method <OneTimeInitialize>b__45_4, addr 0x2254668, size 0x28, virtual false, abstract: false, final false
  inline void _OneTimeInitialize_b__45_4(::UnityEngine::Color color);

  /// @brief Method <OneTimeInitialize>b__45_5, addr 0x2254690, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Color _OneTimeInitialize_b__45_5();

  /// @brief Method <OneTimeInitialize>b__45_6, addr 0x22546b8, size 0x28, virtual false, abstract: false, final false
  inline void _OneTimeInitialize_b__45_6(::UnityEngine::Color color);

  /// @brief Method <OneTimeInitialize>b__45_7, addr 0x22546e0, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Color _OneTimeInitialize_b__45_7();

  /// @brief Method <OneTimeInitialize>b__45_8, addr 0x2254708, size 0x28, virtual false, abstract: false, final false
  inline void _OneTimeInitialize_b__45_8(::UnityEngine::Color color);

  /// @brief Method <OneTimeInitialize>b__45_9, addr 0x2254730, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Color _OneTimeInitialize_b__45_9();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__applyButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__applyButton();

  constexpr ::UnityW<::HMUI::CurvedTextMeshPro> const& __cordl_internal_get__applyButtonText() const;

  constexpr ::UnityW<::HMUI::CurvedTextMeshPro>& __cordl_internal_get__applyButtonText();

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarDataModel* const& __cordl_internal_get__avatarDataModel() const;

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarDataModel*& __cordl_internal_get__avatarDataModel();

  constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory* const& __cordl_internal_get__avatarEditHistory() const;

  constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory*& __cordl_internal_get__avatarEditHistory();

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarPartsModel* const& __cordl_internal_get__avatarPartsModel() const;

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarPartsModel*& __cordl_internal_get__avatarPartsModel();

  constexpr ::HMUI::ButtonBinder* const& __cordl_internal_get__buttonBinder() const;

  constexpr ::HMUI::ButtonBinder*& __cordl_internal_get__buttonBinder();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__cancelButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__cancelButton();

  constexpr ::UnityW<::GlobalNamespace::ColorPickerButtonController> const& __cordl_internal_get__clothesColorButtonControllerDetail() const;

  constexpr ::UnityW<::GlobalNamespace::ColorPickerButtonController>& __cordl_internal_get__clothesColorButtonControllerDetail();

  constexpr ::UnityW<::GlobalNamespace::ColorPickerButtonController> const& __cordl_internal_get__clothesColorButtonControllerPrimary() const;

  constexpr ::UnityW<::GlobalNamespace::ColorPickerButtonController>& __cordl_internal_get__clothesColorButtonControllerPrimary();

  constexpr ::UnityW<::GlobalNamespace::ColorPickerButtonController> const& __cordl_internal_get__clothesColorButtonControllerSecondary() const;

  constexpr ::UnityW<::GlobalNamespace::ColorPickerButtonController>& __cordl_internal_get__clothesColorButtonControllerSecondary();

  constexpr ::UnityW<::GlobalNamespace::NamedIntListController> const& __cordl_internal_get__clothesValuePicker() const;

  constexpr ::UnityW<::GlobalNamespace::NamedIntListController>& __cordl_internal_get__clothesValuePicker();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__eyesPreviewImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__eyesPreviewImage();

  constexpr ::UnityW<::GlobalNamespace::NamedIntListController> const& __cordl_internal_get__eyesValuePicker() const;

  constexpr ::UnityW<::GlobalNamespace::NamedIntListController>& __cordl_internal_get__eyesValuePicker();

  constexpr ::UnityW<::GlobalNamespace::ColorPickerButtonController> const& __cordl_internal_get__handsColorButtonController() const;

  constexpr ::UnityW<::GlobalNamespace::ColorPickerButtonController>& __cordl_internal_get__handsColorButtonController();

  constexpr ::UnityW<::GlobalNamespace::NamedIntListController> const& __cordl_internal_get__handsValuePicker() const;

  constexpr ::UnityW<::GlobalNamespace::NamedIntListController>& __cordl_internal_get__handsValuePicker();

  constexpr ::UnityW<::GlobalNamespace::ColorPickerButtonController> const& __cordl_internal_get__headTopPrimaryColorButtonController() const;

  constexpr ::UnityW<::GlobalNamespace::ColorPickerButtonController>& __cordl_internal_get__headTopPrimaryColorButtonController();

  constexpr ::UnityW<::GlobalNamespace::ColorPickerButtonController> const& __cordl_internal_get__headTopSecondaryColorButtonController() const;

  constexpr ::UnityW<::GlobalNamespace::ColorPickerButtonController>& __cordl_internal_get__headTopSecondaryColorButtonController();

  constexpr ::UnityW<::GlobalNamespace::NamedIntListController> const& __cordl_internal_get__headTopValuePicker() const;

  constexpr ::UnityW<::GlobalNamespace::NamedIntListController>& __cordl_internal_get__headTopValuePicker();

  constexpr ::HMUI::ValueChangedBinder_1<int32_t>* const& __cordl_internal_get__intPickerBinder() const;

  constexpr ::HMUI::ValueChangedBinder_1<int32_t>*& __cordl_internal_get__intPickerBinder();

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart const& __cordl_internal_get__lastEditedPart() const;

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart& __cordl_internal_get__lastEditedPart();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__randomizeAllButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__randomizeAllButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__redoButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__redoButton();

  constexpr ::UnityW<::GlobalNamespace::NamedColorListController> const& __cordl_internal_get__skinColorValuePicker() const;

  constexpr ::UnityW<::GlobalNamespace::NamedColorListController>& __cordl_internal_get__skinColorValuePicker();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__undoButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__undoButton();

  constexpr ::System::Action* const& __cordl_internal_get_cancelButtonWasPressedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_cancelButtonWasPressedEvent();

  constexpr ::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarPart>* const& __cordl_internal_get_didChangedAvatarPartEvent() const;

  constexpr ::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarPart>*& __cordl_internal_get_didChangedAvatarPartEvent();

  constexpr ::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::BeatSaber::BeatAvatarSDK::AvatarPart, int32_t>* const&
  __cordl_internal_get_didRequestColorChangeEvent() const;

  constexpr ::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::BeatSaber::BeatAvatarSDK::AvatarPart, int32_t>*& __cordl_internal_get_didRequestColorChangeEvent();

  constexpr ::System::Action* const& __cordl_internal_get_okButtonWasPressedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_okButtonWasPressedEvent();

  constexpr ::System::Action* const& __cordl_internal_get_randomizeAllButtonWasPressedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_randomizeAllButtonWasPressedEvent();

  constexpr void __cordl_internal_set__applyButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__applyButtonText(::UnityW<::HMUI::CurvedTextMeshPro> value);

  constexpr void __cordl_internal_set__avatarDataModel(::BeatSaber::BeatAvatarSDK::AvatarDataModel* value);

  constexpr void __cordl_internal_set__avatarEditHistory(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory* value);

  constexpr void __cordl_internal_set__avatarPartsModel(::BeatSaber::BeatAvatarSDK::AvatarPartsModel* value);

  constexpr void __cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value);

  constexpr void __cordl_internal_set__cancelButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__clothesColorButtonControllerDetail(::UnityW<::GlobalNamespace::ColorPickerButtonController> value);

  constexpr void __cordl_internal_set__clothesColorButtonControllerPrimary(::UnityW<::GlobalNamespace::ColorPickerButtonController> value);

  constexpr void __cordl_internal_set__clothesColorButtonControllerSecondary(::UnityW<::GlobalNamespace::ColorPickerButtonController> value);

  constexpr void __cordl_internal_set__clothesValuePicker(::UnityW<::GlobalNamespace::NamedIntListController> value);

  constexpr void __cordl_internal_set__eyesPreviewImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__eyesValuePicker(::UnityW<::GlobalNamespace::NamedIntListController> value);

  constexpr void __cordl_internal_set__handsColorButtonController(::UnityW<::GlobalNamespace::ColorPickerButtonController> value);

  constexpr void __cordl_internal_set__handsValuePicker(::UnityW<::GlobalNamespace::NamedIntListController> value);

  constexpr void __cordl_internal_set__headTopPrimaryColorButtonController(::UnityW<::GlobalNamespace::ColorPickerButtonController> value);

  constexpr void __cordl_internal_set__headTopSecondaryColorButtonController(::UnityW<::GlobalNamespace::ColorPickerButtonController> value);

  constexpr void __cordl_internal_set__headTopValuePicker(::UnityW<::GlobalNamespace::NamedIntListController> value);

  constexpr void __cordl_internal_set__intPickerBinder(::HMUI::ValueChangedBinder_1<int32_t>* value);

  constexpr void __cordl_internal_set__lastEditedPart(::BeatSaber::BeatAvatarSDK::AvatarPart value);

  constexpr void __cordl_internal_set__randomizeAllButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__redoButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__skinColorValuePicker(::UnityW<::GlobalNamespace::NamedColorListController> value);

  constexpr void __cordl_internal_set__undoButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set_cancelButtonWasPressedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_didChangedAvatarPartEvent(::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarPart>* value);

  constexpr void
  __cordl_internal_set_didRequestColorChangeEvent(::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::BeatSaber::BeatAvatarSDK::AvatarPart, int32_t>* value);

  constexpr void __cordl_internal_set_okButtonWasPressedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_randomizeAllButtonWasPressedEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x2254538, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_cancelButtonWasPressedEvent, addr 0x224ec84, size 0xa0, virtual false, abstract: false, final false
  inline void add_cancelButtonWasPressedEvent(::System::Action* value);

  /// @brief Method add_didChangedAvatarPartEvent, addr 0x224ebd0, size 0xb4, virtual false, abstract: false, final false
  inline void add_didChangedAvatarPartEvent(::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarPart>* value);

  /// @brief Method add_didRequestColorChangeEvent, addr 0x224eb1c, size 0xb4, virtual false, abstract: false, final false
  inline void add_didRequestColorChangeEvent(::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::BeatSaber::BeatAvatarSDK::AvatarPart, int32_t>* value);

  /// @brief Method add_okButtonWasPressedEvent, addr 0x224ed24, size 0xa0, virtual false, abstract: false, final false
  inline void add_okButtonWasPressedEvent(::System::Action* value);

  /// @brief Method add_randomizeAllButtonWasPressedEvent, addr 0x224edc4, size 0xa0, virtual false, abstract: false, final false
  inline void add_randomizeAllButtonWasPressedEvent(::System::Action* value);

  /// @brief Method remove_cancelButtonWasPressedEvent, addr 0x224f760, size 0xa0, virtual false, abstract: false, final false
  inline void remove_cancelButtonWasPressedEvent(::System::Action* value);

  /// @brief Method remove_didChangedAvatarPartEvent, addr 0x224f6ac, size 0xb4, virtual false, abstract: false, final false
  inline void remove_didChangedAvatarPartEvent(::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarPart>* value);

  /// @brief Method remove_didRequestColorChangeEvent, addr 0x224f5f8, size 0xb4, virtual false, abstract: false, final false
  inline void remove_didRequestColorChangeEvent(::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::BeatSaber::BeatAvatarSDK::AvatarPart, int32_t>* value);

  /// @brief Method remove_okButtonWasPressedEvent, addr 0x224f800, size 0xa0, virtual false, abstract: false, final false
  inline void remove_okButtonWasPressedEvent(::System::Action* value);

  /// @brief Method remove_randomizeAllButtonWasPressedEvent, addr 0x224f8a0, size 0xa0, virtual false, abstract: false, final false
  inline void remove_randomizeAllButtonWasPressedEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatAvatarEditorViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatAvatarEditorViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatAvatarEditorViewController(BeatAvatarEditorViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatAvatarEditorViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatAvatarEditorViewController(BeatAvatarEditorViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17722 };

  /// @brief Field kCreateApplyButtonLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kCreateApplyButtonLocalizationKey{ u"BUTTON_CREATE_AVATAR" };

  /// @brief Field kEditApplyButtonLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kEditApplyButtonLocalizationKey{ u"BUTTON_APPLY" };

  /// @brief Field _skinColorValuePicker, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NamedColorListController> ____skinColorValuePicker;

  /// @brief Field _headTopValuePicker, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NamedIntListController> ____headTopValuePicker;

  /// @brief Field _eyesValuePicker, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NamedIntListController> ____eyesValuePicker;

  /// @brief Field _handsValuePicker, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NamedIntListController> ____handsValuePicker;

  /// @brief Field _clothesValuePicker, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NamedIntListController> ____clothesValuePicker;

  /// @brief Field _headTopPrimaryColorButtonController, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorPickerButtonController> ____headTopPrimaryColorButtonController;

  /// @brief Field _headTopSecondaryColorButtonController, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorPickerButtonController> ____headTopSecondaryColorButtonController;

  /// @brief Field _handsColorButtonController, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorPickerButtonController> ____handsColorButtonController;

  /// @brief Field _clothesColorButtonControllerPrimary, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorPickerButtonController> ____clothesColorButtonControllerPrimary;

  /// @brief Field _clothesColorButtonControllerSecondary, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorPickerButtonController> ____clothesColorButtonControllerSecondary;

  /// @brief Field _clothesColorButtonControllerDetail, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorPickerButtonController> ____clothesColorButtonControllerDetail;

  /// @brief Field _randomizeAllButton, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____randomizeAllButton;

  /// @brief Field _undoButton, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____undoButton;

  /// @brief Field _redoButton, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____redoButton;

  /// @brief Field _applyButton, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____applyButton;

  /// @brief Field _cancelButton, offset: 0xf0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____cancelButton;

  /// @brief Field _applyButtonText, offset: 0xf8, size: 0x8, def value: None
  ::UnityW<::HMUI::CurvedTextMeshPro> ____applyButtonText;

  /// @brief Field _eyesPreviewImage, offset: 0x100, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____eyesPreviewImage;

  /// @brief Field _avatarPartsModel, offset: 0x108, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarSDK::AvatarPartsModel* ____avatarPartsModel;

  /// @brief Field _avatarDataModel, offset: 0x110, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarSDK::AvatarDataModel* ____avatarDataModel;

  /// @brief Field didRequestColorChangeEvent, offset: 0x118, size: 0x8, def value: None
  ::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::BeatSaber::BeatAvatarSDK::AvatarPart, int32_t>* ___didRequestColorChangeEvent;

  /// @brief Field randomizeAllButtonWasPressedEvent, offset: 0x120, size: 0x8, def value: None
  ::System::Action* ___randomizeAllButtonWasPressedEvent;

  /// @brief Field didChangedAvatarPartEvent, offset: 0x128, size: 0x8, def value: None
  ::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarPart>* ___didChangedAvatarPartEvent;

  /// @brief Field cancelButtonWasPressedEvent, offset: 0x130, size: 0x8, def value: None
  ::System::Action* ___cancelButtonWasPressedEvent;

  /// @brief Field okButtonWasPressedEvent, offset: 0x138, size: 0x8, def value: None
  ::System::Action* ___okButtonWasPressedEvent;

  /// @brief Field _avatarEditHistory, offset: 0x140, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory* ____avatarEditHistory;

  /// @brief Field _buttonBinder, offset: 0x148, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  /// @brief Field _intPickerBinder, offset: 0x150, size: 0x8, def value: None
  ::HMUI::ValueChangedBinder_1<int32_t>* ____intPickerBinder;

  /// @brief Field _lastEditedPart, offset: 0x158, size: 0x4, def value: None
  ::BeatSaber::BeatAvatarSDK::AvatarPart ____lastEditedPart;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____skinColorValuePicker) == 0x78, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____headTopValuePicker) == 0x80, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____eyesValuePicker) == 0x88, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____handsValuePicker) == 0x90, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____clothesValuePicker) == 0x98, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____headTopPrimaryColorButtonController) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____headTopSecondaryColorButtonController) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____handsColorButtonController) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____clothesColorButtonControllerPrimary) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____clothesColorButtonControllerSecondary) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____clothesColorButtonControllerDetail) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____randomizeAllButton) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____undoButton) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____redoButton) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____applyButton) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____cancelButton) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____applyButtonText) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____eyesPreviewImage) == 0x100, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____avatarPartsModel) == 0x108, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____avatarDataModel) == 0x110, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ___didRequestColorChangeEvent) == 0x118, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ___randomizeAllButtonWasPressedEvent) == 0x120, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ___didChangedAvatarPartEvent) == 0x128, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ___cancelButtonWasPressedEvent) == 0x130, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ___okButtonWasPressedEvent) == 0x138, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____avatarEditHistory) == 0x140, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____buttonBinder) == 0x148, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____intPickerBinder) == 0x150, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____lastEditedPart) == 0x158, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, 0x160>, "Size mismatch!");

} // namespace BeatSaber::BeatAvatarAdapter::AvatarEditor
NEED_NO_BOX(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*, "BeatSaber.BeatAvatarAdapter.AvatarEditor", "BeatAvatarEditorViewController");
NEED_NO_BOX(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass60_0);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass60_0*, "BeatSaber.BeatAvatarAdapter.AvatarEditor",
                       "BeatAvatarEditorViewController/<>c__DisplayClass60_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass62_0_1, "BeatSaber.BeatAvatarAdapter.AvatarEditor",
                                     "BeatAvatarEditorViewController/<>c__DisplayClass62_0`1");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController__HandleCancelButtonWasPressed_d__57, "BeatSaber.BeatAvatarAdapter.AvatarEditor",
                       "BeatAvatarEditorViewController/<HandleCancelButtonWasPressed>d__57");
