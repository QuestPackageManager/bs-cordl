#pragma once
// IWYU pragma private; include "HMUI/AnimatedSwitchView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimatedSwitchView)
namespace HMUI {
struct AnimatedSwitchView_AnimationState;
}
namespace HMUI {
class AnimatedSwitchView_ColorBlock;
}
namespace HMUI {
class AnimatedSwitchView_GetColorDelegate;
}
namespace HMUI {
class AnimatedSwitchView___c;
}
namespace HMUI {
class ImageView;
}
namespace HMUI {
struct ToggleWithCallbacks_SelectionState;
}
namespace HMUI {
class ToggleWithCallbacks;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
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
struct AnimatedSwitchView_AnimationState;
}
namespace HMUI {
class AnimatedSwitchView;
}
namespace HMUI {
class AnimatedSwitchView_ColorBlock;
}
namespace HMUI {
class AnimatedSwitchView_GetColorDelegate;
}
namespace HMUI {
class AnimatedSwitchView___c;
}
// Write type traits
MARK_VAL_T(::HMUI::AnimatedSwitchView_AnimationState);
MARK_REF_PTR_T(::HMUI::AnimatedSwitchView);
MARK_REF_PTR_T(::HMUI::AnimatedSwitchView_ColorBlock);
MARK_REF_PTR_T(::HMUI::AnimatedSwitchView_GetColorDelegate);
MARK_REF_PTR_T(::HMUI::AnimatedSwitchView___c);
// Dependencies System.Object, UnityEngine.Color
namespace HMUI {
// Is value type: false
// CS Name: HMUI.AnimatedSwitchView/ColorBlock
class CORDL_TYPE AnimatedSwitchView_ColorBlock : public ::System::Object {
public:
  // Declarations
  /// @brief Field backgroundColor, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get_backgroundColor, put = __cordl_internal_set_backgroundColor)) ::UnityEngine::Color backgroundColor;

  /// @brief Field backgroundColor0, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get_backgroundColor0, put = __cordl_internal_set_backgroundColor0)) ::UnityEngine::Color backgroundColor0;

  /// @brief Field backgroundColor1, offset 0x60, size 0x10
  __declspec(property(get = __cordl_internal_get_backgroundColor1, put = __cordl_internal_set_backgroundColor1)) ::UnityEngine::Color backgroundColor1;

  /// @brief Field knobColor, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_knobColor, put = __cordl_internal_set_knobColor)) ::UnityEngine::Color knobColor;

  /// @brief Field knobColor0, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_knobColor0, put = __cordl_internal_set_knobColor0)) ::UnityEngine::Color knobColor0;

  /// @brief Field knobColor1, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get_knobColor1, put = __cordl_internal_set_knobColor1)) ::UnityEngine::Color knobColor1;

  static inline ::HMUI::AnimatedSwitchView_ColorBlock* New_ctor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_backgroundColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_backgroundColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_backgroundColor0() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_backgroundColor0();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_backgroundColor1() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_backgroundColor1();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_knobColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_knobColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_knobColor0() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_knobColor0();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_knobColor1() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_knobColor1();

  constexpr void __cordl_internal_set_backgroundColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_backgroundColor0(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_backgroundColor1(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_knobColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_knobColor0(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_knobColor1(::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0x228e47c, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimatedSwitchView_ColorBlock();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnimatedSwitchView_ColorBlock", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimatedSwitchView_ColorBlock(AnimatedSwitchView_ColorBlock&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimatedSwitchView_ColorBlock", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimatedSwitchView_ColorBlock(AnimatedSwitchView_ColorBlock const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16838 };

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
static_assert(offsetof(::HMUI::AnimatedSwitchView_ColorBlock, ___knobColor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView_ColorBlock, ___knobColor0) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView_ColorBlock, ___knobColor1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView_ColorBlock, ___backgroundColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView_ColorBlock, ___backgroundColor0) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView_ColorBlock, ___backgroundColor1) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::AnimatedSwitchView_ColorBlock, 0x70>, "Size mismatch!");

} // namespace HMUI
// Dependencies
namespace HMUI {
// Is value type: true
// CS Name: HMUI.AnimatedSwitchView/AnimationState
struct CORDL_TYPE AnimatedSwitchView_AnimationState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AnimatedSwitchView_AnimationState_Unwrapped
  enum struct __AnimatedSwitchView_AnimationState_Unwrapped : int32_t {
    __E_Idle = static_cast<int32_t>(0x0),
    __E_SwitchingOn = static_cast<int32_t>(0x1),
    __E_SwitchingOff = static_cast<int32_t>(0x2),
    __E_HighlightingOn = static_cast<int32_t>(0x4),
    __E_HighlightingOff = static_cast<int32_t>(0x8),
    __E_DisablingOn = static_cast<int32_t>(0x10),
    __E_DisablingOff = static_cast<int32_t>(0x20),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AnimatedSwitchView_AnimationState_Unwrapped() const noexcept {
    return static_cast<__AnimatedSwitchView_AnimationState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimatedSwitchView_AnimationState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AnimatedSwitchView_AnimationState(int32_t value__) noexcept;

  /// @brief Field DisablingOff value: I32(32)
  static ::HMUI::AnimatedSwitchView_AnimationState const DisablingOff;

  /// @brief Field DisablingOn value: I32(16)
  static ::HMUI::AnimatedSwitchView_AnimationState const DisablingOn;

  /// @brief Field HighlightingOff value: I32(8)
  static ::HMUI::AnimatedSwitchView_AnimationState const HighlightingOff;

  /// @brief Field HighlightingOn value: I32(4)
  static ::HMUI::AnimatedSwitchView_AnimationState const HighlightingOn;

  /// @brief Field Idle value: I32(0)
  static ::HMUI::AnimatedSwitchView_AnimationState const Idle;

  /// @brief Field SwitchingOff value: I32(2)
  static ::HMUI::AnimatedSwitchView_AnimationState const SwitchingOff;

  /// @brief Field SwitchingOn value: I32(1)
  static ::HMUI::AnimatedSwitchView_AnimationState const SwitchingOn;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16839 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HMUI::AnimatedSwitchView_AnimationState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::AnimatedSwitchView_AnimationState, 0x4>, "Size mismatch!");

} // namespace HMUI
// Dependencies System.MulticastDelegate
namespace HMUI {
// Is value type: false
// CS Name: HMUI.AnimatedSwitchView/GetColorDelegate
class CORDL_TYPE AnimatedSwitchView_GetColorDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x228e4a8, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::HMUI::AnimatedSwitchView_ColorBlock* colorBlock, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x228e4c8, size 0x2c, virtual true, abstract: false, final false
  inline ::UnityEngine::Color EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x228e494, size 0x14, virtual true, abstract: false, final false
  inline ::UnityEngine::Color Invoke(::HMUI::AnimatedSwitchView_ColorBlock* colorBlock);

  static inline ::HMUI::AnimatedSwitchView_GetColorDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x228e13c, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimatedSwitchView_GetColorDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnimatedSwitchView_GetColorDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimatedSwitchView_GetColorDelegate(AnimatedSwitchView_GetColorDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimatedSwitchView_GetColorDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimatedSwitchView_GetColorDelegate(AnimatedSwitchView_GetColorDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16840 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::AnimatedSwitchView_GetColorDelegate, 0x80>, "Size mismatch!");

} // namespace HMUI
// Dependencies System.Object
namespace HMUI {
// Is value type: false
// CS Name: HMUI.AnimatedSwitchView/<>c
class CORDL_TYPE AnimatedSwitchView___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::HMUI::AnimatedSwitchView___c* __9;

  /// @brief Field <>9__31_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__31_0, put = setStaticF___9__31_0)) ::HMUI::AnimatedSwitchView_GetColorDelegate* __9__31_0;

  /// @brief Field <>9__31_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__31_1, put = setStaticF___9__31_1)) ::HMUI::AnimatedSwitchView_GetColorDelegate* __9__31_1;

  /// @brief Field <>9__31_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__31_2, put = setStaticF___9__31_2)) ::HMUI::AnimatedSwitchView_GetColorDelegate* __9__31_2;

  /// @brief Field <>9__31_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__31_3, put = setStaticF___9__31_3)) ::HMUI::AnimatedSwitchView_GetColorDelegate* __9__31_3;

  /// @brief Field <>9__31_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__31_4, put = setStaticF___9__31_4)) ::HMUI::AnimatedSwitchView_GetColorDelegate* __9__31_4;

  /// @brief Field <>9__31_5, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__31_5, put = setStaticF___9__31_5)) ::HMUI::AnimatedSwitchView_GetColorDelegate* __9__31_5;

  static inline ::HMUI::AnimatedSwitchView___c* New_ctor();

  /// @brief Method <LerpColors>b__31_0, addr 0x228e558, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color _LerpColors_b__31_0(::HMUI::AnimatedSwitchView_ColorBlock* colorBlock);

  /// @brief Method <LerpColors>b__31_1, addr 0x228e574, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color _LerpColors_b__31_1(::HMUI::AnimatedSwitchView_ColorBlock* colorBlock);

  /// @brief Method <LerpColors>b__31_2, addr 0x228e590, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color _LerpColors_b__31_2(::HMUI::AnimatedSwitchView_ColorBlock* colorBlock);

  /// @brief Method <LerpColors>b__31_3, addr 0x228e5ac, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color _LerpColors_b__31_3(::HMUI::AnimatedSwitchView_ColorBlock* colorBlock);

  /// @brief Method <LerpColors>b__31_4, addr 0x228e5c8, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color _LerpColors_b__31_4(::HMUI::AnimatedSwitchView_ColorBlock* colorBlock);

  /// @brief Method <LerpColors>b__31_5, addr 0x228e5e4, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color _LerpColors_b__31_5(::HMUI::AnimatedSwitchView_ColorBlock* colorBlock);

  /// @brief Method .ctor, addr 0x228e550, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::HMUI::AnimatedSwitchView___c* getStaticF___9();

  static inline ::HMUI::AnimatedSwitchView_GetColorDelegate* getStaticF___9__31_0();

  static inline ::HMUI::AnimatedSwitchView_GetColorDelegate* getStaticF___9__31_1();

  static inline ::HMUI::AnimatedSwitchView_GetColorDelegate* getStaticF___9__31_2();

  static inline ::HMUI::AnimatedSwitchView_GetColorDelegate* getStaticF___9__31_3();

  static inline ::HMUI::AnimatedSwitchView_GetColorDelegate* getStaticF___9__31_4();

  static inline ::HMUI::AnimatedSwitchView_GetColorDelegate* getStaticF___9__31_5();

  static inline void setStaticF___9(::HMUI::AnimatedSwitchView___c* value);

  static inline void setStaticF___9__31_0(::HMUI::AnimatedSwitchView_GetColorDelegate* value);

  static inline void setStaticF___9__31_1(::HMUI::AnimatedSwitchView_GetColorDelegate* value);

  static inline void setStaticF___9__31_2(::HMUI::AnimatedSwitchView_GetColorDelegate* value);

  static inline void setStaticF___9__31_3(::HMUI::AnimatedSwitchView_GetColorDelegate* value);

  static inline void setStaticF___9__31_4(::HMUI::AnimatedSwitchView_GetColorDelegate* value);

  static inline void setStaticF___9__31_5(::HMUI::AnimatedSwitchView_GetColorDelegate* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimatedSwitchView___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnimatedSwitchView___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimatedSwitchView___c(AnimatedSwitchView___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimatedSwitchView___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimatedSwitchView___c(AnimatedSwitchView___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16841 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::AnimatedSwitchView___c, 0x10>, "Size mismatch!");

} // namespace HMUI
// Dependencies HMUI.AnimatedSwitchView::AnimationState, UnityEngine.MonoBehaviour
namespace HMUI {
// Is value type: false
// CS Name: HMUI.AnimatedSwitchView
class CORDL_TYPE AnimatedSwitchView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using AnimationState = ::HMUI::AnimatedSwitchView_AnimationState;

  using ColorBlock = ::HMUI::AnimatedSwitchView_ColorBlock;

  using GetColorDelegate = ::HMUI::AnimatedSwitchView_GetColorDelegate;

  using __c = ::HMUI::AnimatedSwitchView___c;

  /// @brief Field _animationState, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get__animationState, put = __cordl_internal_set__animationState)) ::HMUI::AnimatedSwitchView_AnimationState _animationState;

  /// @brief Field _backgroundImage, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__backgroundImage, put = __cordl_internal_set__backgroundImage)) ::UnityW<::HMUI::ImageView> _backgroundImage;

  /// @brief Field _disableAnimationDuration, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__disableAnimationDuration, put = __cordl_internal_set__disableAnimationDuration)) float_t _disableAnimationDuration;

  /// @brief Field _disabledAmount, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get__disabledAmount, put = __cordl_internal_set__disabledAmount)) float_t _disabledAmount;

  /// @brief Field _disabledColors, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__disabledColors, put = __cordl_internal_set__disabledColors)) ::HMUI::AnimatedSwitchView_ColorBlock* _disabledColors;

  /// @brief Field _highlightAmount, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get__highlightAmount, put = __cordl_internal_set__highlightAmount)) float_t _highlightAmount;

  /// @brief Field _highlightAnimationDuration, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__highlightAnimationDuration, put = __cordl_internal_set__highlightAnimationDuration)) float_t _highlightAnimationDuration;

  /// @brief Field _horizontalStretchAmount, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__horizontalStretchAmount, put = __cordl_internal_set__horizontalStretchAmount)) float_t _horizontalStretchAmount;

  /// @brief Field _knobImage, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__knobImage, put = __cordl_internal_set__knobImage)) ::UnityW<::HMUI::ImageView> _knobImage;

  /// @brief Field _knobRectTransform, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__knobRectTransform, put = __cordl_internal_set__knobRectTransform)) ::UnityW<::UnityEngine::RectTransform> _knobRectTransform;

  /// @brief Field _offColors, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__offColors, put = __cordl_internal_set__offColors)) ::HMUI::AnimatedSwitchView_ColorBlock* _offColors;

  /// @brief Field _offHighlightedColors, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__offHighlightedColors, put = __cordl_internal_set__offHighlightedColors)) ::HMUI::AnimatedSwitchView_ColorBlock* _offHighlightedColors;

  /// @brief Field _offText, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__offText, put = __cordl_internal_set__offText)) ::UnityW<::TMPro::TextMeshProUGUI> _offText;

  /// @brief Field _onColors, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__onColors, put = __cordl_internal_set__onColors)) ::HMUI::AnimatedSwitchView_ColorBlock* _onColors;

  /// @brief Field _onHighlightedColors, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__onHighlightedColors, put = __cordl_internal_set__onHighlightedColors)) ::HMUI::AnimatedSwitchView_ColorBlock* _onHighlightedColors;

  /// @brief Field _onText, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__onText, put = __cordl_internal_set__onText)) ::UnityW<::TMPro::TextMeshProUGUI> _onText;

  /// @brief Field _originalKnobHeight, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get__originalKnobHeight, put = __cordl_internal_set__originalKnobHeight)) float_t _originalKnobHeight;

  /// @brief Field _originalKnobWidth, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get__originalKnobWidth, put = __cordl_internal_set__originalKnobWidth)) float_t _originalKnobWidth;

  /// @brief Field _switchAmount, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get__switchAmount, put = __cordl_internal_set__switchAmount)) float_t _switchAmount;

  /// @brief Field _switchAnimationSmooth, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__switchAnimationSmooth, put = __cordl_internal_set__switchAnimationSmooth)) float_t _switchAnimationSmooth;

  /// @brief Field _toggle, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__toggle, put = __cordl_internal_set__toggle)) ::UnityW<::HMUI::ToggleWithCallbacks> _toggle;

  /// @brief Field _verticalStretchAmount, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__verticalStretchAmount, put = __cordl_internal_set__verticalStretchAmount)) float_t _verticalStretchAmount;

  /// @brief Method Awake, addr 0x228d59c, size 0x50, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleOnValueChanged, addr 0x228e3e4, size 0x28, virtual false, abstract: false, final false
  inline void HandleOnValueChanged(bool value);

  /// @brief Method HandleStateDidChange, addr 0x228e40c, size 0x50, virtual false, abstract: false, final false
  inline void HandleStateDidChange(::HMUI::ToggleWithCallbacks_SelectionState selectionState);

  /// @brief Method LerpColor, addr 0x228e23c, size 0x1a8, virtual false, abstract: false, final false
  inline ::UnityEngine::Color LerpColor(float_t switchAmount, float_t highlightAmount, float_t disabledAmount, ::HMUI::AnimatedSwitchView_GetColorDelegate* getColorDelegate);

  /// @brief Method LerpColors, addr 0x228d78c, size 0x4e4, virtual false, abstract: false, final false
  inline void LerpColors(float_t switchAmount, float_t highlightAmount, float_t disabledAmount);

  /// @brief Method LerpPosition, addr 0x228dc70, size 0x64, virtual false, abstract: false, final false
  inline void LerpPosition(float_t switchAmount);

  /// @brief Method LerpStretch, addr 0x228e0bc, size 0x80, virtual false, abstract: false, final false
  inline void LerpStretch(float_t switchAmount);

  static inline ::HMUI::AnimatedSwitchView* New_ctor();

  /// @brief Method OnDestroy, addr 0x228dcd4, size 0x148, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x228d5ec, size 0x1a0, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x228de1c, size 0x2a0, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::HMUI::AnimatedSwitchView_AnimationState const& __cordl_internal_get__animationState() const;

  constexpr ::HMUI::AnimatedSwitchView_AnimationState& __cordl_internal_get__animationState();

  constexpr ::UnityW<::HMUI::ImageView> const& __cordl_internal_get__backgroundImage() const;

  constexpr ::UnityW<::HMUI::ImageView>& __cordl_internal_get__backgroundImage();

  constexpr float_t const& __cordl_internal_get__disableAnimationDuration() const;

  constexpr float_t& __cordl_internal_get__disableAnimationDuration();

  constexpr float_t const& __cordl_internal_get__disabledAmount() const;

  constexpr float_t& __cordl_internal_get__disabledAmount();

  constexpr ::HMUI::AnimatedSwitchView_ColorBlock* const& __cordl_internal_get__disabledColors() const;

  constexpr ::HMUI::AnimatedSwitchView_ColorBlock*& __cordl_internal_get__disabledColors();

  constexpr float_t const& __cordl_internal_get__highlightAmount() const;

  constexpr float_t& __cordl_internal_get__highlightAmount();

  constexpr float_t const& __cordl_internal_get__highlightAnimationDuration() const;

  constexpr float_t& __cordl_internal_get__highlightAnimationDuration();

  constexpr float_t const& __cordl_internal_get__horizontalStretchAmount() const;

  constexpr float_t& __cordl_internal_get__horizontalStretchAmount();

  constexpr ::UnityW<::HMUI::ImageView> const& __cordl_internal_get__knobImage() const;

  constexpr ::UnityW<::HMUI::ImageView>& __cordl_internal_get__knobImage();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__knobRectTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__knobRectTransform();

  constexpr ::HMUI::AnimatedSwitchView_ColorBlock* const& __cordl_internal_get__offColors() const;

  constexpr ::HMUI::AnimatedSwitchView_ColorBlock*& __cordl_internal_get__offColors();

  constexpr ::HMUI::AnimatedSwitchView_ColorBlock* const& __cordl_internal_get__offHighlightedColors() const;

  constexpr ::HMUI::AnimatedSwitchView_ColorBlock*& __cordl_internal_get__offHighlightedColors();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__offText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__offText();

  constexpr ::HMUI::AnimatedSwitchView_ColorBlock* const& __cordl_internal_get__onColors() const;

  constexpr ::HMUI::AnimatedSwitchView_ColorBlock*& __cordl_internal_get__onColors();

  constexpr ::HMUI::AnimatedSwitchView_ColorBlock* const& __cordl_internal_get__onHighlightedColors() const;

  constexpr ::HMUI::AnimatedSwitchView_ColorBlock*& __cordl_internal_get__onHighlightedColors();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__onText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__onText();

  constexpr float_t const& __cordl_internal_get__originalKnobHeight() const;

  constexpr float_t& __cordl_internal_get__originalKnobHeight();

  constexpr float_t const& __cordl_internal_get__originalKnobWidth() const;

  constexpr float_t& __cordl_internal_get__originalKnobWidth();

  constexpr float_t const& __cordl_internal_get__switchAmount() const;

  constexpr float_t& __cordl_internal_get__switchAmount();

  constexpr float_t const& __cordl_internal_get__switchAnimationSmooth() const;

  constexpr float_t& __cordl_internal_get__switchAnimationSmooth();

  constexpr ::UnityW<::HMUI::ToggleWithCallbacks> const& __cordl_internal_get__toggle() const;

  constexpr ::UnityW<::HMUI::ToggleWithCallbacks>& __cordl_internal_get__toggle();

  constexpr float_t const& __cordl_internal_get__verticalStretchAmount() const;

  constexpr float_t& __cordl_internal_get__verticalStretchAmount();

  constexpr void __cordl_internal_set__animationState(::HMUI::AnimatedSwitchView_AnimationState value);

  constexpr void __cordl_internal_set__backgroundImage(::UnityW<::HMUI::ImageView> value);

  constexpr void __cordl_internal_set__disableAnimationDuration(float_t value);

  constexpr void __cordl_internal_set__disabledAmount(float_t value);

  constexpr void __cordl_internal_set__disabledColors(::HMUI::AnimatedSwitchView_ColorBlock* value);

  constexpr void __cordl_internal_set__highlightAmount(float_t value);

  constexpr void __cordl_internal_set__highlightAnimationDuration(float_t value);

  constexpr void __cordl_internal_set__horizontalStretchAmount(float_t value);

  constexpr void __cordl_internal_set__knobImage(::UnityW<::HMUI::ImageView> value);

  constexpr void __cordl_internal_set__knobRectTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__offColors(::HMUI::AnimatedSwitchView_ColorBlock* value);

  constexpr void __cordl_internal_set__offHighlightedColors(::HMUI::AnimatedSwitchView_ColorBlock* value);

  constexpr void __cordl_internal_set__offText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__onColors(::HMUI::AnimatedSwitchView_ColorBlock* value);

  constexpr void __cordl_internal_set__onHighlightedColors(::HMUI::AnimatedSwitchView_ColorBlock* value);

  constexpr void __cordl_internal_set__onText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__originalKnobHeight(float_t value);

  constexpr void __cordl_internal_set__originalKnobWidth(float_t value);

  constexpr void __cordl_internal_set__switchAmount(float_t value);

  constexpr void __cordl_internal_set__switchAnimationSmooth(float_t value);

  constexpr void __cordl_internal_set__toggle(::UnityW<::HMUI::ToggleWithCallbacks> value);

  constexpr void __cordl_internal_set__verticalStretchAmount(float_t value);

  /// @brief Method .ctor, addr 0x228e45c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimatedSwitchView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnimatedSwitchView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimatedSwitchView(AnimatedSwitchView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimatedSwitchView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimatedSwitchView(AnimatedSwitchView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16842 };

  /// @brief Field _knobRectTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____knobRectTransform;

  /// @brief Field _backgroundImage, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::HMUI::ImageView> ____backgroundImage;

  /// @brief Field _knobImage, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::HMUI::ImageView> ____knobImage;

  /// @brief Field _onText, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____onText;

  /// @brief Field _offText, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____offText;

  /// @brief Field _switchAnimationSmooth, offset: 0x48, size: 0x4, def value: None
  float_t ____switchAnimationSmooth;

  /// @brief Field _disableAnimationDuration, offset: 0x4c, size: 0x4, def value: None
  float_t ____disableAnimationDuration;

  /// @brief Field _highlightAnimationDuration, offset: 0x50, size: 0x4, def value: None
  float_t ____highlightAnimationDuration;

  /// @brief Field _horizontalStretchAmount, offset: 0x54, size: 0x4, def value: None
  float_t ____horizontalStretchAmount;

  /// @brief Field _verticalStretchAmount, offset: 0x58, size: 0x4, def value: None
  float_t ____verticalStretchAmount;

  /// @brief Field _onColors, offset: 0x60, size: 0x8, def value: None
  ::HMUI::AnimatedSwitchView_ColorBlock* ____onColors;

  /// @brief Field _offColors, offset: 0x68, size: 0x8, def value: None
  ::HMUI::AnimatedSwitchView_ColorBlock* ____offColors;

  /// @brief Field _onHighlightedColors, offset: 0x70, size: 0x8, def value: None
  ::HMUI::AnimatedSwitchView_ColorBlock* ____onHighlightedColors;

  /// @brief Field _offHighlightedColors, offset: 0x78, size: 0x8, def value: None
  ::HMUI::AnimatedSwitchView_ColorBlock* ____offHighlightedColors;

  /// @brief Field _disabledColors, offset: 0x80, size: 0x8, def value: None
  ::HMUI::AnimatedSwitchView_ColorBlock* ____disabledColors;

  /// @brief Field _animationState, offset: 0x88, size: 0x4, def value: None
  ::HMUI::AnimatedSwitchView_AnimationState ____animationState;

  /// @brief Field _switchAmount, offset: 0x8c, size: 0x4, def value: None
  float_t ____switchAmount;

  /// @brief Field _highlightAmount, offset: 0x90, size: 0x4, def value: None
  float_t ____highlightAmount;

  /// @brief Field _disabledAmount, offset: 0x94, size: 0x4, def value: None
  float_t ____disabledAmount;

  /// @brief Field _originalKnobWidth, offset: 0x98, size: 0x4, def value: None
  float_t ____originalKnobWidth;

  /// @brief Field _originalKnobHeight, offset: 0x9c, size: 0x4, def value: None
  float_t ____originalKnobHeight;

  /// @brief Field _toggle, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::HMUI::ToggleWithCallbacks> ____toggle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::AnimatedSwitchView, ____knobRectTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView, ____backgroundImage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView, ____knobImage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView, ____onText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView, ____offText) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView, ____switchAnimationSmooth) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView, ____disableAnimationDuration) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView, ____highlightAnimationDuration) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView, ____horizontalStretchAmount) == 0x54, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView, ____verticalStretchAmount) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView, ____onColors) == 0x60, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView, ____offColors) == 0x68, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView, ____onHighlightedColors) == 0x70, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView, ____offHighlightedColors) == 0x78, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView, ____disabledColors) == 0x80, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView, ____animationState) == 0x88, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView, ____switchAmount) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView, ____highlightAmount) == 0x90, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView, ____disabledAmount) == 0x94, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView, ____originalKnobWidth) == 0x98, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView, ____originalKnobHeight) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::HMUI::AnimatedSwitchView, ____toggle) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::AnimatedSwitchView, 0xa8>, "Size mismatch!");

} // namespace HMUI
DEFINE_IL2CPP_ARG_TYPE(::HMUI::AnimatedSwitchView_AnimationState, "HMUI", "AnimatedSwitchView/AnimationState");
NEED_NO_BOX(::HMUI::AnimatedSwitchView);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::AnimatedSwitchView*, "HMUI", "AnimatedSwitchView");
NEED_NO_BOX(::HMUI::AnimatedSwitchView_ColorBlock);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::AnimatedSwitchView_ColorBlock*, "HMUI", "AnimatedSwitchView/ColorBlock");
NEED_NO_BOX(::HMUI::AnimatedSwitchView_GetColorDelegate);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::AnimatedSwitchView_GetColorDelegate*, "HMUI", "AnimatedSwitchView/GetColorDelegate");
NEED_NO_BOX(::HMUI::AnimatedSwitchView___c);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::AnimatedSwitchView___c*, "HMUI", "AnimatedSwitchView/<>c");
