#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceLocations/LocationWrapper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocationWrapper)
namespace System::Collections::Generic {
template <typename T> class IList_1;
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
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceLocations {
class LocationWrapper;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceLocations::LocationWrapper);
// Type: UnityEngine.ResourceManagement.ResourceLocations::LocationWrapper
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::ResourceLocations {
// Is value type: false
// CS Name: ::UnityEngine.ResourceManagement.ResourceLocations::LocationWrapper*
class CORDL_TYPE LocationWrapper : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Data))::System::Object* Data;

  __declspec(property(get = get_Dependencies))::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* Dependencies;

  __declspec(property(get = get_DependencyHashCode)) int32_t DependencyHashCode;

  __declspec(property(get = get_HasDependencies)) bool HasDependencies;

  __declspec(property(get = get_InternalId))::StringW InternalId;

  __declspec(property(get = get_PrimaryKey))::StringW PrimaryKey;

  __declspec(property(get = get_ProviderId))::StringW ProviderId;

  __declspec(property(get = get_ResourceType))::System::Type* ResourceType;

  /// @brief Field m_InternalLocation, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InternalLocation,
                      put = __cordl_internal_set_m_InternalLocation))::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* m_InternalLocation;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation"
  constexpr operator ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*() noexcept;

  /// @brief Method Hash, addr 0x3349ae0, size 0xac, virtual true, abstract: false, final true
  inline int32_t Hash(::System::Type* resultType);

  static inline ::UnityEngine::ResourceManagement::ResourceLocations::LocationWrapper* New_ctor(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);

  constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*& __cordl_internal_get_m_InternalLocation();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*> const& __cordl_internal_get_m_InternalLocation() const;

  constexpr void __cordl_internal_set_m_InternalLocation(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value);

  /// @brief Method .ctor, addr 0x3341de4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);

  /// @brief Method get_Data, addr 0x33498f4, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Object* get_Data();

  /// @brief Method get_Dependencies, addr 0x3349708, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* get_Dependencies();

  /// @brief Method get_DependencyHashCode, addr 0x33497ac, size 0xa4, virtual true, abstract: false, final true
  inline int32_t get_DependencyHashCode();

  /// @brief Method get_HasDependencies, addr 0x3349850, size 0xa4, virtual true, abstract: false, final true
  inline bool get_HasDependencies();

  /// @brief Method get_InternalId, addr 0x33495c4, size 0xa0, virtual true, abstract: false, final true
  inline ::StringW get_InternalId();

  /// @brief Method get_PrimaryKey, addr 0x3349998, size 0xa4, virtual true, abstract: false, final true
  inline ::StringW get_PrimaryKey();

  /// @brief Method get_ProviderId, addr 0x3349664, size 0xa4, virtual true, abstract: false, final true
  inline ::StringW get_ProviderId();

  /// @brief Method get_ResourceType, addr 0x3349a3c, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Type* get_ResourceType();

  /// @brief Convert to "::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation"
  constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* i___UnityEngine__ResourceManagement__ResourceLocations__IResourceLocation() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocationWrapper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocationWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocationWrapper(LocationWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocationWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocationWrapper(LocationWrapper const&) = delete;

  /// @brief Field m_InternalLocation, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* ___m_InternalLocation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceLocations::LocationWrapper, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceLocations::LocationWrapper, ___m_InternalLocation) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::ResourceManagement::ResourceLocations
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceLocations::LocationWrapper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceLocations::LocationWrapper*, "UnityEngine.ResourceManagement.ResourceLocations", "LocationWrapper");
