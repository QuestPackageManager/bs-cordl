#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Vector4)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class IFormattable;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector2;
}
namespace System {
class IFormatProvider;
}
// Forward declare root types
namespace UnityEngine {
struct Vector4;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Vector4);
// Type: UnityEngine::Vector4
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10246))
// CS Name: ::UnityEngine::Vector4
struct CORDL_TYPE Vector4 {
public:
  // Declarations
  /// @brief Field zeroVector, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_zeroVector, put = setStaticF_zeroVector))::UnityEngine::Vector4 zeroVector;

  /// @brief Field oneVector, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_oneVector, put = setStaticF_oneVector))::UnityEngine::Vector4 oneVector;

  /// @brief Field positiveInfinityVector, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_positiveInfinityVector, put = setStaticF_positiveInfinityVector))::UnityEngine::Vector4 positiveInfinityVector;

  /// @brief Field negativeInfinityVector, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_negativeInfinityVector, put = setStaticF_negativeInfinityVector))::UnityEngine::Vector4 negativeInfinityVector;

  __declspec(property(get = get_Item, put = set_Item)) float_t Item[];

  __declspec(property(get = get_magnitude)) float_t magnitude;

  __declspec(property(get = get_sqrMagnitude)) float_t sqrMagnitude;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Vector4>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Vector4>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  static inline void setStaticF_zeroVector(::UnityEngine::Vector4 value);

  static inline ::UnityEngine::Vector4 getStaticF_zeroVector();

  static inline void setStaticF_oneVector(::UnityEngine::Vector4 value);

  static inline ::UnityEngine::Vector4 getStaticF_oneVector();

  static inline void setStaticF_positiveInfinityVector(::UnityEngine::Vector4 value);

  static inline ::UnityEngine::Vector4 getStaticF_positiveInfinityVector();

  static inline void setStaticF_negativeInfinityVector(::UnityEngine::Vector4 value);

  static inline ::UnityEngine::Vector4 getStaticF_negativeInfinityVector();

  /// @brief Method get_Item, addr 0x2cd78e0, size 0x94, virtual false, abstract: false, final false
  inline float_t get_Item(int32_t index);

  /// @brief Method set_Item, addr 0x2cd7974, size 0x94, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, float_t value);

  /// @brief Method .ctor, addr 0x2cd7a08, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t x, float_t y, float_t z, float_t w);

  /// @brief Method Scale, addr 0x2cd7a14, size 0x1c, virtual false, abstract: false, final false
  inline void Scale(::UnityEngine::Vector4 scale);

  /// @brief Method GetHashCode, addr 0x2cd7a30, size 0x64, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Equals, addr 0x2cd7a94, size 0xa8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals, addr 0x2cd7b3c, size 0x3c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Vector4 other);

  /// @brief Method Normalize, addr 0x2cd7b78, size 0xe0, virtual false, abstract: false, final false
  inline void Normalize();

  /// @brief Method Dot, addr 0x2cd7c58, size 0x20, virtual false, abstract: false, final false
  static inline float_t Dot(::UnityEngine::Vector4 a, ::UnityEngine::Vector4 b);

  /// @brief Method Magnitude, addr 0x2cd7c78, size 0x8c, virtual false, abstract: false, final false
  static inline float_t Magnitude(::UnityEngine::Vector4 a);

  /// @brief Method get_magnitude, addr 0x2cd7d04, size 0x80, virtual false, abstract: false, final false
  inline float_t get_magnitude();

  /// @brief Method get_sqrMagnitude, addr 0x2cd7d84, size 0x28, virtual false, abstract: false, final false
  inline float_t get_sqrMagnitude();

  /// @brief Method get_zero, addr 0x2cd7dac, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 get_zero();

  /// @brief Method get_one, addr 0x2cd7df8, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 get_one();

  /// @brief Method op_Addition, addr 0x2cd7e44, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 op_Addition(::UnityEngine::Vector4 a, ::UnityEngine::Vector4 b);

  /// @brief Method op_Subtraction, addr 0x2cd7e58, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 op_Subtraction(::UnityEngine::Vector4 a, ::UnityEngine::Vector4 b);

  /// @brief Method op_Multiply, addr 0x2cd7e6c, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 op_Multiply(::UnityEngine::Vector4 a, float_t d);

  /// @brief Method op_Division, addr 0x2cd7e80, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 op_Division(::UnityEngine::Vector4 a, float_t d);

  /// @brief Method op_Equality, addr 0x2cd7e94, size 0x40, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Vector4 lhs, ::UnityEngine::Vector4 rhs);

  /// @brief Method op_Inequality, addr 0x2cd7ed4, size 0x40, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::Vector4 lhs, ::UnityEngine::Vector4 rhs);

  /// @brief Method op_Implicit, addr 0x2cd7f14, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 op_Implicit___UnityEngine__Vector4(::UnityEngine::Vector3 v);

  /// @brief Method op_Implicit, addr 0x2cd7f1c, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 op_Implicit___UnityEngine__Vector3(::UnityEngine::Vector4 v);

  /// @brief Method op_Implicit, addr 0x2cd7f20, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 op_Implicit___UnityEngine__Vector4(::UnityEngine::Vector2 v);

  /// @brief Method op_Implicit, addr 0x2cd7f2c, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 op_Implicit___UnityEngine__Vector2(::UnityEngine::Vector4 v);

  /// @brief Method ToString, addr 0x2cd7f30, size 0xc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x2cd8144, size 0x8, virtual false, abstract: false, final false
  inline ::StringW ToString(::StringW format);

  /// @brief Method ToString, addr 0x2cd7f3c, size 0x208, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  // Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "w", ty: "float_t", modifiers: "", def_value: None }]
  constexpr Vector4(float_t x, float_t y, float_t z, float_t w) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector4();

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  float_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  float_t y;

  /// @brief Field z, offset: 0x8, size: 0x4, def value: None
  float_t z;

  /// @brief Field w, offset: 0xc, size: 0x4, def value: None
  float_t w;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field kEpsilon offset 0xffffffff size 0x4
  static constexpr float_t kEpsilon{ 0.00001 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Vector4, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Vector4, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Vector4, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Vector4, z) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Vector4, w) == 0xc, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Vector4, "UnityEngine", "Vector4");
