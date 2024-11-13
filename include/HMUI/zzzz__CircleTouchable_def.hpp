#pragma once
// IWYU pragma private; include "HMUI/CircleTouchable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__Touchable_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CircleTouchable)
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace HMUI {
class CircleTouchable;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::CircleTouchable);
// Type: HMUI::CircleTouchable
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::CircleTouchable*
class CORDL_TYPE CircleTouchable : public ::HMUI::Touchable {
public:
  // Declarations
  /// @brief Field _containerRect, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__containerRect, put = __cordl_internal_set__containerRect)) ::UnityW<::UnityEngine::RectTransform> _containerRect;

  /// @brief Field _maxRadius, offset 0xac, size 0x4
  __declspec(property(get = __cordl_internal_get__maxRadius, put = __cordl_internal_set__maxRadius)) float_t _maxRadius;

  /// @brief Field _minRadius, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get__minRadius, put = __cordl_internal_set__minRadius)) float_t _minRadius;

  /// @brief Method DrawGizmoCircle, addr 0x399d520, size 0xe0, virtual false, abstract: false, final false
  inline void DrawGizmoCircle(::UnityEngine::Vector3 center, float_t radius, int32_t steps);

  static inline ::HMUI::CircleTouchable* New_ctor();

  /// @brief Method OnDrawGizmosSelected, addr 0x399d410, size 0x110, virtual false, abstract: false, final false
  inline void OnDrawGizmosSelected();

  /// @brief Method OnEnable, addr 0x399d2bc, size 0x1c, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Raycast, addr 0x399d344, size 0xcc, virtual true, abstract: false, final false
  inline bool Raycast(::UnityEngine::Vector2 sp, ::UnityEngine::Camera* eventCamera);

  /// @brief Method UpdateCachedReferences, addr 0x399d2d8, size 0x6c, virtual false, abstract: false, final false
  inline void UpdateCachedReferences();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__containerRect() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__containerRect();

  constexpr float_t const& __cordl_internal_get__maxRadius() const;

  constexpr float_t& __cordl_internal_get__maxRadius();

  constexpr float_t const& __cordl_internal_get__minRadius() const;

  constexpr float_t& __cordl_internal_get__minRadius();

  constexpr void __cordl_internal_set__containerRect(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__maxRadius(float_t value);

  constexpr void __cordl_internal_set__minRadius(float_t value);

  /// @brief Method .ctor, addr 0x399d600, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CircleTouchable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CircleTouchable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CircleTouchable(CircleTouchable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CircleTouchable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CircleTouchable(CircleTouchable const&) = delete;

  /// @brief Field _minRadius, offset: 0xa8, size: 0x4, def value: None
  float_t ____minRadius;

  /// @brief Field _maxRadius, offset: 0xac, size: 0x4, def value: None
  float_t ____maxRadius;

  /// @brief Field _containerRect, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____containerRect;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16021 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::CircleTouchable, 0xb8>, "Size mismatch!");

static_assert(offsetof(::HMUI::CircleTouchable, ____minRadius) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::HMUI::CircleTouchable, ____maxRadius) == 0xac, "Offset mismatch!");

static_assert(offsetof(::HMUI::CircleTouchable, ____containerRect) == 0xb0, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::CircleTouchable);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::CircleTouchable*, "HMUI", "CircleTouchable");
