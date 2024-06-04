#pragma once
// IWYU pragma private; include "TMPro/FloatTween.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(FloatTween)
namespace TMPro {
class ITweenValue;
}
namespace TMPro {
class __FloatTween__FloatTweenCallback;
}
namespace UnityEngine::Events {
template <typename T0> class UnityAction_1;
}
// Forward declare root types
namespace TMPro {
class __FloatTween__FloatTweenCallback;
}
namespace TMPro {
struct FloatTween;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::__FloatTween__FloatTweenCallback);
MARK_VAL_T(::TMPro::FloatTween);
// Type: ::FloatTweenCallback
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// CS Name: ::FloatTween::FloatTweenCallback*
class CORDL_TYPE __FloatTween__FloatTweenCallback : public ::UnityEngine::Events::UnityEvent_1<float_t> {
public:
  // Declarations
  static inline ::TMPro::__FloatTween__FloatTweenCallback* New_ctor();

  /// @brief Method .ctor, addr 0x3360b6c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FloatTween__FloatTweenCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FloatTween__FloatTweenCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FloatTween__FloatTweenCallback(__FloatTween__FloatTweenCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FloatTween__FloatTweenCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FloatTween__FloatTweenCallback(__FloatTween__FloatTweenCallback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__FloatTween__FloatTweenCallback, 0x30>, "Size mismatch!");

} // namespace TMPro
// Type: TMPro::FloatTween
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 37, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: true
// CS Name: ::TMPro::FloatTween
struct CORDL_TYPE FloatTween {
public:
  // Declarations
  using FloatTweenCallback = ::TMPro::__FloatTween__FloatTweenCallback;

  __declspec(property(get = get_duration, put = set_duration)) float_t duration;

  __declspec(property(get = get_ignoreTimeScale, put = set_ignoreTimeScale)) bool ignoreTimeScale;

  __declspec(property(get = get_startValue, put = set_startValue)) float_t startValue;

  __declspec(property(get = get_targetValue, put = set_targetValue)) float_t targetValue;

  /// @brief Convert operator to "::TMPro::ITweenValue"
  constexpr operator ::TMPro::ITweenValue*();

  /// @brief Method AddOnChangedCallback, addr 0x3360ae4, size 0x88, virtual false, abstract: false, final false
  inline void AddOnChangedCallback(::UnityEngine::Events::UnityAction_1<float_t>* callback);

  /// @brief Method GetDuration, addr 0x3360bbc, size 0x8, virtual false, abstract: false, final false
  inline float_t GetDuration();

  /// @brief Method GetIgnoreTimescale, addr 0x3360bb4, size 0x8, virtual false, abstract: false, final false
  inline bool GetIgnoreTimescale();

  /// @brief Method TweenValue, addr 0x3360a48, size 0x8c, virtual true, abstract: false, final true
  inline void TweenValue(float_t floatPercentage);

  /// @brief Method ValidTarget, addr 0x3360ad4, size 0x10, virtual true, abstract: false, final true
  inline bool ValidTarget();

  /// @brief Method get_duration, addr 0x3360a24, size 0x8, virtual true, abstract: false, final true
  inline float_t get_duration();

  /// @brief Method get_ignoreTimeScale, addr 0x3360a34, size 0x8, virtual true, abstract: false, final true
  inline bool get_ignoreTimeScale();

  /// @brief Method get_startValue, addr 0x3360a04, size 0x8, virtual false, abstract: false, final false
  inline float_t get_startValue();

  /// @brief Method get_targetValue, addr 0x3360a14, size 0x8, virtual false, abstract: false, final false
  inline float_t get_targetValue();

  /// @brief Convert to "::TMPro::ITweenValue"
  constexpr ::TMPro::ITweenValue* i___TMPro__ITweenValue();

  /// @brief Method set_duration, addr 0x3360a2c, size 0x8, virtual false, abstract: false, final false
  inline void set_duration(float_t value);

  /// @brief Method set_ignoreTimeScale, addr 0x3360a3c, size 0xc, virtual false, abstract: false, final false
  inline void set_ignoreTimeScale(bool value);

  /// @brief Method set_startValue, addr 0x3360a0c, size 0x8, virtual false, abstract: false, final false
  inline void set_startValue(float_t value);

  /// @brief Method set_targetValue, addr 0x3360a1c, size 0x8, virtual false, abstract: false, final false
  inline void set_targetValue(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatTween();

  // Ctor Parameters [CppParam { name: "m_Target", ty: "::TMPro::__FloatTween__FloatTweenCallback*", modifiers: "", def_value: None }, CppParam { name: "m_StartValue", ty: "float_t", modifiers: "",
  // def_value: None }, CppParam { name: "m_TargetValue", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Duration", ty: "float_t", modifiers: "", def_value: None }, CppParam {
  // name: "m_IgnoreTimeScale", ty: "bool", modifiers: "", def_value: None }]
  constexpr FloatTween(::TMPro::__FloatTween__FloatTweenCallback* m_Target, float_t m_StartValue, float_t m_TargetValue, float_t m_Duration, bool m_IgnoreTimeScale) noexcept;

  /// @brief Field m_Target, offset: 0x0, size: 0x8, def value: None
  ::TMPro::__FloatTween__FloatTweenCallback* m_Target;

  /// @brief Field m_StartValue, offset: 0x8, size: 0x4, def value: None
  float_t m_StartValue;

  /// @brief Field m_TargetValue, offset: 0xc, size: 0x4, def value: None
  float_t m_TargetValue;

  /// @brief Field m_Duration, offset: 0x10, size: 0x4, def value: None
  float_t m_Duration;

  /// @brief Field m_IgnoreTimeScale, offset: 0x14, size: 0x1, def value: None
  bool m_IgnoreTimeScale;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::FloatTween, 0x18>, "Size mismatch!");

static_assert(offsetof(::TMPro::FloatTween, m_Target) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::FloatTween, m_StartValue) == 0x8, "Offset mismatch!");

static_assert(offsetof(::TMPro::FloatTween, m_TargetValue) == 0xc, "Offset mismatch!");

static_assert(offsetof(::TMPro::FloatTween, m_Duration) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::FloatTween, m_IgnoreTimeScale) == 0x14, "Offset mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::__FloatTween__FloatTweenCallback);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__FloatTween__FloatTweenCallback*, "TMPro", "FloatTween/FloatTweenCallback");
DEFINE_IL2CPP_ARG_TYPE(::TMPro::FloatTween, "TMPro", "FloatTween");
