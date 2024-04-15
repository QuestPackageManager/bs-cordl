#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(HEU_HoudiniAssetRoot)
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
class HEU_HoudiniAssetRoot;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_HoudiniAssetRoot);
// Type: HoudiniEngineUnity::HEU_HoudiniAssetRoot
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_HoudiniAssetRoot*
class CORDL_TYPE HEU_HoudiniAssetRoot : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _bakeTargets, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__bakeTargets, put = __cordl_internal_set__bakeTargets))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* _bakeTargets;

  /// @brief Field _houdiniAsset, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__houdiniAsset, put = __cordl_internal_set__houdiniAsset))::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> _houdiniAsset;

  /// @brief Method ClearHoudiniEngineReferences, addr 0x2457998, size 0x74, virtual false, abstract: false, final false
  inline void ClearHoudiniEngineReferences();

  /// @brief Method DestroyRootComponent, addr 0x2457a0c, size 0x10, virtual false, abstract: false, final false
  static inline void DestroyRootComponent(::HoudiniEngineUnity::HEU_HoudiniAssetRoot* assetRoot);

  static inline ::HoudiniEngineUnity::HEU_HoudiniAssetRoot* New_ctor();

  /// @brief Method OnDestroy, addr 0x24576f4, size 0x1c8, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method RemoveHoudiniEngineAssetData, addr 0x24578bc, size 0xdc, virtual false, abstract: false, final false
  inline void RemoveHoudiniEngineAssetData();

  /// @brief Method Reset, addr 0x2457a1c, size 0xe8, virtual false, abstract: false, final false
  inline void Reset();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get__bakeTargets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get__bakeTargets() const;

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> const& __cordl_internal_get__houdiniAsset() const;

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset>& __cordl_internal_get__houdiniAsset();

  constexpr void __cordl_internal_set__bakeTargets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* value);

  constexpr void __cordl_internal_set__houdiniAsset(::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> value);

  /// @brief Method .ctor, addr 0x2457b04, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_HoudiniAssetRoot();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_HoudiniAssetRoot", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_HoudiniAssetRoot(HEU_HoudiniAssetRoot&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_HoudiniAssetRoot", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_HoudiniAssetRoot(HEU_HoudiniAssetRoot const&) = delete;

  /// @brief Field _houdiniAsset, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> ____houdiniAsset;

  /// @brief Field _bakeTargets, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* ____bakeTargets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_HoudiniAssetRoot, 0x28>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAssetRoot, ____houdiniAsset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAssetRoot, ____bakeTargets) == 0x20, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_HoudiniAssetRoot);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_HoudiniAssetRoot*, "HoudiniEngineUnity", "HEU_HoudiniAssetRoot");
