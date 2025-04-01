#pragma once
// IWYU pragma private; include "HMUI/InteractableTiltEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerEnterHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerMoveHandler_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(InteractableTiltEffect)
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace HMUI {
class InteractableTiltEffect;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::InteractableTiltEffect);
// Dependencies UnityEngine.EventSystems.IEventSystemHandler, UnityEngine.EventSystems.IPointerEnterHandler, UnityEngine.EventSystems.IPointerMoveHandler, UnityEngine.MonoBehaviour,
// UnityEngine.Vector2
namespace HMUI {
// Is value type: false
// CS Name: HMUI.InteractableTiltEffect
class CORDL_TYPE InteractableTiltEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _effectStrengthMultiplier, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__effectStrengthMultiplier, put = __cordl_internal_set__effectStrengthMultiplier)) float_t _effectStrengthMultiplier;

  /// @brief Field _maxHorizontalRotation, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__maxHorizontalRotation, put = __cordl_internal_set__maxHorizontalRotation)) float_t _maxHorizontalRotation;

  /// @brief Field _maxVerticalRotation, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__maxVerticalRotation, put = __cordl_internal_set__maxVerticalRotation)) float_t _maxVerticalRotation;

  /// @brief Field _prevLocalPoint, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__prevLocalPoint, put = __cordl_internal_set__prevLocalPoint)) ::UnityEngine::Vector2 _prevLocalPoint;

  /// @brief Field _rectTransform, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__rectTransform, put = __cordl_internal_set__rectTransform)) ::UnityW<::UnityEngine::RectTransform> _rectTransform;

  __declspec(property(get = get_effectStrengthMultiplier, put = set_effectStrengthMultiplier)) float_t effectStrengthMultiplier;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerMoveHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerMoveHandler*() noexcept;

  /// @brief Method ComputeNewTargetRotation, addr 0x39efd34, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion ComputeNewTargetRotation(::UnityEngine::Vector2 localPoint);

  static inline ::HMUI::InteractableTiltEffect* New_ctor();

  /// @brief Method OnPointerEnter, addr 0x39efdcc, size 0x50, virtual true, abstract: false, final true
  inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerMove, addr 0x39efe1c, size 0x50, virtual true, abstract: false, final true
  inline void OnPointerMove(::UnityEngine::EventSystems::PointerEventData* eventData);

  constexpr float_t const& __cordl_internal_get__effectStrengthMultiplier() const;

  constexpr float_t& __cordl_internal_get__effectStrengthMultiplier();

  constexpr float_t const& __cordl_internal_get__maxHorizontalRotation() const;

  constexpr float_t& __cordl_internal_get__maxHorizontalRotation();

  constexpr float_t const& __cordl_internal_get__maxVerticalRotation() const;

  constexpr float_t& __cordl_internal_get__maxVerticalRotation();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__prevLocalPoint() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__prevLocalPoint();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__rectTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__rectTransform();

  constexpr void __cordl_internal_set__effectStrengthMultiplier(float_t value);

  constexpr void __cordl_internal_set__maxHorizontalRotation(float_t value);

  constexpr void __cordl_internal_set__maxVerticalRotation(float_t value);

  constexpr void __cordl_internal_set__prevLocalPoint(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform> value);

  /// @brief Method .ctor, addr 0x39efe6c, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_effectStrengthMultiplier, addr 0x39efdc4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_effectStrengthMultiplier();

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerMoveHandler"
  constexpr ::UnityEngine::EventSystems::IPointerMoveHandler* i___UnityEngine__EventSystems__IPointerMoveHandler() noexcept;

  /// @brief Method set_effectStrengthMultiplier, addr 0x39efd04, size 0x30, virtual false, abstract: false, final false
  inline void set_effectStrengthMultiplier(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InteractableTiltEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InteractableTiltEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InteractableTiltEffect(InteractableTiltEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InteractableTiltEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InteractableTiltEffect(InteractableTiltEffect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16074 };

  /// @brief Field _rectTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____rectTransform;

  /// @brief Field _maxHorizontalRotation, offset: 0x28, size: 0x4, def value: None
  float_t ____maxHorizontalRotation;

  /// @brief Field _maxVerticalRotation, offset: 0x2c, size: 0x4, def value: None
  float_t ____maxVerticalRotation;

  /// @brief Field _prevLocalPoint, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____prevLocalPoint;

  /// @brief Field _effectStrengthMultiplier, offset: 0x38, size: 0x4, def value: None
  float_t ____effectStrengthMultiplier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::InteractableTiltEffect, ____rectTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::InteractableTiltEffect, ____maxHorizontalRotation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::InteractableTiltEffect, ____maxVerticalRotation) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::HMUI::InteractableTiltEffect, ____prevLocalPoint) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::InteractableTiltEffect, ____effectStrengthMultiplier) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::InteractableTiltEffect, 0x40>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::InteractableTiltEffect);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::InteractableTiltEffect*, "HMUI", "InteractableTiltEffect");
