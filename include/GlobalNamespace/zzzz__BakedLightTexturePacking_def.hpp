#pragma once
// IWYU pragma private; include "GlobalNamespace/BakedLightTexturePacking.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BakedLightTexturePacking)
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace GlobalNamespace {
class BakedLightTexturePacking;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BakedLightTexturePacking);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BakedLightTexturePacking
class CORDL_TYPE BakedLightTexturePacking : public ::System::Object {
public:
  // Declarations
  /// @brief Field _material, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__material, put = setStaticF__material)) ::UnityW<::UnityEngine::Material> _material;

  /// @brief Field _texPropertyIds, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__texPropertyIds, put = setStaticF__texPropertyIds)) ::ArrayW<int32_t, ::Array<int32_t>*> _texPropertyIds;

  /// @brief Method PackTextures, addr 0x3b0f1d0, size 0x348, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> PackTextures(::System::Collections::Generic::IReadOnlyList_1<::UnityW<::UnityEngine::RenderTexture>>* textures,
                                                                    ::UnityEngine::RenderTextureDescriptor descriptor);

  static inline ::UnityW<::UnityEngine::Material> getStaticF__material();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF__texPropertyIds();

  static inline void setStaticF__material(::UnityW<::UnityEngine::Material> value);

  static inline void setStaticF__texPropertyIds(::ArrayW<int32_t, ::Array<int32_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BakedLightTexturePacking();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BakedLightTexturePacking", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BakedLightTexturePacking(BakedLightTexturePacking&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BakedLightTexturePacking", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BakedLightTexturePacking(BakedLightTexturePacking const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5050 };

  /// @brief Field kBakedLightTexturePackingShaderName offset 0xffffffff size 0x8
  static constexpr ::ConstString kBakedLightTexturePackingShaderName{ u"Hidden/BakedLightTexturePacking" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BakedLightTexturePacking, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BakedLightTexturePacking);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BakedLightTexturePacking*, "", "BakedLightTexturePacking");
