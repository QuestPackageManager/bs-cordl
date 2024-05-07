#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Vertex.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(Vertex)
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct Vertex;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Vertex);
// Type: UnityEngine.UIElements::Vertex
// SizeInfo { instance_size: 60, native_size: 60, calculated_instance_size: 60, calculated_native_size: 76, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::UnityEngine.UIElements::Vertex
struct CORDL_TYPE Vertex {
public:
  // Declarations
  /// @brief Field nearZ, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_nearZ, put = setStaticF_nearZ)) float_t nearZ;

  static inline float_t getStaticF_nearZ();

  static inline void setStaticF_nearZ(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Vertex();

  // Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "tint", ty: "::UnityEngine::Color32", modifiers: "", def_value: None
  // }, CppParam { name: "uv", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "xformClipPages", ty: "::UnityEngine::Color32", modifiers: "", def_value: None },
  // CppParam { name: "ids", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name:
  // "opacityColorPages", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "circle", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name:
  // "textureId", ty: "float_t", modifiers: "", def_value: None }]
  constexpr Vertex(::UnityEngine::Vector3 position, ::UnityEngine::Color32 tint, ::UnityEngine::Vector2 uv, ::UnityEngine::Color32 xformClipPages, ::UnityEngine::Color32 ids,
                   ::UnityEngine::Color32 flags, ::UnityEngine::Color32 opacityColorPages, ::UnityEngine::Vector4 circle, float_t textureId) noexcept;

  /// @brief Field position, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 position;

  /// @brief Field tint, offset: 0xc, size: 0x4, def value: None
  ::UnityEngine::Color32 tint;

  /// @brief Field uv, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Vector2 uv;

  /// @brief Field xformClipPages, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::Color32 xformClipPages;

  /// @brief Field ids, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::Color32 ids;

  /// @brief Field flags, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::Color32 flags;

  /// @brief Field opacityColorPages, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::Color32 opacityColorPages;

  /// @brief Field circle, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Vector4 circle;

  /// @brief Field textureId, offset: 0x38, size: 0x4, def value: None
  float_t textureId;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x3c };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Vertex, 0x3c>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Vertex, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Vertex, tint) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Vertex, uv) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Vertex, xformClipPages) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Vertex, ids) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Vertex, flags) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Vertex, opacityColorPages) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Vertex, circle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Vertex, textureId) == 0x38, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Vertex, "UnityEngine.UIElements", "Vertex");
