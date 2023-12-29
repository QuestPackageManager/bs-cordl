#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_VolumeLayerPreset)
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_VolumeLayerPreset;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_VolumeLayerPreset);
// Type: HoudiniEngineUnity::HEU_VolumeLayerPreset
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9538))
// CS Name: ::HoudiniEngineUnity::HEU_VolumeLayerPreset*
class CORDL_TYPE HEU_VolumeLayerPreset : public ::System::Object {
public:
  // Declarations
  /// @brief Field _layerName, offset 0x10, size 0x8
  __declspec(property(get = __get__layerName, put = __set__layerName))::StringW _layerName;

  /// @brief Field _strength, offset 0x18, size 0x4
  __declspec(property(get = __get__strength, put = __set__strength)) float_t _strength;

  /// @brief Field _uiExpanded, offset 0x1c, size 0x1
  __declspec(property(get = __get__uiExpanded, put = __set__uiExpanded)) bool _uiExpanded;

  /// @brief Field _tile, offset 0x20, size 0x4
  __declspec(property(get = __get__tile, put = __set__tile)) int32_t _tile;

  constexpr ::StringW& __get__layerName();

  constexpr ::StringW const& __get__layerName() const;

  constexpr void __set__layerName(::StringW value);

  constexpr float_t& __get__strength();

  constexpr float_t const& __get__strength() const;

  constexpr void __set__strength(float_t value);

  constexpr bool& __get__uiExpanded();

  constexpr bool const& __get__uiExpanded() const;

  constexpr void __set__uiExpanded(bool value);

  constexpr int32_t& __get__tile();

  constexpr int32_t const& __get__tile() const;

  constexpr void __set__tile(int32_t value);

  static inline ::HoudiniEngineUnity::HEU_VolumeLayerPreset* New_ctor();

  /// @brief Method .ctor addr 0x1ff6ecc size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_VolumeLayerPreset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_VolumeLayerPreset(HEU_VolumeLayerPreset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_VolumeLayerPreset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_VolumeLayerPreset(HEU_VolumeLayerPreset const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_VolumeLayerPreset();

public:
  /// @brief Field _layerName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____layerName;

  /// @brief Field _strength, offset: 0x18, size: 0x4, def value: None
  float_t ____strength;

  /// @brief Field _uiExpanded, offset: 0x1c, size: 0x1, def value: None
  bool ____uiExpanded;

  /// @brief Field _tile, offset: 0x20, size: 0x4, def value: None
  int32_t ____tile;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_VolumeLayerPreset, 0x28>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_VolumeLayerPreset, ____layerName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_VolumeLayerPreset, ____strength) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_VolumeLayerPreset, ____uiExpanded) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_VolumeLayerPreset, ____tile) == 0x20, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_VolumeLayerPreset);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_VolumeLayerPreset*, "HoudiniEngineUnity", "HEU_VolumeLayerPreset");
