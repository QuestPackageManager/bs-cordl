#pragma once
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
namespace UnityEngine {
struct Vector3;
}
namespace System {
class IFormattable;
}
// Forward declare root types
namespace UnityEngine {
struct Ray;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Ray);
// Type: UnityEngine::Ray
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10169))
// CS Name: ::UnityEngine::Ray
struct CORDL_TYPE Ray {
public:
  // Declarations
  __declspec(property(get = get_origin, put = set_origin))::UnityEngine::Vector3 origin;

  __declspec(property(get = get_direction, put = set_direction))::UnityEngine::Vector3 direction;

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method .ctor addr 0x2ccbd2c size 0xec virtual false final false
  inline void _ctor(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction);

  /// @brief Method get_origin addr 0x2cc9c34 size 0xc virtual false final false
  inline ::UnityEngine::Vector3 get_origin();

  /// @brief Method set_origin addr 0x2ccbe18 size 0xc virtual false final false
  inline void set_origin(::UnityEngine::Vector3 value);

  /// @brief Method get_direction addr 0x2cc9c28 size 0xc virtual false final false
  inline ::UnityEngine::Vector3 get_direction();

  /// @brief Method set_direction addr 0x2ccbe24 size 0xe4 virtual false final false
  inline void set_direction(::UnityEngine::Vector3 value);

  /// @brief Method GetPoint addr 0x2ccbf08 size 0x28 virtual false final false
  inline ::UnityEngine::Vector3 GetPoint(float_t distance);

  /// @brief Method ToString addr 0x2ccbf30 size 0xc virtual true final false
  inline ::StringW ToString();

  /// @brief Method ToString addr 0x2ccbf3c size 0x188 virtual true final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  // Ctor Parameters [CppParam { name: "m_Origin", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Direction", ty: "::UnityEngine::Vector3", modifiers: "",
  // def_value: None }]
  constexpr Ray(::UnityEngine::Vector3 m_Origin, ::UnityEngine::Vector3 m_Direction) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Ray();

  /// @brief Field m_Origin, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Origin;

  /// @brief Field m_Direction, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Direction;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Ray, 0x18>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Ray, "UnityEngine", "Ray");
