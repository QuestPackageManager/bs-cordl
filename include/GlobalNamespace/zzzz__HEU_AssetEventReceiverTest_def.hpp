#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(HEU_AssetEventReceiverTest)
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace UnityEngine {
class GameObject;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class HEU_AssetEventReceiverTest;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HEU_AssetEventReceiverTest);
// Type: ::HEU_AssetEventReceiverTest
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9520))
// CS Name: ::HEU_AssetEventReceiverTest*
class CORDL_TYPE HEU_AssetEventReceiverTest : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Method ReloadCallback addr 0x1ff63a4 size 0x1ac virtual false final false
  inline void ReloadCallback(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, bool success, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* outputList);

  /// @brief Method CookedCallback addr 0x1ff6550 size 0x1ac virtual false final false
  inline void CookedCallback(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, bool success, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* outputList);

  /// @brief Method BakedCallback addr 0x1ff66fc size 0x1ac virtual false final false
  inline void BakedCallback(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, bool success, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* outputList);

  static inline ::GlobalNamespace::HEU_AssetEventReceiverTest* New_ctor();

  /// @brief Method .ctor addr 0x1ff68a8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_AssetEventReceiverTest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_AssetEventReceiverTest(HEU_AssetEventReceiverTest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_AssetEventReceiverTest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_AssetEventReceiverTest(HEU_AssetEventReceiverTest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_AssetEventReceiverTest();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HEU_AssetEventReceiverTest, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HEU_AssetEventReceiverTest);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HEU_AssetEventReceiverTest*, "", "HEU_AssetEventReceiverTest");
