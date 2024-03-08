#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HFLayerType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_VolumeLayer)
namespace HoudiniEngineUnity {
class HEU_DetailPrototype;
}
namespace HoudiniEngineUnity {
class HEU_PartData;
}
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
namespace UnityEngine {
class TerrainLayer;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_VolumeLayer;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_VolumeLayer);
// Type: HoudiniEngineUnity::HEU_VolumeLayer
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_VolumeLayer*
class CORDL_TYPE HEU_VolumeLayer : public ::System::Object {
public:
  // Declarations
  /// @brief Field _detailPrototype, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__detailPrototype, put = __cordl_internal_set__detailPrototype))::HoudiniEngineUnity::HEU_DetailPrototype* _detailPrototype;

  /// @brief Field _hasLayerAttributes, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get__hasLayerAttributes, put = __cordl_internal_set__hasLayerAttributes)) bool _hasLayerAttributes;

  /// @brief Field _layerName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__layerName, put = __cordl_internal_set__layerName))::StringW _layerName;

  /// @brief Field _layerType, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__layerType, put = __cordl_internal_set__layerType))::HoudiniEngineUnity::HFLayerType _layerType;

  /// @brief Field _part, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__part, put = __cordl_internal_set__part))::UnityW<::HoudiniEngineUnity::HEU_PartData> _part;

  /// @brief Field _strength, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__strength, put = __cordl_internal_set__strength)) float_t _strength;

  /// @brief Field _terrainLayer, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__terrainLayer, put = __cordl_internal_set__terrainLayer))::UnityW<::UnityEngine::TerrainLayer> _terrainLayer;

  /// @brief Field _tile, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__tile, put = __cordl_internal_set__tile)) int32_t _tile;

  /// @brief Field _uiExpanded, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get__uiExpanded, put = __cordl_internal_set__uiExpanded)) bool _uiExpanded;

  /// @brief Field _xLength, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__xLength, put = __cordl_internal_set__xLength)) int32_t _xLength;

  /// @brief Field _yLength, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__yLength, put = __cordl_internal_set__yLength)) int32_t _yLength;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_VolumeLayer*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_VolumeLayer*>*() noexcept;

  /// @brief Method IsEquivalentTo, addr 0x23acae4, size 0x370, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_VolumeLayer* other);

  static inline ::HoudiniEngineUnity::HEU_VolumeLayer* New_ctor();

  constexpr ::HoudiniEngineUnity::HEU_DetailPrototype*& __cordl_internal_get__detailPrototype();

  constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_DetailPrototype*> const& __cordl_internal_get__detailPrototype() const;

  constexpr bool const& __cordl_internal_get__hasLayerAttributes() const;

  constexpr bool& __cordl_internal_get__hasLayerAttributes();

  constexpr ::StringW const& __cordl_internal_get__layerName() const;

  constexpr ::StringW& __cordl_internal_get__layerName();

  constexpr ::HoudiniEngineUnity::HFLayerType const& __cordl_internal_get__layerType() const;

  constexpr ::HoudiniEngineUnity::HFLayerType& __cordl_internal_get__layerType();

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_PartData> const& __cordl_internal_get__part() const;

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_PartData>& __cordl_internal_get__part();

  constexpr float_t const& __cordl_internal_get__strength() const;

  constexpr float_t& __cordl_internal_get__strength();

  constexpr ::UnityW<::UnityEngine::TerrainLayer> const& __cordl_internal_get__terrainLayer() const;

  constexpr ::UnityW<::UnityEngine::TerrainLayer>& __cordl_internal_get__terrainLayer();

  constexpr int32_t const& __cordl_internal_get__tile() const;

  constexpr int32_t& __cordl_internal_get__tile();

  constexpr bool const& __cordl_internal_get__uiExpanded() const;

  constexpr bool& __cordl_internal_get__uiExpanded();

  constexpr int32_t const& __cordl_internal_get__xLength() const;

  constexpr int32_t& __cordl_internal_get__xLength();

  constexpr int32_t const& __cordl_internal_get__yLength() const;

  constexpr int32_t& __cordl_internal_get__yLength();

  constexpr void __cordl_internal_set__detailPrototype(::HoudiniEngineUnity::HEU_DetailPrototype* value);

  constexpr void __cordl_internal_set__hasLayerAttributes(bool value);

  constexpr void __cordl_internal_set__layerName(::StringW value);

  constexpr void __cordl_internal_set__layerType(::HoudiniEngineUnity::HFLayerType value);

  constexpr void __cordl_internal_set__part(::UnityW<::HoudiniEngineUnity::HEU_PartData> value);

  constexpr void __cordl_internal_set__strength(float_t value);

  constexpr void __cordl_internal_set__terrainLayer(::UnityW<::UnityEngine::TerrainLayer> value);

  constexpr void __cordl_internal_set__tile(int32_t value);

  constexpr void __cordl_internal_set__uiExpanded(bool value);

  constexpr void __cordl_internal_set__xLength(int32_t value);

  constexpr void __cordl_internal_set__yLength(int32_t value);

  /// @brief Method .ctor, addr 0x23ace54, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_VolumeLayer*>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_VolumeLayer*>* i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__HEU_VolumeLayer__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_VolumeLayer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_VolumeLayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_VolumeLayer(HEU_VolumeLayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_VolumeLayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_VolumeLayer(HEU_VolumeLayer const&) = delete;

  /// @brief Field _layerName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____layerName;

  /// @brief Field _part, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::HoudiniEngineUnity::HEU_PartData> ____part;

  /// @brief Field _strength, offset: 0x20, size: 0x4, def value: None
  float_t ____strength;

  /// @brief Field _uiExpanded, offset: 0x24, size: 0x1, def value: None
  bool ____uiExpanded;

  /// @brief Field _tile, offset: 0x28, size: 0x4, def value: None
  int32_t ____tile;

  /// @brief Field _xLength, offset: 0x2c, size: 0x4, def value: None
  int32_t ____xLength;

  /// @brief Field _yLength, offset: 0x30, size: 0x4, def value: None
  int32_t ____yLength;

  /// @brief Field _hasLayerAttributes, offset: 0x34, size: 0x1, def value: None
  bool ____hasLayerAttributes;

  /// @brief Field _terrainLayer, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TerrainLayer> ____terrainLayer;

  /// @brief Field _layerType, offset: 0x40, size: 0x4, def value: None
  ::HoudiniEngineUnity::HFLayerType ____layerType;

  /// @brief Field _detailPrototype, offset: 0x48, size: 0x8, def value: None
  ::HoudiniEngineUnity::HEU_DetailPrototype* ____detailPrototype;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_VolumeLayer, 0x50>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_VolumeLayer, ____layerName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_VolumeLayer, ____part) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_VolumeLayer, ____strength) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_VolumeLayer, ____uiExpanded) == 0x24, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_VolumeLayer, ____tile) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_VolumeLayer, ____xLength) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_VolumeLayer, ____yLength) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_VolumeLayer, ____hasLayerAttributes) == 0x34, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_VolumeLayer, ____terrainLayer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_VolumeLayer, ____layerType) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_VolumeLayer, ____detailPrototype) == 0x48, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_VolumeLayer);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_VolumeLayer*, "HoudiniEngineUnity", "HEU_VolumeLayer");
