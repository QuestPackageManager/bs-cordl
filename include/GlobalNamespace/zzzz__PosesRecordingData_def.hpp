#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PosesRecordingData)
namespace GlobalNamespace {
class __PosesRecordingData__ExternalCameraCalibration;
}
namespace GlobalNamespace {
class __PosesRecordingData__TransformsKeyframe;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace GlobalNamespace {
class PosesRecordingData;
}
namespace GlobalNamespace {
class __PosesRecordingData__ExternalCameraCalibration;
}
namespace GlobalNamespace {
class __PosesRecordingData__TransformsKeyframe;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PosesRecordingData);
MARK_REF_PTR_T(::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration);
MARK_REF_PTR_T(::GlobalNamespace::__PosesRecordingData__TransformsKeyframe);
// Type: ::TransformsKeyframe
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5932))
// CS Name: ::PosesRecordingData::TransformsKeyframe*
class CORDL_TYPE __PosesRecordingData__TransformsKeyframe : public ::System::Object {
public:
  // Declarations
  /// @brief Field poses, offset 0x10, size 0x8
  __declspec(property(get = __get_poses, put = __set_poses))::ArrayW<::UnityEngine::Pose, ::Array<::UnityEngine::Pose>*> poses;

  /// @brief Field time, offset 0x18, size 0x4
  __declspec(property(get = __get_time, put = __set_time)) float_t time;

  constexpr ::ArrayW<::UnityEngine::Pose, ::Array<::UnityEngine::Pose>*>& __get_poses();

  constexpr ::ArrayW<::UnityEngine::Pose, ::Array<::UnityEngine::Pose>*> const& __get_poses() const;

  constexpr void __set_poses(::ArrayW<::UnityEngine::Pose, ::Array<::UnityEngine::Pose>*> value);

  constexpr float_t& __get_time();

  constexpr float_t const& __get_time() const;

  constexpr void __set_time(float_t value);

  static inline ::GlobalNamespace::__PosesRecordingData__TransformsKeyframe* New_ctor(::ArrayW<::UnityEngine::Pose, ::Array<::UnityEngine::Pose>*> poses, float_t time);

  /// @brief Method .ctor, addr 0x2301e04, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::UnityEngine::Pose, ::Array<::UnityEngine::Pose>*> poses, float_t time);

  // Ctor Parameters [CppParam { name: "", ty: "__PosesRecordingData__TransformsKeyframe", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PosesRecordingData__TransformsKeyframe(__PosesRecordingData__TransformsKeyframe&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PosesRecordingData__TransformsKeyframe", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PosesRecordingData__TransformsKeyframe(__PosesRecordingData__TransformsKeyframe const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PosesRecordingData__TransformsKeyframe();

public:
  /// @brief Field poses, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Pose, ::Array<::UnityEngine::Pose>*> ___poses;

  /// @brief Field time, offset: 0x18, size: 0x4, def value: None
  float_t ___time;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PosesRecordingData__TransformsKeyframe, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PosesRecordingData__TransformsKeyframe, ___poses) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PosesRecordingData__TransformsKeyframe, ___time) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ExternalCameraCalibration
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5933))
// CS Name: ::PosesRecordingData::ExternalCameraCalibration*
class CORDL_TYPE __PosesRecordingData__ExternalCameraCalibration : public ::System::Object {
public:
  // Declarations
  /// @brief Field fieldOfVision, offset 0x10, size 0x4
  __declspec(property(get = __get_fieldOfVision, put = __set_fieldOfVision)) float_t fieldOfVision;

  /// @brief Field nearClip, offset 0x14, size 0x4
  __declspec(property(get = __get_nearClip, put = __set_nearClip)) float_t nearClip;

  /// @brief Field farClip, offset 0x18, size 0x4
  __declspec(property(get = __get_farClip, put = __set_farClip)) float_t farClip;

  /// @brief Field hmdOffset, offset 0x1c, size 0x4
  __declspec(property(get = __get_hmdOffset, put = __set_hmdOffset)) float_t hmdOffset;

  /// @brief Field nearOffset, offset 0x20, size 0x4
  __declspec(property(get = __get_nearOffset, put = __set_nearOffset)) float_t nearOffset;

  constexpr float_t& __get_fieldOfVision();

  constexpr float_t const& __get_fieldOfVision() const;

  constexpr void __set_fieldOfVision(float_t value);

  constexpr float_t& __get_nearClip();

  constexpr float_t const& __get_nearClip() const;

  constexpr void __set_nearClip(float_t value);

  constexpr float_t& __get_farClip();

  constexpr float_t const& __get_farClip() const;

  constexpr void __set_farClip(float_t value);

  constexpr float_t& __get_hmdOffset();

  constexpr float_t const& __get_hmdOffset() const;

  constexpr void __set_hmdOffset(float_t value);

  constexpr float_t& __get_nearOffset();

  constexpr float_t const& __get_nearOffset() const;

  constexpr void __set_nearOffset(float_t value);

  static inline ::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration* New_ctor(float_t fieldOfVision, float_t nearClip, float_t farClip, float_t hmdOffset, float_t nearOffset);

  /// @brief Method .ctor, addr 0x2302024, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(float_t fieldOfVision, float_t nearClip, float_t farClip, float_t hmdOffset, float_t nearOffset);

  static inline ::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration* New_ctor(::UnityEngine::Camera* camera);

  /// @brief Method .ctor, addr 0x22ff93c, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Camera* camera);

  // Ctor Parameters [CppParam { name: "", ty: "__PosesRecordingData__ExternalCameraCalibration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PosesRecordingData__ExternalCameraCalibration(__PosesRecordingData__ExternalCameraCalibration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PosesRecordingData__ExternalCameraCalibration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PosesRecordingData__ExternalCameraCalibration(__PosesRecordingData__ExternalCameraCalibration const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PosesRecordingData__ExternalCameraCalibration();

public:
  /// @brief Field fieldOfVision, offset: 0x10, size: 0x4, def value: None
  float_t ___fieldOfVision;

  /// @brief Field nearClip, offset: 0x14, size: 0x4, def value: None
  float_t ___nearClip;

  /// @brief Field farClip, offset: 0x18, size: 0x4, def value: None
  float_t ___farClip;

  /// @brief Field hmdOffset, offset: 0x1c, size: 0x4, def value: None
  float_t ___hmdOffset;

  /// @brief Field nearOffset, offset: 0x20, size: 0x4, def value: None
  float_t ___nearOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration, ___fieldOfVision) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration, ___nearClip) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration, ___farClip) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration, ___hmdOffset) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration, ___nearOffset) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PosesRecordingData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5934))
// CS Name: ::PosesRecordingData*
class CORDL_TYPE PosesRecordingData : public ::System::Object {
public:
  // Declarations
  using ExternalCameraCalibration = ::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration;

  using TransformsKeyframe = ::GlobalNamespace::__PosesRecordingData__TransformsKeyframe;

  /// @brief Field objectIds, offset 0x10, size 0x8
  __declspec(property(get = __get_objectIds, put = __set_objectIds))::ArrayW<::StringW, ::Array<::StringW>*> objectIds;

  /// @brief Field keyframes, offset 0x18, size 0x8
  __declspec(property(get = __get_keyframes, put = __set_keyframes))::System::Collections::Generic::List_1<::GlobalNamespace::__PosesRecordingData__TransformsKeyframe*>* keyframes;

  /// @brief Field externalCameraCalibration, offset 0x20, size 0x8
  __declspec(property(get = __get_externalCameraCalibration, put = __set_externalCameraCalibration))::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration* externalCameraCalibration;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_objectIds();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_objectIds() const;

  constexpr void __set_objectIds(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__PosesRecordingData__TransformsKeyframe*>*& __get_keyframes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__PosesRecordingData__TransformsKeyframe*>*> const& __get_keyframes() const;

  constexpr void __set_keyframes(::System::Collections::Generic::List_1<::GlobalNamespace::__PosesRecordingData__TransformsKeyframe*>* value);

  constexpr ::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration*& __get_externalCameraCalibration();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration*> const& __get_externalCameraCalibration() const;

  constexpr void __set_externalCameraCalibration(::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration* value);

  static inline ::GlobalNamespace::PosesRecordingData* New_ctor(::ArrayW<::StringW, ::Array<::StringW>*> objectIds,
                                                                ::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration* externalCameraCalibration);

  /// @brief Method .ctor, addr 0x2301d70, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::StringW, ::Array<::StringW>*> objectIds, ::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration* externalCameraCalibration);

  static inline ::GlobalNamespace::PosesRecordingData* New_ctor(::ArrayW<::StringW, ::Array<::StringW>*> objectIds,
                                                                ::System::Collections::Generic::List_1<::GlobalNamespace::__PosesRecordingData__TransformsKeyframe*>* keyframes,
                                                                ::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration* externalCameraCalibration);

  /// @brief Method .ctor, addr 0x2301f90, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::StringW, ::Array<::StringW>*> objectIds, ::System::Collections::Generic::List_1<::GlobalNamespace::__PosesRecordingData__TransformsKeyframe*>* keyframes,
                    ::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration* externalCameraCalibration);

  /// @brief Method AddKeyframe, addr 0x2301e3c, size 0xa8, virtual false, abstract: false, final false
  inline void AddKeyframe(::GlobalNamespace::__PosesRecordingData__TransformsKeyframe* keyframe);

  /// @brief Method Contains, addr 0x22ff8b8, size 0x58, virtual false, abstract: false, final false
  inline bool Contains(::StringW objectId);

  /// @brief Method ObjectIndex, addr 0x2301fcc, size 0x58, virtual false, abstract: false, final false
  inline int32_t ObjectIndex(::StringW objectId);

  // Ctor Parameters [CppParam { name: "", ty: "PosesRecordingData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PosesRecordingData(PosesRecordingData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PosesRecordingData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PosesRecordingData(PosesRecordingData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PosesRecordingData();

public:
  /// @brief Field objectIds, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___objectIds;

  /// @brief Field keyframes, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__PosesRecordingData__TransformsKeyframe*>* ___keyframes;

  /// @brief Field externalCameraCalibration, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration* ___externalCameraCalibration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PosesRecordingData, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesRecordingData, ___objectIds) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesRecordingData, ___keyframes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesRecordingData, ___externalCameraCalibration) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PosesRecordingData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PosesRecordingData*, "", "PosesRecordingData");
NEED_NO_BOX(::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration*, "", "PosesRecordingData/ExternalCameraCalibration");
NEED_NO_BOX(::GlobalNamespace::__PosesRecordingData__TransformsKeyframe);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PosesRecordingData__TransformsKeyframe*, "", "PosesRecordingData/TransformsKeyframe");
