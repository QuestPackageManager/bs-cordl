#pragma once
// IWYU pragma private; include "UnityEngine/Ray2D.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IFormattable_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(Ray2D)
namespace System {
class IFormatProvider;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
struct Ray2D;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Ray2D);
// Dependencies System.IFormattable, UnityEngine.Vector2
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Ray2D
struct CORDL_TYPE Ray2D {
public:
  // Declarations
  __declspec(property(get = get_direction)) ::UnityEngine::Vector2 direction;

  __declspec(property(get = get_origin)) ::UnityEngine::Vector2 origin;

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method GetPoint, addr 0x48724a0, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetPoint(float_t distance);

  /// @brief Method ToString, addr 0x48724b4, size 0x10, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x48724c4, size 0x188, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x48723c8, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction);

  /// @brief Method get_direction, addr 0x4872498, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_direction();

  /// @brief Method get_origin, addr 0x4872490, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_origin();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Ray2D();

  // Ctor Parameters [CppParam { name: "m_Origin", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_Direction", ty: "::UnityEngine::Vector2", modifiers: "",
  // def_value: None }]
  constexpr Ray2D(::UnityEngine::Vector2 m_Origin, ::UnityEngine::Vector2 m_Direction) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10706 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Origin, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Vector2 m_Origin;

  /// @brief Field m_Direction, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Vector2 m_Direction;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Ray2D, m_Origin) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Ray2D, m_Direction) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Ray2D, 0x10>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Ray2D, "UnityEngine", "Ray2D");
