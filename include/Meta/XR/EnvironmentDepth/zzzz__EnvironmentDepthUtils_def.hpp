#pragma once
// IWYU pragma private; include "Meta/XR/EnvironmentDepth/EnvironmentDepthUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EnvironmentDepthUtils)
namespace Meta::XR::EnvironmentDepth {
struct DepthFrameDesc;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace Meta::XR::EnvironmentDepth {
class EnvironmentDepthUtils;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::EnvironmentDepth::EnvironmentDepthUtils);
// Dependencies System.Object, UnityEngine.Vector3
namespace Meta::XR::EnvironmentDepth {
// Is value type: false
// CS Name: Meta.XR.EnvironmentDepth.EnvironmentDepthUtils
class CORDL_TYPE EnvironmentDepthUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Field _scalingVector3, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF__scalingVector3, put = setStaticF__scalingVector3)) ::UnityEngine::Vector3 _scalingVector3;

  /// @brief Method CalculateDepthCameraMatrices, addr 0x58291c4, size 0x1b8, virtual false, abstract: false, final false
  static inline void CalculateDepthCameraMatrices(::Meta::XR::EnvironmentDepth::DepthFrameDesc frameDesc, ::ByRef<::UnityEngine::Matrix4x4> projMatrix, ::ByRef<::UnityEngine::Matrix4x4> viewMatrix);

  /// @brief Method CalculateReprojection, addr 0x5827e40, size 0xe8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 CalculateReprojection(::Meta::XR::EnvironmentDepth::DepthFrameDesc frameDesc);

  /// @brief Method ComputeNdcToLinearDepthParameters, addr 0x5827de4, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 ComputeNdcToLinearDepthParameters(float_t near, float_t far);

  static inline ::UnityEngine::Vector3 getStaticF__scalingVector3();

  static inline void setStaticF__scalingVector3(::UnityEngine::Vector3 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentDepthUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentDepthUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentDepthUtils(EnvironmentDepthUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentDepthUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentDepthUtils(EnvironmentDepthUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22601 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::EnvironmentDepth::EnvironmentDepthUtils, 0x10>, "Size mismatch!");

} // namespace Meta::XR::EnvironmentDepth
NEED_NO_BOX(::Meta::XR::EnvironmentDepth::EnvironmentDepthUtils);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::EnvironmentDepth::EnvironmentDepthUtils*, "Meta.XR.EnvironmentDepth", "EnvironmentDepthUtils");
