#pragma once
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5851))
// CS Name: ::BakedLightDataLoader*
class CORDL_TYPE BakedLightDataLoader : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _lightmapData, offset 0x18, size 0x8
  __declspec(property(get = __get__lightmapData, put = __set__lightmapData))::GlobalNamespace::LightmapDataSO* _lightmapData;

  /// @brief Field _blackTexture, offset 0x20, size 0x8
  __declspec(property(get = __get__blackTexture, put = __set__blackTexture))::UnityEngine::Texture2D* _blackTexture;

  /// @brief Field _lightMap1PropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__lightMap1PropertyId, put = setStaticF__lightMap1PropertyId)) int32_t _lightMap1PropertyId;

  /// @brief Field _lightMap2PropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__lightMap2PropertyId, put = setStaticF__lightMap2PropertyId)) int32_t _lightMap2PropertyId;

  __declspec(property(get = get_lightmapData, put = set_lightmapData))::GlobalNamespace::LightmapDataSO* lightmapData;

  constexpr ::GlobalNamespace::LightmapDataSO*& __get__lightmapData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LightmapDataSO*> const& __get__lightmapData() const;

  constexpr void __set__lightmapData(::GlobalNamespace::LightmapDataSO* value);

  constexpr ::UnityEngine::Texture2D*& __get__blackTexture();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture2D*> const& __get__blackTexture() const;

  constexpr void __set__blackTexture(::UnityEngine::Texture2D* value);

  static inline void setStaticF__lightMap1PropertyId(int32_t value);

  static inline int32_t getStaticF__lightMap1PropertyId();

  static inline void setStaticF__lightMap2PropertyId(int32_t value);

  static inline int32_t getStaticF__lightMap2PropertyId();

  /// @brief Method get_lightmapData, addr 0x22f570c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::LightmapDataSO* get_lightmapData();

  /// @brief Method set_lightmapData, addr 0x22f5714, size 0x8, virtual false, abstract: false, final false
  inline void set_lightmapData(::GlobalNamespace::LightmapDataSO* value);

  /// @brief Method Start, addr 0x22f571c, size 0xb8, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method SetTextureDataToShaders, addr 0x22f57d4, size 0x13c, virtual false, abstract: false, final false
  inline void SetTextureDataToShaders();

  static inline ::GlobalNamespace::BakedLightDataLoader* New_ctor();

  /// @brief Method .ctor, addr 0x22f5910, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BakedLightDataLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BakedLightDataLoader(BakedLightDataLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BakedLightDataLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BakedLightDataLoader(BakedLightDataLoader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BakedLightDataLoader();

public:
  /// @brief Field _lightmapData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::LightmapDataSO* ____lightmapData;

  /// @brief Field _blackTexture, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Texture2D* ____blackTexture;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BakedLightDataLoader, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BakedLightDataLoader, ____lightmapData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakedLightDataLoader, ____blackTexture) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BakedLightDataLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BakedLightDataLoader*, "", "BakedLightDataLoader");
