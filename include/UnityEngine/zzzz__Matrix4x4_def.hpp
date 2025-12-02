#pragma once
// IWYU pragma private; include "UnityEngine/Matrix4x4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Matrix4x4)
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
struct FrustumPlanes;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine {
struct Matrix4x4;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Matrix4x4);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Matrix4x4
struct CORDL_TYPE Matrix4x4 {
public:
  // Declarations
  __declspec(property(get = get_Item, put = set_Item)) float_t Item[];

  __declspec(property(get = get_Item, put = set_Item)) float_t Item[];

  __declspec(property(get = get_decomposeProjection)) ::UnityEngine::FrustumPlanes decomposeProjection;

  /// @brief Field identityMatrix, offset 0xffffffff, size 0x40
  __declspec(property(get = getStaticF_identityMatrix, put = setStaticF_identityMatrix)) ::UnityEngine::Matrix4x4 identityMatrix;

  __declspec(property(get = get_inverse)) ::UnityEngine::Matrix4x4 inverse;

  __declspec(property(get = get_lossyScale)) ::UnityEngine::Vector3 lossyScale;

  __declspec(property(get = get_rotation)) ::UnityEngine::Quaternion rotation;

  __declspec(property(get = get_transpose)) ::UnityEngine::Matrix4x4 transpose;

  /// @brief Field zeroMatrix, offset 0xffffffff, size 0x40
  __declspec(property(get = getStaticF_zeroMatrix, put = setStaticF_zeroMatrix)) ::UnityEngine::Matrix4x4 zeroMatrix;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Matrix4x4>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Matrix4x4>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method DecomposeProjection, addr 0x6899638, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::FrustumPlanes DecomposeProjection();

  /// @brief Method DecomposeProjection_Injected, addr 0x68996a0, size 0x44, virtual false, abstract: false, final false
  static inline void DecomposeProjection_Injected(::ByRef<::UnityEngine::Matrix4x4> _unity_self, ::ByRef<::UnityEngine::FrustumPlanes> ret);

  /// @brief Method Equals, addr 0x689a46c, size 0xfc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals, addr 0x689a568, size 0x9c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Matrix4x4 other);

  /// @brief Method Frustum, addr 0x6899f7c, size 0xa8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 Frustum(::UnityEngine::FrustumPlanes fp);

  /// @brief Method Frustum, addr 0x6899e4c, size 0xac, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 Frustum(float_t left, float_t right, float_t bottom, float_t top, float_t zNear, float_t zFar);

  /// @brief Method Frustum_Injected, addr 0x6899ef8, size 0x84, virtual false, abstract: false, final false
  static inline void Frustum_Injected(float_t left, float_t right, float_t bottom, float_t top, float_t zNear, float_t zFar, ::ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method GetColumn, addr 0x689a39c, size 0xd0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetColumn(int32_t index);

  /// @brief Method GetHashCode, addr 0x689a228, size 0x174, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetLossyScale, addr 0x6899598, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetLossyScale();

  /// @brief Method GetLossyScale_Injected, addr 0x68995f4, size 0x44, virtual false, abstract: false, final false
  static inline void GetLossyScale_Injected(::ByRef<::UnityEngine::Matrix4x4> _unity_self, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method GetPosition, addr 0x689a7ac, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetPosition();

  /// @brief Method GetRotation, addr 0x68994fc, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetRotation();

  /// @brief Method GetRotation_Injected, addr 0x6899554, size 0x44, virtual false, abstract: false, final false
  static inline void GetRotation_Injected(::ByRef<::UnityEngine::Matrix4x4> _unity_self, ::ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method GetRow, addr 0x689a6dc, size 0xd0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetRow(int32_t index);

  /// @brief Method Inverse, addr 0x68998d0, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 Inverse(::UnityEngine::Matrix4x4 m);

  /// @brief Method Inverse3DAffine, addr 0x6899848, size 0x44, virtual false, abstract: false, final false
  static inline bool Inverse3DAffine(::UnityEngine::Matrix4x4 input, ::ByRef<::UnityEngine::Matrix4x4> result);

  /// @brief Method Inverse3DAffine_Injected, addr 0x689988c, size 0x44, virtual false, abstract: false, final false
  static inline bool Inverse3DAffine_Injected(::ByRef<::UnityEngine::Matrix4x4> input, ::ByRef<::UnityEngine::Matrix4x4> result);

  /// @brief Method Inverse_Injected, addr 0x689993c, size 0x44, virtual false, abstract: false, final false
  static inline void Inverse_Injected(::ByRef<::UnityEngine::Matrix4x4> m, ::ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method LookAt, addr 0x6899d60, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 LookAt(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to, ::UnityEngine::Vector3 up);

  /// @brief Method LookAt_Injected, addr 0x6899df0, size 0x5c, virtual false, abstract: false, final false
  static inline void LookAt_Injected(::ByRef<::UnityEngine::Vector3> from, ::ByRef<::UnityEngine::Vector3> to, ::ByRef<::UnityEngine::Vector3> up, ::ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method MultiplyPoint, addr 0x689a830, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 MultiplyPoint(::UnityEngine::Vector3 point);

  /// @brief Method MultiplyPoint3x4, addr 0x689a8bc, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 MultiplyPoint3x4(::UnityEngine::Vector3 point);

  /// @brief Method MultiplyVector, addr 0x689a914, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 MultiplyVector(::UnityEngine::Vector3 vector);

  /// @brief Method Ortho, addr 0x6899b30, size 0xac, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 Ortho(float_t left, float_t right, float_t bottom, float_t top, float_t zNear, float_t zFar);

  /// @brief Method Ortho_Injected, addr 0x6899bdc, size 0x84, virtual false, abstract: false, final false
  static inline void Ortho_Injected(float_t left, float_t right, float_t bottom, float_t top, float_t zNear, float_t zFar, ::ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method Perspective, addr 0x6899c60, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 Perspective(float_t fov, float_t aspect, float_t zNear, float_t zFar);

  /// @brief Method Perspective_Injected, addr 0x6899cf4, size 0x6c, virtual false, abstract: false, final false
  static inline void Perspective_Injected(float_t fov, float_t aspect, float_t zNear, float_t zFar, ::ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method Rotate, addr 0x689a9bc, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 Rotate(::UnityEngine::Quaternion q);

  /// @brief Method Scale, addr 0x689a95c, size 0x2c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 Scale(::UnityEngine::Vector3 vector);

  /// @brief Method SetColumn, addr 0x689a7b8, size 0x78, virtual false, abstract: false, final false
  inline void SetColumn(int32_t index, ::UnityEngine::Vector4 column);

  /// @brief Method TRS, addr 0x689975c, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 TRS(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion q, ::UnityEngine::Vector3 s);

  /// @brief Method TRS_Injected, addr 0x68997ec, size 0x5c, virtual false, abstract: false, final false
  static inline void TRS_Injected(::ByRef<::UnityEngine::Vector3> pos, ::ByRef<::UnityEngine::Quaternion> q, ::ByRef<::UnityEngine::Vector3> s, ::ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method ToString, addr 0x689ab0c, size 0x10, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x689ab1c, size 0x518, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method Translate, addr 0x689a988, size 0x34, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 Translate(::UnityEngine::Vector3 vector);

  /// @brief Method Transpose, addr 0x6899a00, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 Transpose(::UnityEngine::Matrix4x4 m);

  /// @brief Method Transpose_Injected, addr 0x6899a6c, size 0x44, virtual false, abstract: false, final false
  static inline void Transpose_Injected(::ByRef<::UnityEngine::Matrix4x4> m, ::ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method .ctor, addr 0x689a024, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector4 column0, ::UnityEngine::Vector4 column1, ::UnityEngine::Vector4 column2, ::UnityEngine::Vector4 column3);

  static inline ::UnityEngine::Matrix4x4 getStaticF_identityMatrix();

  static inline ::UnityEngine::Matrix4x4 getStaticF_zeroMatrix();

  /// @brief Method get_Item, addr 0x689a048, size 0xec, virtual false, abstract: false, final false
  inline float_t get_Item(int32_t index);

  /// @brief Method get_Item, addr 0x689a040, size 0x8, virtual false, abstract: false, final false
  inline float_t get_Item(int32_t row, int32_t column);

  /// @brief Method get_decomposeProjection, addr 0x68996ec, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::FrustumPlanes get_decomposeProjection();

  /// @brief Method get_identity, addr 0x689aab0, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 get_identity();

  /// @brief Method get_inverse, addr 0x6899980, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_inverse();

  /// @brief Method get_lossyScale, addr 0x68996e8, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_lossyScale();

  /// @brief Method get_rotation, addr 0x68996e4, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_rotation();

  /// @brief Method get_transpose, addr 0x6899ab0, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_transpose();

  /// @brief Method get_zero, addr 0x689aa54, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 get_zero();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Matrix4x4>"
  constexpr ::System::IEquatable_1<::UnityEngine::Matrix4x4>* i___System__IEquatable_1___UnityEngine__Matrix4x4_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Multiply, addr 0x689a604, size 0xa4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 op_Multiply(::UnityEngine::Matrix4x4 lhs, ::UnityEngine::Matrix4x4 rhs);

  /// @brief Method op_Multiply, addr 0x689a6a8, size 0x34, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 op_Multiply(::UnityEngine::Matrix4x4 lhs, ::UnityEngine::Vector4 vector);

  static inline void setStaticF_identityMatrix(::UnityEngine::Matrix4x4 value);

  static inline void setStaticF_zeroMatrix(::UnityEngine::Matrix4x4 value);

  /// @brief Method set_Item, addr 0x689a13c, size 0xec, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, float_t value);

  /// @brief Method set_Item, addr 0x689a134, size 0x8, virtual false, abstract: false, final false
  inline void set_Item(int32_t row, int32_t column, float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Matrix4x4();

  // Ctor Parameters [CppParam { name: "m00", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m10", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m20", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "m30", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m01", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "m11", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m21", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m31", ty: "float_t", modifiers:
  // "", def_value: None }, CppParam { name: "m02", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m12", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m22",
  // ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m32", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m03", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "m13", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m23", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m33", ty: "float_t", modifiers:
  // "", def_value: None }]
  constexpr Matrix4x4(float_t m00, float_t m10, float_t m20, float_t m30, float_t m01, float_t m11, float_t m21, float_t m31, float_t m02, float_t m12, float_t m22, float_t m32, float_t m03,
                      float_t m13, float_t m23, float_t m33) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10231 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
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

static_assert(::cordl_internals::size_check_v<::UnityEngine::Matrix4x4, 0x40>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Matrix4x4, "UnityEngine", "Matrix4x4");
