#pragma once
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
// SizeInfo { instance_size: 832, native_size: -1, calculated_instance_size: 832, calculated_native_size: 828, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LIV::SDK::Unity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10337)), TypeDefinitionIndex(TypeDefinitionIndex(15108)), TypeDefinitionIndex(TypeDefinitionIndex(15115)),
// TypeDefinitionIndex(TypeDefinitionIndex(15122)), TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15116))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(15097)) CS Name: ::LIV.SDK.Unity::SDKRender*
class CORDL_TYPE SDKRender : public ::System::Object {
public:
  // Declarations
  /// @brief Field _clipPlaneCommandBuffer, offset 0x10, size 0x8
  __declspec(property(get = __get__clipPlaneCommandBuffer, put = __set__clipPlaneCommandBuffer))::UnityEngine::Rendering::CommandBuffer* _clipPlaneCommandBuffer;

  /// @brief Field _combineAlphaCommandBuffer, offset 0x18, size 0x8
  __declspec(property(get = __get__combineAlphaCommandBuffer, put = __set__combineAlphaCommandBuffer))::UnityEngine::Rendering::CommandBuffer* _combineAlphaCommandBuffer;

  /// @brief Field _captureTextureCommandBuffer, offset 0x20, size 0x8
  __declspec(property(get = __get__captureTextureCommandBuffer, put = __set__captureTextureCommandBuffer))::UnityEngine::Rendering::CommandBuffer* _captureTextureCommandBuffer;

  /// @brief Field _applyTextureCommandBuffer, offset 0x28, size 0x8
  __declspec(property(get = __get__applyTextureCommandBuffer, put = __set__applyTextureCommandBuffer))::UnityEngine::Rendering::CommandBuffer* _applyTextureCommandBuffer;

  /// @brief Field _optimizedRenderingCommandBuffer, offset 0x30, size 0x8
  __declspec(property(get = __get__optimizedRenderingCommandBuffer, put = __set__optimizedRenderingCommandBuffer))::UnityEngine::Rendering::CommandBuffer* _optimizedRenderingCommandBuffer;

  /// @brief Field _clipPlaneCameraEvent, offset 0x38, size 0x4
  __declspec(property(get = __get__clipPlaneCameraEvent, put = __set__clipPlaneCameraEvent))::UnityEngine::Rendering::CameraEvent _clipPlaneCameraEvent;

  /// @brief Field _optimizedRenderingCameraEvent, offset 0x3c, size 0x4
  __declspec(property(get = __get__optimizedRenderingCameraEvent, put = __set__optimizedRenderingCameraEvent))::UnityEngine::Rendering::CameraEvent _optimizedRenderingCameraEvent;

  /// @brief Field _clipPlaneMesh, offset 0x40, size 0x8
  __declspec(property(get = __get__clipPlaneMesh, put = __set__clipPlaneMesh))::UnityEngine::Mesh* _clipPlaneMesh;

  /// @brief Field _clipPlaneSimpleMaterial, offset 0x48, size 0x8
  __declspec(property(get = __get__clipPlaneSimpleMaterial, put = __set__clipPlaneSimpleMaterial))::UnityEngine::Material* _clipPlaneSimpleMaterial;

  /// @brief Field _clipPlaneSimpleDebugMaterial, offset 0x50, size 0x8
  __declspec(property(get = __get__clipPlaneSimpleDebugMaterial, put = __set__clipPlaneSimpleDebugMaterial))::UnityEngine::Material* _clipPlaneSimpleDebugMaterial;

  /// @brief Field _clipPlaneComplexMaterial, offset 0x58, size 0x8
  __declspec(property(get = __get__clipPlaneComplexMaterial, put = __set__clipPlaneComplexMaterial))::UnityEngine::Material* _clipPlaneComplexMaterial;

  /// @brief Field _clipPlaneComplexDebugMaterial, offset 0x60, size 0x8
  __declspec(property(get = __get__clipPlaneComplexDebugMaterial, put = __set__clipPlaneComplexDebugMaterial))::UnityEngine::Material* _clipPlaneComplexDebugMaterial;

  /// @brief Field _writeOpaqueToAlphaMaterial, offset 0x68, size 0x8
  __declspec(property(get = __get__writeOpaqueToAlphaMaterial, put = __set__writeOpaqueToAlphaMaterial))::UnityEngine::Material* _writeOpaqueToAlphaMaterial;

  /// @brief Field _combineAlphaMaterial, offset 0x70, size 0x8
  __declspec(property(get = __get__combineAlphaMaterial, put = __set__combineAlphaMaterial))::UnityEngine::Material* _combineAlphaMaterial;

  /// @brief Field _writeMaterial, offset 0x78, size 0x8
  __declspec(property(get = __get__writeMaterial, put = __set__writeMaterial))::UnityEngine::Material* _writeMaterial;

  /// @brief Field _forceForwardRenderingMaterial, offset 0x80, size 0x8
  __declspec(property(get = __get__forceForwardRenderingMaterial, put = __set__forceForwardRenderingMaterial))::UnityEngine::Material* _forceForwardRenderingMaterial;

  /// @brief Field _backgroundRenderTexture, offset 0x88, size 0x8
  __declspec(property(get = __get__backgroundRenderTexture, put = __set__backgroundRenderTexture))::UnityEngine::RenderTexture* _backgroundRenderTexture;

  /// @brief Field _foregroundRenderTexture, offset 0x90, size 0x8
  __declspec(property(get = __get__foregroundRenderTexture, put = __set__foregroundRenderTexture))::UnityEngine::RenderTexture* _foregroundRenderTexture;

  /// @brief Field _optimizedRenderTexture, offset 0x98, size 0x8
  __declspec(property(get = __get__optimizedRenderTexture, put = __set__optimizedRenderTexture))::UnityEngine::RenderTexture* _optimizedRenderTexture;

  /// @brief Field _complexClipPlaneRenderTexture, offset 0xa0, size 0x8
  __declspec(property(get = __get__complexClipPlaneRenderTexture, put = __set__complexClipPlaneRenderTexture))::UnityEngine::RenderTexture* _complexClipPlaneRenderTexture;

  /// @brief Field _liv, offset 0xa8, size 0x8
  __declspec(property(get = __get__liv, put = __set__liv))::LIV::SDK::Unity::LIV* _liv;

  /// @brief Field _outputFrame, offset 0xb0, size 0xac
  __declspec(property(get = __get__outputFrame, put = __set__outputFrame))::LIV::SDK::Unity::SDKOutputFrame _outputFrame;

  /// @brief Field _inputFrame, offset 0x160, size 0x158
  __declspec(property(get = __get__inputFrame, put = __set__inputFrame))::LIV::SDK::Unity::SDKInputFrame _inputFrame;

  /// @brief Field _resolution, offset 0x2b8, size 0x8
  __declspec(property(get = __get__resolution, put = __set__resolution))::LIV::SDK::Unity::SDKResolution _resolution;

  /// @brief Field _cameraInstance, offset 0x2c0, size 0x8
  __declspec(property(get = __get__cameraInstance, put = __set__cameraInstance))::UnityEngine::Camera* _cameraInstance;

  /// @brief Field _requestedPose, offset 0x2c8, size 0x70
  __declspec(property(get = __get__requestedPose, put = __set__requestedPose))::LIV::SDK::Unity::SDKPose _requestedPose;

  /// @brief Field _requestedPoseFrameIndex, offset 0x338, size 0x4
  __declspec(property(get = __get__requestedPoseFrameIndex, put = __set__requestedPoseFrameIndex)) int32_t _requestedPoseFrameIndex;

  __declspec(property(get = get_useDeferredRendering)) bool useDeferredRendering;

  __declspec(property(get = get_interlacedRendering)) bool interlacedRendering;

  __declspec(property(get = get_canRenderBackground)) bool canRenderBackground;

  __declspec(property(get = get_canRenderForeground)) bool canRenderForeground;

  __declspec(property(get = get_canRenderOptimized)) bool canRenderOptimized;

  __declspec(property(get = get_liv))::LIV::SDK::Unity::LIV* liv;

  __declspec(property(get = get_outputFrame))::LIV::SDK::Unity::SDKOutputFrame outputFrame;

  __declspec(property(get = get_inputFrame))::LIV::SDK::Unity::SDKInputFrame inputFrame;

  __declspec(property(get = get_resolution))::LIV::SDK::Unity::SDKResolution resolution;

  __declspec(property(get = get_cameraInstance))::UnityEngine::Camera* cameraInstance;

  __declspec(property(get = get_cameraReference))::UnityEngine::Camera* cameraReference;

  __declspec(property(get = get_hmdCamera))::UnityEngine::Camera* hmdCamera;

  __declspec(property(get = get_stage))::UnityEngine::Transform* stage;

  __declspec(property(get = get_stageTransform))::UnityEngine::Transform* stageTransform;

  __declspec(property(get = get_stageLocalToWorldMatrix))::UnityEngine::Matrix4x4 stageLocalToWorldMatrix;

  __declspec(property(get = get_localToWorldMatrix))::UnityEngine::Matrix4x4 localToWorldMatrix;

  __declspec(property(get = get_spectatorLayerMask)) int32_t spectatorLayerMask;

  __declspec(property(get = get_disableStandardAssets)) bool disableStandardAssets;

  __declspec(property(get = get_canSetPose)) bool canSetPose;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr ::UnityEngine::Rendering::CommandBuffer*& __get__clipPlaneCommandBuffer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::CommandBuffer*> const& __get__clipPlaneCommandBuffer() const;

  constexpr void __set__clipPlaneCommandBuffer(::UnityEngine::Rendering::CommandBuffer* value);

  constexpr ::UnityEngine::Rendering::CommandBuffer*& __get__combineAlphaCommandBuffer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::CommandBuffer*> const& __get__combineAlphaCommandBuffer() const;

  constexpr void __set__combineAlphaCommandBuffer(::UnityEngine::Rendering::CommandBuffer* value);

  constexpr ::UnityEngine::Rendering::CommandBuffer*& __get__captureTextureCommandBuffer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::CommandBuffer*> const& __get__captureTextureCommandBuffer() const;

  constexpr void __set__captureTextureCommandBuffer(::UnityEngine::Rendering::CommandBuffer* value);

  constexpr ::UnityEngine::Rendering::CommandBuffer*& __get__applyTextureCommandBuffer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::CommandBuffer*> const& __get__applyTextureCommandBuffer() const;

  constexpr void __set__applyTextureCommandBuffer(::UnityEngine::Rendering::CommandBuffer* value);

  constexpr ::UnityEngine::Rendering::CommandBuffer*& __get__optimizedRenderingCommandBuffer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::CommandBuffer*> const& __get__optimizedRenderingCommandBuffer() const;

  constexpr void __set__optimizedRenderingCommandBuffer(::UnityEngine::Rendering::CommandBuffer* value);

  constexpr ::UnityEngine::Rendering::CameraEvent& __get__clipPlaneCameraEvent();

  constexpr ::UnityEngine::Rendering::CameraEvent const& __get__clipPlaneCameraEvent() const;

  constexpr void __set__clipPlaneCameraEvent(::UnityEngine::Rendering::CameraEvent value);

  constexpr ::UnityEngine::Rendering::CameraEvent& __get__optimizedRenderingCameraEvent();

  constexpr ::UnityEngine::Rendering::CameraEvent const& __get__optimizedRenderingCameraEvent() const;

  constexpr void __set__optimizedRenderingCameraEvent(::UnityEngine::Rendering::CameraEvent value);

  constexpr ::UnityEngine::Mesh*& __get__clipPlaneMesh();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> const& __get__clipPlaneMesh() const;

  constexpr void __set__clipPlaneMesh(::UnityEngine::Mesh* value);

  constexpr ::UnityEngine::Material*& __get__clipPlaneSimpleMaterial();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get__clipPlaneSimpleMaterial() const;

  constexpr void __set__clipPlaneSimpleMaterial(::UnityEngine::Material* value);

  constexpr ::UnityEngine::Material*& __get__clipPlaneSimpleDebugMaterial();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get__clipPlaneSimpleDebugMaterial() const;

  constexpr void __set__clipPlaneSimpleDebugMaterial(::UnityEngine::Material* value);

  constexpr ::UnityEngine::Material*& __get__clipPlaneComplexMaterial();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get__clipPlaneComplexMaterial() const;

  constexpr void __set__clipPlaneComplexMaterial(::UnityEngine::Material* value);

  constexpr ::UnityEngine::Material*& __get__clipPlaneComplexDebugMaterial();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get__clipPlaneComplexDebugMaterial() const;

  constexpr void __set__clipPlaneComplexDebugMaterial(::UnityEngine::Material* value);

  constexpr ::UnityEngine::Material*& __get__writeOpaqueToAlphaMaterial();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get__writeOpaqueToAlphaMaterial() const;

  constexpr void __set__writeOpaqueToAlphaMaterial(::UnityEngine::Material* value);

  constexpr ::UnityEngine::Material*& __get__combineAlphaMaterial();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get__combineAlphaMaterial() const;

  constexpr void __set__combineAlphaMaterial(::UnityEngine::Material* value);

  constexpr ::UnityEngine::Material*& __get__writeMaterial();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get__writeMaterial() const;

  constexpr void __set__writeMaterial(::UnityEngine::Material* value);

  constexpr ::UnityEngine::Material*& __get__forceForwardRenderingMaterial();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get__forceForwardRenderingMaterial() const;

  constexpr void __set__forceForwardRenderingMaterial(::UnityEngine::Material* value);

  constexpr ::UnityEngine::RenderTexture*& __get__backgroundRenderTexture();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RenderTexture*> const& __get__backgroundRenderTexture() const;

  constexpr void __set__backgroundRenderTexture(::UnityEngine::RenderTexture* value);

  constexpr ::UnityEngine::RenderTexture*& __get__foregroundRenderTexture();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RenderTexture*> const& __get__foregroundRenderTexture() const;

  constexpr void __set__foregroundRenderTexture(::UnityEngine::RenderTexture* value);

  constexpr ::UnityEngine::RenderTexture*& __get__optimizedRenderTexture();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RenderTexture*> const& __get__optimizedRenderTexture() const;

  constexpr void __set__optimizedRenderTexture(::UnityEngine::RenderTexture* value);

  constexpr ::UnityEngine::RenderTexture*& __get__complexClipPlaneRenderTexture();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RenderTexture*> const& __get__complexClipPlaneRenderTexture() const;

  constexpr void __set__complexClipPlaneRenderTexture(::UnityEngine::RenderTexture* value);

  constexpr ::LIV::SDK::Unity::LIV*& __get__liv();

  constexpr ::cordl_internals::to_const_pointer<::LIV::SDK::Unity::LIV*> const& __get__liv() const;

  constexpr void __set__liv(::LIV::SDK::Unity::LIV* value);

  constexpr ::LIV::SDK::Unity::SDKOutputFrame& __get__outputFrame();

  constexpr ::LIV::SDK::Unity::SDKOutputFrame const& __get__outputFrame() const;

  constexpr void __set__outputFrame(::LIV::SDK::Unity::SDKOutputFrame value);

  constexpr ::LIV::SDK::Unity::SDKInputFrame& __get__inputFrame();

  constexpr ::LIV::SDK::Unity::SDKInputFrame const& __get__inputFrame() const;

  constexpr void __set__inputFrame(::LIV::SDK::Unity::SDKInputFrame value);

  constexpr ::LIV::SDK::Unity::SDKResolution& __get__resolution();

  constexpr ::LIV::SDK::Unity::SDKResolution const& __get__resolution() const;

  constexpr void __set__resolution(::LIV::SDK::Unity::SDKResolution value);

  constexpr ::UnityEngine::Camera*& __get__cameraInstance();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> const& __get__cameraInstance() const;

  constexpr void __set__cameraInstance(::UnityEngine::Camera* value);

  constexpr ::LIV::SDK::Unity::SDKPose& __get__requestedPose();

  constexpr ::LIV::SDK::Unity::SDKPose const& __get__requestedPose() const;

  constexpr void __set__requestedPose(::LIV::SDK::Unity::SDKPose value);

  constexpr int32_t& __get__requestedPoseFrameIndex();

  constexpr int32_t const& __get__requestedPoseFrameIndex() const;

  constexpr void __set__requestedPoseFrameIndex(int32_t value);

  /// @brief Method GetClipPlaneMaterial, addr 0x220fbac, size 0x104, virtual false, abstract: false, final false
  inline ::UnityEngine::Material* GetClipPlaneMaterial(bool debugClipPlane, bool complexClipPlane, ::UnityEngine::Rendering::ColorWriteMask colorWriteMask);

  /// @brief Method GetGroundClipPlaneMaterial, addr 0x220fcb0, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Material* GetGroundClipPlaneMaterial(bool debugClipPlane, ::UnityEngine::Rendering::ColorWriteMask colorWriteMask);

  /// @brief Method get_useDeferredRendering, addr 0x220fd4c, size 0x4c, virtual false, abstract: false, final false
  inline bool get_useDeferredRendering();

  /// @brief Method get_interlacedRendering, addr 0x220fd98, size 0xc, virtual false, abstract: false, final false
  inline bool get_interlacedRendering();

  /// @brief Method get_canRenderBackground, addr 0x220fdb0, size 0x8c, virtual false, abstract: false, final false
  inline bool get_canRenderBackground();

  /// @brief Method get_canRenderForeground, addr 0x220fe3c, size 0xa0, virtual false, abstract: false, final false
  inline bool get_canRenderForeground();

  /// @brief Method get_canRenderOptimized, addr 0x220fedc, size 0x78, virtual false, abstract: false, final false
  inline bool get_canRenderOptimized();

  static inline ::LIV::SDK::Unity::SDKRender* New_ctor(::LIV::SDK::Unity::LIV* liv);

  /// @brief Method .ctor, addr 0x220e344, size 0x17c, virtual false, abstract: false, final false
  inline void _ctor(::LIV::SDK::Unity::LIV* liv);

  /// @brief Method UpdateCameraSettings, addr 0x2210730, size 0x84, virtual false, abstract: false, final false
  inline void UpdateCameraSettings();

  /// @brief Method Render, addr 0x220ea08, size 0xc4, virtual false, abstract: false, final false
  inline void Render();

  /// @brief Method RenderBackground, addr 0x221109c, size 0x118, virtual false, abstract: false, final false
  inline void RenderBackground();

  /// @brief Method RenderForeground, addr 0x22111b4, size 0x4c0, virtual false, abstract: false, final false
  inline void RenderForeground();

  /// @brief Method RenderOptimized, addr 0x2211674, size 0x500, virtual false, abstract: false, final false
  inline void RenderOptimized();

  /// @brief Method CreateAssets, addr 0x2210024, size 0x70c, virtual false, abstract: false, final false
  inline void CreateAssets();

  /// @brief Method DestroyAssets, addr 0x2212bec, size 0x184, virtual false, abstract: false, final false
  inline void DestroyAssets();

  /// @brief Method Dispose, addr 0x220e4c0, size 0x38, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method get_liv, addr 0x2212e68, size 0x8, virtual false, abstract: false, final false
  inline ::LIV::SDK::Unity::LIV* get_liv();

  /// @brief Method get_outputFrame, addr 0x2212e70, size 0x10, virtual false, abstract: false, final false
  inline ::LIV::SDK::Unity::SDKOutputFrame get_outputFrame();

  /// @brief Method get_inputFrame, addr 0x2212e80, size 0x10, virtual false, abstract: false, final false
  inline ::LIV::SDK::Unity::SDKInputFrame get_inputFrame();

  /// @brief Method get_resolution, addr 0x2212e90, size 0x8, virtual false, abstract: false, final false
  inline ::LIV::SDK::Unity::SDKResolution get_resolution();

  /// @brief Method get_cameraInstance, addr 0x2212e98, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Camera* get_cameraInstance();

  /// @brief Method get_cameraReference, addr 0x2212320, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityEngine::Camera* get_cameraReference();

  /// @brief Method get_hmdCamera, addr 0x2212ea0, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Camera* get_hmdCamera();

  /// @brief Method get_stage, addr 0x2212ebc, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Transform* get_stage();

  /// @brief Method get_stageTransform, addr 0x2212ed4, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Transform* get_stageTransform();

  /// @brief Method get_stageLocalToWorldMatrix, addr 0x2212ef0, size 0xf8, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_stageLocalToWorldMatrix();

  /// @brief Method get_localToWorldMatrix, addr 0x221096c, size 0xc4, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_localToWorldMatrix();

  /// @brief Method get_spectatorLayerMask, addr 0x2210a30, size 0x20, virtual false, abstract: false, final false
  inline int32_t get_spectatorLayerMask();

  /// @brief Method get_disableStandardAssets, addr 0x2211fd0, size 0x1c, virtual false, abstract: false, final false
  inline bool get_disableStandardAssets();

  /// @brief Method get_canSetPose, addr 0x2212fe8, size 0x20, virtual false, abstract: false, final false
  inline bool get_canSetPose();

  /// @brief Method SetPose, addr 0x2213008, size 0x2f4, virtual false, abstract: false, final false
  inline bool SetPose(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, float_t verticalFieldOfView, bool useLocalSpace);

  /// @brief Method SetGroundPlane, addr 0x22134ac, size 0x194, virtual false, abstract: false, final false
  inline void SetGroundPlane(float_t distance, ::UnityEngine::Vector3 normal, bool useLocalSpace);

  /// @brief Method SetGroundPlane, addr 0x2213640, size 0x78, virtual false, abstract: false, final false
  inline void SetGroundPlane(::UnityEngine::Plane plane, bool useLocalSpace);

  /// @brief Method SetGroundPlane, addr 0x22136b8, size 0x1a0, virtual false, abstract: false, final false
  inline void SetGroundPlane(::UnityEngine::Transform* transform, bool useLocalSpace);

  /// @brief Method ReleaseBridgePoseControl, addr 0x2212d70, size 0x64, virtual false, abstract: false, final false
  inline void ReleaseBridgePoseControl();

  /// @brief Method UpdateBridgeResolution, addr 0x2210c9c, size 0x58, virtual false, abstract: false, final false
  inline void UpdateBridgeResolution();

  /// @brief Method UpdateBridgeInputFrame, addr 0x22107b4, size 0x1b8, virtual false, abstract: false, final false
  inline void UpdateBridgeInputFrame();

  /// @brief Method InvokePreRender, addr 0x2211064, size 0x38, virtual false, abstract: false, final false
  inline void InvokePreRender();

  /// @brief Method IvokePostRender, addr 0x2211b74, size 0x38, virtual false, abstract: false, final false
  inline void IvokePostRender();

  /// @brief Method InvokePreRenderBackground, addr 0x2211dbc, size 0x38, virtual false, abstract: false, final false
  inline void InvokePreRenderBackground();

  /// @brief Method InvokePostRenderBackground, addr 0x2211f10, size 0x38, virtual false, abstract: false, final false
  inline void InvokePostRenderBackground();

  /// @brief Method InvokePreRenderForeground, addr 0x22121e4, size 0x38, virtual false, abstract: false, final false
  inline void InvokePreRenderForeground();

  /// @brief Method InvokePostRenderForeground, addr 0x221221c, size 0x38, virtual false, abstract: false, final false
  inline void InvokePostRenderForeground();

  /// @brief Method CreateBackgroundTexture, addr 0x221387c, size 0x94, virtual false, abstract: false, final false
  inline void CreateBackgroundTexture();

  /// @brief Method CreateForegroundTexture, addr 0x2213a80, size 0x94, virtual false, abstract: false, final false
  inline void CreateForegroundTexture();

  /// @brief Method CreateOptimizedTexture, addr 0x2213b14, size 0x94, virtual false, abstract: false, final false
  inline void CreateOptimizedTexture();

  /// @brief Method CreateComplexClipPlaneTexture, addr 0x2213ba8, size 0x94, virtual false, abstract: false, final false
  inline void CreateComplexClipPlaneTexture();

  /// @brief Method UpdateTextures, addr 0x2210de4, size 0x280, virtual false, abstract: false, final false
  inline void UpdateTextures();

  /// @brief Method SendTextureToBridge, addr 0x2211df4, size 0x11c, virtual false, abstract: false, final false
  inline void SendTextureToBridge(::UnityEngine::RenderTexture* texture, ::LIV::SDK::Unity::TEXTURE_ID id);

  // Ctor Parameters [CppParam { name: "", ty: "SDKRender", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SDKRender(SDKRender&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SDKRender", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SDKRender(SDKRender const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SDKRender();

public:
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
  ::UnityEngine::Mesh* ____clipPlaneMesh;

  /// @brief Field _clipPlaneSimpleMaterial, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Material* ____clipPlaneSimpleMaterial;

  /// @brief Field _clipPlaneSimpleDebugMaterial, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Material* ____clipPlaneSimpleDebugMaterial;

  /// @brief Field _clipPlaneComplexMaterial, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Material* ____clipPlaneComplexMaterial;

  /// @brief Field _clipPlaneComplexDebugMaterial, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Material* ____clipPlaneComplexDebugMaterial;

  /// @brief Field _writeOpaqueToAlphaMaterial, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Material* ____writeOpaqueToAlphaMaterial;

  /// @brief Field _combineAlphaMaterial, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Material* ____combineAlphaMaterial;

  /// @brief Field _writeMaterial, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::Material* ____writeMaterial;

  /// @brief Field _forceForwardRenderingMaterial, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::Material* ____forceForwardRenderingMaterial;

  /// @brief Field _backgroundRenderTexture, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::RenderTexture* ____backgroundRenderTexture;

  /// @brief Field _foregroundRenderTexture, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::RenderTexture* ____foregroundRenderTexture;

  /// @brief Field _optimizedRenderTexture, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::RenderTexture* ____optimizedRenderTexture;

  /// @brief Field _complexClipPlaneRenderTexture, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::RenderTexture* ____complexClipPlaneRenderTexture;

  /// @brief Field _liv, offset: 0xa8, size: 0x8, def value: None
  ::LIV::SDK::Unity::LIV* ____liv;

  /// @brief Field _outputFrame, offset: 0xb0, size: 0xac, def value: None
  ::LIV::SDK::Unity::SDKOutputFrame ____outputFrame;

  /// @brief Field _inputFrame, offset: 0x160, size: 0x158, def value: None
  ::LIV::SDK::Unity::SDKInputFrame ____inputFrame;

  /// @brief Field _resolution, offset: 0x2b8, size: 0x8, def value: None
  ::LIV::SDK::Unity::SDKResolution ____resolution;

  /// @brief Field _cameraInstance, offset: 0x2c0, size: 0x8, def value: None
  ::UnityEngine::Camera* ____cameraInstance;

  /// @brief Field _requestedPose, offset: 0x2c8, size: 0x70, def value: None
  ::LIV::SDK::Unity::SDKPose ____requestedPose;

  /// @brief Field _requestedPoseFrameIndex, offset: 0x338, size: 0x4, def value: None
  int32_t ____requestedPoseFrameIndex;

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
