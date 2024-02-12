#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IResourceLocation)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation);
// Type: UnityEngine.ResourceManagement.ResourceLocations::IResourceLocation
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::ResourceLocations {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14034))
// CS Name: ::UnityEngine.ResourceManagement.ResourceLocations::IResourceLocation*
class CORDL_TYPE IResourceLocation {
public:
  // Declarations
  __declspec(property(get = get_InternalId))::StringW InternalId;

  __declspec(property(get = get_ProviderId))::StringW ProviderId;

  __declspec(property(get = get_Dependencies))::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* Dependencies;

  __declspec(property(get = get_DependencyHashCode)) int32_t DependencyHashCode;

  __declspec(property(get = get_HasDependencies)) bool HasDependencies;

  __declspec(property(get = get_Data))::System::Object* Data;

  __declspec(property(get = get_PrimaryKey))::StringW PrimaryKey;

  __declspec(property(get = get_ResourceType))::System::Type* ResourceType;

  /// @brief Method get_InternalId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_InternalId();

  /// @brief Method get_ProviderId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_ProviderId();

  /// @brief Method get_Dependencies, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* get_Dependencies();

  /// @brief Method Hash, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t Hash(::System::Type* resultType);

  /// @brief Method get_DependencyHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_DependencyHashCode();

  /// @brief Method get_HasDependencies, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_HasDependencies();

  /// @brief Method get_Data, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* get_Data();

  /// @brief Method get_PrimaryKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_PrimaryKey();

  /// @brief Method get_ResourceType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Type* get_ResourceType();

  // Ctor Parameters [CppParam { name: "", ty: "IResourceLocation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IResourceLocation(IResourceLocation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IResourceLocation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IResourceLocation(IResourceLocation const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ResourceManagement::ResourceLocations
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, "UnityEngine.ResourceManagement.ResourceLocations", "IResourceLocation");
