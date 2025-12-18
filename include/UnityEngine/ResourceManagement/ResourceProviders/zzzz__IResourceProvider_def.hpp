#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/IResourceProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IResourceProvider)
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
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct ProviderBehaviourFlags;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
class IResourceProvider;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider);
// Dependencies
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider
class CORDL_TYPE IResourceProvider {
public:
  // Declarations
  __declspec(property(get = get_BehaviourFlags)) ::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags BehaviourFlags;

  __declspec(property(get = get_ProviderId)) ::StringW ProviderId;

  /// @brief Method CanProvide, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool CanProvide(::System::Type* type, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);

  /// @brief Method GetDefaultType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Type* GetDefaultType(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);

  /// @brief Method Provide, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle);

  /// @brief Method Release, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Release(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::System::Object* asset);

  /// @brief Method get_BehaviourFlags, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags get_BehaviourFlags();

  /// @brief Method get_ProviderId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_ProviderId();

  // Ctor Parameters [CppParam { name: "", ty: "IResourceProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IResourceProvider(IResourceProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18747 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ResourceManagement::ResourceProviders
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, "UnityEngine.ResourceManagement.ResourceProviders", "IResourceProvider");
