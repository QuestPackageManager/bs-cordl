#pragma once
// IWYU pragma private; include "UnityEngine\VFX\Utility\URPCameraBinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/VFX/Utility/zzzz__VFXBinderBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(URPCameraBinder)
namespace UnityEngine::Rendering::Universal {
class UniversalAdditionalCameraData;
}
namespace UnityEngine::Rendering {
class IPerFrameHistoryAccessTracker;
}
namespace UnityEngine::VFX::Utility {
class ExposedProperty;
}
namespace UnityEngine::VFX {
class VisualEffect;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace UnityEngine::VFX::Utility {
class URPCameraBinder;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::Utility::URPCameraBinder*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::URPCameraBinder*, "UnityEngine.VFX.Utility", "URPCameraBinder");
// Dependencies UnityEngine.VFX.Utility.VFXBinderBase
namespace UnityEngine::VFX::Utility {
// Is value type: false
// CS Name: UnityEngine.VFX.Utility.URPCameraBinder
class CORDL_TYPE URPCameraBinder : public ::UnityEngine::VFX::Utility::VFXBinderBase {
public:
  // Declarations
  /// @brief Field AdditionalData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_AdditionalData, put = __cordl_internal_set_AdditionalData)) ::UnityW<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData>
      AdditionalData;

  /// @brief Field CameraProperty, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_CameraProperty, put = __cordl_internal_set_CameraProperty)) ::UnityEngine::VFX::Utility::ExposedProperty* CameraProperty;

  /// @brief Field m_Angles, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Angles, put = __cordl_internal_set_m_Angles)) ::UnityEngine::VFX::Utility::ExposedProperty* m_Angles;

  /// @brief Field m_AspectRatio, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AspectRatio, put = __cordl_internal_set_m_AspectRatio)) ::UnityEngine::VFX::Utility::ExposedProperty* m_AspectRatio;

  /// @brief Field m_Camera, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Camera, put = __cordl_internal_set_m_Camera)) ::UnityW<::UnityEngine::Camera> m_Camera;

  /// @brief Field m_ColorBuffer, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ColorBuffer, put = __cordl_internal_set_m_ColorBuffer)) ::UnityEngine::VFX::Utility::ExposedProperty* m_ColorBuffer;

  /// @brief Field m_DepthBuffer, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DepthBuffer, put = __cordl_internal_set_m_DepthBuffer)) ::UnityEngine::VFX::Utility::ExposedProperty* m_DepthBuffer;

  /// @brief Field m_Dimensions, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Dimensions, put = __cordl_internal_set_m_Dimensions)) ::UnityEngine::VFX::Utility::ExposedProperty* m_Dimensions;

  /// @brief Field m_FarPlane, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FarPlane, put = __cordl_internal_set_m_FarPlane)) ::UnityEngine::VFX::Utility::ExposedProperty* m_FarPlane;

  /// @brief Field m_FieldOfView, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FieldOfView, put = __cordl_internal_set_m_FieldOfView)) ::UnityEngine::VFX::Utility::ExposedProperty* m_FieldOfView;

  /// @brief Field m_LensShift, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LensShift, put = __cordl_internal_set_m_LensShift)) ::UnityEngine::VFX::Utility::ExposedProperty* m_LensShift;

  /// @brief Field m_NearPlane, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_NearPlane, put = __cordl_internal_set_m_NearPlane)) ::UnityEngine::VFX::Utility::ExposedProperty* m_NearPlane;

  /// @brief Field m_Orthographic, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Orthographic, put = __cordl_internal_set_m_Orthographic)) ::UnityEngine::VFX::Utility::ExposedProperty* m_Orthographic;

  /// @brief Field m_OrthographicSize, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OrthographicSize, put = __cordl_internal_set_m_OrthographicSize)) ::UnityEngine::VFX::Utility::ExposedProperty* m_OrthographicSize;

  /// @brief Field m_Position, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Position, put = __cordl_internal_set_m_Position)) ::UnityEngine::VFX::Utility::ExposedProperty* m_Position;

  /// @brief Field m_Scale, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Scale, put = __cordl_internal_set_m_Scale)) ::UnityEngine::VFX::Utility::ExposedProperty* m_Scale;

  /// @brief Field m_ScaledDimensions, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ScaledDimensions, put = __cordl_internal_set_m_ScaledDimensions)) ::UnityEngine::VFX::Utility::ExposedProperty* m_ScaledDimensions;

  /// @brief Method IsValid, addr 0x683c118, size 0x274, virtual true, abstract: false, final false
  inline bool IsValid(::UnityEngine::VFX::VisualEffect* component);

  static inline ::UnityEngine::VFX::Utility::URPCameraBinder* New_ctor();

  /// @brief Method OnDisable, addr 0x683be6c, size 0x158, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x683bd18, size 0x154, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnValidate, addr 0x683bfc4, size 0x154, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method RequestHistoryAccess, addr 0x683bbd0, size 0x148, virtual false, abstract: false, final false
  static inline void RequestHistoryAccess(::UnityEngine::Rendering::IPerFrameHistoryAccessTracker* access);

  /// @brief Method SetCameraProperty, addr 0x683b790, size 0x28, virtual false, abstract: false, final false
  inline void SetCameraProperty(::StringW name);

  /// @brief Method ToString, addr 0x683ca20, size 0x17c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method UpdateBinding, addr 0x683c38c, size 0x694, virtual true, abstract: false, final false
  inline void UpdateBinding(::UnityEngine::VFX::VisualEffect* component);

  /// @brief Method UpdateSubProperties, addr 0x683b7b8, size 0x418, virtual false, abstract: false, final false
  inline void UpdateSubProperties();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData> const& __cordl_internal_get_AdditionalData() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData>& __cordl_internal_get_AdditionalData();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_CameraProperty() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_CameraProperty();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_Angles() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_Angles();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_AspectRatio() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_AspectRatio();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_m_Camera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_m_Camera();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_ColorBuffer() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_ColorBuffer();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_DepthBuffer() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_DepthBuffer();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_Dimensions() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_Dimensions();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_FarPlane() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_FarPlane();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_FieldOfView() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_FieldOfView();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_LensShift() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_LensShift();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_NearPlane() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_NearPlane();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_Orthographic() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_Orthographic();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_OrthographicSize() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_OrthographicSize();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_Position() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_Position();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_Scale() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_Scale();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_ScaledDimensions() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_ScaledDimensions();

  constexpr void __cordl_internal_set_AdditionalData(::UnityW<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData> value);

  constexpr void __cordl_internal_set_CameraProperty(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_m_Angles(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_m_AspectRatio(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_m_Camera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set_m_ColorBuffer(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_m_DepthBuffer(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_m_Dimensions(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_m_FarPlane(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_m_FieldOfView(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_m_LensShift(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_m_NearPlane(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_m_Orthographic(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_m_OrthographicSize(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_m_Position(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_m_Scale(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_m_ScaledDimensions(::UnityEngine::VFX::Utility::ExposedProperty* value);

  /// @brief Method .ctor, addr 0x683cb9c, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr URPCameraBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "URPCameraBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  URPCameraBinder(URPCameraBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "URPCameraBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  URPCameraBinder(URPCameraBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12570 };

  /// @brief Field AdditionalData, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData> ___AdditionalData;

  /// @brief Field m_Camera, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ___m_Camera;

  /// @brief Field CameraProperty, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___CameraProperty;

  /// @brief Field m_Position, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_Position;

  /// @brief Field m_Angles, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_Angles;

  /// @brief Field m_Scale, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_Scale;

  /// @brief Field m_FieldOfView, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_FieldOfView;

  /// @brief Field m_NearPlane, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_NearPlane;

  /// @brief Field m_FarPlane, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_FarPlane;

  /// @brief Field m_AspectRatio, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_AspectRatio;

  /// @brief Field m_Dimensions, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_Dimensions;

  /// @brief Field m_ScaledDimensions, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_ScaledDimensions;

  /// @brief Field m_DepthBuffer, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_DepthBuffer;

  /// @brief Field m_ColorBuffer, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_ColorBuffer;

  /// @brief Field m_Orthographic, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_Orthographic;

  /// @brief Field m_OrthographicSize, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_OrthographicSize;

  /// @brief Field m_LensShift, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_LensShift;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::URPCameraBinder, ___AdditionalData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::URPCameraBinder, ___m_Camera) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::URPCameraBinder, ___CameraProperty) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::URPCameraBinder, ___m_Position) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::URPCameraBinder, ___m_Angles) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::URPCameraBinder, ___m_Scale) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::URPCameraBinder, ___m_FieldOfView) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::URPCameraBinder, ___m_NearPlane) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::URPCameraBinder, ___m_FarPlane) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::URPCameraBinder, ___m_AspectRatio) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::URPCameraBinder, ___m_Dimensions) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::URPCameraBinder, ___m_ScaledDimensions) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::URPCameraBinder, ___m_DepthBuffer) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::URPCameraBinder, ___m_ColorBuffer) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::URPCameraBinder, ___m_Orthographic) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::URPCameraBinder, ___m_OrthographicSize) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::URPCameraBinder, ___m_LensShift) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::URPCameraBinder) == 0xb0, "Size mismatch!");

} // namespace UnityEngine::VFX::Utility
