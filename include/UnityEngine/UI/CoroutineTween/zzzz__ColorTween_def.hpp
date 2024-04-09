#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/UI/CoroutineTween/zzzz__ColorTween_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ColorTween)
namespace UnityEngine::Events {
template <typename T0> class UnityAction_1;
}
namespace UnityEngine::UI::CoroutineTween {
class ITweenValue;
}
namespace UnityEngine::UI::CoroutineTween {
class __ColorTween__ColorTweenCallback;
}
namespace UnityEngine::UI::CoroutineTween {
struct __ColorTween__ColorTweenMode;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::UI::CoroutineTween {
struct __ColorTween__ColorTweenMode;
}
namespace UnityEngine::UI::CoroutineTween {
class __ColorTween__ColorTweenCallback;
}
namespace UnityEngine::UI::CoroutineTween {
struct ColorTween;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode);
MARK_REF_PTR_T(::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenCallback);
MARK_VAL_T(::UnityEngine::UI::CoroutineTween::ColorTween);
// Type: ::ColorTweenMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UI::CoroutineTween {
// Is value type: true
// CS Name: ::ColorTween::ColorTweenMode
struct CORDL_TYPE __ColorTween__ColorTweenMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ColorTween__ColorTweenMode_Unwrapped
  enum struct ____ColorTween__ColorTweenMode_Unwrapped : int32_t {
    __E_All = static_cast<int32_t>(0x0),
    __E_RGB = static_cast<int32_t>(0x1),
    __E_Alpha = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ColorTween__ColorTweenMode_Unwrapped() const noexcept {
    return static_cast<____ColorTween__ColorTweenMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ColorTween__ColorTweenMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ColorTween__ColorTweenMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field All value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode const All;

  /// @brief Field Alpha value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode const Alpha;

  /// @brief Field RGB value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode const RGB;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UI::CoroutineTween
// Type: ::ColorTweenCallback
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI::CoroutineTween {
// Is value type: false
// CS Name: ::ColorTween::ColorTweenCallback*
class CORDL_TYPE __ColorTween__ColorTweenCallback : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Color> {
public:
  // Declarations
  static inline ::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenCallback* New_ctor();

  /// @brief Method .ctor, addr 0x32de354, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ColorTween__ColorTweenCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ColorTween__ColorTweenCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ColorTween__ColorTweenCallback(__ColorTween__ColorTweenCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ColorTween__ColorTweenCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ColorTween__ColorTweenCallback(__ColorTween__ColorTweenCallback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenCallback, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UI::CoroutineTween
// Type: UnityEngine.UI.CoroutineTween::ColorTween
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 65, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI::CoroutineTween {
// Is value type: true
// CS Name: ::UnityEngine.UI.CoroutineTween::ColorTween
struct CORDL_TYPE ColorTween {
public:
  // Declarations
  using ColorTweenCallback = ::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenCallback;

  using ColorTweenMode = ::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode;

  __declspec(property(get = get_duration, put = set_duration)) float_t duration;

  __declspec(property(get = get_ignoreTimeScale, put = set_ignoreTimeScale)) bool ignoreTimeScale;

  __declspec(property(get = get_startColor, put = set_startColor))::UnityEngine::Color startColor;

  __declspec(property(get = get_targetColor, put = set_targetColor))::UnityEngine::Color targetColor;

  __declspec(property(get = get_tweenMode, put = set_tweenMode))::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode tweenMode;

  /// @brief Convert operator to "::UnityEngine::UI::CoroutineTween::ITweenValue"
  constexpr operator ::UnityEngine::UI::CoroutineTween::ITweenValue*();

  /// @brief Method AddOnChangedCallback, addr 0x32de2cc, size 0x88, virtual false, abstract: false, final false
  inline void AddOnChangedCallback(::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>* callback);

  /// @brief Method GetDuration, addr 0x32de3a4, size 0x8, virtual false, abstract: false, final false
  inline float_t GetDuration();

  /// @brief Method GetIgnoreTimescale, addr 0x32de39c, size 0x8, virtual false, abstract: false, final false
  inline bool GetIgnoreTimescale();

  /// @brief Method TweenValue, addr 0x32de1e0, size 0xdc, virtual true, abstract: false, final true
  inline void TweenValue(float_t floatPercentage);

  /// @brief Method ValidTarget, addr 0x32de2bc, size 0x10, virtual true, abstract: false, final true
  inline bool ValidTarget();

  /// @brief Method get_duration, addr 0x32de1bc, size 0x8, virtual true, abstract: false, final true
  inline float_t get_duration();

  /// @brief Method get_ignoreTimeScale, addr 0x32de1cc, size 0x8, virtual true, abstract: false, final true
  inline bool get_ignoreTimeScale();

  /// @brief Method get_startColor, addr 0x32de17c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_startColor();

  /// @brief Method get_targetColor, addr 0x32de194, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_targetColor();

  /// @brief Method get_tweenMode, addr 0x32de1ac, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode get_tweenMode();

  /// @brief Convert to "::UnityEngine::UI::CoroutineTween::ITweenValue"
  constexpr ::UnityEngine::UI::CoroutineTween::ITweenValue* i___UnityEngine__UI__CoroutineTween__ITweenValue();

  /// @brief Method set_duration, addr 0x32de1c4, size 0x8, virtual false, abstract: false, final false
  inline void set_duration(float_t value);

  /// @brief Method set_ignoreTimeScale, addr 0x32de1d4, size 0xc, virtual false, abstract: false, final false
  inline void set_ignoreTimeScale(bool value);

  /// @brief Method set_startColor, addr 0x32de188, size 0xc, virtual false, abstract: false, final false
  inline void set_startColor(::UnityEngine::Color value);

  /// @brief Method set_targetColor, addr 0x32de1a0, size 0xc, virtual false, abstract: false, final false
  inline void set_targetColor(::UnityEngine::Color value);

  /// @brief Method set_tweenMode, addr 0x32de1b4, size 0x8, virtual false, abstract: false, final false
  inline void set_tweenMode(::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorTween();

  // Ctor Parameters [CppParam { name: "m_Target", ty: "::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenCallback*", modifiers: "", def_value: None }, CppParam { name: "m_StartColor", ty:
  // "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "m_TargetColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "m_TweenMode", ty:
  // "::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode", modifiers: "", def_value: None }, CppParam { name: "m_Duration", ty: "float_t", modifiers: "", def_value: None }, CppParam {
  // name: "m_IgnoreTimeScale", ty: "bool", modifiers: "", def_value: None }]
  constexpr ColorTween(::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenCallback* m_Target, ::UnityEngine::Color m_StartColor, ::UnityEngine::Color m_TargetColor,
                       ::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode m_TweenMode, float_t m_Duration, bool m_IgnoreTimeScale) noexcept;

  /// @brief Field m_Target, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenCallback* m_Target;

  /// @brief Field m_StartColor, offset: 0x8, size: 0x10, def value: None
  ::UnityEngine::Color m_StartColor;

  /// @brief Field m_TargetColor, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Color m_TargetColor;

  /// @brief Field m_TweenMode, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode m_TweenMode;

  /// @brief Field m_Duration, offset: 0x2c, size: 0x4, def value: None
  float_t m_Duration;

  /// @brief Field m_IgnoreTimeScale, offset: 0x30, size: 0x1, def value: None
  bool m_IgnoreTimeScale;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::CoroutineTween::ColorTween, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::CoroutineTween::ColorTween, m_Target) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CoroutineTween::ColorTween, m_StartColor) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CoroutineTween::ColorTween, m_TargetColor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CoroutineTween::ColorTween, m_TweenMode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CoroutineTween::ColorTween, m_Duration) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CoroutineTween::ColorTween, m_IgnoreTimeScale) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::UI::CoroutineTween
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode, "UnityEngine.UI.CoroutineTween", "ColorTween/ColorTweenMode");
NEED_NO_BOX(::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenCallback*, "UnityEngine.UI.CoroutineTween", "ColorTween/ColorTweenCallback");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::CoroutineTween::ColorTween, "UnityEngine.UI.CoroutineTween", "ColorTween");
