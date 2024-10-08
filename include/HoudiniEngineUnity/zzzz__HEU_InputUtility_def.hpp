#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_InputUtility.hpp"
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
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_InputUtility*
class CORDL_TYPE HEU_InputUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Field _inputInterfaces, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__inputInterfaces, put = setStaticF__inputInterfaces)) ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputInterface*>* _inputInterfaces;

  /// @brief Method CreateInputNodeWithMultiAssets, addr 0x3a1a7bc, size 0x3dc, virtual false, abstract: false, final false
  static inline bool CreateInputNodeWithMultiAssets(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset, ByRef<int32_t> connectMergeID,
                                                    ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>*> inputAssetInfos, bool bKeepWorldTransform,
                                                    int32_t mergeParentID);

  /// @brief Method CreateInputNodeWithMultiObjects, addr 0x3a19eec, size 0x5bc, virtual false, abstract: false, final false
  static inline bool CreateInputNodeWithMultiObjects(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t assetID, ByRef<int32_t> connectMergeID,
                                                     ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>*> inputObjects,
                                                     ByRef<::System::Collections::Generic::List_1<int32_t>*> inputObjectsConnectedAssetIDs, ::HoudiniEngineUnity::HEU_InputNode* inputNode);

  /// @brief Method GetHighestPriority, addr 0x3a197b8, size 0xcc, virtual false, abstract: false, final false
  static inline int32_t GetHighestPriority();

  /// @brief Method GetInputInterface, addr 0x3a19cf4, size 0x118, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_InputInterface* GetInputInterface(::UnityEngine::GameObject* inputObject);

  /// @brief Method GetInputInterface, addr 0x3a19e0c, size 0xe0, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_InputInterface* GetInputInterface(::HoudiniEngineUnity::HEU_InputObjectInfo* inputObjectInfo);

  /// @brief Method GetInputInterfaceByType, addr 0x3a19b1c, size 0x158, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_InputInterface* GetInputInterfaceByType(::System::Type* type);

  /// @brief Method RegisterInputInterface, addr 0x3a19884, size 0x298, virtual false, abstract: false, final false
  static inline void RegisterInputInterface(::HoudiniEngineUnity::HEU_InputInterface* inputInterface);

  /// @brief Method UnregisterInputInterface, addr 0x3a19c74, size 0x80, virtual false, abstract: false, final false
  static inline void UnregisterInputInterface(::HoudiniEngineUnity::HEU_InputInterface* inputInterface);

  /// @brief Method UploadInputObjectTransform, addr 0x3a1a4a8, size 0x314, virtual false, abstract: false, final false
  static inline bool UploadInputObjectTransform(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_InputObjectInfo* inputObject, int32_t inputNodeID, bool bKeepWorldTransform);

  static inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputInterface*>* getStaticF__inputInterfaces();

  static inline void setStaticF__inputInterfaces(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputInterface*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_InputUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_InputUtility(HEU_InputUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_InputUtility(HEU_InputUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11793 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_InputUtility, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InputUtility);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputUtility*, "HoudiniEngineUnity", "HEU_InputUtility");
