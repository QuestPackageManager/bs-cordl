#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BakedLightTexturePacking)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BakedLightTexturePacking;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BakedLightTexturePacking);
// Type: ::BakedLightTexturePacking
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5852))
// CS Name: ::BakedLightTexturePacking*
class CORDL_TYPE BakedLightTexturePacking : public ::System::Object {
public:
  // Declarations
  /// @brief Field _texPropertyIds, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__texPropertyIds, put = setStaticF__texPropertyIds))::ArrayW<int32_t, ::Array<int32_t>*> _texPropertyIds;

  /// @brief Field _material, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__material, put = setStaticF__material))::UnityEngine::Material* _material;

  static inline void setStaticF__texPropertyIds(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF__texPropertyIds();

  static inline void setStaticF__material(::UnityEngine::Material* value);

  static inline ::UnityEngine::Material* getStaticF__material();

  /// @brief Method PackTextures, addr 0x22f59b4, size 0x36c, virtual false, abstract: false, final false
  static inline ::UnityEngine::RenderTexture* PackTextures(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::RenderTexture*>* textures, ::UnityEngine::RenderTextureDescriptor descriptor);

  // Ctor Parameters [CppParam { name: "", ty: "BakedLightTexturePacking", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BakedLightTexturePacking(BakedLightTexturePacking&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BakedLightTexturePacking", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BakedLightTexturePacking(BakedLightTexturePacking const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BakedLightTexturePacking();

public:
  /// @brief Field kBakedLightTexturePackingShaderName offset 0xffffffff size 0x8
  static constexpr ::ConstString kBakedLightTexturePackingShaderName{ u"Hidden/BakedLightTexturePacking" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BakedLightTexturePacking, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BakedLightTexturePacking);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BakedLightTexturePacking*, "", "BakedLightTexturePacking");
