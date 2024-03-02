#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_AssetEventType_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HEU_AssetEventData)
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
class HEU_AssetEventData;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_AssetEventData);
// Type: HoudiniEngineUnity::HEU_AssetEventData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_AssetEventData*
class CORDL_TYPE HEU_AssetEventData : public ::System::Object {
public:
  // Declarations
  /// @brief Field Asset, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Asset, put = __cordl_internal_set_Asset))::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> Asset;

  /// @brief Field CookSuccess, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_CookSuccess, put = __cordl_internal_set_CookSuccess)) bool CookSuccess;

  /// @brief Field EventType, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_EventType, put = __cordl_internal_set_EventType))::HoudiniEngineUnity::HEU_AssetEventType EventType;

  /// @brief Field OutputObjects, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_OutputObjects, put = __cordl_internal_set_OutputObjects))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* OutputObjects;

  static inline ::HoudiniEngineUnity::HEU_AssetEventData* New_ctor(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, bool successful,
                                                                   ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* outputObjects);

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> const& __cordl_internal_get_Asset() const;

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset>& __cordl_internal_get_Asset();

  constexpr bool const& __cordl_internal_get_CookSuccess() const;

  constexpr bool& __cordl_internal_get_CookSuccess();

  constexpr ::HoudiniEngineUnity::HEU_AssetEventType const& __cordl_internal_get_EventType() const;

  constexpr ::HoudiniEngineUnity::HEU_AssetEventType& __cordl_internal_get_EventType();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_OutputObjects();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get_OutputObjects() const;

  constexpr void __cordl_internal_set_Asset(::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> value);

  constexpr void __cordl_internal_set_CookSuccess(bool value);

  constexpr void __cordl_internal_set_EventType(::HoudiniEngineUnity::HEU_AssetEventType value);

  constexpr void __cordl_internal_set_OutputObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* value);

  /// @brief Method .ctor, addr 0x22af198, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, bool successful, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* outputObjects);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_AssetEventData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_AssetEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_AssetEventData(HEU_AssetEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_AssetEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_AssetEventData(HEU_AssetEventData const&) = delete;

  /// @brief Field Asset, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> ___Asset;

  /// @brief Field CookSuccess, offset: 0x18, size: 0x1, def value: None
  bool ___CookSuccess;

  /// @brief Field OutputObjects, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* ___OutputObjects;

  /// @brief Field EventType, offset: 0x28, size: 0x4, def value: None
  ::HoudiniEngineUnity::HEU_AssetEventType ___EventType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_AssetEventData, 0x30>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AssetEventData, ___Asset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AssetEventData, ___CookSuccess) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AssetEventData, ___OutputObjects) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AssetEventData, ___EventType) == 0x28, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_AssetEventData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_AssetEventData*, "HoudiniEngineUnity", "HEU_AssetEventData");
