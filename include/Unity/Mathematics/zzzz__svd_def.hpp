#pragma once
// IWYU pragma private; include "Unity/Mathematics/svd.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(svd)
namespace Unity::Mathematics {
struct float2;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float3x3;
}
namespace Unity::Mathematics {
struct float4;
}
namespace Unity::Mathematics {
struct quaternion;
}
// Forward declare root types
namespace Unity::Mathematics {
class svd;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Mathematics::svd);
// Dependencies System.Object
namespace Unity::Mathematics {
// Is value type: false
// CS Name: Unity.Mathematics.svd
class CORDL_TYPE svd : public ::System::Object {
public:
  // Declarations
  /// @brief Method approxGivensQuat, addr 0x64cf898, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion approxGivensQuat(::Unity::Mathematics::float3 pq, ::Unity::Mathematics::float4 mask);

  /// @brief Method condNegSwap, addr 0x64cf37c, size 0x54, virtual false, abstract: false, final false
  static inline void condNegSwap(bool c, ::ByRef<::Unity::Mathematics::float3> x, ::ByRef<::Unity::Mathematics::float3> y);

  /// @brief Method condNegSwapQuat, addr 0x64cf3d0, size 0x130, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion condNegSwapQuat(bool c, ::Unity::Mathematics::quaternion q, ::Unity::Mathematics::float4 mask);

  /// @brief Method condSwap, addr 0x64cf358, size 0x24, virtual false, abstract: false, final false
  static inline void condSwap(bool c, ::ByRef<float_t> x, ::ByRef<float_t> y);

  /// @brief Method givensQRFactorization, addr 0x64cfadc, size 0x4f8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion givensQRFactorization(::Unity::Mathematics::float3x3 b, ::ByRef<::Unity::Mathematics::float3x3> r);

  /// @brief Method jacobiIteration, addr 0x64cffd4, size 0x91c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion jacobiIteration(::ByRef<::Unity::Mathematics::float3x3> s, int32_t iterations);

  /// @brief Method qrGivensQuat, addr 0x64cf9a4, size 0x138, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion qrGivensQuat(::Unity::Mathematics::float2 pq, ::Unity::Mathematics::float4 mask);

  /// @brief Method rcpsafe, addr 0x64d0ba8, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 rcpsafe(::Unity::Mathematics::float3 x, float_t epsilon);

  /// @brief Method singularValuesDecomposition, addr 0x64d08f0, size 0x2b8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 singularValuesDecomposition(::Unity::Mathematics::float3x3 a, ::ByRef<::Unity::Mathematics::quaternion> u, ::ByRef<::Unity::Mathematics::quaternion> v);

  /// @brief Method sortSingularValues, addr 0x64cf500, size 0x398, virtual false, abstract: false, final false
  static inline void sortSingularValues(::ByRef<::Unity::Mathematics::float3x3> b, ::ByRef<::Unity::Mathematics::quaternion> v);

  /// @brief Method svdInverse, addr 0x64d0c4c, size 0x280, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 svdInverse(::Unity::Mathematics::float3x3 a);

  /// @brief Method svdRotation, addr 0x64d0ecc, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion svdRotation(::Unity::Mathematics::float3x3 a);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr svd();

public:
  // Ctor Parameters [CppParam { name: "", ty: "svd", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  svd(svd&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "svd", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  svd(svd const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13174 };

  /// @brief Field k_EpsilonDeterminant offset 0xffffffff size 0x4
  static constexpr float_t k_EpsilonDeterminant{ static_cast<float_t>(1e-6f) };

  /// @brief Field k_EpsilonNormal offset 0xffffffff size 0x4
  static constexpr float_t k_EpsilonNormal{ static_cast<float_t>(1e-30f) };

  /// @brief Field k_EpsilonNormalSqrt offset 0xffffffff size 0x4
  static constexpr float_t k_EpsilonNormalSqrt{ static_cast<float_t>(1e-15f) };

  /// @brief Field k_EpsilonRCP offset 0xffffffff size 0x4
  static constexpr float_t k_EpsilonRCP{ static_cast<float_t>(1e-9f) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::svd, 0x10>, "Size mismatch!");

} // namespace Unity::Mathematics
NEED_NO_BOX(::Unity::Mathematics::svd);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::svd*, "Unity.Mathematics", "svd");
