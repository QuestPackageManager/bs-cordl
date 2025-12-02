#pragma once
// IWYU pragma private; include "GlobalNamespace/OVREyeGaze.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
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
struct OVREyeGaze_EyeId;
}
namespace GlobalNamespace {
struct OVREyeGaze_EyeTrackingMode;
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
struct OVREyeGaze_EyeId;
}
namespace GlobalNamespace {
struct OVREyeGaze_EyeTrackingMode;
}
namespace GlobalNamespace {
class OVREyeGaze;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVREyeGaze_EyeId);
MARK_VAL_T(::GlobalNamespace::OVREyeGaze_EyeTrackingMode);
MARK_REF_PTR_T(::GlobalNamespace::OVREyeGaze);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVREyeGaze/EyeId
struct CORDL_TYPE OVREyeGaze_EyeId {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVREyeGaze_EyeId_Unwrapped
  enum struct __OVREyeGaze_EyeId_Unwrapped : int32_t {
    __E_Left = static_cast<int32_t>(0x0),
    __E_Right = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVREyeGaze_EyeId_Unwrapped() const noexcept {
    return static_cast<__OVREyeGaze_EyeId_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVREyeGaze_EyeId();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVREyeGaze_EyeId(int32_t value__) noexcept;

  /// @brief Field Left value: I32(0)
  static ::GlobalNamespace::OVREyeGaze_EyeId const Left;

  /// @brief Field Right value: I32(1)
  static ::GlobalNamespace::OVREyeGaze_EyeId const Right;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7029 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVREyeGaze_EyeId, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVREyeGaze_EyeId, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVREyeGaze/EyeTrackingMode
struct CORDL_TYPE OVREyeGaze_EyeTrackingMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVREyeGaze_EyeTrackingMode_Unwrapped
  enum struct __OVREyeGaze_EyeTrackingMode_Unwrapped : int32_t {
    __E_HeadSpace = static_cast<int32_t>(0x0),
    __E_WorldSpace = static_cast<int32_t>(0x1),
    __E_TrackingSpace = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVREyeGaze_EyeTrackingMode_Unwrapped() const noexcept {
    return static_cast<__OVREyeGaze_EyeTrackingMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVREyeGaze_EyeTrackingMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVREyeGaze_EyeTrackingMode(int32_t value__) noexcept;

  /// @brief Field HeadSpace value: I32(0)
  static ::GlobalNamespace::OVREyeGaze_EyeTrackingMode const HeadSpace;

  /// @brief Field TrackingSpace value: I32(2)
  static ::GlobalNamespace::OVREyeGaze_EyeTrackingMode const TrackingSpace;

  /// @brief Field WorldSpace value: I32(1)
  static ::GlobalNamespace::OVREyeGaze_EyeTrackingMode const WorldSpace;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7030 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVREyeGaze_EyeTrackingMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVREyeGaze_EyeTrackingMode, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVREyeGaze::EyeId, OVREyeGaze::EyeTrackingMode, OVRPermissionsRequester::Permission, OVRPlugin::EyeGazesState, UnityEngine.MonoBehaviour, UnityEngine.Quaternion
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVREyeGaze
class CORDL_TYPE OVREyeGaze : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using EyeId = ::GlobalNamespace::OVREyeGaze_EyeId;

  using EyeTrackingMode = ::GlobalNamespace::OVREyeGaze_EyeTrackingMode;

  /// @brief Field ApplyPosition, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_ApplyPosition, put = __cordl_internal_set_ApplyPosition)) bool ApplyPosition;

  /// @brief Field ApplyRotation, offset 0x2d, size 0x1
  __declspec(property(get = __cordl_internal_get_ApplyRotation, put = __cordl_internal_set_ApplyRotation)) bool ApplyRotation;

  __declspec(property(get = get_Confidence, put = set_Confidence)) float_t Confidence;

  /// @brief Field ConfidenceThreshold, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_ConfidenceThreshold, put = __cordl_internal_set_ConfidenceThreshold)) float_t ConfidenceThreshold;

  /// @brief Field Eye, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_Eye, put = __cordl_internal_set_Eye)) ::GlobalNamespace::OVREyeGaze_EyeId Eye;

  __declspec(property(get = get_EyeTrackingEnabled)) bool EyeTrackingEnabled;

  /// @brief Field ReferenceFrame, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_ReferenceFrame, put = __cordl_internal_set_ReferenceFrame)) ::UnityW<::UnityEngine::Transform> ReferenceFrame;

  /// @brief Field TrackingMode, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_TrackingMode, put = __cordl_internal_set_TrackingMode)) ::GlobalNamespace::OVREyeGaze_EyeTrackingMode TrackingMode;

  /// @brief Field <Confidence>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__Confidence_k__BackingField, put = __cordl_internal_set__Confidence_k__BackingField)) float_t _Confidence_k__BackingField;

  /// @brief Field _currentEyeGazesState, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get__currentEyeGazesState, put = __cordl_internal_set__currentEyeGazesState)) ::GlobalNamespace::OVRPlugin_EyeGazesState _currentEyeGazesState;

  /// @brief Field _initialRotationOffset, offset 0x4c, size 0x10
  __declspec(property(get = __cordl_internal_get__initialRotationOffset, put = __cordl_internal_set__initialRotationOffset)) ::UnityEngine::Quaternion _initialRotationOffset;

  /// @brief Field _onPermissionGranted, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__onPermissionGranted, put = __cordl_internal_set__onPermissionGranted)) ::System::Action_1<::StringW>* _onPermissionGranted;

  /// @brief Field _trackingInstanceCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__trackingInstanceCount, put = setStaticF__trackingInstanceCount)) int32_t _trackingInstanceCount;

  /// @brief Field _viewTransform, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__viewTransform, put = __cordl_internal_set__viewTransform)) ::UnityW<::UnityEngine::Transform> _viewTransform;

  /// @brief Method Awake, addr 0x5be32dc, size 0x7c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method CalculateEyeRotation, addr 0x5be3a68, size 0x1e4, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion CalculateEyeRotation(::UnityEngine::Quaternion eyeRotation);

  static inline ::GlobalNamespace::OVREyeGaze* New_ctor();

  /// @brief Method OnDestroy, addr 0x5be3864, size 0xc, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x5be37d4, size 0x90, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x5be3614, size 0x7c, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnPermissionGranted, addr 0x5be3778, size 0x5c, virtual false, abstract: false, final false
  inline void OnPermissionGranted(::StringW permissionId);

  /// @brief Method PrepareHeadDirection, addr 0x5be335c, size 0x2b8, virtual false, abstract: false, final false
  inline void PrepareHeadDirection();

  /// @brief Method Start, addr 0x5be3358, size 0x4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method StartEyeTracking, addr 0x5be3690, size 0xe8, virtual false, abstract: false, final false
  inline bool StartEyeTracking();

  /// @brief Method Update, addr 0x5be3870, size 0x1f8, virtual false, abstract: false, final false
  inline void Update();

  constexpr bool const& __cordl_internal_get_ApplyPosition() const;

  constexpr bool& __cordl_internal_get_ApplyPosition();

  constexpr bool const& __cordl_internal_get_ApplyRotation() const;

  constexpr bool& __cordl_internal_get_ApplyRotation();

  constexpr float_t const& __cordl_internal_get_ConfidenceThreshold() const;

  constexpr float_t& __cordl_internal_get_ConfidenceThreshold();

  constexpr ::GlobalNamespace::OVREyeGaze_EyeId const& __cordl_internal_get_Eye() const;

  constexpr ::GlobalNamespace::OVREyeGaze_EyeId& __cordl_internal_get_Eye();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_ReferenceFrame() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_ReferenceFrame();

  constexpr ::GlobalNamespace::OVREyeGaze_EyeTrackingMode const& __cordl_internal_get_TrackingMode() const;

  constexpr ::GlobalNamespace::OVREyeGaze_EyeTrackingMode& __cordl_internal_get_TrackingMode();

  constexpr float_t const& __cordl_internal_get__Confidence_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__Confidence_k__BackingField();

  constexpr ::GlobalNamespace::OVRPlugin_EyeGazesState const& __cordl_internal_get__currentEyeGazesState() const;

  constexpr ::GlobalNamespace::OVRPlugin_EyeGazesState& __cordl_internal_get__currentEyeGazesState();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__initialRotationOffset() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__initialRotationOffset();

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get__onPermissionGranted() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get__onPermissionGranted();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__viewTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__viewTransform();

  constexpr void __cordl_internal_set_ApplyPosition(bool value);

  constexpr void __cordl_internal_set_ApplyRotation(bool value);

  constexpr void __cordl_internal_set_ConfidenceThreshold(float_t value);

  constexpr void __cordl_internal_set_Eye(::GlobalNamespace::OVREyeGaze_EyeId value);

  constexpr void __cordl_internal_set_ReferenceFrame(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_TrackingMode(::GlobalNamespace::OVREyeGaze_EyeTrackingMode value);

  constexpr void __cordl_internal_set__Confidence_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__currentEyeGazesState(::GlobalNamespace::OVRPlugin_EyeGazesState value);

  constexpr void __cordl_internal_set__initialRotationOffset(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set__onPermissionGranted(::System::Action_1<::StringW>* value);

  constexpr void __cordl_internal_set__viewTransform(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x5be3c4c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF__trackingInstanceCount();

  /// @brief Method get_Confidence, addr 0x5be32cc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_Confidence();

  /// @brief Method get_EyeTrackingEnabled, addr 0x5be3278, size 0x54, virtual false, abstract: false, final false
  inline bool get_EyeTrackingEnabled();

  static inline void setStaticF__trackingInstanceCount(int32_t value);

  /// @brief Method set_Confidence, addr 0x5be32d4, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field EyeTrackingPermission value: I32(2)
  static ::GlobalNamespace::OVRPermissionsRequester_Permission const EyeTrackingPermission;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7031 };

  /// @brief Field Eye, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::OVREyeGaze_EyeId ___Eye;

  /// @brief Field <Confidence>k__BackingField, offset: 0x24, size: 0x4, def value: None
  float_t ____Confidence_k__BackingField;

  /// @brief Field ConfidenceThreshold, offset: 0x28, size: 0x4, def value: None
  float_t ___ConfidenceThreshold;

  /// @brief Field ApplyPosition, offset: 0x2c, size: 0x1, def value: None
  bool ___ApplyPosition;

  /// @brief Field ApplyRotation, offset: 0x2d, size: 0x1, def value: None
  bool ___ApplyRotation;

  /// @brief Field _currentEyeGazesState, offset: 0x30, size: 0x10, def value: None
  ::GlobalNamespace::OVRPlugin_EyeGazesState ____currentEyeGazesState;

  /// @brief Field ReferenceFrame, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___ReferenceFrame;

  /// @brief Field TrackingMode, offset: 0x48, size: 0x4, def value: None
  ::GlobalNamespace::OVREyeGaze_EyeTrackingMode ___TrackingMode;

  /// @brief Field _initialRotationOffset, offset: 0x4c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____initialRotationOffset;

  /// @brief Field _viewTransform, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____viewTransform;

  /// @brief Field _onPermissionGranted, offset: 0x68, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ____onPermissionGranted;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVREyeGaze, ___Eye) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVREyeGaze, ____Confidence_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVREyeGaze, ___ConfidenceThreshold) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVREyeGaze, ___ApplyPosition) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVREyeGaze, ___ApplyRotation) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVREyeGaze, ____currentEyeGazesState) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVREyeGaze, ___ReferenceFrame) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVREyeGaze, ___TrackingMode) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVREyeGaze, ____initialRotationOffset) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVREyeGaze, ____viewTransform) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVREyeGaze, ____onPermissionGranted) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVREyeGaze, 0x70>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVREyeGaze_EyeId, "", "OVREyeGaze/EyeId");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVREyeGaze_EyeTrackingMode, "", "OVREyeGaze/EyeTrackingMode");
NEED_NO_BOX(::GlobalNamespace::OVREyeGaze);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVREyeGaze*, "", "OVREyeGaze");
