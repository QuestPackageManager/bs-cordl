#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IResourceLocator)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets::ResourceLocators {
class IResourceLocator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator);
// Type: UnityEngine.AddressableAssets.ResourceLocators::IResourceLocator
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets::ResourceLocators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14383))
// CS Name: ::UnityEngine.AddressableAssets.ResourceLocators::IResourceLocator*
class CORDL_TYPE IResourceLocator {
public:
  // Declarations
  __declspec(property(get = get_LocatorId))::StringW LocatorId;

  __declspec(property(get = get_Keys))::System::Collections::Generic::IEnumerable_1<::System::Object*>* Keys;

  /// @brief Method get_LocatorId addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW get_LocatorId();

  /// @brief Method get_Keys addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* get_Keys();

  /// @brief Method Locate addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool Locate(::System::Object* key, ::System::Type* type, ByRef<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> locations);

  // Ctor Parameters [CppParam { name: "", ty: "IResourceLocator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IResourceLocator(IResourceLocator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IResourceLocator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IResourceLocator(IResourceLocator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::AddressableAssets::ResourceLocators
NEED_NO_BOX(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*, "UnityEngine.AddressableAssets.ResourceLocators", "IResourceLocator");
