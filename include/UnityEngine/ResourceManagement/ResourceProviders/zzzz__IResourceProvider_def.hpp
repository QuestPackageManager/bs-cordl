#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IResourceProvider)
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct ProvideHandle;
}
namespace System {
class Object;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct ProviderBehaviourFlags;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
class IResourceProvider;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider);
// Type: UnityEngine.ResourceManagement.ResourceProviders::IResourceProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14003))
// CS Name: ::UnityEngine.ResourceManagement.ResourceProviders::IResourceProvider*
class CORDL_TYPE IResourceProvider {
public:
  // Declarations
  __declspec(property(get = get_ProviderId))::StringW ProviderId;

  __declspec(property(get = get_BehaviourFlags))::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags BehaviourFlags;

  /// @brief Method get_ProviderId addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW get_ProviderId();

  /// @brief Method GetDefaultType addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Type* GetDefaultType(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);

  /// @brief Method CanProvide addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool CanProvide(::System::Type* type, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);

  /// @brief Method Provide addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle);

  /// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Release(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::System::Object* asset);

  /// @brief Method get_BehaviourFlags addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags get_BehaviourFlags();

  // Ctor Parameters [CppParam { name: "", ty: "IResourceProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IResourceProvider(IResourceProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IResourceProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IResourceProvider(IResourceProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ResourceManagement::ResourceProviders
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, "UnityEngine.ResourceManagement.ResourceProviders", "IResourceProvider");
