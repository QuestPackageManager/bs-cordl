#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_LoadBufferVolumeLayer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HFLayerType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_LoadBufferVolumeLayer)
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_LoadBufferVolumeLayer;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer);
// Type: HoudiniEngineUnity::HEU_LoadBufferVolumeLayer
// SizeInfo { instance_size: 216, native_size: -1, calculated_instance_size: 216, calculated_native_size: 216, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer*
class CORDL_TYPE HEU_LoadBufferVolumeLayer : public ::System::Object {
public:
  // Declarations
  /// @brief Field _center, offset 0xb8, size 0xc
  __declspec(property(get = __cordl_internal_get__center, put = __cordl_internal_set__center)) ::UnityEngine::Vector3 _center;

  /// @brief Field _diffuseTexturePath, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__diffuseTexturePath, put = __cordl_internal_set__diffuseTexturePath)) ::StringW _diffuseTexturePath;

  /// @brief Field _hasLayerAttributes, offset 0xd0, size 0x1
  __declspec(property(get = __cordl_internal_get__hasLayerAttributes, put = __cordl_internal_set__hasLayerAttributes)) bool _hasLayerAttributes;

  /// @brief Field _heightMapHeight, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__heightMapHeight, put = __cordl_internal_set__heightMapHeight)) int32_t _heightMapHeight;

  /// @brief Field _heightMapWidth, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__heightMapWidth, put = __cordl_internal_set__heightMapWidth)) int32_t _heightMapWidth;

  /// @brief Field _heightRange, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get__heightRange, put = __cordl_internal_set__heightRange)) float_t _heightRange;

  /// @brief Field _layerName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__layerName, put = __cordl_internal_set__layerName)) ::StringW _layerName;

  /// @brief Field _layerPath, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__layerPath, put = __cordl_internal_set__layerPath)) ::StringW _layerPath;

  /// @brief Field _layerType, offset 0xd4, size 0x4
  __declspec(property(get = __cordl_internal_get__layerType, put = __cordl_internal_set__layerType)) ::HoudiniEngineUnity::HFLayerType _layerType;

  /// @brief Field _maskTexturePath, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__maskTexturePath, put = __cordl_internal_set__maskTexturePath)) ::StringW _maskTexturePath;

  /// @brief Field _maxBounds, offset 0xac, size 0xc
  __declspec(property(get = __cordl_internal_get__maxBounds, put = __cordl_internal_set__maxBounds)) ::UnityEngine::Vector3 _maxBounds;

  /// @brief Field _maxHeight, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get__maxHeight, put = __cordl_internal_set__maxHeight)) float_t _maxHeight;

  /// @brief Field _metallic, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__metallic, put = __cordl_internal_set__metallic)) float_t _metallic;

  /// @brief Field _minBounds, offset 0xa0, size 0xc
  __declspec(property(get = __cordl_internal_get__minBounds, put = __cordl_internal_set__minBounds)) ::UnityEngine::Vector3 _minBounds;

  /// @brief Field _minHeight, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get__minHeight, put = __cordl_internal_set__minHeight)) float_t _minHeight;

  /// @brief Field _normalScale, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__normalScale, put = __cordl_internal_set__normalScale)) float_t _normalScale;

  /// @brief Field _normalTexturePath, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__normalTexturePath, put = __cordl_internal_set__normalTexturePath)) ::StringW _normalTexturePath;

  /// @brief Field _normalizedHeights, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__normalizedHeights, put = __cordl_internal_set__normalizedHeights)) ::ArrayW<float_t, ::Array<float_t>*> _normalizedHeights;

  /// @brief Field _partID, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__partID, put = __cordl_internal_set__partID)) int32_t _partID;

  /// @brief Field _position, offset 0x94, size 0xc
  __declspec(property(get = __cordl_internal_get__position, put = __cordl_internal_set__position)) ::UnityEngine::Vector3 _position;

  /// @brief Field _smoothness, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__smoothness, put = __cordl_internal_set__smoothness)) float_t _smoothness;

  /// @brief Field _specularColor, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get__specularColor, put = __cordl_internal_set__specularColor)) ::UnityEngine::Color _specularColor;

  /// @brief Field _strength, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__strength, put = __cordl_internal_set__strength)) float_t _strength;

  /// @brief Field _terrainSizeX, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get__terrainSizeX, put = __cordl_internal_set__terrainSizeX)) float_t _terrainSizeX;

  /// @brief Field _terrainSizeY, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get__terrainSizeY, put = __cordl_internal_set__terrainSizeY)) float_t _terrainSizeY;

  /// @brief Field _tile, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get__tile, put = __cordl_internal_set__tile)) int32_t _tile;

  /// @brief Field _tileOffset, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__tileOffset, put = __cordl_internal_set__tileOffset)) ::UnityEngine::Vector2 _tileOffset;

  /// @brief Field _tileSize, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__tileSize, put = __cordl_internal_set__tileSize)) ::UnityEngine::Vector2 _tileSize;

  /// @brief Field _uiExpanded, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get__uiExpanded, put = __cordl_internal_set__uiExpanded)) bool _uiExpanded;

  static inline ::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer* New_ctor();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__center() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__center();

  constexpr ::StringW const& __cordl_internal_get__diffuseTexturePath() const;

  constexpr ::StringW& __cordl_internal_get__diffuseTexturePath();

  constexpr bool const& __cordl_internal_get__hasLayerAttributes() const;

  constexpr bool& __cordl_internal_get__hasLayerAttributes();

  constexpr int32_t const& __cordl_internal_get__heightMapHeight() const;

  constexpr int32_t& __cordl_internal_get__heightMapHeight();

  constexpr int32_t const& __cordl_internal_get__heightMapWidth() const;

  constexpr int32_t& __cordl_internal_get__heightMapWidth();

  constexpr float_t const& __cordl_internal_get__heightRange() const;

  constexpr float_t& __cordl_internal_get__heightRange();

  constexpr ::StringW const& __cordl_internal_get__layerName() const;

  constexpr ::StringW& __cordl_internal_get__layerName();

  constexpr ::StringW const& __cordl_internal_get__layerPath() const;

  constexpr ::StringW& __cordl_internal_get__layerPath();

  constexpr ::HoudiniEngineUnity::HFLayerType const& __cordl_internal_get__layerType() const;

  constexpr ::HoudiniEngineUnity::HFLayerType& __cordl_internal_get__layerType();

  constexpr ::StringW const& __cordl_internal_get__maskTexturePath() const;

  constexpr ::StringW& __cordl_internal_get__maskTexturePath();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__maxBounds() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__maxBounds();

  constexpr float_t const& __cordl_internal_get__maxHeight() const;

  constexpr float_t& __cordl_internal_get__maxHeight();

  constexpr float_t const& __cordl_internal_get__metallic() const;

  constexpr float_t& __cordl_internal_get__metallic();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__minBounds() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__minBounds();

  constexpr float_t const& __cordl_internal_get__minHeight() const;

  constexpr float_t& __cordl_internal_get__minHeight();

  constexpr float_t const& __cordl_internal_get__normalScale() const;

  constexpr float_t& __cordl_internal_get__normalScale();

  constexpr ::StringW const& __cordl_internal_get__normalTexturePath() const;

  constexpr ::StringW& __cordl_internal_get__normalTexturePath();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get__normalizedHeights() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get__normalizedHeights();

  constexpr int32_t const& __cordl_internal_get__partID() const;

  constexpr int32_t& __cordl_internal_get__partID();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__position() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__position();

  constexpr float_t const& __cordl_internal_get__smoothness() const;

  constexpr float_t& __cordl_internal_get__smoothness();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__specularColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__specularColor();

  constexpr float_t const& __cordl_internal_get__strength() const;

  constexpr float_t& __cordl_internal_get__strength();

  constexpr float_t const& __cordl_internal_get__terrainSizeX() const;

  constexpr float_t& __cordl_internal_get__terrainSizeX();

  constexpr float_t const& __cordl_internal_get__terrainSizeY() const;

  constexpr float_t& __cordl_internal_get__terrainSizeY();

  constexpr int32_t const& __cordl_internal_get__tile() const;

  constexpr int32_t& __cordl_internal_get__tile();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__tileOffset() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__tileOffset();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__tileSize() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__tileSize();

  constexpr bool const& __cordl_internal_get__uiExpanded() const;

  constexpr bool& __cordl_internal_get__uiExpanded();

  constexpr void __cordl_internal_set__center(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__diffuseTexturePath(::StringW value);

  constexpr void __cordl_internal_set__hasLayerAttributes(bool value);

  constexpr void __cordl_internal_set__heightMapHeight(int32_t value);

  constexpr void __cordl_internal_set__heightMapWidth(int32_t value);

  constexpr void __cordl_internal_set__heightRange(float_t value);

  constexpr void __cordl_internal_set__layerName(::StringW value);

  constexpr void __cordl_internal_set__layerPath(::StringW value);

  constexpr void __cordl_internal_set__layerType(::HoudiniEngineUnity::HFLayerType value);

  constexpr void __cordl_internal_set__maskTexturePath(::StringW value);

  constexpr void __cordl_internal_set__maxBounds(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__maxHeight(float_t value);

  constexpr void __cordl_internal_set__metallic(float_t value);

  constexpr void __cordl_internal_set__minBounds(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__minHeight(float_t value);

  constexpr void __cordl_internal_set__normalScale(float_t value);

  constexpr void __cordl_internal_set__normalTexturePath(::StringW value);

  constexpr void __cordl_internal_set__normalizedHeights(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set__partID(int32_t value);

  constexpr void __cordl_internal_set__position(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__smoothness(float_t value);

  constexpr void __cordl_internal_set__specularColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__strength(float_t value);

  constexpr void __cordl_internal_set__terrainSizeX(float_t value);

  constexpr void __cordl_internal_set__terrainSizeY(float_t value);

  constexpr void __cordl_internal_set__tile(int32_t value);

  constexpr void __cordl_internal_set__tileOffset(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__tileSize(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__uiExpanded(bool value);

  /// @brief Method .ctor, addr 0x3a0bed0, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_LoadBufferVolumeLayer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_LoadBufferVolumeLayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_LoadBufferVolumeLayer(HEU_LoadBufferVolumeLayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_LoadBufferVolumeLayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_LoadBufferVolumeLayer(HEU_LoadBufferVolumeLayer const&) = delete;

  /// @brief Field _layerName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____layerName;

  /// @brief Field _partID, offset: 0x18, size: 0x4, def value: None
  int32_t ____partID;

  /// @brief Field _heightMapWidth, offset: 0x1c, size: 0x4, def value: None
  int32_t ____heightMapWidth;

  /// @brief Field _heightMapHeight, offset: 0x20, size: 0x4, def value: None
  int32_t ____heightMapHeight;

  /// @brief Field _strength, offset: 0x24, size: 0x4, def value: None
  float_t ____strength;

  /// @brief Field _diffuseTexturePath, offset: 0x28, size: 0x8, def value: None
  ::StringW ____diffuseTexturePath;

  /// @brief Field _maskTexturePath, offset: 0x30, size: 0x8, def value: None
  ::StringW ____maskTexturePath;

  /// @brief Field _metallic, offset: 0x38, size: 0x4, def value: None
  float_t ____metallic;

  /// @brief Field _normalTexturePath, offset: 0x40, size: 0x8, def value: None
  ::StringW ____normalTexturePath;

  /// @brief Field _normalScale, offset: 0x48, size: 0x4, def value: None
  float_t ____normalScale;

  /// @brief Field _smoothness, offset: 0x4c, size: 0x4, def value: None
  float_t ____smoothness;

  /// @brief Field _specularColor, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Color ____specularColor;

  /// @brief Field _tileSize, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____tileSize;

  /// @brief Field _tileOffset, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____tileOffset;

  /// @brief Field _uiExpanded, offset: 0x70, size: 0x1, def value: None
  bool ____uiExpanded;

  /// @brief Field _tile, offset: 0x74, size: 0x4, def value: None
  int32_t ____tile;

  /// @brief Field _normalizedHeights, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ____normalizedHeights;

  /// @brief Field _minHeight, offset: 0x80, size: 0x4, def value: None
  float_t ____minHeight;

  /// @brief Field _maxHeight, offset: 0x84, size: 0x4, def value: None
  float_t ____maxHeight;

  /// @brief Field _heightRange, offset: 0x88, size: 0x4, def value: None
  float_t ____heightRange;

  /// @brief Field _terrainSizeX, offset: 0x8c, size: 0x4, def value: None
  float_t ____terrainSizeX;

  /// @brief Field _terrainSizeY, offset: 0x90, size: 0x4, def value: None
  float_t ____terrainSizeY;

  /// @brief Field _position, offset: 0x94, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____position;

  /// @brief Field _minBounds, offset: 0xa0, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____minBounds;

  /// @brief Field _maxBounds, offset: 0xac, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____maxBounds;

  /// @brief Field _center, offset: 0xb8, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____center;

  /// @brief Field _layerPath, offset: 0xc8, size: 0x8, def value: None
  ::StringW ____layerPath;

  /// @brief Field _hasLayerAttributes, offset: 0xd0, size: 0x1, def value: None
  bool ____hasLayerAttributes;

  /// @brief Field _layerType, offset: 0xd4, size: 0x4, def value: None
  ::HoudiniEngineUnity::HFLayerType ____layerType;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11756 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer, 0xd8>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer, ____layerName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer, ____partID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer, ____heightMapWidth) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer, ____heightMapHeight) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer, ____strength) == 0x24, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer, ____diffuseTexturePath) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer, ____maskTexturePath) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer, ____metallic) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer, ____normalTexturePath) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer, ____normalScale) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer, ____smoothness) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer, ____specularColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer, ____tileSize) == 0x60, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer, ____tileOffset) == 0x68, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer, ____uiExpanded) == 0x70, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer, ____tile) == 0x74, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer, ____normalizedHeights) == 0x78, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer, ____minHeight) == 0x80, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer, ____maxHeight) == 0x84, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer, ____heightRange) == 0x88, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer, ____terrainSizeX) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer, ____terrainSizeY) == 0x90, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer, ____position) == 0x94, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer, ____minBounds) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer, ____maxBounds) == 0xac, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer, ____center) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer, ____layerPath) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer, ____hasLayerAttributes) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer, ____layerType) == 0xd4, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer*, "HoudiniEngineUnity", "HEU_LoadBufferVolumeLayer");
