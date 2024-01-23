#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarVisualPropertyIds)
// Forward declare root types
namespace GlobalNamespace {
class AvatarVisualPropertyIds;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AvatarVisualPropertyIds);
// Type: ::AvatarVisualPropertyIds
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15161))
// CS Name: ::AvatarVisualPropertyIds*
class CORDL_TYPE AvatarVisualPropertyIds : public ::System::Object {
public:
  // Declarations
  /// @brief Field keywordPointLightPrivate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_keywordPointLightPrivate, put = setStaticF_keywordPointLightPrivate))::StringW keywordPointLightPrivate;

  /// @brief Field kUvColorsPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_kUvColorsPropertyId, put = setStaticF_kUvColorsPropertyId)) int32_t kUvColorsPropertyId;

  /// @brief Field uvRimLightColorsPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_uvRimLightColorsPropertyId, put = setStaticF_uvRimLightColorsPropertyId)) int32_t uvRimLightColorsPropertyId;

  /// @brief Field colorPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_colorPropertyId, put = setStaticF_colorPropertyId)) int32_t colorPropertyId;

  /// @brief Field rimLightColorPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_rimLightColorPropertyId, put = setStaticF_rimLightColorPropertyId)) int32_t rimLightColorPropertyId;

  /// @brief Field rimLightEdgeStartPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_rimLightEdgeStartPropertyId, put = setStaticF_rimLightEdgeStartPropertyId)) int32_t rimLightEdgeStartPropertyId;

  /// @brief Field segmentToHighlightPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_segmentToHighlightPropertyId, put = setStaticF_segmentToHighlightPropertyId)) int32_t segmentToHighlightPropertyId;

  /// @brief Field enableReflectionTexturePropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_enableReflectionTexturePropertyId, put = setStaticF_enableReflectionTexturePropertyId)) int32_t enableReflectionTexturePropertyId;

  /// @brief Field enableReflectionProbePropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_enableReflectionProbePropertyId, put = setStaticF_enableReflectionProbePropertyId)) int32_t enableReflectionProbePropertyId;

  /// @brief Field hologramColorPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_hologramColorPropertyId, put = setStaticF_hologramColorPropertyId)) int32_t hologramColorPropertyId;

  /// @brief Field haloHighlightColorPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_haloHighlightColorPropertyId, put = setStaticF_haloHighlightColorPropertyId)) int32_t haloHighlightColorPropertyId;

  /// @brief Field haloBaseColorPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_haloBaseColorPropertyId, put = setStaticF_haloBaseColorPropertyId)) int32_t haloBaseColorPropertyId;

  /// @brief Field hologramPhaseOffsetPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_hologramPhaseOffsetPropertyId, put = setStaticF_hologramPhaseOffsetPropertyId)) int32_t hologramPhaseOffsetPropertyId;

  /// @brief Field hologramStripeSpeedPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_hologramStripeSpeedPropertyId, put = setStaticF_hologramStripeSpeedPropertyId)) int32_t hologramStripeSpeedPropertyId;

  /// @brief Field hologramFillPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_hologramFillPropertyId, put = setStaticF_hologramFillPropertyId)) int32_t hologramFillPropertyId;

  /// @brief Field holoMaterializePropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_holoMaterializePropertyId, put = setStaticF_holoMaterializePropertyId)) int32_t holoMaterializePropertyId;

  /// @brief Field holoHaltScanPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_holoHaltScanPropertyId, put = setStaticF_holoHaltScanPropertyId)) int32_t holoHaltScanPropertyId;

  /// @brief Field nominalDiffuseLevelPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_nominalDiffuseLevelPropertyId, put = setStaticF_nominalDiffuseLevelPropertyId)) int32_t nominalDiffuseLevelPropertyId;

  /// @brief Field enviroPrivatePointLightColorPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_enviroPrivatePointLightColorPropertyId, put = setStaticF_enviroPrivatePointLightColorPropertyId)) int32_t enviroPrivatePointLightColorPropertyId;

  /// @brief Field nametagPrivatePointLight, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_nametagPrivatePointLight, put = setStaticF_nametagPrivatePointLight)) int32_t nametagPrivatePointLight;

  /// @brief Field nametagPrivatePointLightColor, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_nametagPrivatePointLightColor, put = setStaticF_nametagPrivatePointLightColor)) int32_t nametagPrivatePointLightColor;

  /// @brief Field nametagPointLightPositionLocal, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_nametagPointLightPositionLocal, put = setStaticF_nametagPointLightPositionLocal)) int32_t nametagPointLightPositionLocal;

  /// @brief Field nametagPrivatePointLightPosition, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_nametagPrivatePointLightPosition, put = setStaticF_nametagPrivatePointLightPosition)) int32_t nametagPrivatePointLightPosition;

  /// @brief Field nametagEnableReflectionProbe, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_nametagEnableReflectionProbe, put = setStaticF_nametagEnableReflectionProbe)) int32_t nametagEnableReflectionProbe;

  static inline void setStaticF_keywordPointLightPrivate(::StringW value);

  static inline ::StringW getStaticF_keywordPointLightPrivate();

  static inline void setStaticF_kUvColorsPropertyId(int32_t value);

  static inline int32_t getStaticF_kUvColorsPropertyId();

  static inline void setStaticF_uvRimLightColorsPropertyId(int32_t value);

  static inline int32_t getStaticF_uvRimLightColorsPropertyId();

  static inline void setStaticF_colorPropertyId(int32_t value);

  static inline int32_t getStaticF_colorPropertyId();

  static inline void setStaticF_rimLightColorPropertyId(int32_t value);

  static inline int32_t getStaticF_rimLightColorPropertyId();

  static inline void setStaticF_rimLightEdgeStartPropertyId(int32_t value);

  static inline int32_t getStaticF_rimLightEdgeStartPropertyId();

  static inline void setStaticF_segmentToHighlightPropertyId(int32_t value);

  static inline int32_t getStaticF_segmentToHighlightPropertyId();

  static inline void setStaticF_enableReflectionTexturePropertyId(int32_t value);

  static inline int32_t getStaticF_enableReflectionTexturePropertyId();

  static inline void setStaticF_enableReflectionProbePropertyId(int32_t value);

  static inline int32_t getStaticF_enableReflectionProbePropertyId();

  static inline void setStaticF_hologramColorPropertyId(int32_t value);

  static inline int32_t getStaticF_hologramColorPropertyId();

  static inline void setStaticF_haloHighlightColorPropertyId(int32_t value);

  static inline int32_t getStaticF_haloHighlightColorPropertyId();

  static inline void setStaticF_haloBaseColorPropertyId(int32_t value);

  static inline int32_t getStaticF_haloBaseColorPropertyId();

  static inline void setStaticF_hologramPhaseOffsetPropertyId(int32_t value);

  static inline int32_t getStaticF_hologramPhaseOffsetPropertyId();

  static inline void setStaticF_hologramStripeSpeedPropertyId(int32_t value);

  static inline int32_t getStaticF_hologramStripeSpeedPropertyId();

  static inline void setStaticF_hologramFillPropertyId(int32_t value);

  static inline int32_t getStaticF_hologramFillPropertyId();

  static inline void setStaticF_holoMaterializePropertyId(int32_t value);

  static inline int32_t getStaticF_holoMaterializePropertyId();

  static inline void setStaticF_holoHaltScanPropertyId(int32_t value);

  static inline int32_t getStaticF_holoHaltScanPropertyId();

  static inline void setStaticF_nominalDiffuseLevelPropertyId(int32_t value);

  static inline int32_t getStaticF_nominalDiffuseLevelPropertyId();

  static inline void setStaticF_enviroPrivatePointLightColorPropertyId(int32_t value);

  static inline int32_t getStaticF_enviroPrivatePointLightColorPropertyId();

  static inline void setStaticF_nametagPrivatePointLight(int32_t value);

  static inline int32_t getStaticF_nametagPrivatePointLight();

  static inline void setStaticF_nametagPrivatePointLightColor(int32_t value);

  static inline int32_t getStaticF_nametagPrivatePointLightColor();

  static inline void setStaticF_nametagPointLightPositionLocal(int32_t value);

  static inline int32_t getStaticF_nametagPointLightPositionLocal();

  static inline void setStaticF_nametagPrivatePointLightPosition(int32_t value);

  static inline int32_t getStaticF_nametagPrivatePointLightPosition();

  static inline void setStaticF_nametagEnableReflectionProbe(int32_t value);

  static inline int32_t getStaticF_nametagEnableReflectionProbe();

  // Ctor Parameters [CppParam { name: "", ty: "AvatarVisualPropertyIds", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarVisualPropertyIds(AvatarVisualPropertyIds&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarVisualPropertyIds", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarVisualPropertyIds(AvatarVisualPropertyIds const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarVisualPropertyIds();

public:
  /// @brief Field kKeywordPointLightIsLocal offset 0xffffffff size 0x8
  static constexpr ::ConstString kKeywordPointLightIsLocal{ u"POINT_LIGHT_IS_LOCAL" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AvatarVisualPropertyIds, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AvatarVisualPropertyIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarVisualPropertyIds*, "", "AvatarVisualPropertyIds");
