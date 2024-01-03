#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ResourceProviderBase_def.hpp"
CORDL_MODULE_EXPORT(AssetBundleProvider)
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct ProvideHandle;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
class AssetBundleProvider;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider);
// Type: UnityEngine.ResourceManagement.ResourceProviders::AssetBundleProvider
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14013))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13994))
// CS Name: ::UnityEngine.ResourceManagement.ResourceProviders::AssetBundleProvider*
class CORDL_TYPE AssetBundleProvider : public ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase {
public:
  // Declarations
  /// @brief Method WaitForAllUnloadingBundlesToComplete, addr 0x2bd58b0, size 0x4, virtual false, abstract: false, final false
  static inline void WaitForAllUnloadingBundlesToComplete();

  /// @brief Method Provide, addr 0x2bd58b4, size 0x80, virtual true, abstract: false, final false
  inline void Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle providerInterface);

  /// @brief Method GetDefaultType, addr 0x2bd5934, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Type* GetDefaultType(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);

  /// @brief Method Release, addr 0x2bd59a0, size 0x184, virtual true, abstract: false, final false
  inline void Release(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::System::Object* asset);

  static inline ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider* New_ctor();

  /// @brief Method .ctor, addr 0x2bd5b24, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AssetBundleProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetBundleProvider(AssetBundleProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetBundleProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetBundleProvider(AssetBundleProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetBundleProvider();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider, 0x20>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::ResourceProviders
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*, "UnityEngine.ResourceManagement.ResourceProviders", "AssetBundleProvider");
