#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarPart_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatAvatarEditorViewController)
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
class AvatarEditHistory;
}
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
class __BeatAvatarEditorViewController____c__DisplayClass62_0;
}
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
template <typename T> class __BeatAvatarEditorViewController____c__DisplayClass63_0_1;
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
class NamedColorListController;
}
namespace GlobalNamespace {
class NamedIntListController;
}
namespace GlobalNamespace {
class __NamedColorListController__ColorValuePair;
}
namespace GlobalNamespace {
class __NamedIntListController__TextValuePair;
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
class __BeatAvatarEditorViewController____c__DisplayClass62_0;
}
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
template <typename T> class __BeatAvatarEditorViewController____c__DisplayClass63_0_1;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController);
MARK_REF_PTR_T(::BeatSaber::BeatAvatarAdapter::AvatarEditor::__BeatAvatarEditorViewController____c__DisplayClass62_0);
MARK_GEN_REF_PTR_T(::BeatSaber::BeatAvatarAdapter::AvatarEditor::__BeatAvatarEditorViewController____c__DisplayClass63_0_1);
// Type: ::<>c__DisplayClass62_0
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15683))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15266))
// CS Name: ::BeatAvatarEditorViewController::<>c__DisplayClass62_0*
class CORDL_TYPE __BeatAvatarEditorViewController____c__DisplayClass62_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController* __4__this;

  /// @brief Field colorSetter, offset 0x18, size 0x8
  __declspec(property(get = __get_colorSetter, put = __set_colorSetter))::System::Action_1<::UnityEngine::Color>* colorSetter;

  /// @brief Field avatarEditPart, offset 0x20, size 0x4
  __declspec(property(get = __get_avatarEditPart, put = __set_avatarEditPart))::BeatSaber::BeatAvatarSDK::AvatarPart avatarEditPart;

  /// @brief Field currentColor, offset 0x28, size 0x8
  __declspec(property(get = __get_currentColor, put = __set_currentColor))::System::Func_1<::UnityEngine::Color>* currentColor;

  /// @brief Field uvSegment, offset 0x30, size 0x4
  __declspec(property(get = __get_uvSegment, put = __set_uvSegment)) int32_t uvSegment;

  /// @brief Field <>9__1, offset 0x38, size 0x8
  __declspec(property(get = __get___9__1, put = __set___9__1))::System::Action_1<::UnityEngine::Color>* __9__1;

  constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*> const& __get___4__this() const;

  constexpr void __set___4__this(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController* value);

  constexpr ::System::Action_1<::UnityEngine::Color>*& __get_colorSetter();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::Color>*> const& __get_colorSetter() const;

  constexpr void __set_colorSetter(::System::Action_1<::UnityEngine::Color>* value);

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart& __get_avatarEditPart();

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart const& __get_avatarEditPart() const;

  constexpr void __set_avatarEditPart(::BeatSaber::BeatAvatarSDK::AvatarPart value);

  constexpr ::System::Func_1<::UnityEngine::Color>*& __get_currentColor();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::UnityEngine::Color>*> const& __get_currentColor() const;

  constexpr void __set_currentColor(::System::Func_1<::UnityEngine::Color>* value);

  constexpr int32_t& __get_uvSegment();

  constexpr int32_t const& __get_uvSegment() const;

  constexpr void __set_uvSegment(int32_t value);

  constexpr ::System::Action_1<::UnityEngine::Color>*& __get___9__1();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::Color>*> const& __get___9__1() const;

  constexpr void __set___9__1(::System::Action_1<::UnityEngine::Color>* value);

  static inline ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__BeatAvatarEditorViewController____c__DisplayClass62_0* New_ctor();

  /// @brief Method .ctor, addr 0xe17628, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <SetupColorButton>b__0, addr 0xe17910, size 0xd0, virtual false, abstract: false, final false
  inline void _SetupColorButton_b__0();

  /// @brief Method <SetupColorButton>b__1, addr 0xe179e0, size 0x58, virtual false, abstract: false, final false
  inline void _SetupColorButton_b__1(::UnityEngine::Color c);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatAvatarEditorViewController____c__DisplayClass62_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatAvatarEditorViewController____c__DisplayClass62_0(__BeatAvatarEditorViewController____c__DisplayClass62_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatAvatarEditorViewController____c__DisplayClass62_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatAvatarEditorViewController____c__DisplayClass62_0(__BeatAvatarEditorViewController____c__DisplayClass62_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatAvatarEditorViewController____c__DisplayClass62_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController* _____4__this;

  /// @brief Field colorSetter, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::Color>* ___colorSetter;

  /// @brief Field avatarEditPart, offset: 0x20, size: 0x4, def value: None
  ::BeatSaber::BeatAvatarSDK::AvatarPart ___avatarEditPart;

  /// @brief Field currentColor, offset: 0x28, size: 0x8, def value: None
  ::System::Func_1<::UnityEngine::Color>* ___currentColor;

  /// @brief Field uvSegment, offset: 0x30, size: 0x4, def value: None
  int32_t ___uvSegment;

  /// @brief Field <>9__1, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::Color>* _____9__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__BeatAvatarEditorViewController____c__DisplayClass62_0, 0x40>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::__BeatAvatarEditorViewController____c__DisplayClass62_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::__BeatAvatarEditorViewController____c__DisplayClass62_0, ___colorSetter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::__BeatAvatarEditorViewController____c__DisplayClass62_0, ___avatarEditPart) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::__BeatAvatarEditorViewController____c__DisplayClass62_0, ___currentColor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::__BeatAvatarEditorViewController____c__DisplayClass62_0, ___uvSegment) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::__BeatAvatarEditorViewController____c__DisplayClass62_0, _____9__1) == 0x38, "Offset mismatch!");

} // namespace BeatSaber::BeatAvatarAdapter::AvatarEditor
// Type: ::<>c__DisplayClass63_0`1
// SizeInfo { instance_size: 48, native_size: 44, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15683)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15267))
// CS Name: ::BeatAvatarEditorViewController::<>c__DisplayClass63_0`1<T>*
class CORDL_TYPE __BeatAvatarEditorViewController____c__DisplayClass63_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field setIdAction, offset 0x10, size 0x8
  __declspec(property(get = __get_setIdAction, put = __set_setIdAction))::System::Action_1<::StringW>* setIdAction;

  /// @brief Field partCollection, offset 0x18, size 0x8
  __declspec(property(get = __get_partCollection, put = __set_partCollection))::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>* partCollection;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController* __4__this;

  /// @brief Field avatarEditPart, offset 0x28, size 0x4
  __declspec(property(get = __get_avatarEditPart, put = __set_avatarEditPart))::BeatSaber::BeatAvatarSDK::AvatarPart avatarEditPart;

  constexpr ::System::Action_1<::StringW>*& __get_setIdAction();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __get_setIdAction() const;

  constexpr void __set_setIdAction(::System::Action_1<::StringW>* value);

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>*& __get_partCollection();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>*> const& __get_partCollection() const;

  constexpr void __set_partCollection(::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>* value);

  constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*> const& __get___4__this() const;

  constexpr void __set___4__this(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController* value);

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart& __get_avatarEditPart();

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart const& __get_avatarEditPart() const;

  constexpr void __set_avatarEditPart(::BeatSaber::BeatAvatarSDK::AvatarPart value);

  static inline ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__BeatAvatarEditorViewController____c__DisplayClass63_0_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <SetupValuePicker>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _SetupValuePicker_b__0(int32_t idx);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatAvatarEditorViewController____c__DisplayClass63_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatAvatarEditorViewController____c__DisplayClass63_0_1(__BeatAvatarEditorViewController____c__DisplayClass63_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatAvatarEditorViewController____c__DisplayClass63_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatAvatarEditorViewController____c__DisplayClass63_0_1(__BeatAvatarEditorViewController____c__DisplayClass63_0_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatAvatarEditorViewController____c__DisplayClass63_0_1();

public:
  /// @brief Field setIdAction, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___setIdAction;

  /// @brief Field partCollection, offset: 0x18, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>* ___partCollection;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController* _____4__this;

  /// @brief Field avatarEditPart, offset: 0x28, size: 0x4, def value: None
  ::BeatSaber::BeatAvatarSDK::AvatarPart ___avatarEditPart;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BeatSaber::BeatAvatarAdapter::AvatarEditor
// Type: BeatSaber.BeatAvatarAdapter.AvatarEditor::BeatAvatarEditorViewController
// SizeInfo { instance_size: 344, native_size: -1, calculated_instance_size: 344, calculated_native_size: 340, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605)), TypeDefinitionIndex(TypeDefinitionIndex(15683))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15268))
// CS Name: ::BeatSaber.BeatAvatarAdapter.AvatarEditor::BeatAvatarEditorViewController*
class CORDL_TYPE BeatAvatarEditorViewController : public ::HMUI::ViewController {
public:
  // Declarations
  template <typename T> using __c__DisplayClass63_0_1 = ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__BeatAvatarEditorViewController____c__DisplayClass63_0_1<T>;

  using __c__DisplayClass62_0 = ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__BeatAvatarEditorViewController____c__DisplayClass62_0;

  /// @brief Field _skinColorValuePicker, offset 0x70, size 0x8
  __declspec(property(get = __get__skinColorValuePicker, put = __set__skinColorValuePicker))::GlobalNamespace::NamedColorListController* _skinColorValuePicker;

  /// @brief Field _headTopValuePicker, offset 0x78, size 0x8
  __declspec(property(get = __get__headTopValuePicker, put = __set__headTopValuePicker))::GlobalNamespace::NamedIntListController* _headTopValuePicker;

  /// @brief Field _eyesValuePicker, offset 0x80, size 0x8
  __declspec(property(get = __get__eyesValuePicker, put = __set__eyesValuePicker))::GlobalNamespace::NamedIntListController* _eyesValuePicker;

  /// @brief Field _handsValuePicker, offset 0x88, size 0x8
  __declspec(property(get = __get__handsValuePicker, put = __set__handsValuePicker))::GlobalNamespace::NamedIntListController* _handsValuePicker;

  /// @brief Field _clothesValuePicker, offset 0x90, size 0x8
  __declspec(property(get = __get__clothesValuePicker, put = __set__clothesValuePicker))::GlobalNamespace::NamedIntListController* _clothesValuePicker;

  /// @brief Field _headTopPrimaryColorButtonController, offset 0x98, size 0x8
  __declspec(property(get = __get__headTopPrimaryColorButtonController,
                      put = __set__headTopPrimaryColorButtonController))::GlobalNamespace::ColorPickerButtonController* _headTopPrimaryColorButtonController;

  /// @brief Field _headTopSecondaryColorButtonController, offset 0xa0, size 0x8
  __declspec(property(get = __get__headTopSecondaryColorButtonController,
                      put = __set__headTopSecondaryColorButtonController))::GlobalNamespace::ColorPickerButtonController* _headTopSecondaryColorButtonController;

  /// @brief Field _handsColorButtonController, offset 0xa8, size 0x8
  __declspec(property(get = __get__handsColorButtonController, put = __set__handsColorButtonController))::GlobalNamespace::ColorPickerButtonController* _handsColorButtonController;

  /// @brief Field _clothesColorButtonControllerPrimary, offset 0xb0, size 0x8
  __declspec(property(get = __get__clothesColorButtonControllerPrimary,
                      put = __set__clothesColorButtonControllerPrimary))::GlobalNamespace::ColorPickerButtonController* _clothesColorButtonControllerPrimary;

  /// @brief Field _clothesColorButtonControllerSecondary, offset 0xb8, size 0x8
  __declspec(property(get = __get__clothesColorButtonControllerSecondary,
                      put = __set__clothesColorButtonControllerSecondary))::GlobalNamespace::ColorPickerButtonController* _clothesColorButtonControllerSecondary;

  /// @brief Field _clothesColorButtonControllerDetail, offset 0xc0, size 0x8
  __declspec(property(get = __get__clothesColorButtonControllerDetail,
                      put = __set__clothesColorButtonControllerDetail))::GlobalNamespace::ColorPickerButtonController* _clothesColorButtonControllerDetail;

  /// @brief Field _randomizeAllButton, offset 0xc8, size 0x8
  __declspec(property(get = __get__randomizeAllButton, put = __set__randomizeAllButton))::UnityEngine::UI::Button* _randomizeAllButton;

  /// @brief Field _undoButton, offset 0xd0, size 0x8
  __declspec(property(get = __get__undoButton, put = __set__undoButton))::UnityEngine::UI::Button* _undoButton;

  /// @brief Field _redoButton, offset 0xd8, size 0x8
  __declspec(property(get = __get__redoButton, put = __set__redoButton))::UnityEngine::UI::Button* _redoButton;

  /// @brief Field _applyButton, offset 0xe0, size 0x8
  __declspec(property(get = __get__applyButton, put = __set__applyButton))::UnityEngine::UI::Button* _applyButton;

  /// @brief Field _cancelButton, offset 0xe8, size 0x8
  __declspec(property(get = __get__cancelButton, put = __set__cancelButton))::UnityEngine::UI::Button* _cancelButton;

  /// @brief Field _applyButtonText, offset 0xf0, size 0x8
  __declspec(property(get = __get__applyButtonText, put = __set__applyButtonText))::HMUI::CurvedTextMeshPro* _applyButtonText;

  /// @brief Field _eyesPreviewImage, offset 0xf8, size 0x8
  __declspec(property(get = __get__eyesPreviewImage, put = __set__eyesPreviewImage))::UnityEngine::UI::Image* _eyesPreviewImage;

  /// @brief Field _avatarPartsModel, offset 0x100, size 0x8
  __declspec(property(get = __get__avatarPartsModel, put = __set__avatarPartsModel))::BeatSaber::BeatAvatarSDK::AvatarPartsModel* _avatarPartsModel;

  /// @brief Field _avatarDataModel, offset 0x108, size 0x8
  __declspec(property(get = __get__avatarDataModel, put = __set__avatarDataModel))::BeatSaber::BeatAvatarSDK::AvatarDataModel* _avatarDataModel;

  /// @brief Field didRequestColorChangeEvent, offset 0x110, size 0x8
  __declspec(property(get = __get_didRequestColorChangeEvent, put = __set_didRequestColorChangeEvent))::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color,
                                                                                                                         ::BeatSaber::BeatAvatarSDK::AvatarPart, int32_t>* didRequestColorChangeEvent;

  /// @brief Field randomizeAllButtonWasPressedEvent, offset 0x118, size 0x8
  __declspec(property(get = __get_randomizeAllButtonWasPressedEvent, put = __set_randomizeAllButtonWasPressedEvent))::System::Action* randomizeAllButtonWasPressedEvent;

  /// @brief Field didChangedAvatarPartEvent, offset 0x120, size 0x8
  __declspec(property(get = __get_didChangedAvatarPartEvent, put = __set_didChangedAvatarPartEvent))::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarPart>* didChangedAvatarPartEvent;

  /// @brief Field cancelButtonWasPressedEvent, offset 0x128, size 0x8
  __declspec(property(get = __get_cancelButtonWasPressedEvent, put = __set_cancelButtonWasPressedEvent))::System::Action* cancelButtonWasPressedEvent;

  /// @brief Field okButtonWasPressedEvent, offset 0x130, size 0x8
  __declspec(property(get = __get_okButtonWasPressedEvent, put = __set_okButtonWasPressedEvent))::System::Action* okButtonWasPressedEvent;

  /// @brief Field _avatarEditHistory, offset 0x138, size 0x8
  __declspec(property(get = __get__avatarEditHistory, put = __set__avatarEditHistory))::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory* _avatarEditHistory;

  /// @brief Field _buttonBinder, offset 0x140, size 0x8
  __declspec(property(get = __get__buttonBinder, put = __set__buttonBinder))::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Field _intPickerBinder, offset 0x148, size 0x8
  __declspec(property(get = __get__intPickerBinder, put = __set__intPickerBinder))::HMUI::ValueChangedBinder_1<int32_t>* _intPickerBinder;

  /// @brief Field _lastEditedPart, offset 0x150, size 0x4
  __declspec(property(get = __get__lastEditedPart, put = __set__lastEditedPart))::BeatSaber::BeatAvatarSDK::AvatarPart _lastEditedPart;

  constexpr ::GlobalNamespace::NamedColorListController*& __get__skinColorValuePicker();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NamedColorListController*> const& __get__skinColorValuePicker() const;

  constexpr void __set__skinColorValuePicker(::GlobalNamespace::NamedColorListController* value);

  constexpr ::GlobalNamespace::NamedIntListController*& __get__headTopValuePicker();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NamedIntListController*> const& __get__headTopValuePicker() const;

  constexpr void __set__headTopValuePicker(::GlobalNamespace::NamedIntListController* value);

  constexpr ::GlobalNamespace::NamedIntListController*& __get__eyesValuePicker();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NamedIntListController*> const& __get__eyesValuePicker() const;

  constexpr void __set__eyesValuePicker(::GlobalNamespace::NamedIntListController* value);

  constexpr ::GlobalNamespace::NamedIntListController*& __get__handsValuePicker();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NamedIntListController*> const& __get__handsValuePicker() const;

  constexpr void __set__handsValuePicker(::GlobalNamespace::NamedIntListController* value);

  constexpr ::GlobalNamespace::NamedIntListController*& __get__clothesValuePicker();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NamedIntListController*> const& __get__clothesValuePicker() const;

  constexpr void __set__clothesValuePicker(::GlobalNamespace::NamedIntListController* value);

  constexpr ::GlobalNamespace::ColorPickerButtonController*& __get__headTopPrimaryColorButtonController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorPickerButtonController*> const& __get__headTopPrimaryColorButtonController() const;

  constexpr void __set__headTopPrimaryColorButtonController(::GlobalNamespace::ColorPickerButtonController* value);

  constexpr ::GlobalNamespace::ColorPickerButtonController*& __get__headTopSecondaryColorButtonController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorPickerButtonController*> const& __get__headTopSecondaryColorButtonController() const;

  constexpr void __set__headTopSecondaryColorButtonController(::GlobalNamespace::ColorPickerButtonController* value);

  constexpr ::GlobalNamespace::ColorPickerButtonController*& __get__handsColorButtonController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorPickerButtonController*> const& __get__handsColorButtonController() const;

  constexpr void __set__handsColorButtonController(::GlobalNamespace::ColorPickerButtonController* value);

  constexpr ::GlobalNamespace::ColorPickerButtonController*& __get__clothesColorButtonControllerPrimary();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorPickerButtonController*> const& __get__clothesColorButtonControllerPrimary() const;

  constexpr void __set__clothesColorButtonControllerPrimary(::GlobalNamespace::ColorPickerButtonController* value);

  constexpr ::GlobalNamespace::ColorPickerButtonController*& __get__clothesColorButtonControllerSecondary();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorPickerButtonController*> const& __get__clothesColorButtonControllerSecondary() const;

  constexpr void __set__clothesColorButtonControllerSecondary(::GlobalNamespace::ColorPickerButtonController* value);

  constexpr ::GlobalNamespace::ColorPickerButtonController*& __get__clothesColorButtonControllerDetail();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorPickerButtonController*> const& __get__clothesColorButtonControllerDetail() const;

  constexpr void __set__clothesColorButtonControllerDetail(::GlobalNamespace::ColorPickerButtonController* value);

  constexpr ::UnityEngine::UI::Button*& __get__randomizeAllButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__randomizeAllButton() const;

  constexpr void __set__randomizeAllButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get__undoButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__undoButton() const;

  constexpr void __set__undoButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get__redoButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__redoButton() const;

  constexpr void __set__redoButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get__applyButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__applyButton() const;

  constexpr void __set__applyButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get__cancelButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__cancelButton() const;

  constexpr void __set__cancelButton(::UnityEngine::UI::Button* value);

  constexpr ::HMUI::CurvedTextMeshPro*& __get__applyButtonText();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::CurvedTextMeshPro*> const& __get__applyButtonText() const;

  constexpr void __set__applyButtonText(::HMUI::CurvedTextMeshPro* value);

  constexpr ::UnityEngine::UI::Image*& __get__eyesPreviewImage();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& __get__eyesPreviewImage() const;

  constexpr void __set__eyesPreviewImage(::UnityEngine::UI::Image* value);

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarPartsModel*& __get__avatarPartsModel();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::AvatarPartsModel*> const& __get__avatarPartsModel() const;

  constexpr void __set__avatarPartsModel(::BeatSaber::BeatAvatarSDK::AvatarPartsModel* value);

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarDataModel*& __get__avatarDataModel();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::AvatarDataModel*> const& __get__avatarDataModel() const;

  constexpr void __set__avatarDataModel(::BeatSaber::BeatAvatarSDK::AvatarDataModel* value);

  constexpr ::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::BeatSaber::BeatAvatarSDK::AvatarPart, int32_t>*& __get_didRequestColorChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::BeatSaber::BeatAvatarSDK::AvatarPart, int32_t>*> const&
  __get_didRequestColorChangeEvent() const;

  constexpr void __set_didRequestColorChangeEvent(::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::BeatSaber::BeatAvatarSDK::AvatarPart, int32_t>* value);

  constexpr ::System::Action*& __get_randomizeAllButtonWasPressedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_randomizeAllButtonWasPressedEvent() const;

  constexpr void __set_randomizeAllButtonWasPressedEvent(::System::Action* value);

  constexpr ::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarPart>*& __get_didChangedAvatarPartEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarPart>*> const& __get_didChangedAvatarPartEvent() const;

  constexpr void __set_didChangedAvatarPartEvent(::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarPart>* value);

  constexpr ::System::Action*& __get_cancelButtonWasPressedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_cancelButtonWasPressedEvent() const;

  constexpr void __set_cancelButtonWasPressedEvent(::System::Action* value);

  constexpr ::System::Action*& __get_okButtonWasPressedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_okButtonWasPressedEvent() const;

  constexpr void __set_okButtonWasPressedEvent(::System::Action* value);

  constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory*& __get__avatarEditHistory();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory*> const& __get__avatarEditHistory() const;

  constexpr void __set__avatarEditHistory(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory* value);

  constexpr ::HMUI::ButtonBinder*& __get__buttonBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& __get__buttonBinder() const;

  constexpr void __set__buttonBinder(::HMUI::ButtonBinder* value);

  constexpr ::HMUI::ValueChangedBinder_1<int32_t>*& __get__intPickerBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ValueChangedBinder_1<int32_t>*> const& __get__intPickerBinder() const;

  constexpr void __set__intPickerBinder(::HMUI::ValueChangedBinder_1<int32_t>* value);

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart& __get__lastEditedPart();

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart const& __get__lastEditedPart() const;

  constexpr void __set__lastEditedPart(::BeatSaber::BeatAvatarSDK::AvatarPart value);

  /// @brief Method add_didRequestColorChangeEvent, addr 0xe12248, size 0xb4, virtual false, abstract: false, final false
  inline void add_didRequestColorChangeEvent(::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::BeatSaber::BeatAvatarSDK::AvatarPart, int32_t>* value);

  /// @brief Method remove_didRequestColorChangeEvent, addr 0xe12d40, size 0xb4, virtual false, abstract: false, final false
  inline void remove_didRequestColorChangeEvent(::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::BeatSaber::BeatAvatarSDK::AvatarPart, int32_t>* value);

  /// @brief Method add_randomizeAllButtonWasPressedEvent, addr 0xe124f0, size 0xa0, virtual false, abstract: false, final false
  inline void add_randomizeAllButtonWasPressedEvent(::System::Action* value);

  /// @brief Method remove_randomizeAllButtonWasPressedEvent, addr 0xe12fe8, size 0xa0, virtual false, abstract: false, final false
  inline void remove_randomizeAllButtonWasPressedEvent(::System::Action* value);

  /// @brief Method add_didChangedAvatarPartEvent, addr 0xe122fc, size 0xb4, virtual false, abstract: false, final false
  inline void add_didChangedAvatarPartEvent(::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarPart>* value);

  /// @brief Method remove_didChangedAvatarPartEvent, addr 0xe12df4, size 0xb4, virtual false, abstract: false, final false
  inline void remove_didChangedAvatarPartEvent(::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarPart>* value);

  /// @brief Method add_cancelButtonWasPressedEvent, addr 0xe123b0, size 0xa0, virtual false, abstract: false, final false
  inline void add_cancelButtonWasPressedEvent(::System::Action* value);

  /// @brief Method remove_cancelButtonWasPressedEvent, addr 0xe12ea8, size 0xa0, virtual false, abstract: false, final false
  inline void remove_cancelButtonWasPressedEvent(::System::Action* value);

  /// @brief Method add_okButtonWasPressedEvent, addr 0xe12450, size 0xa0, virtual false, abstract: false, final false
  inline void add_okButtonWasPressedEvent(::System::Action* value);

  /// @brief Method remove_okButtonWasPressedEvent, addr 0xe12f48, size 0xa0, virtual false, abstract: false, final false
  inline void remove_okButtonWasPressedEvent(::System::Action* value);

  /// @brief Method Setup, addr 0xe11cc8, size 0x90, virtual false, abstract: false, final false
  inline void Setup(bool showAsCreateView);

  /// @brief Method InitHistory, addr 0xe12590, size 0x40, virtual false, abstract: false, final false
  inline void InitHistory();

  /// @brief Method DiscardLastEdit, addr 0xe134dc, size 0x30, virtual false, abstract: false, final false
  inline void DiscardLastEdit();

  /// @brief Method RefreshUi, addr 0xe12730, size 0x32c, virtual false, abstract: false, final false
  inline void RefreshUi();

  /// @brief Method DidActivate, addr 0xe16650, size 0x20, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method OneTimeInitialize, addr 0xe16670, size 0x854, virtual false, abstract: false, final false
  inline void OneTimeInitialize();

  /// @brief Method Update, addr 0xe170d4, size 0x44, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateButtons, addr 0xe165f8, size 0x58, virtual false, abstract: false, final false
  inline void UpdateButtons();

  /// @brief Method HandleSkinColorDidChanged, addr 0xe17268, size 0x94, virtual false, abstract: false, final false
  inline void HandleSkinColorDidChanged(int32_t value);

  /// @brief Method EyesValuePickerHasChanged, addr 0xe172fc, size 0x98, virtual false, abstract: false, final false
  inline void EyesValuePickerHasChanged(::StringW eyesId);

  /// @brief Method HandleUndoButtonWasPressed, addr 0xe171b4, size 0xb4, virtual false, abstract: false, final false
  inline void HandleUndoButtonWasPressed();

  /// @brief Method HandleRedoButtonWasPressed, addr 0xe17394, size 0xa8, virtual false, abstract: false, final false
  inline void HandleRedoButtonWasPressed();

  /// @brief Method HandleRandomizeAllButtonWasPressed, addr 0xe17118, size 0x9c, virtual false, abstract: false, final false
  inline void HandleRandomizeAllButtonWasPressed();

  /// @brief Method HandleRandomizeModelsButtonWasPressed, addr 0xe17494, size 0x78, virtual false, abstract: false, final false
  inline void HandleRandomizeModelsButtonWasPressed();

  /// @brief Method HandleRandomizeColorsButtonWasPressed, addr 0xe1750c, size 0x70, virtual false, abstract: false, final false
  inline void HandleRandomizeColorsButtonWasPressed();

  /// @brief Method ReportAllChangedAndUpdate, addr 0xe1743c, size 0x58, virtual false, abstract: false, final false
  inline void ReportAllChangedAndUpdate();

  /// @brief Method HandleApplyButtonWasPressed, addr 0xe1757c, size 0x50, virtual false, abstract: false, final false
  inline void HandleApplyButtonWasPressed();

  /// @brief Method SaveAvatar, addr 0xe175cc, size 0x1c, virtual false, abstract: false, final false
  inline void SaveAvatar();

  /// @brief Method HandleCancelButtonWasPressed, addr 0xe175e8, size 0x40, virtual false, abstract: false, final false
  inline void HandleCancelButtonWasPressed();

  /// @brief Method CreateTextValuePairsForAvatarPartCollection, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::ArrayW<::GlobalNamespace::__NamedIntListController__TextValuePair*, ::Array<::GlobalNamespace::__NamedIntListController__TextValuePair*>*>
  CreateTextValuePairsForAvatarPartCollection(::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>* partCollection);

  /// @brief Method CreateColorValuePairsForAvatarPartCollection, addr 0xe16fbc, size 0x118, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::__NamedColorListController__ColorValuePair*, ::Array<::GlobalNamespace::__NamedColorListController__ColorValuePair*>*>
  CreateColorValuePairsForAvatarPartCollection(::ArrayW<::BeatSaber::BeatAvatarSDK::SkinColorSO*, ::Array<::BeatSaber::BeatAvatarSDK::SkinColorSO*>*> colors);

  /// @brief Method SetupColorButton, addr 0xe16ec4, size 0xf8, virtual false, abstract: false, final false
  inline void SetupColorButton(::UnityEngine::UI::Button* button, ::System::Action_1<::UnityEngine::Color>* colorSetter, ::System::Func_1<::UnityEngine::Color>* currentColor,
                               ::BeatSaber::BeatAvatarSDK::AvatarPart avatarEditPart, int32_t uvSegment);

  /// @brief Method SetupValuePicker, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void SetupValuePicker(::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>* partCollection, ::GlobalNamespace::NamedIntListController* valuePicker,
                               ::System::Action_1<::StringW>* setIdAction, ::BeatSaber::BeatAvatarSDK::AvatarPart avatarEditPart);

  static inline ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController* New_ctor();

  /// @brief Method .ctor, addr 0xe17630, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <OneTimeInitialize>b__46_0, addr 0xe176c4, size 0x28, virtual false, abstract: false, final false
  inline void _OneTimeInitialize_b__46_0(::UnityEngine::Color color);

  /// @brief Method <OneTimeInitialize>b__46_1, addr 0xe176ec, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Color _OneTimeInitialize_b__46_1();

  /// @brief Method <OneTimeInitialize>b__46_2, addr 0xe17714, size 0x28, virtual false, abstract: false, final false
  inline void _OneTimeInitialize_b__46_2(::UnityEngine::Color color);

  /// @brief Method <OneTimeInitialize>b__46_3, addr 0xe1773c, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Color _OneTimeInitialize_b__46_3();

  /// @brief Method <OneTimeInitialize>b__46_4, addr 0xe17764, size 0x28, virtual false, abstract: false, final false
  inline void _OneTimeInitialize_b__46_4(::UnityEngine::Color color);

  /// @brief Method <OneTimeInitialize>b__46_5, addr 0xe1778c, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Color _OneTimeInitialize_b__46_5();

  /// @brief Method <OneTimeInitialize>b__46_6, addr 0xe177b4, size 0x28, virtual false, abstract: false, final false
  inline void _OneTimeInitialize_b__46_6(::UnityEngine::Color color);

  /// @brief Method <OneTimeInitialize>b__46_7, addr 0xe177dc, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Color _OneTimeInitialize_b__46_7();

  /// @brief Method <OneTimeInitialize>b__46_8, addr 0xe17804, size 0x28, virtual false, abstract: false, final false
  inline void _OneTimeInitialize_b__46_8(::UnityEngine::Color color);

  /// @brief Method <OneTimeInitialize>b__46_9, addr 0xe1782c, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Color _OneTimeInitialize_b__46_9();

  /// @brief Method <OneTimeInitialize>b__46_10, addr 0xe17854, size 0x28, virtual false, abstract: false, final false
  inline void _OneTimeInitialize_b__46_10(::UnityEngine::Color color);

  /// @brief Method <OneTimeInitialize>b__46_11, addr 0xe1787c, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Color _OneTimeInitialize_b__46_11();

  /// @brief Method <OneTimeInitialize>b__46_12, addr 0xe178a4, size 0x24, virtual false, abstract: false, final false
  inline void _OneTimeInitialize_b__46_12(::StringW s);

  /// @brief Method <OneTimeInitialize>b__46_13, addr 0xe178c8, size 0x24, virtual false, abstract: false, final false
  inline void _OneTimeInitialize_b__46_13(::StringW s);

  /// @brief Method <OneTimeInitialize>b__46_14, addr 0xe178ec, size 0x24, virtual false, abstract: false, final false
  inline void _OneTimeInitialize_b__46_14(::StringW s);

  // Ctor Parameters [CppParam { name: "", ty: "BeatAvatarEditorViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatAvatarEditorViewController(BeatAvatarEditorViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatAvatarEditorViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatAvatarEditorViewController(BeatAvatarEditorViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatAvatarEditorViewController();

public:
  /// @brief Field _skinColorValuePicker, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::NamedColorListController* ____skinColorValuePicker;

  /// @brief Field _headTopValuePicker, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::NamedIntListController* ____headTopValuePicker;

  /// @brief Field _eyesValuePicker, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::NamedIntListController* ____eyesValuePicker;

  /// @brief Field _handsValuePicker, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::NamedIntListController* ____handsValuePicker;

  /// @brief Field _clothesValuePicker, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::NamedIntListController* ____clothesValuePicker;

  /// @brief Field _headTopPrimaryColorButtonController, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::ColorPickerButtonController* ____headTopPrimaryColorButtonController;

  /// @brief Field _headTopSecondaryColorButtonController, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::ColorPickerButtonController* ____headTopSecondaryColorButtonController;

  /// @brief Field _handsColorButtonController, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::ColorPickerButtonController* ____handsColorButtonController;

  /// @brief Field _clothesColorButtonControllerPrimary, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::ColorPickerButtonController* ____clothesColorButtonControllerPrimary;

  /// @brief Field _clothesColorButtonControllerSecondary, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::ColorPickerButtonController* ____clothesColorButtonControllerSecondary;

  /// @brief Field _clothesColorButtonControllerDetail, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::ColorPickerButtonController* ____clothesColorButtonControllerDetail;

  /// @brief Field _randomizeAllButton, offset: 0xc8, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____randomizeAllButton;

  /// @brief Field _undoButton, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____undoButton;

  /// @brief Field _redoButton, offset: 0xd8, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____redoButton;

  /// @brief Field _applyButton, offset: 0xe0, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____applyButton;

  /// @brief Field _cancelButton, offset: 0xe8, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____cancelButton;

  /// @brief Field _applyButtonText, offset: 0xf0, size: 0x8, def value: None
  ::HMUI::CurvedTextMeshPro* ____applyButtonText;

  /// @brief Field _eyesPreviewImage, offset: 0xf8, size: 0x8, def value: None
  ::UnityEngine::UI::Image* ____eyesPreviewImage;

  /// @brief Field _avatarPartsModel, offset: 0x100, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarSDK::AvatarPartsModel* ____avatarPartsModel;

  /// @brief Field _avatarDataModel, offset: 0x108, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarSDK::AvatarDataModel* ____avatarDataModel;

  /// @brief Field didRequestColorChangeEvent, offset: 0x110, size: 0x8, def value: None
  ::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::BeatSaber::BeatAvatarSDK::AvatarPart, int32_t>* ___didRequestColorChangeEvent;

  /// @brief Field randomizeAllButtonWasPressedEvent, offset: 0x118, size: 0x8, def value: None
  ::System::Action* ___randomizeAllButtonWasPressedEvent;

  /// @brief Field didChangedAvatarPartEvent, offset: 0x120, size: 0x8, def value: None
  ::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarPart>* ___didChangedAvatarPartEvent;

  /// @brief Field cancelButtonWasPressedEvent, offset: 0x128, size: 0x8, def value: None
  ::System::Action* ___cancelButtonWasPressedEvent;

  /// @brief Field okButtonWasPressedEvent, offset: 0x130, size: 0x8, def value: None
  ::System::Action* ___okButtonWasPressedEvent;

  /// @brief Field _avatarEditHistory, offset: 0x138, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory* ____avatarEditHistory;

  /// @brief Field _buttonBinder, offset: 0x140, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  /// @brief Field _intPickerBinder, offset: 0x148, size: 0x8, def value: None
  ::HMUI::ValueChangedBinder_1<int32_t>* ____intPickerBinder;

  /// @brief Field _lastEditedPart, offset: 0x150, size: 0x4, def value: None
  ::BeatSaber::BeatAvatarSDK::AvatarPart ____lastEditedPart;

  /// @brief Field kEditApplyButtonLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kEditApplyButtonLocalizationKey{ u"BUTTON_APPLY" };

  /// @brief Field kCreateApplyButtonLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kCreateApplyButtonLocalizationKey{ u"BUTTON_CREATE_AVATAR" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, 0x158>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____skinColorValuePicker) == 0x70, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____headTopValuePicker) == 0x78, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____eyesValuePicker) == 0x80, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____handsValuePicker) == 0x88, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____clothesValuePicker) == 0x90, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____headTopPrimaryColorButtonController) == 0x98, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____headTopSecondaryColorButtonController) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____handsColorButtonController) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____clothesColorButtonControllerPrimary) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____clothesColorButtonControllerSecondary) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____clothesColorButtonControllerDetail) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____randomizeAllButton) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____undoButton) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____redoButton) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____applyButton) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____cancelButton) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____applyButtonText) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____eyesPreviewImage) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____avatarPartsModel) == 0x100, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____avatarDataModel) == 0x108, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ___didRequestColorChangeEvent) == 0x110, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ___randomizeAllButtonWasPressedEvent) == 0x118, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ___didChangedAvatarPartEvent) == 0x120, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ___cancelButtonWasPressedEvent) == 0x128, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ___okButtonWasPressedEvent) == 0x130, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____avatarEditHistory) == 0x138, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____buttonBinder) == 0x140, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____intPickerBinder) == 0x148, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController, ____lastEditedPart) == 0x150, "Offset mismatch!");

} // namespace BeatSaber::BeatAvatarAdapter::AvatarEditor
NEED_NO_BOX(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*, "BeatSaber.BeatAvatarAdapter.AvatarEditor", "BeatAvatarEditorViewController");
NEED_NO_BOX(::BeatSaber::BeatAvatarAdapter::AvatarEditor::__BeatAvatarEditorViewController____c__DisplayClass62_0);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarAdapter::AvatarEditor::__BeatAvatarEditorViewController____c__DisplayClass62_0*, "BeatSaber.BeatAvatarAdapter.AvatarEditor",
                       "BeatAvatarEditorViewController/<>c__DisplayClass62_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::BeatSaber::BeatAvatarAdapter::AvatarEditor::__BeatAvatarEditorViewController____c__DisplayClass63_0_1, "BeatSaber.BeatAvatarAdapter.AvatarEditor",
                                     "BeatAvatarEditorViewController/<>c__DisplayClass63_0`1");
