#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_VolumeCachePreset)
namespace HoudiniEngineUnity {
class HEU_VolumeLayerPreset;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_VolumeCachePreset;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_VolumeCachePreset);
// Type: HoudiniEngineUnity::HEU_VolumeCachePreset
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_VolumeCachePreset*
class CORDL_TYPE HEU_VolumeCachePreset : public ::System::Object {
public:
  // Declarations
  /// @brief Field _geoName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__geoName, put = __cordl_internal_set__geoName))::StringW _geoName;

  /// @brief Field _objName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__objName, put = __cordl_internal_set__objName))::StringW _objName;

  /// @brief Field _terrainDataPath, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__terrainDataPath, put = __cordl_internal_set__terrainDataPath))::StringW _terrainDataPath;

  /// @brief Field _tile, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__tile, put = __cordl_internal_set__tile)) int32_t _tile;

  /// @brief Field _uiExpanded, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__uiExpanded, put = __cordl_internal_set__uiExpanded)) bool _uiExpanded;

  /// @brief Field _volumeLayersPresets, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__volumeLayersPresets,
                      put = __cordl_internal_set__volumeLayersPresets))::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayerPreset*>* _volumeLayersPresets;

  static inline ::HoudiniEngineUnity::HEU_VolumeCachePreset* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__geoName() const;

  constexpr ::StringW& __cordl_internal_get__geoName();

  constexpr ::StringW const& __cordl_internal_get__objName() const;

  constexpr ::StringW& __cordl_internal_get__objName();

  constexpr ::StringW const& __cordl_internal_get__terrainDataPath() const;

  constexpr ::StringW& __cordl_internal_get__terrainDataPath();

  constexpr int32_t const& __cordl_internal_get__tile() const;

  constexpr int32_t& __cordl_internal_get__tile();

  constexpr bool const& __cordl_internal_get__uiExpanded() const;

  constexpr bool& __cordl_internal_get__uiExpanded();

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayerPreset*>*& __cordl_internal_get__volumeLayersPresets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayerPreset*>*> const& __cordl_internal_get__volumeLayersPresets() const;

  constexpr void __cordl_internal_set__geoName(::StringW value);

  constexpr void __cordl_internal_set__objName(::StringW value);

  constexpr void __cordl_internal_set__terrainDataPath(::StringW value);

  constexpr void __cordl_internal_set__tile(int32_t value);

  constexpr void __cordl_internal_set__uiExpanded(bool value);

  constexpr void __cordl_internal_set__volumeLayersPresets(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayerPreset*>* value);

  /// @brief Method .ctor, addr 0x2438adc, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_VolumeCachePreset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_VolumeCachePreset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_VolumeCachePreset(HEU_VolumeCachePreset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_VolumeCachePreset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_VolumeCachePreset(HEU_VolumeCachePreset const&) = delete;

  /// @brief Field _objName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____objName;

  /// @brief Field _geoName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____geoName;

  /// @brief Field _uiExpanded, offset: 0x20, size: 0x1, def value: None
  bool ____uiExpanded;

  /// @brief Field _volumeLayersPresets, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayerPreset*>* ____volumeLayersPresets;

  /// @brief Field _terrainDataPath, offset: 0x30, size: 0x8, def value: None
  ::StringW ____terrainDataPath;

  /// @brief Field _tile, offset: 0x38, size: 0x4, def value: None
  int32_t ____tile;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_VolumeCachePreset, 0x40>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_VolumeCachePreset, ____objName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_VolumeCachePreset, ____geoName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_VolumeCachePreset, ____uiExpanded) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_VolumeCachePreset, ____volumeLayersPresets) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_VolumeCachePreset, ____terrainDataPath) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_VolumeCachePreset, ____tile) == 0x38, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_VolumeCachePreset);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_VolumeCachePreset*, "HoudiniEngineUnity", "HEU_VolumeCachePreset");
