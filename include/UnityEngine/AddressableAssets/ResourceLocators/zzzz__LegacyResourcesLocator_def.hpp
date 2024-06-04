#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/ResourceLocators/LegacyResourcesLocator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LegacyResourcesLocator)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
class IResourceLocator;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets::ResourceLocators {
class LegacyResourcesLocator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator);
// Type: UnityEngine.AddressableAssets.ResourceLocators::LegacyResourcesLocator
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets::ResourceLocators {
// Is value type: false
// CS Name: ::UnityEngine.AddressableAssets.ResourceLocators::LegacyResourcesLocator*
class CORDL_TYPE LegacyResourcesLocator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Keys))::System::Collections::Generic::IEnumerable_1<::System::Object*>* Keys;

  __declspec(property(get = get_LocatorId))::StringW LocatorId;

  /// @brief Convert operator to "::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator"
  constexpr operator ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*() noexcept;

  /// @brief Method Locate, addr 0x3081060, size 0x274, virtual true, abstract: false, final true
  inline bool Locate(::System::Object* key, ::System::Type* type, ByRef<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> locations);

  static inline ::UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator* New_ctor();

  /// @brief Method .ctor, addr 0x308131c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Keys, addr 0x30812d4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* get_Keys();

  /// @brief Method get_LocatorId, addr 0x30812dc, size 0x40, virtual true, abstract: false, final true
  inline ::StringW get_LocatorId();

  /// @brief Convert to "::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator"
  constexpr ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* i___UnityEngine__AddressableAssets__ResourceLocators__IResourceLocator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LegacyResourcesLocator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LegacyResourcesLocator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LegacyResourcesLocator(LegacyResourcesLocator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LegacyResourcesLocator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LegacyResourcesLocator(LegacyResourcesLocator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator, 0x10>, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets::ResourceLocators
NEED_NO_BOX(::UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator*, "UnityEngine.AddressableAssets.ResourceLocators", "LegacyResourcesLocator");
