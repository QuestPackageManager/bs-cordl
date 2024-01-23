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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15683))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15266))
// CS Name: ::BeatAvatarEditorViewController::<>c__DisplayClass62_0*
class CORDL_TYPE __BeatAvatarEditorViewController____c__DisplayClass62_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController> __4__this;

  /// @brief Field colorSetter, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_colorSetter, put = __cordl_internal_set_colorSetter))::System::Action_1<::UnityEngine::Color>* colorSetter;

  /// @brief Field avatarEditPart, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_avatarEditPart, put = __cordl_internal_set_avatarEditPart))::BeatSaber::BeatAvatarSDK::AvatarPart avatarEditPart;

  /// @brief Field currentColor, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_currentColor, put = __cordl_internal_set_currentColor))::System::Func_1<::UnityEngine::Color>* currentColor;

  /// @brief Field uvSegment, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_uvSegment, put = __cordl_internal_set_uvSegment)) int32_t uvSegment;

  /// @brief Field <>9__1, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___9__1, put = __cordl_internal_set___9__1))::System::Action_1<::UnityEngine::Color>* __9__1;

  constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController> value);

  constexpr ::System::Action_1<::UnityEngine::Color>*& __cordl_internal_get_colorSetter();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::Color>*> const& __cordl_internal_get_colorSetter() const;

  constexpr void __cordl_internal_set_colorSetter(::System::Action_1<::UnityEngine::Color>* value);

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart& __cordl_internal_get_avatarEditPart();

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart const& __cordl_internal_get_avatarEditPart() const;

  constexpr void __cordl_internal_set_avatarEditPart(::BeatSaber::BeatAvatarSDK::AvatarPart value);

  constexpr ::System::Func_1<::UnityEngine::Color>*& __cordl_internal_get_currentColor();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::UnityEngine::Color>*> const& __cordl_internal_get_currentColor() const;

  constexpr void __cordl_internal_set_currentColor(::System::Func_1<::UnityEngine::Color>* value);

  constexpr int32_t& __cordl_internal_get_uvSegment();

  constexpr int32_t const& __cordl_internal_get_uvSegment() const;

  constexpr void __cordl_internal_set_uvSegment(int32_t value);

  constexpr ::System::Action_1<::UnityEngine::Color>*& __cordl_internal_get___9__1();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::Color>*> const& __cordl_internal_get___9__1() const;

  constexpr void __cordl_internal_set___9__1(::System::Action_1<::UnityEngine::Color>* value);

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
  ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController> _____4__this;

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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15683))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15267))
// CS Name: ::BeatAvatarEditorViewController::<>c__DisplayClass63_0`1<T>*
class CORDL_TYPE __BeatAvatarEditorViewController____c__DisplayClass63_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field setIdAction, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_setIdAction, put = __cordl_internal_set_setIdAction))::System::Action_1<::StringW>* setIdAction;

  /// @brief Field partCollection, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_partCollection, put = __cordl_internal_set_partCollection))::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>* partCollection;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController> __4__this;

  /// @brief Field avatarEditPart, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_avatarEditPart, put = __cordl_internal_set_avatarEditPart))::BeatSaber::BeatAvatarSDK::AvatarPart avatarEditPart;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_setIdAction();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __cordl_internal_get_setIdAction() const;

  constexpr void __cordl_internal_set_setIdAction(::System::Action_1<::StringW>* value);

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>*& __cordl_internal_get_partCollection();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>*> const& __cordl_internal_get_partCollection() const;

  constexpr void __cordl_internal_set_partCollection(::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>* value);

  constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController> value);

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart& __cordl_internal_get_avatarEditPart();

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart const& __cordl_internal_get_avatarEditPart() const;

  constexpr void __cordl_internal_set_avatarEditPart(::BeatSaber::BeatAvatarSDK::AvatarPart value);

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
  ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController> _____4__this;

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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(13605)), TypeDefinitionIndex(TypeDefinitionIndex(15683))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15268))
// CS Name: ::BeatSaber.BeatAvatarAdapter.AvatarEditor::BeatAvatarEditorViewController*
class CORDL_TYPE BeatAvatarEditorViewController : public ::HMUI::ViewController {
public:
  // Declarations
  template <typename T> using __c__DisplayClass63_0_1 = ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__BeatAvatarEditorViewController____c__DisplayClass63_0_1<T>;

  using __c__DisplayClass62_0 = ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__BeatAvatarEditorViewController____c__DisplayClass62_0;

  /// @brief Field _skinColorValuePicker, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__skinColorValuePicker, put = __cordl_internal_set__skinColorValuePicker))::UnityW<::GlobalNamespace::NamedColorListController> _skinColorValuePicker;

  /// @brief Field _headTopValuePicker, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__headTopValuePicker, put = __cordl_internal_set__headTopValuePicker))::UnityW<::GlobalNamespace::NamedIntListController> _headTopValuePicker;

  /// @brief Field _eyesValuePicker, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__eyesValuePicker, put = __cordl_internal_set__eyesValuePicker))::UnityW<::GlobalNamespace::NamedIntListController> _eyesValuePicker;

  /// @brief Field _handsValuePicker, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__handsValuePicker, put = __cordl_internal_set__handsValuePicker))::UnityW<::GlobalNamespace::NamedIntListController> _handsValuePicker;

  /// @brief Field _clothesValuePicker, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__clothesValuePicker, put = __cordl_internal_set__clothesValuePicker))::UnityW<::GlobalNamespace::NamedIntListController> _clothesValuePicker;

  /// @brief Field _headTopPrimaryColorButtonController, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__headTopPrimaryColorButtonController,
                      put = __cordl_internal_set__headTopPrimaryColorButtonController))::UnityW<::GlobalNamespace::ColorPickerButtonController> _headTopPrimaryColorButtonController;

  /// @brief Field _headTopSecondaryColorButtonController, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__headTopSecondaryColorButtonController,
                      put = __cordl_internal_set__headTopSecondaryColorButtonController))::UnityW<::GlobalNamespace::ColorPickerButtonController> _headTopSecondaryColorButtonController;

  /// @brief Field _handsColorButtonController, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__handsColorButtonController,
                      put = __cordl_internal_set__handsColorButtonController))::UnityW<::GlobalNamespace::ColorPickerButtonController> _handsColorButtonController;

  /// @brief Field _clothesColorButtonControllerPrimary, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__clothesColorButtonControllerPrimary,
                      put = __cordl_internal_set__clothesColorButtonControllerPrimary))::UnityW<::GlobalNamespace::ColorPickerButtonController> _clothesColorButtonControllerPrimary;

  /// @brief Field _clothesColorButtonControllerSecondary, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__clothesColorButtonControllerSecondary,
                      put = __cordl_internal_set__clothesColorButtonControllerSecondary))::UnityW<::GlobalNamespace::ColorPickerButtonController> _clothesColorButtonControllerSecondary;

  /// @brief Field _clothesColorButtonControllerDetail, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__clothesColorButtonControllerDetail,
                      put = __cordl_internal_set__clothesColorButtonControllerDetail))::UnityW<::GlobalNamespace::ColorPickerButtonController> _clothesColorButtonControllerDetail;

  /// @brief Field _randomizeAllButton, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__randomizeAllButton, put = __cordl_internal_set__randomizeAllButton))::UnityW<::UnityEngine::UI::Button> _randomizeAllButton;

  /// @brief Field _undoButton, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__undoButton, put = __cordl_internal_set__undoButton))::UnityW<::UnityEngine::UI::Button> _undoButton;

  /// @brief Field _redoButton, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__redoButton, put = __cordl_internal_set__redoButton))::UnityW<::UnityEngine::UI::Button> _redoButton;

  /// @brief Field _applyButton, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__applyButton, put = __cordl_internal_set__applyButton))::UnityW<::UnityEngine::UI::Button> _applyButton;

  /// @brief Field _cancelButton, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__cancelButton, put = __cordl_internal_set__cancelButton))::UnityW<::UnityEngine::UI::Button> _cancelButton;

  /// @brief Field _applyButtonText, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__applyButtonText, put = __cordl_internal_set__applyButtonText))::UnityW<::HMUI::CurvedTextMeshPro> _applyButtonText;

  /// @brief Field _eyesPreviewImage, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__eyesPreviewImage, put = __cordl_internal_set__eyesPreviewImage))::UnityW<::UnityEngine::UI::Image> _eyesPreviewImage;

  /// @brief Field _avatarPartsModel, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarPartsModel, put = __cordl_internal_set__avatarPartsModel))::BeatSaber::BeatAvatarSDK::AvatarPartsModel* _avatarPartsModel;

  /// @brief Field _avatarDataModel, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarDataModel, put = __cordl_internal_set__avatarDataModel))::BeatSaber::BeatAvatarSDK::AvatarDataModel* _avatarDataModel;

  /// @brief Field didRequestColorChangeEvent, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_didRequestColorChangeEvent,
                      put = __cordl_internal_set_didRequestColorChangeEvent))::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::BeatSaber::BeatAvatarSDK::AvatarPart,
                                                                                                int32_t>* didRequestColorChangeEvent;

  /// @brief Field randomizeAllButtonWasPressedEvent, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_randomizeAllButtonWasPressedEvent, put = __cordl_internal_set_randomizeAllButtonWasPressedEvent))::System::Action* randomizeAllButtonWasPressedEvent;

  /// @brief Field didChangedAvatarPartEvent, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_didChangedAvatarPartEvent,
                      put = __cordl_internal_set_didChangedAvatarPartEvent))::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarPart>* didChangedAvatarPartEvent;

  /// @brief Field cancelButtonWasPressedEvent, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_cancelButtonWasPressedEvent, put = __cordl_internal_set_cancelButtonWasPressedEvent))::System::Action* cancelButtonWasPressedEvent;

  /// @brief Field okButtonWasPressedEvent, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get_okButtonWasPressedEvent, put = __cordl_internal_set_okButtonWasPressedEvent))::System::Action* okButtonWasPressedEvent;

  /// @brief Field _avatarEditHistory, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarEditHistory, put = __cordl_internal_set__avatarEditHistory))::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory* _avatarEditHistory;

  /// @brief Field _buttonBinder, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonBinder, put = __cordl_internal_set__buttonBinder))::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Field _intPickerBinder, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get__intPickerBinder, put = __cordl_internal_set__intPickerBinder))::HMUI::ValueChangedBinder_1<int32_t>* _intPickerBinder;

  /// @brief Field _lastEditedPart, offset 0x150, size 0x4
  __declspec(property(get = __cordl_internal_get__lastEditedPart, put = __cordl_internal_set__lastEditedPart))::BeatSaber::BeatAvatarSDK::AvatarPart _lastEditedPart;

  constexpr ::UnityW<::GlobalNamespace::NamedColorListController>& __cordl_internal_get__skinColorValuePicker();

  constexpr ::UnityW<::GlobalNamespace::NamedColorListController> const& __cordl_internal_get__skinColorValuePicker() const;

  constexpr void __cordl_internal_set__skinColorValuePicker(::UnityW<::GlobalNamespace::NamedColorListController> value);

  constexpr ::UnityW<::GlobalNamespace::NamedIntListController>& __cordl_internal_get__headTopValuePicker();

  constexpr ::UnityW<::GlobalNamespace::NamedIntListController> const& __cordl_internal_get__headTopValuePicker() const;

  constexpr void __cordl_internal_set__headTopValuePicker(::UnityW<::GlobalNamespace::NamedIntListController> value);

  constexpr ::UnityW<::GlobalNamespace::NamedIntListController>& __cordl_internal_get__eyesValuePicker();

  constexpr ::UnityW<::GlobalNamespace::NamedIntListController> const& __cordl_internal_get__eyesValuePicker() const;

  constexpr void __cordl_internal_set__eyesValuePicker(::UnityW<::GlobalNamespace::NamedIntListController> value);

  constexpr ::UnityW<::GlobalNamespace::NamedIntListController>& __cordl_internal_get__handsValuePicker();

  constexpr ::UnityW<::GlobalNamespace::NamedIntListController> const& __cordl_internal_get__handsValuePicker() const;

  constexpr void __cordl_internal_set__handsValuePicker(::UnityW<::GlobalNamespace::NamedIntListController> value);

  constexpr ::UnityW<::GlobalNamespace::NamedIntListController>& __cordl_internal_get__clothesValuePicker();

  constexpr ::UnityW<::GlobalNamespace::NamedIntListController> const& __cordl_internal_get__clothesValuePicker() const;

  constexpr void __cordl_internal_set__clothesValuePicker(::UnityW<::GlobalNamespace::NamedIntListController> value);

  constexpr ::UnityW<::GlobalNamespace::ColorPickerButtonController>& __cordl_internal_get__headTopPrimaryColorButtonController();

  constexpr ::UnityW<::GlobalNamespace::ColorPickerButtonController> const& __cordl_internal_get__headTopPrimaryColorButtonController() const;

  constexpr void __cordl_internal_set__headTopPrimaryColorButtonController(::UnityW<::GlobalNamespace::ColorPickerButtonController> value);

  constexpr ::UnityW<::GlobalNamespace::ColorPickerButtonController>& __cordl_internal_get__headTopSecondaryColorButtonController();

  constexpr ::UnityW<::GlobalNamespace::ColorPickerButtonController> const& __cordl_internal_get__headTopSecondaryColorButtonController() const;

  constexpr void __cordl_internal_set__headTopSecondaryColorButtonController(::UnityW<::GlobalNamespace::ColorPickerButtonController> value);

  constexpr ::UnityW<::GlobalNamespace::ColorPickerButtonController>& __cordl_internal_get__handsColorButtonController();

  constexpr ::UnityW<::GlobalNamespace::ColorPickerButtonController> const& __cordl_internal_get__handsColorButtonController() const;

  constexpr void __cordl_internal_set__handsColorButtonController(::UnityW<::GlobalNamespace::ColorPickerButtonController> value);

  constexpr ::UnityW<::GlobalNamespace::ColorPickerButtonController>& __cordl_internal_get__clothesColorButtonControllerPrimary();

  constexpr ::UnityW<::GlobalNamespace::ColorPickerButtonController> const& __cordl_internal_get__clothesColorButtonControllerPrimary() const;

  constexpr void __cordl_internal_set__clothesColorButtonControllerPrimary(::UnityW<::GlobalNamespace::ColorPickerButtonController> value);

  constexpr ::UnityW<::GlobalNamespace::ColorPickerButtonController>& __cordl_internal_get__clothesColorButtonControllerSecondary();

  constexpr ::UnityW<::GlobalNamespace::ColorPickerButtonController> const& __cordl_internal_get__clothesColorButtonControllerSecondary() const;

  constexpr void __cordl_internal_set__clothesColorButtonControllerSecondary(::UnityW<::GlobalNamespace::ColorPickerButtonController> value);

  constexpr ::UnityW<::GlobalNamespace::ColorPickerButtonController>& __cordl_internal_get__clothesColorButtonControllerDetail();

  constexpr ::UnityW<::GlobalNamespace::ColorPickerButtonController> const& __cordl_internal_get__clothesColorButtonControllerDetail() const;

  constexpr void __cordl_internal_set__clothesColorButtonControllerDetail(::UnityW<::GlobalNamespace::ColorPickerButtonController> value);

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__randomizeAllButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__randomizeAllButton() const;

  constexpr void __cordl_internal_set__randomizeAllButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__undoButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__undoButton() const;

  constexpr void __cordl_internal_set__undoButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__redoButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__redoButton() const;

  constexpr void __cordl_internal_set__redoButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__applyButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__applyButton() const;

  constexpr void __cordl_internal_set__applyButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__cancelButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__cancelButton() const;

  constexpr void __cordl_internal_set__cancelButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr ::UnityW<::HMUI::CurvedTextMeshPro>& __cordl_internal_get__applyButtonText();

  constexpr ::UnityW<::HMUI::CurvedTextMeshPro> const& __cordl_internal_get__applyButtonText() const;

  constexpr void __cordl_internal_set__applyButtonText(::UnityW<::HMUI::CurvedTextMeshPro> value);

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__eyesPreviewImage();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__eyesPreviewImage() const;

  constexpr void __cordl_internal_set__eyesPreviewImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarPartsModel*& __cordl_internal_get__avatarPartsModel();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::AvatarPartsModel*> const& __cordl_internal_get__avatarPartsModel() const;

  constexpr void __cordl_internal_set__avatarPartsModel(::BeatSaber::BeatAvatarSDK::AvatarPartsModel* value);

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarDataModel*& __cordl_internal_get__avatarDataModel();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::AvatarDataModel*> const& __cordl_internal_get__avatarDataModel() const;

  constexpr void __cordl_internal_set__avatarDataModel(::BeatSaber::BeatAvatarSDK::AvatarDataModel* value);

  constexpr ::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::BeatSaber::BeatAvatarSDK::AvatarPart, int32_t>*& __cordl_internal_get_didRequestColorChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::BeatSaber::BeatAvatarSDK::AvatarPart, int32_t>*> const&
  __cordl_internal_get_didRequestColorChangeEvent() const;

  constexpr void
  __cordl_internal_set_didRequestColorChangeEvent(::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::BeatSaber::BeatAvatarSDK::AvatarPart, int32_t>* value);

  constexpr ::System::Action*& __cordl_internal_get_randomizeAllButtonWasPressedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_randomizeAllButtonWasPressedEvent() const;

  constexpr void __cordl_internal_set_randomizeAllButtonWasPressedEvent(::System::Action* value);

  constexpr ::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarPart>*& __cordl_internal_get_didChangedAvatarPartEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarPart>*> const& __cordl_internal_get_didChangedAvatarPartEvent() const;

  constexpr void __cordl_internal_set_didChangedAvatarPartEvent(::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarPart>* value);

  constexpr ::System::Action*& __cordl_internal_get_cancelButtonWasPressedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_cancelButtonWasPressedEvent() const;

  constexpr void __cordl_internal_set_cancelButtonWasPressedEvent(::System::Action* value);

  constexpr ::System::Action*& __cordl_internal_get_okButtonWasPressedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_okButtonWasPressedEvent() const;

  constexpr void __cordl_internal_set_okButtonWasPressedEvent(::System::Action* value);

  constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory*& __cordl_internal_get__avatarEditHistory();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory*> const& __cordl_internal_get__avatarEditHistory() const;

  constexpr void __cordl_internal_set__avatarEditHistory(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory* value);

  constexpr ::HMUI::ButtonBinder*& __cordl_internal_get__buttonBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& __cordl_internal_get__buttonBinder() const;

  constexpr void __cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value);

  constexpr ::HMUI::ValueChangedBinder_1<int32_t>*& __cordl_internal_get__intPickerBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ValueChangedBinder_1<int32_t>*> const& __cordl_internal_get__intPickerBinder() const;

  constexpr void __cordl_internal_set__intPickerBinder(::HMUI::ValueChangedBinder_1<int32_t>* value);

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart& __cordl_internal_get__lastEditedPart();

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart const& __cordl_internal_get__lastEditedPart() const;

  constexpr void __cordl_internal_set__lastEditedPart(::BeatSaber::BeatAvatarSDK::AvatarPart value);

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
  ::UnityW<::GlobalNamespace::NamedColorListController> ____skinColorValuePicker;

  /// @brief Field _headTopValuePicker, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NamedIntListController> ____headTopValuePicker;

  /// @brief Field _eyesValuePicker, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NamedIntListController> ____eyesValuePicker;

  /// @brief Field _handsValuePicker, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NamedIntListController> ____handsValuePicker;

  /// @brief Field _clothesValuePicker, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NamedIntListController> ____clothesValuePicker;

  /// @brief Field _headTopPrimaryColorButtonController, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorPickerButtonController> ____headTopPrimaryColorButtonController;

  /// @brief Field _headTopSecondaryColorButtonController, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorPickerButtonController> ____headTopSecondaryColorButtonController;

  /// @brief Field _handsColorButtonController, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorPickerButtonController> ____handsColorButtonController;

  /// @brief Field _clothesColorButtonControllerPrimary, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorPickerButtonController> ____clothesColorButtonControllerPrimary;

  /// @brief Field _clothesColorButtonControllerSecondary, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorPickerButtonController> ____clothesColorButtonControllerSecondary;

  /// @brief Field _clothesColorButtonControllerDetail, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorPickerButtonController> ____clothesColorButtonControllerDetail;

  /// @brief Field _randomizeAllButton, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____randomizeAllButton;

  /// @brief Field _undoButton, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____undoButton;

  /// @brief Field _redoButton, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____redoButton;

  /// @brief Field _applyButton, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____applyButton;

  /// @brief Field _cancelButton, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____cancelButton;

  /// @brief Field _applyButtonText, offset: 0xf0, size: 0x8, def value: None
  ::UnityW<::HMUI::CurvedTextMeshPro> ____applyButtonText;

  /// @brief Field _eyesPreviewImage, offset: 0xf8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____eyesPreviewImage;

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
