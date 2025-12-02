#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/MotionVectorsPersistentData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MotionVectorsPersistentData)
namespace UnityEngine::Experimental::Rendering {
class XRPass;
}
namespace UnityEngine::Rendering::Universal {
class UniversalCameraData;
}
namespace UnityEngine::Rendering {
class RasterCommandBuffer;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class MotionVectorsPersistentData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::MotionVectorsPersistentData);
// Dependencies System.Object, UnityEngine.Vector3
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.MotionVectorsPersistentData
class CORDL_TYPE MotionVectorsPersistentData : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_deltaTime)) float_t deltaTime;

  __declspec(property(get = get_lastDeltaTime)) float_t lastDeltaTime;

  __declspec(property(get = get_lastFrameIndex)) int32_t lastFrameIndex;

  /// @brief Field m_LastFrameIndex, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LastFrameIndex, put = __cordl_internal_set_m_LastFrameIndex)) ::ArrayW<int32_t, ::Array<int32_t>*> m_LastFrameIndex;

  /// @brief Field m_PrevAspectRatio, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PrevAspectRatio, put = __cordl_internal_set_m_PrevAspectRatio)) ::ArrayW<float_t, ::Array<float_t>*> m_PrevAspectRatio;

  /// @brief Field m_PreviousPreviousProjection, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PreviousPreviousProjection,
                      put = __cordl_internal_set_m_PreviousPreviousProjection)) ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>
      m_PreviousPreviousProjection;

  /// @brief Field m_PreviousPreviousView, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PreviousPreviousView, put = __cordl_internal_set_m_PreviousPreviousView)) ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>
      m_PreviousPreviousView;

  /// @brief Field m_PreviousProjection, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PreviousProjection, put = __cordl_internal_set_m_PreviousProjection)) ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>
      m_PreviousProjection;

  /// @brief Field m_PreviousView, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PreviousView, put = __cordl_internal_set_m_PreviousView)) ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> m_PreviousView;

  /// @brief Field m_PreviousViewProjection, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PreviousViewProjection, put = __cordl_internal_set_m_PreviousViewProjection)) ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>
      m_PreviousViewProjection;

  /// @brief Field m_Projection, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Projection, put = __cordl_internal_set_m_Projection)) ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> m_Projection;

  /// @brief Field m_View, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_View, put = __cordl_internal_set_m_View)) ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> m_View;

  /// @brief Field m_ViewProjection, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ViewProjection, put = __cordl_internal_set_m_ViewProjection)) ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>
      m_ViewProjection;

  /// @brief Field m_deltaTime, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_m_deltaTime, put = __cordl_internal_set_m_deltaTime)) float_t m_deltaTime;

  /// @brief Field m_lastDeltaTime, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_m_lastDeltaTime, put = __cordl_internal_set_m_lastDeltaTime)) float_t m_lastDeltaTime;

  /// @brief Field m_previousPreviousWorldSpaceCameraPos, offset 0x80, size 0xc
  __declspec(property(get = __cordl_internal_get_m_previousPreviousWorldSpaceCameraPos,
                      put = __cordl_internal_set_m_previousPreviousWorldSpaceCameraPos)) ::UnityEngine::Vector3 m_previousPreviousWorldSpaceCameraPos;

  /// @brief Field m_previousWorldSpaceCameraPos, offset 0x74, size 0xc
  __declspec(property(get = __cordl_internal_get_m_previousWorldSpaceCameraPos, put = __cordl_internal_set_m_previousWorldSpaceCameraPos)) ::UnityEngine::Vector3 m_previousWorldSpaceCameraPos;

  /// @brief Field m_worldSpaceCameraPos, offset 0x68, size 0xc
  __declspec(property(get = __cordl_internal_get_m_worldSpaceCameraPos, put = __cordl_internal_set_m_worldSpaceCameraPos)) ::UnityEngine::Vector3 m_worldSpaceCameraPos;

  __declspec(property(get = get_previousPreviousProjectionStereo)) ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> previousPreviousProjectionStereo;

  __declspec(property(get = get_previousPreviousViewStereo)) ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> previousPreviousViewStereo;

  __declspec(property(get = get_previousPreviousWorldSpaceCameraPos)) ::UnityEngine::Vector3 previousPreviousWorldSpaceCameraPos;

  __declspec(property(get = get_previousProjectionStereo)) ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> previousProjectionStereo;

  __declspec(property(get = get_previousViewProjection)) ::UnityEngine::Matrix4x4 previousViewProjection;

  __declspec(property(get = get_previousViewProjectionStereo)) ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> previousViewProjectionStereo;

  __declspec(property(get = get_previousViewStereo)) ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> previousViewStereo;

  __declspec(property(get = get_previousWorldSpaceCameraPos)) ::UnityEngine::Vector3 previousWorldSpaceCameraPos;

  __declspec(property(get = get_projectionStereo)) ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> projectionStereo;

  __declspec(property(get = get_viewProjection)) ::UnityEngine::Matrix4x4 viewProjection;

  __declspec(property(get = get_viewProjectionStereo)) ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> viewProjectionStereo;

  __declspec(property(get = get_viewStereo)) ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> viewStereo;

  __declspec(property(get = get_worldSpaceCameraPos)) ::UnityEngine::Vector3 worldSpaceCameraPos;

  /// @brief Method GetXRMultiPassId, addr 0x665d15c, size 0x30, virtual false, abstract: false, final false
  static inline int32_t GetXRMultiPassId(::UnityEngine::Experimental::Rendering::XRPass* xr);

  static inline ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData* New_ctor();

  /// @brief Method Reset, addr 0x665cd84, size 0x2d4, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method SetGlobalMotionMatrices, addr 0x665d7e0, size 0x19c, virtual false, abstract: false, final false
  inline void SetGlobalMotionMatrices(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Experimental::Rendering::XRPass* xr);

  /// @brief Method Update, addr 0x665d18c, size 0x654, virtual false, abstract: false, final false
  inline void Update(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_m_LastFrameIndex() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_m_LastFrameIndex();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_m_PrevAspectRatio() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_m_PrevAspectRatio();

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& __cordl_internal_get_m_PreviousPreviousProjection() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& __cordl_internal_get_m_PreviousPreviousProjection();

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& __cordl_internal_get_m_PreviousPreviousView() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& __cordl_internal_get_m_PreviousPreviousView();

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& __cordl_internal_get_m_PreviousProjection() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& __cordl_internal_get_m_PreviousProjection();

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& __cordl_internal_get_m_PreviousView() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& __cordl_internal_get_m_PreviousView();

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& __cordl_internal_get_m_PreviousViewProjection() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& __cordl_internal_get_m_PreviousViewProjection();

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& __cordl_internal_get_m_Projection() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& __cordl_internal_get_m_Projection();

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& __cordl_internal_get_m_View() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& __cordl_internal_get_m_View();

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& __cordl_internal_get_m_ViewProjection() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& __cordl_internal_get_m_ViewProjection();

  constexpr float_t const& __cordl_internal_get_m_deltaTime() const;

  constexpr float_t& __cordl_internal_get_m_deltaTime();

  constexpr float_t const& __cordl_internal_get_m_lastDeltaTime() const;

  constexpr float_t& __cordl_internal_get_m_lastDeltaTime();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_previousPreviousWorldSpaceCameraPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_previousPreviousWorldSpaceCameraPos();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_previousWorldSpaceCameraPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_previousWorldSpaceCameraPos();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_worldSpaceCameraPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_worldSpaceCameraPos();

  constexpr void __cordl_internal_set_m_LastFrameIndex(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_m_PrevAspectRatio(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_m_PreviousPreviousProjection(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  constexpr void __cordl_internal_set_m_PreviousPreviousView(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  constexpr void __cordl_internal_set_m_PreviousProjection(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  constexpr void __cordl_internal_set_m_PreviousView(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  constexpr void __cordl_internal_set_m_PreviousViewProjection(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  constexpr void __cordl_internal_set_m_Projection(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  constexpr void __cordl_internal_set_m_View(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  constexpr void __cordl_internal_set_m_ViewProjection(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  constexpr void __cordl_internal_set_m_deltaTime(float_t value);

  constexpr void __cordl_internal_set_m_lastDeltaTime(float_t value);

  constexpr void __cordl_internal_set_m_previousPreviousWorldSpaceCameraPos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_previousWorldSpaceCameraPos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_worldSpaceCameraPos(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x665cc44, size 0x140, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_deltaTime, addr 0x665d128, size 0x8, virtual false, abstract: false, final false
  inline float_t get_deltaTime();

  /// @brief Method get_lastDeltaTime, addr 0x665d130, size 0x8, virtual false, abstract: false, final false
  inline float_t get_lastDeltaTime();

  /// @brief Method get_lastFrameIndex, addr 0x665d058, size 0x28, virtual false, abstract: false, final false
  inline int32_t get_lastFrameIndex();

  /// @brief Method get_previousPreviousProjectionStereo, addr 0x665d108, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> get_previousPreviousProjectionStereo();

  /// @brief Method get_previousPreviousViewStereo, addr 0x665d120, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> get_previousPreviousViewStereo();

  /// @brief Method get_previousPreviousWorldSpaceCameraPos, addr 0x665d150, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_previousPreviousWorldSpaceCameraPos();

  /// @brief Method get_previousProjectionStereo, addr 0x665d100, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> get_previousProjectionStereo();

  /// @brief Method get_previousViewProjection, addr 0x665d0b4, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_previousViewProjection();

  /// @brief Method get_previousViewProjectionStereo, addr 0x665d0f0, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> get_previousViewProjectionStereo();

  /// @brief Method get_previousViewStereo, addr 0x665d118, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> get_previousViewStereo();

  /// @brief Method get_previousWorldSpaceCameraPos, addr 0x665d144, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_previousWorldSpaceCameraPos();

  /// @brief Method get_projectionStereo, addr 0x665d0f8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> get_projectionStereo();

  /// @brief Method get_viewProjection, addr 0x665d080, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_viewProjection();

  /// @brief Method get_viewProjectionStereo, addr 0x665d0e8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> get_viewProjectionStereo();

  /// @brief Method get_viewStereo, addr 0x665d110, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> get_viewStereo();

  /// @brief Method get_worldSpaceCameraPos, addr 0x665d138, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_worldSpaceCameraPos();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MotionVectorsPersistentData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MotionVectorsPersistentData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MotionVectorsPersistentData(MotionVectorsPersistentData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MotionVectorsPersistentData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MotionVectorsPersistentData(MotionVectorsPersistentData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12752 };

  /// @brief Field k_EyeCount offset 0xffffffff size 0x4
  static constexpr int32_t k_EyeCount{ static_cast<int32_t>(0x2) };

  /// @brief Field m_Projection, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> ___m_Projection;

  /// @brief Field m_View, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> ___m_View;

  /// @brief Field m_ViewProjection, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> ___m_ViewProjection;

  /// @brief Field m_PreviousProjection, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> ___m_PreviousProjection;

  /// @brief Field m_PreviousView, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> ___m_PreviousView;

  /// @brief Field m_PreviousViewProjection, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> ___m_PreviousViewProjection;

  /// @brief Field m_PreviousPreviousProjection, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> ___m_PreviousPreviousProjection;

  /// @brief Field m_PreviousPreviousView, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> ___m_PreviousPreviousView;

  /// @brief Field m_LastFrameIndex, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_LastFrameIndex;

  /// @brief Field m_PrevAspectRatio, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___m_PrevAspectRatio;

  /// @brief Field m_deltaTime, offset: 0x60, size: 0x4, def value: None
  float_t ___m_deltaTime;

  /// @brief Field m_lastDeltaTime, offset: 0x64, size: 0x4, def value: None
  float_t ___m_lastDeltaTime;

  /// @brief Field m_worldSpaceCameraPos, offset: 0x68, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_worldSpaceCameraPos;

  /// @brief Field m_previousWorldSpaceCameraPos, offset: 0x74, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_previousWorldSpaceCameraPos;

  /// @brief Field m_previousPreviousWorldSpaceCameraPos, offset: 0x80, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_previousPreviousWorldSpaceCameraPos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::MotionVectorsPersistentData, ___m_Projection) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::MotionVectorsPersistentData, ___m_View) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::MotionVectorsPersistentData, ___m_ViewProjection) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::MotionVectorsPersistentData, ___m_PreviousProjection) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::MotionVectorsPersistentData, ___m_PreviousView) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::MotionVectorsPersistentData, ___m_PreviousViewProjection) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::MotionVectorsPersistentData, ___m_PreviousPreviousProjection) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::MotionVectorsPersistentData, ___m_PreviousPreviousView) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::MotionVectorsPersistentData, ___m_LastFrameIndex) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::MotionVectorsPersistentData, ___m_PrevAspectRatio) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::MotionVectorsPersistentData, ___m_deltaTime) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::MotionVectorsPersistentData, ___m_lastDeltaTime) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::MotionVectorsPersistentData, ___m_worldSpaceCameraPos) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::MotionVectorsPersistentData, ___m_previousWorldSpaceCameraPos) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::MotionVectorsPersistentData, ___m_previousPreviousWorldSpaceCameraPos) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData, 0x90>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::MotionVectorsPersistentData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*, "UnityEngine.Rendering.Universal", "MotionVectorsPersistentData");
