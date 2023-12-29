#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EditAvatarViewController_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EditAvatarViewController)
namespace System {
template <typename T1, typename T2, typename T3, typename T4> class Action_4;
}
namespace GlobalNamespace {
class __EditAvatarViewController____c__DisplayClass60_0;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
template <typename T> class __EditAvatarViewController____c__DisplayClass61_0_1;
}
namespace GlobalNamespace {
class AvatarEditHistory;
}
namespace GlobalNamespace {
template <typename T> class AvatarPartCollection_1;
}
namespace GlobalNamespace {
class AvatarDataModel;
}
namespace GlobalNamespace {
class __NamedColorListController__ColorValuePair;
}
namespace GlobalNamespace {
class __NamedIntListController__TextValuePair;
}
namespace GlobalNamespace {
struct __EditAvatarViewController__FinishAction;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class NamedColorListController;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace HMUI {
template <typename T> class ValueChangedBinder_1;
}
namespace GlobalNamespace {
class NamedIntListController;
}
namespace GlobalNamespace {
struct __EditAvatarViewController__AvatarEditPart;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace GlobalNamespace {
class SkinColorSO;
}
namespace GlobalNamespace {
class AvatarPartsModel;
}
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class ColorPickerButtonController;
}
namespace HMUI {
class CurvedTextMeshPro;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
struct __EditAvatarViewController__AvatarEditPart;
}
namespace GlobalNamespace {
struct __EditAvatarViewController__FinishAction;
}
namespace GlobalNamespace {
class EditAvatarViewController;
}
namespace GlobalNamespace {
class __EditAvatarViewController____c__DisplayClass60_0;
}
namespace GlobalNamespace {
template <typename T> class __EditAvatarViewController____c__DisplayClass61_0_1;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__EditAvatarViewController__AvatarEditPart);
MARK_VAL_T(::GlobalNamespace::__EditAvatarViewController__FinishAction);
MARK_REF_PTR_T(::GlobalNamespace::EditAvatarViewController);
MARK_REF_PTR_T(::GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__EditAvatarViewController____c__DisplayClass61_0_1);
// Type: ::FinishAction
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5717))
// CS Name: ::EditAvatarViewController::FinishAction
struct CORDL_TYPE __EditAvatarViewController__FinishAction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____EditAvatarViewController__FinishAction_Unwrapped
  enum struct ____EditAvatarViewController__FinishAction_Unwrapped : int32_t {
    __E_Cancel = static_cast<int32_t>(0x0),
    __E_Apply = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____EditAvatarViewController__FinishAction_Unwrapped() const noexcept {
    return static_cast<____EditAvatarViewController__FinishAction_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __EditAvatarViewController__FinishAction(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __EditAvatarViewController__FinishAction();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Cancel value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__EditAvatarViewController__FinishAction const Cancel;

  /// @brief Field Apply value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__EditAvatarViewController__FinishAction const Apply;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EditAvatarViewController__FinishAction, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__EditAvatarViewController__FinishAction, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::AvatarEditPart
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5718))
// CS Name: ::EditAvatarViewController::AvatarEditPart
struct CORDL_TYPE __EditAvatarViewController__AvatarEditPart {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____EditAvatarViewController__AvatarEditPart_Unwrapped
  enum struct ____EditAvatarViewController__AvatarEditPart_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_All = static_cast<int32_t>(0x1),
    __E_SkinColor = static_cast<int32_t>(0x2),
    __E_HeadTopModel = static_cast<int32_t>(0x3),
    __E_HeadTopPrimaryColor = static_cast<int32_t>(0x4),
    __E_HeadTopSecondaryColor = static_cast<int32_t>(0x5),
    __E_GlassesModel = static_cast<int32_t>(0x6),
    __E_GlassesColor = static_cast<int32_t>(0x7),
    __E_FacialHairModel = static_cast<int32_t>(0x8),
    __E_FacialHairColor = static_cast<int32_t>(0x9),
    __E_HandsModel = static_cast<int32_t>(0xa),
    __E_HandsColor = static_cast<int32_t>(0xb),
    __E_ClothesModel = static_cast<int32_t>(0xc),
    __E_ClothesModelPrimaryColor = static_cast<int32_t>(0xd),
    __E_ClothesModelSecondaryColor = static_cast<int32_t>(0xe),
    __E_ClothesModelDetailColor = static_cast<int32_t>(0xf),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____EditAvatarViewController__AvatarEditPart_Unwrapped() const noexcept {
    return static_cast<____EditAvatarViewController__AvatarEditPart_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __EditAvatarViewController__AvatarEditPart(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __EditAvatarViewController__AvatarEditPart();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart const Unknown;

  /// @brief Field All value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart const All;

  /// @brief Field SkinColor value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart const SkinColor;

  /// @brief Field HeadTopModel value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart const HeadTopModel;

  /// @brief Field HeadTopPrimaryColor value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart const HeadTopPrimaryColor;

  /// @brief Field HeadTopSecondaryColor value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart const HeadTopSecondaryColor;

  /// @brief Field GlassesModel value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart const GlassesModel;

  /// @brief Field GlassesColor value: static_cast<int32_t>(0x7)
  static ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart const GlassesColor;

  /// @brief Field FacialHairModel value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart const FacialHairModel;

  /// @brief Field FacialHairColor value: static_cast<int32_t>(0x9)
  static ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart const FacialHairColor;

  /// @brief Field HandsModel value: static_cast<int32_t>(0xa)
  static ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart const HandsModel;

  /// @brief Field HandsColor value: static_cast<int32_t>(0xb)
  static ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart const HandsColor;

  /// @brief Field ClothesModel value: static_cast<int32_t>(0xc)
  static ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart const ClothesModel;

  /// @brief Field ClothesModelPrimaryColor value: static_cast<int32_t>(0xd)
  static ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart const ClothesModelPrimaryColor;

  /// @brief Field ClothesModelSecondaryColor value: static_cast<int32_t>(0xe)
  static ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart const ClothesModelSecondaryColor;

  /// @brief Field ClothesModelDetailColor value: static_cast<int32_t>(0xf)
  static ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart const ClothesModelDetailColor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__EditAvatarViewController__AvatarEditPart, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass60_0
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(5718))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5719))
// CS Name: ::EditAvatarViewController::<>c__DisplayClass60_0*
class CORDL_TYPE __EditAvatarViewController____c__DisplayClass60_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::EditAvatarViewController* __4__this;

  /// @brief Field colorSetter, offset 0x18, size 0x8
  __declspec(property(get = __get_colorSetter, put = __set_colorSetter))::System::Action_1<::UnityEngine::Color>* colorSetter;

  /// @brief Field avatarEditPart, offset 0x20, size 0x4
  __declspec(property(get = __get_avatarEditPart, put = __set_avatarEditPart))::GlobalNamespace::__EditAvatarViewController__AvatarEditPart avatarEditPart;

  /// @brief Field currentColor, offset 0x28, size 0x8
  __declspec(property(get = __get_currentColor, put = __set_currentColor))::System::Func_1<::UnityEngine::Color>* currentColor;

  /// @brief Field uvSegment, offset 0x30, size 0x4
  __declspec(property(get = __get_uvSegment, put = __set_uvSegment)) int32_t uvSegment;

  /// @brief Field <>9__1, offset 0x38, size 0x8
  __declspec(property(get = __get___9__1, put = __set___9__1))::System::Action_1<::UnityEngine::Color>* __9__1;

  constexpr ::GlobalNamespace::EditAvatarViewController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EditAvatarViewController*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::EditAvatarViewController* value);

  constexpr ::System::Action_1<::UnityEngine::Color>*& __get_colorSetter();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::Color>*> const& __get_colorSetter() const;

  constexpr void __set_colorSetter(::System::Action_1<::UnityEngine::Color>* value);

  constexpr ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart& __get_avatarEditPart();

  constexpr ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart const& __get_avatarEditPart() const;

  constexpr void __set_avatarEditPart(::GlobalNamespace::__EditAvatarViewController__AvatarEditPart value);

  constexpr ::System::Func_1<::UnityEngine::Color>*& __get_currentColor();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::UnityEngine::Color>*> const& __get_currentColor() const;

  constexpr void __set_currentColor(::System::Func_1<::UnityEngine::Color>* value);

  constexpr int32_t& __get_uvSegment();

  constexpr int32_t const& __get_uvSegment() const;

  constexpr void __set_uvSegment(int32_t value);

  constexpr ::System::Action_1<::UnityEngine::Color>*& __get___9__1();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::Color>*> const& __get___9__1() const;

  constexpr void __set___9__1(::System::Action_1<::UnityEngine::Color>* value);

  static inline ::GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0* New_ctor();

  /// @brief Method .ctor addr 0x216c0d8 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <SetupColorButton>b__0 addr 0x216c390 size 0xd0 virtual false final false
  inline void _SetupColorButton_b__0();

  /// @brief Method <SetupColorButton>b__1 addr 0x216c460 size 0x58 virtual false final false
  inline void _SetupColorButton_b__1(::UnityEngine::Color c);

  // Ctor Parameters [CppParam { name: "", ty: "__EditAvatarViewController____c__DisplayClass60_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EditAvatarViewController____c__DisplayClass60_0(__EditAvatarViewController____c__DisplayClass60_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EditAvatarViewController____c__DisplayClass60_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EditAvatarViewController____c__DisplayClass60_0(__EditAvatarViewController____c__DisplayClass60_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EditAvatarViewController____c__DisplayClass60_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::EditAvatarViewController* _____4__this;

  /// @brief Field colorSetter, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::Color>* ___colorSetter;

  /// @brief Field avatarEditPart, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart ___avatarEditPart;

  /// @brief Field currentColor, offset: 0x28, size: 0x8, def value: None
  ::System::Func_1<::UnityEngine::Color>* ___currentColor;

  /// @brief Field uvSegment, offset: 0x30, size: 0x4, def value: None
  int32_t ___uvSegment;

  /// @brief Field <>9__1, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::Color>* _____9__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0, ___colorSetter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0, ___avatarEditPart) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0, ___currentColor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0, ___uvSegment) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0, _____9__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass61_0`1
// SizeInfo { instance_size: 48, native_size: 44, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(5718))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5720))
// CS Name: ::EditAvatarViewController::<>c__DisplayClass61_0`1<T>*
class CORDL_TYPE __EditAvatarViewController____c__DisplayClass61_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field setIdAction, offset 0x10, size 0x8
  __declspec(property(get = __get_setIdAction, put = __set_setIdAction))::System::Action_1<::StringW>* setIdAction;

  /// @brief Field partCollection, offset 0x18, size 0x8
  __declspec(property(get = __get_partCollection, put = __set_partCollection))::GlobalNamespace::AvatarPartCollection_1<T>* partCollection;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::EditAvatarViewController* __4__this;

  /// @brief Field avatarEditPart, offset 0x28, size 0x4
  __declspec(property(get = __get_avatarEditPart, put = __set_avatarEditPart))::GlobalNamespace::__EditAvatarViewController__AvatarEditPart avatarEditPart;

  constexpr ::System::Action_1<::StringW>*& __get_setIdAction();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __get_setIdAction() const;

  constexpr void __set_setIdAction(::System::Action_1<::StringW>* value);

  constexpr ::GlobalNamespace::AvatarPartCollection_1<T>*& __get_partCollection();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarPartCollection_1<T>*> const& __get_partCollection() const;

  constexpr void __set_partCollection(::GlobalNamespace::AvatarPartCollection_1<T>* value);

  constexpr ::GlobalNamespace::EditAvatarViewController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EditAvatarViewController*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::EditAvatarViewController* value);

  constexpr ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart& __get_avatarEditPart();

  constexpr ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart const& __get_avatarEditPart() const;

  constexpr void __set_avatarEditPart(::GlobalNamespace::__EditAvatarViewController__AvatarEditPart value);

  static inline ::GlobalNamespace::__EditAvatarViewController____c__DisplayClass61_0_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <SetupValuePicker>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _SetupValuePicker_b__0(int32_t idx);

  // Ctor Parameters [CppParam { name: "", ty: "__EditAvatarViewController____c__DisplayClass61_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EditAvatarViewController____c__DisplayClass61_0_1(__EditAvatarViewController____c__DisplayClass61_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EditAvatarViewController____c__DisplayClass61_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EditAvatarViewController____c__DisplayClass61_0_1(__EditAvatarViewController____c__DisplayClass61_0_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EditAvatarViewController____c__DisplayClass61_0_1();

public:
  /// @brief Field setIdAction, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___setIdAction;

  /// @brief Field partCollection, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::AvatarPartCollection_1<T>* ___partCollection;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::EditAvatarViewController* _____4__this;

  /// @brief Field avatarEditPart, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart ___avatarEditPart;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::EditAvatarViewController
// SizeInfo { instance_size: 336, native_size: -1, calculated_instance_size: 336, calculated_native_size: 332, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13722)), TypeDefinitionIndex(TypeDefinitionIndex(5718))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5721))
// CS Name: ::EditAvatarViewController*
class CORDL_TYPE EditAvatarViewController : public ::HMUI::ViewController {
public:
  // Declarations
  template <typename T> using __c__DisplayClass61_0_1 = ::GlobalNamespace::__EditAvatarViewController____c__DisplayClass61_0_1<T>;

  using __c__DisplayClass60_0 = ::GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0;

  using AvatarEditPart = ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart;

  using FinishAction = ::GlobalNamespace::__EditAvatarViewController__FinishAction;

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
  __declspec(property(get = __get__avatarPartsModel, put = __set__avatarPartsModel))::GlobalNamespace::AvatarPartsModel* _avatarPartsModel;

  /// @brief Field _avatarDataModel, offset 0x108, size 0x8
  __declspec(property(get = __get__avatarDataModel, put = __set__avatarDataModel))::GlobalNamespace::AvatarDataModel* _avatarDataModel;

  /// @brief Field _playerDataModel, offset 0x110, size 0x8
  __declspec(property(get = __get__playerDataModel, put = __set__playerDataModel))::GlobalNamespace::PlayerDataModel* _playerDataModel;

  /// @brief Field didFinishEvent, offset 0x118, size 0x8
  __declspec(property(get = __get_didFinishEvent, put = __set_didFinishEvent))::System::Action_1<::GlobalNamespace::__EditAvatarViewController__FinishAction>* didFinishEvent;

  /// @brief Field didRequestColorChangeEvent, offset 0x120, size 0x8
  __declspec(property(get = __get_didRequestColorChangeEvent,
                      put = __set_didRequestColorChangeEvent))::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color,
                                                                                 ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart, int32_t>* didRequestColorChangeEvent;

  /// @brief Field randomizeAllButtonWasPressedEvent, offset 0x128, size 0x8
  __declspec(property(get = __get_randomizeAllButtonWasPressedEvent, put = __set_randomizeAllButtonWasPressedEvent))::System::Action* randomizeAllButtonWasPressedEvent;

  /// @brief Field didChangedAvatarPartEvent, offset 0x130, size 0x8
  __declspec(property(get = __get_didChangedAvatarPartEvent,
                      put = __set_didChangedAvatarPartEvent))::System::Action_1<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart>* didChangedAvatarPartEvent;

  /// @brief Field _avatarEditHistory, offset 0x138, size 0x8
  __declspec(property(get = __get__avatarEditHistory, put = __set__avatarEditHistory))::GlobalNamespace::AvatarEditHistory* _avatarEditHistory;

  /// @brief Field _intPickerBinder, offset 0x140, size 0x8
  __declspec(property(get = __get__intPickerBinder, put = __set__intPickerBinder))::HMUI::ValueChangedBinder_1<int32_t>* _intPickerBinder;

  /// @brief Field _lastEditedPart, offset 0x148, size 0x4
  __declspec(property(get = __get__lastEditedPart, put = __set__lastEditedPart))::GlobalNamespace::__EditAvatarViewController__AvatarEditPart _lastEditedPart;

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

  constexpr ::GlobalNamespace::AvatarPartsModel*& __get__avatarPartsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarPartsModel*> const& __get__avatarPartsModel() const;

  constexpr void __set__avatarPartsModel(::GlobalNamespace::AvatarPartsModel* value);

  constexpr ::GlobalNamespace::AvatarDataModel*& __get__avatarDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarDataModel*> const& __get__avatarDataModel() const;

  constexpr void __set__avatarDataModel(::GlobalNamespace::AvatarDataModel* value);

  constexpr ::GlobalNamespace::PlayerDataModel*& __get__playerDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& __get__playerDataModel() const;

  constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel* value);

  constexpr ::System::Action_1<::GlobalNamespace::__EditAvatarViewController__FinishAction>*& __get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__EditAvatarViewController__FinishAction>*> const& __get_didFinishEvent() const;

  constexpr void __set_didFinishEvent(::System::Action_1<::GlobalNamespace::__EditAvatarViewController__FinishAction>* value);

  constexpr ::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart, int32_t>*&
  __get_didRequestColorChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart, int32_t>*> const&
  __get_didRequestColorChangeEvent() const;

  constexpr void
  __set_didRequestColorChangeEvent(::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart, int32_t>* value);

  constexpr ::System::Action*& __get_randomizeAllButtonWasPressedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_randomizeAllButtonWasPressedEvent() const;

  constexpr void __set_randomizeAllButtonWasPressedEvent(::System::Action* value);

  constexpr ::System::Action_1<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart>*& __get_didChangedAvatarPartEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart>*> const& __get_didChangedAvatarPartEvent() const;

  constexpr void __set_didChangedAvatarPartEvent(::System::Action_1<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart>* value);

  constexpr ::GlobalNamespace::AvatarEditHistory*& __get__avatarEditHistory();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarEditHistory*> const& __get__avatarEditHistory() const;

  constexpr void __set__avatarEditHistory(::GlobalNamespace::AvatarEditHistory* value);

  constexpr ::HMUI::ValueChangedBinder_1<int32_t>*& __get__intPickerBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ValueChangedBinder_1<int32_t>*> const& __get__intPickerBinder() const;

  constexpr void __set__intPickerBinder(::HMUI::ValueChangedBinder_1<int32_t>* value);

  constexpr ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart& __get__lastEditedPart();

  constexpr ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart const& __get__lastEditedPart() const;

  constexpr void __set__lastEditedPart(::GlobalNamespace::__EditAvatarViewController__AvatarEditPart value);

  /// @brief Method add_didFinishEvent addr 0x216a714 size 0xb4 virtual false final false
  inline void add_didFinishEvent(::System::Action_1<::GlobalNamespace::__EditAvatarViewController__FinishAction>* value);

  /// @brief Method remove_didFinishEvent addr 0x216a7c8 size 0xb4 virtual false final false
  inline void remove_didFinishEvent(::System::Action_1<::GlobalNamespace::__EditAvatarViewController__FinishAction>* value);

  /// @brief Method add_didRequestColorChangeEvent addr 0x216a87c size 0xb4 virtual false final false
  inline void
  add_didRequestColorChangeEvent(::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart, int32_t>* value);

  /// @brief Method remove_didRequestColorChangeEvent addr 0x216a930 size 0xb4 virtual false final false
  inline void
  remove_didRequestColorChangeEvent(::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart, int32_t>* value);

  /// @brief Method add_randomizeAllButtonWasPressedEvent addr 0x216a9e4 size 0xa0 virtual false final false
  inline void add_randomizeAllButtonWasPressedEvent(::System::Action* value);

  /// @brief Method remove_randomizeAllButtonWasPressedEvent addr 0x216aa84 size 0xa0 virtual false final false
  inline void remove_randomizeAllButtonWasPressedEvent(::System::Action* value);

  /// @brief Method add_didChangedAvatarPartEvent addr 0x216ab24 size 0xb4 virtual false final false
  inline void add_didChangedAvatarPartEvent(::System::Action_1<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart>* value);

  /// @brief Method remove_didChangedAvatarPartEvent addr 0x216abd8 size 0xb4 virtual false final false
  inline void remove_didChangedAvatarPartEvent(::System::Action_1<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart>* value);

  /// @brief Method Setup addr 0x216ac8c size 0x90 virtual false final false
  inline void Setup(bool showAsCreateView);

  /// @brief Method InitHistory addr 0x216ad1c size 0x40 virtual false final false
  inline void InitHistory();

  /// @brief Method DiscardLastEdit addr 0x216adb4 size 0x30 virtual false final false
  inline void DiscardLastEdit();

  /// @brief Method Update addr 0x216ade4 size 0x44 virtual false final false
  inline void Update();

  /// @brief Method DidActivate addr 0x216af74 size 0x85c virtual true final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method RefreshUi addr 0x216b9e0 size 0x32c virtual false final false
  inline void RefreshUi();

  /// @brief Method UpdateButtons addr 0x216ad5c size 0x58 virtual false final false
  inline void UpdateButtons();

  /// @brief Method HandleSkinColorDidChanged addr 0x216bd0c size 0x94 virtual false final false
  inline void HandleSkinColorDidChanged(int32_t value);

  /// @brief Method EyesValuePickerHasChanged addr 0x216bda0 size 0x98 virtual false final false
  inline void EyesValuePickerHasChanged(::StringW eyesId);

  /// @brief Method HandleUndoButtonWasPressed addr 0x216aec4 size 0xb0 virtual false final false
  inline void HandleUndoButtonWasPressed();

  /// @brief Method HandleRedoButtonWasPressed addr 0x216be38 size 0xa0 virtual false final false
  inline void HandleRedoButtonWasPressed();

  /// @brief Method HandleRandomizeAllButtonWasPressed addr 0x216ae28 size 0x9c virtual false final false
  inline void HandleRandomizeAllButtonWasPressed();

  /// @brief Method HandleRandomizeModelsButtonWasPressed addr 0x216bf30 size 0x78 virtual false final false
  inline void HandleRandomizeModelsButtonWasPressed();

  /// @brief Method HandleRandomizeColorsButtonWasPressed addr 0x216bfa8 size 0x70 virtual false final false
  inline void HandleRandomizeColorsButtonWasPressed();

  /// @brief Method ReportAllChangedAndUpdate addr 0x216bed8 size 0x58 virtual false final false
  inline void ReportAllChangedAndUpdate();

  /// @brief Method HandleApplyButtonWasPressed addr 0x216c018 size 0x34 virtual false final false
  inline void HandleApplyButtonWasPressed();

  /// @brief Method SaveAvatar addr 0x216c04c size 0x48 virtual false final false
  inline void SaveAvatar();

  /// @brief Method HandleCancelButtonWasPressed addr 0x216c094 size 0x44 virtual false final false
  inline void HandleCancelButtonWasPressed();

  /// @brief Method CreateTextValuePairsForAvatarPartCollection addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T>
  static inline ::ArrayW<::GlobalNamespace::__NamedIntListController__TextValuePair*, ::Array<::GlobalNamespace::__NamedIntListController__TextValuePair*>*>
  CreateTextValuePairsForAvatarPartCollection(::GlobalNamespace::AvatarPartCollection_1<T>* partCollection);

  /// @brief Method CreateColorValuePairsForAvatarPartCollection addr 0x216b8c8 size 0x118 virtual false final false
  inline ::ArrayW<::GlobalNamespace::__NamedColorListController__ColorValuePair*, ::Array<::GlobalNamespace::__NamedColorListController__ColorValuePair*>*>
  CreateColorValuePairsForAvatarPartCollection(::ArrayW<::GlobalNamespace::SkinColorSO*, ::Array<::GlobalNamespace::SkinColorSO*>*> colors);

  /// @brief Method SetupColorButton addr 0x216b7d0 size 0xf8 virtual false final false
  inline void SetupColorButton(::UnityEngine::UI::Button* button, ::System::Action_1<::UnityEngine::Color>* colorSetter, ::System::Func_1<::UnityEngine::Color>* currentColor,
                               ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart avatarEditPart, int32_t uvSegment);

  /// @brief Method SetupValuePicker addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T>
  inline void SetupValuePicker(::GlobalNamespace::AvatarPartCollection_1<T>* partCollection, ::GlobalNamespace::NamedIntListController* valuePicker, ::System::Action_1<::StringW>* setIdAction,
                               ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart avatarEditPart);

  static inline ::GlobalNamespace::EditAvatarViewController* New_ctor();

  /// @brief Method .ctor addr 0x216c0e0 size 0x64 virtual false final false
  inline void _ctor();

  /// @brief Method <DidActivate>b__44_0 addr 0x216c144 size 0x28 virtual false final false
  inline void _DidActivate_b__44_0(::UnityEngine::Color color);

  /// @brief Method <DidActivate>b__44_1 addr 0x216c16c size 0x28 virtual false final false
  inline ::UnityEngine::Color _DidActivate_b__44_1();

  /// @brief Method <DidActivate>b__44_2 addr 0x216c194 size 0x28 virtual false final false
  inline void _DidActivate_b__44_2(::UnityEngine::Color color);

  /// @brief Method <DidActivate>b__44_3 addr 0x216c1bc size 0x28 virtual false final false
  inline ::UnityEngine::Color _DidActivate_b__44_3();

  /// @brief Method <DidActivate>b__44_4 addr 0x216c1e4 size 0x28 virtual false final false
  inline void _DidActivate_b__44_4(::UnityEngine::Color color);

  /// @brief Method <DidActivate>b__44_5 addr 0x216c20c size 0x28 virtual false final false
  inline ::UnityEngine::Color _DidActivate_b__44_5();

  /// @brief Method <DidActivate>b__44_6 addr 0x216c234 size 0x28 virtual false final false
  inline void _DidActivate_b__44_6(::UnityEngine::Color color);

  /// @brief Method <DidActivate>b__44_7 addr 0x216c25c size 0x28 virtual false final false
  inline ::UnityEngine::Color _DidActivate_b__44_7();

  /// @brief Method <DidActivate>b__44_8 addr 0x216c284 size 0x28 virtual false final false
  inline void _DidActivate_b__44_8(::UnityEngine::Color color);

  /// @brief Method <DidActivate>b__44_9 addr 0x216c2ac size 0x28 virtual false final false
  inline ::UnityEngine::Color _DidActivate_b__44_9();

  /// @brief Method <DidActivate>b__44_10 addr 0x216c2d4 size 0x28 virtual false final false
  inline void _DidActivate_b__44_10(::UnityEngine::Color color);

  /// @brief Method <DidActivate>b__44_11 addr 0x216c2fc size 0x28 virtual false final false
  inline ::UnityEngine::Color _DidActivate_b__44_11();

  /// @brief Method <DidActivate>b__44_12 addr 0x216c324 size 0x24 virtual false final false
  inline void _DidActivate_b__44_12(::StringW s);

  /// @brief Method <DidActivate>b__44_13 addr 0x216c348 size 0x24 virtual false final false
  inline void _DidActivate_b__44_13(::StringW s);

  /// @brief Method <DidActivate>b__44_14 addr 0x216c36c size 0x24 virtual false final false
  inline void _DidActivate_b__44_14(::StringW s);

  // Ctor Parameters [CppParam { name: "", ty: "EditAvatarViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EditAvatarViewController(EditAvatarViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EditAvatarViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EditAvatarViewController(EditAvatarViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EditAvatarViewController();

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
  ::GlobalNamespace::AvatarPartsModel* ____avatarPartsModel;

  /// @brief Field _avatarDataModel, offset: 0x108, size: 0x8, def value: None
  ::GlobalNamespace::AvatarDataModel* ____avatarDataModel;

  /// @brief Field _playerDataModel, offset: 0x110, size: 0x8, def value: None
  ::GlobalNamespace::PlayerDataModel* ____playerDataModel;

  /// @brief Field didFinishEvent, offset: 0x118, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::__EditAvatarViewController__FinishAction>* ___didFinishEvent;

  /// @brief Field didRequestColorChangeEvent, offset: 0x120, size: 0x8, def value: None
  ::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart, int32_t>* ___didRequestColorChangeEvent;

  /// @brief Field randomizeAllButtonWasPressedEvent, offset: 0x128, size: 0x8, def value: None
  ::System::Action* ___randomizeAllButtonWasPressedEvent;

  /// @brief Field didChangedAvatarPartEvent, offset: 0x130, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart>* ___didChangedAvatarPartEvent;

  /// @brief Field _avatarEditHistory, offset: 0x138, size: 0x8, def value: None
  ::GlobalNamespace::AvatarEditHistory* ____avatarEditHistory;

  /// @brief Field _intPickerBinder, offset: 0x140, size: 0x8, def value: None
  ::HMUI::ValueChangedBinder_1<int32_t>* ____intPickerBinder;

  /// @brief Field _lastEditedPart, offset: 0x148, size: 0x4, def value: None
  ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart ____lastEditedPart;

  /// @brief Field kEditApplyButtonLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kEditApplyButtonLocalizationKey{ u"BUTTON_APPLY" };

  /// @brief Field kCreateApplyButtonLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kCreateApplyButtonLocalizationKey{ u"BUTTON_CREATE_AVATAR" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EditAvatarViewController, 0x150>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarViewController, ____skinColorValuePicker) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarViewController, ____headTopValuePicker) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarViewController, ____eyesValuePicker) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarViewController, ____handsValuePicker) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarViewController, ____clothesValuePicker) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarViewController, ____headTopPrimaryColorButtonController) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarViewController, ____headTopSecondaryColorButtonController) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarViewController, ____handsColorButtonController) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarViewController, ____clothesColorButtonControllerPrimary) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarViewController, ____clothesColorButtonControllerSecondary) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarViewController, ____clothesColorButtonControllerDetail) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarViewController, ____randomizeAllButton) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarViewController, ____undoButton) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarViewController, ____redoButton) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarViewController, ____applyButton) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarViewController, ____cancelButton) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarViewController, ____applyButtonText) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarViewController, ____eyesPreviewImage) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarViewController, ____avatarPartsModel) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarViewController, ____avatarDataModel) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarViewController, ____playerDataModel) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarViewController, ___didFinishEvent) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarViewController, ___didRequestColorChangeEvent) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarViewController, ___randomizeAllButtonWasPressedEvent) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarViewController, ___didChangedAvatarPartEvent) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarViewController, ____avatarEditHistory) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarViewController, ____intPickerBinder) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarViewController, ____lastEditedPart) == 0x148, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EditAvatarViewController__AvatarEditPart, "", "EditAvatarViewController/AvatarEditPart");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EditAvatarViewController__FinishAction, "", "EditAvatarViewController/FinishAction");
NEED_NO_BOX(::GlobalNamespace::EditAvatarViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EditAvatarViewController*, "", "EditAvatarViewController");
NEED_NO_BOX(::GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0*, "", "EditAvatarViewController/<>c__DisplayClass60_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__EditAvatarViewController____c__DisplayClass61_0_1, "", "EditAvatarViewController/<>c__DisplayClass61_0`1");
