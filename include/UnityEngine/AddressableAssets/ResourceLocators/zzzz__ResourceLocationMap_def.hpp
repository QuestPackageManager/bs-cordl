#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ResourceLocationMap)
namespace UnityEngine::AddressableAssets::ResourceLocators {
class IResourceLocator;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
class ResourceLocationData;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace System {
class Type;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets::ResourceLocators {
class ResourceLocationMap;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap);
// Type: UnityEngine.AddressableAssets.ResourceLocators::ResourceLocationMap
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets::ResourceLocators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14115))
// CS Name: ::UnityEngine.AddressableAssets.ResourceLocators::ResourceLocationMap*
class CORDL_TYPE ResourceLocationMap : public ::System::Object {
public:
  // Declarations
  /// @brief Field <LocatorId>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__LocatorId_k__BackingField, put = __set__LocatorId_k__BackingField))::StringW _LocatorId_k__BackingField;

  /// @brief Field <Locations>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__Locations_k__BackingField, put = __set__Locations_k__BackingField))::System::Collections::Generic::Dictionary_2<
      ::System::Object*, ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>* _Locations_k__BackingField;

  __declspec(property(get = get_LocatorId, put = set_LocatorId))::StringW LocatorId;

  __declspec(property(get = get_Locations, put = set_Locations))::System::Collections::Generic::Dictionary_2<
      ::System::Object*, ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>* Locations;

  __declspec(property(get = get_Keys))::System::Collections::Generic::IEnumerable_1<::System::Object*>* Keys;

  /// @brief Convert operator to "::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator"
  constexpr operator ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*() noexcept;

  constexpr ::StringW& __get__LocatorId_k__BackingField();

  constexpr ::StringW const& __get__LocatorId_k__BackingField() const;

  constexpr void __set__LocatorId_k__BackingField(::StringW value);

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>*&
  __get__Locations_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>*> const&
  __get__Locations_k__BackingField() const;

  constexpr void __set__Locations_k__BackingField(
      ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>* value);

  static inline ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* New_ctor(::StringW id, int32_t capacity);

  /// @brief Method .ctor, addr 0x2a2d958, size 0xa0, virtual false, abstract: false, final false
  /// @param capacity: int32_t (default: static_cast<int32_t>(0x0))
  inline void _ctor(::StringW id, int32_t capacity = static_cast<int32_t>(0x0));

  /// @brief Method get_LocatorId, addr 0x2a2eba8, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_LocatorId();

  /// @brief Method set_LocatorId, addr 0x2a2ebb0, size 0x8, virtual false, abstract: false, final false
  inline void set_LocatorId(::StringW value);

  static inline ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*
  New_ctor(::StringW id, ::System::Collections::Generic::IList_1<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData*>* locations);

  /// @brief Method .ctor, addr 0x2a2ebb8, size 0x96c, virtual false, abstract: false, final false
  inline void _ctor(::StringW id, ::System::Collections::Generic::IList_1<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData*>* locations);

  /// @brief Method get_Locations, addr 0x2a2f688, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>*
  get_Locations();

  /// @brief Method set_Locations, addr 0x2a2f690, size 0x8, virtual false, abstract: false, final false
  inline void set_Locations(
      ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>* value);

  /// @brief Method get_Keys, addr 0x2a2f698, size 0x50, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* get_Keys();

  /// @brief Method Locate, addr 0x2a2dd94, size 0x86c, virtual true, abstract: false, final true
  inline bool Locate(::System::Object* key, ::System::Type* type, ByRef<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> locations);

  /// @brief Method Add, addr 0x2a2f524, size 0x164, virtual false, abstract: false, final false
  inline void Add(::System::Object* key, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);

  /// @brief Method Add, addr 0x2a2dbec, size 0x68, virtual false, abstract: false, final false
  inline void Add(::System::Object* key, ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations);

  // Ctor Parameters [CppParam { name: "", ty: "ResourceLocationMap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResourceLocationMap(ResourceLocationMap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResourceLocationMap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResourceLocationMap(ResourceLocationMap const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourceLocationMap();

public:
  /// @brief Field <LocatorId>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____LocatorId_k__BackingField;

  /// @brief Field <Locations>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>*
      ____Locations_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap, ____LocatorId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap, ____Locations_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets::ResourceLocators
NEED_NO_BOX(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*, "UnityEngine.AddressableAssets.ResourceLocators", "ResourceLocationMap");
