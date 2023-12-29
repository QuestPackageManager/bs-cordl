#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TMP_Vertex)
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace TMPro {
struct TMP_Vertex;
}
// Write type traits
MARK_VAL_T(::TMPro::TMP_Vertex);
// Type: TMPro::TMP_Vertex
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10177)), TypeDefinitionIndex(TypeDefinitionIndex(10170)), TypeDefinitionIndex(TypeDefinitionIndex(10176))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12257))
// CS Name: ::TMPro::TMP_Vertex
struct CORDL_TYPE TMP_Vertex {
public:
  // Declarations
  /// @brief Field k_Zero, offset 0xffffffff, size 0x28
  static __declspec(property(get = getStaticF_k_Zero, put = setStaticF_k_Zero))::TMPro::TMP_Vertex k_Zero;

  static inline void setStaticF_k_Zero(::TMPro::TMP_Vertex value);

  static inline ::TMPro::TMP_Vertex getStaticF_k_Zero();

  /// @brief Method get_zero addr 0x2a7caac size 0x68 virtual false final false
  static inline ::TMPro::TMP_Vertex get_zero();

  // Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "uv", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None
  // }, CppParam { name: "uv2", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "uv4", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name:
  // "color", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }]
  constexpr TMP_Vertex(::UnityEngine::Vector3 position, ::UnityEngine::Vector2 uv, ::UnityEngine::Vector2 uv2, ::UnityEngine::Vector2 uv4, ::UnityEngine::Color32 color) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_Vertex();

  /// @brief Field position, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 position;

  /// @brief Field uv, offset: 0xc, size: 0x8, def value: None
  ::UnityEngine::Vector2 uv;

  /// @brief Field uv2, offset: 0x14, size: 0x8, def value: None
  ::UnityEngine::Vector2 uv2;

  /// @brief Field uv4, offset: 0x1c, size: 0x8, def value: None
  ::UnityEngine::Vector2 uv4;

  /// @brief Field color, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::Color32 color;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_Vertex, 0x28>, "Size mismatch!");

static_assert(offsetof(::TMPro::TMP_Vertex, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Vertex, uv) == 0xc, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Vertex, uv2) == 0x14, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Vertex, uv4) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Vertex, color) == 0x24, "Offset mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Vertex, "TMPro", "TMP_Vertex");
