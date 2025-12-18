#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ShaderPropertyId.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderPropertyId)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ShaderPropertyId;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ShaderPropertyId);
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ShaderPropertyId
class CORDL_TYPE ShaderPropertyId : public ::System::Object {
public:
  // Declarations
  /// @brief Field alphaToMaskAvailable, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_alphaToMaskAvailable, put = setStaticF_alphaToMaskAvailable)) int32_t alphaToMaskAvailable;

  /// @brief Field ambientEquatorColor, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_ambientEquatorColor, put = setStaticF_ambientEquatorColor)) int32_t ambientEquatorColor;

  /// @brief Field ambientGroundColor, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_ambientGroundColor, put = setStaticF_ambientGroundColor)) int32_t ambientGroundColor;

  /// @brief Field ambientSkyColor, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_ambientSkyColor, put = setStaticF_ambientSkyColor)) int32_t ambientSkyColor;

  /// @brief Field billboardCameraParams, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_billboardCameraParams, put = setStaticF_billboardCameraParams)) int32_t billboardCameraParams;

  /// @brief Field billboardNormal, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_billboardNormal, put = setStaticF_billboardNormal)) int32_t billboardNormal;

  /// @brief Field billboardTangent, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_billboardTangent, put = setStaticF_billboardTangent)) int32_t billboardTangent;

  /// @brief Field blitScaleBias, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_blitScaleBias, put = setStaticF_blitScaleBias)) int32_t blitScaleBias;

  /// @brief Field blitTexture, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_blitTexture, put = setStaticF_blitTexture)) int32_t blitTexture;

  /// @brief Field cameraProjectionMatrix, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_cameraProjectionMatrix, put = setStaticF_cameraProjectionMatrix)) int32_t cameraProjectionMatrix;

  /// @brief Field cameraToWorldMatrix, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_cameraToWorldMatrix, put = setStaticF_cameraToWorldMatrix)) int32_t cameraToWorldMatrix;

  /// @brief Field cameraWorldClipPlanes, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_cameraWorldClipPlanes, put = setStaticF_cameraWorldClipPlanes)) int32_t cameraWorldClipPlanes;

  /// @brief Field cosTime, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_cosTime, put = setStaticF_cosTime)) int32_t cosTime;

  /// @brief Field deltaTime, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_deltaTime, put = setStaticF_deltaTime)) int32_t deltaTime;

  /// @brief Field ditheringTexture, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_ditheringTexture, put = setStaticF_ditheringTexture)) int32_t ditheringTexture;

  /// @brief Field ditheringTextureInvSize, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_ditheringTextureInvSize, put = setStaticF_ditheringTextureInvSize)) int32_t ditheringTextureInvSize;

  /// @brief Field globalMipBias, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_globalMipBias, put = setStaticF_globalMipBias)) int32_t globalMipBias;

  /// @brief Field glossyEnvironmentColor, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_glossyEnvironmentColor, put = setStaticF_glossyEnvironmentColor)) int32_t glossyEnvironmentColor;

  /// @brief Field glossyEnvironmentCubeMap, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_glossyEnvironmentCubeMap, put = setStaticF_glossyEnvironmentCubeMap)) int32_t glossyEnvironmentCubeMap;

  /// @brief Field glossyEnvironmentCubeMapHDR, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_glossyEnvironmentCubeMapHDR, put = setStaticF_glossyEnvironmentCubeMapHDR)) int32_t glossyEnvironmentCubeMapHDR;

  /// @brief Field hdrOutputGradingParams, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_hdrOutputGradingParams, put = setStaticF_hdrOutputGradingParams)) int32_t hdrOutputGradingParams;

  /// @brief Field hdrOutputLuminanceParams, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_hdrOutputLuminanceParams, put = setStaticF_hdrOutputLuminanceParams)) int32_t hdrOutputLuminanceParams;

  /// @brief Field inverseCameraProjectionMatrix, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_inverseCameraProjectionMatrix, put = setStaticF_inverseCameraProjectionMatrix)) int32_t inverseCameraProjectionMatrix;

  /// @brief Field inverseProjectionMatrix, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_inverseProjectionMatrix, put = setStaticF_inverseProjectionMatrix)) int32_t inverseProjectionMatrix;

  /// @brief Field inverseViewAndProjectionMatrix, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_inverseViewAndProjectionMatrix, put = setStaticF_inverseViewAndProjectionMatrix)) int32_t inverseViewAndProjectionMatrix;

  /// @brief Field inverseViewMatrix, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_inverseViewMatrix, put = setStaticF_inverseViewMatrix)) int32_t inverseViewMatrix;

  /// @brief Field lastTimeParameters, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_lastTimeParameters, put = setStaticF_lastTimeParameters)) int32_t lastTimeParameters;

  /// @brief Field lightDirection, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_lightDirection, put = setStaticF_lightDirection)) int32_t lightDirection;

  /// @brief Field lightPosition, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_lightPosition, put = setStaticF_lightPosition)) int32_t lightPosition;

  /// @brief Field orthoParams, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_orthoParams, put = setStaticF_orthoParams)) int32_t orthoParams;

  /// @brief Field overlayUITexture, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_overlayUITexture, put = setStaticF_overlayUITexture)) int32_t overlayUITexture;

  /// @brief Field previousViewProjectionNoJitter, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_previousViewProjectionNoJitter, put = setStaticF_previousViewProjectionNoJitter)) int32_t previousViewProjectionNoJitter;

  /// @brief Field previousViewProjectionNoJitterStereo, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_previousViewProjectionNoJitterStereo, put = setStaticF_previousViewProjectionNoJitterStereo)) int32_t previousViewProjectionNoJitterStereo;

  /// @brief Field projectionMatrix, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_projectionMatrix, put = setStaticF_projectionMatrix)) int32_t projectionMatrix;

  /// @brief Field projectionParams, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_projectionParams, put = setStaticF_projectionParams)) int32_t projectionParams;

  /// @brief Field rendererColor, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_rendererColor, put = setStaticF_rendererColor)) int32_t rendererColor;

  /// @brief Field renderingLayerMaxInt, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_renderingLayerMaxInt, put = setStaticF_renderingLayerMaxInt)) int32_t renderingLayerMaxInt;

  /// @brief Field renderingLayerRcpMaxInt, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_renderingLayerRcpMaxInt, put = setStaticF_renderingLayerRcpMaxInt)) int32_t renderingLayerRcpMaxInt;

  /// @brief Field rtHandleScale, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_rtHandleScale, put = setStaticF_rtHandleScale)) int32_t rtHandleScale;

  /// @brief Field scaleBias, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_scaleBias, put = setStaticF_scaleBias)) int32_t scaleBias;

  /// @brief Field scaleBiasRt, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_scaleBiasRt, put = setStaticF_scaleBiasRt)) int32_t scaleBiasRt;

  /// @brief Field scaledScreenParams, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_scaledScreenParams, put = setStaticF_scaledScreenParams)) int32_t scaledScreenParams;

  /// @brief Field screenCoordScaleBias, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_screenCoordScaleBias, put = setStaticF_screenCoordScaleBias)) int32_t screenCoordScaleBias;

  /// @brief Field screenParams, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_screenParams, put = setStaticF_screenParams)) int32_t screenParams;

  /// @brief Field screenSize, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_screenSize, put = setStaticF_screenSize)) int32_t screenSize;

  /// @brief Field screenSizeOverride, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_screenSizeOverride, put = setStaticF_screenSizeOverride)) int32_t screenSizeOverride;

  /// @brief Field shadowBias, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_shadowBias, put = setStaticF_shadowBias)) int32_t shadowBias;

  /// @brief Field sinTime, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_sinTime, put = setStaticF_sinTime)) int32_t sinTime;

  /// @brief Field sourceTex, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_sourceTex, put = setStaticF_sourceTex)) int32_t sourceTex;

  /// @brief Field subtractiveShadowColor, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_subtractiveShadowColor, put = setStaticF_subtractiveShadowColor)) int32_t subtractiveShadowColor;

  /// @brief Field time, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_time, put = setStaticF_time)) int32_t time;

  /// @brief Field timeParameters, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_timeParameters, put = setStaticF_timeParameters)) int32_t timeParameters;

  /// @brief Field viewAndProjectionMatrix, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_viewAndProjectionMatrix, put = setStaticF_viewAndProjectionMatrix)) int32_t viewAndProjectionMatrix;

  /// @brief Field viewMatrix, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_viewMatrix, put = setStaticF_viewMatrix)) int32_t viewMatrix;

  /// @brief Field viewProjectionNoJitter, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_viewProjectionNoJitter, put = setStaticF_viewProjectionNoJitter)) int32_t viewProjectionNoJitter;

  /// @brief Field viewProjectionNoJitterStereo, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_viewProjectionNoJitterStereo, put = setStaticF_viewProjectionNoJitterStereo)) int32_t viewProjectionNoJitterStereo;

  /// @brief Field worldSpaceCameraPos, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_worldSpaceCameraPos, put = setStaticF_worldSpaceCameraPos)) int32_t worldSpaceCameraPos;

  /// @brief Field worldToCameraMatrix, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_worldToCameraMatrix, put = setStaticF_worldToCameraMatrix)) int32_t worldToCameraMatrix;

  /// @brief Field zBufferParams, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_zBufferParams, put = setStaticF_zBufferParams)) int32_t zBufferParams;

  static inline int32_t getStaticF_alphaToMaskAvailable();

  static inline int32_t getStaticF_ambientEquatorColor();

  static inline int32_t getStaticF_ambientGroundColor();

  static inline int32_t getStaticF_ambientSkyColor();

  static inline int32_t getStaticF_billboardCameraParams();

  static inline int32_t getStaticF_billboardNormal();

  static inline int32_t getStaticF_billboardTangent();

  static inline int32_t getStaticF_blitScaleBias();

  static inline int32_t getStaticF_blitTexture();

  static inline int32_t getStaticF_cameraProjectionMatrix();

  static inline int32_t getStaticF_cameraToWorldMatrix();

  static inline int32_t getStaticF_cameraWorldClipPlanes();

  static inline int32_t getStaticF_cosTime();

  static inline int32_t getStaticF_deltaTime();

  static inline int32_t getStaticF_ditheringTexture();

  static inline int32_t getStaticF_ditheringTextureInvSize();

  static inline int32_t getStaticF_globalMipBias();

  static inline int32_t getStaticF_glossyEnvironmentColor();

  static inline int32_t getStaticF_glossyEnvironmentCubeMap();

  static inline int32_t getStaticF_glossyEnvironmentCubeMapHDR();

  static inline int32_t getStaticF_hdrOutputGradingParams();

  static inline int32_t getStaticF_hdrOutputLuminanceParams();

  static inline int32_t getStaticF_inverseCameraProjectionMatrix();

  static inline int32_t getStaticF_inverseProjectionMatrix();

  static inline int32_t getStaticF_inverseViewAndProjectionMatrix();

  static inline int32_t getStaticF_inverseViewMatrix();

  static inline int32_t getStaticF_lastTimeParameters();

  static inline int32_t getStaticF_lightDirection();

  static inline int32_t getStaticF_lightPosition();

  static inline int32_t getStaticF_orthoParams();

  static inline int32_t getStaticF_overlayUITexture();

  static inline int32_t getStaticF_previousViewProjectionNoJitter();

  static inline int32_t getStaticF_previousViewProjectionNoJitterStereo();

  static inline int32_t getStaticF_projectionMatrix();

  static inline int32_t getStaticF_projectionParams();

  static inline int32_t getStaticF_rendererColor();

  static inline int32_t getStaticF_renderingLayerMaxInt();

  static inline int32_t getStaticF_renderingLayerRcpMaxInt();

  static inline int32_t getStaticF_rtHandleScale();

  static inline int32_t getStaticF_scaleBias();

  static inline int32_t getStaticF_scaleBiasRt();

  static inline int32_t getStaticF_scaledScreenParams();

  static inline int32_t getStaticF_screenCoordScaleBias();

  static inline int32_t getStaticF_screenParams();

  static inline int32_t getStaticF_screenSize();

  static inline int32_t getStaticF_screenSizeOverride();

  static inline int32_t getStaticF_shadowBias();

  static inline int32_t getStaticF_sinTime();

  static inline int32_t getStaticF_sourceTex();

  static inline int32_t getStaticF_subtractiveShadowColor();

  static inline int32_t getStaticF_time();

  static inline int32_t getStaticF_timeParameters();

  static inline int32_t getStaticF_viewAndProjectionMatrix();

  static inline int32_t getStaticF_viewMatrix();

  static inline int32_t getStaticF_viewProjectionNoJitter();

  static inline int32_t getStaticF_viewProjectionNoJitterStereo();

  static inline int32_t getStaticF_worldSpaceCameraPos();

  static inline int32_t getStaticF_worldToCameraMatrix();

  static inline int32_t getStaticF_zBufferParams();

  static inline void setStaticF_alphaToMaskAvailable(int32_t value);

  static inline void setStaticF_ambientEquatorColor(int32_t value);

  static inline void setStaticF_ambientGroundColor(int32_t value);

  static inline void setStaticF_ambientSkyColor(int32_t value);

  static inline void setStaticF_billboardCameraParams(int32_t value);

  static inline void setStaticF_billboardNormal(int32_t value);

  static inline void setStaticF_billboardTangent(int32_t value);

  static inline void setStaticF_blitScaleBias(int32_t value);

  static inline void setStaticF_blitTexture(int32_t value);

  static inline void setStaticF_cameraProjectionMatrix(int32_t value);

  static inline void setStaticF_cameraToWorldMatrix(int32_t value);

  static inline void setStaticF_cameraWorldClipPlanes(int32_t value);

  static inline void setStaticF_cosTime(int32_t value);

  static inline void setStaticF_deltaTime(int32_t value);

  static inline void setStaticF_ditheringTexture(int32_t value);

  static inline void setStaticF_ditheringTextureInvSize(int32_t value);

  static inline void setStaticF_globalMipBias(int32_t value);

  static inline void setStaticF_glossyEnvironmentColor(int32_t value);

  static inline void setStaticF_glossyEnvironmentCubeMap(int32_t value);

  static inline void setStaticF_glossyEnvironmentCubeMapHDR(int32_t value);

  static inline void setStaticF_hdrOutputGradingParams(int32_t value);

  static inline void setStaticF_hdrOutputLuminanceParams(int32_t value);

  static inline void setStaticF_inverseCameraProjectionMatrix(int32_t value);

  static inline void setStaticF_inverseProjectionMatrix(int32_t value);

  static inline void setStaticF_inverseViewAndProjectionMatrix(int32_t value);

  static inline void setStaticF_inverseViewMatrix(int32_t value);

  static inline void setStaticF_lastTimeParameters(int32_t value);

  static inline void setStaticF_lightDirection(int32_t value);

  static inline void setStaticF_lightPosition(int32_t value);

  static inline void setStaticF_orthoParams(int32_t value);

  static inline void setStaticF_overlayUITexture(int32_t value);

  static inline void setStaticF_previousViewProjectionNoJitter(int32_t value);

  static inline void setStaticF_previousViewProjectionNoJitterStereo(int32_t value);

  static inline void setStaticF_projectionMatrix(int32_t value);

  static inline void setStaticF_projectionParams(int32_t value);

  static inline void setStaticF_rendererColor(int32_t value);

  static inline void setStaticF_renderingLayerMaxInt(int32_t value);

  static inline void setStaticF_renderingLayerRcpMaxInt(int32_t value);

  static inline void setStaticF_rtHandleScale(int32_t value);

  static inline void setStaticF_scaleBias(int32_t value);

  static inline void setStaticF_scaleBiasRt(int32_t value);

  static inline void setStaticF_scaledScreenParams(int32_t value);

  static inline void setStaticF_screenCoordScaleBias(int32_t value);

  static inline void setStaticF_screenParams(int32_t value);

  static inline void setStaticF_screenSize(int32_t value);

  static inline void setStaticF_screenSizeOverride(int32_t value);

  static inline void setStaticF_shadowBias(int32_t value);

  static inline void setStaticF_sinTime(int32_t value);

  static inline void setStaticF_sourceTex(int32_t value);

  static inline void setStaticF_subtractiveShadowColor(int32_t value);

  static inline void setStaticF_time(int32_t value);

  static inline void setStaticF_timeParameters(int32_t value);

  static inline void setStaticF_viewAndProjectionMatrix(int32_t value);

  static inline void setStaticF_viewMatrix(int32_t value);

  static inline void setStaticF_viewProjectionNoJitter(int32_t value);

  static inline void setStaticF_viewProjectionNoJitterStereo(int32_t value);

  static inline void setStaticF_worldSpaceCameraPos(int32_t value);

  static inline void setStaticF_worldToCameraMatrix(int32_t value);

  static inline void setStaticF_zBufferParams(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderPropertyId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShaderPropertyId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShaderPropertyId(ShaderPropertyId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShaderPropertyId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShaderPropertyId(ShaderPropertyId const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13016 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ShaderPropertyId, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ShaderPropertyId);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ShaderPropertyId*, "UnityEngine.Rendering.Universal", "ShaderPropertyId");
