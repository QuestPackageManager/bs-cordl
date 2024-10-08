#pragma once
// IWYU pragma private; include "UnityEngine/UIVertex.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(UIVertex)
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine {
struct UIVertex;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIVertex);
// Type: UnityEngine::UIVertex
// SizeInfo { instance_size: 108, native_size: 108, calculated_instance_size: 108, calculated_native_size: 124, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::UIVertex
struct CORDL_TYPE UIVertex {
public:
  // Declarations
  /// @brief Field s_DefaultColor, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_DefaultColor, put = setStaticF_s_DefaultColor)) ::UnityEngine::Color32 s_DefaultColor;

  /// @brief Field s_DefaultTangent, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_s_DefaultTangent, put = setStaticF_s_DefaultTangent)) ::UnityEngine::Vector4 s_DefaultTangent;

  /// @brief Field simpleVert, offset 0xffffffff, size 0x6c
  static __declspec(property(get = getStaticF_simpleVert, put = setStaticF_simpleVert)) ::UnityEngine::UIVertex simpleVert;

  static inline ::UnityEngine::Color32 getStaticF_s_DefaultColor();

  static inline ::UnityEngine::Vector4 getStaticF_s_DefaultTangent();

  static inline ::UnityEngine::UIVertex getStaticF_simpleVert();

  static inline void setStaticF_s_DefaultColor(::UnityEngine::Color32 value);

  static inline void setStaticF_s_DefaultTangent(::UnityEngine::Vector4 value);

  static inline void setStaticF_simpleVert(::UnityEngine::UIVertex value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr UIVertex();

  // Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value:
  // None }, CppParam { name: "tangent", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Color32", modifiers: "", def_value: None },
  // CppParam { name: "uv0", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "uv1", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name:
  // "uv2", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "uv3", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }]
  constexpr UIVertex(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 normal, ::UnityEngine::Vector4 tangent, ::UnityEngine::Color32 color, ::UnityEngine::Vector4 uv0,
                     ::UnityEngine::Vector4 uv1, ::UnityEngine::Vector4 uv2, ::UnityEngine::Vector4 uv3) noexcept;

  /// @brief Field position, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 position;

  /// @brief Field normal, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Vector3 normal;

  /// @brief Field tangent, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Vector4 tangent;

  /// @brief Field color, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::Color32 color;

  /// @brief Field uv0, offset: 0x2c, size: 0x10, def value: None
  ::UnityEngine::Vector4 uv0;

  /// @brief Field uv1, offset: 0x3c, size: 0x10, def value: None
  ::UnityEngine::Vector4 uv1;

  /// @brief Field uv2, offset: 0x4c, size: 0x10, def value: None
  ::UnityEngine::Vector4 uv2;

  /// @brief Field uv3, offset: 0x5c, size: 0x10, def value: None
  ::UnityEngine::Vector4 uv3;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18289 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x6c };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIVertex, 0x6c>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIVertex, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIVertex, normal) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIVertex, tangent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIVertex, color) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIVertex, uv0) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIVertex, uv1) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIVertex, uv2) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIVertex, uv3) == 0x5c, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIVertex, "UnityEngine", "UIVertex");
