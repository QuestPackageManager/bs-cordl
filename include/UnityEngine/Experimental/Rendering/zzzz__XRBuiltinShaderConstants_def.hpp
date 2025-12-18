#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Rendering/XRBuiltinShaderConstants.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XRBuiltinShaderConstants)
namespace UnityEngine::Experimental::Rendering {
class XRPass;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class RasterCommandBuffer;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
class XRBuiltinShaderConstants;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants);
// Dependencies System.Object
namespace UnityEngine::Experimental::Rendering {
// Is value type: false
// CS Name: UnityEngine.Experimental.Rendering.XRBuiltinShaderConstants
class CORDL_TYPE XRBuiltinShaderConstants : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_cameraProjMatrix, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_cameraProjMatrix, put = setStaticF_s_cameraProjMatrix)) ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> s_cameraProjMatrix;

  /// @brief Field s_invCameraProjMatrix, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_invCameraProjMatrix, put = setStaticF_s_invCameraProjMatrix)) ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> s_invCameraProjMatrix;

  /// @brief Field s_invProjMatrix, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_invProjMatrix, put = setStaticF_s_invProjMatrix)) ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> s_invProjMatrix;

  /// @brief Field s_invViewMatrix, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_invViewMatrix, put = setStaticF_s_invViewMatrix)) ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> s_invViewMatrix;

  /// @brief Field s_invViewProjMatrix, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_invViewProjMatrix, put = setStaticF_s_invViewProjMatrix)) ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> s_invViewProjMatrix;

  /// @brief Field s_projMatrix, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_projMatrix, put = setStaticF_s_projMatrix)) ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> s_projMatrix;

  /// @brief Field s_viewMatrix, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_viewMatrix, put = setStaticF_s_viewMatrix)) ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> s_viewMatrix;

  /// @brief Field s_viewProjMatrix, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_viewProjMatrix, put = setStaticF_s_viewProjMatrix)) ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> s_viewProjMatrix;

  /// @brief Field s_worldSpaceCameraPos, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_worldSpaceCameraPos, put = setStaticF_s_worldSpaceCameraPos)) ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> s_worldSpaceCameraPos;

  /// @brief Field unity_StereoCameraInvProjection, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_unity_StereoCameraInvProjection, put = setStaticF_unity_StereoCameraInvProjection)) int32_t unity_StereoCameraInvProjection;

  /// @brief Field unity_StereoCameraProjection, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_unity_StereoCameraProjection, put = setStaticF_unity_StereoCameraProjection)) int32_t unity_StereoCameraProjection;

  /// @brief Field unity_StereoMatrixInvP, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_unity_StereoMatrixInvP, put = setStaticF_unity_StereoMatrixInvP)) int32_t unity_StereoMatrixInvP;

  /// @brief Field unity_StereoMatrixInvV, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_unity_StereoMatrixInvV, put = setStaticF_unity_StereoMatrixInvV)) int32_t unity_StereoMatrixInvV;

  /// @brief Field unity_StereoMatrixInvVP, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_unity_StereoMatrixInvVP, put = setStaticF_unity_StereoMatrixInvVP)) int32_t unity_StereoMatrixInvVP;

  /// @brief Field unity_StereoMatrixP, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_unity_StereoMatrixP, put = setStaticF_unity_StereoMatrixP)) int32_t unity_StereoMatrixP;

  /// @brief Field unity_StereoMatrixV, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_unity_StereoMatrixV, put = setStaticF_unity_StereoMatrixV)) int32_t unity_StereoMatrixV;

  /// @brief Field unity_StereoMatrixVP, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_unity_StereoMatrixVP, put = setStaticF_unity_StereoMatrixVP)) int32_t unity_StereoMatrixVP;

  /// @brief Field unity_StereoWorldSpaceCameraPos, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_unity_StereoWorldSpaceCameraPos, put = setStaticF_unity_StereoWorldSpaceCameraPos)) int32_t unity_StereoWorldSpaceCameraPos;

  /// @brief Method SetBuiltinShaderConstants, addr 0x658e300, size 0x154, virtual false, abstract: false, final false
  static inline void SetBuiltinShaderConstants(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method SetBuiltinShaderConstants, addr 0x658e454, size 0x64, virtual false, abstract: false, final false
  static inline void SetBuiltinShaderConstants(::UnityEngine::Rendering::RasterCommandBuffer* cmd);

  /// @brief Method Update, addr 0x658e4b8, size 0x704, virtual false, abstract: false, final false
  static inline void Update(::UnityEngine::Experimental::Rendering::XRPass* xrPass, ::UnityEngine::Rendering::CommandBuffer* cmd, bool renderIntoTexture);

  /// @brief Method UpdateBuiltinShaderConstants, addr 0x658def8, size 0x408, virtual false, abstract: false, final false
  static inline void UpdateBuiltinShaderConstants(::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projMatrix, bool renderIntoTexture, int32_t viewIndex);

  static inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> getStaticF_s_cameraProjMatrix();

  static inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> getStaticF_s_invCameraProjMatrix();

  static inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> getStaticF_s_invProjMatrix();

  static inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> getStaticF_s_invViewMatrix();

  static inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> getStaticF_s_invViewProjMatrix();

  static inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> getStaticF_s_projMatrix();

  static inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> getStaticF_s_viewMatrix();

  static inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> getStaticF_s_viewProjMatrix();

  static inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> getStaticF_s_worldSpaceCameraPos();

  static inline int32_t getStaticF_unity_StereoCameraInvProjection();

  static inline int32_t getStaticF_unity_StereoCameraProjection();

  static inline int32_t getStaticF_unity_StereoMatrixInvP();

  static inline int32_t getStaticF_unity_StereoMatrixInvV();

  static inline int32_t getStaticF_unity_StereoMatrixInvVP();

  static inline int32_t getStaticF_unity_StereoMatrixP();

  static inline int32_t getStaticF_unity_StereoMatrixV();

  static inline int32_t getStaticF_unity_StereoMatrixVP();

  static inline int32_t getStaticF_unity_StereoWorldSpaceCameraPos();

  static inline void setStaticF_s_cameraProjMatrix(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  static inline void setStaticF_s_invCameraProjMatrix(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  static inline void setStaticF_s_invProjMatrix(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  static inline void setStaticF_s_invViewMatrix(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  static inline void setStaticF_s_invViewProjMatrix(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  static inline void setStaticF_s_projMatrix(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  static inline void setStaticF_s_viewMatrix(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  static inline void setStaticF_s_viewProjMatrix(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  static inline void setStaticF_s_worldSpaceCameraPos(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  static inline void setStaticF_unity_StereoCameraInvProjection(int32_t value);

  static inline void setStaticF_unity_StereoCameraProjection(int32_t value);

  static inline void setStaticF_unity_StereoMatrixInvP(int32_t value);

  static inline void setStaticF_unity_StereoMatrixInvV(int32_t value);

  static inline void setStaticF_unity_StereoMatrixInvVP(int32_t value);

  static inline void setStaticF_unity_StereoMatrixP(int32_t value);

  static inline void setStaticF_unity_StereoMatrixV(int32_t value);

  static inline void setStaticF_unity_StereoMatrixVP(int32_t value);

  static inline void setStaticF_unity_StereoWorldSpaceCameraPos(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRBuiltinShaderConstants();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRBuiltinShaderConstants", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRBuiltinShaderConstants(XRBuiltinShaderConstants&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRBuiltinShaderConstants", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRBuiltinShaderConstants(XRBuiltinShaderConstants const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11827 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Experimental::Rendering
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*, "UnityEngine.Experimental.Rendering", "XRBuiltinShaderConstants");
