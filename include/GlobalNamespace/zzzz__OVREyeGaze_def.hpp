#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVREyeGaze_def.hpp"
#include "GlobalNamespace/zzzz__OVRPermissionsRequester_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVREyeGaze)
namespace GlobalNamespace {
struct __OVREyeGaze__EyeId;
}
namespace GlobalNamespace {
struct __OVREyeGaze__EyeTrackingMode;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct __OVREyeGaze__EyeId;
}
namespace GlobalNamespace {
struct __OVREyeGaze__EyeTrackingMode;
}
namespace GlobalNamespace {
class OVREyeGaze;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OVREyeGaze__EyeId);
MARK_VAL_T(::GlobalNamespace::__OVREyeGaze__EyeTrackingMode);
MARK_REF_PTR_T(::GlobalNamespace::OVREyeGaze);
// Type: ::EyeId
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVREyeGaze::EyeId
struct CORDL_TYPE __OVREyeGaze__EyeId {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVREyeGaze__EyeId_Unwrapped
  enum struct ____OVREyeGaze__EyeId_Unwrapped : int32_t {
    __E_Left = static_cast<int32_t>(0x0),
    __E_Right = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVREyeGaze__EyeId_Unwrapped() const noexcept {
    return static_cast<____OVREyeGaze__EyeId_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVREyeGaze__EyeId();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVREyeGaze__EyeId(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Left value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVREyeGaze__EyeId const Left;

  /// @brief Field Right value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVREyeGaze__EyeId const Right;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVREyeGaze__EyeId, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVREyeGaze__EyeId, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::EyeTrackingMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVREyeGaze::EyeTrackingMode
struct CORDL_TYPE __OVREyeGaze__EyeTrackingMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVREyeGaze__EyeTrackingMode_Unwrapped
  enum struct ____OVREyeGaze__EyeTrackingMode_Unwrapped : int32_t {
    __E_HeadSpace = static_cast<int32_t>(0x0),
    __E_WorldSpace = static_cast<int32_t>(0x1),
    __E_TrackingSpace = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVREyeGaze__EyeTrackingMode_Unwrapped() const noexcept {
    return static_cast<____OVREyeGaze__EyeTrackingMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVREyeGaze__EyeTrackingMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVREyeGaze__EyeTrackingMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field HeadSpace value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVREyeGaze__EyeTrackingMode const HeadSpace;

  /// @brief Field TrackingSpace value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVREyeGaze__EyeTrackingMode const TrackingSpace;

  /// @brief Field WorldSpace value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVREyeGaze__EyeTrackingMode const WorldSpace;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVREyeGaze__EyeTrackingMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVREyeGaze__EyeTrackingMode, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVREyeGaze
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVREyeGaze*
class CORDL_TYPE OVREyeGaze : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using EyeId = ::GlobalNamespace::__OVREyeGaze__EyeId;

  using EyeTrackingMode = ::GlobalNamespace::__OVREyeGaze__EyeTrackingMode;

  /// @brief Field ApplyPosition, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_ApplyPosition, put = __cordl_internal_set_ApplyPosition)) bool ApplyPosition;

  /// @brief Field ApplyRotation, offset 0x25, size 0x1
  __declspec(property(get = __cordl_internal_get_ApplyRotation, put = __cordl_internal_set_ApplyRotation)) bool ApplyRotation;

  __declspec(property(get = get_Confidence, put = set_Confidence)) float_t Confidence;

  /// @brief Field ConfidenceThreshold, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_ConfidenceThreshold, put = __cordl_internal_set_ConfidenceThreshold)) float_t ConfidenceThreshold;

  /// @brief Field Eye, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_Eye, put = __cordl_internal_set_Eye))::GlobalNamespace::__OVREyeGaze__EyeId Eye;

  __declspec(property(get = get_EyeTrackingEnabled)) bool EyeTrackingEnabled;

  /// @brief Field ReferenceFrame, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_ReferenceFrame, put = __cordl_internal_set_ReferenceFrame))::UnityW<::UnityEngine::Transform> ReferenceFrame;

  /// @brief Field TrackingMode, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_TrackingMode, put = __cordl_internal_set_TrackingMode))::GlobalNamespace::__OVREyeGaze__EyeTrackingMode TrackingMode;

  /// @brief Field <Confidence>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__Confidence_k__BackingField, put = __cordl_internal_set__Confidence_k__BackingField)) float_t _Confidence_k__BackingField;

  /// @brief Field _currentEyeGazesState, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get__currentEyeGazesState, put = __cordl_internal_set__currentEyeGazesState))::GlobalNamespace::__OVRPlugin__EyeGazesState _currentEyeGazesState;

  /// @brief Field _initialRotationOffset, offset 0x44, size 0x10
  __declspec(property(get = __cordl_internal_get__initialRotationOffset, put = __cordl_internal_set__initialRotationOffset))::UnityEngine::Quaternion _initialRotationOffset;

  /// @brief Field _onPermissionGranted, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__onPermissionGranted, put = __cordl_internal_set__onPermissionGranted))::System::Action_1<::StringW>* _onPermissionGranted;

  /// @brief Field _trackingInstanceCount, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__trackingInstanceCount, put = setStaticF__trackingInstanceCount)) int32_t _trackingInstanceCount;

  /// @brief Field _viewTransform, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__viewTransform, put = __cordl_internal_set__viewTransform))::UnityW<::UnityEngine::Transform> _viewTransform;

  /// @brief Method Awake, addr 0x280ed70, size 0x7c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method CalculateEyeRotation, addr 0x280f4b8, size 0x1c0, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion CalculateEyeRotation(::UnityEngine::Quaternion eyeRotation);

  static inline ::GlobalNamespace::OVREyeGaze* New_ctor();

  /// @brief Method OnDestroy, addr 0x280f2ac, size 0xc, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x280f224, size 0x88, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x280f074, size 0x78, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnPermissionGranted, addr 0x280f1c4, size 0x60, virtual false, abstract: false, final false
  inline void OnPermissionGranted(::StringW permissionId);

  /// @brief Method PrepareHeadDirection, addr 0x280edf0, size 0x284, virtual false, abstract: false, final false
  inline void PrepareHeadDirection();

  /// @brief Method Start, addr 0x280edec, size 0x4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method StartEyeTracking, addr 0x280f0ec, size 0xd8, virtual false, abstract: false, final false
  inline bool StartEyeTracking();

  /// @brief Method Update, addr 0x280f2b8, size 0x200, virtual false, abstract: false, final false
  inline void Update();

  constexpr bool const& __cordl_internal_get_ApplyPosition() const;

  constexpr bool& __cordl_internal_get_ApplyPosition();

  constexpr bool const& __cordl_internal_get_ApplyRotation() const;

  constexpr bool& __cordl_internal_get_ApplyRotation();

  constexpr float_t const& __cordl_internal_get_ConfidenceThreshold() const;

  constexpr float_t& __cordl_internal_get_ConfidenceThreshold();

  constexpr ::GlobalNamespace::__OVREyeGaze__EyeId const& __cordl_internal_get_Eye() const;

  constexpr ::GlobalNamespace::__OVREyeGaze__EyeId& __cordl_internal_get_Eye();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_ReferenceFrame() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_ReferenceFrame();

  constexpr ::GlobalNamespace::__OVREyeGaze__EyeTrackingMode const& __cordl_internal_get_TrackingMode() const;

  constexpr ::GlobalNamespace::__OVREyeGaze__EyeTrackingMode& __cordl_internal_get_TrackingMode();

  constexpr float_t const& __cordl_internal_get__Confidence_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__Confidence_k__BackingField();

  constexpr ::GlobalNamespace::__OVRPlugin__EyeGazesState const& __cordl_internal_get__currentEyeGazesState() const;

  constexpr ::GlobalNamespace::__OVRPlugin__EyeGazesState& __cordl_internal_get__currentEyeGazesState();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__initialRotationOffset() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__initialRotationOffset();

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get__onPermissionGranted();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __cordl_internal_get__onPermissionGranted() const;

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__viewTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__viewTransform();

  constexpr void __cordl_internal_set_ApplyPosition(bool value);

  constexpr void __cordl_internal_set_ApplyRotation(bool value);

  constexpr void __cordl_internal_set_ConfidenceThreshold(float_t value);

  constexpr void __cordl_internal_set_Eye(::GlobalNamespace::__OVREyeGaze__EyeId value);

  constexpr void __cordl_internal_set_ReferenceFrame(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_TrackingMode(::GlobalNamespace::__OVREyeGaze__EyeTrackingMode value);

  constexpr void __cordl_internal_set__Confidence_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__currentEyeGazesState(::GlobalNamespace::__OVRPlugin__EyeGazesState value);

  constexpr void __cordl_internal_set__initialRotationOffset(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set__onPermissionGranted(::System::Action_1<::StringW>* value);

  constexpr void __cordl_internal_set__viewTransform(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x280f678, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF__trackingInstanceCount();

  /// @brief Method get_Confidence, addr 0x280ed60, size 0x8, virtual false, abstract: false, final false
  inline float_t get_Confidence();

  /// @brief Method get_EyeTrackingEnabled, addr 0x280ed10, size 0x50, virtual false, abstract: false, final false
  inline bool get_EyeTrackingEnabled();

  static inline void setStaticF__trackingInstanceCount(int32_t value);

  /// @brief Method set_Confidence, addr 0x280ed68, size 0x8, virtual false, abstract: false, final false
  inline void set_Confidence(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVREyeGaze();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVREyeGaze", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVREyeGaze(OVREyeGaze&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVREyeGaze", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVREyeGaze(OVREyeGaze const&) = delete;

  /// @brief Field Eye, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__OVREyeGaze__EyeId ___Eye;

  /// @brief Field <Confidence>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  float_t ____Confidence_k__BackingField;

  /// @brief Field ConfidenceThreshold, offset: 0x20, size: 0x4, def value: None
  float_t ___ConfidenceThreshold;

  /// @brief Field ApplyPosition, offset: 0x24, size: 0x1, def value: None
  bool ___ApplyPosition;

  /// @brief Field ApplyRotation, offset: 0x25, size: 0x1, def value: None
  bool ___ApplyRotation;

  /// @brief Field _currentEyeGazesState, offset: 0x28, size: 0x10, def value: None
  ::GlobalNamespace::__OVRPlugin__EyeGazesState ____currentEyeGazesState;

  /// @brief Field ReferenceFrame, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___ReferenceFrame;

  /// @brief Field TrackingMode, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::__OVREyeGaze__EyeTrackingMode ___TrackingMode;

  /// @brief Field _initialRotationOffset, offset: 0x44, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____initialRotationOffset;

  /// @brief Field _viewTransform, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____viewTransform;

  /// @brief Field _onPermissionGranted, offset: 0x60, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ____onPermissionGranted;

  /// @brief Field EyeTrackingPermission value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPermissionsRequester__Permission const EyeTrackingPermission;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVREyeGaze, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVREyeGaze, ___Eye) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVREyeGaze, ____Confidence_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVREyeGaze, ___ConfidenceThreshold) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVREyeGaze, ___ApplyPosition) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVREyeGaze, ___ApplyRotation) == 0x25, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVREyeGaze, ____currentEyeGazesState) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVREyeGaze, ___ReferenceFrame) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVREyeGaze, ___TrackingMode) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVREyeGaze, ____initialRotationOffset) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVREyeGaze, ____viewTransform) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVREyeGaze, ____onPermissionGranted) == 0x60, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVREyeGaze__EyeId, "", "OVREyeGaze/EyeId");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVREyeGaze__EyeTrackingMode, "", "OVREyeGaze/EyeTrackingMode");
NEED_NO_BOX(::GlobalNamespace::OVREyeGaze);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVREyeGaze*, "", "OVREyeGaze");
