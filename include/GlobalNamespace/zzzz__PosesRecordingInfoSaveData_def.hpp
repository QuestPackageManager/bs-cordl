#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PosesRecordingInfoSaveData)
namespace GlobalNamespace {
class __PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData;
}
// Forward declare root types
namespace GlobalNamespace {
class PosesRecordingInfoSaveData;
}
namespace GlobalNamespace {
class __PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PosesRecordingInfoSaveData);
MARK_REF_PTR_T(::GlobalNamespace::__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData);
// Type: ::ExternalCameraCalibrationSaveData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6030))
// CS Name: ::PosesRecordingInfoSaveData::ExternalCameraCalibrationSaveData*
class CORDL_TYPE __PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _fieldOfVision, offset 0x10, size 0x4
  __declspec(property(get = __get__fieldOfVision, put = __set__fieldOfVision)) float_t _fieldOfVision;

  /// @brief Field _nearClip, offset 0x14, size 0x4
  __declspec(property(get = __get__nearClip, put = __set__nearClip)) float_t _nearClip;

  /// @brief Field _farClip, offset 0x18, size 0x4
  __declspec(property(get = __get__farClip, put = __set__farClip)) float_t _farClip;

  /// @brief Field _hmdOffset, offset 0x1c, size 0x4
  __declspec(property(get = __get__hmdOffset, put = __set__hmdOffset)) float_t _hmdOffset;

  /// @brief Field _nearOffset, offset 0x20, size 0x4
  __declspec(property(get = __get__nearOffset, put = __set__nearOffset)) float_t _nearOffset;

  __declspec(property(get = get_fieldOfVision)) float_t fieldOfVision;

  __declspec(property(get = get_nearClip)) float_t nearClip;

  __declspec(property(get = get_farClip)) float_t farClip;

  __declspec(property(get = get_hmdOffset)) float_t hmdOffset;

  __declspec(property(get = get_nearOffset)) float_t nearOffset;

  constexpr float_t& __get__fieldOfVision();

  constexpr float_t const& __get__fieldOfVision() const;

  constexpr void __set__fieldOfVision(float_t value);

  constexpr float_t& __get__nearClip();

  constexpr float_t const& __get__nearClip() const;

  constexpr void __set__nearClip(float_t value);

  constexpr float_t& __get__farClip();

  constexpr float_t const& __get__farClip() const;

  constexpr void __set__farClip(float_t value);

  constexpr float_t& __get__hmdOffset();

  constexpr float_t const& __get__hmdOffset() const;

  constexpr void __set__hmdOffset(float_t value);

  constexpr float_t& __get__nearOffset();

  constexpr float_t const& __get__nearOffset() const;

  constexpr void __set__nearOffset(float_t value);

  /// @brief Method get_fieldOfVision addr 0x21b8ca8 size 0x8 virtual false final false
  inline float_t get_fieldOfVision();

  /// @brief Method get_nearClip addr 0x21b8cb0 size 0x8 virtual false final false
  inline float_t get_nearClip();

  /// @brief Method get_farClip addr 0x21b8cb8 size 0x8 virtual false final false
  inline float_t get_farClip();

  /// @brief Method get_hmdOffset addr 0x21b8cc0 size 0x8 virtual false final false
  inline float_t get_hmdOffset();

  /// @brief Method get_nearOffset addr 0x21b8cc8 size 0x8 virtual false final false
  inline float_t get_nearOffset();

  static inline ::GlobalNamespace::__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData* New_ctor(float_t fieldOfVision, float_t nearClip, float_t farClip, float_t hmdOffset,
                                                                                                             float_t nearOffset);

  /// @brief Method .ctor addr 0x21b8cd0 size 0x50 virtual false final false
  inline void _ctor(float_t fieldOfVision, float_t nearClip, float_t farClip, float_t hmdOffset, float_t nearOffset);

  // Ctor Parameters [CppParam { name: "", ty: "__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData(__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData(__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData();

public:
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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData, ____fieldOfVision) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData, ____nearClip) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData, ____farClip) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData, ____hmdOffset) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData, ____nearOffset) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PosesRecordingInfoSaveData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6031))
// CS Name: ::PosesRecordingInfoSaveData*
class CORDL_TYPE PosesRecordingInfoSaveData : public ::System::Object {
public:
  // Declarations
  using ExternalCameraCalibrationSaveData = ::GlobalNamespace::__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData;

  /// @brief Field _version, offset 0x10, size 0x8
  __declspec(property(get = __get__version, put = __set__version))::StringW _version;

  /// @brief Field _objectIds, offset 0x18, size 0x8
  __declspec(property(get = __get__objectIds, put = __set__objectIds))::ArrayW<::StringW, ::Array<::StringW>*> _objectIds;

  /// @brief Field _externalCameraCalibration, offset 0x20, size 0x8
  __declspec(property(get = __get__externalCameraCalibration,
                      put = __set__externalCameraCalibration))::GlobalNamespace::__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData* _externalCameraCalibration;

  /// @brief Field _dataFileName, offset 0x28, size 0x8
  __declspec(property(get = __get__dataFileName, put = __set__dataFileName))::StringW _dataFileName;

  __declspec(property(get = get_version))::StringW version;

  __declspec(property(get = get_objectIds))::ArrayW<::StringW, ::Array<::StringW>*> objectIds;

  __declspec(property(get = get_externalCameraCalibration))::GlobalNamespace::__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData* externalCameraCalibration;

  __declspec(property(get = get_dataFileName))::StringW dataFileName;

  constexpr ::StringW& __get__version();

  constexpr ::StringW const& __get__version() const;

  constexpr void __set__version(::StringW value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get__objectIds();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get__objectIds() const;

  constexpr void __set__objectIds(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::GlobalNamespace::__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData*& __get__externalCameraCalibration();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData*> const& __get__externalCameraCalibration() const;

  constexpr void __set__externalCameraCalibration(::GlobalNamespace::__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData* value);

  constexpr ::StringW& __get__dataFileName();

  constexpr ::StringW const& __get__dataFileName() const;

  constexpr void __set__dataFileName(::StringW value);

  /// @brief Method get_version addr 0x21b8c14 size 0x8 virtual false final false
  inline ::StringW get_version();

  /// @brief Method get_objectIds addr 0x21b8c1c size 0x8 virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_objectIds();

  /// @brief Method get_externalCameraCalibration addr 0x21b8c24 size 0x8 virtual false final false
  inline ::GlobalNamespace::__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData* get_externalCameraCalibration();

  /// @brief Method get_dataFileName addr 0x21b8c2c size 0x8 virtual false final false
  inline ::StringW get_dataFileName();

  static inline ::GlobalNamespace::PosesRecordingInfoSaveData*
  New_ctor(::ArrayW<::StringW, ::Array<::StringW>*> objectIds, ::GlobalNamespace::__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData* externalCameraCalibration, ::StringW dataFileName);

  /// @brief Method .ctor addr 0x21b8c34 size 0x74 virtual false final false
  inline void _ctor(::ArrayW<::StringW, ::Array<::StringW>*> objectIds, ::GlobalNamespace::__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData* externalCameraCalibration,
                    ::StringW dataFileName);

  // Ctor Parameters [CppParam { name: "", ty: "PosesRecordingInfoSaveData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PosesRecordingInfoSaveData(PosesRecordingInfoSaveData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PosesRecordingInfoSaveData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PosesRecordingInfoSaveData(PosesRecordingInfoSaveData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PosesRecordingInfoSaveData();

public:
  /// @brief Field _version, offset: 0x10, size: 0x8, def value: None
  ::StringW ____version;

  /// @brief Field _objectIds, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____objectIds;

  /// @brief Field _externalCameraCalibration, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData* ____externalCameraCalibration;

  /// @brief Field _dataFileName, offset: 0x28, size: 0x8, def value: None
  ::StringW ____dataFileName;

  /// @brief Field kCurrentVersion offset 0xffffffff size 0x8
  static constexpr ::ConstString kCurrentVersion{ u"1.0.0" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PosesRecordingInfoSaveData, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesRecordingInfoSaveData, ____version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesRecordingInfoSaveData, ____objectIds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesRecordingInfoSaveData, ____externalCameraCalibration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesRecordingInfoSaveData, ____dataFileName) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PosesRecordingInfoSaveData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PosesRecordingInfoSaveData*, "", "PosesRecordingInfoSaveData");
NEED_NO_BOX(::GlobalNamespace::__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData*, "", "PosesRecordingInfoSaveData/ExternalCameraCalibrationSaveData");
