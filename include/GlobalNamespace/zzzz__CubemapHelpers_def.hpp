#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CubemapHelpers)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct CubemapFace;
}
// Forward declare root types
namespace GlobalNamespace {
class CubemapHelpers;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CubemapHelpers);
// Type: ::CubemapHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5856))
// CS Name: ::CubemapHelpers*
class CORDL_TYPE CubemapHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Field _cubemapHelpersMaterial, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__cubemapHelpersMaterial, put = setStaticF__cubemapHelpersMaterial))::UnityEngine::Material* _cubemapHelpersMaterial;

  /// @brief Field _cubePropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__cubePropertyId, put = setStaticF__cubePropertyId)) int32_t _cubePropertyId;

  /// @brief Field _cubeFaceNumberId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__cubeFaceNumberId, put = setStaticF__cubeFaceNumberId)) int32_t _cubeFaceNumberId;

  /// @brief Field _cubemapFaceToCubeFaceNumberDict, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__cubemapFaceToCubeFaceNumberDict,
                             put = setStaticF__cubemapFaceToCubeFaceNumberDict))::System::Collections::Generic::Dictionary_2<::UnityEngine::CubemapFace, int32_t>* _cubemapFaceToCubeFaceNumberDict;

  /// @brief Field _cubemapFaces, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__cubemapFaces, put = setStaticF__cubemapFaces))::ArrayW<::UnityEngine::CubemapFace, ::Array<::UnityEngine::CubemapFace>*> _cubemapFaces;

  static inline void setStaticF__cubemapHelpersMaterial(::UnityEngine::Material* value);

  static inline ::UnityEngine::Material* getStaticF__cubemapHelpersMaterial();

  static inline void setStaticF__cubePropertyId(int32_t value);

  static inline int32_t getStaticF__cubePropertyId();

  static inline void setStaticF__cubeFaceNumberId(int32_t value);

  static inline int32_t getStaticF__cubeFaceNumberId();

  static inline void setStaticF__cubemapFaceToCubeFaceNumberDict(::System::Collections::Generic::Dictionary_2<::UnityEngine::CubemapFace, int32_t>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::CubemapFace, int32_t>* getStaticF__cubemapFaceToCubeFaceNumberDict();

  static inline void setStaticF__cubemapFaces(::ArrayW<::UnityEngine::CubemapFace, ::Array<::UnityEngine::CubemapFace>*> value);

  static inline ::ArrayW<::UnityEngine::CubemapFace, ::Array<::UnityEngine::CubemapFace>*> getStaticF__cubemapFaces();

  /// @brief Method get_cubemapHelpersMaterial, addr 0x22f6bc4, size 0x128, virtual false, abstract: false, final false
  static inline ::UnityEngine::Material* get_cubemapHelpersMaterial();

  /// @brief Method Downsample, addr 0x22f6cec, size 0x12c, virtual false, abstract: false, final false
  static inline void Downsample(::UnityEngine::Texture* src, ::UnityEngine::RenderTexture* dest);

  /// @brief Method CreateDownsampledCubemap, addr 0x22f6fc8, size 0x1ec, virtual false, abstract: false, final false
  static inline ::UnityEngine::RenderTexture* CreateDownsampledCubemap(::UnityEngine::RenderTexture* src, int32_t count);

  /// @brief Method Create2DTextureFromCubemap, addr 0x22f71b4, size 0x170, virtual false, abstract: false, final false
  static inline ::UnityEngine::RenderTexture* Create2DTextureFromCubemap(::UnityEngine::RenderTexture* src);

  /// @brief Method DrawCubemapFace, addr 0x22f6e18, size 0x1b0, virtual false, abstract: false, final false
  static inline void DrawCubemapFace(::UnityEngine::Texture* cubemap, ::UnityEngine::CubemapFace cubemapFace);

  // Ctor Parameters [CppParam { name: "", ty: "CubemapHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CubemapHelpers(CubemapHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CubemapHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CubemapHelpers(CubemapHelpers const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CubemapHelpers();

public:
  /// @brief Field kCubemapHelpersShaderName offset 0xffffffff size 0x8
  static constexpr ::ConstString kCubemapHelpersShaderName{ u"Hidden/CubemapHelpers" };

  /// @brief Field kCubemapDownsamplePass offset 0xffffffff size 0x4
  static constexpr int32_t kCubemapDownsamplePass{ static_cast<int32_t>(0x0) };

  /// @brief Field kCubemapTo2DTexturePass offset 0xffffffff size 0x4
  static constexpr int32_t kCubemapTo2DTexturePass{ static_cast<int32_t>(0x1) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CubemapHelpers, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CubemapHelpers);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CubemapHelpers*, "", "CubemapHelpers");
