#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_InputAssetPreset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HEU_InputAssetPreset)
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_InputAssetPreset;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_InputAssetPreset);
// Dependencies System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_InputAssetPreset
class CORDL_TYPE HEU_InputAssetPreset : public ::System::Object {
public:
  // Declarations
  /// @brief Field _gameObjectName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__gameObjectName, put = __cordl_internal_set__gameObjectName)) ::StringW _gameObjectName;

  static inline ::HoudiniEngineUnity::HEU_InputAssetPreset* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__gameObjectName() const;

  constexpr ::StringW& __cordl_internal_get__gameObjectName();

  constexpr void __cordl_internal_set__gameObjectName(::StringW value);

  /// @brief Method .ctor, addr 0x3a060d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_InputAssetPreset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputAssetPreset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_InputAssetPreset(HEU_InputAssetPreset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputAssetPreset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_InputAssetPreset(HEU_InputAssetPreset const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11597 };

  /// @brief Field _gameObjectName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____gameObjectName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_InputAssetPreset, ____gameObjectName) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_InputAssetPreset, 0x18>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InputAssetPreset);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputAssetPreset*, "HoudiniEngineUnity", "HEU_InputAssetPreset");
