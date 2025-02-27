#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_AssetPresetUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_AssetPresetUtility)
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_AssetPresetUtility;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_AssetPresetUtility);
// Dependencies System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_AssetPresetUtility
class CORDL_TYPE HEU_AssetPresetUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Field PRESET_IDENTIFIER, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PRESET_IDENTIFIER, put = setStaticF_PRESET_IDENTIFIER)) ::ArrayW<char16_t, ::Array<char16_t>*> PRESET_IDENTIFIER;

  /// @brief Field PRESET_VERSION, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_PRESET_VERSION, put = setStaticF_PRESET_VERSION)) int32_t PRESET_VERSION;

  /// @brief Method LoadPresetFileIntoAssetAndCook, addr 0x3a1536c, size 0x66c, virtual false, abstract: false, final false
  static inline void LoadPresetFileIntoAssetAndCook(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::StringW filePath);

  /// @brief Method SaveAssetPresetToFile, addr 0x3a1457c, size 0x640, virtual false, abstract: false, final false
  static inline void SaveAssetPresetToFile(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::StringW filePath);

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_PRESET_IDENTIFIER();

  static inline int32_t getStaticF_PRESET_VERSION();

  static inline void setStaticF_PRESET_IDENTIFIER(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline void setStaticF_PRESET_VERSION(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_AssetPresetUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_AssetPresetUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_AssetPresetUtility(HEU_AssetPresetUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_AssetPresetUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_AssetPresetUtility(HEU_AssetPresetUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11601 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_AssetPresetUtility, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_AssetPresetUtility);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_AssetPresetUtility*, "HoudiniEngineUnity", "HEU_AssetPresetUtility");
