#pragma once
// IWYU pragma private; include "UnityEngine/Matrix4x4.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
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
DEFINE_IL2CPP_CLASS(::UnityEngine::Matrix4x4, "UnityEngine", "Matrix4x4");
// [NativeHeader("Runtime/Math/MathScripting.h")]
// [Il2CppEagerStaticClassConstruction]
// [NativeType(Header = "Runtime/Math/Matrix4x4.h")]
// [DefaultMember("Item")]
// [NativeClass("Matrix4x4f")]
// [RequiredByNativeCode(Optional = true, GenerateProxy = true)]
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

  /// [ThreadSafe]
  /// [IsReadOnly]
  /// @brief Method DecomposeProjection, addr 0x6f26770, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::FrustumPlanes DecomposeProjection();

  /// @brief Method DecomposeProjection_Injected, addr 0x6f267d8, size 0x44, virtual false, abstract: false, final false
  static inline void DecomposeProjection_Injected(::by_ref<::UnityEngine::Matrix4x4> _unity_self, ::by_ref<::UnityEngine::FrustumPlanes> ret);

  /// [IsReadOnly]
  /// @brief Method Equals, addr 0x6f2786c, size 0xfc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// [IsReadOnly]
  /// @brief Method Equals, addr 0x6f27968, size 0x9c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Matrix4x4 other);

  /// [IsReadOnly]
  /// @brief Method Equals, addr 0x6f27a04, size 0x9c, virtual false, abstract: false, final false
  inline bool Equals(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4 const> other);

  /// @brief Method Frustum, addr 0x6f2726c, size 0xa8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 Frustum(::UnityEngine::FrustumPlanes fp);

  /// [FreeFunction("MatrixScripting::Frustum", IsThreadSafe = true)]
  /// @brief Method Frustum, addr 0x6f2713c, size 0xac, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 Frustum(float_t left, float_t right, float_t bottom, float_t top, float_t zNear, float_t zFar);

  /// @brief Method Frustum_Injected, addr 0x6f271e8, size 0x84, virtual false, abstract: false, final false
  static inline void Frustum_Injected(float_t left, float_t right, float_t bottom, float_t top, float_t zNear, float_t zFar, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// [IsReadOnly]
  /// @brief Method GetColumn, addr 0x6f27b78, size 0xd0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetColumn(int32_t index);

  /// [IsReadOnly]
  /// @brief Method GetHashCode, addr 0x6f276e0, size 0x18c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// [IsReadOnly]
  /// [ThreadSafe]
  /// @brief Method GetLossyScale, addr 0x6f266d0, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetLossyScale();

  /// @brief Method GetLossyScale_Injected, addr 0x6f2672c, size 0x44, virtual false, abstract: false, final false
  static inline void GetLossyScale_Injected(::by_ref<::UnityEngine::Matrix4x4> _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// [IsReadOnly]
  /// @brief Method GetPosition, addr 0x6f27d18, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetPosition();

  /// [IsReadOnly]
  /// [ThreadSafe]
  /// @brief Method GetRotation, addr 0x6f26634, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetRotation();

  /// @brief Method GetRotation_Injected, addr 0x6f2668c, size 0x44, virtual false, abstract: false, final false
  static inline void GetRotation_Injected(::by_ref<::UnityEngine::Matrix4x4> _unity_self, ::by_ref<::UnityEngine::Quaternion> ret);

  /// [IsReadOnly]
  /// @brief Method GetRow, addr 0x6f27c48, size 0xd0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetRow(int32_t index);

  /// [FreeFunction("MatrixScripting::Inverse", IsThreadSafe = true)]
  /// @brief Method Internal_Inverse, addr 0x6f26ad8, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 Internal_Inverse(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4 const> m);

  /// [FreeFunction("MatrixScripting::Inverse3DAffine", IsThreadSafe = true)]
  /// @brief Method Internal_Inverse3DAffine, addr 0x6f26a0c, size 0x44, virtual false, abstract: false, final false
  static inline bool Internal_Inverse3DAffine(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4 const> input, ::by_ref<::UnityEngine::Matrix4x4> result);

  /// @brief Method Internal_Inverse_Injected, addr 0x6f26b44, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_Inverse_Injected(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4 const> m, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// [FreeFunction("MatrixScripting::LookAt", IsThreadSafe = true)]
  /// @brief Method Internal_LookAt, addr 0x6f26fc4, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 Internal_LookAt(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3 const> from, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3 const> to,
                                                         /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3 const> up);

  /// @brief Method Internal_LookAt_Injected, addr 0x6f27048, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_LookAt_Injected(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3 const> from, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3 const> to,
                                              /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3 const> up, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// [FreeFunction("MatrixScripting::TRS", IsThreadSafe = true)]
  /// @brief Method Internal_TRS, addr 0x6f26894, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 Internal_TRS(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3 const> pos, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion const> q,
                                                      /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3 const> s);

  /// @brief Method Internal_TRS_Injected, addr 0x6f26918, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_TRS_Injected(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3 const> pos, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion const> q,
                                           /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3 const> s, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// [FreeFunction("MatrixScripting::Transpose", IsThreadSafe = true)]
  /// @brief Method Internal_Transpose, addr 0x6f26c70, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 Internal_Transpose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4 const> m);

  /// @brief Method Internal_Transpose_Injected, addr 0x6f26cdc, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_Transpose_Injected(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4 const> m, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// @brief Method Inverse, addr 0x6f26b88, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 Inverse(::UnityEngine::Matrix4x4 m);

  /// @brief Method Inverse3DAffine, addr 0x6f26a50, size 0x44, virtual false, abstract: false, final false
  static inline bool Inverse3DAffine(::UnityEngine::Matrix4x4 input, ::by_ref<::UnityEngine::Matrix4x4> result);

  /// @brief Method Inverse3DAffine, addr 0x6f26a94, size 0x44, virtual false, abstract: false, final false
  static inline bool Inverse3DAffine(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4 const> input, ::by_ref<::UnityEngine::Matrix4x4> result);

  /// @brief Method LookAt, addr 0x6f270a4, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 LookAt(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to, ::UnityEngine::Vector3 up);

  /// [IsReadOnly]
  /// @brief Method MultiplyPoint, addr 0x6f27f3c, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 MultiplyPoint(::UnityEngine::Vector3 point);

  /// [IsReadOnly]
  /// @brief Method MultiplyPoint3x4, addr 0x6f27fc8, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 MultiplyPoint3x4(::UnityEngine::Vector3 point);

  /// [IsReadOnly]
  /// @brief Method MultiplyVector, addr 0x6f28020, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 MultiplyVector(::UnityEngine::Vector3 vector);

  /// [FreeFunction("MatrixScripting::Ortho", IsThreadSafe = true)]
  /// @brief Method Ortho, addr 0x6f26d94, size 0xac, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 Ortho(float_t left, float_t right, float_t bottom, float_t top, float_t zNear, float_t zFar);

  /// @brief Method Ortho_Injected, addr 0x6f26e40, size 0x84, virtual false, abstract: false, final false
  static inline void Ortho_Injected(float_t left, float_t right, float_t bottom, float_t top, float_t zNear, float_t zFar, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// [FreeFunction("MatrixScripting::Perspective", IsThreadSafe = true)]
  /// @brief Method Perspective, addr 0x6f26ec4, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 Perspective(float_t fov, float_t aspect, float_t zNear, float_t zFar);

  /// @brief Method Perspective_Injected, addr 0x6f26f58, size 0x6c, virtual false, abstract: false, final false
  static inline void Perspective_Injected(float_t fov, float_t aspect, float_t zNear, float_t zFar, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// @brief Method Rotate, addr 0x6f280c8, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 Rotate(::UnityEngine::Quaternion q);

  /// @brief Method Scale, addr 0x6f28068, size 0x2c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 Scale(::UnityEngine::Vector3 vector);

  /// @brief Method SetColumn, addr 0x6f27d24, size 0xb8, virtual false, abstract: false, final false
  inline void SetColumn(int32_t index, ::UnityEngine::Vector4 column);

  /// @brief Method SetRow, addr 0x6f27ddc, size 0x160, virtual false, abstract: false, final false
  inline void SetRow(int32_t index, ::UnityEngine::Vector4 row);

  /// @brief Method TRS, addr 0x6f26974, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 TRS(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion q, ::UnityEngine::Vector3 s);

  /// [IsReadOnly]
  /// @brief Method ToString, addr 0x6f28218, size 0x10, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// [IsReadOnly]
  /// @brief Method ToString, addr 0x6f28228, size 0x518, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method Translate, addr 0x6f28094, size 0x34, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 Translate(::UnityEngine::Vector3 vector);

  /// @brief Method .ctor, addr 0x6f27314, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector4 column0, ::UnityEngine::Vector4 column1, ::UnityEngine::Vector4 column2, ::UnityEngine::Vector4 column3);

  static inline ::UnityEngine::Matrix4x4 getStaticF_identityMatrix();

  static inline ::UnityEngine::Matrix4x4 getStaticF_zeroMatrix();

  /// [IsReadOnly]
  /// @brief Method get_Item, addr 0x6f27508, size 0xec, virtual false, abstract: false, final false
  inline float_t get_Item(int32_t index);

  /// [IsReadOnly]
  /// @brief Method get_Item, addr 0x6f27330, size 0xec, virtual false, abstract: false, final false
  inline float_t get_Item(int32_t row, int32_t column);

  /// [IsReadOnly]
  /// @brief Method get_decomposeProjection, addr 0x6f26824, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::FrustumPlanes get_decomposeProjection();

  /// @brief Method get_identity, addr 0x6f281bc, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 get_identity();

  /// [IsReadOnly]
  /// @brief Method get_inverse, addr 0x6f26bfc, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_inverse();

  /// [IsReadOnly]
  /// @brief Method get_lossyScale, addr 0x6f26820, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_lossyScale();

  /// [IsReadOnly]
  /// @brief Method get_rotation, addr 0x6f2681c, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_rotation();

  /// [IsReadOnly]
  /// @brief Method get_transpose, addr 0x6f26d20, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_transpose();

  /// @brief Method get_zero, addr 0x6f28160, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 get_zero();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Matrix4x4>"
  constexpr ::System::IEquatable_1<::UnityEngine::Matrix4x4>* i___System__IEquatable_1___UnityEngine__Matrix4x4_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Multiply, addr 0x6f27aa0, size 0xa4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 op_Multiply(::UnityEngine::Matrix4x4 lhs, ::UnityEngine::Matrix4x4 rhs);

  /// @brief Method op_Multiply, addr 0x6f27b44, size 0x34, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 op_Multiply(::UnityEngine::Matrix4x4 lhs, ::UnityEngine::Vector4 vector);

  static inline void setStaticF_identityMatrix(::UnityEngine::Matrix4x4 value);

  static inline void setStaticF_zeroMatrix(::UnityEngine::Matrix4x4 value);

  /// @brief Method set_Item, addr 0x6f275f4, size 0xec, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, float_t value);

  /// @brief Method set_Item, addr 0x6f2741c, size 0xec, virtual false, abstract: false, final false
  inline void set_Item(int32_t row, int32_t column, float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Matrix4x4();

  // Ctor Parameters [CppParam { name: "m00", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m10", ty: "float_t", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "m20", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m30", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "m01", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m11", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m21", ty:
  // "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m31", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m02", ty: "float_t",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "m12", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m22", ty: "float_t", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "m32", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m03", ty: "float_t", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "m13", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m23", ty: "float_t", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "m33", ty: "float_t", modifiers: "", def_value: None, comment: None }]
  constexpr Matrix4x4(float_t m00, float_t m10, float_t m20, float_t m30, float_t m01, float_t m11, float_t m21, float_t m31, float_t m02, float_t m12, float_t m22, float_t m32, float_t m03,
                      float_t m13, float_t m23, float_t m33) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9841 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// [NativeName("m_Data[0]")]
  /// @brief Field m00, offset: 0x0, size: 0x4, def value: None
  float_t m00;

  /// [NativeName("m_Data[1]")]
  /// @brief Field m10, offset: 0x4, size: 0x4, def value: None
  float_t m10;

  /// [NativeName("m_Data[2]")]
  /// @brief Field m20, offset: 0x8, size: 0x4, def value: None
  float_t m20;

  /// [NativeName("m_Data[3]")]
  /// @brief Field m30, offset: 0xc, size: 0x4, def value: None
  float_t m30;

  /// [NativeName("m_Data[4]")]
  /// @brief Field m01, offset: 0x10, size: 0x4, def value: None
  float_t m01;

  /// [NativeName("m_Data[5]")]
  /// @brief Field m11, offset: 0x14, size: 0x4, def value: None
  float_t m11;

  /// [NativeName("m_Data[6]")]
  /// @brief Field m21, offset: 0x18, size: 0x4, def value: None
  float_t m21;

  /// [NativeName("m_Data[7]")]
  /// @brief Field m31, offset: 0x1c, size: 0x4, def value: None
  float_t m31;

  /// [NativeName("m_Data[8]")]
  /// @brief Field m02, offset: 0x20, size: 0x4, def value: None
  float_t m02;

  /// [NativeName("m_Data[9]")]
  /// @brief Field m12, offset: 0x24, size: 0x4, def value: None
  float_t m12;

  /// [NativeName("m_Data[10]")]
  /// @brief Field m22, offset: 0x28, size: 0x4, def value: None
  float_t m22;

  /// [NativeName("m_Data[11]")]
  /// @brief Field m32, offset: 0x2c, size: 0x4, def value: None
  float_t m32;

  /// [NativeName("m_Data[12]")]
  /// @brief Field m03, offset: 0x30, size: 0x4, def value: None
  float_t m03;

  /// [NativeName("m_Data[13]")]
  /// @brief Field m13, offset: 0x34, size: 0x4, def value: None
  float_t m13;

  /// [NativeName("m_Data[14]")]
  /// @brief Field m23, offset: 0x38, size: 0x4, def value: None
  float_t m23;

  /// [NativeName("m_Data[15]")]
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

static_assert(sizeof(::UnityEngine::Matrix4x4) == 0x40, "Size mismatch!");

} // namespace UnityEngine
