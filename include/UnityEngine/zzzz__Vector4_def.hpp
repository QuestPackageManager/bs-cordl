#pragma once
// IWYU pragma private; include "UnityEngine/Vector4.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Vector4)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct Vector4;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Vector4);
DEFINE_IL2CPP_CLASS(::UnityEngine::Vector4, "UnityEngine", "Vector4");
// [NativeHeader("Runtime/Math/Vector4.h")]
// [Il2CppEagerStaticClassConstruction]
// [RequiredByNativeCode(Optional = true, GenerateProxy = true)]
// [NativeClass("Vector4f")]
// [DefaultMember("Item")]
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Vector4
struct CORDL_TYPE Vector4 {
public:
  // Declarations
  __declspec(property(get = get_Item, put = set_Item)) float_t Item[];

  __declspec(property(get = get_magnitude)) float_t magnitude;

  /// @brief Field negativeInfinityVector, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_negativeInfinityVector, put = setStaticF_negativeInfinityVector)) ::UnityEngine::Vector4 negativeInfinityVector;

  __declspec(property(get = get_normalized)) ::UnityEngine::Vector4 normalized;

  /// @brief Field oneVector, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_oneVector, put = setStaticF_oneVector)) ::UnityEngine::Vector4 oneVector;

  /// @brief Field positiveInfinityVector, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_positiveInfinityVector, put = setStaticF_positiveInfinityVector)) ::UnityEngine::Vector4 positiveInfinityVector;

  __declspec(property(get = get_sqrMagnitude)) float_t sqrMagnitude;

  /// @brief Field zeroVector, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_zeroVector, put = setStaticF_zeroVector)) ::UnityEngine::Vector4 zeroVector;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Vector4>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Vector4>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Dot, addr 0x6f2e9e4, size 0x20, virtual false, abstract: false, final false
  static inline float_t Dot(::UnityEngine::Vector4 a, ::UnityEngine::Vector4 b);

  /// @brief Method Dot, addr 0x6f2ea04, size 0x28, virtual false, abstract: false, final false
  static inline float_t Dot(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector4> a, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector4> b);

  /// [IsReadOnly]
  /// @brief Method Equals, addr 0x6f2e644, size 0xac, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// [IsReadOnly]
  /// @brief Method Equals, addr 0x6f2e6f0, size 0x3c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Vector4 other);

  /// [IsReadOnly]
  /// @brief Method Equals, addr 0x6f2e72c, size 0x4c, virtual false, abstract: false, final false
  inline bool Equals(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector4> other);

  /// [IsReadOnly]
  /// @brief Method GetHashCode, addr 0x6f2e5d8, size 0x6c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Lerp, addr 0x6f2e56c, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 Lerp(::UnityEngine::Vector4 a, ::UnityEngine::Vector4 b, float_t t);

  /// @brief Method Magnitude, addr 0x6f2ea2c, size 0x80, virtual false, abstract: false, final false
  static inline float_t Magnitude(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector4> a);

  /// @brief Method Normalize, addr 0x6f2e778, size 0xe4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 Normalize(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector4> a);

  /// @brief Method Normalize, addr 0x6f2e85c, size 0xa4, virtual false, abstract: false, final false
  inline void Normalize();

  /// @brief Method Scale, addr 0x6f2e5bc, size 0x1c, virtual false, abstract: false, final false
  inline void Scale(::UnityEngine::Vector4 scale);

  /// @brief Method Set, addr 0x6f2e560, size 0xc, virtual false, abstract: false, final false
  inline void Set(float_t newX, float_t newY, float_t newZ, float_t newW);

  /// [IsReadOnly]
  /// @brief Method ToString, addr 0x6f2ed08, size 0x10, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// [IsReadOnly]
  /// @brief Method ToString, addr 0x6f2ed18, size 0xc, virtual false, abstract: false, final false
  inline ::StringW ToString(::StringW format);

  /// [IsReadOnly]
  /// @brief Method ToString, addr 0x6f2ed24, size 0x218, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x6f2e554, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t x, float_t y);

  /// @brief Method .ctor, addr 0x6f2e544, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(float_t x, float_t y, float_t z);

  /// @brief Method .ctor, addr 0x6f2e538, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t x, float_t y, float_t z, float_t w);

  static inline ::UnityEngine::Vector4 getStaticF_negativeInfinityVector();

  static inline ::UnityEngine::Vector4 getStaticF_oneVector();

  static inline ::UnityEngine::Vector4 getStaticF_positiveInfinityVector();

  static inline ::UnityEngine::Vector4 getStaticF_zeroVector();

  /// [IsReadOnly]
  /// @brief Method get_Item, addr 0x6f2e420, size 0x8c, virtual false, abstract: false, final false
  inline float_t get_Item(int32_t index);

  /// [IsReadOnly]
  /// @brief Method get_magnitude, addr 0x6f2eaac, size 0x80, virtual false, abstract: false, final false
  inline float_t get_magnitude();

  /// [IsReadOnly]
  /// @brief Method get_normalized, addr 0x6f2e900, size 0xe4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 get_normalized();

  /// @brief Method get_one, addr 0x6f2eba0, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 get_one();

  /// [IsReadOnly]
  /// @brief Method get_sqrMagnitude, addr 0x6f2eb2c, size 0x24, virtual false, abstract: false, final false
  inline float_t get_sqrMagnitude();

  /// @brief Method get_zero, addr 0x6f2eb50, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 get_zero();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Vector4>"
  constexpr ::System::IEquatable_1<::UnityEngine::Vector4>* i___System__IEquatable_1___UnityEngine__Vector4_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x6f2ebf0, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 op_Addition(::UnityEngine::Vector4 a, ::UnityEngine::Vector4 b);

  /// @brief Method op_Division, addr 0x6f2ec58, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 op_Division(::UnityEngine::Vector4 a, float_t d);

  /// @brief Method op_Equality, addr 0x6f2ec6c, size 0x40, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Vector4 lhs, ::UnityEngine::Vector4 rhs);

  /// @brief Method op_Implicit, addr 0x6f2ed04, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 op_Implicit___UnityEngine__Vector2(::UnityEngine::Vector4 v);

  /// @brief Method op_Implicit, addr 0x6f2ecf4, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 op_Implicit___UnityEngine__Vector3(::UnityEngine::Vector4 v);

  /// @brief Method op_Implicit, addr 0x6f2ecf8, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 op_Implicit___UnityEngine__Vector4(::UnityEngine::Vector2 v);

  /// @brief Method op_Implicit, addr 0x6f2ecec, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 op_Implicit___UnityEngine__Vector4(::UnityEngine::Vector3 v);

  /// @brief Method op_Inequality, addr 0x6f2ecac, size 0x40, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::Vector4 lhs, ::UnityEngine::Vector4 rhs);

  /// @brief Method op_Multiply, addr 0x6f2ec2c, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 op_Multiply(::UnityEngine::Vector4 a, float_t d);

  /// @brief Method op_Multiply, addr 0x6f2ec40, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 op_Multiply(float_t d, ::UnityEngine::Vector4 a);

  /// @brief Method op_Subtraction, addr 0x6f2ec04, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 op_Subtraction(::UnityEngine::Vector4 a, ::UnityEngine::Vector4 b);

  /// @brief Method op_UnaryNegation, addr 0x6f2ec18, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 op_UnaryNegation(::UnityEngine::Vector4 a);

  static inline void setStaticF_negativeInfinityVector(::UnityEngine::Vector4 value);

  static inline void setStaticF_oneVector(::UnityEngine::Vector4 value);

  static inline void setStaticF_positiveInfinityVector(::UnityEngine::Vector4 value);

  static inline void setStaticF_zeroVector(::UnityEngine::Vector4 value);

  /// @brief Method set_Item, addr 0x6f2e4ac, size 0x8c, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector4();

  // Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "z", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "w", ty: "float_t", modifiers: "", def_value: None, comment: None }]
  constexpr Vector4(float_t x, float_t y, float_t z, float_t w) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9848 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field kEpsilon offset 0xffffffff size 0x4
  static constexpr float_t kEpsilon{ static_cast<float_t>(1e-5f) };

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  float_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  float_t y;

  /// @brief Field z, offset: 0x8, size: 0x4, def value: None
  float_t z;

  /// @brief Field w, offset: 0xc, size: 0x4, def value: None
  float_t w;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Vector4, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Vector4, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Vector4, z) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Vector4, w) == 0xc, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Vector4) == 0x10, "Size mismatch!");

} // namespace UnityEngine
