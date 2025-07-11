#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/SDKVector3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(SDKVector3)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKVector3;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::SDKVector3);
// Dependencies
namespace LIV::SDK::Unity {
// Is value type: true
// CS Name: LIV.SDK.Unity.SDKVector3
struct CORDL_TYPE SDKVector3 {
public:
  // Declarations
  /// @brief Method ToString, addr 0x3ac674c, size 0xc4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_forward, addr 0x3ac66d8, size 0x10, virtual false, abstract: false, final false
  static inline ::LIV::SDK::Unity::SDKVector3 get_forward();

  /// @brief Method get_one, addr 0x3ac66c8, size 0x10, virtual false, abstract: false, final false
  static inline ::LIV::SDK::Unity::SDKVector3 get_one();

  /// @brief Method get_right, addr 0x3ac66f8, size 0x10, virtual false, abstract: false, final false
  static inline ::LIV::SDK::Unity::SDKVector3 get_right();

  /// @brief Method get_up, addr 0x3ac66e8, size 0x10, virtual false, abstract: false, final false
  static inline ::LIV::SDK::Unity::SDKVector3 get_up();

  /// @brief Method get_zero, addr 0x3ac66b8, size 0x10, virtual false, abstract: false, final false
  static inline ::LIV::SDK::Unity::SDKVector3 get_zero();

  /// @brief Method op_Addition, addr 0x3ac670c, size 0x10, virtual false, abstract: false, final false
  static inline ::LIV::SDK::Unity::SDKVector3 op_Addition(::LIV::SDK::Unity::SDKVector3 lhs, ::LIV::SDK::Unity::SDKVector3 rhs);

  /// @brief Method op_Implicit, addr 0x3ac5ce8, size 0x4, virtual false, abstract: false, final false
  static inline ::LIV::SDK::Unity::SDKVector3 op_Implicit___LIV__SDK__Unity__SDKVector3(::UnityEngine::Vector3 v);

  /// @brief Method op_Implicit, addr 0x3ac6708, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 op_Implicit___UnityEngine__Vector3(::LIV::SDK::Unity::SDKVector3 v);

  /// @brief Method op_Multiply, addr 0x3ac672c, size 0x10, virtual false, abstract: false, final false
  static inline ::LIV::SDK::Unity::SDKVector3 op_Multiply(::LIV::SDK::Unity::SDKVector3 lhs, ::LIV::SDK::Unity::SDKVector3 rhs);

  /// @brief Method op_Multiply, addr 0x3ac673c, size 0x10, virtual false, abstract: false, final false
  static inline ::LIV::SDK::Unity::SDKVector3 op_Multiply(::LIV::SDK::Unity::SDKVector3 lhs, float_t rhs);

  /// @brief Method op_Subtraction, addr 0x3ac671c, size 0x10, virtual false, abstract: false, final false
  static inline ::LIV::SDK::Unity::SDKVector3 op_Subtraction(::LIV::SDK::Unity::SDKVector3 lhs, ::LIV::SDK::Unity::SDKVector3 rhs);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SDKVector3();

  // Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "float_t",
  // modifiers: "", def_value: None }]
  constexpr SDKVector3(float_t x, float_t y, float_t z) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17329 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  float_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  float_t y;

  /// @brief Field z, offset: 0x8, size: 0x4, def value: None
  float_t z;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::LIV::SDK::Unity::SDKVector3, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKVector3, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKVector3, z) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::SDKVector3, 0xc>, "Size mismatch!");

} // namespace LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKVector3, "LIV.SDK.Unity", "SDKVector3");
