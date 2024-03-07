#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ContentCatalogDataEntry)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets::ResourceLocators {
class ContentCatalogDataEntry;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry);
// Type: UnityEngine.AddressableAssets.ResourceLocators::ContentCatalogDataEntry
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets::ResourceLocators {
// Is value type: false
// CS Name: ::UnityEngine.AddressableAssets.ResourceLocators::ContentCatalogDataEntry*
class CORDL_TYPE ContentCatalogDataEntry : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Data, put = set_Data))::System::Object* Data;

  __declspec(property(get = get_Dependencies, put = set_Dependencies))::System::Collections::Generic::List_1<::System::Object*>* Dependencies;

  __declspec(property(get = get_InternalId, put = set_InternalId))::StringW InternalId;

  __declspec(property(get = get_Keys, put = set_Keys))::System::Collections::Generic::List_1<::System::Object*>* Keys;

  __declspec(property(get = get_Provider, put = set_Provider))::StringW Provider;

  __declspec(property(get = get_ResourceType, put = set_ResourceType))::System::Type* ResourceType;

  /// @brief Field <Data>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__Data_k__BackingField, put = __cordl_internal_set__Data_k__BackingField))::System::Object* _Data_k__BackingField;

  /// @brief Field <Dependencies>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Dependencies_k__BackingField,
                      put = __cordl_internal_set__Dependencies_k__BackingField))::System::Collections::Generic::List_1<::System::Object*>* _Dependencies_k__BackingField;

  /// @brief Field <InternalId>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__InternalId_k__BackingField, put = __cordl_internal_set__InternalId_k__BackingField))::StringW _InternalId_k__BackingField;

  /// @brief Field <Keys>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Keys_k__BackingField,
                      put = __cordl_internal_set__Keys_k__BackingField))::System::Collections::Generic::List_1<::System::Object*>* _Keys_k__BackingField;

  /// @brief Field <Provider>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Provider_k__BackingField, put = __cordl_internal_set__Provider_k__BackingField))::StringW _Provider_k__BackingField;

  /// @brief Field <ResourceType>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__ResourceType_k__BackingField, put = __cordl_internal_set__ResourceType_k__BackingField))::System::Type* _ResourceType_k__BackingField;

  static inline ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry* New_ctor(::System::Type* type, ::StringW internalId, ::StringW provider,
                                                                                                      ::System::Collections::Generic::IEnumerable_1<::System::Object*>* keys,
                                                                                                      ::System::Collections::Generic::IEnumerable_1<::System::Object*>* dependencies,
                                                                                                      ::System::Object* extraData);

  constexpr ::System::Object*& __cordl_internal_get__Data_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__Data_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __cordl_internal_get__Dependencies_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Object*>*> const& __cordl_internal_get__Dependencies_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__InternalId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__InternalId_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __cordl_internal_get__Keys_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Object*>*> const& __cordl_internal_get__Keys_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__Provider_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Provider_k__BackingField();

  constexpr ::System::Type*& __cordl_internal_get__ResourceType_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__ResourceType_k__BackingField() const;

  constexpr void __cordl_internal_set__Data_k__BackingField(::System::Object* value);

  constexpr void __cordl_internal_set__Dependencies_k__BackingField(::System::Collections::Generic::List_1<::System::Object*>* value);

  constexpr void __cordl_internal_set__InternalId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Keys_k__BackingField(::System::Collections::Generic::List_1<::System::Object*>* value);

  constexpr void __cordl_internal_set__Provider_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__ResourceType_k__BackingField(::System::Type* value);

  /// @brief Method .ctor, addr 0x2b774b8, size 0x108, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::StringW internalId, ::StringW provider, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* keys,
                    ::System::Collections::Generic::IEnumerable_1<::System::Object*>* dependencies, ::System::Object* extraData);

  /// @brief Method get_Data, addr 0x2b77498, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Data();

  /// @brief Method get_Dependencies, addr 0x2b77488, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::System::Object*>* get_Dependencies();

  /// @brief Method get_InternalId, addr 0x2b77458, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_InternalId();

  /// @brief Method get_Keys, addr 0x2b77478, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::System::Object*>* get_Keys();

  /// @brief Method get_Provider, addr 0x2b77468, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Provider();

  /// @brief Method get_ResourceType, addr 0x2b774a8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_ResourceType();

  /// @brief Method set_Data, addr 0x2b774a0, size 0x8, virtual false, abstract: false, final false
  inline void set_Data(::System::Object* value);

  /// @brief Method set_Dependencies, addr 0x2b77490, size 0x8, virtual false, abstract: false, final false
  inline void set_Dependencies(::System::Collections::Generic::List_1<::System::Object*>* value);

  /// @brief Method set_InternalId, addr 0x2b77460, size 0x8, virtual false, abstract: false, final false
  inline void set_InternalId(::StringW value);

  /// @brief Method set_Keys, addr 0x2b77480, size 0x8, virtual false, abstract: false, final false
  inline void set_Keys(::System::Collections::Generic::List_1<::System::Object*>* value);

  /// @brief Method set_Provider, addr 0x2b77470, size 0x8, virtual false, abstract: false, final false
  inline void set_Provider(::StringW value);

  /// @brief Method set_ResourceType, addr 0x2b774b0, size 0x8, virtual false, abstract: false, final false
  inline void set_ResourceType(::System::Type* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContentCatalogDataEntry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContentCatalogDataEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContentCatalogDataEntry(ContentCatalogDataEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContentCatalogDataEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContentCatalogDataEntry(ContentCatalogDataEntry const&) = delete;

  /// @brief Field <InternalId>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____InternalId_k__BackingField;

  /// @brief Field <Provider>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Provider_k__BackingField;

  /// @brief Field <Keys>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Object*>* ____Keys_k__BackingField;

  /// @brief Field <Dependencies>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Object*>* ____Dependencies_k__BackingField;

  /// @brief Field <Data>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::System::Object* ____Data_k__BackingField;

  /// @brief Field <ResourceType>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::System::Type* ____ResourceType_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry, ____InternalId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry, ____Provider_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry, ____Keys_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry, ____Dependencies_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry, ____Data_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry, ____ResourceType_k__BackingField) == 0x38, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets::ResourceLocators
NEED_NO_BOX(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry*, "UnityEngine.AddressableAssets.ResourceLocators", "ContentCatalogDataEntry");
