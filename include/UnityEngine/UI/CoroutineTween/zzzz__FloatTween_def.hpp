#pragma once
// IWYU pragma private; include "UnityEngine/UI/CoroutineTween/FloatTween.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/UI/CoroutineTween/zzzz__ITweenValue_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(FloatTween)
namespace UnityEngine::Events {
template <typename T0> class UnityAction_1;
}
namespace UnityEngine::UI::CoroutineTween {
class FloatTween_FloatTweenCallback;
}
// Forward declare root types
namespace UnityEngine::UI::CoroutineTween {
class FloatTween_FloatTweenCallback;
}
namespace UnityEngine::UI::CoroutineTween {
struct FloatTween;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::CoroutineTween::FloatTween_FloatTweenCallback);
MARK_VAL_T(::UnityEngine::UI::CoroutineTween::FloatTween);
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace UnityEngine::UI::CoroutineTween {
// Is value type: false
// CS Name: UnityEngine.UI.CoroutineTween.FloatTween/FloatTweenCallback
class CORDL_TYPE FloatTween_FloatTweenCallback : public ::UnityEngine::Events::UnityEvent_1<float_t> {
public:
  // Declarations
  static inline ::UnityEngine::UI::CoroutineTween::FloatTween_FloatTweenCallback* New_ctor();

  /// @brief Method .ctor, addr 0x4acde60, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatTween_FloatTweenCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatTween_FloatTweenCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatTween_FloatTweenCallback(FloatTween_FloatTweenCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatTween_FloatTweenCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatTween_FloatTweenCallback(FloatTween_FloatTweenCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15168 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::CoroutineTween::FloatTween_FloatTweenCallback, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UI::CoroutineTween
// Dependencies UnityEngine.UI.CoroutineTween.ITweenValue
namespace UnityEngine::UI::CoroutineTween {
// Is value type: true
// CS Name: UnityEngine.UI.CoroutineTween.FloatTween
struct CORDL_TYPE FloatTween {
public:
  // Declarations
  using FloatTweenCallback = ::UnityEngine::UI::CoroutineTween::FloatTween_FloatTweenCallback;

  __declspec(property(get = get_duration, put = set_duration)) float_t duration;

  __declspec(property(get = get_ignoreTimeScale, put = set_ignoreTimeScale)) bool ignoreTimeScale;

  __declspec(property(get = get_startValue, put = set_startValue)) float_t startValue;

  __declspec(property(get = get_targetValue, put = set_targetValue)) float_t targetValue;

  /// @brief Convert operator to "::UnityEngine::UI::CoroutineTween::ITweenValue"
  constexpr operator ::UnityEngine::UI::CoroutineTween::ITweenValue*();

  /// @brief Method AddOnChangedCallback, addr 0x4acddd8, size 0x88, virtual false, abstract: false, final false
  inline void AddOnChangedCallback(::UnityEngine::Events::UnityAction_1<float_t>* callback);

  /// @brief Method GetDuration, addr 0x4acdeb0, size 0x8, virtual false, abstract: false, final false
  inline float_t GetDuration();

  /// @brief Method GetIgnoreTimescale, addr 0x4acdea8, size 0x8, virtual false, abstract: false, final false
  inline bool GetIgnoreTimescale();

  /// @brief Method TweenValue, addr 0x4acdd3c, size 0x8c, virtual true, abstract: false, final true
  inline void TweenValue(float_t floatPercentage);

  /// @brief Method ValidTarget, addr 0x4acddc8, size 0x10, virtual true, abstract: false, final true
  inline bool ValidTarget();

  /// @brief Method get_duration, addr 0x4acdd18, size 0x8, virtual true, abstract: false, final true
  inline float_t get_duration();

  /// @brief Method get_ignoreTimeScale, addr 0x4acdd28, size 0x8, virtual true, abstract: false, final true
  inline bool get_ignoreTimeScale();

  /// @brief Method get_startValue, addr 0x4acdcf8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_startValue();

  /// @brief Method get_targetValue, addr 0x4acdd08, size 0x8, virtual false, abstract: false, final false
  inline float_t get_targetValue();

  /// @brief Convert to "::UnityEngine::UI::CoroutineTween::ITweenValue"
  constexpr ::UnityEngine::UI::CoroutineTween::ITweenValue* i___UnityEngine__UI__CoroutineTween__ITweenValue();

  /// @brief Method set_duration, addr 0x4acdd20, size 0x8, virtual false, abstract: false, final false
  inline void set_duration(float_t value);

  /// @brief Method set_ignoreTimeScale, addr 0x4acdd30, size 0xc, virtual false, abstract: false, final false
  inline void set_ignoreTimeScale(bool value);

  /// @brief Method set_startValue, addr 0x4acdd00, size 0x8, virtual false, abstract: false, final false
  inline void set_startValue(float_t value);

  /// @brief Method set_targetValue, addr 0x4acdd10, size 0x8, virtual false, abstract: false, final false
  inline void set_targetValue(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatTween();

  // Ctor Parameters [CppParam { name: "m_Target", ty: "::UnityEngine::UI::CoroutineTween::FloatTween_FloatTweenCallback*", modifiers: "", def_value: None }, CppParam { name: "m_StartValue", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "m_TargetValue", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Duration", ty: "float_t", modifiers: "",
  // def_value: None }, CppParam { name: "m_IgnoreTimeScale", ty: "bool", modifiers: "", def_value: None }]
  constexpr FloatTween(::UnityEngine::UI::CoroutineTween::FloatTween_FloatTweenCallback* m_Target, float_t m_StartValue, float_t m_TargetValue, float_t m_Duration, bool m_IgnoreTimeScale) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15169 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_Target, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UI::CoroutineTween::FloatTween_FloatTweenCallback* m_Target;

  /// @brief Field m_StartValue, offset: 0x8, size: 0x4, def value: None
  float_t m_StartValue;

  /// @brief Field m_TargetValue, offset: 0xc, size: 0x4, def value: None
  float_t m_TargetValue;

  /// @brief Field m_Duration, offset: 0x10, size: 0x4, def value: None
  float_t m_Duration;

  /// @brief Field m_IgnoreTimeScale, offset: 0x14, size: 0x1, def value: None
  bool m_IgnoreTimeScale;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::CoroutineTween::FloatTween, m_Target) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CoroutineTween::FloatTween, m_StartValue) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CoroutineTween::FloatTween, m_TargetValue) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CoroutineTween::FloatTween, m_Duration) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CoroutineTween::FloatTween, m_IgnoreTimeScale) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::CoroutineTween::FloatTween, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UI::CoroutineTween
NEED_NO_BOX(::UnityEngine::UI::CoroutineTween::FloatTween_FloatTweenCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::CoroutineTween::FloatTween_FloatTweenCallback*, "UnityEngine.UI.CoroutineTween", "FloatTween/FloatTweenCallback");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::CoroutineTween::FloatTween, "UnityEngine.UI.CoroutineTween", "FloatTween");
