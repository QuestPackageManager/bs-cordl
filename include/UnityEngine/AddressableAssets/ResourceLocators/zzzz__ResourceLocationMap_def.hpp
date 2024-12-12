#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/ResourceLocators/ResourceLocationMap.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/AddressableAssets/ResourceLocators/zzzz__IResourceLocator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ResourceLocationMap)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
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
class ResourceLocationData;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets::ResourceLocators {
class ResourceLocationMap;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap);
// Dependencies System.Object, UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator
namespace UnityEngine::AddressableAssets::ResourceLocators {
// Is value type: false
// CS Name: UnityEngine.AddressableAssets.ResourceLocators.ResourceLocationMap
class CORDL_TYPE ResourceLocationMap : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Keys)) ::System::Collections::Generic::IEnumerable_1<::System::Object*>* Keys;

  __declspec(property(
      get = get_Locations)) ::System::Collections::Generic::Dictionary_2<::System::Object*,
                                                                         ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>* Locations;

  __declspec(property(get = get_LocatorId, put = set_LocatorId)) ::StringW LocatorId;

  /// @brief Field <LocatorId>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__LocatorId_k__BackingField, put = __cordl_internal_set__LocatorId_k__BackingField)) ::StringW _LocatorId_k__BackingField;

  /// @brief Field locations, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_locations, put = __cordl_internal_set_locations)) ::System::Collections::Generic::Dictionary_2<
      ::System::Object*, ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>* locations;

  /// @brief Convert operator to "::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator"
  constexpr operator ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*() noexcept;

  /// @brief Method Add, addr 0x44fd4a8, size 0x160, virtual false, abstract: false, final false
  inline void Add(::System::Object* key, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);

  /// @brief Method Add, addr 0x44fac84, size 0x68, virtual false, abstract: false, final false
  inline void Add(::System::Object* key, ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations);

  /// @brief Method Locate, addr 0x44fbaa8, size 0x878, virtual true, abstract: false, final true
  inline bool Locate(::System::Object* key, ::System::Type* type,
                     ::ByRef<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> locations);

  static inline ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* New_ctor(::StringW id, int32_t capacity);

  static inline ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*
  New_ctor(::StringW id, ::System::Collections::Generic::IList_1<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData*>* locations);

  constexpr ::StringW const& __cordl_internal_get__LocatorId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__LocatorId_k__BackingField();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>* const&
  __cordl_internal_get_locations() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>*&
  __cordl_internal_get_locations();

  constexpr void __cordl_internal_set__LocatorId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set_locations(
      ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>* value);

  /// @brief Method .ctor, addr 0x44fa9f0, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::StringW id, int32_t capacity);

  /// @brief Method .ctor, addr 0x44fcb14, size 0x994, virtual false, abstract: false, final false
  inline void _ctor(::StringW id, ::System::Collections::Generic::IList_1<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData*>* locations);

  /// @brief Method get_Keys, addr 0x44fba58, size 0x50, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* get_Keys();

  /// @brief Method get_Locations, addr 0x44fd608, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>*
  get_Locations();

  /// @brief Method get_LocatorId, addr 0x44fcb04, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_LocatorId();

  /// @brief Convert to "::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator"
  constexpr ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* i___UnityEngine__AddressableAssets__ResourceLocators__IResourceLocator() noexcept;

  /// @brief Method set_LocatorId, addr 0x44fcb0c, size 0x8, virtual false, abstract: false, final false
  inline void set_LocatorId(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourceLocationMap();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResourceLocationMap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResourceLocationMap(ResourceLocationMap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResourceLocationMap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResourceLocationMap(ResourceLocationMap const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16209 };

  /// @brief Field <LocatorId>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____LocatorId_k__BackingField;

  /// @brief Field locations, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>* ___locations;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap, ____LocatorId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap, ___locations) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap, 0x20>, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets::ResourceLocators
NEED_NO_BOX(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*, "UnityEngine.AddressableAssets.ResourceLocators", "ResourceLocationMap");
