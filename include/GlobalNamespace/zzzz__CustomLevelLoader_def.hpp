#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomLevelLoader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CustomLevelLoader)
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
class ICustomLevelLoader;
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
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CustomLevelLoader*
class CORDL_TYPE CustomLevelLoader : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _defaultAllDirectionsEnvironmentInfo, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultAllDirectionsEnvironmentInfo,
                      put = __cordl_internal_set__defaultAllDirectionsEnvironmentInfo)) ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*
      _defaultAllDirectionsEnvironmentInfo;

  /// @brief Field _defaultEnvironmentInfo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultEnvironmentInfo,
                      put = __cordl_internal_set__defaultEnvironmentInfo)) ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* _defaultEnvironmentInfo;

  /// @brief Convert operator to "::GlobalNamespace::ICustomLevelLoader"
  constexpr operator ::GlobalNamespace::ICustomLevelLoader*() noexcept;

  static inline ::GlobalNamespace::CustomLevelLoader* New_ctor();

  constexpr ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*& __cordl_internal_get__defaultAllDirectionsEnvironmentInfo();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*> const&
  __cordl_internal_get__defaultAllDirectionsEnvironmentInfo() const;

  constexpr ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*& __cordl_internal_get__defaultEnvironmentInfo();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*> const&
  __cordl_internal_get__defaultEnvironmentInfo() const;

  constexpr void __cordl_internal_set__defaultAllDirectionsEnvironmentInfo(::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* value);

  constexpr void __cordl_internal_set__defaultEnvironmentInfo(::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* value);

  /// @brief Method .ctor, addr 0x26782b0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::ICustomLevelLoader"
  constexpr ::GlobalNamespace::ICustomLevelLoader* i___GlobalNamespace__ICustomLevelLoader() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomLevelLoader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CustomLevelLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomLevelLoader(CustomLevelLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomLevelLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomLevelLoader(CustomLevelLoader const&) = delete;

  /// @brief Field _defaultEnvironmentInfo, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* ____defaultEnvironmentInfo;

  /// @brief Field _defaultAllDirectionsEnvironmentInfo, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* ____defaultAllDirectionsEnvironmentInfo;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12773 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CustomLevelLoader, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomLevelLoader, ____defaultEnvironmentInfo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomLevelLoader, ____defaultAllDirectionsEnvironmentInfo) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CustomLevelLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CustomLevelLoader*, "", "CustomLevelLoader");
