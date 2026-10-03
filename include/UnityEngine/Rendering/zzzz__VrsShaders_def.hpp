#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/VrsShaders.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VrsShaders)
// Forward declare root types
namespace UnityEngine::Rendering {
class VrsShaders;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::VrsShaders*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::VrsShaders*, "UnityEngine.Rendering", "VrsShaders");
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.VrsShaders
class CORDL_TYPE VrsShaders : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_MainTex, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_MainTex, put = setStaticF_s_MainTex)) int32_t s_MainTex;

  /// @brief Field s_MainTexLut, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_MainTexLut, put = setStaticF_s_MainTexLut)) int32_t s_MainTexLut;

  /// @brief Field s_ScaleBias, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_ScaleBias, put = setStaticF_s_ScaleBias)) int32_t s_ScaleBias;

  /// @brief Field s_ShadingRateImage, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_ShadingRateImage, put = setStaticF_s_ShadingRateImage)) int32_t s_ShadingRateImage;

  /// @brief Field s_ShadingRateNativeValues, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_ShadingRateNativeValues, put = setStaticF_s_ShadingRateNativeValues)) int32_t s_ShadingRateNativeValues;

  /// @brief Field s_VisualizationLut, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_VisualizationLut, put = setStaticF_s_VisualizationLut)) int32_t s_VisualizationLut;

  /// @brief Field s_VisualizationParams, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_VisualizationParams, put = setStaticF_s_VisualizationParams)) int32_t s_VisualizationParams;

  static inline int32_t getStaticF_s_MainTex();

  static inline int32_t getStaticF_s_MainTexLut();

  static inline int32_t getStaticF_s_ScaleBias();

  static inline int32_t getStaticF_s_ShadingRateImage();

  static inline int32_t getStaticF_s_ShadingRateNativeValues();

  static inline int32_t getStaticF_s_VisualizationLut();

  static inline int32_t getStaticF_s_VisualizationParams();

  static inline void setStaticF_s_MainTex(int32_t value);

  static inline void setStaticF_s_MainTexLut(int32_t value);

  static inline void setStaticF_s_ScaleBias(int32_t value);

  static inline void setStaticF_s_ShadingRateImage(int32_t value);

  static inline void setStaticF_s_ShadingRateNativeValues(int32_t value);

  static inline void setStaticF_s_VisualizationLut(int32_t value);

  static inline void setStaticF_s_VisualizationParams(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VrsShaders();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VrsShaders", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VrsShaders(VrsShaders&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VrsShaders", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VrsShaders(VrsShaders const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9267 };

  /// @brief Field k_DisableTexture2dXArray offset 0xffffffff size 0x8
  static constexpr ::ConstString k_DisableTexture2dXArray{ u"DISABLE_TEXTURE2D_X_ARRAY" };

  /// @brief Field k_KernelTextureCopy offset 0xffffffff size 0x8
  static constexpr ::ConstString k_KernelTextureCopy{ u"TextureCopy" };

  /// @brief Field k_KernelTextureReduce offset 0xffffffff size 0x8
  static constexpr ::ConstString k_KernelTextureReduce{ u"TextureReduce" };

  /// @brief Field k_TileSizePrefix offset 0xffffffff size 0x8
  static constexpr ::ConstString k_TileSizePrefix{ u"VRS_TILE_SIZE_" };

  /// @brief Field k_YFlip offset 0xffffffff size 0x8
  static constexpr ::ConstString k_YFlip{ u"APPLY_Y_FLIP" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::VrsShaders) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
