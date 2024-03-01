#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SpriteBone)
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::U2D {
struct SpriteBone;
}
// Write type traits
MARK_VAL_T(::UnityEngine::U2D::SpriteBone);
// Type: UnityEngine.U2D::SpriteBone
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::U2D {
// Is value type: true
// CS Name: ::UnityEngine.U2D::SpriteBone
struct CORDL_TYPE SpriteBone {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpriteBone();

  // Ctor Parameters [CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Guid", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "m_Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name:
  // "m_Length", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_ParentId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Color", ty:
  // "::UnityEngine::Color32", modifiers: "", def_value: None }]
  constexpr SpriteBone(::StringW m_Name, ::StringW m_Guid, ::UnityEngine::Vector3 m_Position, ::UnityEngine::Quaternion m_Rotation, float_t m_Length, int32_t m_ParentId,
                       ::UnityEngine::Color32 m_Color) noexcept;

  /// @brief Field m_Name, offset: 0x0, size: 0x8, def value: None
  ::StringW m_Name;

  /// @brief Field m_Guid, offset: 0x8, size: 0x8, def value: None
  ::StringW m_Guid;

  /// @brief Field m_Position, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Position;

  /// @brief Field m_Rotation, offset: 0x1c, size: 0x10, def value: None
  ::UnityEngine::Quaternion m_Rotation;

  /// @brief Field m_Length, offset: 0x2c, size: 0x4, def value: None
  float_t m_Length;

  /// @brief Field m_ParentId, offset: 0x30, size: 0x4, def value: None
  int32_t m_ParentId;

  /// @brief Field m_Color, offset: 0x34, size: 0x4, def value: None
  ::UnityEngine::Color32 m_Color;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::U2D::SpriteBone, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::U2D::SpriteBone, m_Name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::U2D::SpriteBone, m_Guid) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::U2D::SpriteBone, m_Position) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::U2D::SpriteBone, m_Rotation) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::U2D::SpriteBone, m_Length) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::U2D::SpriteBone, m_ParentId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::U2D::SpriteBone, m_Color) == 0x34, "Offset mismatch!");

} // namespace UnityEngine::U2D
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::U2D::SpriteBone, "UnityEngine.U2D", "SpriteBone");
