#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TerrainLayer)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine {
class TerrainLayer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TerrainLayer);
// Type: UnityEngine::TerrainLayer
// SizeInfo { instance_size: 24, native_size: 8, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10200))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15465))
// CS Name: ::UnityEngine::TerrainLayer*
class CORDL_TYPE TerrainLayer : public ::UnityEngine::Object {
public:
  // Declarations
  __declspec(property(get = get_diffuseTexture, put = set_diffuseTexture))::UnityEngine::Texture2D* diffuseTexture;

  __declspec(property(get = get_normalMapTexture, put = set_normalMapTexture))::UnityEngine::Texture2D* normalMapTexture;

  __declspec(property(get = get_maskMapTexture, put = set_maskMapTexture))::UnityEngine::Texture2D* maskMapTexture;

  __declspec(property(get = get_tileSize, put = set_tileSize))::UnityEngine::Vector2 tileSize;

  __declspec(property(get = get_tileOffset, put = set_tileOffset))::UnityEngine::Vector2 tileOffset;

  __declspec(property(get = get_specular, put = set_specular))::UnityEngine::Color specular;

  __declspec(property(get = get_metallic, put = set_metallic)) float_t metallic;

  __declspec(property(get = get_smoothness, put = set_smoothness)) float_t smoothness;

  __declspec(property(put = set_normalScale)) float_t normalScale;

  __declspec(property(put = set_diffuseRemapMin))::UnityEngine::Vector4 diffuseRemapMin;

  __declspec(property(put = set_diffuseRemapMax))::UnityEngine::Vector4 diffuseRemapMax;

  __declspec(property(put = set_maskMapRemapMin))::UnityEngine::Vector4 maskMapRemapMin;

  __declspec(property(put = set_maskMapRemapMax))::UnityEngine::Vector4 maskMapRemapMax;

  static inline ::UnityEngine::TerrainLayer* New_ctor();

  /// @brief Method .ctor, addr 0x2d1b5d8, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Internal_Create, addr 0x2d1b658, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_Create(::UnityEngine::TerrainLayer* layer);

  /// @brief Method get_diffuseTexture, addr 0x2d1b694, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Texture2D* get_diffuseTexture();

  /// @brief Method set_diffuseTexture, addr 0x2d1b6d0, size 0x44, virtual false, abstract: false, final false
  inline void set_diffuseTexture(::UnityEngine::Texture2D* value);

  /// @brief Method get_normalMapTexture, addr 0x2d1b714, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Texture2D* get_normalMapTexture();

  /// @brief Method set_normalMapTexture, addr 0x2d1b750, size 0x44, virtual false, abstract: false, final false
  inline void set_normalMapTexture(::UnityEngine::Texture2D* value);

  /// @brief Method get_maskMapTexture, addr 0x2d1b794, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Texture2D* get_maskMapTexture();

  /// @brief Method set_maskMapTexture, addr 0x2d1b7d0, size 0x44, virtual false, abstract: false, final false
  inline void set_maskMapTexture(::UnityEngine::Texture2D* value);

  /// @brief Method get_tileSize, addr 0x2d1b814, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_tileSize();

  /// @brief Method set_tileSize, addr 0x2d1b8a4, size 0x48, virtual false, abstract: false, final false
  inline void set_tileSize(::UnityEngine::Vector2 value);

  /// @brief Method get_tileOffset, addr 0x2d1b930, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_tileOffset();

  /// @brief Method set_tileOffset, addr 0x2d1b9c0, size 0x48, virtual false, abstract: false, final false
  inline void set_tileOffset(::UnityEngine::Vector2 value);

  /// @brief Method get_specular, addr 0x2d1ba4c, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_specular();

  /// @brief Method set_specular, addr 0x2d1bae8, size 0x54, virtual false, abstract: false, final false
  inline void set_specular(::UnityEngine::Color value);

  /// @brief Method get_metallic, addr 0x2d1bb80, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_metallic();

  /// @brief Method set_metallic, addr 0x2d1bbbc, size 0x4c, virtual false, abstract: false, final false
  inline void set_metallic(float_t value);

  /// @brief Method get_smoothness, addr 0x2d1bc08, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_smoothness();

  /// @brief Method set_smoothness, addr 0x2d1bc44, size 0x4c, virtual false, abstract: false, final false
  inline void set_smoothness(float_t value);

  /// @brief Method set_normalScale, addr 0x2d1bc90, size 0x4c, virtual false, abstract: false, final false
  inline void set_normalScale(float_t value);

  /// @brief Method set_diffuseRemapMin, addr 0x2d1bcdc, size 0x54, virtual false, abstract: false, final false
  inline void set_diffuseRemapMin(::UnityEngine::Vector4 value);

  /// @brief Method set_diffuseRemapMax, addr 0x2d1bd74, size 0x54, virtual false, abstract: false, final false
  inline void set_diffuseRemapMax(::UnityEngine::Vector4 value);

  /// @brief Method set_maskMapRemapMin, addr 0x2d1be0c, size 0x54, virtual false, abstract: false, final false
  inline void set_maskMapRemapMin(::UnityEngine::Vector4 value);

  /// @brief Method set_maskMapRemapMax, addr 0x2d1bea4, size 0x54, virtual false, abstract: false, final false
  inline void set_maskMapRemapMax(::UnityEngine::Vector4 value);

  /// @brief Method get_tileSize_Injected, addr 0x2d1b860, size 0x44, virtual false, abstract: false, final false
  inline void get_tileSize_Injected(ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method set_tileSize_Injected, addr 0x2d1b8ec, size 0x44, virtual false, abstract: false, final false
  inline void set_tileSize_Injected(ByRef<::UnityEngine::Vector2> value);

  /// @brief Method get_tileOffset_Injected, addr 0x2d1b97c, size 0x44, virtual false, abstract: false, final false
  inline void get_tileOffset_Injected(ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method set_tileOffset_Injected, addr 0x2d1ba08, size 0x44, virtual false, abstract: false, final false
  inline void set_tileOffset_Injected(ByRef<::UnityEngine::Vector2> value);

  /// @brief Method get_specular_Injected, addr 0x2d1baa4, size 0x44, virtual false, abstract: false, final false
  inline void get_specular_Injected(ByRef<::UnityEngine::Color> ret);

  /// @brief Method set_specular_Injected, addr 0x2d1bb3c, size 0x44, virtual false, abstract: false, final false
  inline void set_specular_Injected(ByRef<::UnityEngine::Color> value);

  /// @brief Method set_diffuseRemapMin_Injected, addr 0x2d1bd30, size 0x44, virtual false, abstract: false, final false
  inline void set_diffuseRemapMin_Injected(ByRef<::UnityEngine::Vector4> value);

  /// @brief Method set_diffuseRemapMax_Injected, addr 0x2d1bdc8, size 0x44, virtual false, abstract: false, final false
  inline void set_diffuseRemapMax_Injected(ByRef<::UnityEngine::Vector4> value);

  /// @brief Method set_maskMapRemapMin_Injected, addr 0x2d1be60, size 0x44, virtual false, abstract: false, final false
  inline void set_maskMapRemapMin_Injected(ByRef<::UnityEngine::Vector4> value);

  /// @brief Method set_maskMapRemapMax_Injected, addr 0x2d1bef8, size 0x44, virtual false, abstract: false, final false
  inline void set_maskMapRemapMax_Injected(ByRef<::UnityEngine::Vector4> value);

  // Ctor Parameters [CppParam { name: "", ty: "TerrainLayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TerrainLayer(TerrainLayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TerrainLayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TerrainLayer(TerrainLayer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TerrainLayer();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TerrainLayer, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::TerrainLayer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TerrainLayer*, "UnityEngine", "TerrainLayer");
