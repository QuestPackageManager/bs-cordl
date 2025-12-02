#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/PostProcessUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PostProcessUtils)
namespace UnityEngine::Rendering::Universal {
class FilmGrain;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessUtils_ShaderConstants;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
class RasterCommandBuffer;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class PostProcessUtils;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessUtils_ShaderConstants;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::PostProcessUtils);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants);
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessUtils/ShaderConstants
class CORDL_TYPE PostProcessUtils_ShaderConstants : public ::System::Object {
public:
  // Declarations
  /// @brief Field _BlueNoise_Texture, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__BlueNoise_Texture, put = setStaticF__BlueNoise_Texture)) int32_t _BlueNoise_Texture;

  /// @brief Field _Dithering_Params, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Dithering_Params, put = setStaticF__Dithering_Params)) int32_t _Dithering_Params;

  /// @brief Field _Grain_Params, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Grain_Params, put = setStaticF__Grain_Params)) int32_t _Grain_Params;

  /// @brief Field _Grain_Texture, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Grain_Texture, put = setStaticF__Grain_Texture)) int32_t _Grain_Texture;

  /// @brief Field _Grain_TilingParams, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Grain_TilingParams, put = setStaticF__Grain_TilingParams)) int32_t _Grain_TilingParams;

  /// @brief Field _SourceSize, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__SourceSize, put = setStaticF__SourceSize)) int32_t _SourceSize;

  static inline int32_t getStaticF__BlueNoise_Texture();

  static inline int32_t getStaticF__Dithering_Params();

  static inline int32_t getStaticF__Grain_Params();

  static inline int32_t getStaticF__Grain_Texture();

  static inline int32_t getStaticF__Grain_TilingParams();

  static inline int32_t getStaticF__SourceSize();

  static inline void setStaticF__BlueNoise_Texture(int32_t value);

  static inline void setStaticF__Dithering_Params(int32_t value);

  static inline void setStaticF__Grain_Params(int32_t value);

  static inline void setStaticF__Grain_Texture(int32_t value);

  static inline void setStaticF__Grain_TilingParams(int32_t value);

  static inline void setStaticF__SourceSize(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessUtils_ShaderConstants();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessUtils_ShaderConstants", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessUtils_ShaderConstants(PostProcessUtils_ShaderConstants&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessUtils_ShaderConstants", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessUtils_ShaderConstants(PostProcessUtils_ShaderConstants const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12866 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessUtils
class CORDL_TYPE PostProcessUtils : public ::System::Object {
public:
  // Declarations
  using ShaderConstants = ::UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants;

  /// @brief Method ConfigureDithering, addr 0x668b4a4, size 0x64, virtual false, abstract: false, final false
  static inline int32_t ConfigureDithering(::UnityEngine::Rendering::Universal::PostProcessData* data, int32_t index, ::UnityEngine::Camera* camera, ::UnityEngine::Material* material);

  /// @brief Method ConfigureDithering, addr 0x668b508, size 0x224, virtual false, abstract: false, final false
  static inline int32_t ConfigureDithering(::UnityEngine::Rendering::Universal::PostProcessData* data, int32_t index, int32_t cameraPixelWidth, int32_t cameraPixelHeight,
                                           ::UnityEngine::Material* material);

  /// @brief Method ConfigureFilmGrain, addr 0x668b72c, size 0x64, virtual false, abstract: false, final false
  static inline void ConfigureFilmGrain(::UnityEngine::Rendering::Universal::PostProcessData* data, ::UnityEngine::Rendering::Universal::FilmGrain* settings, ::UnityEngine::Camera* camera,
                                        ::UnityEngine::Material* material);

  /// @brief Method ConfigureFilmGrain, addr 0x668b790, size 0x354, virtual false, abstract: false, final false
  static inline void ConfigureFilmGrain(::UnityEngine::Rendering::Universal::PostProcessData* data, ::UnityEngine::Rendering::Universal::FilmGrain* settings, int32_t cameraPixelWidth,
                                        int32_t cameraPixelHeight, ::UnityEngine::Material* material);

  /// @brief Method SetSourceSize, addr 0x667ec98, size 0x70, virtual false, abstract: false, final false
  static inline void SetSourceSize(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source);

  /// @brief Method SetSourceSize, addr 0x667f7e8, size 0x144, virtual false, abstract: false, final false
  static inline void SetSourceSize(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessUtils(PostProcessUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessUtils(PostProcessUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12867 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::PostProcessUtils, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::PostProcessUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PostProcessUtils*, "UnityEngine.Rendering.Universal", "PostProcessUtils");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants*, "UnityEngine.Rendering.Universal", "PostProcessUtils/ShaderConstants");
