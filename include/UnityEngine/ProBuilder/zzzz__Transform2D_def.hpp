#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Transform2D.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Transform2D)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class Transform2D;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Transform2D);
// Dependencies System.Object, UnityEngine.Vector2
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.Transform2D
class CORDL_TYPE Transform2D : public ::System::Object {
public:
  // Declarations
  /// @brief Field position, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_position, put = __cordl_internal_set_position)) ::UnityEngine::Vector2 position;

  /// @brief Field rotation, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_rotation, put = __cordl_internal_set_rotation)) float_t rotation;

  /// @brief Field scale, offset 0x1c, size 0x8
  __declspec(property(get = __cordl_internal_get_scale, put = __cordl_internal_set_scale)) ::UnityEngine::Vector2 scale;

  static inline ::UnityEngine::ProBuilder::Transform2D* New_ctor(::UnityEngine::Vector2 position, float_t rotation, ::UnityEngine::Vector2 scale);

  /// @brief Method ToString, addr 0x474147c, size 0x150, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TransformPoint, addr 0x4741418, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 TransformPoint(::UnityEngine::Vector2 p);

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_position() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_position();

  constexpr float_t const& __cordl_internal_get_rotation() const;

  constexpr float_t& __cordl_internal_get_rotation();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_scale() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_scale();

  constexpr void __cordl_internal_set_position(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_rotation(float_t value);

  constexpr void __cordl_internal_set_scale(::UnityEngine::Vector2 value);

  /// @brief Method .ctor, addr 0x47413c8, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector2 position, float_t rotation, ::UnityEngine::Vector2 scale);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Transform2D();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Transform2D", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Transform2D(Transform2D&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Transform2D", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Transform2D(Transform2D const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14320 };

  /// @brief Field position, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___position;

  /// @brief Field rotation, offset: 0x18, size: 0x4, def value: None
  float_t ___rotation;

  /// @brief Field scale, offset: 0x1c, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___scale;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::Transform2D, ___position) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Transform2D, ___rotation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Transform2D, ___scale) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Transform2D, 0x28>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::Transform2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Transform2D*, "UnityEngine.ProBuilder", "Transform2D");
