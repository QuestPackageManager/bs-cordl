#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SphericalHarmonicsL1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SphericalHarmonicsL1)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct SphericalHarmonicsL1;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::SphericalHarmonicsL1);
// Dependencies UnityEngine.Vector4
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.SphericalHarmonicsL1
struct CORDL_TYPE SphericalHarmonicsL1 {
public:
  // Declarations
  /// @brief Field zero, offset 0xffffffff, size 0x30
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::UnityEngine::Rendering::SphericalHarmonicsL1 zero;

  /// @brief Method Equals, addr 0x65e24ac, size 0xd8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method GetHashCode, addr 0x65e2584, size 0x114, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::UnityEngine::Rendering::SphericalHarmonicsL1 getStaticF_zero();

  /// @brief Method op_Addition, addr 0x65e22cc, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::SphericalHarmonicsL1 op_Addition(::UnityEngine::Rendering::SphericalHarmonicsL1 lhs, ::UnityEngine::Rendering::SphericalHarmonicsL1 rhs);

  /// @brief Method op_Division, addr 0x65e233c, size 0x24, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::SphericalHarmonicsL1 op_Division(::UnityEngine::Rendering::SphericalHarmonicsL1 lhs, float_t rhs);

  /// @brief Method op_Equality, addr 0x65e2360, size 0xb0, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Rendering::SphericalHarmonicsL1 lhs, ::UnityEngine::Rendering::SphericalHarmonicsL1 rhs);

  /// @brief Method op_Inequality, addr 0x65e2410, size 0x9c, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::Rendering::SphericalHarmonicsL1 lhs, ::UnityEngine::Rendering::SphericalHarmonicsL1 rhs);

  /// @brief Method op_Multiply, addr 0x65e231c, size 0x20, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::SphericalHarmonicsL1 op_Multiply(::UnityEngine::Rendering::SphericalHarmonicsL1 lhs, float_t rhs);

  /// @brief Method op_Subtraction, addr 0x65e22f4, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::SphericalHarmonicsL1 op_Subtraction(::UnityEngine::Rendering::SphericalHarmonicsL1 lhs, ::UnityEngine::Rendering::SphericalHarmonicsL1 rhs);

  static inline void setStaticF_zero(::UnityEngine::Rendering::SphericalHarmonicsL1 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SphericalHarmonicsL1();

  // Ctor Parameters [CppParam { name: "shAr", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "shAg", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None },
  // CppParam { name: "shAb", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }]
  constexpr SphericalHarmonicsL1(::UnityEngine::Vector4 shAr, ::UnityEngine::Vector4 shAg, ::UnityEngine::Vector4 shAb) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12136 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field shAr, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Vector4 shAr;

  /// @brief Field shAg, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Vector4 shAg;

  /// @brief Field shAb, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Vector4 shAb;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::SphericalHarmonicsL1, shAr) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SphericalHarmonicsL1, shAg) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SphericalHarmonicsL1, shAb) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::SphericalHarmonicsL1, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SphericalHarmonicsL1, "UnityEngine.Rendering", "SphericalHarmonicsL1");
