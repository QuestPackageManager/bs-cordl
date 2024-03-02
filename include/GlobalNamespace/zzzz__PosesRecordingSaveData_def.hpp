#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PosesRecordingSaveData)
namespace GlobalNamespace {
class __PosesRecordingSaveData__ExternalCameraCalibrationSaveData;
}
namespace GlobalNamespace {
class __PosesRecordingSaveData__PoseSaveData;
}
namespace GlobalNamespace {
class __PosesRecordingSaveData__TransformsSaveKeyframe;
}
// Forward declare root types
namespace GlobalNamespace {
class PosesRecordingSaveData;
}
namespace GlobalNamespace {
class __PosesRecordingSaveData__ExternalCameraCalibrationSaveData;
}
namespace GlobalNamespace {
class __PosesRecordingSaveData__PoseSaveData;
}
namespace GlobalNamespace {
class __PosesRecordingSaveData__TransformsSaveKeyframe;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PosesRecordingSaveData);
MARK_REF_PTR_T(::GlobalNamespace::__PosesRecordingSaveData__ExternalCameraCalibrationSaveData);
MARK_REF_PTR_T(::GlobalNamespace::__PosesRecordingSaveData__PoseSaveData);
MARK_REF_PTR_T(::GlobalNamespace::__PosesRecordingSaveData__TransformsSaveKeyframe);
// Type: ::PoseSaveData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PosesRecordingSaveData::PoseSaveData*
class CORDL_TYPE __PosesRecordingSaveData__PoseSaveData : public ::System::Object {
public:
  // Declarations
  /// @brief Field posX, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_posX, put = __cordl_internal_set_posX)) float_t posX;

  /// @brief Field posY, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_posY, put = __cordl_internal_set_posY)) float_t posY;

  /// @brief Field posZ, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_posZ, put = __cordl_internal_set_posZ)) float_t posZ;

  /// @brief Field rotW, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_rotW, put = __cordl_internal_set_rotW)) float_t rotW;

  /// @brief Field rotX, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_rotX, put = __cordl_internal_set_rotX)) float_t rotX;

  /// @brief Field rotY, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_rotY, put = __cordl_internal_set_rotY)) float_t rotY;

  /// @brief Field rotZ, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_rotZ, put = __cordl_internal_set_rotZ)) float_t rotZ;

  static inline ::GlobalNamespace::__PosesRecordingSaveData__PoseSaveData* New_ctor(float_t posX, float_t posY, float_t posZ, float_t rotX, float_t rotY, float_t rotZ, float_t rotW);

  constexpr float_t const& __cordl_internal_get_posX() const;

  constexpr float_t& __cordl_internal_get_posX();

  constexpr float_t const& __cordl_internal_get_posY() const;

  constexpr float_t& __cordl_internal_get_posY();

  constexpr float_t const& __cordl_internal_get_posZ() const;

  constexpr float_t& __cordl_internal_get_posZ();

  constexpr float_t const& __cordl_internal_get_rotW() const;

  constexpr float_t& __cordl_internal_get_rotW();

  constexpr float_t const& __cordl_internal_get_rotX() const;

  constexpr float_t& __cordl_internal_get_rotX();

  constexpr float_t const& __cordl_internal_get_rotY() const;

  constexpr float_t& __cordl_internal_get_rotY();

  constexpr float_t const& __cordl_internal_get_rotZ() const;

  constexpr float_t& __cordl_internal_get_rotZ();

  constexpr void __cordl_internal_set_posX(float_t value);

  constexpr void __cordl_internal_set_posY(float_t value);

  constexpr void __cordl_internal_set_posZ(float_t value);

  constexpr void __cordl_internal_set_rotW(float_t value);

  constexpr void __cordl_internal_set_rotX(float_t value);

  constexpr void __cordl_internal_set_rotY(float_t value);

  constexpr void __cordl_internal_set_rotZ(float_t value);

  /// @brief Method .ctor, addr 0x23f8cf0, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(float_t posX, float_t posY, float_t posZ, float_t rotX, float_t rotY, float_t rotZ, float_t rotW);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PosesRecordingSaveData__PoseSaveData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PosesRecordingSaveData__PoseSaveData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PosesRecordingSaveData__PoseSaveData(__PosesRecordingSaveData__PoseSaveData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PosesRecordingSaveData__PoseSaveData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PosesRecordingSaveData__PoseSaveData(__PosesRecordingSaveData__PoseSaveData const&) = delete;

  /// @brief Field posX, offset: 0x10, size: 0x4, def value: None
  float_t ___posX;

  /// @brief Field posY, offset: 0x14, size: 0x4, def value: None
  float_t ___posY;

  /// @brief Field posZ, offset: 0x18, size: 0x4, def value: None
  float_t ___posZ;

  /// @brief Field rotX, offset: 0x1c, size: 0x4, def value: None
  float_t ___rotX;

  /// @brief Field rotY, offset: 0x20, size: 0x4, def value: None
  float_t ___rotY;

  /// @brief Field rotZ, offset: 0x24, size: 0x4, def value: None
  float_t ___rotZ;

  /// @brief Field rotW, offset: 0x28, size: 0x4, def value: None
  float_t ___rotW;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PosesRecordingSaveData__PoseSaveData, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PosesRecordingSaveData__PoseSaveData, ___posX) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PosesRecordingSaveData__PoseSaveData, ___posY) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PosesRecordingSaveData__PoseSaveData, ___posZ) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PosesRecordingSaveData__PoseSaveData, ___rotX) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PosesRecordingSaveData__PoseSaveData, ___rotY) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PosesRecordingSaveData__PoseSaveData, ___rotZ) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PosesRecordingSaveData__PoseSaveData, ___rotW) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TransformsSaveKeyframe
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PosesRecordingSaveData::TransformsSaveKeyframe*
class CORDL_TYPE __PosesRecordingSaveData__TransformsSaveKeyframe : public ::System::Object {
public:
  // Declarations
  /// @brief Field poses, offset 0x10, size 0x8
  __declspec(
      property(get = __cordl_internal_get_poses,
               put = __cordl_internal_set_poses))::ArrayW<::GlobalNamespace::__PosesRecordingSaveData__PoseSaveData*, ::Array<::GlobalNamespace::__PosesRecordingSaveData__PoseSaveData*>*> poses;

  /// @brief Field time, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_time, put = __cordl_internal_set_time)) float_t time;

  static inline ::GlobalNamespace::__PosesRecordingSaveData__TransformsSaveKeyframe*
  New_ctor(::ArrayW<::GlobalNamespace::__PosesRecordingSaveData__PoseSaveData*, ::Array<::GlobalNamespace::__PosesRecordingSaveData__PoseSaveData*>*> poses, float_t time);

  constexpr ::ArrayW<::GlobalNamespace::__PosesRecordingSaveData__PoseSaveData*, ::Array<::GlobalNamespace::__PosesRecordingSaveData__PoseSaveData*>*> const& __cordl_internal_get_poses() const;

  constexpr ::ArrayW<::GlobalNamespace::__PosesRecordingSaveData__PoseSaveData*, ::Array<::GlobalNamespace::__PosesRecordingSaveData__PoseSaveData*>*>& __cordl_internal_get_poses();

  constexpr float_t const& __cordl_internal_get_time() const;

  constexpr float_t& __cordl_internal_get_time();

  constexpr void __cordl_internal_set_poses(::ArrayW<::GlobalNamespace::__PosesRecordingSaveData__PoseSaveData*, ::Array<::GlobalNamespace::__PosesRecordingSaveData__PoseSaveData*>*> value);

  constexpr void __cordl_internal_set_time(float_t value);

  /// @brief Method .ctor, addr 0x23f8d54, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::GlobalNamespace::__PosesRecordingSaveData__PoseSaveData*, ::Array<::GlobalNamespace::__PosesRecordingSaveData__PoseSaveData*>*> poses, float_t time);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PosesRecordingSaveData__TransformsSaveKeyframe();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PosesRecordingSaveData__TransformsSaveKeyframe", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PosesRecordingSaveData__TransformsSaveKeyframe(__PosesRecordingSaveData__TransformsSaveKeyframe&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PosesRecordingSaveData__TransformsSaveKeyframe", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PosesRecordingSaveData__TransformsSaveKeyframe(__PosesRecordingSaveData__TransformsSaveKeyframe const&) = delete;

  /// @brief Field poses, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__PosesRecordingSaveData__PoseSaveData*, ::Array<::GlobalNamespace::__PosesRecordingSaveData__PoseSaveData*>*> ___poses;

  /// @brief Field time, offset: 0x18, size: 0x4, def value: None
  float_t ___time;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PosesRecordingSaveData__TransformsSaveKeyframe, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PosesRecordingSaveData__TransformsSaveKeyframe, ___poses) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PosesRecordingSaveData__TransformsSaveKeyframe, ___time) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ExternalCameraCalibrationSaveData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PosesRecordingSaveData::ExternalCameraCalibrationSaveData*
class CORDL_TYPE __PosesRecordingSaveData__ExternalCameraCalibrationSaveData : public ::System::Object {
public:
  // Declarations
  /// @brief Field farClip, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_farClip, put = __cordl_internal_set_farClip)) float_t farClip;

  /// @brief Field fieldOfVision, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_fieldOfVision, put = __cordl_internal_set_fieldOfVision)) float_t fieldOfVision;

  /// @brief Field hmdOffset, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_hmdOffset, put = __cordl_internal_set_hmdOffset)) float_t hmdOffset;

  /// @brief Field nearClip, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_nearClip, put = __cordl_internal_set_nearClip)) float_t nearClip;

  /// @brief Field nearOffset, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_nearOffset, put = __cordl_internal_set_nearOffset)) float_t nearOffset;

  static inline ::GlobalNamespace::__PosesRecordingSaveData__ExternalCameraCalibrationSaveData* New_ctor(float_t fieldOfVision, float_t nearClip, float_t farClip, float_t hmdOffset,
                                                                                                         float_t nearOffset);

  constexpr float_t const& __cordl_internal_get_farClip() const;

  constexpr float_t& __cordl_internal_get_farClip();

  constexpr float_t const& __cordl_internal_get_fieldOfVision() const;

  constexpr float_t& __cordl_internal_get_fieldOfVision();

  constexpr float_t const& __cordl_internal_get_hmdOffset() const;

  constexpr float_t& __cordl_internal_get_hmdOffset();

  constexpr float_t const& __cordl_internal_get_nearClip() const;

  constexpr float_t& __cordl_internal_get_nearClip();

  constexpr float_t const& __cordl_internal_get_nearOffset() const;

  constexpr float_t& __cordl_internal_get_nearOffset();

  constexpr void __cordl_internal_set_farClip(float_t value);

  constexpr void __cordl_internal_set_fieldOfVision(float_t value);

  constexpr void __cordl_internal_set_hmdOffset(float_t value);

  constexpr void __cordl_internal_set_nearClip(float_t value);

  constexpr void __cordl_internal_set_nearOffset(float_t value);

  /// @brief Method .ctor, addr 0x23f8d8c, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(float_t fieldOfVision, float_t nearClip, float_t farClip, float_t hmdOffset, float_t nearOffset);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PosesRecordingSaveData__ExternalCameraCalibrationSaveData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PosesRecordingSaveData__ExternalCameraCalibrationSaveData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PosesRecordingSaveData__ExternalCameraCalibrationSaveData(__PosesRecordingSaveData__ExternalCameraCalibrationSaveData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PosesRecordingSaveData__ExternalCameraCalibrationSaveData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PosesRecordingSaveData__ExternalCameraCalibrationSaveData(__PosesRecordingSaveData__ExternalCameraCalibrationSaveData const&) = delete;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PosesRecordingSaveData__ExternalCameraCalibrationSaveData, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PosesRecordingSaveData__ExternalCameraCalibrationSaveData, ___fieldOfVision) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PosesRecordingSaveData__ExternalCameraCalibrationSaveData, ___nearClip) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PosesRecordingSaveData__ExternalCameraCalibrationSaveData, ___farClip) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PosesRecordingSaveData__ExternalCameraCalibrationSaveData, ___hmdOffset) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PosesRecordingSaveData__ExternalCameraCalibrationSaveData, ___nearOffset) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PosesRecordingSaveData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PosesRecordingSaveData*
class CORDL_TYPE PosesRecordingSaveData : public ::System::Object {
public:
  // Declarations
  using ExternalCameraCalibrationSaveData = ::GlobalNamespace::__PosesRecordingSaveData__ExternalCameraCalibrationSaveData;

  using PoseSaveData = ::GlobalNamespace::__PosesRecordingSaveData__PoseSaveData;

  using TransformsSaveKeyframe = ::GlobalNamespace::__PosesRecordingSaveData__TransformsSaveKeyframe;

  /// @brief Field externalCameraCalibration, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_externalCameraCalibration,
                      put = __cordl_internal_set_externalCameraCalibration))::GlobalNamespace::__PosesRecordingSaveData__ExternalCameraCalibrationSaveData* externalCameraCalibration;

  /// @brief Field keyframes, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_keyframes, put = __cordl_internal_set_keyframes))::ArrayW<::GlobalNamespace::__PosesRecordingSaveData__TransformsSaveKeyframe*,
                                                                                                           ::Array<::GlobalNamespace::__PosesRecordingSaveData__TransformsSaveKeyframe*>*> keyframes;

  /// @brief Field objectIds, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_objectIds, put = __cordl_internal_set_objectIds))::ArrayW<::StringW, ::Array<::StringW>*> objectIds;

  static inline ::GlobalNamespace::PosesRecordingSaveData*
  New_ctor(::ArrayW<::StringW, ::Array<::StringW>*> objectIds,
           ::ArrayW<::GlobalNamespace::__PosesRecordingSaveData__TransformsSaveKeyframe*, ::Array<::GlobalNamespace::__PosesRecordingSaveData__TransformsSaveKeyframe*>*> keyframes,
           ::GlobalNamespace::__PosesRecordingSaveData__ExternalCameraCalibrationSaveData* externalCameraCalibration);

  constexpr ::GlobalNamespace::__PosesRecordingSaveData__ExternalCameraCalibrationSaveData*& __cordl_internal_get_externalCameraCalibration();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PosesRecordingSaveData__ExternalCameraCalibrationSaveData*> const& __cordl_internal_get_externalCameraCalibration() const;

  constexpr ::ArrayW<::GlobalNamespace::__PosesRecordingSaveData__TransformsSaveKeyframe*, ::Array<::GlobalNamespace::__PosesRecordingSaveData__TransformsSaveKeyframe*>*> const&
  __cordl_internal_get_keyframes() const;

  constexpr ::ArrayW<::GlobalNamespace::__PosesRecordingSaveData__TransformsSaveKeyframe*, ::Array<::GlobalNamespace::__PosesRecordingSaveData__TransformsSaveKeyframe*>*>&
  __cordl_internal_get_keyframes();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_objectIds() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_objectIds();

  constexpr void __cordl_internal_set_externalCameraCalibration(::GlobalNamespace::__PosesRecordingSaveData__ExternalCameraCalibrationSaveData* value);

  constexpr void
  __cordl_internal_set_keyframes(::ArrayW<::GlobalNamespace::__PosesRecordingSaveData__TransformsSaveKeyframe*, ::Array<::GlobalNamespace::__PosesRecordingSaveData__TransformsSaveKeyframe*>*> value);

  constexpr void __cordl_internal_set_objectIds(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method .ctor, addr 0x23f8cb4, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::StringW, ::Array<::StringW>*> objectIds,
                    ::ArrayW<::GlobalNamespace::__PosesRecordingSaveData__TransformsSaveKeyframe*, ::Array<::GlobalNamespace::__PosesRecordingSaveData__TransformsSaveKeyframe*>*> keyframes,
                    ::GlobalNamespace::__PosesRecordingSaveData__ExternalCameraCalibrationSaveData* externalCameraCalibration);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PosesRecordingSaveData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PosesRecordingSaveData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PosesRecordingSaveData(PosesRecordingSaveData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PosesRecordingSaveData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PosesRecordingSaveData(PosesRecordingSaveData const&) = delete;

  /// @brief Field objectIds, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___objectIds;

  /// @brief Field keyframes, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__PosesRecordingSaveData__TransformsSaveKeyframe*, ::Array<::GlobalNamespace::__PosesRecordingSaveData__TransformsSaveKeyframe*>*> ___keyframes;

  /// @brief Field externalCameraCalibration, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__PosesRecordingSaveData__ExternalCameraCalibrationSaveData* ___externalCameraCalibration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PosesRecordingSaveData, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesRecordingSaveData, ___objectIds) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesRecordingSaveData, ___keyframes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesRecordingSaveData, ___externalCameraCalibration) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PosesRecordingSaveData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PosesRecordingSaveData*, "", "PosesRecordingSaveData");
NEED_NO_BOX(::GlobalNamespace::__PosesRecordingSaveData__ExternalCameraCalibrationSaveData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PosesRecordingSaveData__ExternalCameraCalibrationSaveData*, "", "PosesRecordingSaveData/ExternalCameraCalibrationSaveData");
NEED_NO_BOX(::GlobalNamespace::__PosesRecordingSaveData__PoseSaveData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PosesRecordingSaveData__PoseSaveData*, "", "PosesRecordingSaveData/PoseSaveData");
NEED_NO_BOX(::GlobalNamespace::__PosesRecordingSaveData__TransformsSaveKeyframe);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PosesRecordingSaveData__TransformsSaveKeyframe*, "", "PosesRecordingSaveData/TransformsSaveKeyframe");
