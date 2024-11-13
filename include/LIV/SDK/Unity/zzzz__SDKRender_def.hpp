#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/SDKRender.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LIV/SDK/Unity/zzzz__SDKInputFrame_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKOutputFrame_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKPose_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKResolution_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__CameraEvent_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SDKRender)
namespace LIV::SDK::Unity {
class LIV;
}
namespace LIV::SDK::Unity {
struct SDKInputFrame;
}
namespace LIV::SDK::Unity {
struct SDKOutputFrame;
}
namespace LIV::SDK::Unity {
struct SDKResolution;
}
namespace LIV::SDK::Unity {
struct TEXTURE_ID;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering {
struct ColorWriteMask;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Plane;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace LIV::SDK::Unity {
class SDKRender;
}
// Write type traits
MARK_REF_PTR_T(::LIV::SDK::Unity::SDKRender);
// Type: LIV.SDK.Unity::SDKRender
// SizeInfo { instance_size: 832, native_size: -1, calculated_instance_size: 832, calculated_native_size: 828, minimum_alignment: 8, packing: None, specified_packing: None }
namespace LIV::SDK::Unity {
// Is value type: false
// CS Name: ::LIV.SDK.Unity::SDKRender*
class CORDL_TYPE SDKRender : public ::System::Object {
public:
  // Declarations
  /// @brief Field _applyTextureCommandBuffer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__applyTextureCommandBuffer,
                      put = __cordl_internal_set__applyTextureCommandBuffer)) ::UnityEngine::Rendering::CommandBuffer* _applyTextureCommandBuffer;

  /// @brief Field _backgroundRenderTexture, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__backgroundRenderTexture, put = __cordl_internal_set__backgroundRenderTexture)) ::UnityW<::UnityEngine::RenderTexture> _backgroundRenderTexture;

  /// @brief Field _cameraInstance, offset 0x2c0, size 0x8
  __declspec(property(get = __cordl_internal_get__cameraInstance, put = __cordl_internal_set__cameraInstance)) ::UnityW<::UnityEngine::Camera> _cameraInstance;

  /// @brief Field _captureTextureCommandBuffer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__captureTextureCommandBuffer,
                      put = __cordl_internal_set__captureTextureCommandBuffer)) ::UnityEngine::Rendering::CommandBuffer* _captureTextureCommandBuffer;

  /// @brief Field _clipPlaneCameraEvent, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__clipPlaneCameraEvent, put = __cordl_internal_set__clipPlaneCameraEvent)) ::UnityEngine::Rendering::CameraEvent _clipPlaneCameraEvent;

  /// @brief Field _clipPlaneCommandBuffer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__clipPlaneCommandBuffer, put = __cordl_internal_set__clipPlaneCommandBuffer)) ::UnityEngine::Rendering::CommandBuffer* _clipPlaneCommandBuffer;

  /// @brief Field _clipPlaneComplexDebugMaterial, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__clipPlaneComplexDebugMaterial, put = __cordl_internal_set__clipPlaneComplexDebugMaterial)) ::UnityW<::UnityEngine::Material>
      _clipPlaneComplexDebugMaterial;

  /// @brief Field _clipPlaneComplexMaterial, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__clipPlaneComplexMaterial, put = __cordl_internal_set__clipPlaneComplexMaterial)) ::UnityW<::UnityEngine::Material> _clipPlaneComplexMaterial;

  /// @brief Field _clipPlaneMesh, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__clipPlaneMesh, put = __cordl_internal_set__clipPlaneMesh)) ::UnityW<::UnityEngine::Mesh> _clipPlaneMesh;

  /// @brief Field _clipPlaneSimpleDebugMaterial, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__clipPlaneSimpleDebugMaterial, put = __cordl_internal_set__clipPlaneSimpleDebugMaterial)) ::UnityW<::UnityEngine::Material>
      _clipPlaneSimpleDebugMaterial;

  /// @brief Field _clipPlaneSimpleMaterial, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__clipPlaneSimpleMaterial, put = __cordl_internal_set__clipPlaneSimpleMaterial)) ::UnityW<::UnityEngine::Material> _clipPlaneSimpleMaterial;

  /// @brief Field _combineAlphaCommandBuffer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__combineAlphaCommandBuffer,
                      put = __cordl_internal_set__combineAlphaCommandBuffer)) ::UnityEngine::Rendering::CommandBuffer* _combineAlphaCommandBuffer;

  /// @brief Field _combineAlphaMaterial, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__combineAlphaMaterial, put = __cordl_internal_set__combineAlphaMaterial)) ::UnityW<::UnityEngine::Material> _combineAlphaMaterial;

  /// @brief Field _complexClipPlaneRenderTexture, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__complexClipPlaneRenderTexture, put = __cordl_internal_set__complexClipPlaneRenderTexture)) ::UnityW<::UnityEngine::RenderTexture>
      _complexClipPlaneRenderTexture;

  /// @brief Field _forceForwardRenderingMaterial, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__forceForwardRenderingMaterial, put = __cordl_internal_set__forceForwardRenderingMaterial)) ::UnityW<::UnityEngine::Material>
      _forceForwardRenderingMaterial;

  /// @brief Field _foregroundRenderTexture, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__foregroundRenderTexture, put = __cordl_internal_set__foregroundRenderTexture)) ::UnityW<::UnityEngine::RenderTexture> _foregroundRenderTexture;

  /// @brief Field _inputFrame, offset 0x160, size 0x158
  __declspec(property(get = __cordl_internal_get__inputFrame, put = __cordl_internal_set__inputFrame)) ::LIV::SDK::Unity::SDKInputFrame _inputFrame;

  /// @brief Field _liv, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__liv, put = __cordl_internal_set__liv)) ::UnityW<::LIV::SDK::Unity::LIV> _liv;

  /// @brief Field _optimizedRenderTexture, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__optimizedRenderTexture, put = __cordl_internal_set__optimizedRenderTexture)) ::UnityW<::UnityEngine::RenderTexture> _optimizedRenderTexture;

  /// @brief Field _optimizedRenderingCameraEvent, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__optimizedRenderingCameraEvent,
                      put = __cordl_internal_set__optimizedRenderingCameraEvent)) ::UnityEngine::Rendering::CameraEvent _optimizedRenderingCameraEvent;

  /// @brief Field _optimizedRenderingCommandBuffer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__optimizedRenderingCommandBuffer,
                      put = __cordl_internal_set__optimizedRenderingCommandBuffer)) ::UnityEngine::Rendering::CommandBuffer* _optimizedRenderingCommandBuffer;

  /// @brief Field _outputFrame, offset 0xb0, size 0xac
  __declspec(property(get = __cordl_internal_get__outputFrame, put = __cordl_internal_set__outputFrame)) ::LIV::SDK::Unity::SDKOutputFrame _outputFrame;

  /// @brief Field _requestedPose, offset 0x2c8, size 0x70
  __declspec(property(get = __cordl_internal_get__requestedPose, put = __cordl_internal_set__requestedPose)) ::LIV::SDK::Unity::SDKPose _requestedPose;

  /// @brief Field _requestedPoseFrameIndex, offset 0x338, size 0x4
  __declspec(property(get = __cordl_internal_get__requestedPoseFrameIndex, put = __cordl_internal_set__requestedPoseFrameIndex)) int32_t _requestedPoseFrameIndex;

  /// @brief Field _resolution, offset 0x2b8, size 0x8
  __declspec(property(get = __cordl_internal_get__resolution, put = __cordl_internal_set__resolution)) ::LIV::SDK::Unity::SDKResolution _resolution;

  /// @brief Field _writeMaterial, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__writeMaterial, put = __cordl_internal_set__writeMaterial)) ::UnityW<::UnityEngine::Material> _writeMaterial;

  /// @brief Field _writeOpaqueToAlphaMaterial, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__writeOpaqueToAlphaMaterial, put = __cordl_internal_set__writeOpaqueToAlphaMaterial)) ::UnityW<::UnityEngine::Material> _writeOpaqueToAlphaMaterial;

  __declspec(property(get = get_cameraInstance)) ::UnityW<::UnityEngine::Camera> cameraInstance;

  __declspec(property(get = get_cameraReference)) ::UnityW<::UnityEngine::Camera> cameraReference;

  __declspec(property(get = get_canRenderBackground)) bool canRenderBackground;

  __declspec(property(get = get_canRenderForeground)) bool canRenderForeground;

  __declspec(property(get = get_canRenderOptimized)) bool canRenderOptimized;

  __declspec(property(get = get_canSetPose)) bool canSetPose;

  __declspec(property(get = get_disableStandardAssets)) bool disableStandardAssets;

  __declspec(property(get = get_hmdCamera)) ::UnityW<::UnityEngine::Camera> hmdCamera;

  __declspec(property(get = get_inputFrame)) ::LIV::SDK::Unity::SDKInputFrame inputFrame;

  __declspec(property(get = get_interlacedRendering)) bool interlacedRendering;

  __declspec(property(get = get_liv)) ::UnityW<::LIV::SDK::Unity::LIV> liv;

  __declspec(property(get = get_localToWorldMatrix)) ::UnityEngine::Matrix4x4 localToWorldMatrix;

  __declspec(property(get = get_outputFrame)) ::LIV::SDK::Unity::SDKOutputFrame outputFrame;

  __declspec(property(get = get_resolution)) ::LIV::SDK::Unity::SDKResolution resolution;

  __declspec(property(get = get_spectatorLayerMask)) int32_t spectatorLayerMask;

  __declspec(property(get = get_stage)) ::UnityW<::UnityEngine::Transform> stage;

  __declspec(property(get = get_stageLocalToWorldMatrix)) ::UnityEngine::Matrix4x4 stageLocalToWorldMatrix;

  __declspec(property(get = get_stageTransform)) ::UnityW<::UnityEngine::Transform> stageTransform;

  __declspec(property(get = get_useDeferredRendering)) bool useDeferredRendering;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CreateAssets, addr 0x3a6c534, size 0x6d0, virtual false, abstract: false, final false
  inline void CreateAssets();

  /// @brief Method CreateBackgroundTexture, addr 0x3a6fc44, size 0x94, virtual false, abstract: false, final false
  inline void CreateBackgroundTexture();

  /// @brief Method CreateComplexClipPlaneTexture, addr 0x3a6ff70, size 0x94, virtual false, abstract: false, final false
  inline void CreateComplexClipPlaneTexture();

  /// @brief Method CreateForegroundTexture, addr 0x3a6fe48, size 0x94, virtual false, abstract: false, final false
  inline void CreateForegroundTexture();

  /// @brief Method CreateOptimizedTexture, addr 0x3a6fedc, size 0x94, virtual false, abstract: false, final false
  inline void CreateOptimizedTexture();

  /// @brief Method DestroyAssets, addr 0x3a6f038, size 0x184, virtual false, abstract: false, final false
  inline void DestroyAssets();

  /// @brief Method Dispose, addr 0x3a6ad10, size 0x38, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetClipPlaneMaterial, addr 0x3a6c0e0, size 0x104, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> GetClipPlaneMaterial(bool debugClipPlane, bool complexClipPlane, ::UnityEngine::Rendering::ColorWriteMask colorWriteMask);

  /// @brief Method GetGroundClipPlaneMaterial, addr 0x3a6c1e4, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> GetGroundClipPlaneMaterial(bool debugClipPlane, ::UnityEngine::Rendering::ColorWriteMask colorWriteMask);

  /// @brief Method InvokePostRenderBackground, addr 0x3a6e358, size 0x38, virtual false, abstract: false, final false
  inline void InvokePostRenderBackground();

  /// @brief Method InvokePostRenderForeground, addr 0x3a6e668, size 0x38, virtual false, abstract: false, final false
  inline void InvokePostRenderForeground();

  /// @brief Method InvokePreRender, addr 0x3a6d514, size 0x38, virtual false, abstract: false, final false
  inline void InvokePreRender();

  /// @brief Method InvokePreRenderBackground, addr 0x3a6e22c, size 0x38, virtual false, abstract: false, final false
  inline void InvokePreRenderBackground();

  /// @brief Method InvokePreRenderForeground, addr 0x3a6e630, size 0x38, virtual false, abstract: false, final false
  inline void InvokePreRenderForeground();

  /// @brief Method IvokePostRender, addr 0x3a6e004, size 0x38, virtual false, abstract: false, final false
  inline void IvokePostRender();

  static inline ::LIV::SDK::Unity::SDKRender* New_ctor(::LIV::SDK::Unity::LIV* liv);

  /// @brief Method ReleaseBridgePoseControl, addr 0x3a6f1bc, size 0x60, virtual false, abstract: false, final false
  inline void ReleaseBridgePoseControl();

  /// @brief Method Render, addr 0x3a6b1c0, size 0xc4, virtual false, abstract: false, final false
  inline void Render();

  /// @brief Method RenderBackground, addr 0x3a6d54c, size 0x118, virtual false, abstract: false, final false
  inline void RenderBackground();

  /// @brief Method RenderForeground, addr 0x3a6d664, size 0x4b0, virtual false, abstract: false, final false
  inline void RenderForeground();

  /// @brief Method RenderOptimized, addr 0x3a6db14, size 0x4f0, virtual false, abstract: false, final false
  inline void RenderOptimized();

  /// @brief Method SendTextureToBridge, addr 0x3a6e264, size 0xf4, virtual false, abstract: false, final false
  inline void SendTextureToBridge(::UnityEngine::RenderTexture* texture, ::LIV::SDK::Unity::TEXTURE_ID id);

  /// @brief Method SetGroundPlane, addr 0x3a6f8d8, size 0x18c, virtual false, abstract: false, final false
  inline void SetGroundPlane(float_t distance, ::UnityEngine::Vector3 normal, bool useLocalSpace);

  /// @brief Method SetGroundPlane, addr 0x3a6fa64, size 0x1c, virtual false, abstract: false, final false
  inline void SetGroundPlane(::UnityEngine::Plane plane, bool useLocalSpace);

  /// @brief Method SetGroundPlane, addr 0x3a6fa80, size 0x1a0, virtual false, abstract: false, final false
  inline void SetGroundPlane(::UnityEngine::Transform* transform, bool useLocalSpace);

  /// @brief Method SetPose, addr 0x3a6f448, size 0x2e0, virtual false, abstract: false, final false
  inline bool SetPose(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, float_t verticalFieldOfView, bool useLocalSpace);

  /// @brief Method UpdateBridgeInputFrame, addr 0x3a6cc88, size 0x1b0, virtual false, abstract: false, final false
  inline void UpdateBridgeInputFrame();

  /// @brief Method UpdateBridgeResolution, addr 0x3a6d150, size 0x54, virtual false, abstract: false, final false
  inline void UpdateBridgeResolution();

  /// @brief Method UpdateCameraSettings, addr 0x3a6cc04, size 0x84, virtual false, abstract: false, final false
  inline void UpdateCameraSettings();

  /// @brief Method UpdateTextures, addr 0x3a6d294, size 0x280, virtual false, abstract: false, final false
  inline void UpdateTextures();

  constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get__applyTextureCommandBuffer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::CommandBuffer*> const& __cordl_internal_get__applyTextureCommandBuffer() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__backgroundRenderTexture() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__backgroundRenderTexture();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__cameraInstance() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__cameraInstance();

  constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get__captureTextureCommandBuffer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::CommandBuffer*> const& __cordl_internal_get__captureTextureCommandBuffer() const;

  constexpr ::UnityEngine::Rendering::CameraEvent const& __cordl_internal_get__clipPlaneCameraEvent() const;

  constexpr ::UnityEngine::Rendering::CameraEvent& __cordl_internal_get__clipPlaneCameraEvent();

  constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get__clipPlaneCommandBuffer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::CommandBuffer*> const& __cordl_internal_get__clipPlaneCommandBuffer() const;

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__clipPlaneComplexDebugMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__clipPlaneComplexDebugMaterial();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__clipPlaneComplexMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__clipPlaneComplexMaterial();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__clipPlaneMesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__clipPlaneMesh();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__clipPlaneSimpleDebugMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__clipPlaneSimpleDebugMaterial();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__clipPlaneSimpleMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__clipPlaneSimpleMaterial();

  constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get__combineAlphaCommandBuffer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::CommandBuffer*> const& __cordl_internal_get__combineAlphaCommandBuffer() const;

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__combineAlphaMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__combineAlphaMaterial();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__complexClipPlaneRenderTexture() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__complexClipPlaneRenderTexture();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__forceForwardRenderingMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__forceForwardRenderingMaterial();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__foregroundRenderTexture() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__foregroundRenderTexture();

  constexpr ::LIV::SDK::Unity::SDKInputFrame const& __cordl_internal_get__inputFrame() const;

  constexpr ::LIV::SDK::Unity::SDKInputFrame& __cordl_internal_get__inputFrame();

  constexpr ::UnityW<::LIV::SDK::Unity::LIV> const& __cordl_internal_get__liv() const;

  constexpr ::UnityW<::LIV::SDK::Unity::LIV>& __cordl_internal_get__liv();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__optimizedRenderTexture() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__optimizedRenderTexture();

  constexpr ::UnityEngine::Rendering::CameraEvent const& __cordl_internal_get__optimizedRenderingCameraEvent() const;

  constexpr ::UnityEngine::Rendering::CameraEvent& __cordl_internal_get__optimizedRenderingCameraEvent();

  constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get__optimizedRenderingCommandBuffer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::CommandBuffer*> const& __cordl_internal_get__optimizedRenderingCommandBuffer() const;

  constexpr ::LIV::SDK::Unity::SDKOutputFrame const& __cordl_internal_get__outputFrame() const;

  constexpr ::LIV::SDK::Unity::SDKOutputFrame& __cordl_internal_get__outputFrame();

  constexpr ::LIV::SDK::Unity::SDKPose const& __cordl_internal_get__requestedPose() const;

  constexpr ::LIV::SDK::Unity::SDKPose& __cordl_internal_get__requestedPose();

  constexpr int32_t const& __cordl_internal_get__requestedPoseFrameIndex() const;

  constexpr int32_t& __cordl_internal_get__requestedPoseFrameIndex();

  constexpr ::LIV::SDK::Unity::SDKResolution const& __cordl_internal_get__resolution() const;

  constexpr ::LIV::SDK::Unity::SDKResolution& __cordl_internal_get__resolution();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__writeMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__writeMaterial();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__writeOpaqueToAlphaMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__writeOpaqueToAlphaMaterial();

  constexpr void __cordl_internal_set__applyTextureCommandBuffer(::UnityEngine::Rendering::CommandBuffer* value);

  constexpr void __cordl_internal_set__backgroundRenderTexture(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr void __cordl_internal_set__cameraInstance(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set__captureTextureCommandBuffer(::UnityEngine::Rendering::CommandBuffer* value);

  constexpr void __cordl_internal_set__clipPlaneCameraEvent(::UnityEngine::Rendering::CameraEvent value);

  constexpr void __cordl_internal_set__clipPlaneCommandBuffer(::UnityEngine::Rendering::CommandBuffer* value);

  constexpr void __cordl_internal_set__clipPlaneComplexDebugMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__clipPlaneComplexMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__clipPlaneMesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set__clipPlaneSimpleDebugMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__clipPlaneSimpleMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__combineAlphaCommandBuffer(::UnityEngine::Rendering::CommandBuffer* value);

  constexpr void __cordl_internal_set__combineAlphaMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__complexClipPlaneRenderTexture(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr void __cordl_internal_set__forceForwardRenderingMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__foregroundRenderTexture(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr void __cordl_internal_set__inputFrame(::LIV::SDK::Unity::SDKInputFrame value);

  constexpr void __cordl_internal_set__liv(::UnityW<::LIV::SDK::Unity::LIV> value);

  constexpr void __cordl_internal_set__optimizedRenderTexture(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr void __cordl_internal_set__optimizedRenderingCameraEvent(::UnityEngine::Rendering::CameraEvent value);

  constexpr void __cordl_internal_set__optimizedRenderingCommandBuffer(::UnityEngine::Rendering::CommandBuffer* value);

  constexpr void __cordl_internal_set__outputFrame(::LIV::SDK::Unity::SDKOutputFrame value);

  constexpr void __cordl_internal_set__requestedPose(::LIV::SDK::Unity::SDKPose value);

  constexpr void __cordl_internal_set__requestedPoseFrameIndex(int32_t value);

  constexpr void __cordl_internal_set__resolution(::LIV::SDK::Unity::SDKResolution value);

  constexpr void __cordl_internal_set__writeMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__writeOpaqueToAlphaMaterial(::UnityW<::UnityEngine::Material> value);

  /// @brief Method .ctor, addr 0x3a6aba8, size 0x168, virtual false, abstract: false, final false
  inline void _ctor(::LIV::SDK::Unity::LIV* liv);

  /// @brief Method get_cameraInstance, addr 0x3a6f2e0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> get_cameraInstance();

  /// @brief Method get_cameraReference, addr 0x3a6e76c, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> get_cameraReference();

  /// @brief Method get_canRenderBackground, addr 0x3a6c2c0, size 0x8c, virtual false, abstract: false, final false
  inline bool get_canRenderBackground();

  /// @brief Method get_canRenderForeground, addr 0x3a6c34c, size 0xa0, virtual false, abstract: false, final false
  inline bool get_canRenderForeground();

  /// @brief Method get_canRenderOptimized, addr 0x3a6c3ec, size 0x78, virtual false, abstract: false, final false
  inline bool get_canRenderOptimized();

  /// @brief Method get_canSetPose, addr 0x3a6f428, size 0x20, virtual false, abstract: false, final false
  inline bool get_canSetPose();

  /// @brief Method get_disableStandardAssets, addr 0x3a6e418, size 0x1c, virtual false, abstract: false, final false
  inline bool get_disableStandardAssets();

  /// @brief Method get_hmdCamera, addr 0x3a6f2e8, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> get_hmdCamera();

  /// @brief Method get_inputFrame, addr 0x3a6f2c8, size 0x10, virtual false, abstract: false, final false
  inline ::LIV::SDK::Unity::SDKInputFrame get_inputFrame();

  /// @brief Method get_interlacedRendering, addr 0x3a6c2a8, size 0xc, virtual false, abstract: false, final false
  inline bool get_interlacedRendering();

  /// @brief Method get_liv, addr 0x3a6f2b0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::LIV::SDK::Unity::LIV> get_liv();

  /// @brief Method get_localToWorldMatrix, addr 0x3a6ce38, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_localToWorldMatrix();

  /// @brief Method get_outputFrame, addr 0x3a6f2b8, size 0x10, virtual false, abstract: false, final false
  inline ::LIV::SDK::Unity::SDKOutputFrame get_outputFrame();

  /// @brief Method get_resolution, addr 0x3a6f2d8, size 0x8, virtual false, abstract: false, final false
  inline ::LIV::SDK::Unity::SDKResolution get_resolution();

  /// @brief Method get_spectatorLayerMask, addr 0x3a6cef4, size 0x20, virtual false, abstract: false, final false
  inline int32_t get_spectatorLayerMask();

  /// @brief Method get_stage, addr 0x3a6f304, size 0x18, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_stage();

  /// @brief Method get_stageLocalToWorldMatrix, addr 0x3a6f338, size 0xf0, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_stageLocalToWorldMatrix();

  /// @brief Method get_stageTransform, addr 0x3a6f31c, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_stageTransform();

  /// @brief Method get_useDeferredRendering, addr 0x3a6c280, size 0x28, virtual false, abstract: false, final false
  inline bool get_useDeferredRendering();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SDKRender();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SDKRender", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SDKRender(SDKRender&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SDKRender", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SDKRender(SDKRender const&) = delete;

  /// @brief Field _clipPlaneCommandBuffer, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::CommandBuffer* ____clipPlaneCommandBuffer;

  /// @brief Field _combineAlphaCommandBuffer, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::CommandBuffer* ____combineAlphaCommandBuffer;

  /// @brief Field _captureTextureCommandBuffer, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::CommandBuffer* ____captureTextureCommandBuffer;

  /// @brief Field _applyTextureCommandBuffer, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::CommandBuffer* ____applyTextureCommandBuffer;

  /// @brief Field _optimizedRenderingCommandBuffer, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Rendering::CommandBuffer* ____optimizedRenderingCommandBuffer;

  /// @brief Field _clipPlaneCameraEvent, offset: 0x38, size: 0x4, def value: None
  ::UnityEngine::Rendering::CameraEvent ____clipPlaneCameraEvent;

  /// @brief Field _optimizedRenderingCameraEvent, offset: 0x3c, size: 0x4, def value: None
  ::UnityEngine::Rendering::CameraEvent ____optimizedRenderingCameraEvent;

  /// @brief Field _clipPlaneMesh, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ____clipPlaneMesh;

  /// @brief Field _clipPlaneSimpleMaterial, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____clipPlaneSimpleMaterial;

  /// @brief Field _clipPlaneSimpleDebugMaterial, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____clipPlaneSimpleDebugMaterial;

  /// @brief Field _clipPlaneComplexMaterial, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____clipPlaneComplexMaterial;

  /// @brief Field _clipPlaneComplexDebugMaterial, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____clipPlaneComplexDebugMaterial;

  /// @brief Field _writeOpaqueToAlphaMaterial, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____writeOpaqueToAlphaMaterial;

  /// @brief Field _combineAlphaMaterial, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____combineAlphaMaterial;

  /// @brief Field _writeMaterial, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____writeMaterial;

  /// @brief Field _forceForwardRenderingMaterial, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____forceForwardRenderingMaterial;

  /// @brief Field _backgroundRenderTexture, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ____backgroundRenderTexture;

  /// @brief Field _foregroundRenderTexture, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ____foregroundRenderTexture;

  /// @brief Field _optimizedRenderTexture, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ____optimizedRenderTexture;

  /// @brief Field _complexClipPlaneRenderTexture, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ____complexClipPlaneRenderTexture;

  /// @brief Field _liv, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::LIV::SDK::Unity::LIV> ____liv;

  /// @brief Field _outputFrame, offset: 0xb0, size: 0xac, def value: None
  ::LIV::SDK::Unity::SDKOutputFrame ____outputFrame;

  /// @brief Field _inputFrame, offset: 0x160, size: 0x158, def value: None
  ::LIV::SDK::Unity::SDKInputFrame ____inputFrame;

  /// @brief Field _resolution, offset: 0x2b8, size: 0x8, def value: None
  ::LIV::SDK::Unity::SDKResolution ____resolution;

  /// @brief Field _cameraInstance, offset: 0x2c0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ____cameraInstance;

  /// @brief Field _requestedPose, offset: 0x2c8, size: 0x70, def value: None
  ::LIV::SDK::Unity::SDKPose ____requestedPose;

  /// @brief Field _requestedPoseFrameIndex, offset: 0x338, size: 0x4, def value: None
  int32_t ____requestedPoseFrameIndex;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17261 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::SDKRender, 0x340>, "Size mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKRender, ____clipPlaneCommandBuffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKRender, ____combineAlphaCommandBuffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKRender, ____captureTextureCommandBuffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKRender, ____applyTextureCommandBuffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKRender, ____optimizedRenderingCommandBuffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKRender, ____clipPlaneCameraEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKRender, ____optimizedRenderingCameraEvent) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKRender, ____clipPlaneMesh) == 0x40, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKRender, ____clipPlaneSimpleMaterial) == 0x48, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKRender, ____clipPlaneSimpleDebugMaterial) == 0x50, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKRender, ____clipPlaneComplexMaterial) == 0x58, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKRender, ____clipPlaneComplexDebugMaterial) == 0x60, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKRender, ____writeOpaqueToAlphaMaterial) == 0x68, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKRender, ____combineAlphaMaterial) == 0x70, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKRender, ____writeMaterial) == 0x78, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKRender, ____forceForwardRenderingMaterial) == 0x80, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKRender, ____backgroundRenderTexture) == 0x88, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKRender, ____foregroundRenderTexture) == 0x90, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKRender, ____optimizedRenderTexture) == 0x98, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKRender, ____complexClipPlaneRenderTexture) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKRender, ____liv) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKRender, ____outputFrame) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKRender, ____inputFrame) == 0x160, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKRender, ____resolution) == 0x2b8, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKRender, ____cameraInstance) == 0x2c0, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKRender, ____requestedPose) == 0x2c8, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKRender, ____requestedPoseFrameIndex) == 0x338, "Offset mismatch!");

} // namespace LIV::SDK::Unity
NEED_NO_BOX(::LIV::SDK::Unity::SDKRender);
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKRender*, "LIV.SDK.Unity", "SDKRender");
