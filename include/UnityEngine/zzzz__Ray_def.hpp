#pragma once
// IWYU pragma private; include "UnityEngine/Ray.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(Ray)
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct Ray;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Ray);
// Dependencies UnityEngine.Vector3
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Ray
struct CORDL_TYPE Ray {
public:
  // Declarations
  __declspec(property(get = get_direction, put = set_direction)) ::UnityEngine::Vector3 direction;

  __declspec(property(get = get_origin, put = set_origin)) ::UnityEngine::Vector3 origin;

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method GetPoint, addr 0x68b4230, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetPoint(float_t distance);

  /// @brief Method ToString, addr 0x68b4258, size 0x10, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x68b4268, size 0x198, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x68b4014, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction);

  /// @brief Method get_direction, addr 0x68b412c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_direction();

  /// @brief Method get_origin, addr 0x68b4114, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_origin();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method set_direction, addr 0x68b4138, size 0xf8, virtual false, abstract: false, final false
  inline void set_direction(::UnityEngine::Vector3 value);

  /// @brief Method set_origin, addr 0x68b4120, size 0xc, virtual false, abstract: false, final false
  inline void set_origin(::UnityEngine::Vector3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Ray();

  // Ctor Parameters [CppParam { name: "m_Origin", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Direction", ty: "::UnityEngine::Vector3", modifiers: "",
  // def_value: None }]
  constexpr Ray(::UnityEngine::Vector3 m_Origin, ::UnityEngine::Vector3 m_Direction) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10096 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_Origin, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Origin;

  /// @brief Field m_Direction, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Direction;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Ray, m_Origin) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Ray, m_Direction) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Ray, 0x18>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Ray, "UnityEngine", "Ray");
