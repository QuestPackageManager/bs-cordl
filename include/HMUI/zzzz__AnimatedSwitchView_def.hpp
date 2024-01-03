#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__AnimatedSwitchView_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimatedSwitchView)
namespace HMUI {
class ImageView;
}
namespace HMUI {
class ToggleWithCallbacks;
}
namespace HMUI {
struct __AnimatedSwitchView__AnimationState;
}
namespace HMUI {
class __AnimatedSwitchView__ColorBlock;
}
namespace HMUI {
class __AnimatedSwitchView__GetColorDelegate;
}
namespace HMUI {
class __AnimatedSwitchView____c;
}
namespace HMUI {
struct __ToggleWithCallbacks__SelectionState;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace HMUI {
struct __AnimatedSwitchView__AnimationState;
}
namespace HMUI {
class AnimatedSwitchView;
}
namespace HMUI {
class __AnimatedSwitchView__ColorBlock;
}
namespace HMUI {
class __AnimatedSwitchView__GetColorDelegate;
}
namespace HMUI {
class __AnimatedSwitchView____c;
}
// Write type traits
MARK_VAL_T(::HMUI::__AnimatedSwitchView__AnimationState);
MARK_REF_PTR_T(::HMUI::AnimatedSwitchView);
MARK_REF_PTR_T(::HMUI::__AnimatedSwitchView__ColorBlock);
MARK_REF_PTR_T(::HMUI::__AnimatedSwitchView__GetColorDelegate);
MARK_REF_PTR_T(::HMUI::__AnimatedSwitchView____c);
// Type: ::ColorBlock
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10251))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13614))
// CS Name: ::AnimatedSwitchView::ColorBlock*
class CORDL_TYPE __AnimatedSwitchView__ColorBlock : public ::System::Object {
public:
  // Declarations
  /// @brief Field knobColor, offset 0x10, size 0x10
  __declspec(property(get = __get_knobColor, put = __set_knobColor))::UnityEngine::Color knobColor;

  /// @brief Field knobColor0, offset 0x20, size 0x10
  __declspec(property(get = __get_knobColor0, put = __set_knobColor0))::UnityEngine::Color knobColor0;

  /// @brief Field knobColor1, offset 0x30, size 0x10
  __declspec(property(get = __get_knobColor1, put = __set_knobColor1))::UnityEngine::Color knobColor1;

  /// @brief Field backgroundColor, offset 0x40, size 0x10
  __declspec(property(get = __get_backgroundColor, put = __set_backgroundColor))::UnityEngine::Color backgroundColor;

  /// @brief Field backgroundColor0, offset 0x50, size 0x10
  __declspec(property(get = __get_backgroundColor0, put = __set_backgroundColor0))::UnityEngine::Color backgroundColor0;

  /// @brief Field backgroundColor1, offset 0x60, size 0x10
  __declspec(property(get = __get_backgroundColor1, put = __set_backgroundColor1))::UnityEngine::Color backgroundColor1;

  constexpr ::UnityEngine::Color& __get_knobColor();

  constexpr ::UnityEngine::Color const& __get_knobColor() const;

  constexpr void __set_knobColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get_knobColor0();

  constexpr ::UnityEngine::Color const& __get_knobColor0() const;

  constexpr void __set_knobColor0(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get_knobColor1();

  constexpr ::UnityEngine::Color const& __get_knobColor1() const;

  constexpr void __set_knobColor1(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get_backgroundColor();

  constexpr ::UnityEngine::Color const& __get_backgroundColor() const;

  constexpr void __set_backgroundColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get_backgroundColor0();

  constexpr ::UnityEngine::Color const& __get_backgroundColor0() const;

  constexpr void __set_backgroundColor0(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get_backgroundColor1();

  constexpr ::UnityEngine::Color const& __get_backgroundColor1() const;

  constexpr void __set_backgroundColor1(::UnityEngine::Color value);

  static inline ::HMUI::__AnimatedSwitchView__ColorBlock* New_ctor();

  /// @brief Method .ctor, addr 0x2130100, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__AnimatedSwitchView__ColorBlock", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AnimatedSwitchView__ColorBlock(__AnimatedSwitchView__ColorBlock&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AnimatedSwitchView__ColorBlock", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AnimatedSwitchView__ColorBlock(__AnimatedSwitchView__ColorBlock const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AnimatedSwitchView__ColorBlock();

public:
  /// @brief Field knobColor, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Color ___knobColor;

  /// @brief Field knobColor0, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Color ___knobColor0;

  /// @brief Field knobColor1, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Color ___knobColor1;

  /// @brief Field backgroundColor, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Color ___backgroundColor;

  /// @brief Field backgroundColor0, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Color ___backgroundColor0;

  /// @brief Field backgroundColor1, offset: 0x60, size: 0x10, def value: None
  ::UnityEngine::Color ___backgroundColor1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__AnimatedSwitchView__ColorBlock, 0x70>, "Size mismatch!");

static_assert(offsetof(::HMUI::__AnimatedSwitchView__ColorBlock, ___knobColor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::__AnimatedSwitchView__ColorBlock, ___knobColor0) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::__AnimatedSwitchView__ColorBlock, ___knobColor1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::__AnimatedSwitchView__ColorBlock, ___backgroundColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HMUI::__AnimatedSwitchView__ColorBlock, ___backgroundColor0) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HMUI::__AnimatedSwitchView__ColorBlock, ___backgroundColor1) == 0x60, "Offset mismatch!");

} // namespace HMUI
// Type: ::AnimationState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13615))
// CS Name: ::AnimatedSwitchView::AnimationState
struct CORDL_TYPE __AnimatedSwitchView__AnimationState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____AnimatedSwitchView__AnimationState_Unwrapped
  enum struct ____AnimatedSwitchView__AnimationState_Unwrapped : int32_t {
    __E_Idle = static_cast<int32_t>(0x0),
    __E_SwitchingOn = static_cast<int32_t>(0x1),
    __E_SwitchingOff = static_cast<int32_t>(0x2),
    __E_HighlightingOn = static_cast<int32_t>(0x4),
    __E_HighlightingOff = static_cast<int32_t>(0x8),
    __E_DisablingOn = static_cast<int32_t>(0x10),
    __E_DisablingOff = static_cast<int32_t>(0x20),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____AnimatedSwitchView__AnimationState_Unwrapped() const noexcept {
    return static_cast<____AnimatedSwitchView__AnimationState_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __AnimatedSwitchView__AnimationState(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AnimatedSwitchView__AnimationState();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Idle value: static_cast<int32_t>(0x0)
  static ::HMUI::__AnimatedSwitchView__AnimationState const Idle;

  /// @brief Field SwitchingOn value: static_cast<int32_t>(0x1)
  static ::HMUI::__AnimatedSwitchView__AnimationState const SwitchingOn;

  /// @brief Field SwitchingOff value: static_cast<int32_t>(0x2)
  static ::HMUI::__AnimatedSwitchView__AnimationState const SwitchingOff;

  /// @brief Field HighlightingOn value: static_cast<int32_t>(0x4)
  static ::HMUI::__AnimatedSwitchView__AnimationState const HighlightingOn;

  /// @brief Field HighlightingOff value: static_cast<int32_t>(0x8)
  static ::HMUI::__AnimatedSwitchView__AnimationState const HighlightingOff;

  /// @brief Field DisablingOn value: static_cast<int32_t>(0x10)
  static ::HMUI::__AnimatedSwitchView__AnimationState const DisablingOn;

  /// @brief Field DisablingOff value: static_cast<int32_t>(0x20)
  static ::HMUI::__AnimatedSwitchView__AnimationState const DisablingOff;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__AnimatedSwitchView__AnimationState, 0x4>, "Size mismatch!");

static_assert(offsetof(::HMUI::__AnimatedSwitchView__AnimationState, value__) == 0x0, "Offset mismatch!");

} // namespace HMUI
// Type: ::GetColorDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13616))
// CS Name: ::AnimatedSwitchView::GetColorDelegate*
class CORDL_TYPE __AnimatedSwitchView__GetColorDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::HMUI::__AnimatedSwitchView__GetColorDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x212fd40, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x2130118, size 0x14, virtual true, abstract: false, final false
  inline ::UnityEngine::Color Invoke(::HMUI::__AnimatedSwitchView__ColorBlock* colorBlock);

  /// @brief Method BeginInvoke, addr 0x213012c, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::HMUI::__AnimatedSwitchView__ColorBlock* colorBlock, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x213014c, size 0x2c, virtual true, abstract: false, final false
  inline ::UnityEngine::Color EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__AnimatedSwitchView__GetColorDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AnimatedSwitchView__GetColorDelegate(__AnimatedSwitchView__GetColorDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AnimatedSwitchView__GetColorDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AnimatedSwitchView__GetColorDelegate(__AnimatedSwitchView__GetColorDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AnimatedSwitchView__GetColorDelegate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__AnimatedSwitchView__GetColorDelegate, 0x80>, "Size mismatch!");

} // namespace HMUI
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13617))
// CS Name: ::AnimatedSwitchView::<>c*
class CORDL_TYPE __AnimatedSwitchView____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::HMUI::__AnimatedSwitchView____c* __9;

  /// @brief Field <>9__31_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__31_0, put = setStaticF___9__31_0))::HMUI::__AnimatedSwitchView__GetColorDelegate* __9__31_0;

  /// @brief Field <>9__31_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__31_1, put = setStaticF___9__31_1))::HMUI::__AnimatedSwitchView__GetColorDelegate* __9__31_1;

  /// @brief Field <>9__31_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__31_2, put = setStaticF___9__31_2))::HMUI::__AnimatedSwitchView__GetColorDelegate* __9__31_2;

  /// @brief Field <>9__31_3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__31_3, put = setStaticF___9__31_3))::HMUI::__AnimatedSwitchView__GetColorDelegate* __9__31_3;

  /// @brief Field <>9__31_4, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__31_4, put = setStaticF___9__31_4))::HMUI::__AnimatedSwitchView__GetColorDelegate* __9__31_4;

  /// @brief Field <>9__31_5, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__31_5, put = setStaticF___9__31_5))::HMUI::__AnimatedSwitchView__GetColorDelegate* __9__31_5;

  static inline void setStaticF___9(::HMUI::__AnimatedSwitchView____c* value);

  static inline ::HMUI::__AnimatedSwitchView____c* getStaticF___9();

  static inline void setStaticF___9__31_0(::HMUI::__AnimatedSwitchView__GetColorDelegate* value);

  static inline ::HMUI::__AnimatedSwitchView__GetColorDelegate* getStaticF___9__31_0();

  static inline void setStaticF___9__31_1(::HMUI::__AnimatedSwitchView__GetColorDelegate* value);

  static inline ::HMUI::__AnimatedSwitchView__GetColorDelegate* getStaticF___9__31_1();

  static inline void setStaticF___9__31_2(::HMUI::__AnimatedSwitchView__GetColorDelegate* value);

  static inline ::HMUI::__AnimatedSwitchView__GetColorDelegate* getStaticF___9__31_2();

  static inline void setStaticF___9__31_3(::HMUI::__AnimatedSwitchView__GetColorDelegate* value);

  static inline ::HMUI::__AnimatedSwitchView__GetColorDelegate* getStaticF___9__31_3();

  static inline void setStaticF___9__31_4(::HMUI::__AnimatedSwitchView__GetColorDelegate* value);

  static inline ::HMUI::__AnimatedSwitchView__GetColorDelegate* getStaticF___9__31_4();

  static inline void setStaticF___9__31_5(::HMUI::__AnimatedSwitchView__GetColorDelegate* value);

  static inline ::HMUI::__AnimatedSwitchView__GetColorDelegate* getStaticF___9__31_5();

  static inline ::HMUI::__AnimatedSwitchView____c* New_ctor();

  /// @brief Method .ctor, addr 0x21301dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <LerpColors>b__31_0, addr 0x21301e4, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color _LerpColors_b__31_0(::HMUI::__AnimatedSwitchView__ColorBlock* colorBlock);

  /// @brief Method <LerpColors>b__31_1, addr 0x2130200, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color _LerpColors_b__31_1(::HMUI::__AnimatedSwitchView__ColorBlock* colorBlock);

  /// @brief Method <LerpColors>b__31_2, addr 0x213021c, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color _LerpColors_b__31_2(::HMUI::__AnimatedSwitchView__ColorBlock* colorBlock);

  /// @brief Method <LerpColors>b__31_3, addr 0x2130238, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color _LerpColors_b__31_3(::HMUI::__AnimatedSwitchView__ColorBlock* colorBlock);

  /// @brief Method <LerpColors>b__31_4, addr 0x2130254, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color _LerpColors_b__31_4(::HMUI::__AnimatedSwitchView__ColorBlock* colorBlock);

  /// @brief Method <LerpColors>b__31_5, addr 0x2130270, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color _LerpColors_b__31_5(::HMUI::__AnimatedSwitchView__ColorBlock* colorBlock);

  // Ctor Parameters [CppParam { name: "", ty: "__AnimatedSwitchView____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AnimatedSwitchView____c(__AnimatedSwitchView____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AnimatedSwitchView____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AnimatedSwitchView____c(__AnimatedSwitchView____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AnimatedSwitchView____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__AnimatedSwitchView____c, 0x10>, "Size mismatch!");

} // namespace HMUI
// Type: HMUI::AnimatedSwitchView
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13615)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13618))
// CS Name: ::HMUI::AnimatedSwitchView*
class CORDL_TYPE AnimatedSwitchView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c = ::HMUI::__AnimatedSwitchView____c;

  using GetColorDelegate = ::HMUI::__AnimatedSwitchView__GetColorDelegate;

  using AnimationState = ::HMUI::__AnimatedSwitchView__AnimationState;

  using ColorBlock = ::HMUI::__AnimatedSwitchView__ColorBlock;

  /// @brief Field _knobRectTransform, offset 0x18, size 0x8
  __declspec(property(get = __get__knobRectTransform, put = __set__knobRectTransform))::UnityEngine::RectTransform* _knobRectTransform;

  /// @brief Field _backgroundImage, offset 0x20, size 0x8
  __declspec(property(get = __get__backgroundImage, put = __set__backgroundImage))::HMUI::ImageView* _backgroundImage;

  /// @brief Field _knobImage, offset 0x28, size 0x8
  __declspec(property(get = __get__knobImage, put = __set__knobImage))::HMUI::ImageView* _knobImage;

  /// @brief Field _onText, offset 0x30, size 0x8
  __declspec(property(get = __get__onText, put = __set__onText))::TMPro::TextMeshProUGUI* _onText;

  /// @brief Field _offText, offset 0x38, size 0x8
  __declspec(property(get = __get__offText, put = __set__offText))::TMPro::TextMeshProUGUI* _offText;

  /// @brief Field _switchAnimationSmooth, offset 0x40, size 0x4
  __declspec(property(get = __get__switchAnimationSmooth, put = __set__switchAnimationSmooth)) float_t _switchAnimationSmooth;

  /// @brief Field _disableAnimationDuration, offset 0x44, size 0x4
  __declspec(property(get = __get__disableAnimationDuration, put = __set__disableAnimationDuration)) float_t _disableAnimationDuration;

  /// @brief Field _highlightAnimationDuration, offset 0x48, size 0x4
  __declspec(property(get = __get__highlightAnimationDuration, put = __set__highlightAnimationDuration)) float_t _highlightAnimationDuration;

  /// @brief Field _horizontalStretchAmount, offset 0x4c, size 0x4
  __declspec(property(get = __get__horizontalStretchAmount, put = __set__horizontalStretchAmount)) float_t _horizontalStretchAmount;

  /// @brief Field _verticalStretchAmount, offset 0x50, size 0x4
  __declspec(property(get = __get__verticalStretchAmount, put = __set__verticalStretchAmount)) float_t _verticalStretchAmount;

  /// @brief Field _onColors, offset 0x58, size 0x8
  __declspec(property(get = __get__onColors, put = __set__onColors))::HMUI::__AnimatedSwitchView__ColorBlock* _onColors;

  /// @brief Field _offColors, offset 0x60, size 0x8
  __declspec(property(get = __get__offColors, put = __set__offColors))::HMUI::__AnimatedSwitchView__ColorBlock* _offColors;

  /// @brief Field _onHighlightedColors, offset 0x68, size 0x8
  __declspec(property(get = __get__onHighlightedColors, put = __set__onHighlightedColors))::HMUI::__AnimatedSwitchView__ColorBlock* _onHighlightedColors;

  /// @brief Field _offHighlightedColors, offset 0x70, size 0x8
  __declspec(property(get = __get__offHighlightedColors, put = __set__offHighlightedColors))::HMUI::__AnimatedSwitchView__ColorBlock* _offHighlightedColors;

  /// @brief Field _disabledColors, offset 0x78, size 0x8
  __declspec(property(get = __get__disabledColors, put = __set__disabledColors))::HMUI::__AnimatedSwitchView__ColorBlock* _disabledColors;

  /// @brief Field _animationState, offset 0x80, size 0x4
  __declspec(property(get = __get__animationState, put = __set__animationState))::HMUI::__AnimatedSwitchView__AnimationState _animationState;

  /// @brief Field _switchAmount, offset 0x84, size 0x4
  __declspec(property(get = __get__switchAmount, put = __set__switchAmount)) float_t _switchAmount;

  /// @brief Field _highlightAmount, offset 0x88, size 0x4
  __declspec(property(get = __get__highlightAmount, put = __set__highlightAmount)) float_t _highlightAmount;

  /// @brief Field _disabledAmount, offset 0x8c, size 0x4
  __declspec(property(get = __get__disabledAmount, put = __set__disabledAmount)) float_t _disabledAmount;

  /// @brief Field _originalKnobWidth, offset 0x90, size 0x4
  __declspec(property(get = __get__originalKnobWidth, put = __set__originalKnobWidth)) float_t _originalKnobWidth;

  /// @brief Field _originalKnobHeight, offset 0x94, size 0x4
  __declspec(property(get = __get__originalKnobHeight, put = __set__originalKnobHeight)) float_t _originalKnobHeight;

  /// @brief Field _toggle, offset 0x98, size 0x8
  __declspec(property(get = __get__toggle, put = __set__toggle))::HMUI::ToggleWithCallbacks* _toggle;

  constexpr ::UnityEngine::RectTransform*& __get__knobRectTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get__knobRectTransform() const;

  constexpr void __set__knobRectTransform(::UnityEngine::RectTransform* value);

  constexpr ::HMUI::ImageView*& __get__backgroundImage();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ImageView*> const& __get__backgroundImage() const;

  constexpr void __set__backgroundImage(::HMUI::ImageView* value);

  constexpr ::HMUI::ImageView*& __get__knobImage();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ImageView*> const& __get__knobImage() const;

  constexpr void __set__knobImage(::HMUI::ImageView* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__onText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__onText() const;

  constexpr void __set__onText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__offText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__offText() const;

  constexpr void __set__offText(::TMPro::TextMeshProUGUI* value);

  constexpr float_t& __get__switchAnimationSmooth();

  constexpr float_t const& __get__switchAnimationSmooth() const;

  constexpr void __set__switchAnimationSmooth(float_t value);

  constexpr float_t& __get__disableAnimationDuration();

  constexpr float_t const& __get__disableAnimationDuration() const;

  constexpr void __set__disableAnimationDuration(float_t value);

  constexpr float_t& __get__highlightAnimationDuration();

  constexpr float_t const& __get__highlightAnimationDuration() const;

  constexpr void __set__highlightAnimationDuration(float_t value);

  constexpr float_t& __get__horizontalStretchAmount();

  constexpr float_t const& __get__horizontalStretchAmount() const;

  constexpr void __set__horizontalStretchAmount(float_t value);

  constexpr float_t& __get__verticalStretchAmount();

  constexpr float_t const& __get__verticalStretchAmount() const;

  constexpr void __set__verticalStretchAmount(float_t value);

  constexpr ::HMUI::__AnimatedSwitchView__ColorBlock*& __get__onColors();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::__AnimatedSwitchView__ColorBlock*> const& __get__onColors() const;

  constexpr void __set__onColors(::HMUI::__AnimatedSwitchView__ColorBlock* value);

  constexpr ::HMUI::__AnimatedSwitchView__ColorBlock*& __get__offColors();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::__AnimatedSwitchView__ColorBlock*> const& __get__offColors() const;

  constexpr void __set__offColors(::HMUI::__AnimatedSwitchView__ColorBlock* value);

  constexpr ::HMUI::__AnimatedSwitchView__ColorBlock*& __get__onHighlightedColors();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::__AnimatedSwitchView__ColorBlock*> const& __get__onHighlightedColors() const;

  constexpr void __set__onHighlightedColors(::HMUI::__AnimatedSwitchView__ColorBlock* value);

  constexpr ::HMUI::__AnimatedSwitchView__ColorBlock*& __get__offHighlightedColors();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::__AnimatedSwitchView__ColorBlock*> const& __get__offHighlightedColors() const;

  constexpr void __set__offHighlightedColors(::HMUI::__AnimatedSwitchView__ColorBlock* value);

  constexpr ::HMUI::__AnimatedSwitchView__ColorBlock*& __get__disabledColors();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::__AnimatedSwitchView__ColorBlock*> const& __get__disabledColors() const;

  constexpr void __set__disabledColors(::HMUI::__AnimatedSwitchView__ColorBlock* value);

  constexpr ::HMUI::__AnimatedSwitchView__AnimationState& __get__animationState();

  constexpr ::HMUI::__AnimatedSwitchView__AnimationState const& __get__animationState() const;

  constexpr void __set__animationState(::HMUI::__AnimatedSwitchView__AnimationState value);

  constexpr float_t& __get__switchAmount();

  constexpr float_t const& __get__switchAmount() const;

  constexpr void __set__switchAmount(float_t value);

  constexpr float_t& __get__highlightAmount();

  constexpr float_t const& __get__highlightAmount() const;

  constexpr void __set__highlightAmount(float_t value);

  constexpr float_t& __get__disabledAmount();

  constexpr float_t const& __get__disabledAmount() const;

  constexpr void __set__disabledAmount(float_t value);

  constexpr float_t& __get__originalKnobWidth();

  constexpr float_t const& __get__originalKnobWidth() const;

  constexpr void __set__originalKnobWidth(float_t value);

  constexpr float_t& __get__originalKnobHeight();

  constexpr float_t const& __get__originalKnobHeight() const;

  constexpr void __set__originalKnobHeight(float_t value);

  constexpr ::HMUI::ToggleWithCallbacks*& __get__toggle();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ToggleWithCallbacks*> const& __get__toggle() const;

  constexpr void __set__toggle(::HMUI::ToggleWithCallbacks* value);

  /// @brief Method Awake, addr 0x212f190, size 0x50, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Start, addr 0x212f1e0, size 0x1a0, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x212f8d8, size 0x150, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Update, addr 0x212fa28, size 0x298, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method LerpPosition, addr 0x212f874, size 0x64, virtual false, abstract: false, final false
  inline void LerpPosition(float_t switchAmount);

  /// @brief Method LerpStretch, addr 0x212fcc0, size 0x80, virtual false, abstract: false, final false
  inline void LerpStretch(float_t switchAmount);

  /// @brief Method LerpColors, addr 0x212f380, size 0x4f4, virtual false, abstract: false, final false
  inline void LerpColors(float_t switchAmount, float_t highlightAmount, float_t disabledAmount);

  /// @brief Method LerpColor, addr 0x212fe6c, size 0x1ac, virtual false, abstract: false, final false
  inline ::UnityEngine::Color LerpColor(float_t switchAmount, float_t highlightAmount, float_t disabledAmount, ::HMUI::__AnimatedSwitchView__GetColorDelegate* getColorDelegate);

  /// @brief Method HandleOnValueChanged, addr 0x2130058, size 0x28, virtual false, abstract: false, final false
  inline void HandleOnValueChanged(bool value);

  /// @brief Method HandleStateDidChange, addr 0x2130080, size 0x60, virtual false, abstract: false, final false
  inline void HandleStateDidChange(::HMUI::__ToggleWithCallbacks__SelectionState selectionState);

  static inline ::HMUI::AnimatedSwitchView* New_ctor();

  /// @brief Method .ctor, addr 0x21300e0, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AnimatedSwitchView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimatedSwitchView(AnimatedSwitchView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimatedSwitchView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimatedSwitchView(AnimatedSwitchView const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimatedSwitchView();

public:
  /// @brief Field _knobRectTransform, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ____knobRectTransform;

  /// @brief Field _backgroundImage, offset: 0x20, size: 0x8, def value: None
  ::HMUI::ImageView* ____backgroundImage;

  /// @brief Field _knobImage, offset: 0x28, size: 0x8, def value: None
  ::HMUI::ImageView* ____knobImage;

  /// @brief Field _onText, offset: 0x30, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____onText;

  /// @brief Field _offText, offset: 0x38, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____offText;

  /// @brief Field _switchAnimationSmooth, offset: 0x40, size: 0x4, def value: None
  float_t ____switchAnimationSmooth;

  /// @brief Field _disableAnimationDuration, offset: 0x44, size: 0x4, def value: None
  float_t ____disableAnimationDuration;

  /// @brief Field _highlightAnimationDuration, offset: 0x48, size: 0x4, def value: None
  float_t ____highlightAnimationDuration;

  /// @brief Field _horizontalStretchAmount, offset: 0x4c, size: 0x4, def value: None
  float_t ____horizontalStretchAmount;

  /// @brief Field _verticalStretchAmount, offset: 0x50, size: 0x4, def value: None
  float_t ____verticalStretchAmount;

  /// @brief Field _onColors, offset: 0x58, size: 0x8, def value: None
  ::HMUI::__AnimatedSwitchView__ColorBlock* ____onColors;

  /// @brief Field _offColors, offset: 0x60, size: 0x8, def value: None
  ::HMUI::__AnimatedSwitchView__ColorBlock* ____offColors;

  /// @brief Field _onHighlightedColors, offset: 0x68, size: 0x8, def value: None
  ::HMUI::__AnimatedSwitchView__ColorBlock* ____onHighlightedColors;

  /// @brief Field _offHighlightedColors, offset: 0x70, size: 0x8, def value: None
  ::HMUI::__AnimatedSwitchView__ColorBlock* ____offHighlightedColors;

  /// @brief Field _disabledColors, offset: 0x78, size: 0x8, def value: None
  ::HMUI::__AnimatedSwitchView__ColorBlock* ____disabledColors;

  /// @brief Field _animationState, offset: 0x80, size: 0x4, def value: None
  ::HMUI::__AnimatedSwitchView__AnimationState ____animationState;

  /// @brief Field _switchAmount, offset: 0x84, size: 0x4, def value: None
  float_t ____switchAmount;

  /// @brief Field _highlightAmount, offset: 0x88, size: 0x4, def value: None
  float_t ____highlightAmount;

  /// @brief Field _disabledAmount, offset: 0x8c, size: 0x4, def value: None
  float_t ____disabledAmount;

  /// @brief Field _originalKnobWidth, offset: 0x90, size: 0x4, def value: None
  float_t ____originalKnobWidth;

  /// @brief Field _originalKnobHeight, offset: 0x94, size: 0x4, def value: None
  float_t ____originalKnobHeight;

  /// @brief Field _toggle, offset: 0x98, size: 0x8, def value: None
  ::HMUI::ToggleWithCallbacks* ____toggle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::AnimatedSwitchView, 0xa0>, "Size mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView, ____knobRectTransform) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView, ____backgroundImage) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView, ____knobImage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView, ____onText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView, ____offText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView, ____switchAnimationSmooth) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView, ____disableAnimationDuration) == 0x44, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView, ____highlightAnimationDuration) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView, ____horizontalStretchAmount) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView, ____verticalStretchAmount) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView, ____onColors) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView, ____offColors) == 0x60, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView, ____onHighlightedColors) == 0x68, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView, ____offHighlightedColors) == 0x70, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView, ____disabledColors) == 0x78, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView, ____animationState) == 0x80, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView, ____switchAmount) == 0x84, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView, ____highlightAmount) == 0x88, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView, ____disabledAmount) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView, ____originalKnobWidth) == 0x90, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView, ____originalKnobHeight) == 0x94, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView, ____toggle) == 0x98, "Offset mismatch!");

} // namespace HMUI
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__AnimatedSwitchView__AnimationState, "HMUI", "AnimatedSwitchView/AnimationState");
NEED_NO_BOX(::HMUI::AnimatedSwitchView);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::AnimatedSwitchView*, "HMUI", "AnimatedSwitchView");
NEED_NO_BOX(::HMUI::__AnimatedSwitchView__ColorBlock);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__AnimatedSwitchView__ColorBlock*, "HMUI", "AnimatedSwitchView/ColorBlock");
NEED_NO_BOX(::HMUI::__AnimatedSwitchView__GetColorDelegate);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__AnimatedSwitchView__GetColorDelegate*, "HMUI", "AnimatedSwitchView/GetColorDelegate");
NEED_NO_BOX(::HMUI::__AnimatedSwitchView____c);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__AnimatedSwitchView____c*, "HMUI", "AnimatedSwitchView/<>c");
