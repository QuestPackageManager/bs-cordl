#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_BakedEventData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_AssetEventData_def.hpp"
CORDL_MODULE_EXPORT(HEU_BakedEventData)
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
class HEU_BakedEventData;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_BakedEventData);
// Dependencies HoudiniEngineUnity.HEU_AssetEventData
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_BakedEventData
class CORDL_TYPE HEU_BakedEventData : public ::HoudiniEngineUnity::HEU_AssetEventData {
public:
  // Declarations
  /// @brief Field IsNewBake, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_IsNewBake, put = __cordl_internal_set_IsNewBake)) bool IsNewBake;

  static inline ::HoudiniEngineUnity::HEU_BakedEventData* New_ctor(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, bool successful,
                                                                   ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* outputObjects, bool isNewBake);

  constexpr bool const& __cordl_internal_get_IsNewBake() const;

  constexpr bool& __cordl_internal_get_IsNewBake();

  constexpr void __cordl_internal_set_IsNewBake(bool value);

  /// @brief Method .ctor, addr 0x3a05b98, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, bool successful, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* outputObjects, bool isNewBake);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_BakedEventData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_BakedEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_BakedEventData(HEU_BakedEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_BakedEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_BakedEventData(HEU_BakedEventData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11585 };

  /// @brief Field IsNewBake, offset: 0x2c, size: 0x1, def value: None
  bool ___IsNewBake;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_BakedEventData, ___IsNewBake) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_BakedEventData, 0x30>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_BakedEventData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_BakedEventData*, "HoudiniEngineUnity", "HEU_BakedEventData");
