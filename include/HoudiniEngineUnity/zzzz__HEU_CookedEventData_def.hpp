#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_CookedEventData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_AssetEventData_def.hpp"
CORDL_MODULE_EXPORT(HEU_CookedEventData)
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_CookedEventData;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_CookedEventData);
// Dependencies HoudiniEngineUnity.HEU_AssetEventData
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_CookedEventData
class CORDL_TYPE HEU_CookedEventData : public ::HoudiniEngineUnity::HEU_AssetEventData {
public:
  // Declarations
  static inline ::HoudiniEngineUnity::HEU_CookedEventData* New_ctor(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, bool successful,
                                                                    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* outputObjects);

  /// @brief Method .ctor, addr 0x3a05b50, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, bool successful, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* outputObjects);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_CookedEventData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_CookedEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_CookedEventData(HEU_CookedEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_CookedEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_CookedEventData(HEU_CookedEventData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11584 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_CookedEventData, 0x30>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_CookedEventData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_CookedEventData*, "HoudiniEngineUnity", "HEU_CookedEventData");
