#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CustomLevelLoader)
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace UnityEngine::AddressableAssets {
template <typename TObject> class AssetReferenceT_1;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomLevelLoader;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CustomLevelLoader);
// Type: ::CustomLevelLoader
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8969))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10603))
// CS Name: ::CustomLevelLoader*
class CORDL_TYPE CustomLevelLoader : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _defaultEnvironmentInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultEnvironmentInfo,
                      put = __cordl_internal_set__defaultEnvironmentInfo))::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* _defaultEnvironmentInfo;

  /// @brief Field _defaultAllDirectionsEnvironmentInfo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultAllDirectionsEnvironmentInfo, put = __cordl_internal_set__defaultAllDirectionsEnvironmentInfo))::UnityEngine::AddressableAssets::
      AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* _defaultAllDirectionsEnvironmentInfo;

  constexpr ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*& __cordl_internal_get__defaultEnvironmentInfo();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*> const&
  __cordl_internal_get__defaultEnvironmentInfo() const;

  constexpr void __cordl_internal_set__defaultEnvironmentInfo(::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* value);

  constexpr ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*& __cordl_internal_get__defaultAllDirectionsEnvironmentInfo();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*> const&
  __cordl_internal_get__defaultAllDirectionsEnvironmentInfo() const;

  constexpr void __cordl_internal_set__defaultAllDirectionsEnvironmentInfo(::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* value);

  static inline ::GlobalNamespace::CustomLevelLoader* New_ctor();

  /// @brief Method .ctor, addr 0x1265890, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CustomLevelLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomLevelLoader(CustomLevelLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomLevelLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomLevelLoader(CustomLevelLoader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomLevelLoader();

public:
  /// @brief Field _defaultEnvironmentInfo, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* ____defaultEnvironmentInfo;

  /// @brief Field _defaultAllDirectionsEnvironmentInfo, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* ____defaultAllDirectionsEnvironmentInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CustomLevelLoader, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomLevelLoader, ____defaultEnvironmentInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomLevelLoader, ____defaultAllDirectionsEnvironmentInfo) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CustomLevelLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CustomLevelLoader*, "", "CustomLevelLoader");
