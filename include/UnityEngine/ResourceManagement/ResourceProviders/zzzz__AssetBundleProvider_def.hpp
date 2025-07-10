#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/AssetBundleProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ResourceProviderBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AssetBundleProvider)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
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
class AssetBundleProvider___c__DisplayClass12_0;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct ProvideHandle;
}
namespace UnityEngine::ResourceManagement::Util {
class IOperationCacheKey;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
namespace UnityEngine {
class AssetBundleUnloadOperation;
}
namespace UnityEngine {
class AsyncOperation;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
class AssetBundleProvider;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class AssetBundleProvider___c__DisplayClass12_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider);
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider___c__DisplayClass12_0);
// Dependencies System.Object
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.AssetBundleProvider/<>c__DisplayClass12_0
class CORDL_TYPE AssetBundleProvider___c__DisplayClass12_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field location, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_location, put = __cordl_internal_set_location)) ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location;

  static inline ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider___c__DisplayClass12_0* New_ctor();

  /// @brief Method <Release>b__0, addr 0x479c014, size 0xf8, virtual false, abstract: false, final false
  inline void _Release_b__0(::UnityEngine::AsyncOperation* op);

  constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* const& __cordl_internal_get_location() const;

  constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*& __cordl_internal_get_location();

  constexpr void __cordl_internal_set_location(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value);

  /// @brief Method .ctor, addr 0x479bef4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetBundleProvider___c__DisplayClass12_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssetBundleProvider___c__DisplayClass12_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetBundleProvider___c__DisplayClass12_0(AssetBundleProvider___c__DisplayClass12_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetBundleProvider___c__DisplayClass12_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetBundleProvider___c__DisplayClass12_0(AssetBundleProvider___c__DisplayClass12_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15659 };

  /// @brief Field location, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* ___location;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider___c__DisplayClass12_0, ___location) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider___c__DisplayClass12_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::ResourceProviders
// Dependencies UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.AssetBundleProvider
class CORDL_TYPE AssetBundleProvider : public ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase {
public:
  // Declarations
  using __c__DisplayClass12_0 = ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider___c__DisplayClass12_0;

  /// @brief Field m_UnloadingBundles, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_UnloadingBundles,
                      put = setStaticF_m_UnloadingBundles)) ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::AssetBundleUnloadOperation*>* m_UnloadingBundles;

  /// @brief Method CreateCacheKeyForLocation, addr 0x479befc, size 0x7c, virtual true, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::Util::IOperationCacheKey*
  CreateCacheKeyForLocation(::UnityEngine::ResourceManagement::ResourceManager* rm, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::System::Type* desiredType);

  /// @brief Method GetDefaultType, addr 0x479bb9c, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Type* GetDefaultType(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);

  /// @brief Method Init, addr 0x479b6d0, size 0x9c, virtual false, abstract: false, final false
  static inline void Init();

  static inline ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider* New_ctor();

  /// @brief Method Provide, addr 0x479ba14, size 0x188, virtual true, abstract: false, final false
  inline void Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle providerInterface);

  /// @brief Method Release, addr 0x479bc08, size 0x2ec, virtual true, abstract: false, final false
  inline void Release(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::System::Object* asset);

  /// @brief Method WaitForAllUnloadingBundlesToComplete, addr 0x479b918, size 0xfc, virtual false, abstract: false, final false
  static inline void WaitForAllUnloadingBundlesToComplete();

  /// @brief Method .ctor, addr 0x479bf78, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::AssetBundleUnloadOperation*>* getStaticF_m_UnloadingBundles();

  /// @brief Method get_AssetBundleCount, addr 0x479b898, size 0x80, virtual false, abstract: false, final false
  static inline int32_t get_AssetBundleCount();

  /// @brief Method get_UnloadingAssetBundleCount, addr 0x479b820, size 0x78, virtual false, abstract: false, final false
  static inline int32_t get_UnloadingAssetBundleCount();

  /// @brief Method get_UnloadingBundles, addr 0x479b76c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::AssetBundleUnloadOperation*>* get_UnloadingBundles();

  static inline void setStaticF_m_UnloadingBundles(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::AssetBundleUnloadOperation*>* value);

  /// @brief Method set_UnloadingBundles, addr 0x479b7c4, size 0x5c, virtual false, abstract: false, final false
  static inline void set_UnloadingBundles(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::AssetBundleUnloadOperation*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetBundleProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssetBundleProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetBundleProvider(AssetBundleProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetBundleProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetBundleProvider(AssetBundleProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15660 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider, 0x20>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::ResourceProviders
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*, "UnityEngine.ResourceManagement.ResourceProviders", "AssetBundleProvider");
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider___c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider___c__DisplayClass12_0*, "UnityEngine.ResourceManagement.ResourceProviders",
                       "AssetBundleProvider/<>c__DisplayClass12_0");
