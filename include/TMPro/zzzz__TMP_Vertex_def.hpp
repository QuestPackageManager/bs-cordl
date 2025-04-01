#pragma once
// IWYU pragma private; include "TMPro/TMP_Vertex.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TMP_Vertex)
// Forward declare root types
namespace TMPro {
struct TMP_Vertex;
}
// Write type traits
MARK_VAL_T(::TMPro::TMP_Vertex);
// Dependencies UnityEngine.Color32, UnityEngine.Vector2, UnityEngine.Vector3
namespace TMPro {
// Is value type: true
// CS Name: TMPro.TMP_Vertex
struct CORDL_TYPE TMP_Vertex {
public:
  // Declarations
  /// @brief Field k_Zero, offset 0xffffffff, size 0x28
  __declspec(property(get = getStaticF_k_Zero, put = setStaticF_k_Zero)) ::TMPro::TMP_Vertex k_Zero;

  static inline ::TMPro::TMP_Vertex getStaticF_k_Zero();

  /// @brief Method get_zero, addr 0x47c11b8, size 0x68, virtual false, abstract: false, final false
  static inline ::TMPro::TMP_Vertex get_zero();

  static inline void setStaticF_k_Zero(::TMPro::TMP_Vertex value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_Vertex();

  // Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "uv", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None
  // }, CppParam { name: "uv2", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "uv4", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name:
  // "color", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }]
  constexpr TMP_Vertex(::UnityEngine::Vector3 position, ::UnityEngine::Vector2 uv, ::UnityEngine::Vector2 uv2, ::UnityEngine::Vector2 uv4, ::UnityEngine::Color32 color) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14449 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_Vertex, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Vertex, uv) == 0xc, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Vertex, uv2) == 0x14, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Vertex, uv4) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Vertex, color) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_Vertex, 0x28>, "Size mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Vertex, "TMPro", "TMP_Vertex");
