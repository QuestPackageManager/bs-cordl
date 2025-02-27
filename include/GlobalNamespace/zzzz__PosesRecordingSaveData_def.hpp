#pragma once
// IWYU pragma private; include "GlobalNamespace/PosesRecordingSaveData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PosesRecordingSaveData)
namespace GlobalNamespace {
class PosesRecordingSaveData_ExternalCameraCalibrationSaveData;
}
namespace GlobalNamespace {
class PosesRecordingSaveData_PoseSaveData;
}
namespace GlobalNamespace {
class PosesRecordingSaveData_TransformsSaveKeyframe;
}
// Forward declare root types
namespace GlobalNamespace {
class PosesRecordingSaveData;
}
namespace GlobalNamespace {
class PosesRecordingSaveData_ExternalCameraCalibrationSaveData;
}
namespace GlobalNamespace {
class PosesRecordingSaveData_PoseSaveData;
}
namespace GlobalNamespace {
class PosesRecordingSaveData_TransformsSaveKeyframe;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PosesRecordingSaveData);
MARK_REF_PTR_T(::GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData);
MARK_REF_PTR_T(::GlobalNamespace::PosesRecordingSaveData_PoseSaveData);
MARK_REF_PTR_T(::GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PosesRecordingSaveData/PoseSaveData
class CORDL_TYPE PosesRecordingSaveData_PoseSaveData : public ::System::Object {
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

  static inline ::GlobalNamespace::PosesRecordingSaveData_PoseSaveData* New_ctor(float_t posX, float_t posY, float_t posZ, float_t rotX, float_t rotY, float_t rotZ, float_t rotW);

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

  /// @brief Method .ctor, addr 0x3b297f8, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(float_t posX, float_t posY, float_t posZ, float_t rotX, float_t rotY, float_t rotZ, float_t rotW);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PosesRecordingSaveData_PoseSaveData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PosesRecordingSaveData_PoseSaveData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PosesRecordingSaveData_PoseSaveData(PosesRecordingSaveData_PoseSaveData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PosesRecordingSaveData_PoseSaveData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PosesRecordingSaveData_PoseSaveData(PosesRecordingSaveData_PoseSaveData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5103 };

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
static_assert(offsetof(::GlobalNamespace::PosesRecordingSaveData_PoseSaveData, ___posX) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesRecordingSaveData_PoseSaveData, ___posY) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesRecordingSaveData_PoseSaveData, ___posZ) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesRecordingSaveData_PoseSaveData, ___rotX) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesRecordingSaveData_PoseSaveData, ___rotY) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesRecordingSaveData_PoseSaveData, ___rotZ) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesRecordingSaveData_PoseSaveData, ___rotW) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PosesRecordingSaveData_PoseSaveData, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PosesRecordingSaveData/TransformsSaveKeyframe
class CORDL_TYPE PosesRecordingSaveData_TransformsSaveKeyframe : public ::System::Object {
public:
  // Declarations
  /// @brief Field poses, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_poses,
                      put = __cordl_internal_set_poses)) ::ArrayW<::GlobalNamespace::PosesRecordingSaveData_PoseSaveData*, ::Array<::GlobalNamespace::PosesRecordingSaveData_PoseSaveData*>*>
      poses;

  /// @brief Field time, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_time, put = __cordl_internal_set_time)) float_t time;

  static inline ::GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe*
  New_ctor(::ArrayW<::GlobalNamespace::PosesRecordingSaveData_PoseSaveData*, ::Array<::GlobalNamespace::PosesRecordingSaveData_PoseSaveData*>*> poses, float_t time);

  constexpr ::ArrayW<::GlobalNamespace::PosesRecordingSaveData_PoseSaveData*, ::Array<::GlobalNamespace::PosesRecordingSaveData_PoseSaveData*>*> const& __cordl_internal_get_poses() const;

  constexpr ::ArrayW<::GlobalNamespace::PosesRecordingSaveData_PoseSaveData*, ::Array<::GlobalNamespace::PosesRecordingSaveData_PoseSaveData*>*>& __cordl_internal_get_poses();

  constexpr float_t const& __cordl_internal_get_time() const;

  constexpr float_t& __cordl_internal_get_time();

  constexpr void __cordl_internal_set_poses(::ArrayW<::GlobalNamespace::PosesRecordingSaveData_PoseSaveData*, ::Array<::GlobalNamespace::PosesRecordingSaveData_PoseSaveData*>*> value);

  constexpr void __cordl_internal_set_time(float_t value);

  /// @brief Method .ctor, addr 0x3b2985c, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::GlobalNamespace::PosesRecordingSaveData_PoseSaveData*, ::Array<::GlobalNamespace::PosesRecordingSaveData_PoseSaveData*>*> poses, float_t time);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PosesRecordingSaveData_TransformsSaveKeyframe();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PosesRecordingSaveData_TransformsSaveKeyframe", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PosesRecordingSaveData_TransformsSaveKeyframe(PosesRecordingSaveData_TransformsSaveKeyframe&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PosesRecordingSaveData_TransformsSaveKeyframe", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PosesRecordingSaveData_TransformsSaveKeyframe(PosesRecordingSaveData_TransformsSaveKeyframe const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5104 };

  /// @brief Field poses, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::PosesRecordingSaveData_PoseSaveData*, ::Array<::GlobalNamespace::PosesRecordingSaveData_PoseSaveData*>*> ___poses;

  /// @brief Field time, offset: 0x18, size: 0x4, def value: None
  float_t ___time;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe, ___poses) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe, ___time) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PosesRecordingSaveData/ExternalCameraCalibrationSaveData
class CORDL_TYPE PosesRecordingSaveData_ExternalCameraCalibrationSaveData : public ::System::Object {
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

  static inline ::GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData* New_ctor(float_t fieldOfVision, float_t nearClip, float_t farClip, float_t hmdOffset, float_t nearOffset);

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

  /// @brief Method .ctor, addr 0x3b29894, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(float_t fieldOfVision, float_t nearClip, float_t farClip, float_t hmdOffset, float_t nearOffset);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PosesRecordingSaveData_ExternalCameraCalibrationSaveData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PosesRecordingSaveData_ExternalCameraCalibrationSaveData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PosesRecordingSaveData_ExternalCameraCalibrationSaveData(PosesRecordingSaveData_ExternalCameraCalibrationSaveData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PosesRecordingSaveData_ExternalCameraCalibrationSaveData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PosesRecordingSaveData_ExternalCameraCalibrationSaveData(PosesRecordingSaveData_ExternalCameraCalibrationSaveData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5105 };

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
static_assert(offsetof(::GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData, ___fieldOfVision) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData, ___nearClip) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData, ___farClip) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData, ___hmdOffset) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData, ___nearOffset) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PosesRecordingSaveData
class CORDL_TYPE PosesRecordingSaveData : public ::System::Object {
public:
  // Declarations
  using ExternalCameraCalibrationSaveData = ::GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData;

  using PoseSaveData = ::GlobalNamespace::PosesRecordingSaveData_PoseSaveData;

  using TransformsSaveKeyframe = ::GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe;

  /// @brief Field externalCameraCalibration, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_externalCameraCalibration,
                      put = __cordl_internal_set_externalCameraCalibration)) ::GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData* externalCameraCalibration;

  /// @brief Field keyframes, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get_keyframes,
      put = __cordl_internal_set_keyframes)) ::ArrayW<::GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe*, ::Array<::GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe*>*>
      keyframes;

  /// @brief Field objectIds, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_objectIds, put = __cordl_internal_set_objectIds)) ::ArrayW<::StringW, ::Array<::StringW>*> objectIds;

  static inline ::GlobalNamespace::PosesRecordingSaveData*
  New_ctor(::ArrayW<::StringW, ::Array<::StringW>*> objectIds,
           ::ArrayW<::GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe*, ::Array<::GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe*>*> keyframes,
           ::GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData* externalCameraCalibration);

  constexpr ::GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData* const& __cordl_internal_get_externalCameraCalibration() const;

  constexpr ::GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData*& __cordl_internal_get_externalCameraCalibration();

  constexpr ::ArrayW<::GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe*, ::Array<::GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe*>*> const&
  __cordl_internal_get_keyframes() const;

  constexpr ::ArrayW<::GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe*, ::Array<::GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe*>*>& __cordl_internal_get_keyframes();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_objectIds() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_objectIds();

  constexpr void __cordl_internal_set_externalCameraCalibration(::GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData* value);

  constexpr void
  __cordl_internal_set_keyframes(::ArrayW<::GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe*, ::Array<::GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe*>*> value);

  constexpr void __cordl_internal_set_objectIds(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method .ctor, addr 0x3b297bc, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::StringW, ::Array<::StringW>*> objectIds,
                    ::ArrayW<::GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe*, ::Array<::GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe*>*> keyframes,
                    ::GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData* externalCameraCalibration);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5106 };

  /// @brief Field objectIds, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___objectIds;

  /// @brief Field keyframes, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe*, ::Array<::GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe*>*> ___keyframes;

  /// @brief Field externalCameraCalibration, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData* ___externalCameraCalibration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PosesRecordingSaveData, ___objectIds) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesRecordingSaveData, ___keyframes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesRecordingSaveData, ___externalCameraCalibration) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PosesRecordingSaveData, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PosesRecordingSaveData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PosesRecordingSaveData*, "", "PosesRecordingSaveData");
NEED_NO_BOX(::GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PosesRecordingSaveData_ExternalCameraCalibrationSaveData*, "", "PosesRecordingSaveData/ExternalCameraCalibrationSaveData");
NEED_NO_BOX(::GlobalNamespace::PosesRecordingSaveData_PoseSaveData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PosesRecordingSaveData_PoseSaveData*, "", "PosesRecordingSaveData/PoseSaveData");
NEED_NO_BOX(::GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PosesRecordingSaveData_TransformsSaveKeyframe*, "", "PosesRecordingSaveData/TransformsSaveKeyframe");
