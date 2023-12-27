#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_AssetEventType_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HEU_PreAssetEventData)
namespace HoudiniEngineUnity {
struct HEU_AssetEventType;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_PreAssetEventData;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_PreAssetEventData);
// Type: HoudiniEngineUnity::HEU_PreAssetEventData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9594)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9599))
// CS Name: ::HoudiniEngineUnity::HEU_PreAssetEventData*
class CORDL_TYPE HEU_PreAssetEventData : public ::System::Object {
public:
  // Declarations
  /// @brief Field Asset, offset 0x10, size 0x8
  __declspec(property(get = __get_Asset, put = __set_Asset))::HoudiniEngineUnity::HEU_HoudiniAsset* Asset;

  /// @brief Field AssetType, offset 0x18, size 0x4
  __declspec(property(get = __get_AssetType, put = __set_AssetType))::HoudiniEngineUnity::HEU_AssetEventType AssetType;

  constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset*& __get_Asset();

  constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_HoudiniAsset*> const& __get_Asset() const;

  constexpr void __set_Asset(::HoudiniEngineUnity::HEU_HoudiniAsset* value);

  constexpr ::HoudiniEngineUnity::HEU_AssetEventType& __get_AssetType();

  constexpr ::HoudiniEngineUnity::HEU_AssetEventType const& __get_AssetType() const;

  constexpr void __set_AssetType(::HoudiniEngineUnity::HEU_AssetEventType value);

  static inline ::HoudiniEngineUnity::HEU_PreAssetEventData* New_ctor(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::HoudiniEngineUnity::HEU_AssetEventType assetType);

  /// @brief Method .ctor addr 0x214e388 size 0x30 virtual false final false
  inline void _ctor(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::HoudiniEngineUnity::HEU_AssetEventType assetType);

  // Ctor Parameters [CppParam { name: "", ty: "HEU_PreAssetEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_PreAssetEventData(HEU_PreAssetEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_PreAssetEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_PreAssetEventData(HEU_PreAssetEventData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_PreAssetEventData();

public:
  /// @brief Field Asset, offset: 0x10, size: 0x8, def value: None
  ::HoudiniEngineUnity::HEU_HoudiniAsset* ___Asset;

  /// @brief Field AssetType, offset: 0x18, size: 0x4, def value: None
  ::HoudiniEngineUnity::HEU_AssetEventType ___AssetType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_PreAssetEventData, 0x20>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_PreAssetEventData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_PreAssetEventData*, "HoudiniEngineUnity", "HEU_PreAssetEventData");
