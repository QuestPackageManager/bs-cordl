#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__Touchable_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CircleTouchable)
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class Camera;
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
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13685))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13683))
// CS Name: ::HMUI::CircleTouchable*
class CORDL_TYPE CircleTouchable : public ::HMUI::Touchable {
public:
  // Declarations
  /// @brief Field _minRadius, offset 0xa0, size 0x4
  __declspec(property(get = __get__minRadius, put = __set__minRadius)) float_t _minRadius;

  /// @brief Field _maxRadius, offset 0xa4, size 0x4
  __declspec(property(get = __get__maxRadius, put = __set__maxRadius)) float_t _maxRadius;

  /// @brief Field _containerRect, offset 0xa8, size 0x8
  __declspec(property(get = __get__containerRect, put = __set__containerRect))::UnityEngine::RectTransform* _containerRect;

  constexpr float_t& __get__minRadius();

  constexpr float_t const& __get__minRadius() const;

  constexpr void __set__minRadius(float_t value);

  constexpr float_t& __get__maxRadius();

  constexpr float_t const& __get__maxRadius() const;

  constexpr void __set__maxRadius(float_t value);

  constexpr ::UnityEngine::RectTransform*& __get__containerRect();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get__containerRect() const;

  constexpr void __set__containerRect(::UnityEngine::RectTransform* value);

  /// @brief Method OnEnable addr 0x1fce610 size 0x1c virtual true final false
  inline void OnEnable();

  /// @brief Method UpdateCachedReferences addr 0x1fce62c size 0x6c virtual false final false
  inline void UpdateCachedReferences();

  /// @brief Method Raycast addr 0x1fce698 size 0xcc virtual true final false
  inline bool Raycast(::UnityEngine::Vector2 sp, ::UnityEngine::Camera* eventCamera);

  /// @brief Method OnDrawGizmosSelected addr 0x1fce764 size 0x110 virtual false final false
  inline void OnDrawGizmosSelected();

  /// @brief Method DrawGizmoCircle addr 0x1fce874 size 0xe0 virtual false final false
  inline void DrawGizmoCircle(::UnityEngine::Vector3 center, float_t radius, int32_t steps);

  static inline ::HMUI::CircleTouchable* New_ctor();

  /// @brief Method .ctor addr 0x1fce954 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CircleTouchable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CircleTouchable(CircleTouchable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CircleTouchable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CircleTouchable(CircleTouchable const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CircleTouchable();

public:
  /// @brief Field _minRadius, offset: 0xa0, size: 0x4, def value: None
  float_t ____minRadius;

  /// @brief Field _maxRadius, offset: 0xa4, size: 0x4, def value: None
  float_t ____maxRadius;

  /// @brief Field _containerRect, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ____containerRect;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::CircleTouchable, 0xb0>, "Size mismatch!");

static_assert(offsetof(::HMUI::CircleTouchable, ____minRadius) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::HMUI::CircleTouchable, ____maxRadius) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::HMUI::CircleTouchable, ____containerRect) == 0xa8, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::CircleTouchable);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::CircleTouchable*, "HMUI", "CircleTouchable");
