#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/AddressableAssets/ResourceLocators/zzzz__IResourceLocator_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__Addressables_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__InstantiationParameters_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneMode_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__UnloadSceneOptions_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AddressablesImpl)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Exception;
}
namespace System {
template <typename T, typename TResult> class Func_2;
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
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl__LoadResourceLocationKeyOp;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl__LoadResourceLocationKeysOp;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl__ResourceLocatorInfo;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl____c;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl____c__DisplayClass100_0;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl____c__DisplayClass104_0;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl____c__DisplayClass106_0;
}
namespace UnityEngine::AddressableAssets {
template <typename TObject> class __AddressablesImpl____c__DisplayClass111_0_1;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl____c__DisplayClass113_0;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl____c__DisplayClass114_0;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl____c__DisplayClass115_0;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl____c__DisplayClass120_0;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl____c__DisplayClass122_0;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl____c__DisplayClass125_0;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl____c__DisplayClass131_0;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl____c__DisplayClass132_0;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl____c__DisplayClass136_0;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl____c__DisplayClass140_0;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl____c__DisplayClass145_0;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl____c__DisplayClass146_0;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl____c__DisplayClass62_0;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl____c__DisplayClass71_0;
}
namespace UnityEngine::AddressableAssets {
template <typename TObject> class __AddressablesImpl____c__DisplayClass77_0_1;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl____c__DisplayClass81_0;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl____c__DisplayClass83_0;
}
namespace UnityEngine::AddressableAssets {
template <typename TObject> class __AddressablesImpl____c__DisplayClass86_0_1;
}
namespace UnityEngine::AddressableAssets {
template <typename TObject> class __AddressablesImpl____c__DisplayClass88_0_1;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl____c__DisplayClass96_0;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl____c__DisplayClass97_0;
}
namespace UnityEngine::AddressableAssets {
struct __Addressables__MergeMode;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class ResourceLocationBase;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class IAssetBundleResource;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class IInstanceProvider;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class ISceneProvider;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct InstantiationParameters;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SceneInstance;
}
namespace UnityEngine::ResourceManagement::Util {
class IAllocationStrategy;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine::SceneManagement {
struct UnloadSceneOptions;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets {
class AddressablesImpl;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl__LoadResourceLocationKeyOp;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl__LoadResourceLocationKeysOp;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl__ResourceLocatorInfo;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl____c;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl____c__DisplayClass100_0;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl____c__DisplayClass104_0;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl____c__DisplayClass106_0;
}
namespace UnityEngine::AddressableAssets {
template <typename TObject> class __AddressablesImpl____c__DisplayClass111_0_1;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl____c__DisplayClass113_0;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl____c__DisplayClass114_0;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl____c__DisplayClass115_0;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl____c__DisplayClass120_0;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl____c__DisplayClass122_0;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl____c__DisplayClass125_0;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl____c__DisplayClass131_0;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl____c__DisplayClass132_0;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl____c__DisplayClass136_0;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl____c__DisplayClass140_0;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl____c__DisplayClass145_0;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl____c__DisplayClass146_0;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl____c__DisplayClass62_0;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl____c__DisplayClass71_0;
}
namespace UnityEngine::AddressableAssets {
template <typename TObject> class __AddressablesImpl____c__DisplayClass77_0_1;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl____c__DisplayClass81_0;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl____c__DisplayClass83_0;
}
namespace UnityEngine::AddressableAssets {
template <typename TObject> class __AddressablesImpl____c__DisplayClass86_0_1;
}
namespace UnityEngine::AddressableAssets {
template <typename TObject> class __AddressablesImpl____c__DisplayClass88_0_1;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl____c__DisplayClass96_0;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl____c__DisplayClass97_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::AddressablesImpl);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::__AddressablesImpl__LoadResourceLocationKeyOp);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::__AddressablesImpl__LoadResourceLocationKeysOp);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::__AddressablesImpl____c);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass100_0);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass104_0);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass106_0);
MARK_GEN_REF_PTR_T(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass111_0_1);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass113_0);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass114_0);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass115_0);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass120_0);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass122_0);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass125_0);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass131_0);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass132_0);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass136_0);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass140_0);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass145_0);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass146_0);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass62_0);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass71_0);
MARK_GEN_REF_PTR_T(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass77_0_1);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass81_0);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass83_0);
MARK_GEN_REF_PTR_T(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass86_0_1);
MARK_GEN_REF_PTR_T(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass88_0_1);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass96_0);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass97_0);
// Type: ::ResourceLocatorInfo
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14064))
// CS Name: ::AddressablesImpl::ResourceLocatorInfo*
class CORDL_TYPE __AddressablesImpl__ResourceLocatorInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field <Locator>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Locator_k__BackingField,
                      put = __cordl_internal_set__Locator_k__BackingField))::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* _Locator_k__BackingField;

  /// @brief Field <LocalHash>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__LocalHash_k__BackingField, put = __cordl_internal_set__LocalHash_k__BackingField))::StringW _LocalHash_k__BackingField;

  /// @brief Field <CatalogLocation>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__CatalogLocation_k__BackingField,
                      put = __cordl_internal_set__CatalogLocation_k__BackingField))::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* _CatalogLocation_k__BackingField;

  /// @brief Field <ContentUpdateAvailable>k__BackingField, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__ContentUpdateAvailable_k__BackingField,
                      put = __cordl_internal_set__ContentUpdateAvailable_k__BackingField)) bool _ContentUpdateAvailable_k__BackingField;

  __declspec(property(get = get_Locator, put = set_Locator))::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* Locator;

  __declspec(property(get = get_LocalHash, put = set_LocalHash))::StringW LocalHash;

  __declspec(property(get = get_CatalogLocation, put = set_CatalogLocation))::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* CatalogLocation;

  __declspec(property(get = get_ContentUpdateAvailable, put = set_ContentUpdateAvailable)) bool ContentUpdateAvailable;

  __declspec(property(get = get_HashLocation))::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* HashLocation;

  __declspec(property(get = get_CanUpdateContent)) bool CanUpdateContent;

  constexpr ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*& __cordl_internal_get__Locator_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> const& __cordl_internal_get__Locator_k__BackingField() const;

  constexpr void __cordl_internal_set__Locator_k__BackingField(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* value);

  constexpr ::StringW& __cordl_internal_get__LocalHash_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__LocalHash_k__BackingField() const;

  constexpr void __cordl_internal_set__LocalHash_k__BackingField(::StringW value);

  constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*& __cordl_internal_get__CatalogLocation_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*> const& __cordl_internal_get__CatalogLocation_k__BackingField() const;

  constexpr void __cordl_internal_set__CatalogLocation_k__BackingField(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value);

  constexpr bool& __cordl_internal_get__ContentUpdateAvailable_k__BackingField();

  constexpr bool const& __cordl_internal_get__ContentUpdateAvailable_k__BackingField() const;

  constexpr void __cordl_internal_set__ContentUpdateAvailable_k__BackingField(bool value);

  /// @brief Method get_Locator, addr 0x2a25630, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* get_Locator();

  /// @brief Method set_Locator, addr 0x2a25638, size 0x8, virtual false, abstract: false, final false
  inline void set_Locator(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* value);

  /// @brief Method get_LocalHash, addr 0x2a25640, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_LocalHash();

  /// @brief Method set_LocalHash, addr 0x2a25648, size 0x8, virtual false, abstract: false, final false
  inline void set_LocalHash(::StringW value);

  /// @brief Method get_CatalogLocation, addr 0x2a25650, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* get_CatalogLocation();

  /// @brief Method set_CatalogLocation, addr 0x2a25658, size 0x8, virtual false, abstract: false, final false
  inline void set_CatalogLocation(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value);

  /// @brief Method get_ContentUpdateAvailable, addr 0x2a25660, size 0x8, virtual false, abstract: false, final false
  inline bool get_ContentUpdateAvailable();

  /// @brief Method set_ContentUpdateAvailable, addr 0x2a25668, size 0xc, virtual false, abstract: false, final false
  inline void set_ContentUpdateAvailable(bool value);

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo* New_ctor(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* loc, ::StringW localHash,
                                                                                                    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* remoteCatalogLocation);

  /// @brief Method .ctor, addr 0x2a1ee6c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* loc, ::StringW localHash,
                    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* remoteCatalogLocation);

  /// @brief Method get_HashLocation, addr 0x2a25674, size 0x11c, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* get_HashLocation();

  /// @brief Method get_CanUpdateContent, addr 0x2a25790, size 0x1a4, virtual false, abstract: false, final false
  inline bool get_CanUpdateContent();

  /// @brief Method UpdateContent, addr 0x2a25934, size 0xc, virtual false, abstract: false, final false
  inline void UpdateContent(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* locator, ::StringW hash,
                            ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* loc);

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl__ResourceLocatorInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl__ResourceLocatorInfo(__AddressablesImpl__ResourceLocatorInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl__ResourceLocatorInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl__ResourceLocatorInfo(__AddressablesImpl__ResourceLocatorInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl__ResourceLocatorInfo();

public:
  /// @brief Field <Locator>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* ____Locator_k__BackingField;

  /// @brief Field <LocalHash>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____LocalHash_k__BackingField;

  /// @brief Field <CatalogLocation>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* ____CatalogLocation_k__BackingField;

  /// @brief Field <ContentUpdateAvailable>k__BackingField, offset: 0x28, size: 0x1, def value: None
  bool ____ContentUpdateAvailable_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo, ____Locator_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo, ____LocalHash_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo, ____CatalogLocation_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo, ____ContentUpdateAvailable_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets
// Type: ::LoadResourceLocationKeyOp
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(3834)), TypeDefinitionIndex(TypeDefinitionIndex(14034)), TypeDefinitionIndex(TypeDefinitionIndex(14045)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3834), inst: 2573 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14045), inst: 794 })] Self:
// TypeDefinitionIndex(TypeDefinitionIndex(14065)) CS Name: ::AddressablesImpl::LoadResourceLocationKeyOp*
class CORDL_TYPE __AddressablesImpl__LoadResourceLocationKeyOp : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<
                                                                     ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> {
public:
  // Declarations
  /// @brief Field m_Keys, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Keys, put = __cordl_internal_set_m_Keys))::System::Object* m_Keys;

  /// @brief Field m_locations, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_locations,
                      put = __cordl_internal_set_m_locations))::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* m_locations;

  /// @brief Field m_Addressables, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Addressables, put = __cordl_internal_set_m_Addressables))::UnityEngine::AddressableAssets::AddressablesImpl* m_Addressables;

  /// @brief Field m_ResourceType, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ResourceType, put = __cordl_internal_set_m_ResourceType))::System::Type* m_ResourceType;

  __declspec(property(get = get_DebugName))::StringW DebugName;

  constexpr ::System::Object*& __cordl_internal_get_m_Keys();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_m_Keys() const;

  constexpr void __cordl_internal_set_m_Keys(::System::Object* value);

  constexpr ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*& __cordl_internal_get_m_locations();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> const&
  __cordl_internal_get_m_locations() const;

  constexpr void __cordl_internal_set_m_locations(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* value);

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get_m_Addressables();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get_m_Addressables() const;

  constexpr void __cordl_internal_set_m_Addressables(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr ::System::Type*& __cordl_internal_get_m_ResourceType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_m_ResourceType() const;

  constexpr void __cordl_internal_set_m_ResourceType(::System::Type* value);

  /// @brief Method get_DebugName, addr 0x2a25940, size 0x20, virtual true, abstract: false, final false
  inline ::StringW get_DebugName();

  /// @brief Method Init, addr 0x2a21588, size 0xc, virtual false, abstract: false, final false
  inline void Init(::UnityEngine::AddressableAssets::AddressablesImpl* aa, ::System::Type* t, ::System::Object* keys);

  /// @brief Method InvokeWaitForCompletion, addr 0x2a25960, size 0x74, virtual true, abstract: false, final false
  inline bool InvokeWaitForCompletion();

  /// @brief Method Execute, addr 0x2a259d4, size 0xdc, virtual true, abstract: false, final false
  inline void Execute();

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl__LoadResourceLocationKeyOp* New_ctor();

  /// @brief Method .ctor, addr 0x2a21540, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl__LoadResourceLocationKeyOp", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl__LoadResourceLocationKeyOp(__AddressablesImpl__LoadResourceLocationKeyOp&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl__LoadResourceLocationKeyOp", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl__LoadResourceLocationKeyOp(__AddressablesImpl__LoadResourceLocationKeyOp const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl__LoadResourceLocationKeyOp();

public:
  /// @brief Field m_Keys, offset: 0x88, size: 0x8, def value: None
  ::System::Object* ___m_Keys;

  /// @brief Field m_locations, offset: 0x90, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* ___m_locations;

  /// @brief Field m_Addressables, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AddressablesImpl* ___m_Addressables;

  /// @brief Field m_ResourceType, offset: 0xa0, size: 0x8, def value: None
  ::System::Type* ___m_ResourceType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::__AddressablesImpl__LoadResourceLocationKeyOp, 0xa8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl__LoadResourceLocationKeyOp, ___m_Keys) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl__LoadResourceLocationKeyOp, ___m_locations) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl__LoadResourceLocationKeyOp, ___m_Addressables) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl__LoadResourceLocationKeyOp, ___m_ResourceType) == 0xa0, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets
// Type: ::LoadResourceLocationKeysOp
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(3834)), TypeDefinitionIndex(TypeDefinitionIndex(14034)), TypeDefinitionIndex(TypeDefinitionIndex(14045)),
// TypeDefinitionIndex(TypeDefinitionIndex(14062)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3834), inst: 2573 }), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(14045), inst: 794 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(14066)) CS Name: ::AddressablesImpl::LoadResourceLocationKeysOp*
class CORDL_TYPE __AddressablesImpl__LoadResourceLocationKeysOp : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<
                                                                      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> {
public:
  // Declarations
  /// @brief Field m_Key, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Key, put = __cordl_internal_set_m_Key))::System::Collections::IEnumerable* m_Key;

  /// @brief Field m_MergeMode, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MergeMode, put = __cordl_internal_set_m_MergeMode))::UnityEngine::AddressableAssets::__Addressables__MergeMode m_MergeMode;

  /// @brief Field m_locations, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_locations,
                      put = __cordl_internal_set_m_locations))::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* m_locations;

  /// @brief Field m_Addressables, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Addressables, put = __cordl_internal_set_m_Addressables))::UnityEngine::AddressableAssets::AddressablesImpl* m_Addressables;

  /// @brief Field m_ResourceType, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ResourceType, put = __cordl_internal_set_m_ResourceType))::System::Type* m_ResourceType;

  __declspec(property(get = get_DebugName))::StringW DebugName;

  constexpr ::System::Collections::IEnumerable*& __cordl_internal_get_m_Key();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerable*> const& __cordl_internal_get_m_Key() const;

  constexpr void __cordl_internal_set_m_Key(::System::Collections::IEnumerable* value);

  constexpr ::UnityEngine::AddressableAssets::__Addressables__MergeMode& __cordl_internal_get_m_MergeMode();

  constexpr ::UnityEngine::AddressableAssets::__Addressables__MergeMode const& __cordl_internal_get_m_MergeMode() const;

  constexpr void __cordl_internal_set_m_MergeMode(::UnityEngine::AddressableAssets::__Addressables__MergeMode value);

  constexpr ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*& __cordl_internal_get_m_locations();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> const&
  __cordl_internal_get_m_locations() const;

  constexpr void __cordl_internal_set_m_locations(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* value);

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get_m_Addressables();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get_m_Addressables() const;

  constexpr void __cordl_internal_set_m_Addressables(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr ::System::Type*& __cordl_internal_get_m_ResourceType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_m_ResourceType() const;

  constexpr void __cordl_internal_set_m_ResourceType(::System::Type* value);

  /// @brief Method get_DebugName, addr 0x2a25ab0, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_DebugName();

  /// @brief Method Init, addr 0x2a213f0, size 0x10, virtual false, abstract: false, final false
  inline void Init(::UnityEngine::AddressableAssets::AddressablesImpl* aa, ::System::Type* t, ::System::Collections::IEnumerable* key,
                   ::UnityEngine::AddressableAssets::__Addressables__MergeMode mergeMode);

  /// @brief Method Execute, addr 0x2a25af0, size 0xe0, virtual true, abstract: false, final false
  inline void Execute();

  /// @brief Method InvokeWaitForCompletion, addr 0x2a25bd0, size 0x74, virtual true, abstract: false, final false
  inline bool InvokeWaitForCompletion();

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl__LoadResourceLocationKeysOp* New_ctor();

  /// @brief Method .ctor, addr 0x2a213a8, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl__LoadResourceLocationKeysOp", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl__LoadResourceLocationKeysOp(__AddressablesImpl__LoadResourceLocationKeysOp&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl__LoadResourceLocationKeysOp", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl__LoadResourceLocationKeysOp(__AddressablesImpl__LoadResourceLocationKeysOp const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl__LoadResourceLocationKeysOp();

public:
  /// @brief Field m_Key, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::IEnumerable* ___m_Key;

  /// @brief Field m_MergeMode, offset: 0x90, size: 0x4, def value: None
  ::UnityEngine::AddressableAssets::__Addressables__MergeMode ___m_MergeMode;

  /// @brief Field m_locations, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* ___m_locations;

  /// @brief Field m_Addressables, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AddressablesImpl* ___m_Addressables;

  /// @brief Field m_ResourceType, offset: 0xa8, size: 0x8, def value: None
  ::System::Type* ___m_ResourceType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::__AddressablesImpl__LoadResourceLocationKeysOp, 0xb0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl__LoadResourceLocationKeysOp, ___m_Key) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl__LoadResourceLocationKeysOp, ___m_MergeMode) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl__LoadResourceLocationKeysOp, ___m_locations) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl__LoadResourceLocationKeysOp, ___m_Addressables) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl__LoadResourceLocationKeysOp, ___m_ResourceType) == 0xa8, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14067))
// CS Name: ::AddressablesImpl::<>c*
class CORDL_TYPE __AddressablesImpl____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::AddressableAssets::__AddressablesImpl____c* __9;

  /// @brief Field <>9__60_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__60_0, put = setStaticF___9__60_0))::System::Func_2<::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo*,
                                                                                                      ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>* __9__60_0;

  /// @brief Field <>9__139_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__139_0, put = setStaticF___9__139_0))::System::Func_2<::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo*, bool>* __9__139_0;

  /// @brief Field <>9__139_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__139_1,
                             put = setStaticF___9__139_1))::System::Func_2<::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo*, ::StringW>* __9__139_1;

  /// @brief Field <>9__143_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__143_0,
                             put = setStaticF___9__143_0))::System::Func_2<::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo*, ::StringW>* __9__143_0;

  static inline void setStaticF___9(::UnityEngine::AddressableAssets::__AddressablesImpl____c* value);

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c* getStaticF___9();

  static inline void
  setStaticF___9__60_0(::System::Func_2<::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo*, ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>* value);

  static inline ::System::Func_2<::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo*, ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*
  getStaticF___9__60_0();

  static inline void setStaticF___9__139_0(::System::Func_2<::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo*, bool>* value);

  static inline ::System::Func_2<::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo*, bool>* getStaticF___9__139_0();

  static inline void setStaticF___9__139_1(::System::Func_2<::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo*, ::StringW>* value);

  static inline ::System::Func_2<::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo*, ::StringW>* getStaticF___9__139_1();

  static inline void setStaticF___9__143_0(::System::Func_2<::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo*, ::StringW>* value);

  static inline ::System::Func_2<::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo*, ::StringW>* getStaticF___9__143_0();

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c* New_ctor();

  /// @brief Method .ctor, addr 0x2a25ca8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_ResourceLocators>b__60_0, addr 0x2a25cb0, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* _get_ResourceLocators_b__60_0(::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo* l);

  /// @brief Method <get_CatalogsWithAvailableUpdates>b__139_0, addr 0x2a25cc8, size 0x18, virtual false, abstract: false, final false
  inline bool _get_CatalogsWithAvailableUpdates_b__139_0(::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo* s);

  /// @brief Method <get_CatalogsWithAvailableUpdates>b__139_1, addr 0x2a25ce0, size 0xa4, virtual false, abstract: false, final false
  inline ::StringW _get_CatalogsWithAvailableUpdates_b__139_1(::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo* s);

  /// @brief Method <CleanBundleCache>b__143_0, addr 0x2a25d84, size 0xa4, virtual false, abstract: false, final false
  inline ::StringW _CleanBundleCache_b__143_0(::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo* s);

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c(__AddressablesImpl____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c(__AddressablesImpl____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::__AddressablesImpl____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets
// Type: ::<>c__DisplayClass62_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14068))
// CS Name: ::AddressablesImpl::<>c__DisplayClass62_0*
class CORDL_TYPE __AddressablesImpl____c__DisplayClass62_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field loc, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_loc, put = __cordl_internal_set_loc))::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* loc;

  constexpr ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*& __cordl_internal_get_loc();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> const& __cordl_internal_get_loc() const;

  constexpr void __cordl_internal_set_loc(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* value);

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass62_0* New_ctor();

  /// @brief Method .ctor, addr 0x2a1eea8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <RemoveResourceLocator>b__0, addr 0x2a25e28, size 0x24, virtual false, abstract: false, final false
  inline bool _RemoveResourceLocator_b__0(::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo* l);

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass62_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass62_0(__AddressablesImpl____c__DisplayClass62_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass62_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass62_0(__AddressablesImpl____c__DisplayClass62_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass62_0();

public:
  /// @brief Field loc, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* ___loc;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass62_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass62_0, ___loc) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets
// Type: ::<>c__DisplayClass71_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14069))
// CS Name: ::AddressablesImpl::<>c__DisplayClass71_0*
class CORDL_TYPE __AddressablesImpl____c__DisplayClass71_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::AddressableAssets::AddressablesImpl* __4__this;

  /// @brief Field catalogPath, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_catalogPath, put = __cordl_internal_set_catalogPath))::StringW catalogPath;

  /// @brief Field autoReleaseHandle, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_autoReleaseHandle, put = __cordl_internal_set_autoReleaseHandle)) bool autoReleaseHandle;

  /// @brief Field providerSuffix, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_providerSuffix, put = __cordl_internal_set_providerSuffix))::StringW providerSuffix;

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr ::StringW& __cordl_internal_get_catalogPath();

  constexpr ::StringW const& __cordl_internal_get_catalogPath() const;

  constexpr void __cordl_internal_set_catalogPath(::StringW value);

  constexpr bool& __cordl_internal_get_autoReleaseHandle();

  constexpr bool const& __cordl_internal_get_autoReleaseHandle() const;

  constexpr void __cordl_internal_set_autoReleaseHandle(bool value);

  constexpr ::StringW& __cordl_internal_get_providerSuffix();

  constexpr ::StringW const& __cordl_internal_get_providerSuffix() const;

  constexpr void __cordl_internal_set_providerSuffix(::StringW value);

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass71_0* New_ctor();

  /// @brief Method .ctor, addr 0x2a20a6c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <LoadContentCatalogAsync>b__0, addr 0x2a25e4c, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
  _LoadContentCatalogAsync_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass71_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass71_0(__AddressablesImpl____c__DisplayClass71_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass71_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass71_0(__AddressablesImpl____c__DisplayClass71_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass71_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AddressablesImpl* _____4__this;

  /// @brief Field catalogPath, offset: 0x18, size: 0x8, def value: None
  ::StringW ___catalogPath;

  /// @brief Field autoReleaseHandle, offset: 0x20, size: 0x1, def value: None
  bool ___autoReleaseHandle;

  /// @brief Field providerSuffix, offset: 0x28, size: 0x8, def value: None
  ::StringW ___providerSuffix;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass71_0, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass71_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass71_0, ___catalogPath) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass71_0, ___autoReleaseHandle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass71_0, ___providerSuffix) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets
// Type: ::<>c__DisplayClass77_0`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets {
// cpp template
template <typename TObject>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14070))
// CS Name: ::AddressablesImpl::<>c__DisplayClass77_0`1<TObject>*
class CORDL_TYPE __AddressablesImpl____c__DisplayClass77_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::AddressableAssets::AddressablesImpl* __4__this;

  /// @brief Field key, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key))::System::Object* key;

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr ::System::Object*& __cordl_internal_get_key();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_key() const;

  constexpr void __cordl_internal_set_key(::System::Object* value);

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass77_0_1<TObject>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <LoadAssetWithChain>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> _LoadAssetWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass77_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass77_0_1(__AddressablesImpl____c__DisplayClass77_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass77_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass77_0_1(__AddressablesImpl____c__DisplayClass77_0_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass77_0_1();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AddressablesImpl* _____4__this;

  /// @brief Field key, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___key;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::AddressableAssets
// Type: ::<>c__DisplayClass81_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14062))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14071))
// CS Name: ::AddressablesImpl::<>c__DisplayClass81_0*
class CORDL_TYPE __AddressablesImpl____c__DisplayClass81_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::AddressableAssets::AddressablesImpl* __4__this;

  /// @brief Field keys, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_keys, put = __cordl_internal_set_keys))::System::Collections::IEnumerable* keys;

  /// @brief Field mode, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_mode, put = __cordl_internal_set_mode))::UnityEngine::AddressableAssets::__Addressables__MergeMode mode;

  /// @brief Field type, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type))::System::Type* type;

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr ::System::Collections::IEnumerable*& __cordl_internal_get_keys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerable*> const& __cordl_internal_get_keys() const;

  constexpr void __cordl_internal_set_keys(::System::Collections::IEnumerable* value);

  constexpr ::UnityEngine::AddressableAssets::__Addressables__MergeMode& __cordl_internal_get_mode();

  constexpr ::UnityEngine::AddressableAssets::__Addressables__MergeMode const& __cordl_internal_get_mode() const;

  constexpr void __cordl_internal_set_mode(::UnityEngine::AddressableAssets::__Addressables__MergeMode value);

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_type() const;

  constexpr void __cordl_internal_set_type(::System::Type* value);

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass81_0* New_ctor();

  /// @brief Method .ctor, addr 0x2a213a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <LoadResourceLocationsWithChain>b__0, addr 0x2a25e90, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
  _LoadResourceLocationsWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass81_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass81_0(__AddressablesImpl____c__DisplayClass81_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass81_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass81_0(__AddressablesImpl____c__DisplayClass81_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass81_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AddressablesImpl* _____4__this;

  /// @brief Field keys, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::IEnumerable* ___keys;

  /// @brief Field mode, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::AddressableAssets::__Addressables__MergeMode ___mode;

  /// @brief Field type, offset: 0x28, size: 0x8, def value: None
  ::System::Type* ___type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass81_0, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass81_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass81_0, ___keys) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass81_0, ___mode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass81_0, ___type) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets
// Type: ::<>c__DisplayClass83_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14072))
// CS Name: ::AddressablesImpl::<>c__DisplayClass83_0*
class CORDL_TYPE __AddressablesImpl____c__DisplayClass83_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::AddressableAssets::AddressablesImpl* __4__this;

  /// @brief Field key, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key))::System::Object* key;

  /// @brief Field type, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type))::System::Type* type;

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr ::System::Object*& __cordl_internal_get_key();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_key() const;

  constexpr void __cordl_internal_set_key(::System::Object* value);

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_type() const;

  constexpr void __cordl_internal_set_type(::System::Type* value);

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass83_0* New_ctor();

  /// @brief Method .ctor, addr 0x2a21538, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <LoadResourceLocationsWithChain>b__0, addr 0x2a25ed4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
  _LoadResourceLocationsWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass83_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass83_0(__AddressablesImpl____c__DisplayClass83_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass83_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass83_0(__AddressablesImpl____c__DisplayClass83_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass83_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AddressablesImpl* _____4__this;

  /// @brief Field key, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___key;

  /// @brief Field type, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ___type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass83_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass83_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass83_0, ___key) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass83_0, ___type) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets
// Type: ::<>c__DisplayClass86_0`1
// SizeInfo { instance_size: 48, native_size: 45, calculated_instance_size: 48, calculated_native_size: 45, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets {
// cpp template
template <typename TObject>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14062))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14073))
// CS Name: ::AddressablesImpl::<>c__DisplayClass86_0`1<TObject>*
class CORDL_TYPE __AddressablesImpl____c__DisplayClass86_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::AddressableAssets::AddressablesImpl* __4__this;

  /// @brief Field keys, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_keys, put = __cordl_internal_set_keys))::System::Collections::IEnumerable* keys;

  /// @brief Field callback, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback))::System::Action_1<TObject>* callback;

  /// @brief Field mode, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_mode, put = __cordl_internal_set_mode))::UnityEngine::AddressableAssets::__Addressables__MergeMode mode;

  /// @brief Field releaseDependenciesOnFailure, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_releaseDependenciesOnFailure, put = __cordl_internal_set_releaseDependenciesOnFailure)) bool releaseDependenciesOnFailure;

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr ::System::Collections::IEnumerable*& __cordl_internal_get_keys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerable*> const& __cordl_internal_get_keys() const;

  constexpr void __cordl_internal_set_keys(::System::Collections::IEnumerable* value);

  constexpr ::System::Action_1<TObject>*& __cordl_internal_get_callback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<TObject>*> const& __cordl_internal_get_callback() const;

  constexpr void __cordl_internal_set_callback(::System::Action_1<TObject>* value);

  constexpr ::UnityEngine::AddressableAssets::__Addressables__MergeMode& __cordl_internal_get_mode();

  constexpr ::UnityEngine::AddressableAssets::__Addressables__MergeMode const& __cordl_internal_get_mode() const;

  constexpr void __cordl_internal_set_mode(::UnityEngine::AddressableAssets::__Addressables__MergeMode value);

  constexpr bool& __cordl_internal_get_releaseDependenciesOnFailure();

  constexpr bool const& __cordl_internal_get_releaseDependenciesOnFailure() const;

  constexpr void __cordl_internal_set_releaseDependenciesOnFailure(bool value);

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass86_0_1<TObject>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <LoadAssetsWithChain>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  _LoadAssetsWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass86_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass86_0_1(__AddressablesImpl____c__DisplayClass86_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass86_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass86_0_1(__AddressablesImpl____c__DisplayClass86_0_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass86_0_1();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AddressablesImpl* _____4__this;

  /// @brief Field keys, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::IEnumerable* ___keys;

  /// @brief Field callback, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<TObject>* ___callback;

  /// @brief Field mode, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::AddressableAssets::__Addressables__MergeMode ___mode;

  /// @brief Field releaseDependenciesOnFailure, offset: 0x2c, size: 0x1, def value: None
  bool ___releaseDependenciesOnFailure;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::AddressableAssets
// Type: ::<>c__DisplayClass88_0`1
// SizeInfo { instance_size: 48, native_size: 41, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets {
// cpp template
template <typename TObject>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14074))
// CS Name: ::AddressablesImpl::<>c__DisplayClass88_0`1<TObject>*
class CORDL_TYPE __AddressablesImpl____c__DisplayClass88_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::AddressableAssets::AddressablesImpl* __4__this;

  /// @brief Field key, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key))::System::Object* key;

  /// @brief Field callback, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback))::System::Action_1<TObject>* callback;

  /// @brief Field releaseDependenciesOnFailure, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_releaseDependenciesOnFailure, put = __cordl_internal_set_releaseDependenciesOnFailure)) bool releaseDependenciesOnFailure;

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr ::System::Object*& __cordl_internal_get_key();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_key() const;

  constexpr void __cordl_internal_set_key(::System::Object* value);

  constexpr ::System::Action_1<TObject>*& __cordl_internal_get_callback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<TObject>*> const& __cordl_internal_get_callback() const;

  constexpr void __cordl_internal_set_callback(::System::Action_1<TObject>* value);

  constexpr bool& __cordl_internal_get_releaseDependenciesOnFailure();

  constexpr bool const& __cordl_internal_get_releaseDependenciesOnFailure() const;

  constexpr void __cordl_internal_set_releaseDependenciesOnFailure(bool value);

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass88_0_1<TObject>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <LoadAssetsWithChain>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  _LoadAssetsWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op2);

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass88_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass88_0_1(__AddressablesImpl____c__DisplayClass88_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass88_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass88_0_1(__AddressablesImpl____c__DisplayClass88_0_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass88_0_1();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AddressablesImpl* _____4__this;

  /// @brief Field key, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___key;

  /// @brief Field callback, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<TObject>* ___callback;

  /// @brief Field releaseDependenciesOnFailure, offset: 0x28, size: 0x1, def value: None
  bool ___releaseDependenciesOnFailure;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::AddressableAssets
// Type: ::<>c__DisplayClass96_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14075))
// CS Name: ::AddressablesImpl::<>c__DisplayClass96_0*
class CORDL_TYPE __AddressablesImpl____c__DisplayClass96_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::AddressableAssets::AddressablesImpl* __4__this;

  /// @brief Field key, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key))::System::Object* key;

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr ::System::Object*& __cordl_internal_get_key();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_key() const;

  constexpr void __cordl_internal_set_key(::System::Object* value);

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass96_0* New_ctor();

  /// @brief Method .ctor, addr 0x2a21984, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <GetDownloadSizeWithChain>b__0, addr 0x2a25f10, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>
  _GetDownloadSizeWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass96_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass96_0(__AddressablesImpl____c__DisplayClass96_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass96_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass96_0(__AddressablesImpl____c__DisplayClass96_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass96_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AddressablesImpl* _____4__this;

  /// @brief Field key, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___key;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass96_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass96_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass96_0, ___key) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets
// Type: ::<>c__DisplayClass97_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14076))
// CS Name: ::AddressablesImpl::<>c__DisplayClass97_0*
class CORDL_TYPE __AddressablesImpl____c__DisplayClass97_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::AddressableAssets::AddressablesImpl* __4__this;

  /// @brief Field keys, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_keys, put = __cordl_internal_set_keys))::System::Collections::IEnumerable* keys;

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr ::System::Collections::IEnumerable*& __cordl_internal_get_keys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerable*> const& __cordl_internal_get_keys() const;

  constexpr void __cordl_internal_set_keys(::System::Collections::IEnumerable* value);

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass97_0* New_ctor();

  /// @brief Method .ctor, addr 0x2a21abc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <GetDownloadSizeWithChain>b__0, addr 0x2a25f4c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>
  _GetDownloadSizeWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass97_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass97_0(__AddressablesImpl____c__DisplayClass97_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass97_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass97_0(__AddressablesImpl____c__DisplayClass97_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass97_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AddressablesImpl* _____4__this;

  /// @brief Field keys, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::IEnumerable* ___keys;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass97_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass97_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass97_0, ___keys) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets
// Type: ::<>c__DisplayClass100_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14077))
// CS Name: ::AddressablesImpl::<>c__DisplayClass100_0*
class CORDL_TYPE __AddressablesImpl____c__DisplayClass100_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::AddressableAssets::AddressablesImpl* __4__this;

  /// @brief Field key, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key))::System::Object* key;

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr ::System::Object*& __cordl_internal_get_key();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_key() const;

  constexpr void __cordl_internal_set_key(::System::Object* value);

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass100_0* New_ctor();

  /// @brief Method .ctor, addr 0x2a21c64, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <DownloadDependenciesAsyncWithChain>b__0, addr 0x2a25f88, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource*>*>
  _DownloadDependenciesAsyncWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass100_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass100_0(__AddressablesImpl____c__DisplayClass100_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass100_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass100_0(__AddressablesImpl____c__DisplayClass100_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass100_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AddressablesImpl* _____4__this;

  /// @brief Field key, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___key;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass100_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass100_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass100_0, ___key) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets
// Type: ::<>c__DisplayClass104_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14078))
// CS Name: ::AddressablesImpl::<>c__DisplayClass104_0*
class CORDL_TYPE __AddressablesImpl____c__DisplayClass104_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::AddressableAssets::AddressablesImpl* __4__this;

  /// @brief Field locations, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_locations,
                      put = __cordl_internal_set_locations))::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations;

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*& __cordl_internal_get_locations();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> const&
  __cordl_internal_get_locations() const;

  constexpr void __cordl_internal_set_locations(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* value);

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass104_0* New_ctor();

  /// @brief Method .ctor, addr 0x2a227a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <DownloadDependenciesAsyncWithChain>b__0, addr 0x2a26014, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource*>*>
  _DownloadDependenciesAsyncWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass104_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass104_0(__AddressablesImpl____c__DisplayClass104_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass104_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass104_0(__AddressablesImpl____c__DisplayClass104_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass104_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AddressablesImpl* _____4__this;

  /// @brief Field locations, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* ___locations;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass104_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass104_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass104_0, ___locations) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets
// Type: ::<>c__DisplayClass106_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14062))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14079))
// CS Name: ::AddressablesImpl::<>c__DisplayClass106_0*
class CORDL_TYPE __AddressablesImpl____c__DisplayClass106_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::AddressableAssets::AddressablesImpl* __4__this;

  /// @brief Field keys, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_keys, put = __cordl_internal_set_keys))::System::Collections::IEnumerable* keys;

  /// @brief Field mode, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_mode, put = __cordl_internal_set_mode))::UnityEngine::AddressableAssets::__Addressables__MergeMode mode;

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr ::System::Collections::IEnumerable*& __cordl_internal_get_keys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerable*> const& __cordl_internal_get_keys() const;

  constexpr void __cordl_internal_set_keys(::System::Collections::IEnumerable* value);

  constexpr ::UnityEngine::AddressableAssets::__Addressables__MergeMode& __cordl_internal_get_mode();

  constexpr ::UnityEngine::AddressableAssets::__Addressables__MergeMode const& __cordl_internal_get_mode() const;

  constexpr void __cordl_internal_set_mode(::UnityEngine::AddressableAssets::__Addressables__MergeMode value);

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass106_0* New_ctor();

  /// @brief Method .ctor, addr 0x2a22960, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <DownloadDependenciesAsyncWithChain>b__0, addr 0x2a260a0, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource*>*>
  _DownloadDependenciesAsyncWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass106_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass106_0(__AddressablesImpl____c__DisplayClass106_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass106_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass106_0(__AddressablesImpl____c__DisplayClass106_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass106_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AddressablesImpl* _____4__this;

  /// @brief Field keys, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::IEnumerable* ___keys;

  /// @brief Field mode, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::AddressableAssets::__Addressables__MergeMode ___mode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass106_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass106_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass106_0, ___keys) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass106_0, ___mode) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets
// Type: ::<>c__DisplayClass111_0`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets {
// cpp template
template <typename TObject>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14080))
// CS Name: ::AddressablesImpl::<>c__DisplayClass111_0`1<TObject>*
class CORDL_TYPE __AddressablesImpl____c__DisplayClass111_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field unloadSceneOpExcludeReleaseCallback, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_unloadSceneOpExcludeReleaseCallback, put = __cordl_internal_set_unloadSceneOpExcludeReleaseCallback)) bool unloadSceneOpExcludeReleaseCallback;

  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::AddressableAssets::AddressablesImpl* __4__this;

  constexpr bool& __cordl_internal_get_unloadSceneOpExcludeReleaseCallback();

  constexpr bool const& __cordl_internal_get_unloadSceneOpExcludeReleaseCallback() const;

  constexpr void __cordl_internal_set_unloadSceneOpExcludeReleaseCallback(bool value);

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass111_0_1<TObject>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <AutoReleaseHandleOnCompletion>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _AutoReleaseHandleOnCompletion_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> op);

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass111_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass111_0_1(__AddressablesImpl____c__DisplayClass111_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass111_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass111_0_1(__AddressablesImpl____c__DisplayClass111_0_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass111_0_1();

public:
  /// @brief Field unloadSceneOpExcludeReleaseCallback, offset: 0x10, size: 0x1, def value: None
  bool ___unloadSceneOpExcludeReleaseCallback;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AddressablesImpl* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::AddressableAssets
// Type: ::<>c__DisplayClass113_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14081))
// CS Name: ::AddressablesImpl::<>c__DisplayClass113_0*
class CORDL_TYPE __AddressablesImpl____c__DisplayClass113_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::AddressableAssets::AddressablesImpl* __4__this;

  /// @brief Field key, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key))::System::Object* key;

  /// @brief Field autoReleaseHandle, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_autoReleaseHandle, put = __cordl_internal_set_autoReleaseHandle)) bool autoReleaseHandle;

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr ::System::Object*& __cordl_internal_get_key();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_key() const;

  constexpr void __cordl_internal_set_key(::System::Object* value);

  constexpr bool& __cordl_internal_get_autoReleaseHandle();

  constexpr bool const& __cordl_internal_get_autoReleaseHandle() const;

  constexpr void __cordl_internal_set_autoReleaseHandle(bool value);

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass113_0* New_ctor();

  /// @brief Method .ctor, addr 0x2a230b0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <ClearDependencyCacheAsync>b__0, addr 0x2a26130, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> _ClearDependencyCacheAsync_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass113_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass113_0(__AddressablesImpl____c__DisplayClass113_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass113_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass113_0(__AddressablesImpl____c__DisplayClass113_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass113_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AddressablesImpl* _____4__this;

  /// @brief Field key, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___key;

  /// @brief Field autoReleaseHandle, offset: 0x20, size: 0x1, def value: None
  bool ___autoReleaseHandle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass113_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass113_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass113_0, ___key) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass113_0, ___autoReleaseHandle) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets
// Type: ::<>c__DisplayClass114_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14082))
// CS Name: ::AddressablesImpl::<>c__DisplayClass114_0*
class CORDL_TYPE __AddressablesImpl____c__DisplayClass114_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::AddressableAssets::AddressablesImpl* __4__this;

  /// @brief Field locations, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_locations,
                      put = __cordl_internal_set_locations))::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations;

  /// @brief Field autoReleaseHandle, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_autoReleaseHandle, put = __cordl_internal_set_autoReleaseHandle)) bool autoReleaseHandle;

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*& __cordl_internal_get_locations();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> const&
  __cordl_internal_get_locations() const;

  constexpr void __cordl_internal_set_locations(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* value);

  constexpr bool& __cordl_internal_get_autoReleaseHandle();

  constexpr bool const& __cordl_internal_get_autoReleaseHandle() const;

  constexpr void __cordl_internal_set_autoReleaseHandle(bool value);

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass114_0* New_ctor();

  /// @brief Method .ctor, addr 0x2a230b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <ClearDependencyCacheAsync>b__0, addr 0x2a26170, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> _ClearDependencyCacheAsync_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass114_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass114_0(__AddressablesImpl____c__DisplayClass114_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass114_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass114_0(__AddressablesImpl____c__DisplayClass114_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass114_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AddressablesImpl* _____4__this;

  /// @brief Field locations, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* ___locations;

  /// @brief Field autoReleaseHandle, offset: 0x20, size: 0x1, def value: None
  bool ___autoReleaseHandle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass114_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass114_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass114_0, ___locations) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass114_0, ___autoReleaseHandle) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets
// Type: ::<>c__DisplayClass115_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14083))
// CS Name: ::AddressablesImpl::<>c__DisplayClass115_0*
class CORDL_TYPE __AddressablesImpl____c__DisplayClass115_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::AddressableAssets::AddressablesImpl* __4__this;

  /// @brief Field keys, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_keys, put = __cordl_internal_set_keys))::System::Collections::IEnumerable* keys;

  /// @brief Field autoReleaseHandle, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_autoReleaseHandle, put = __cordl_internal_set_autoReleaseHandle)) bool autoReleaseHandle;

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr ::System::Collections::IEnumerable*& __cordl_internal_get_keys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerable*> const& __cordl_internal_get_keys() const;

  constexpr void __cordl_internal_set_keys(::System::Collections::IEnumerable* value);

  constexpr bool& __cordl_internal_get_autoReleaseHandle();

  constexpr bool const& __cordl_internal_get_autoReleaseHandle() const;

  constexpr void __cordl_internal_set_autoReleaseHandle(bool value);

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass115_0* New_ctor();

  /// @brief Method .ctor, addr 0x2a230c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <ClearDependencyCacheAsync>b__0, addr 0x2a261b0, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> _ClearDependencyCacheAsync_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass115_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass115_0(__AddressablesImpl____c__DisplayClass115_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass115_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass115_0(__AddressablesImpl____c__DisplayClass115_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass115_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AddressablesImpl* _____4__this;

  /// @brief Field keys, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::IEnumerable* ___keys;

  /// @brief Field autoReleaseHandle, offset: 0x20, size: 0x1, def value: None
  bool ___autoReleaseHandle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass115_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass115_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass115_0, ___keys) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass115_0, ___autoReleaseHandle) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets
// Type: ::<>c__DisplayClass120_0
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14011))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14084))
// CS Name: ::AddressablesImpl::<>c__DisplayClass120_0*
class CORDL_TYPE __AddressablesImpl____c__DisplayClass120_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::AddressableAssets::AddressablesImpl* __4__this;

  /// @brief Field key, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key))::System::Object* key;

  /// @brief Field instantiateParameters, offset 0x20, size 0x30
  __declspec(property(get = __cordl_internal_get_instantiateParameters,
                      put = __cordl_internal_set_instantiateParameters))::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters;

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr ::System::Object*& __cordl_internal_get_key();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_key() const;

  constexpr void __cordl_internal_set_key(::System::Object* value);

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters& __cordl_internal_get_instantiateParameters();

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters const& __cordl_internal_get_instantiateParameters() const;

  constexpr void __cordl_internal_set_instantiateParameters(::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters value);

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass120_0* New_ctor();

  /// @brief Method .ctor, addr 0x2a232d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <InstantiateWithChain>b__0, addr 0x2a261f0, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  _InstantiateWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass120_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass120_0(__AddressablesImpl____c__DisplayClass120_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass120_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass120_0(__AddressablesImpl____c__DisplayClass120_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass120_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AddressablesImpl* _____4__this;

  /// @brief Field key, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___key;

  /// @brief Field instantiateParameters, offset: 0x20, size: 0x30, def value: None
  ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters ___instantiateParameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass120_0, 0x50>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass120_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass120_0, ___key) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass120_0, ___instantiateParameters) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets
// Type: ::<>c__DisplayClass122_0
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14011))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14085))
// CS Name: ::AddressablesImpl::<>c__DisplayClass122_0*
class CORDL_TYPE __AddressablesImpl____c__DisplayClass122_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::AddressableAssets::AddressablesImpl* __4__this;

  /// @brief Field location, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_location, put = __cordl_internal_set_location))::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location;

  /// @brief Field instantiateParameters, offset 0x20, size 0x30
  __declspec(property(get = __cordl_internal_get_instantiateParameters,
                      put = __cordl_internal_set_instantiateParameters))::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters;

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*& __cordl_internal_get_location();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*> const& __cordl_internal_get_location() const;

  constexpr void __cordl_internal_set_location(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value);

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters& __cordl_internal_get_instantiateParameters();

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters const& __cordl_internal_get_instantiateParameters() const;

  constexpr void __cordl_internal_set_instantiateParameters(::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters value);

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass122_0* New_ctor();

  /// @brief Method .ctor, addr 0x2a23458, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <InstantiateWithChain>b__0, addr 0x2a26254, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  _InstantiateWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass122_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass122_0(__AddressablesImpl____c__DisplayClass122_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass122_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass122_0(__AddressablesImpl____c__DisplayClass122_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass122_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AddressablesImpl* _____4__this;

  /// @brief Field location, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* ___location;

  /// @brief Field instantiateParameters, offset: 0x20, size: 0x30, def value: None
  ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters ___instantiateParameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass122_0, 0x50>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass122_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass122_0, ___location) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass122_0, ___instantiateParameters) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets
// Type: ::<>c__DisplayClass125_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(9143))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14086))
// CS Name: ::AddressablesImpl::<>c__DisplayClass125_0*
class CORDL_TYPE __AddressablesImpl____c__DisplayClass125_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::AddressableAssets::AddressablesImpl* __4__this;

  /// @brief Field key, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key))::System::Object* key;

  /// @brief Field loadMode, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_loadMode, put = __cordl_internal_set_loadMode))::UnityEngine::SceneManagement::LoadSceneMode loadMode;

  /// @brief Field activateOnLoad, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_activateOnLoad, put = __cordl_internal_set_activateOnLoad)) bool activateOnLoad;

  /// @brief Field priority, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_priority, put = __cordl_internal_set_priority)) int32_t priority;

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr ::System::Object*& __cordl_internal_get_key();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_key() const;

  constexpr void __cordl_internal_set_key(::System::Object* value);

  constexpr ::UnityEngine::SceneManagement::LoadSceneMode& __cordl_internal_get_loadMode();

  constexpr ::UnityEngine::SceneManagement::LoadSceneMode const& __cordl_internal_get_loadMode() const;

  constexpr void __cordl_internal_set_loadMode(::UnityEngine::SceneManagement::LoadSceneMode value);

  constexpr bool& __cordl_internal_get_activateOnLoad();

  constexpr bool const& __cordl_internal_get_activateOnLoad() const;

  constexpr void __cordl_internal_set_activateOnLoad(bool value);

  constexpr int32_t& __cordl_internal_get_priority();

  constexpr int32_t const& __cordl_internal_get_priority() const;

  constexpr void __cordl_internal_set_priority(int32_t value);

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass125_0* New_ctor();

  /// @brief Method .ctor, addr 0x2a235cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <LoadSceneWithChain>b__0, addr 0x2a262b8, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  _LoadSceneWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass125_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass125_0(__AddressablesImpl____c__DisplayClass125_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass125_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass125_0(__AddressablesImpl____c__DisplayClass125_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass125_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AddressablesImpl* _____4__this;

  /// @brief Field key, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___key;

  /// @brief Field loadMode, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::SceneManagement::LoadSceneMode ___loadMode;

  /// @brief Field activateOnLoad, offset: 0x24, size: 0x1, def value: None
  bool ___activateOnLoad;

  /// @brief Field priority, offset: 0x28, size: 0x4, def value: None
  int32_t ___priority;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass125_0, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass125_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass125_0, ___key) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass125_0, ___loadMode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass125_0, ___activateOnLoad) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass125_0, ___priority) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets
// Type: ::<>c__DisplayClass131_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 29, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(9146))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14087))
// CS Name: ::AddressablesImpl::<>c__DisplayClass131_0*
class CORDL_TYPE __AddressablesImpl____c__DisplayClass131_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::AddressableAssets::AddressablesImpl* __4__this;

  /// @brief Field unloadOptions, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_unloadOptions, put = __cordl_internal_set_unloadOptions))::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions;

  /// @brief Field autoReleaseHandle, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_autoReleaseHandle, put = __cordl_internal_set_autoReleaseHandle)) bool autoReleaseHandle;

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr ::UnityEngine::SceneManagement::UnloadSceneOptions& __cordl_internal_get_unloadOptions();

  constexpr ::UnityEngine::SceneManagement::UnloadSceneOptions const& __cordl_internal_get_unloadOptions() const;

  constexpr void __cordl_internal_set_unloadOptions(::UnityEngine::SceneManagement::UnloadSceneOptions value);

  constexpr bool& __cordl_internal_get_autoReleaseHandle();

  constexpr bool const& __cordl_internal_get_autoReleaseHandle() const;

  constexpr void __cordl_internal_set_autoReleaseHandle(bool value);

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass131_0* New_ctor();

  /// @brief Method .ctor, addr 0x2a23904, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <CreateUnloadSceneWithChain>b__0, addr 0x2a26304, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  _CreateUnloadSceneWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle completedHandle);

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass131_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass131_0(__AddressablesImpl____c__DisplayClass131_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass131_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass131_0(__AddressablesImpl____c__DisplayClass131_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass131_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AddressablesImpl* _____4__this;

  /// @brief Field unloadOptions, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::SceneManagement::UnloadSceneOptions ___unloadOptions;

  /// @brief Field autoReleaseHandle, offset: 0x1c, size: 0x1, def value: None
  bool ___autoReleaseHandle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass131_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass131_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass131_0, ___unloadOptions) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass131_0, ___autoReleaseHandle) == 0x1c, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets
// Type: ::<>c__DisplayClass132_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 29, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(9146))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14088))
// CS Name: ::AddressablesImpl::<>c__DisplayClass132_0*
class CORDL_TYPE __AddressablesImpl____c__DisplayClass132_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::AddressableAssets::AddressablesImpl* __4__this;

  /// @brief Field unloadOptions, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_unloadOptions, put = __cordl_internal_set_unloadOptions))::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions;

  /// @brief Field autoReleaseHandle, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_autoReleaseHandle, put = __cordl_internal_set_autoReleaseHandle)) bool autoReleaseHandle;

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr ::UnityEngine::SceneManagement::UnloadSceneOptions& __cordl_internal_get_unloadOptions();

  constexpr ::UnityEngine::SceneManagement::UnloadSceneOptions const& __cordl_internal_get_unloadOptions() const;

  constexpr void __cordl_internal_set_unloadOptions(::UnityEngine::SceneManagement::UnloadSceneOptions value);

  constexpr bool& __cordl_internal_get_autoReleaseHandle();

  constexpr bool const& __cordl_internal_get_autoReleaseHandle() const;

  constexpr void __cordl_internal_set_autoReleaseHandle(bool value);

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass132_0* New_ctor();

  /// @brief Method .ctor, addr 0x2a2390c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <CreateUnloadSceneWithChain>b__0, addr 0x2a263a8, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  _CreateUnloadSceneWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> completedHandle);

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass132_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass132_0(__AddressablesImpl____c__DisplayClass132_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass132_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass132_0(__AddressablesImpl____c__DisplayClass132_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass132_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AddressablesImpl* _____4__this;

  /// @brief Field unloadOptions, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::SceneManagement::UnloadSceneOptions ___unloadOptions;

  /// @brief Field autoReleaseHandle, offset: 0x1c, size: 0x1, def value: None
  bool ___autoReleaseHandle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass132_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass132_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass132_0, ___unloadOptions) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass132_0, ___autoReleaseHandle) == 0x1c, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets
// Type: ::<>c__DisplayClass136_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14089))
// CS Name: ::AddressablesImpl::<>c__DisplayClass136_0*
class CORDL_TYPE __AddressablesImpl____c__DisplayClass136_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::AddressableAssets::AddressablesImpl* __4__this;

  /// @brief Field autoReleaseHandle, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_autoReleaseHandle, put = __cordl_internal_set_autoReleaseHandle)) bool autoReleaseHandle;

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr bool& __cordl_internal_get_autoReleaseHandle();

  constexpr bool const& __cordl_internal_get_autoReleaseHandle() const;

  constexpr void __cordl_internal_set_autoReleaseHandle(bool value);

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass136_0* New_ctor();

  /// @brief Method .ctor, addr 0x2a24090, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <CheckForCatalogUpdatesWithChain>b__0, addr 0x2a263fc, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*>
  _CheckForCatalogUpdatesWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass136_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass136_0(__AddressablesImpl____c__DisplayClass136_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass136_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass136_0(__AddressablesImpl____c__DisplayClass136_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass136_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AddressablesImpl* _____4__this;

  /// @brief Field autoReleaseHandle, offset: 0x18, size: 0x1, def value: None
  bool ___autoReleaseHandle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass136_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass136_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass136_0, ___autoReleaseHandle) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets
// Type: ::<>c__DisplayClass140_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 26, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14090))
// CS Name: ::AddressablesImpl::<>c__DisplayClass140_0*
class CORDL_TYPE __AddressablesImpl____c__DisplayClass140_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::AddressableAssets::AddressablesImpl* __4__this;

  /// @brief Field autoReleaseHandle, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_autoReleaseHandle, put = __cordl_internal_set_autoReleaseHandle)) bool autoReleaseHandle;

  /// @brief Field autoCleanBundleCache, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get_autoCleanBundleCache, put = __cordl_internal_set_autoCleanBundleCache)) bool autoCleanBundleCache;

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr bool& __cordl_internal_get_autoReleaseHandle();

  constexpr bool const& __cordl_internal_get_autoReleaseHandle() const;

  constexpr void __cordl_internal_set_autoReleaseHandle(bool value);

  constexpr bool& __cordl_internal_get_autoCleanBundleCache();

  constexpr bool const& __cordl_internal_get_autoCleanBundleCache() const;

  constexpr void __cordl_internal_set_autoCleanBundleCache(bool value);

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass140_0* New_ctor();

  /// @brief Method .ctor, addr 0x2a24458, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <UpdateCatalogs>b__0, addr 0x2a26438, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*>
  _UpdateCatalogs_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*> depOp);

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass140_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass140_0(__AddressablesImpl____c__DisplayClass140_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass140_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass140_0(__AddressablesImpl____c__DisplayClass140_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass140_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AddressablesImpl* _____4__this;

  /// @brief Field autoReleaseHandle, offset: 0x18, size: 0x1, def value: None
  bool ___autoReleaseHandle;

  /// @brief Field autoCleanBundleCache, offset: 0x19, size: 0x1, def value: None
  bool ___autoCleanBundleCache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass140_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass140_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass140_0, ___autoReleaseHandle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass140_0, ___autoCleanBundleCache) == 0x19, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets
// Type: ::<>c__DisplayClass145_0
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 57, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3834)), TypeDefinitionIndex(TypeDefinitionIndex(14046)),
// TypeDefinitionIndex(TypeDefinitionIndex(14047)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3834), inst: 273 }), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(14046), inst: 793 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(14091)) CS Name: ::AddressablesImpl::<>c__DisplayClass145_0*
class CORDL_TYPE __AddressablesImpl____c__DisplayClass145_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::AddressableAssets::AddressablesImpl* __4__this;

  /// @brief Field depOp, offset 0x18, size 0x20
  __declspec(property(get = __cordl_internal_get_depOp, put = __cordl_internal_set_depOp))::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> depOp;

  /// @brief Field forceSingleThreading, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_forceSingleThreading, put = __cordl_internal_set_forceSingleThreading)) bool forceSingleThreading;

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>&
  __cordl_internal_get_depOp();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const&
  __cordl_internal_get_depOp() const;

  constexpr void __cordl_internal_set_depOp(
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
          value);

  constexpr bool& __cordl_internal_get_forceSingleThreading();

  constexpr bool const& __cordl_internal_get_forceSingleThreading() const;

  constexpr void __cordl_internal_set_forceSingleThreading(bool value);

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass145_0* New_ctor();

  /// @brief Method .ctor, addr 0x2a25544, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <CleanBundleCacheWithChain>b__0, addr 0x2a26490, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> _CleanBundleCacheWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass145_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass145_0(__AddressablesImpl____c__DisplayClass145_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass145_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass145_0(__AddressablesImpl____c__DisplayClass145_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass145_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AddressablesImpl* _____4__this;

  /// @brief Field depOp, offset: 0x18, size: 0x20, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
      ___depOp;

  /// @brief Field forceSingleThreading, offset: 0x38, size: 0x1, def value: None
  bool ___forceSingleThreading;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass145_0, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass145_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass145_0, ___depOp) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass145_0, ___forceSingleThreading) == 0x38, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets
// Type: ::<>c__DisplayClass146_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14092))
// CS Name: ::AddressablesImpl::<>c__DisplayClass146_0*
class CORDL_TYPE __AddressablesImpl____c__DisplayClass146_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::AddressableAssets::AddressablesImpl* __4__this;

  /// @brief Field catalogIds, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_catalogIds, put = __cordl_internal_set_catalogIds))::System::Collections::Generic::IEnumerable_1<::StringW>* catalogIds;

  /// @brief Field forceSingleThreading, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_forceSingleThreading, put = __cordl_internal_set_forceSingleThreading)) bool forceSingleThreading;

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>*& __cordl_internal_get_catalogIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::StringW>*> const& __cordl_internal_get_catalogIds() const;

  constexpr void __cordl_internal_set_catalogIds(::System::Collections::Generic::IEnumerable_1<::StringW>* value);

  constexpr bool& __cordl_internal_get_forceSingleThreading();

  constexpr bool const& __cordl_internal_get_forceSingleThreading() const;

  constexpr void __cordl_internal_set_forceSingleThreading(bool value);

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass146_0* New_ctor();

  /// @brief Method .ctor, addr 0x2a2554c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <CleanBundleCacheWithChain>b__0, addr 0x2a264e4, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> _CleanBundleCacheWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass146_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass146_0(__AddressablesImpl____c__DisplayClass146_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass146_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass146_0(__AddressablesImpl____c__DisplayClass146_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass146_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AddressablesImpl* _____4__this;

  /// @brief Field catalogIds, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::StringW>* ___catalogIds;

  /// @brief Field forceSingleThreading, offset: 0x20, size: 0x1, def value: None
  bool ___forceSingleThreading;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass146_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass146_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass146_0, ___catalogIds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass146_0, ___forceSingleThreading) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets
// Type: UnityEngine.AddressableAssets::AddressablesImpl
// SizeInfo { instance_size: 232, native_size: -1, calculated_instance_size: 232, calculated_native_size: 225, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3842)), TypeDefinitionIndex(TypeDefinitionIndex(14046)),
// TypeDefinitionIndex(TypeDefinitionIndex(14125)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3842), inst: 398 }), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(3842), inst: 797 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14046), inst: 77 }), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(14046), inst: 795 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14046), inst: 796 }), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(14046), inst: 797 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(14093)) CS Name: ::UnityEngine.AddressableAssets::AddressablesImpl*
class CORDL_TYPE AddressablesImpl : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass146_0 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass146_0;

  using __c__DisplayClass145_0 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass145_0;

  using __c__DisplayClass140_0 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass140_0;

  using __c__DisplayClass136_0 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass136_0;

  using __c__DisplayClass132_0 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass132_0;

  using __c__DisplayClass131_0 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass131_0;

  using __c__DisplayClass125_0 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass125_0;

  using __c__DisplayClass122_0 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass122_0;

  using __c__DisplayClass120_0 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass120_0;

  using __c__DisplayClass115_0 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass115_0;

  using __c__DisplayClass114_0 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass114_0;

  using __c__DisplayClass113_0 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass113_0;

  template <typename TObject> using __c__DisplayClass111_0_1 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass111_0_1<TObject>;

  using __c__DisplayClass106_0 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass106_0;

  using __c__DisplayClass104_0 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass104_0;

  using __c__DisplayClass100_0 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass100_0;

  using __c__DisplayClass97_0 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass97_0;

  using __c__DisplayClass96_0 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass96_0;

  template <typename TObject> using __c__DisplayClass88_0_1 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass88_0_1<TObject>;

  template <typename TObject> using __c__DisplayClass86_0_1 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass86_0_1<TObject>;

  using __c__DisplayClass83_0 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass83_0;

  using __c__DisplayClass81_0 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass81_0;

  template <typename TObject> using __c__DisplayClass77_0_1 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass77_0_1<TObject>;

  using __c__DisplayClass71_0 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass71_0;

  using __c__DisplayClass62_0 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass62_0;

  using __c = ::UnityEngine::AddressableAssets::__AddressablesImpl____c;

  using LoadResourceLocationKeysOp = ::UnityEngine::AddressableAssets::__AddressablesImpl__LoadResourceLocationKeysOp;

  using LoadResourceLocationKeyOp = ::UnityEngine::AddressableAssets::__AddressablesImpl__LoadResourceLocationKeyOp;

  using ResourceLocatorInfo = ::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo;

  /// @brief Field m_ResourceManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ResourceManager, put = __cordl_internal_set_m_ResourceManager))::UnityEngine::ResourceManagement::ResourceManager* m_ResourceManager;

  /// @brief Field m_InstanceProvider, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InstanceProvider,
                      put = __cordl_internal_set_m_InstanceProvider))::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* m_InstanceProvider;

  /// @brief Field m_CatalogRequestsTimeout, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CatalogRequestsTimeout, put = __cordl_internal_set_m_CatalogRequestsTimeout)) int32_t m_CatalogRequestsTimeout;

  /// @brief Field SceneProvider, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_SceneProvider, put = __cordl_internal_set_SceneProvider))::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider* SceneProvider;

  /// @brief Field m_ResourceLocators, offset 0x30, size 0x8
  __declspec(
      property(get = __cordl_internal_get_m_ResourceLocators,
               put = __cordl_internal_set_m_ResourceLocators))::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo*>* m_ResourceLocators;

  /// @brief Field m_InitializationOperation, offset 0x38, size 0x20
  __declspec(property(get = __cordl_internal_get_m_InitializationOperation, put = __cordl_internal_set_m_InitializationOperation))::UnityEngine::ResourceManagement::AsyncOperations::
      AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> m_InitializationOperation;

  /// @brief Field m_ActiveCheckUpdateOperation, offset 0x58, size 0x20
  __declspec(property(get = __cordl_internal_get_m_ActiveCheckUpdateOperation, put = __cordl_internal_set_m_ActiveCheckUpdateOperation))::UnityEngine::ResourceManagement::AsyncOperations::
      AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*> m_ActiveCheckUpdateOperation;

  /// @brief Field m_ActiveUpdateOperation, offset 0x78, size 0x20
  __declspec(property(get = __cordl_internal_get_m_ActiveUpdateOperation, put = __cordl_internal_set_m_ActiveUpdateOperation))::UnityEngine::ResourceManagement::AsyncOperations::
      AsyncOperationHandle_1<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*> m_ActiveUpdateOperation;

  /// @brief Field m_OnHandleCompleteAction, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnHandleCompleteAction,
                      put = __cordl_internal_set_m_OnHandleCompleteAction))::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* m_OnHandleCompleteAction;

  /// @brief Field m_OnSceneHandleCompleteAction, offset 0xa0, size 0x8
  __declspec(
      property(get = __cordl_internal_get_m_OnSceneHandleCompleteAction,
               put = __cordl_internal_set_m_OnSceneHandleCompleteAction))::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* m_OnSceneHandleCompleteAction;

  /// @brief Field m_OnHandleDestroyedAction, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnHandleDestroyedAction,
                      put = __cordl_internal_set_m_OnHandleDestroyedAction))::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* m_OnHandleDestroyedAction;

  /// @brief Field m_resultToHandle, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_resultToHandle, put = __cordl_internal_set_m_resultToHandle))::System::Collections::Generic::Dictionary_2<
      ::System::Object*, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* m_resultToHandle;

  /// @brief Field m_SceneInstances, offset 0xb8, size 0x8
  __declspec(
      property(get = __cordl_internal_get_m_SceneInstances,
               put = __cordl_internal_set_m_SceneInstances))::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* m_SceneInstances;

  /// @brief Field m_ActiveCleanBundleCacheOperation, offset 0xc0, size 0x20
  __declspec(property(get = __cordl_internal_get_m_ActiveCleanBundleCacheOperation,
                      put = __cordl_internal_set_m_ActiveCleanBundleCacheOperation))::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> m_ActiveCleanBundleCacheOperation;

  /// @brief Field hasStartedInitialization, offset 0xe0, size 0x1
  __declspec(property(get = __cordl_internal_get_hasStartedInitialization, put = __cordl_internal_set_hasStartedInitialization)) bool hasStartedInitialization;

  __declspec(property(get = get_InstanceProvider, put = set_InstanceProvider))::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* InstanceProvider;

  __declspec(property(get = get_ResourceManager))::UnityEngine::ResourceManagement::ResourceManager* ResourceManager;

  __declspec(property(get = get_CatalogRequestsTimeout, put = set_CatalogRequestsTimeout)) int32_t CatalogRequestsTimeout;

  __declspec(property(get = get_SceneOperationCount)) int32_t SceneOperationCount;

  __declspec(property(get = get_TrackedHandleCount)) int32_t TrackedHandleCount;

  __declspec(property(get = get_InternalIdTransformFunc,
                      put = set_InternalIdTransformFunc))::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>* InternalIdTransformFunc;

  __declspec(property(get = get_WebRequestOverride, put = set_WebRequestOverride))::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* WebRequestOverride;

  __declspec(property(get = get_ChainOperation))::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle ChainOperation;

  __declspec(property(get = get_ShouldChainRequest)) bool ShouldChainRequest;

  __declspec(property(get = get_StreamingAssetsSubFolder))::StringW StreamingAssetsSubFolder;

  __declspec(property(get = get_BuildPath))::StringW BuildPath;

  __declspec(property(get = get_PlayerBuildDataPath))::StringW PlayerBuildDataPath;

  __declspec(property(get = get_RuntimePath))::StringW RuntimePath;

  __declspec(property(get = get_ResourceLocators))::System::Collections::Generic::IEnumerable_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>* ResourceLocators;

  __declspec(property(get = get_CatalogsWithAvailableUpdates))::System::Collections::Generic::IEnumerable_1<::StringW>* CatalogsWithAvailableUpdates;

  /// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>"
  constexpr operator ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>"
  constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*
  i___System__Collections__Generic__IEqualityComparer_1___UnityEngine__ResourceManagement__ResourceLocations__IResourceLocation__() noexcept;

  constexpr ::UnityEngine::ResourceManagement::ResourceManager*& __cordl_internal_get_m_ResourceManager();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceManager*> const& __cordl_internal_get_m_ResourceManager() const;

  constexpr void __cordl_internal_set_m_ResourceManager(::UnityEngine::ResourceManagement::ResourceManager* value);

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*& __cordl_internal_get_m_InstanceProvider();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*> const& __cordl_internal_get_m_InstanceProvider() const;

  constexpr void __cordl_internal_set_m_InstanceProvider(::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* value);

  constexpr int32_t& __cordl_internal_get_m_CatalogRequestsTimeout();

  constexpr int32_t const& __cordl_internal_get_m_CatalogRequestsTimeout() const;

  constexpr void __cordl_internal_set_m_CatalogRequestsTimeout(int32_t value);

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*& __cordl_internal_get_SceneProvider();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*> const& __cordl_internal_get_SceneProvider() const;

  constexpr void __cordl_internal_set_SceneProvider(::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo*>*& __cordl_internal_get_m_ResourceLocators();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo*>*> const&
  __cordl_internal_get_m_ResourceLocators() const;

  constexpr void __cordl_internal_set_m_ResourceLocators(::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo*>* value);

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>&
  __cordl_internal_get_m_InitializationOperation();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> const&
  __cordl_internal_get_m_InitializationOperation() const;

  constexpr void __cordl_internal_set_m_InitializationOperation(
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> value);

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*>& __cordl_internal_get_m_ActiveCheckUpdateOperation();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*> const&
  __cordl_internal_get_m_ActiveCheckUpdateOperation() const;

  constexpr void
  __cordl_internal_set_m_ActiveCheckUpdateOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*> value);

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*>&
  __cordl_internal_get_m_ActiveUpdateOperation();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*> const&
  __cordl_internal_get_m_ActiveUpdateOperation() const;

  constexpr void __cordl_internal_set_m_ActiveUpdateOperation(
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*> value);

  constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& __cordl_internal_get_m_OnHandleCompleteAction();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const&
  __cordl_internal_get_m_OnHandleCompleteAction() const;

  constexpr void __cordl_internal_set_m_OnHandleCompleteAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value);

  constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& __cordl_internal_get_m_OnSceneHandleCompleteAction();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const&
  __cordl_internal_get_m_OnSceneHandleCompleteAction() const;

  constexpr void __cordl_internal_set_m_OnSceneHandleCompleteAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value);

  constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& __cordl_internal_get_m_OnHandleDestroyedAction();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const&
  __cordl_internal_get_m_OnHandleDestroyedAction() const;

  constexpr void __cordl_internal_set_m_OnHandleDestroyedAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& __cordl_internal_get_m_resultToHandle();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const&
  __cordl_internal_get_m_resultToHandle() const;

  constexpr void
  __cordl_internal_set_m_resultToHandle(::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value);

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& __cordl_internal_get_m_SceneInstances();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const&
  __cordl_internal_get_m_SceneInstances() const;

  constexpr void __cordl_internal_set_m_SceneInstances(::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value);

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>& __cordl_internal_get_m_ActiveCleanBundleCacheOperation();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> const& __cordl_internal_get_m_ActiveCleanBundleCacheOperation() const;

  constexpr void __cordl_internal_set_m_ActiveCleanBundleCacheOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> value);

  constexpr bool& __cordl_internal_get_hasStartedInitialization();

  constexpr bool const& __cordl_internal_get_hasStartedInitialization() const;

  constexpr void __cordl_internal_set_hasStartedInitialization(bool value);

  /// @brief Method get_InstanceProvider, addr 0x2a1e524, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* get_InstanceProvider();

  /// @brief Method set_InstanceProvider, addr 0x2a1e52c, size 0x84, virtual false, abstract: false, final false
  inline void set_InstanceProvider(::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* value);

  /// @brief Method get_ResourceManager, addr 0x2a11ce8, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::ResourceManager* get_ResourceManager();

  /// @brief Method get_CatalogRequestsTimeout, addr 0x2a1e5b0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_CatalogRequestsTimeout();

  /// @brief Method set_CatalogRequestsTimeout, addr 0x2a1e5b8, size 0x8, virtual false, abstract: false, final false
  inline void set_CatalogRequestsTimeout(int32_t value);

  /// @brief Method get_SceneOperationCount, addr 0x2a1e5c0, size 0x48, virtual false, abstract: false, final false
  inline int32_t get_SceneOperationCount();

  /// @brief Method get_TrackedHandleCount, addr 0x2a1e608, size 0x50, virtual false, abstract: false, final false
  inline int32_t get_TrackedHandleCount();

  static inline ::UnityEngine::AddressableAssets::AddressablesImpl* New_ctor(::UnityEngine::ResourceManagement::Util::IAllocationStrategy* alloc);

  /// @brief Method .ctor, addr 0x2a1e368, size 0x1bc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ResourceManagement::Util::IAllocationStrategy* alloc);

  /// @brief Method ReleaseSceneManagerOperation, addr 0x2a1e658, size 0xa4, virtual false, abstract: false, final false
  inline void ReleaseSceneManagerOperation();

  /// @brief Method get_InternalIdTransformFunc, addr 0x2a15ea4, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>* get_InternalIdTransformFunc();

  /// @brief Method set_InternalIdTransformFunc, addr 0x2a15f60, size 0x20, virtual false, abstract: false, final false
  inline void set_InternalIdTransformFunc(::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>* value);

  /// @brief Method get_WebRequestOverride, addr 0x2a1601c, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* get_WebRequestOverride();

  /// @brief Method set_WebRequestOverride, addr 0x2a160d8, size 0x20, virtual false, abstract: false, final false
  inline void set_WebRequestOverride(::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* value);

  /// @brief Method get_ChainOperation, addr 0x2a1e6fc, size 0x1b0, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle get_ChainOperation();

  /// @brief Method get_ShouldChainRequest, addr 0x2a1e8ac, size 0xe0, virtual false, abstract: false, final false
  inline bool get_ShouldChainRequest();

  /// @brief Method OnSceneUnloaded, addr 0x2a1e98c, size 0x3d4, virtual false, abstract: false, final false
  inline void OnSceneUnloaded(::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method get_StreamingAssetsSubFolder, addr 0x2a161b4, size 0x40, virtual false, abstract: false, final false
  inline ::StringW get_StreamingAssetsSubFolder();

  /// @brief Method get_BuildPath, addr 0x2a16284, size 0xdc, virtual false, abstract: false, final false
  inline ::StringW get_BuildPath();

  /// @brief Method get_PlayerBuildDataPath, addr 0x2a163f0, size 0x88, virtual false, abstract: false, final false
  inline ::StringW get_PlayerBuildDataPath();

  /// @brief Method get_RuntimePath, addr 0x2a16508, size 0x4, virtual false, abstract: false, final false
  inline ::StringW get_RuntimePath();

  /// @brief Method Log, addr 0x2a16760, size 0x58, virtual false, abstract: false, final false
  inline void Log(::StringW msg);

  /// @brief Method LogFormat, addr 0x2a169ac, size 0x68, virtual false, abstract: false, final false
  inline void LogFormat(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method LogWarning, addr 0x2a166b0, size 0x58, virtual false, abstract: false, final false
  inline void LogWarning(::StringW msg);

  /// @brief Method LogWarningFormat, addr 0x2a168dc, size 0x68, virtual false, abstract: false, final false
  inline void LogWarningFormat(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method LogError, addr 0x2a16708, size 0x58, virtual false, abstract: false, final false
  inline void LogError(::StringW msg);

  /// @brief Method LogException, addr 0x2a16cd0, size 0x9c, virtual false, abstract: false, final false
  inline void LogException(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op, ::System::Exception* ex);

  /// @brief Method LogException, addr 0x2a16dfc, size 0x4, virtual false, abstract: false, final false
  inline void LogException(::System::Exception* ex);

  /// @brief Method LogErrorFormat, addr 0x2a16944, size 0x68, virtual false, abstract: false, final false
  inline void LogErrorFormat(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method ResolveInternalId, addr 0x2a12930, size 0x54, virtual false, abstract: false, final false
  inline ::StringW ResolveInternalId(::StringW id);

  /// @brief Method get_ResourceLocators, addr 0x2a15a70, size 0xfc, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>* get_ResourceLocators();

  /// @brief Method AddResourceLocator, addr 0x2a1d8cc, size 0x100, virtual false, abstract: false, final false
  inline void AddResourceLocator(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* loc, ::StringW localCatalogHash,
                                 ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* remoteCatalogLocation);

  /// @brief Method RemoveResourceLocator, addr 0x2a1da64, size 0xdc, virtual false, abstract: false, final false
  inline void RemoveResourceLocator(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* loc);

  /// @brief Method ClearResourceLocators, addr 0x2a1dbd0, size 0x70, virtual false, abstract: false, final false
  inline void ClearResourceLocators();

  /// @brief Method GetResourceLocations, addr 0x2a1eeb0, size 0x6bc, virtual false, abstract: false, final false
  inline bool GetResourceLocations(::System::Object* key, ::System::Type* type,
                                   ByRef<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> locations);

  /// @brief Method GetResourceLocations, addr 0x2a1f648, size 0x4e8, virtual false, abstract: false, final false
  inline bool GetResourceLocations(::System::Collections::IEnumerable* keys, ::System::Type* type, ::UnityEngine::AddressableAssets::__Addressables__MergeMode merge,
                                   ByRef<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> locations);

  /// @brief Method InitializeAsync, addr 0x2a1fb30, size 0x470, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
  InitializeAsync(::StringW runtimeDataPath, ::StringW providerSuffix, bool autoReleaseHandle);

  /// @brief Method InitializeAsync, addr 0x2a16f14, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> InitializeAsync();

  /// @brief Method InitializeAsync, addr 0x2a1705c, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> InitializeAsync(bool autoReleaseHandle);

  /// @brief Method CreateCatalogLocationWithHashDependencies, addr 0x2a20528, size 0x540, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase* CreateCatalogLocationWithHashDependencies(::StringW catalogPath, ::StringW hashFilePath);

  /// @brief Method QueueEditorUpdateIfNeeded, addr 0x2a20a68, size 0x4, virtual false, abstract: false, final false
  inline void QueueEditorUpdateIfNeeded();

  /// @brief Method LoadContentCatalogAsync, addr 0x2a17234, size 0x1f8, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
  LoadContentCatalogAsync(::StringW catalogPath, bool autoReleaseHandle, ::StringW providerSuffix);

  /// @brief Method TrackHandle, addr 0x2a21118, size 0xb4, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  TrackHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> handle);

  /// @brief Method TrackHandle, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> TrackHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> handle);

  /// @brief Method TrackHandle, addr 0x2a211cc, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle TrackHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle);

  /// @brief Method ClearTrackHandles, addr 0x2a21208, size 0x50, virtual false, abstract: false, final false
  inline void ClearTrackHandles();

  /// @brief Method LoadAssetAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAssetAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);

  /// @brief Method LoadAssetWithChain, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAssetWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dep,
                                                                                                                ::System::Object* key);

  /// @brief Method LoadAssetAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject> inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAssetAsync(::System::Object* key);

  /// @brief Method LoadResourceLocationsWithChain, addr 0x2a21258, size 0x148, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
  LoadResourceLocationsWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dep, ::System::Collections::IEnumerable* keys,
                                 ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode, ::System::Type* type);

  /// @brief Method LoadResourceLocationsAsync, addr 0x2a17670, size 0x154, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
  LoadResourceLocationsAsync(::System::Collections::IEnumerable* keys, ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode, ::System::Type* type);

  /// @brief Method LoadResourceLocationsWithChain, addr 0x2a21400, size 0x138, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
  LoadResourceLocationsWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dep, ::System::Object* key, ::System::Type* type);

  /// @brief Method LoadResourceLocationsAsync, addr 0x2a179dc, size 0x148, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
  LoadResourceLocationsAsync(::System::Object* key, ::System::Type* type);

  /// @brief Method LoadAssetsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  LoadAssetsAsync(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations, ::System::Action_1<TObject>* callback,
                  bool releaseDependenciesOnFailure);

  /// @brief Method LoadAssetsWithChain, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  LoadAssetsWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dep, ::System::Collections::IEnumerable* keys, ::System::Action_1<TObject>* callback,
                      ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode, bool releaseDependenciesOnFailure);

  /// @brief Method LoadAssetsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  LoadAssetsAsync(::System::Collections::IEnumerable* keys, ::System::Action_1<TObject>* callback, ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode, bool releaseDependenciesOnFailure);

  /// @brief Method LoadAssetsWithChain, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  LoadAssetsWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dep, ::System::Object* key, ::System::Action_1<TObject>* callback, bool releaseDependenciesOnFailure);

  /// @brief Method LoadAssetsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  LoadAssetsAsync(::System::Object* key, ::System::Action_1<TObject>* callback, bool releaseDependenciesOnFailure);

  /// @brief Method OnHandleDestroyed, addr 0x2a21594, size 0x88, virtual false, abstract: false, final false
  inline void OnHandleDestroyed(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle);

  /// @brief Method OnSceneHandleCompleted, addr 0x2a2161c, size 0x140, virtual false, abstract: false, final false
  inline void OnSceneHandleCompleted(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle);

  /// @brief Method OnHandleCompleted, addr 0x2a2175c, size 0xf8, virtual false, abstract: false, final false
  inline void OnHandleCompleted(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle);

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject> inline void Release(TObject obj);

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject> inline void Release(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> handle);

  /// @brief Method Release, addr 0x2a17be8, size 0x4c, virtual false, abstract: false, final false
  inline void Release(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle);

  /// @brief Method GetDownloadSizeWithChain, addr 0x2a21854, size 0x130, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> GetDownloadSizeWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dep,
                                                                                                                      ::System::Object* key);

  /// @brief Method GetDownloadSizeWithChain, addr 0x2a2198c, size 0x130, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> GetDownloadSizeWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dep,
                                                                                                                      ::System::Collections::IEnumerable* keys);

  /// @brief Method GetDownloadSizeAsync, addr 0x2a18094, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> GetDownloadSizeAsync(::System::Object* key);

  /// @brief Method GetDownloadSizeAsync, addr 0x2a182c8, size 0xe34, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> GetDownloadSizeAsync(::System::Collections::IEnumerable* keys);

  /// @brief Method DownloadDependenciesAsyncWithChain, addr 0x2a21ac4, size 0x1a0, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle DownloadDependenciesAsyncWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dep,
                                                                                                                     ::System::Object* key, bool autoReleaseHandle);

  /// @brief Method WrapAsDownloadLocations, addr 0x2a21c6c, size 0xf4, virtual false, abstract: false, final false
  static inline void WrapAsDownloadLocations(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations);

  /// @brief Method GatherDependenciesFromLocations, addr 0x2a21d60, size 0x8a8, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*
  GatherDependenciesFromLocations(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations);

  /// @brief Method DownloadDependenciesAsync, addr 0x2a19304, size 0x27c, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle DownloadDependenciesAsync(::System::Object* key, bool autoReleaseHandle);

  /// @brief Method DownloadDependenciesAsyncWithChain, addr 0x2a22608, size 0x1a0, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle
  DownloadDependenciesAsyncWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dep,
                                     ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations, bool autoReleaseHandle);

  /// @brief Method DownloadDependenciesAsync, addr 0x2a1964c, size 0x140, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle
  DownloadDependenciesAsync(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations, bool autoReleaseHandle);

  /// @brief Method DownloadDependenciesAsyncWithChain, addr 0x2a227b0, size 0x1b0, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle DownloadDependenciesAsyncWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dep,
                                                                                                                     ::System::Collections::IEnumerable* keys,
                                                                                                                     ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode,
                                                                                                                     bool autoReleaseHandle);

  /// @brief Method DownloadDependenciesAsync, addr 0x2a19864, size 0x28c, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle DownloadDependenciesAsync(::System::Collections::IEnumerable* keys,
                                                                                                            ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode, bool autoReleaseHandle);

  /// @brief Method ClearDependencyCacheForKey, addr 0x2a22968, size 0x6b8, virtual false, abstract: false, final false
  inline bool ClearDependencyCacheForKey(::System::Object* key);

  /// @brief Method AutoReleaseHandleOnCompletion, addr 0x2a23020, size 0x90, virtual false, abstract: false, final false
  inline void AutoReleaseHandleOnCompletion(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle);

  /// @brief Method AutoReleaseHandleOnCompletion, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject> inline void AutoReleaseHandleOnCompletion(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> handle);

  /// @brief Method AutoReleaseHandleOnCompletion, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  inline void AutoReleaseHandleOnCompletion(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> handle, bool unloadSceneOpExcludeReleaseCallback);

  /// @brief Method AutoReleaseHandleOnTypelessCompletion, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject> inline void AutoReleaseHandleOnTypelessCompletion(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> handle);

  /// @brief Method ClearDependencyCacheAsync, addr 0x2a19c74, size 0x250, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> ClearDependencyCacheAsync(::System::Object* key, bool autoReleaseHandle);

  /// @brief Method ClearDependencyCacheAsync, addr 0x2a19f70, size 0x510, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>
  ClearDependencyCacheAsync(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations, bool autoReleaseHandle);

  /// @brief Method ClearDependencyCacheAsync, addr 0x2a1a52c, size 0x51c, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> ClearDependencyCacheAsync(::System::Collections::IEnumerable* keys, bool autoReleaseHandle);

  /// @brief Method InstantiateAsync, addr 0x2a230c8, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  InstantiateAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::Transform* parent, bool instantiateInWorldSpace, bool trackHandle);

  /// @brief Method InstantiateAsync, addr 0x2a1bb50, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  InstantiateAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                   ::UnityEngine::Transform* parent, bool trackHandle);

  /// @brief Method InstantiateAsync, addr 0x2a1bbd0, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> InstantiateAsync(::System::Object* key, ::UnityEngine::Transform* parent,
                                                                                                                                          bool instantiateInWorldSpace, bool trackHandle);

  /// @brief Method InstantiateAsync, addr 0x2a1bc58, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  InstantiateAsync(::System::Object* key, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parent, bool trackHandle);

  /// @brief Method InstantiateWithChain, addr 0x2a23150, size 0x180, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  InstantiateWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dep, ::System::Object* key,
                       ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters, bool trackHandle);

  /// @brief Method InstantiateAsync, addr 0x2a1bcd8, size 0x440, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  InstantiateAsync(::System::Object* key, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters, bool trackHandle);

  /// @brief Method InstantiateWithChain, addr 0x2a232d8, size 0x180, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  InstantiateWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dep, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                       ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters, bool trackHandle);

  /// @brief Method InstantiateAsync, addr 0x2a1ba28, size 0x128, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  InstantiateAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                   ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters, bool trackHandle);

  /// @brief Method ReleaseInstance, addr 0x2a17ccc, size 0xfc, virtual false, abstract: false, final false
  inline bool ReleaseInstance(::UnityEngine::GameObject* instance);

  /// @brief Method LoadSceneWithChain, addr 0x2a23460, size 0x16c, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  LoadSceneWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dep, ::System::Object* key, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad,
                     int32_t priority);

  /// @brief Method LoadSceneAsync, addr 0x2a1c408, size 0x260, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  LoadSceneAsync(::System::Object* key, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int32_t priority, bool trackHandle);

  /// @brief Method LoadSceneAsync, addr 0x2a1c668, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  LoadSceneAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int32_t priority,
                 bool trackHandle);

  /// @brief Method UnloadSceneAsync, addr 0x2a1cc4c, size 0x220, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadSceneAsync(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance scene, ::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions, bool autoReleaseHandle);

  /// @brief Method UnloadSceneAsync, addr 0x2a1cf60, size 0x154, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadSceneAsync(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle, ::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions, bool autoReleaseHandle);

  /// @brief Method UnloadSceneAsync, addr 0x2a1d194, size 0xc8, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadSceneAsync(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> handle,
                   ::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions, bool autoReleaseHandle);

  /// @brief Method CreateUnloadSceneWithChain, addr 0x2a235d4, size 0x138, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  CreateUnloadSceneWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle, ::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions, bool autoReleaseHandle);

  /// @brief Method CreateUnloadSceneWithChain, addr 0x2a2370c, size 0x128, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  CreateUnloadSceneWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> handle,
                             ::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions, bool autoReleaseHandle);

  /// @brief Method InternalUnloadScene, addr 0x2a23834, size 0xd0, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  InternalUnloadScene(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> handle,
                      ::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions, bool autoReleaseHandle);

  /// @brief Method EvaluateKey, addr 0x2a1f56c, size 0xdc, virtual false, abstract: false, final false
  inline ::System::Object* EvaluateKey(::System::Object* obj);

  /// @brief Method CheckForCatalogUpdates, addr 0x2a1d318, size 0x140, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*> CheckForCatalogUpdates(bool autoReleaseHandle);

  /// @brief Method CheckForCatalogUpdatesWithChain, addr 0x2a23914, size 0x12c, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*> CheckForCatalogUpdatesWithChain(bool autoReleaseHandle);

  /// @brief Method GetLocatorInfo, addr 0x2a24098, size 0x208, virtual false, abstract: false, final false
  inline ::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo* GetLocatorInfo(::StringW c);

  /// @brief Method get_CatalogsWithAvailableUpdates, addr 0x2a242a0, size 0x1b8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_CatalogsWithAvailableUpdates();

  /// @brief Method UpdateCatalogs, addr 0x2a1d520, size 0x228, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*>
  UpdateCatalogs(::System::Collections::Generic::IEnumerable_1<::StringW>* catalogIds, bool autoReleaseHandle, bool autoCleanBundleCache);

  /// @brief Method Equals, addr 0x2a24bb0, size 0x2e0, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* x, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* y);

  /// @brief Method GetHashCode, addr 0x2a24e90, size 0x130, virtual true, abstract: false, final true
  inline int32_t GetHashCode(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* loc);

  /// @brief Method CleanBundleCache, addr 0x2a1dd00, size 0x584, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> CleanBundleCache(::System::Collections::Generic::IEnumerable_1<::StringW>* catalogIds,
                                                                                                           bool forceSingleThreading);

  /// @brief Method CleanBundleCache, addr 0x2a250f8, size 0x178, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> CleanBundleCache(
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
          depOp,
      bool forceSingleThreading);

  /// @brief Method CleanBundleCacheWithChain, addr 0x2a25270, size 0x144, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> CleanBundleCacheWithChain(
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
          depOp,
      bool forceSingleThreading);

  /// @brief Method CleanBundleCacheWithChain, addr 0x2a24fc0, size 0x138, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> CleanBundleCacheWithChain(::System::Collections::Generic::IEnumerable_1<::StringW>* catalogIds,
                                                                                                                    bool forceSingleThreading);

  /// @brief Method <TrackHandle>b__72_0, addr 0x2a25554, size 0xb0, virtual false, abstract: false, final false
  inline void _TrackHandle_b__72_0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> sceneHandle);

  /// @brief Method <AutoReleaseHandleOnCompletion>b__109_0, addr 0x2a25604, size 0x2c, virtual false, abstract: false, final false
  inline void _AutoReleaseHandleOnCompletion_b__109_0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);

  /// @brief Method <AutoReleaseHandleOnCompletion>b__110_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject> inline void _AutoReleaseHandleOnCompletion_b__110_0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> op);

  /// @brief Method <AutoReleaseHandleOnTypelessCompletion>b__112_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject> inline void _AutoReleaseHandleOnTypelessCompletion_b__112_0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);

  // Ctor Parameters [CppParam { name: "", ty: "AddressablesImpl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AddressablesImpl(AddressablesImpl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AddressablesImpl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AddressablesImpl(AddressablesImpl const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AddressablesImpl();

public:
  /// @brief Field m_ResourceManager, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::ResourceManager* ___m_ResourceManager;

  /// @brief Field m_InstanceProvider, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* ___m_InstanceProvider;

  /// @brief Field m_CatalogRequestsTimeout, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_CatalogRequestsTimeout;

  /// @brief Field SceneProvider, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider* ___SceneProvider;

  /// @brief Field m_ResourceLocators, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo*>* ___m_ResourceLocators;

  /// @brief Field m_InitializationOperation, offset: 0x38, size: 0x20, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> ___m_InitializationOperation;

  /// @brief Field m_ActiveCheckUpdateOperation, offset: 0x58, size: 0x20, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*> ___m_ActiveCheckUpdateOperation;

  /// @brief Field m_ActiveUpdateOperation, offset: 0x78, size: 0x20, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*>
      ___m_ActiveUpdateOperation;

  /// @brief Field m_OnHandleCompleteAction, offset: 0x98, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* ___m_OnHandleCompleteAction;

  /// @brief Field m_OnSceneHandleCompleteAction, offset: 0xa0, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* ___m_OnSceneHandleCompleteAction;

  /// @brief Field m_OnHandleDestroyedAction, offset: 0xa8, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* ___m_OnHandleDestroyedAction;

  /// @brief Field m_resultToHandle, offset: 0xb0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* ___m_resultToHandle;

  /// @brief Field m_SceneInstances, offset: 0xb8, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* ___m_SceneInstances;

  /// @brief Field m_ActiveCleanBundleCacheOperation, offset: 0xc0, size: 0x20, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> ___m_ActiveCleanBundleCacheOperation;

  /// @brief Field hasStartedInitialization, offset: 0xe0, size: 0x1, def value: None
  bool ___hasStartedInitialization;

  /// @brief Field kCacheDataFolder offset 0xffffffff size 0x8
  static constexpr ::ConstString kCacheDataFolder{ u"{UnityEngine.Application.persistentDataPath}/com.unity.addressables/" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::AddressablesImpl, 0xe8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::AddressablesImpl, ___m_ResourceManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::AddressablesImpl, ___m_InstanceProvider) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::AddressablesImpl, ___m_CatalogRequestsTimeout) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::AddressablesImpl, ___SceneProvider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::AddressablesImpl, ___m_ResourceLocators) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::AddressablesImpl, ___m_InitializationOperation) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::AddressablesImpl, ___m_ActiveCheckUpdateOperation) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::AddressablesImpl, ___m_ActiveUpdateOperation) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::AddressablesImpl, ___m_OnHandleCompleteAction) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::AddressablesImpl, ___m_OnSceneHandleCompleteAction) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::AddressablesImpl, ___m_OnHandleDestroyedAction) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::AddressablesImpl, ___m_resultToHandle) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::AddressablesImpl, ___m_SceneInstances) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::AddressablesImpl, ___m_ActiveCleanBundleCacheOperation) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::AddressablesImpl, ___hasStartedInitialization) == 0xe0, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets
NEED_NO_BOX(::UnityEngine::AddressableAssets::AddressablesImpl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::AddressablesImpl*, "UnityEngine.AddressableAssets", "AddressablesImpl");
NEED_NO_BOX(::UnityEngine::AddressableAssets::__AddressablesImpl__LoadResourceLocationKeyOp);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::__AddressablesImpl__LoadResourceLocationKeyOp*, "UnityEngine.AddressableAssets", "AddressablesImpl/LoadResourceLocationKeyOp");
NEED_NO_BOX(::UnityEngine::AddressableAssets::__AddressablesImpl__LoadResourceLocationKeysOp);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::__AddressablesImpl__LoadResourceLocationKeysOp*, "UnityEngine.AddressableAssets", "AddressablesImpl/LoadResourceLocationKeysOp");
NEED_NO_BOX(::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo*, "UnityEngine.AddressableAssets", "AddressablesImpl/ResourceLocatorInfo");
NEED_NO_BOX(::UnityEngine::AddressableAssets::__AddressablesImpl____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::__AddressablesImpl____c*, "UnityEngine.AddressableAssets", "AddressablesImpl/<>c");
NEED_NO_BOX(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass100_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass100_0*, "UnityEngine.AddressableAssets", "AddressablesImpl/<>c__DisplayClass100_0");
NEED_NO_BOX(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass104_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass104_0*, "UnityEngine.AddressableAssets", "AddressablesImpl/<>c__DisplayClass104_0");
NEED_NO_BOX(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass106_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass106_0*, "UnityEngine.AddressableAssets", "AddressablesImpl/<>c__DisplayClass106_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass111_0_1, "UnityEngine.AddressableAssets", "AddressablesImpl/<>c__DisplayClass111_0`1");
NEED_NO_BOX(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass113_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass113_0*, "UnityEngine.AddressableAssets", "AddressablesImpl/<>c__DisplayClass113_0");
NEED_NO_BOX(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass114_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass114_0*, "UnityEngine.AddressableAssets", "AddressablesImpl/<>c__DisplayClass114_0");
NEED_NO_BOX(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass115_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass115_0*, "UnityEngine.AddressableAssets", "AddressablesImpl/<>c__DisplayClass115_0");
NEED_NO_BOX(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass120_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass120_0*, "UnityEngine.AddressableAssets", "AddressablesImpl/<>c__DisplayClass120_0");
NEED_NO_BOX(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass122_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass122_0*, "UnityEngine.AddressableAssets", "AddressablesImpl/<>c__DisplayClass122_0");
NEED_NO_BOX(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass125_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass125_0*, "UnityEngine.AddressableAssets", "AddressablesImpl/<>c__DisplayClass125_0");
NEED_NO_BOX(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass131_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass131_0*, "UnityEngine.AddressableAssets", "AddressablesImpl/<>c__DisplayClass131_0");
NEED_NO_BOX(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass132_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass132_0*, "UnityEngine.AddressableAssets", "AddressablesImpl/<>c__DisplayClass132_0");
NEED_NO_BOX(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass136_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass136_0*, "UnityEngine.AddressableAssets", "AddressablesImpl/<>c__DisplayClass136_0");
NEED_NO_BOX(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass140_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass140_0*, "UnityEngine.AddressableAssets", "AddressablesImpl/<>c__DisplayClass140_0");
NEED_NO_BOX(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass145_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass145_0*, "UnityEngine.AddressableAssets", "AddressablesImpl/<>c__DisplayClass145_0");
NEED_NO_BOX(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass146_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass146_0*, "UnityEngine.AddressableAssets", "AddressablesImpl/<>c__DisplayClass146_0");
NEED_NO_BOX(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass62_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass62_0*, "UnityEngine.AddressableAssets", "AddressablesImpl/<>c__DisplayClass62_0");
NEED_NO_BOX(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass71_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass71_0*, "UnityEngine.AddressableAssets", "AddressablesImpl/<>c__DisplayClass71_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass77_0_1, "UnityEngine.AddressableAssets", "AddressablesImpl/<>c__DisplayClass77_0`1");
NEED_NO_BOX(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass81_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass81_0*, "UnityEngine.AddressableAssets", "AddressablesImpl/<>c__DisplayClass81_0");
NEED_NO_BOX(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass83_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass83_0*, "UnityEngine.AddressableAssets", "AddressablesImpl/<>c__DisplayClass83_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass86_0_1, "UnityEngine.AddressableAssets", "AddressablesImpl/<>c__DisplayClass86_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass88_0_1, "UnityEngine.AddressableAssets", "AddressablesImpl/<>c__DisplayClass88_0`1");
NEED_NO_BOX(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass96_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass96_0*, "UnityEngine.AddressableAssets", "AddressablesImpl/<>c__DisplayClass96_0");
NEED_NO_BOX(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass97_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass97_0*, "UnityEngine.AddressableAssets", "AddressablesImpl/<>c__DisplayClass97_0");
