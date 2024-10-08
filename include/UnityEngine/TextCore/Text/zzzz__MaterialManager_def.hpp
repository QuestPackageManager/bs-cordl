#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/MaterialManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialManager)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class MaterialManager;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::MaterialManager);
// Type: UnityEngine.TextCore.Text::MaterialManager
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: ::UnityEngine.TextCore.Text::MaterialManager*
class CORDL_TYPE MaterialManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_FallbackMaterials, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_FallbackMaterials,
                             put = setStaticF_s_FallbackMaterials)) ::System::Collections::Generic::Dictionary_2<int64_t, ::UnityW<::UnityEngine::Material>>* s_FallbackMaterials;

  /// @brief Method CopyMaterialPresetProperties, addr 0x48b2b74, size 0x288, virtual false, abstract: false, final false
  static inline void CopyMaterialPresetProperties(::UnityEngine::Material* source, ::UnityEngine::Material* destination);

  /// @brief Method GetFallbackMaterial, addr 0x48b2dfc, size 0x220, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetFallbackMaterial(::UnityEngine::TextCore::Text::FontAsset* fontAsset, ::UnityEngine::Material* sourceMaterial, int32_t atlasIndex);

  /// @brief Method GetFallbackMaterial, addr 0x48b27ac, size 0x3c8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetFallbackMaterial(::UnityEngine::Material* sourceMaterial, ::UnityEngine::Material* targetMaterial);

  static inline ::System::Collections::Generic::Dictionary_2<int64_t, ::UnityW<::UnityEngine::Material>>* getStaticF_s_FallbackMaterials();

  static inline void setStaticF_s_FallbackMaterials(::System::Collections::Generic::Dictionary_2<int64_t, ::UnityW<::UnityEngine::Material>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaterialManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialManager(MaterialManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialManager(MaterialManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15201 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::MaterialManager, 0x10>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::MaterialManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::MaterialManager*, "UnityEngine.TextCore.Text", "MaterialManager");
