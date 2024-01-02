#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Matrix4x4)
namespace UnityEngine {
struct Vector3;
}
namespace System {
class Object;
}
namespace System {
class IFormattable;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace UnityEngine {
struct Vector4;
}
namespace System {
class IFormatProvider;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace UnityEngine {
struct Matrix4x4;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Matrix4x4);
// Type: UnityEngine::Matrix4x4
// SizeInfo { instance_size: 64, native_size: 64, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10245))
// CS Name: ::UnityEngine::Matrix4x4
struct CORDL_TYPE Matrix4x4 {
public:
  // Declarations
  /// @brief Field zeroMatrix, offset 0xffffffff, size 0x40
  static __declspec(property(get = getStaticF_zeroMatrix, put = setStaticF_zeroMatrix))::UnityEngine::Matrix4x4 zeroMatrix;

  /// @brief Field identityMatrix, offset 0xffffffff, size 0x40
  static __declspec(property(get = getStaticF_identityMatrix, put = setStaticF_identityMatrix))::UnityEngine::Matrix4x4 identityMatrix;

  __declspec(property(get = get_Item, put = set_Item)) float_t Item[];

  __declspec(property(get = get_Item, put = set_Item)) float_t Item[];

  __declspec(property(get = get_rotation))::UnityEngine::Quaternion rotation;

  __declspec(property(get = get_lossyScale))::UnityEngine::Vector3 lossyScale;

  __declspec(property(get = get_inverse))::UnityEngine::Matrix4x4 inverse;

  __declspec(property(get = get_transpose))::UnityEngine::Matrix4x4 transpose;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Matrix4x4>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Matrix4x4>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  static inline void setStaticF_zeroMatrix(::UnityEngine::Matrix4x4 value);

  static inline ::UnityEngine::Matrix4x4 getStaticF_zeroMatrix();

  static inline void setStaticF_identityMatrix(::UnityEngine::Matrix4x4 value);

  static inline ::UnityEngine::Matrix4x4 getStaticF_identityMatrix();

  /// @brief Method .ctor, addr 0x2cd5dcc, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector4 column0, ::UnityEngine::Vector4 column1, ::UnityEngine::Vector4 column2, ::UnityEngine::Vector4 column3);

  /// @brief Method get_Item, addr 0x2cd5de8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_Item(int32_t row, int32_t column);

  /// @brief Method set_Item, addr 0x2cd5ee4, size 0x8, virtual false, abstract: false, final false
  inline void set_Item(int32_t row, int32_t column, float_t value);

  /// @brief Method get_Item, addr 0x2cd5df0, size 0xf4, virtual false, abstract: false, final false
  inline float_t get_Item(int32_t index);

  /// @brief Method set_Item, addr 0x2cd5eec, size 0xf4, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, float_t value);

  /// @brief Method GetHashCode, addr 0x2cd5fe0, size 0x194, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Equals, addr 0x2cd624c, size 0x174, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals, addr 0x2cd63c0, size 0x108, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Matrix4x4 other);

  /// @brief Method op_Multiply, addr 0x2cd64c8, size 0x1a8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 op_Multiply(::UnityEngine::Matrix4x4 lhs, ::UnityEngine::Matrix4x4 rhs);

  /// @brief Method op_Multiply, addr 0x2cd6670, size 0x34, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 op_Multiply(::UnityEngine::Matrix4x4 lhs, ::UnityEngine::Vector4 vector);

  /// @brief Method op_Equality, addr 0x2cd66a4, size 0xe4, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Matrix4x4 lhs, ::UnityEngine::Matrix4x4 rhs);

  /// @brief Method op_Inequality, addr 0x2cd6788, size 0x48, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::Matrix4x4 lhs, ::UnityEngine::Matrix4x4 rhs);

  /// @brief Method GetColumn, addr 0x2cd6174, size 0xd8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetColumn(int32_t index);

  /// @brief Method GetRow, addr 0x2cd67d0, size 0xd8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetRow(int32_t index);

  /// @brief Method SetColumn, addr 0x2cd68a8, size 0x78, virtual false, abstract: false, final false
  inline void SetColumn(int32_t index, ::UnityEngine::Vector4 column);

  /// @brief Method MultiplyPoint, addr 0x2cd6920, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 MultiplyPoint(::UnityEngine::Vector3 point);

  /// @brief Method MultiplyPoint3x4, addr 0x2cd69a0, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 MultiplyPoint3x4(::UnityEngine::Vector3 point);

  /// @brief Method MultiplyVector, addr 0x2cd69f8, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 MultiplyVector(::UnityEngine::Vector3 vector);

  /// @brief Method Scale, addr 0x2cd6a40, size 0x2c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 Scale(::UnityEngine::Vector3 vector);

  /// @brief Method Rotate, addr 0x2cd6a6c, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 Rotate(::UnityEngine::Quaternion q);

  /// @brief Method get_zero, addr 0x2cd6b04, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 get_zero();

  /// @brief Method get_identity, addr 0x2cd6b5c, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 get_identity();

  /// @brief Method ToString, addr 0x2cd6bb4, size 0xc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x2cd6bc0, size 0x508, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method GetRotation, addr 0x2cd70c8, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetRotation();

  /// @brief Method GetLossyScale, addr 0x2cd7164, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetLossyScale();

  /// @brief Method get_rotation, addr 0x2cd7204, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_rotation();

  /// @brief Method get_lossyScale, addr 0x2cd7208, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_lossyScale();

  /// @brief Method TRS, addr 0x2cd720c, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 TRS(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion q, ::UnityEngine::Vector3 s);

  /// @brief Method SetTRS, addr 0x2cd72f8, size 0x40, virtual false, abstract: false, final false
  inline void SetTRS(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion q, ::UnityEngine::Vector3 s);

  /// @brief Method Inverse3DAffine, addr 0x2cd7338, size 0x44, virtual false, abstract: false, final false
  static inline bool Inverse3DAffine(::UnityEngine::Matrix4x4 input, ByRef<::UnityEngine::Matrix4x4> result);

  /// @brief Method Inverse, addr 0x2cd73c0, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 Inverse(::UnityEngine::Matrix4x4 m);

  /// @brief Method get_inverse, addr 0x2cd7470, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_inverse();

  /// @brief Method Transpose, addr 0x2cd74f8, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 Transpose(::UnityEngine::Matrix4x4 m);

  /// @brief Method get_transpose, addr 0x2cd75a8, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_transpose();

  /// @brief Method Ortho, addr 0x2cd7630, size 0xac, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 Ortho(float_t left, float_t right, float_t bottom, float_t top, float_t zNear, float_t zFar);

  /// @brief Method Perspective, addr 0x2cd7760, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 Perspective(float_t fov, float_t aspect, float_t zNear, float_t zFar);

  /// @brief Method GetRotation_Injected, addr 0x2cd7120, size 0x44, virtual false, abstract: false, final false
  static inline void GetRotation_Injected(ByRef<::UnityEngine::Matrix4x4> _unity_self, ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method GetLossyScale_Injected, addr 0x2cd71c0, size 0x44, virtual false, abstract: false, final false
  static inline void GetLossyScale_Injected(ByRef<::UnityEngine::Matrix4x4> _unity_self, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method TRS_Injected, addr 0x2cd729c, size 0x5c, virtual false, abstract: false, final false
  static inline void TRS_Injected(ByRef<::UnityEngine::Vector3> pos, ByRef<::UnityEngine::Quaternion> q, ByRef<::UnityEngine::Vector3> s, ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method Inverse3DAffine_Injected, addr 0x2cd737c, size 0x44, virtual false, abstract: false, final false
  static inline bool Inverse3DAffine_Injected(ByRef<::UnityEngine::Matrix4x4> input, ByRef<::UnityEngine::Matrix4x4> result);

  /// @brief Method Inverse_Injected, addr 0x2cd742c, size 0x44, virtual false, abstract: false, final false
  static inline void Inverse_Injected(ByRef<::UnityEngine::Matrix4x4> m, ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method Transpose_Injected, addr 0x2cd7564, size 0x44, virtual false, abstract: false, final false
  static inline void Transpose_Injected(ByRef<::UnityEngine::Matrix4x4> m, ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method Ortho_Injected, addr 0x2cd76dc, size 0x84, virtual false, abstract: false, final false
  static inline void Ortho_Injected(float_t left, float_t right, float_t bottom, float_t top, float_t zNear, float_t zFar, ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method Perspective_Injected, addr 0x2cd77f4, size 0x6c, virtual false, abstract: false, final false
  static inline void Perspective_Injected(float_t fov, float_t aspect, float_t zNear, float_t zFar, ByRef<::UnityEngine::Matrix4x4> ret);

  // Ctor Parameters [CppParam { name: "m00", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m10", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m20", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "m30", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m01", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "m11", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m21", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m31", ty: "float_t", modifiers:
  // "", def_value: None }, CppParam { name: "m02", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m12", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m22",
  // ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m32", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m03", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "m13", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m23", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m33", ty: "float_t", modifiers:
  // "", def_value: None }]
  constexpr Matrix4x4(float_t m00, float_t m10, float_t m20, float_t m30, float_t m01, float_t m11, float_t m21, float_t m31, float_t m02, float_t m12, float_t m22, float_t m32, float_t m03,
                      float_t m13, float_t m23, float_t m33) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Matrix4x4();

  /// @brief Field m00, offset: 0x0, size: 0x4, def value: None
  float_t m00;

  /// @brief Field m10, offset: 0x4, size: 0x4, def value: None
  float_t m10;

  /// @brief Field m20, offset: 0x8, size: 0x4, def value: None
  float_t m20;

  /// @brief Field m30, offset: 0xc, size: 0x4, def value: None
  float_t m30;

  /// @brief Field m01, offset: 0x10, size: 0x4, def value: None
  float_t m01;

  /// @brief Field m11, offset: 0x14, size: 0x4, def value: None
  float_t m11;

  /// @brief Field m21, offset: 0x18, size: 0x4, def value: None
  float_t m21;

  /// @brief Field m31, offset: 0x1c, size: 0x4, def value: None
  float_t m31;

  /// @brief Field m02, offset: 0x20, size: 0x4, def value: None
  float_t m02;

  /// @brief Field m12, offset: 0x24, size: 0x4, def value: None
  float_t m12;

  /// @brief Field m22, offset: 0x28, size: 0x4, def value: None
  float_t m22;

  /// @brief Field m32, offset: 0x2c, size: 0x4, def value: None
  float_t m32;

  /// @brief Field m03, offset: 0x30, size: 0x4, def value: None
  float_t m03;

  /// @brief Field m13, offset: 0x34, size: 0x4, def value: None
  float_t m13;

  /// @brief Field m23, offset: 0x38, size: 0x4, def value: None
  float_t m23;

  /// @brief Field m33, offset: 0x3c, size: 0x4, def value: None
  float_t m33;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Matrix4x4, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Matrix4x4, m00) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Matrix4x4, m10) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Matrix4x4, m20) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Matrix4x4, m30) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Matrix4x4, m01) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Matrix4x4, m11) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Matrix4x4, m21) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Matrix4x4, m31) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Matrix4x4, m02) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Matrix4x4, m12) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Matrix4x4, m22) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Matrix4x4, m32) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Matrix4x4, m03) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Matrix4x4, m13) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Matrix4x4, m23) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Matrix4x4, m33) == 0x3c, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Matrix4x4, "UnityEngine", "Matrix4x4");
