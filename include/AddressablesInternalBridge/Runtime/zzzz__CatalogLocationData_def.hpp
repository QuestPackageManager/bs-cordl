#pragma once
// IWYU pragma private; include "AddressablesInternalBridge/Runtime/CatalogLocationData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CatalogLocationData)
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
// Forward declare root types
namespace AddressablesInternalBridge::Runtime {
class CatalogLocationData;
}
// Write type traits
MARK_REF_PTR_T(::AddressablesInternalBridge::Runtime::CatalogLocationData);
// Dependencies System.Object
namespace AddressablesInternalBridge::Runtime {
// Is value type: false
// CS Name: AddressablesInternalBridge.Runtime.CatalogLocationData
class CORDL_TYPE CatalogLocationData : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CatalogLocation)) ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* CatalogLocation;

  __declspec(property(get = get_LocalHash)) ::StringW LocalHash;

  __declspec(property(get = get_LocatorId)) ::StringW LocatorId;

  /// @brief Field <CatalogLocation>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__CatalogLocation_k__BackingField,
                      put = __cordl_internal_set__CatalogLocation_k__BackingField)) ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* _CatalogLocation_k__BackingField;

  /// @brief Field <LocalHash>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__LocalHash_k__BackingField, put = __cordl_internal_set__LocalHash_k__BackingField)) ::StringW _LocalHash_k__BackingField;

  /// @brief Field <LocatorId>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__LocatorId_k__BackingField, put = __cordl_internal_set__LocatorId_k__BackingField)) ::StringW _LocatorId_k__BackingField;

  static inline ::AddressablesInternalBridge::Runtime::CatalogLocationData* New_ctor(::StringW locatorId, ::StringW localHash,
                                                                                     ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* resourceLocation);

  constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* const& __cordl_internal_get__CatalogLocation_k__BackingField() const;

  constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*& __cordl_internal_get__CatalogLocation_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__LocalHash_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__LocalHash_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__LocatorId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__LocatorId_k__BackingField();

  constexpr void __cordl_internal_set__CatalogLocation_k__BackingField(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value);

  constexpr void __cordl_internal_set__LocalHash_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__LocatorId_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x44ea410, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::StringW locatorId, ::StringW localHash, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* resourceLocation);

  /// @brief Method get_CatalogLocation, addr 0x44eaa6c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* get_CatalogLocation();

  /// @brief Method get_LocalHash, addr 0x44eaa64, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_LocalHash();

  /// @brief Method get_LocatorId, addr 0x44eaa5c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_LocatorId();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CatalogLocationData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CatalogLocationData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CatalogLocationData(CatalogLocationData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CatalogLocationData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CatalogLocationData(CatalogLocationData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16142 };

  /// @brief Field <LocatorId>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____LocatorId_k__BackingField;

  /// @brief Field <LocalHash>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____LocalHash_k__BackingField;

  /// @brief Field <CatalogLocation>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* ____CatalogLocation_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AddressablesInternalBridge::Runtime::CatalogLocationData, ____LocatorId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::AddressablesInternalBridge::Runtime::CatalogLocationData, ____LocalHash_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::AddressablesInternalBridge::Runtime::CatalogLocationData, ____CatalogLocation_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AddressablesInternalBridge::Runtime::CatalogLocationData, 0x28>, "Size mismatch!");

} // namespace AddressablesInternalBridge::Runtime
NEED_NO_BOX(::AddressablesInternalBridge::Runtime::CatalogLocationData);
DEFINE_IL2CPP_ARG_TYPE(::AddressablesInternalBridge::Runtime::CatalogLocationData*, "AddressablesInternalBridge.Runtime", "CatalogLocationData");
