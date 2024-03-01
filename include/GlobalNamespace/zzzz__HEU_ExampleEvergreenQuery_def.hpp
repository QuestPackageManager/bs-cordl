#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_ExampleEvergreenQuery)
namespace HoudiniEngineUnity {
struct HAPI_AttributeInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_AttributeOwner;
}
namespace HoudiniEngineUnity {
struct HAPI_GeoInfo;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace System::Text {
class StringBuilder;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class HEU_ExampleEvergreenQuery;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HEU_ExampleEvergreenQuery);
// Type: ::HEU_ExampleEvergreenQuery
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::HEU_ExampleEvergreenQuery*
class CORDL_TYPE HEU_ExampleEvergreenQuery : public ::System::Object {
public:
  // Declarations
  /// @brief Method ChangeParmsAndCook, addr 0x22ac300, size 0x390, virtual false, abstract: false, final false
  static inline void ChangeParmsAndCook(::HoudiniEngineUnity::HEU_HoudiniAsset* houdiniAsset);

  /// @brief Method CookAsset, addr 0x22ac2f0, size 0x10, virtual false, abstract: false, final false
  static inline void CookAsset(::HoudiniEngineUnity::HEU_HoudiniAsset* houdiniAsset);

  static inline ::GlobalNamespace::HEU_ExampleEvergreenQuery* New_ctor();

  /// @brief Method QueryAttribute, addr 0x22ac96c, size 0x444, virtual false, abstract: false, final false
  static inline void QueryAttribute(::HoudiniEngineUnity::HEU_HoudiniAsset* houdiniAsset, ::StringW objName, ::StringW geoName, int32_t partID, ::StringW attrName);

  /// @brief Method QueryAttributeByStorageType, addr 0x22ad5c0, size 0x1d0, virtual false, abstract: false, final false
  static inline void QueryAttributeByStorageType(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo,
                                                 ::StringW attrName);

  /// @brief Method QueryGeoParts, addr 0x22acf10, size 0x42c, virtual false, abstract: false, final false
  static inline void QueryGeoParts(::HoudiniEngineUnity::HEU_SessionBase* session, ByRef<::HoudiniEngineUnity::HAPI_GeoInfo> geoInfo);

  /// @brief Method QueryHoudiniAsset, addr 0x22ac130, size 0x1c0, virtual false, abstract: false, final false
  static inline ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> QueryHoudiniAsset(::UnityEngine::GameObject* rootGO);

  /// @brief Method QueryObjects, addr 0x22ac690, size 0x2dc, virtual false, abstract: false, final false
  static inline void QueryObjects(::HoudiniEngineUnity::HEU_HoudiniAsset* houdiniAsset);

  /// @brief Method QueryPartAttributeByOwner, addr 0x22ad33c, size 0x284, virtual false, abstract: false, final false
  static inline void QueryPartAttributeByOwner(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::HoudiniEngineUnity::HAPI_AttributeOwner owner, int32_t count,
                                               ::System::Text::StringBuilder* sb);

  /// @brief Method StartQuery, addr 0x22abebc, size 0x274, virtual false, abstract: false, final false
  static inline void StartQuery();

  /// @brief Method .ctor, addr 0x22ada04, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_ExampleEvergreenQuery();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_ExampleEvergreenQuery", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_ExampleEvergreenQuery(HEU_ExampleEvergreenQuery&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_ExampleEvergreenQuery", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_ExampleEvergreenQuery(HEU_ExampleEvergreenQuery const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HEU_ExampleEvergreenQuery, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HEU_ExampleEvergreenQuery);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HEU_ExampleEvergreenQuery*, "", "HEU_ExampleEvergreenQuery");
