#pragma once
// IWYU pragma private; include "GlobalNamespace/BakedLightDataLoader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BakedLightDataLoader)
namespace GlobalNamespace {
class LightmapDataSO;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class BakedLightDataLoader;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BakedLightDataLoader);
// Type: ::BakedLightDataLoader
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BakedLightDataLoader*
class CORDL_TYPE BakedLightDataLoader : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _blackTexture, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__blackTexture, put = __cordl_internal_set__blackTexture))::UnityW<::UnityEngine::Texture2D> _blackTexture;

  /// @brief Field _lightMap1PropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__lightMap1PropertyId, put = setStaticF__lightMap1PropertyId)) int32_t _lightMap1PropertyId;

  /// @brief Field _lightMap2PropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__lightMap2PropertyId, put = setStaticF__lightMap2PropertyId)) int32_t _lightMap2PropertyId;

  /// @brief Field _lightmapData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__lightmapData, put = __cordl_internal_set__lightmapData))::UnityW<::GlobalNamespace::LightmapDataSO> _lightmapData;

  __declspec(property(get = get_lightmapData, put = set_lightmapData))::UnityW<::GlobalNamespace::LightmapDataSO> lightmapData;

  static inline ::GlobalNamespace::BakedLightDataLoader* New_ctor();

  /// @brief Method SetTextureDataToShaders, addr 0x26abcec, size 0x13c, virtual false, abstract: false, final false
  inline void SetTextureDataToShaders();

  /// @brief Method Start, addr 0x26abc34, size 0xb8, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__blackTexture() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__blackTexture();

  constexpr ::UnityW<::GlobalNamespace::LightmapDataSO> const& __cordl_internal_get__lightmapData() const;

  constexpr ::UnityW<::GlobalNamespace::LightmapDataSO>& __cordl_internal_get__lightmapData();

  constexpr void __cordl_internal_set__blackTexture(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set__lightmapData(::UnityW<::GlobalNamespace::LightmapDataSO> value);

  /// @brief Method .ctor, addr 0x26abe28, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF__lightMap1PropertyId();

  static inline int32_t getStaticF__lightMap2PropertyId();

  /// @brief Method get_lightmapData, addr 0x26abc24, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::LightmapDataSO> get_lightmapData();

  static inline void setStaticF__lightMap1PropertyId(int32_t value);

  static inline void setStaticF__lightMap2PropertyId(int32_t value);

  /// @brief Method set_lightmapData, addr 0x26abc2c, size 0x8, virtual false, abstract: false, final false
  inline void set_lightmapData(::GlobalNamespace::LightmapDataSO* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BakedLightDataLoader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BakedLightDataLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BakedLightDataLoader(BakedLightDataLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BakedLightDataLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BakedLightDataLoader(BakedLightDataLoader const&) = delete;

  /// @brief Field _lightmapData, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LightmapDataSO> ____lightmapData;

  /// @brief Field _blackTexture, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ____blackTexture;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BakedLightDataLoader, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BakedLightDataLoader, ____lightmapData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakedLightDataLoader, ____blackTexture) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BakedLightDataLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BakedLightDataLoader*, "", "BakedLightDataLoader");
