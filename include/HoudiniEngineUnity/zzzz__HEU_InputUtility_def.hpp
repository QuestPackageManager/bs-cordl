#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_InputUtility)
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace HoudiniEngineUnity {
class HEU_InputHDAInfo;
}
namespace HoudiniEngineUnity {
class HEU_InputInterface;
}
namespace HoudiniEngineUnity {
class HEU_InputNode;
}
namespace HoudiniEngineUnity {
class HEU_InputObjectInfo;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Type;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_InputUtility;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_InputUtility);
// Type: HoudiniEngineUnity::HEU_InputUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9849))
// CS Name: ::HoudiniEngineUnity::HEU_InputUtility*
class CORDL_TYPE HEU_InputUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Field _inputInterfaces, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__inputInterfaces, put = setStaticF__inputInterfaces))::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputInterface*>* _inputInterfaces;

  static inline void setStaticF__inputInterfaces(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputInterface*>* value);

  static inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputInterface*>* getStaticF__inputInterfaces();

  /// @brief Method GetHighestPriority, addr 0x21ce938, size 0xcc, virtual false, abstract: false, final false
  static inline int32_t GetHighestPriority();

  /// @brief Method RegisterInputInterface, addr 0x21cea04, size 0x29c, virtual false, abstract: false, final false
  static inline void RegisterInputInterface(::HoudiniEngineUnity::HEU_InputInterface* inputInterface);

  /// @brief Method UnregisterInputInterface, addr 0x21cedf8, size 0x80, virtual false, abstract: false, final false
  static inline void UnregisterInputInterface(::HoudiniEngineUnity::HEU_InputInterface* inputInterface);

  /// @brief Method GetInputInterfaceByType, addr 0x21ceca0, size 0x158, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_InputInterface* GetInputInterfaceByType(::System::Type* type);

  /// @brief Method GetInputInterface, addr 0x21cee78, size 0x118, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_InputInterface* GetInputInterface(::UnityEngine::GameObject* inputObject);

  /// @brief Method GetInputInterface, addr 0x21cef90, size 0xe0, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_InputInterface* GetInputInterface(::HoudiniEngineUnity::HEU_InputObjectInfo* inputObjectInfo);

  /// @brief Method CreateInputNodeWithMultiObjects, addr 0x21cf070, size 0x5d0, virtual false, abstract: false, final false
  static inline bool CreateInputNodeWithMultiObjects(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t assetID, ByRef<int32_t> connectMergeID,
                                                     ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>*> inputObjects,
                                                     ByRef<::System::Collections::Generic::List_1<int32_t>*> inputObjectsConnectedAssetIDs, ::HoudiniEngineUnity::HEU_InputNode* inputNode);

  /// @brief Method CreateInputNodeWithMultiAssets, addr 0x21cf968, size 0x3c4, virtual false, abstract: false, final false
  static inline bool CreateInputNodeWithMultiAssets(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset, ByRef<int32_t> connectMergeID,
                                                    ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>*> inputAssetInfos, bool bKeepWorldTransform,
                                                    int32_t mergeParentID);

  /// @brief Method UploadInputObjectTransform, addr 0x21cf640, size 0x328, virtual false, abstract: false, final false
  static inline bool UploadInputObjectTransform(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_InputObjectInfo* inputObject, int32_t inputNodeID, bool bKeepWorldTransform);

  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_InputUtility(HEU_InputUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_InputUtility(HEU_InputUtility const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_InputUtility();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_InputUtility, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InputUtility);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputUtility*, "HoudiniEngineUnity", "HEU_InputUtility");
