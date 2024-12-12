#pragma once
// IWYU pragma private; include "GlobalNamespace/PosesRecordingInfoSaveData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PosesRecordingInfoSaveData)
namespace GlobalNamespace {
class PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData;
}
// Forward declare root types
namespace GlobalNamespace {
class PosesRecordingInfoSaveData;
}
namespace GlobalNamespace {
class PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PosesRecordingInfoSaveData);
MARK_REF_PTR_T(::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PosesRecordingInfoSaveData/ExternalCameraCalibrationSaveData
class CORDL_TYPE PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _farClip, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__farClip, put = __cordl_internal_set__farClip)) float_t _farClip;

  /// @brief Field _fieldOfVision, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__fieldOfVision, put = __cordl_internal_set__fieldOfVision)) float_t _fieldOfVision;

  /// @brief Field _hmdOffset, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__hmdOffset, put = __cordl_internal_set__hmdOffset)) float_t _hmdOffset;

  /// @brief Field _nearClip, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__nearClip, put = __cordl_internal_set__nearClip)) float_t _nearClip;

  /// @brief Field _nearOffset, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__nearOffset, put = __cordl_internal_set__nearOffset)) float_t _nearOffset;

  __declspec(property(get = get_farClip)) float_t farClip;

  __declspec(property(get = get_fieldOfVision)) float_t fieldOfVision;

  __declspec(property(get = get_hmdOffset)) float_t hmdOffset;

  __declspec(property(get = get_nearClip)) float_t nearClip;

  __declspec(property(get = get_nearOffset)) float_t nearOffset;

  static inline ::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData* New_ctor(float_t fieldOfVision, float_t nearClip, float_t farClip, float_t hmdOffset,
                                                                                                          float_t nearOffset);

  constexpr float_t const& __cordl_internal_get__farClip() const;

  constexpr float_t& __cordl_internal_get__farClip();

  constexpr float_t const& __cordl_internal_get__fieldOfVision() const;

  constexpr float_t& __cordl_internal_get__fieldOfVision();

  constexpr float_t const& __cordl_internal_get__hmdOffset() const;

  constexpr float_t& __cordl_internal_get__hmdOffset();

  constexpr float_t const& __cordl_internal_get__nearClip() const;

  constexpr float_t& __cordl_internal_get__nearClip();

  constexpr float_t const& __cordl_internal_get__nearOffset() const;

  constexpr float_t& __cordl_internal_get__nearOffset();

  constexpr void __cordl_internal_set__farClip(float_t value);

  constexpr void __cordl_internal_set__fieldOfVision(float_t value);

  constexpr void __cordl_internal_set__hmdOffset(float_t value);

  constexpr void __cordl_internal_set__nearClip(float_t value);

  constexpr void __cordl_internal_set__nearOffset(float_t value);

  /// @brief Method .ctor, addr 0x3b1a390, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(float_t fieldOfVision, float_t nearClip, float_t farClip, float_t hmdOffset, float_t nearOffset);

  /// @brief Method get_farClip, addr 0x3b1a378, size 0x8, virtual false, abstract: false, final false
  inline float_t get_farClip();

  /// @brief Method get_fieldOfVision, addr 0x3b1a368, size 0x8, virtual false, abstract: false, final false
  inline float_t get_fieldOfVision();

  /// @brief Method get_hmdOffset, addr 0x3b1a380, size 0x8, virtual false, abstract: false, final false
  inline float_t get_hmdOffset();

  /// @brief Method get_nearClip, addr 0x3b1a370, size 0x8, virtual false, abstract: false, final false
  inline float_t get_nearClip();

  /// @brief Method get_nearOffset, addr 0x3b1a388, size 0x8, virtual false, abstract: false, final false
  inline float_t get_nearOffset();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData(PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData(PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5103 };

  /// @brief Field _fieldOfVision, offset: 0x10, size: 0x4, def value: None
  float_t ____fieldOfVision;

  /// @brief Field _nearClip, offset: 0x14, size: 0x4, def value: None
  float_t ____nearClip;

  /// @brief Field _farClip, offset: 0x18, size: 0x4, def value: None
  float_t ____farClip;

  /// @brief Field _hmdOffset, offset: 0x1c, size: 0x4, def value: None
  float_t ____hmdOffset;

  /// @brief Field _nearOffset, offset: 0x20, size: 0x4, def value: None
  float_t ____nearOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData, ____fieldOfVision) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData, ____nearClip) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData, ____farClip) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData, ____hmdOffset) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData, ____nearOffset) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PosesRecordingInfoSaveData
class CORDL_TYPE PosesRecordingInfoSaveData : public ::System::Object {
public:
  // Declarations
  using ExternalCameraCalibrationSaveData = ::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData;

  /// @brief Field _dataFileName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__dataFileName, put = __cordl_internal_set__dataFileName)) ::StringW _dataFileName;

  /// @brief Field _externalCameraCalibration, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__externalCameraCalibration,
                      put = __cordl_internal_set__externalCameraCalibration)) ::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData* _externalCameraCalibration;

  /// @brief Field _objectIds, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__objectIds, put = __cordl_internal_set__objectIds)) ::ArrayW<::StringW, ::Array<::StringW>*> _objectIds;

  /// @brief Field _version, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version)) ::StringW _version;

  __declspec(property(get = get_dataFileName)) ::StringW dataFileName;

  __declspec(property(get = get_externalCameraCalibration)) ::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData* externalCameraCalibration;

  __declspec(property(get = get_objectIds)) ::ArrayW<::StringW, ::Array<::StringW>*> objectIds;

  __declspec(property(get = get_version)) ::StringW version;

  static inline ::GlobalNamespace::PosesRecordingInfoSaveData*
  New_ctor(::ArrayW<::StringW, ::Array<::StringW>*> objectIds, ::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData* externalCameraCalibration, ::StringW dataFileName);

  constexpr ::StringW const& __cordl_internal_get__dataFileName() const;

  constexpr ::StringW& __cordl_internal_get__dataFileName();

  constexpr ::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData* const& __cordl_internal_get__externalCameraCalibration() const;

  constexpr ::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData*& __cordl_internal_get__externalCameraCalibration();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__objectIds() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__objectIds();

  constexpr ::StringW const& __cordl_internal_get__version() const;

  constexpr ::StringW& __cordl_internal_get__version();

  constexpr void __cordl_internal_set__dataFileName(::StringW value);

  constexpr void __cordl_internal_set__externalCameraCalibration(::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData* value);

  constexpr void __cordl_internal_set__objectIds(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__version(::StringW value);

  /// @brief Method .ctor, addr 0x3b1a2f4, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::StringW, ::Array<::StringW>*> objectIds, ::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData* externalCameraCalibration,
                    ::StringW dataFileName);

  /// @brief Method get_dataFileName, addr 0x3b1a2ec, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_dataFileName();

  /// @brief Method get_externalCameraCalibration, addr 0x3b1a2e4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData* get_externalCameraCalibration();

  /// @brief Method get_objectIds, addr 0x3b1a2dc, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_objectIds();

  /// @brief Method get_version, addr 0x3b1a2d4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_version();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PosesRecordingInfoSaveData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PosesRecordingInfoSaveData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PosesRecordingInfoSaveData(PosesRecordingInfoSaveData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PosesRecordingInfoSaveData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PosesRecordingInfoSaveData(PosesRecordingInfoSaveData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5104 };

  /// @brief Field kCurrentVersion offset 0xffffffff size 0x8
  static constexpr ::ConstString kCurrentVersion{ u"1.0.0" };

  /// @brief Field _version, offset: 0x10, size: 0x8, def value: None
  ::StringW ____version;

  /// @brief Field _objectIds, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____objectIds;

  /// @brief Field _externalCameraCalibration, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData* ____externalCameraCalibration;

  /// @brief Field _dataFileName, offset: 0x28, size: 0x8, def value: None
  ::StringW ____dataFileName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PosesRecordingInfoSaveData, ____version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesRecordingInfoSaveData, ____objectIds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesRecordingInfoSaveData, ____externalCameraCalibration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesRecordingInfoSaveData, ____dataFileName) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PosesRecordingInfoSaveData, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PosesRecordingInfoSaveData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PosesRecordingInfoSaveData*, "", "PosesRecordingInfoSaveData");
NEED_NO_BOX(::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PosesRecordingInfoSaveData_ExternalCameraCalibrationSaveData*, "", "PosesRecordingInfoSaveData/ExternalCameraCalibrationSaveData");
