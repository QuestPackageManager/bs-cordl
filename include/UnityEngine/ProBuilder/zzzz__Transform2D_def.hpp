#pragma once
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
// Type: UnityEngine.ProBuilder::Transform2D
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10243))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12207))
// CS Name: ::UnityEngine.ProBuilder::Transform2D*
class CORDL_TYPE Transform2D : public ::System::Object {
public:
  // Declarations
  /// @brief Field position, offset 0x10, size 0x8
  __declspec(property(get = __get_position, put = __set_position))::UnityEngine::Vector2 position;

  /// @brief Field rotation, offset 0x18, size 0x4
  __declspec(property(get = __get_rotation, put = __set_rotation)) float_t rotation;

  /// @brief Field scale, offset 0x1c, size 0x8
  __declspec(property(get = __get_scale, put = __set_scale))::UnityEngine::Vector2 scale;

  constexpr ::UnityEngine::Vector2& __get_position();

  constexpr ::UnityEngine::Vector2 const& __get_position() const;

  constexpr void __set_position(::UnityEngine::Vector2 value);

  constexpr float_t& __get_rotation();

  constexpr float_t const& __get_rotation() const;

  constexpr void __set_rotation(float_t value);

  constexpr ::UnityEngine::Vector2& __get_scale();

  constexpr ::UnityEngine::Vector2 const& __get_scale() const;

  constexpr void __set_scale(::UnityEngine::Vector2 value);

  static inline ::UnityEngine::ProBuilder::Transform2D* New_ctor(::UnityEngine::Vector2 position, float_t rotation, ::UnityEngine::Vector2 scale);

  /// @brief Method .ctor, addr 0x2b7c03c, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector2 position, float_t rotation, ::UnityEngine::Vector2 scale);

  /// @brief Method TransformPoint, addr 0x2b7c08c, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 TransformPoint(::UnityEngine::Vector2 p);

  /// @brief Method ToString, addr 0x2b7c0f0, size 0x1f4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "Transform2D", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Transform2D(Transform2D&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Transform2D", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Transform2D(Transform2D const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Transform2D();

public:
  /// @brief Field position, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___position;

  /// @brief Field rotation, offset: 0x18, size: 0x4, def value: None
  float_t ___rotation;

  /// @brief Field scale, offset: 0x1c, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___scale;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Transform2D, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Transform2D, ___position) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Transform2D, ___rotation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Transform2D, ___scale) == 0x1c, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::Transform2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Transform2D*, "UnityEngine.ProBuilder", "Transform2D");
