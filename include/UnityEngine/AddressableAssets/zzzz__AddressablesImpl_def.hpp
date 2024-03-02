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
// CS Name: ::AddressablesImpl::ResourceLocatorInfo*
class CORDL_TYPE __AddressablesImpl__ResourceLocatorInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CanUpdateContent)) bool CanUpdateContent;

  __declspec(property(get = get_CatalogLocation, put = set_CatalogLocation))::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* CatalogLocation;

  __declspec(property(get = get_ContentUpdateAvailable, put = set_ContentUpdateAvailable)) bool ContentUpdateAvailable;

  __declspec(property(get = get_HashLocation))::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* HashLocation;

  __declspec(property(get = get_LocalHash, put = set_LocalHash))::StringW LocalHash;

  __declspec(property(get = get_Locator, put = set_Locator))::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* Locator;

  /// @brief Field <CatalogLocation>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__CatalogLocation_k__BackingField,
                      put = __cordl_internal_set__CatalogLocation_k__BackingField))::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* _CatalogLocation_k__BackingField;

  /// @brief Field <ContentUpdateAvailable>k__BackingField, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__ContentUpdateAvailable_k__BackingField,
                      put = __cordl_internal_set__ContentUpdateAvailable_k__BackingField)) bool _ContentUpdateAvailable_k__BackingField;

  /// @brief Field <LocalHash>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__LocalHash_k__BackingField, put = __cordl_internal_set__LocalHash_k__BackingField))::StringW _LocalHash_k__BackingField;

  /// @brief Field <Locator>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Locator_k__BackingField,
                      put = __cordl_internal_set__Locator_k__BackingField))::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* _Locator_k__BackingField;

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo* New_ctor(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* loc, ::StringW localHash,
                                                                                                    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* remoteCatalogLocation);

  /// @brief Method UpdateContent, addr 0x2b0da08, size 0xc, virtual false, abstract: false, final false
  inline void UpdateContent(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* locator, ::StringW hash,
                            ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* loc);

  constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*& __cordl_internal_get__CatalogLocation_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*> const& __cordl_internal_get__CatalogLocation_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__ContentUpdateAvailable_k__BackingField() const;

  constexpr bool& __cordl_internal_get__ContentUpdateAvailable_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__LocalHash_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__LocalHash_k__BackingField();

  constexpr ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*& __cordl_internal_get__Locator_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> const& __cordl_internal_get__Locator_k__BackingField() const;

  constexpr void __cordl_internal_set__CatalogLocation_k__BackingField(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value);

  constexpr void __cordl_internal_set__ContentUpdateAvailable_k__BackingField(bool value);

  constexpr void __cordl_internal_set__LocalHash_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Locator_k__BackingField(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* value);

  /// @brief Method .ctor, addr 0x2b06f40, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* loc, ::StringW localHash,
                    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* remoteCatalogLocation);

  /// @brief Method get_CanUpdateContent, addr 0x2b0d864, size 0x1a4, virtual false, abstract: false, final false
  inline bool get_CanUpdateContent();

  /// @brief Method get_CatalogLocation, addr 0x2b0d724, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* get_CatalogLocation();

  /// @brief Method get_ContentUpdateAvailable, addr 0x2b0d734, size 0x8, virtual false, abstract: false, final false
  inline bool get_ContentUpdateAvailable();

  /// @brief Method get_HashLocation, addr 0x2b0d748, size 0x11c, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* get_HashLocation();

  /// @brief Method get_LocalHash, addr 0x2b0d714, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_LocalHash();

  /// @brief Method get_Locator, addr 0x2b0d704, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* get_Locator();

  /// @brief Method set_CatalogLocation, addr 0x2b0d72c, size 0x8, virtual false, abstract: false, final false
  inline void set_CatalogLocation(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value);

  /// @brief Method set_ContentUpdateAvailable, addr 0x2b0d73c, size 0xc, virtual false, abstract: false, final false
  inline void set_ContentUpdateAvailable(bool value);

  /// @brief Method set_LocalHash, addr 0x2b0d71c, size 0x8, virtual false, abstract: false, final false
  inline void set_LocalHash(::StringW value);

  /// @brief Method set_Locator, addr 0x2b0d70c, size 0x8, virtual false, abstract: false, final false
  inline void set_Locator(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl__ResourceLocatorInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl__ResourceLocatorInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl__ResourceLocatorInfo(__AddressablesImpl__ResourceLocatorInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl__ResourceLocatorInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl__ResourceLocatorInfo(__AddressablesImpl__ResourceLocatorInfo const&) = delete;

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
// CS Name: ::AddressablesImpl::LoadResourceLocationKeyOp*
class CORDL_TYPE __AddressablesImpl__LoadResourceLocationKeyOp : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<
                                                                     ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> {
public:
  // Declarations
  __declspec(property(get = get_DebugName))::StringW DebugName;

  /// @brief Field m_Addressables, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Addressables, put = __cordl_internal_set_m_Addressables))::UnityEngine::AddressableAssets::AddressablesImpl* m_Addressables;

  /// @brief Field m_Keys, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Keys, put = __cordl_internal_set_m_Keys))::System::Object* m_Keys;

  /// @brief Field m_ResourceType, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ResourceType, put = __cordl_internal_set_m_ResourceType))::System::Type* m_ResourceType;

  /// @brief Field m_locations, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_locations,
                      put = __cordl_internal_set_m_locations))::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* m_locations;

  /// @brief Method Execute, addr 0x2b0daa8, size 0xdc, virtual true, abstract: false, final false
  inline void Execute();

  /// @brief Method Init, addr 0x2b0965c, size 0xc, virtual false, abstract: false, final false
  inline void Init(::UnityEngine::AddressableAssets::AddressablesImpl* aa, ::System::Type* t, ::System::Object* keys);

  /// @brief Method InvokeWaitForCompletion, addr 0x2b0da34, size 0x74, virtual true, abstract: false, final false
  inline bool InvokeWaitForCompletion();

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl__LoadResourceLocationKeyOp* New_ctor();

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get_m_Addressables();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get_m_Addressables() const;

  constexpr ::System::Object*& __cordl_internal_get_m_Keys();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_m_Keys() const;

  constexpr ::System::Type*& __cordl_internal_get_m_ResourceType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_m_ResourceType() const;

  constexpr ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*& __cordl_internal_get_m_locations();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> const&
  __cordl_internal_get_m_locations() const;

  constexpr void __cordl_internal_set_m_Addressables(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr void __cordl_internal_set_m_Keys(::System::Object* value);

  constexpr void __cordl_internal_set_m_ResourceType(::System::Type* value);

  constexpr void __cordl_internal_set_m_locations(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* value);

  /// @brief Method .ctor, addr 0x2b09614, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_DebugName, addr 0x2b0da14, size 0x20, virtual true, abstract: false, final false
  inline ::StringW get_DebugName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl__LoadResourceLocationKeyOp();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl__LoadResourceLocationKeyOp", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl__LoadResourceLocationKeyOp(__AddressablesImpl__LoadResourceLocationKeyOp&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl__LoadResourceLocationKeyOp", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl__LoadResourceLocationKeyOp(__AddressablesImpl__LoadResourceLocationKeyOp const&) = delete;

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
// CS Name: ::AddressablesImpl::LoadResourceLocationKeysOp*
class CORDL_TYPE __AddressablesImpl__LoadResourceLocationKeysOp : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<
                                                                      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> {
public:
  // Declarations
  __declspec(property(get = get_DebugName))::StringW DebugName;

  /// @brief Field m_Addressables, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Addressables, put = __cordl_internal_set_m_Addressables))::UnityEngine::AddressableAssets::AddressablesImpl* m_Addressables;

  /// @brief Field m_Key, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Key, put = __cordl_internal_set_m_Key))::System::Collections::IEnumerable* m_Key;

  /// @brief Field m_MergeMode, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MergeMode, put = __cordl_internal_set_m_MergeMode))::UnityEngine::AddressableAssets::__Addressables__MergeMode m_MergeMode;

  /// @brief Field m_ResourceType, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ResourceType, put = __cordl_internal_set_m_ResourceType))::System::Type* m_ResourceType;

  /// @brief Field m_locations, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_locations,
                      put = __cordl_internal_set_m_locations))::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* m_locations;

  /// @brief Method Execute, addr 0x2b0dbc4, size 0xe0, virtual true, abstract: false, final false
  inline void Execute();

  /// @brief Method Init, addr 0x2b094c4, size 0x10, virtual false, abstract: false, final false
  inline void Init(::UnityEngine::AddressableAssets::AddressablesImpl* aa, ::System::Type* t, ::System::Collections::IEnumerable* key,
                   ::UnityEngine::AddressableAssets::__Addressables__MergeMode mergeMode);

  /// @brief Method InvokeWaitForCompletion, addr 0x2b0dca4, size 0x74, virtual true, abstract: false, final false
  inline bool InvokeWaitForCompletion();

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl__LoadResourceLocationKeysOp* New_ctor();

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get_m_Addressables();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get_m_Addressables() const;

  constexpr ::System::Collections::IEnumerable*& __cordl_internal_get_m_Key();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerable*> const& __cordl_internal_get_m_Key() const;

  constexpr ::UnityEngine::AddressableAssets::__Addressables__MergeMode const& __cordl_internal_get_m_MergeMode() const;

  constexpr ::UnityEngine::AddressableAssets::__Addressables__MergeMode& __cordl_internal_get_m_MergeMode();

  constexpr ::System::Type*& __cordl_internal_get_m_ResourceType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_m_ResourceType() const;

  constexpr ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*& __cordl_internal_get_m_locations();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> const&
  __cordl_internal_get_m_locations() const;

  constexpr void __cordl_internal_set_m_Addressables(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr void __cordl_internal_set_m_Key(::System::Collections::IEnumerable* value);

  constexpr void __cordl_internal_set_m_MergeMode(::UnityEngine::AddressableAssets::__Addressables__MergeMode value);

  constexpr void __cordl_internal_set_m_ResourceType(::System::Type* value);

  constexpr void __cordl_internal_set_m_locations(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* value);

  /// @brief Method .ctor, addr 0x2b0947c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_DebugName, addr 0x2b0db84, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_DebugName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl__LoadResourceLocationKeysOp();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl__LoadResourceLocationKeysOp", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl__LoadResourceLocationKeysOp(__AddressablesImpl__LoadResourceLocationKeysOp&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl__LoadResourceLocationKeysOp", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl__LoadResourceLocationKeysOp(__AddressablesImpl__LoadResourceLocationKeysOp const&) = delete;

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
// CS Name: ::AddressablesImpl::<>c*
class CORDL_TYPE __AddressablesImpl____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::AddressableAssets::__AddressablesImpl____c* __9;

  /// @brief Field <>9__139_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__139_0, put = setStaticF___9__139_0))::System::Func_2<::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo*, bool>* __9__139_0;

  /// @brief Field <>9__139_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__139_1,
                             put = setStaticF___9__139_1))::System::Func_2<::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo*, ::StringW>* __9__139_1;

  /// @brief Field <>9__143_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__143_0,
                             put = setStaticF___9__143_0))::System::Func_2<::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo*, ::StringW>* __9__143_0;

  /// @brief Field <>9__60_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__60_0, put = setStaticF___9__60_0))::System::Func_2<::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo*,
                                                                                                      ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>* __9__60_0;

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c* New_ctor();

  /// @brief Method <CleanBundleCache>b__143_0, addr 0x2b0de58, size 0xa4, virtual false, abstract: false, final false
  inline ::StringW _CleanBundleCache_b__143_0(::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo* s);

  /// @brief Method .ctor, addr 0x2b0dd7c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_CatalogsWithAvailableUpdates>b__139_0, addr 0x2b0dd9c, size 0x18, virtual false, abstract: false, final false
  inline bool _get_CatalogsWithAvailableUpdates_b__139_0(::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo* s);

  /// @brief Method <get_CatalogsWithAvailableUpdates>b__139_1, addr 0x2b0ddb4, size 0xa4, virtual false, abstract: false, final false
  inline ::StringW _get_CatalogsWithAvailableUpdates_b__139_1(::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo* s);

  /// @brief Method <get_ResourceLocators>b__60_0, addr 0x2b0dd84, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* _get_ResourceLocators_b__60_0(::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo* l);

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo*, bool>* getStaticF___9__139_0();

  static inline ::System::Func_2<::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo*, ::StringW>* getStaticF___9__139_1();

  static inline ::System::Func_2<::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo*, ::StringW>* getStaticF___9__143_0();

  static inline ::System::Func_2<::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo*, ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*
  getStaticF___9__60_0();

  static inline void setStaticF___9(::UnityEngine::AddressableAssets::__AddressablesImpl____c* value);

  static inline void setStaticF___9__139_0(::System::Func_2<::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo*, bool>* value);

  static inline void setStaticF___9__139_1(::System::Func_2<::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo*, ::StringW>* value);

  static inline void setStaticF___9__143_0(::System::Func_2<::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo*, ::StringW>* value);

  static inline void
  setStaticF___9__60_0(::System::Func_2<::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo*, ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c(__AddressablesImpl____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c(__AddressablesImpl____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::__AddressablesImpl____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets
// Type: ::<>c__DisplayClass62_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets {
// Is value type: false
// CS Name: ::AddressablesImpl::<>c__DisplayClass62_0*
class CORDL_TYPE __AddressablesImpl____c__DisplayClass62_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field loc, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_loc, put = __cordl_internal_set_loc))::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* loc;

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass62_0* New_ctor();

  /// @brief Method <RemoveResourceLocator>b__0, addr 0x2b0defc, size 0x24, virtual false, abstract: false, final false
  inline bool _RemoveResourceLocator_b__0(::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo* l);

  constexpr ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*& __cordl_internal_get_loc();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> const& __cordl_internal_get_loc() const;

  constexpr void __cordl_internal_set_loc(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* value);

  /// @brief Method .ctor, addr 0x2b06f7c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass62_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass62_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass62_0(__AddressablesImpl____c__DisplayClass62_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass62_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass62_0(__AddressablesImpl____c__DisplayClass62_0 const&) = delete;

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
// CS Name: ::AddressablesImpl::<>c__DisplayClass71_0*
class CORDL_TYPE __AddressablesImpl____c__DisplayClass71_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::AddressableAssets::AddressablesImpl* __4__this;

  /// @brief Field autoReleaseHandle, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_autoReleaseHandle, put = __cordl_internal_set_autoReleaseHandle)) bool autoReleaseHandle;

  /// @brief Field catalogPath, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_catalogPath, put = __cordl_internal_set_catalogPath))::StringW catalogPath;

  /// @brief Field providerSuffix, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_providerSuffix, put = __cordl_internal_set_providerSuffix))::StringW providerSuffix;

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass71_0* New_ctor();

  /// @brief Method <LoadContentCatalogAsync>b__0, addr 0x2b0df20, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
  _LoadContentCatalogAsync_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr bool const& __cordl_internal_get_autoReleaseHandle() const;

  constexpr bool& __cordl_internal_get_autoReleaseHandle();

  constexpr ::StringW const& __cordl_internal_get_catalogPath() const;

  constexpr ::StringW& __cordl_internal_get_catalogPath();

  constexpr ::StringW const& __cordl_internal_get_providerSuffix() const;

  constexpr ::StringW& __cordl_internal_get_providerSuffix();

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr void __cordl_internal_set_autoReleaseHandle(bool value);

  constexpr void __cordl_internal_set_catalogPath(::StringW value);

  constexpr void __cordl_internal_set_providerSuffix(::StringW value);

  /// @brief Method .ctor, addr 0x2b08b40, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass71_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass71_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass71_0(__AddressablesImpl____c__DisplayClass71_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass71_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass71_0(__AddressablesImpl____c__DisplayClass71_0 const&) = delete;

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
// CS Name: ::AddressablesImpl::<>c__DisplayClass77_0`1<TObject>*
class CORDL_TYPE __AddressablesImpl____c__DisplayClass77_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::AddressableAssets::AddressablesImpl* __4__this;

  /// @brief Field key, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key))::System::Object* key;

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass77_0_1<TObject>* New_ctor();

  /// @brief Method <LoadAssetWithChain>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> _LoadAssetWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Object*& __cordl_internal_get_key();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_key() const;

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr void __cordl_internal_set_key(::System::Object* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass77_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass77_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass77_0_1(__AddressablesImpl____c__DisplayClass77_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass77_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass77_0_1(__AddressablesImpl____c__DisplayClass77_0_1 const&) = delete;

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

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass81_0* New_ctor();

  /// @brief Method <LoadResourceLocationsWithChain>b__0, addr 0x2b0df64, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
  _LoadResourceLocationsWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Collections::IEnumerable*& __cordl_internal_get_keys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerable*> const& __cordl_internal_get_keys() const;

  constexpr ::UnityEngine::AddressableAssets::__Addressables__MergeMode const& __cordl_internal_get_mode() const;

  constexpr ::UnityEngine::AddressableAssets::__Addressables__MergeMode& __cordl_internal_get_mode();

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_type() const;

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr void __cordl_internal_set_keys(::System::Collections::IEnumerable* value);

  constexpr void __cordl_internal_set_mode(::UnityEngine::AddressableAssets::__Addressables__MergeMode value);

  constexpr void __cordl_internal_set_type(::System::Type* value);

  /// @brief Method .ctor, addr 0x2b09474, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass81_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass81_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass81_0(__AddressablesImpl____c__DisplayClass81_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass81_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass81_0(__AddressablesImpl____c__DisplayClass81_0 const&) = delete;

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

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass83_0* New_ctor();

  /// @brief Method <LoadResourceLocationsWithChain>b__0, addr 0x2b0dfa8, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
  _LoadResourceLocationsWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Object*& __cordl_internal_get_key();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_key() const;

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_type() const;

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr void __cordl_internal_set_key(::System::Object* value);

  constexpr void __cordl_internal_set_type(::System::Type* value);

  /// @brief Method .ctor, addr 0x2b0960c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass83_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass83_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass83_0(__AddressablesImpl____c__DisplayClass83_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass83_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass83_0(__AddressablesImpl____c__DisplayClass83_0 const&) = delete;

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
// CS Name: ::AddressablesImpl::<>c__DisplayClass86_0`1<TObject>*
class CORDL_TYPE __AddressablesImpl____c__DisplayClass86_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::AddressableAssets::AddressablesImpl* __4__this;

  /// @brief Field callback, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback))::System::Action_1<TObject>* callback;

  /// @brief Field keys, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_keys, put = __cordl_internal_set_keys))::System::Collections::IEnumerable* keys;

  /// @brief Field mode, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_mode, put = __cordl_internal_set_mode))::UnityEngine::AddressableAssets::__Addressables__MergeMode mode;

  /// @brief Field releaseDependenciesOnFailure, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_releaseDependenciesOnFailure, put = __cordl_internal_set_releaseDependenciesOnFailure)) bool releaseDependenciesOnFailure;

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass86_0_1<TObject>* New_ctor();

  /// @brief Method <LoadAssetsWithChain>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  _LoadAssetsWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Action_1<TObject>*& __cordl_internal_get_callback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<TObject>*> const& __cordl_internal_get_callback() const;

  constexpr ::System::Collections::IEnumerable*& __cordl_internal_get_keys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerable*> const& __cordl_internal_get_keys() const;

  constexpr ::UnityEngine::AddressableAssets::__Addressables__MergeMode const& __cordl_internal_get_mode() const;

  constexpr ::UnityEngine::AddressableAssets::__Addressables__MergeMode& __cordl_internal_get_mode();

  constexpr bool const& __cordl_internal_get_releaseDependenciesOnFailure() const;

  constexpr bool& __cordl_internal_get_releaseDependenciesOnFailure();

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr void __cordl_internal_set_callback(::System::Action_1<TObject>* value);

  constexpr void __cordl_internal_set_keys(::System::Collections::IEnumerable* value);

  constexpr void __cordl_internal_set_mode(::UnityEngine::AddressableAssets::__Addressables__MergeMode value);

  constexpr void __cordl_internal_set_releaseDependenciesOnFailure(bool value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass86_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass86_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass86_0_1(__AddressablesImpl____c__DisplayClass86_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass86_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass86_0_1(__AddressablesImpl____c__DisplayClass86_0_1 const&) = delete;

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
// CS Name: ::AddressablesImpl::<>c__DisplayClass88_0`1<TObject>*
class CORDL_TYPE __AddressablesImpl____c__DisplayClass88_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::AddressableAssets::AddressablesImpl* __4__this;

  /// @brief Field callback, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback))::System::Action_1<TObject>* callback;

  /// @brief Field key, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key))::System::Object* key;

  /// @brief Field releaseDependenciesOnFailure, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_releaseDependenciesOnFailure, put = __cordl_internal_set_releaseDependenciesOnFailure)) bool releaseDependenciesOnFailure;

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass88_0_1<TObject>* New_ctor();

  /// @brief Method <LoadAssetsWithChain>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  _LoadAssetsWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op2);

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Action_1<TObject>*& __cordl_internal_get_callback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<TObject>*> const& __cordl_internal_get_callback() const;

  constexpr ::System::Object*& __cordl_internal_get_key();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_key() const;

  constexpr bool const& __cordl_internal_get_releaseDependenciesOnFailure() const;

  constexpr bool& __cordl_internal_get_releaseDependenciesOnFailure();

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr void __cordl_internal_set_callback(::System::Action_1<TObject>* value);

  constexpr void __cordl_internal_set_key(::System::Object* value);

  constexpr void __cordl_internal_set_releaseDependenciesOnFailure(bool value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass88_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass88_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass88_0_1(__AddressablesImpl____c__DisplayClass88_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass88_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass88_0_1(__AddressablesImpl____c__DisplayClass88_0_1 const&) = delete;

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
// CS Name: ::AddressablesImpl::<>c__DisplayClass96_0*
class CORDL_TYPE __AddressablesImpl____c__DisplayClass96_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::AddressableAssets::AddressablesImpl* __4__this;

  /// @brief Field key, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key))::System::Object* key;

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass96_0* New_ctor();

  /// @brief Method <GetDownloadSizeWithChain>b__0, addr 0x2b0dfe4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>
  _GetDownloadSizeWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Object*& __cordl_internal_get_key();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_key() const;

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr void __cordl_internal_set_key(::System::Object* value);

  /// @brief Method .ctor, addr 0x2b09a58, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass96_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass96_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass96_0(__AddressablesImpl____c__DisplayClass96_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass96_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass96_0(__AddressablesImpl____c__DisplayClass96_0 const&) = delete;

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
// CS Name: ::AddressablesImpl::<>c__DisplayClass97_0*
class CORDL_TYPE __AddressablesImpl____c__DisplayClass97_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::AddressableAssets::AddressablesImpl* __4__this;

  /// @brief Field keys, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_keys, put = __cordl_internal_set_keys))::System::Collections::IEnumerable* keys;

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass97_0* New_ctor();

  /// @brief Method <GetDownloadSizeWithChain>b__0, addr 0x2b0e020, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>
  _GetDownloadSizeWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Collections::IEnumerable*& __cordl_internal_get_keys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerable*> const& __cordl_internal_get_keys() const;

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr void __cordl_internal_set_keys(::System::Collections::IEnumerable* value);

  /// @brief Method .ctor, addr 0x2b09b90, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass97_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass97_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass97_0(__AddressablesImpl____c__DisplayClass97_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass97_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass97_0(__AddressablesImpl____c__DisplayClass97_0 const&) = delete;

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
// CS Name: ::AddressablesImpl::<>c__DisplayClass100_0*
class CORDL_TYPE __AddressablesImpl____c__DisplayClass100_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::AddressableAssets::AddressablesImpl* __4__this;

  /// @brief Field key, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key))::System::Object* key;

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass100_0* New_ctor();

  /// @brief Method <DownloadDependenciesAsyncWithChain>b__0, addr 0x2b0e05c, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource*>*>
  _DownloadDependenciesAsyncWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Object*& __cordl_internal_get_key();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_key() const;

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr void __cordl_internal_set_key(::System::Object* value);

  /// @brief Method .ctor, addr 0x2b09d38, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass100_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass100_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass100_0(__AddressablesImpl____c__DisplayClass100_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass100_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass100_0(__AddressablesImpl____c__DisplayClass100_0 const&) = delete;

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
// CS Name: ::AddressablesImpl::<>c__DisplayClass104_0*
class CORDL_TYPE __AddressablesImpl____c__DisplayClass104_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::AddressableAssets::AddressablesImpl* __4__this;

  /// @brief Field locations, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_locations,
                      put = __cordl_internal_set_locations))::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations;

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass104_0* New_ctor();

  /// @brief Method <DownloadDependenciesAsyncWithChain>b__0, addr 0x2b0e0e8, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource*>*>
  _DownloadDependenciesAsyncWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*& __cordl_internal_get_locations();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> const&
  __cordl_internal_get_locations() const;

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr void __cordl_internal_set_locations(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* value);

  /// @brief Method .ctor, addr 0x2b0a87c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass104_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass104_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass104_0(__AddressablesImpl____c__DisplayClass104_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass104_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass104_0(__AddressablesImpl____c__DisplayClass104_0 const&) = delete;

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

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass106_0* New_ctor();

  /// @brief Method <DownloadDependenciesAsyncWithChain>b__0, addr 0x2b0e174, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource*>*>
  _DownloadDependenciesAsyncWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Collections::IEnumerable*& __cordl_internal_get_keys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerable*> const& __cordl_internal_get_keys() const;

  constexpr ::UnityEngine::AddressableAssets::__Addressables__MergeMode const& __cordl_internal_get_mode() const;

  constexpr ::UnityEngine::AddressableAssets::__Addressables__MergeMode& __cordl_internal_get_mode();

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr void __cordl_internal_set_keys(::System::Collections::IEnumerable* value);

  constexpr void __cordl_internal_set_mode(::UnityEngine::AddressableAssets::__Addressables__MergeMode value);

  /// @brief Method .ctor, addr 0x2b0aa34, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass106_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass106_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass106_0(__AddressablesImpl____c__DisplayClass106_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass106_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass106_0(__AddressablesImpl____c__DisplayClass106_0 const&) = delete;

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
// CS Name: ::AddressablesImpl::<>c__DisplayClass111_0`1<TObject>*
class CORDL_TYPE __AddressablesImpl____c__DisplayClass111_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::AddressableAssets::AddressablesImpl* __4__this;

  /// @brief Field unloadSceneOpExcludeReleaseCallback, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_unloadSceneOpExcludeReleaseCallback, put = __cordl_internal_set_unloadSceneOpExcludeReleaseCallback)) bool unloadSceneOpExcludeReleaseCallback;

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass111_0_1<TObject>* New_ctor();

  /// @brief Method <AutoReleaseHandleOnCompletion>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _AutoReleaseHandleOnCompletion_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> op);

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr bool const& __cordl_internal_get_unloadSceneOpExcludeReleaseCallback() const;

  constexpr bool& __cordl_internal_get_unloadSceneOpExcludeReleaseCallback();

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr void __cordl_internal_set_unloadSceneOpExcludeReleaseCallback(bool value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass111_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass111_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass111_0_1(__AddressablesImpl____c__DisplayClass111_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass111_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass111_0_1(__AddressablesImpl____c__DisplayClass111_0_1 const&) = delete;

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
// CS Name: ::AddressablesImpl::<>c__DisplayClass113_0*
class CORDL_TYPE __AddressablesImpl____c__DisplayClass113_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::AddressableAssets::AddressablesImpl* __4__this;

  /// @brief Field autoReleaseHandle, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_autoReleaseHandle, put = __cordl_internal_set_autoReleaseHandle)) bool autoReleaseHandle;

  /// @brief Field key, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key))::System::Object* key;

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass113_0* New_ctor();

  /// @brief Method <ClearDependencyCacheAsync>b__0, addr 0x2b0e204, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> _ClearDependencyCacheAsync_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr bool const& __cordl_internal_get_autoReleaseHandle() const;

  constexpr bool& __cordl_internal_get_autoReleaseHandle();

  constexpr ::System::Object*& __cordl_internal_get_key();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_key() const;

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr void __cordl_internal_set_autoReleaseHandle(bool value);

  constexpr void __cordl_internal_set_key(::System::Object* value);

  /// @brief Method .ctor, addr 0x2b0b184, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass113_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass113_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass113_0(__AddressablesImpl____c__DisplayClass113_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass113_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass113_0(__AddressablesImpl____c__DisplayClass113_0 const&) = delete;

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
// CS Name: ::AddressablesImpl::<>c__DisplayClass114_0*
class CORDL_TYPE __AddressablesImpl____c__DisplayClass114_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::AddressableAssets::AddressablesImpl* __4__this;

  /// @brief Field autoReleaseHandle, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_autoReleaseHandle, put = __cordl_internal_set_autoReleaseHandle)) bool autoReleaseHandle;

  /// @brief Field locations, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_locations,
                      put = __cordl_internal_set_locations))::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations;

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass114_0* New_ctor();

  /// @brief Method <ClearDependencyCacheAsync>b__0, addr 0x2b0e244, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> _ClearDependencyCacheAsync_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr bool const& __cordl_internal_get_autoReleaseHandle() const;

  constexpr bool& __cordl_internal_get_autoReleaseHandle();

  constexpr ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*& __cordl_internal_get_locations();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> const&
  __cordl_internal_get_locations() const;

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr void __cordl_internal_set_autoReleaseHandle(bool value);

  constexpr void __cordl_internal_set_locations(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* value);

  /// @brief Method .ctor, addr 0x2b0b18c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass114_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass114_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass114_0(__AddressablesImpl____c__DisplayClass114_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass114_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass114_0(__AddressablesImpl____c__DisplayClass114_0 const&) = delete;

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
// CS Name: ::AddressablesImpl::<>c__DisplayClass115_0*
class CORDL_TYPE __AddressablesImpl____c__DisplayClass115_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::AddressableAssets::AddressablesImpl* __4__this;

  /// @brief Field autoReleaseHandle, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_autoReleaseHandle, put = __cordl_internal_set_autoReleaseHandle)) bool autoReleaseHandle;

  /// @brief Field keys, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_keys, put = __cordl_internal_set_keys))::System::Collections::IEnumerable* keys;

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass115_0* New_ctor();

  /// @brief Method <ClearDependencyCacheAsync>b__0, addr 0x2b0e284, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> _ClearDependencyCacheAsync_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr bool const& __cordl_internal_get_autoReleaseHandle() const;

  constexpr bool& __cordl_internal_get_autoReleaseHandle();

  constexpr ::System::Collections::IEnumerable*& __cordl_internal_get_keys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerable*> const& __cordl_internal_get_keys() const;

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr void __cordl_internal_set_autoReleaseHandle(bool value);

  constexpr void __cordl_internal_set_keys(::System::Collections::IEnumerable* value);

  /// @brief Method .ctor, addr 0x2b0b194, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass115_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass115_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass115_0(__AddressablesImpl____c__DisplayClass115_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass115_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass115_0(__AddressablesImpl____c__DisplayClass115_0 const&) = delete;

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
// CS Name: ::AddressablesImpl::<>c__DisplayClass120_0*
class CORDL_TYPE __AddressablesImpl____c__DisplayClass120_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::AddressableAssets::AddressablesImpl* __4__this;

  /// @brief Field instantiateParameters, offset 0x20, size 0x30
  __declspec(property(get = __cordl_internal_get_instantiateParameters,
                      put = __cordl_internal_set_instantiateParameters))::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters;

  /// @brief Field key, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key))::System::Object* key;

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass120_0* New_ctor();

  /// @brief Method <InstantiateWithChain>b__0, addr 0x2b0e2c4, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  _InstantiateWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters const& __cordl_internal_get_instantiateParameters() const;

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters& __cordl_internal_get_instantiateParameters();

  constexpr ::System::Object*& __cordl_internal_get_key();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_key() const;

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr void __cordl_internal_set_instantiateParameters(::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters value);

  constexpr void __cordl_internal_set_key(::System::Object* value);

  /// @brief Method .ctor, addr 0x2b0b3a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass120_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass120_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass120_0(__AddressablesImpl____c__DisplayClass120_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass120_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass120_0(__AddressablesImpl____c__DisplayClass120_0 const&) = delete;

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
// CS Name: ::AddressablesImpl::<>c__DisplayClass122_0*
class CORDL_TYPE __AddressablesImpl____c__DisplayClass122_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::AddressableAssets::AddressablesImpl* __4__this;

  /// @brief Field instantiateParameters, offset 0x20, size 0x30
  __declspec(property(get = __cordl_internal_get_instantiateParameters,
                      put = __cordl_internal_set_instantiateParameters))::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters;

  /// @brief Field location, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_location, put = __cordl_internal_set_location))::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location;

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass122_0* New_ctor();

  /// @brief Method <InstantiateWithChain>b__0, addr 0x2b0e328, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  _InstantiateWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters const& __cordl_internal_get_instantiateParameters() const;

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters& __cordl_internal_get_instantiateParameters();

  constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*& __cordl_internal_get_location();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*> const& __cordl_internal_get_location() const;

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr void __cordl_internal_set_instantiateParameters(::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters value);

  constexpr void __cordl_internal_set_location(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value);

  /// @brief Method .ctor, addr 0x2b0b52c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass122_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass122_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass122_0(__AddressablesImpl____c__DisplayClass122_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass122_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass122_0(__AddressablesImpl____c__DisplayClass122_0 const&) = delete;

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
// CS Name: ::AddressablesImpl::<>c__DisplayClass125_0*
class CORDL_TYPE __AddressablesImpl____c__DisplayClass125_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::AddressableAssets::AddressablesImpl* __4__this;

  /// @brief Field activateOnLoad, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_activateOnLoad, put = __cordl_internal_set_activateOnLoad)) bool activateOnLoad;

  /// @brief Field key, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key))::System::Object* key;

  /// @brief Field loadMode, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_loadMode, put = __cordl_internal_set_loadMode))::UnityEngine::SceneManagement::LoadSceneMode loadMode;

  /// @brief Field priority, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_priority, put = __cordl_internal_set_priority)) int32_t priority;

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass125_0* New_ctor();

  /// @brief Method <LoadSceneWithChain>b__0, addr 0x2b0e38c, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  _LoadSceneWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr bool const& __cordl_internal_get_activateOnLoad() const;

  constexpr bool& __cordl_internal_get_activateOnLoad();

  constexpr ::System::Object*& __cordl_internal_get_key();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_key() const;

  constexpr ::UnityEngine::SceneManagement::LoadSceneMode const& __cordl_internal_get_loadMode() const;

  constexpr ::UnityEngine::SceneManagement::LoadSceneMode& __cordl_internal_get_loadMode();

  constexpr int32_t const& __cordl_internal_get_priority() const;

  constexpr int32_t& __cordl_internal_get_priority();

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr void __cordl_internal_set_activateOnLoad(bool value);

  constexpr void __cordl_internal_set_key(::System::Object* value);

  constexpr void __cordl_internal_set_loadMode(::UnityEngine::SceneManagement::LoadSceneMode value);

  constexpr void __cordl_internal_set_priority(int32_t value);

  /// @brief Method .ctor, addr 0x2b0b6a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass125_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass125_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass125_0(__AddressablesImpl____c__DisplayClass125_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass125_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass125_0(__AddressablesImpl____c__DisplayClass125_0 const&) = delete;

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
// CS Name: ::AddressablesImpl::<>c__DisplayClass131_0*
class CORDL_TYPE __AddressablesImpl____c__DisplayClass131_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::AddressableAssets::AddressablesImpl* __4__this;

  /// @brief Field autoReleaseHandle, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_autoReleaseHandle, put = __cordl_internal_set_autoReleaseHandle)) bool autoReleaseHandle;

  /// @brief Field unloadOptions, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_unloadOptions, put = __cordl_internal_set_unloadOptions))::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions;

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass131_0* New_ctor();

  /// @brief Method <CreateUnloadSceneWithChain>b__0, addr 0x2b0e3d8, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  _CreateUnloadSceneWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle completedHandle);

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr bool const& __cordl_internal_get_autoReleaseHandle() const;

  constexpr bool& __cordl_internal_get_autoReleaseHandle();

  constexpr ::UnityEngine::SceneManagement::UnloadSceneOptions const& __cordl_internal_get_unloadOptions() const;

  constexpr ::UnityEngine::SceneManagement::UnloadSceneOptions& __cordl_internal_get_unloadOptions();

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr void __cordl_internal_set_autoReleaseHandle(bool value);

  constexpr void __cordl_internal_set_unloadOptions(::UnityEngine::SceneManagement::UnloadSceneOptions value);

  /// @brief Method .ctor, addr 0x2b0b9d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass131_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass131_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass131_0(__AddressablesImpl____c__DisplayClass131_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass131_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass131_0(__AddressablesImpl____c__DisplayClass131_0 const&) = delete;

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
// CS Name: ::AddressablesImpl::<>c__DisplayClass132_0*
class CORDL_TYPE __AddressablesImpl____c__DisplayClass132_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::AddressableAssets::AddressablesImpl* __4__this;

  /// @brief Field autoReleaseHandle, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_autoReleaseHandle, put = __cordl_internal_set_autoReleaseHandle)) bool autoReleaseHandle;

  /// @brief Field unloadOptions, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_unloadOptions, put = __cordl_internal_set_unloadOptions))::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions;

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass132_0* New_ctor();

  /// @brief Method <CreateUnloadSceneWithChain>b__0, addr 0x2b0e47c, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  _CreateUnloadSceneWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> completedHandle);

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr bool const& __cordl_internal_get_autoReleaseHandle() const;

  constexpr bool& __cordl_internal_get_autoReleaseHandle();

  constexpr ::UnityEngine::SceneManagement::UnloadSceneOptions const& __cordl_internal_get_unloadOptions() const;

  constexpr ::UnityEngine::SceneManagement::UnloadSceneOptions& __cordl_internal_get_unloadOptions();

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr void __cordl_internal_set_autoReleaseHandle(bool value);

  constexpr void __cordl_internal_set_unloadOptions(::UnityEngine::SceneManagement::UnloadSceneOptions value);

  /// @brief Method .ctor, addr 0x2b0b9e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass132_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass132_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass132_0(__AddressablesImpl____c__DisplayClass132_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass132_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass132_0(__AddressablesImpl____c__DisplayClass132_0 const&) = delete;

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
// CS Name: ::AddressablesImpl::<>c__DisplayClass136_0*
class CORDL_TYPE __AddressablesImpl____c__DisplayClass136_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::AddressableAssets::AddressablesImpl* __4__this;

  /// @brief Field autoReleaseHandle, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_autoReleaseHandle, put = __cordl_internal_set_autoReleaseHandle)) bool autoReleaseHandle;

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass136_0* New_ctor();

  /// @brief Method <CheckForCatalogUpdatesWithChain>b__0, addr 0x2b0e4d0, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*>
  _CheckForCatalogUpdatesWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr bool const& __cordl_internal_get_autoReleaseHandle() const;

  constexpr bool& __cordl_internal_get_autoReleaseHandle();

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr void __cordl_internal_set_autoReleaseHandle(bool value);

  /// @brief Method .ctor, addr 0x2b0c164, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass136_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass136_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass136_0(__AddressablesImpl____c__DisplayClass136_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass136_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass136_0(__AddressablesImpl____c__DisplayClass136_0 const&) = delete;

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
// CS Name: ::AddressablesImpl::<>c__DisplayClass140_0*
class CORDL_TYPE __AddressablesImpl____c__DisplayClass140_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::AddressableAssets::AddressablesImpl* __4__this;

  /// @brief Field autoCleanBundleCache, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get_autoCleanBundleCache, put = __cordl_internal_set_autoCleanBundleCache)) bool autoCleanBundleCache;

  /// @brief Field autoReleaseHandle, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_autoReleaseHandle, put = __cordl_internal_set_autoReleaseHandle)) bool autoReleaseHandle;

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass140_0* New_ctor();

  /// @brief Method <UpdateCatalogs>b__0, addr 0x2b0e50c, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*>
  _UpdateCatalogs_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*> depOp);

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr bool const& __cordl_internal_get_autoCleanBundleCache() const;

  constexpr bool& __cordl_internal_get_autoCleanBundleCache();

  constexpr bool const& __cordl_internal_get_autoReleaseHandle() const;

  constexpr bool& __cordl_internal_get_autoReleaseHandle();

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr void __cordl_internal_set_autoCleanBundleCache(bool value);

  constexpr void __cordl_internal_set_autoReleaseHandle(bool value);

  /// @brief Method .ctor, addr 0x2b0c52c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass140_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass140_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass140_0(__AddressablesImpl____c__DisplayClass140_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass140_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass140_0(__AddressablesImpl____c__DisplayClass140_0 const&) = delete;

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
// CS Name: ::AddressablesImpl::<>c__DisplayClass145_0*
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

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass145_0* New_ctor();

  /// @brief Method <CleanBundleCacheWithChain>b__0, addr 0x2b0e564, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> _CleanBundleCacheWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const&
  __cordl_internal_get_depOp() const;

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>&
  __cordl_internal_get_depOp();

  constexpr bool const& __cordl_internal_get_forceSingleThreading() const;

  constexpr bool& __cordl_internal_get_forceSingleThreading();

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr void __cordl_internal_set_depOp(
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
          value);

  constexpr void __cordl_internal_set_forceSingleThreading(bool value);

  /// @brief Method .ctor, addr 0x2b0d618, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass145_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass145_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass145_0(__AddressablesImpl____c__DisplayClass145_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass145_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass145_0(__AddressablesImpl____c__DisplayClass145_0 const&) = delete;

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

  static inline ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass146_0* New_ctor();

  /// @brief Method <CleanBundleCacheWithChain>b__0, addr 0x2b0e5b8, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> _CleanBundleCacheWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>*& __cordl_internal_get_catalogIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::StringW>*> const& __cordl_internal_get_catalogIds() const;

  constexpr bool const& __cordl_internal_get_forceSingleThreading() const;

  constexpr bool& __cordl_internal_get_forceSingleThreading();

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr void __cordl_internal_set_catalogIds(::System::Collections::Generic::IEnumerable_1<::StringW>* value);

  constexpr void __cordl_internal_set_forceSingleThreading(bool value);

  /// @brief Method .ctor, addr 0x2b0d620, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesImpl____c__DisplayClass146_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass146_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddressablesImpl____c__DisplayClass146_0(__AddressablesImpl____c__DisplayClass146_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddressablesImpl____c__DisplayClass146_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddressablesImpl____c__DisplayClass146_0(__AddressablesImpl____c__DisplayClass146_0 const&) = delete;

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
// CS Name: ::UnityEngine.AddressableAssets::AddressablesImpl*
class CORDL_TYPE AddressablesImpl : public ::System::Object {
public:
  // Declarations
  using LoadResourceLocationKeyOp = ::UnityEngine::AddressableAssets::__AddressablesImpl__LoadResourceLocationKeyOp;

  using LoadResourceLocationKeysOp = ::UnityEngine::AddressableAssets::__AddressablesImpl__LoadResourceLocationKeysOp;

  using ResourceLocatorInfo = ::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo;

  using __c = ::UnityEngine::AddressableAssets::__AddressablesImpl____c;

  using __c__DisplayClass100_0 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass100_0;

  using __c__DisplayClass104_0 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass104_0;

  using __c__DisplayClass106_0 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass106_0;

  template <typename TObject> using __c__DisplayClass111_0_1 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass111_0_1<TObject>;

  using __c__DisplayClass113_0 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass113_0;

  using __c__DisplayClass114_0 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass114_0;

  using __c__DisplayClass115_0 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass115_0;

  using __c__DisplayClass120_0 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass120_0;

  using __c__DisplayClass122_0 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass122_0;

  using __c__DisplayClass125_0 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass125_0;

  using __c__DisplayClass131_0 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass131_0;

  using __c__DisplayClass132_0 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass132_0;

  using __c__DisplayClass136_0 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass136_0;

  using __c__DisplayClass140_0 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass140_0;

  using __c__DisplayClass145_0 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass145_0;

  using __c__DisplayClass146_0 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass146_0;

  using __c__DisplayClass62_0 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass62_0;

  using __c__DisplayClass71_0 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass71_0;

  template <typename TObject> using __c__DisplayClass77_0_1 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass77_0_1<TObject>;

  using __c__DisplayClass81_0 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass81_0;

  using __c__DisplayClass83_0 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass83_0;

  template <typename TObject> using __c__DisplayClass86_0_1 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass86_0_1<TObject>;

  template <typename TObject> using __c__DisplayClass88_0_1 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass88_0_1<TObject>;

  using __c__DisplayClass96_0 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass96_0;

  using __c__DisplayClass97_0 = ::UnityEngine::AddressableAssets::__AddressablesImpl____c__DisplayClass97_0;

  __declspec(property(get = get_BuildPath))::StringW BuildPath;

  __declspec(property(get = get_CatalogRequestsTimeout, put = set_CatalogRequestsTimeout)) int32_t CatalogRequestsTimeout;

  __declspec(property(get = get_CatalogsWithAvailableUpdates))::System::Collections::Generic::IEnumerable_1<::StringW>* CatalogsWithAvailableUpdates;

  __declspec(property(get = get_ChainOperation))::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle ChainOperation;

  __declspec(property(get = get_InstanceProvider, put = set_InstanceProvider))::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* InstanceProvider;

  __declspec(property(get = get_InternalIdTransformFunc,
                      put = set_InternalIdTransformFunc))::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>* InternalIdTransformFunc;

  __declspec(property(get = get_PlayerBuildDataPath))::StringW PlayerBuildDataPath;

  __declspec(property(get = get_ResourceLocators))::System::Collections::Generic::IEnumerable_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>* ResourceLocators;

  __declspec(property(get = get_ResourceManager))::UnityEngine::ResourceManagement::ResourceManager* ResourceManager;

  __declspec(property(get = get_RuntimePath))::StringW RuntimePath;

  __declspec(property(get = get_SceneOperationCount)) int32_t SceneOperationCount;

  /// @brief Field SceneProvider, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_SceneProvider, put = __cordl_internal_set_SceneProvider))::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider* SceneProvider;

  __declspec(property(get = get_ShouldChainRequest)) bool ShouldChainRequest;

  __declspec(property(get = get_StreamingAssetsSubFolder))::StringW StreamingAssetsSubFolder;

  __declspec(property(get = get_TrackedHandleCount)) int32_t TrackedHandleCount;

  __declspec(property(get = get_WebRequestOverride, put = set_WebRequestOverride))::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* WebRequestOverride;

  /// @brief Field hasStartedInitialization, offset 0xe0, size 0x1
  __declspec(property(get = __cordl_internal_get_hasStartedInitialization, put = __cordl_internal_set_hasStartedInitialization)) bool hasStartedInitialization;

  /// @brief Field m_ActiveCheckUpdateOperation, offset 0x58, size 0x20
  __declspec(property(get = __cordl_internal_get_m_ActiveCheckUpdateOperation, put = __cordl_internal_set_m_ActiveCheckUpdateOperation))::UnityEngine::ResourceManagement::AsyncOperations::
      AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*> m_ActiveCheckUpdateOperation;

  /// @brief Field m_ActiveCleanBundleCacheOperation, offset 0xc0, size 0x20
  __declspec(property(get = __cordl_internal_get_m_ActiveCleanBundleCacheOperation,
                      put = __cordl_internal_set_m_ActiveCleanBundleCacheOperation))::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> m_ActiveCleanBundleCacheOperation;

  /// @brief Field m_ActiveUpdateOperation, offset 0x78, size 0x20
  __declspec(property(get = __cordl_internal_get_m_ActiveUpdateOperation, put = __cordl_internal_set_m_ActiveUpdateOperation))::UnityEngine::ResourceManagement::AsyncOperations::
      AsyncOperationHandle_1<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*> m_ActiveUpdateOperation;

  /// @brief Field m_CatalogRequestsTimeout, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CatalogRequestsTimeout, put = __cordl_internal_set_m_CatalogRequestsTimeout)) int32_t m_CatalogRequestsTimeout;

  /// @brief Field m_InitializationOperation, offset 0x38, size 0x20
  __declspec(property(get = __cordl_internal_get_m_InitializationOperation, put = __cordl_internal_set_m_InitializationOperation))::UnityEngine::ResourceManagement::AsyncOperations::
      AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> m_InitializationOperation;

  /// @brief Field m_InstanceProvider, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InstanceProvider,
                      put = __cordl_internal_set_m_InstanceProvider))::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* m_InstanceProvider;

  /// @brief Field m_OnHandleCompleteAction, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnHandleCompleteAction,
                      put = __cordl_internal_set_m_OnHandleCompleteAction))::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* m_OnHandleCompleteAction;

  /// @brief Field m_OnHandleDestroyedAction, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnHandleDestroyedAction,
                      put = __cordl_internal_set_m_OnHandleDestroyedAction))::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* m_OnHandleDestroyedAction;

  /// @brief Field m_OnSceneHandleCompleteAction, offset 0xa0, size 0x8
  __declspec(
      property(get = __cordl_internal_get_m_OnSceneHandleCompleteAction,
               put = __cordl_internal_set_m_OnSceneHandleCompleteAction))::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* m_OnSceneHandleCompleteAction;

  /// @brief Field m_ResourceLocators, offset 0x30, size 0x8
  __declspec(
      property(get = __cordl_internal_get_m_ResourceLocators,
               put = __cordl_internal_set_m_ResourceLocators))::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo*>* m_ResourceLocators;

  /// @brief Field m_ResourceManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ResourceManager, put = __cordl_internal_set_m_ResourceManager))::UnityEngine::ResourceManagement::ResourceManager* m_ResourceManager;

  /// @brief Field m_SceneInstances, offset 0xb8, size 0x8
  __declspec(
      property(get = __cordl_internal_get_m_SceneInstances,
               put = __cordl_internal_set_m_SceneInstances))::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* m_SceneInstances;

  /// @brief Field m_resultToHandle, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_resultToHandle, put = __cordl_internal_set_m_resultToHandle))::System::Collections::Generic::Dictionary_2<
      ::System::Object*, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* m_resultToHandle;

  /// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>"
  constexpr operator ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*() noexcept;

  /// @brief Method AddResourceLocator, addr 0x2b059a0, size 0x100, virtual false, abstract: false, final false
  inline void AddResourceLocator(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* loc, ::StringW localCatalogHash,
                                 ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* remoteCatalogLocation);

  /// @brief Method AutoReleaseHandleOnCompletion, addr 0x2b0b0f4, size 0x90, virtual false, abstract: false, final false
  inline void AutoReleaseHandleOnCompletion(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle);

  /// @brief Method AutoReleaseHandleOnCompletion, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject> inline void AutoReleaseHandleOnCompletion(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> handle);

  /// @brief Method AutoReleaseHandleOnCompletion, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  inline void AutoReleaseHandleOnCompletion(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> handle, bool unloadSceneOpExcludeReleaseCallback);

  /// @brief Method AutoReleaseHandleOnTypelessCompletion, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject> inline void AutoReleaseHandleOnTypelessCompletion(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> handle);

  /// @brief Method CheckForCatalogUpdates, addr 0x2b053ec, size 0x140, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*> CheckForCatalogUpdates(bool autoReleaseHandle);

  /// @brief Method CheckForCatalogUpdatesWithChain, addr 0x2b0b9e8, size 0x12c, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*> CheckForCatalogUpdatesWithChain(bool autoReleaseHandle);

  /// @brief Method CleanBundleCache, addr 0x2b05dd4, size 0x584, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> CleanBundleCache(::System::Collections::Generic::IEnumerable_1<::StringW>* catalogIds,
                                                                                                           bool forceSingleThreading);

  /// @brief Method CleanBundleCache, addr 0x2b0d1cc, size 0x178, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> CleanBundleCache(
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
          depOp,
      bool forceSingleThreading);

  /// @brief Method CleanBundleCacheWithChain, addr 0x2b0d094, size 0x138, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> CleanBundleCacheWithChain(::System::Collections::Generic::IEnumerable_1<::StringW>* catalogIds,
                                                                                                                    bool forceSingleThreading);

  /// @brief Method CleanBundleCacheWithChain, addr 0x2b0d344, size 0x144, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> CleanBundleCacheWithChain(
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
          depOp,
      bool forceSingleThreading);

  /// @brief Method ClearDependencyCacheAsync, addr 0x2b01d48, size 0x250, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> ClearDependencyCacheAsync(::System::Object* key, bool autoReleaseHandle);

  /// @brief Method ClearDependencyCacheAsync, addr 0x2b02600, size 0x51c, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> ClearDependencyCacheAsync(::System::Collections::IEnumerable* keys, bool autoReleaseHandle);

  /// @brief Method ClearDependencyCacheAsync, addr 0x2b02044, size 0x510, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>
  ClearDependencyCacheAsync(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations, bool autoReleaseHandle);

  /// @brief Method ClearDependencyCacheForKey, addr 0x2b0aa3c, size 0x6b8, virtual false, abstract: false, final false
  inline bool ClearDependencyCacheForKey(::System::Object* key);

  /// @brief Method ClearResourceLocators, addr 0x2b05ca4, size 0x70, virtual false, abstract: false, final false
  inline void ClearResourceLocators();

  /// @brief Method ClearTrackHandles, addr 0x2b092dc, size 0x50, virtual false, abstract: false, final false
  inline void ClearTrackHandles();

  /// @brief Method CreateCatalogLocationWithHashDependencies, addr 0x2b085fc, size 0x540, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase* CreateCatalogLocationWithHashDependencies(::StringW catalogPath, ::StringW hashFilePath);

  /// @brief Method CreateUnloadSceneWithChain, addr 0x2b0b6a8, size 0x138, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  CreateUnloadSceneWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle, ::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions, bool autoReleaseHandle);

  /// @brief Method CreateUnloadSceneWithChain, addr 0x2b0b7e0, size 0x128, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  CreateUnloadSceneWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> handle,
                             ::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions, bool autoReleaseHandle);

  /// @brief Method DownloadDependenciesAsync, addr 0x2b013d8, size 0x27c, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle DownloadDependenciesAsync(::System::Object* key, bool autoReleaseHandle);

  /// @brief Method DownloadDependenciesAsync, addr 0x2b01938, size 0x28c, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle DownloadDependenciesAsync(::System::Collections::IEnumerable* keys,
                                                                                                            ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode, bool autoReleaseHandle);

  /// @brief Method DownloadDependenciesAsync, addr 0x2b01720, size 0x140, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle
  DownloadDependenciesAsync(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations, bool autoReleaseHandle);

  /// @brief Method DownloadDependenciesAsyncWithChain, addr 0x2b09b98, size 0x1a0, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle DownloadDependenciesAsyncWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dep,
                                                                                                                     ::System::Object* key, bool autoReleaseHandle);

  /// @brief Method DownloadDependenciesAsyncWithChain, addr 0x2b0a884, size 0x1b0, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle DownloadDependenciesAsyncWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dep,
                                                                                                                     ::System::Collections::IEnumerable* keys,
                                                                                                                     ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode,
                                                                                                                     bool autoReleaseHandle);

  /// @brief Method DownloadDependenciesAsyncWithChain, addr 0x2b0a6dc, size 0x1a0, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle
  DownloadDependenciesAsyncWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dep,
                                     ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations, bool autoReleaseHandle);

  /// @brief Method Equals, addr 0x2b0cc84, size 0x2e0, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* x, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* y);

  /// @brief Method EvaluateKey, addr 0x2b07640, size 0xdc, virtual false, abstract: false, final false
  inline ::System::Object* EvaluateKey(::System::Object* obj);

  /// @brief Method GatherDependenciesFromLocations, addr 0x2b09e34, size 0x8a8, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*
  GatherDependenciesFromLocations(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations);

  /// @brief Method GetDownloadSizeAsync, addr 0x2b00168, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> GetDownloadSizeAsync(::System::Object* key);

  /// @brief Method GetDownloadSizeAsync, addr 0x2b0039c, size 0xe34, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> GetDownloadSizeAsync(::System::Collections::IEnumerable* keys);

  /// @brief Method GetDownloadSizeWithChain, addr 0x2b09928, size 0x130, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> GetDownloadSizeWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dep,
                                                                                                                      ::System::Object* key);

  /// @brief Method GetDownloadSizeWithChain, addr 0x2b09a60, size 0x130, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> GetDownloadSizeWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dep,
                                                                                                                      ::System::Collections::IEnumerable* keys);

  /// @brief Method GetHashCode, addr 0x2b0cf64, size 0x130, virtual true, abstract: false, final true
  inline int32_t GetHashCode(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* loc);

  /// @brief Method GetLocatorInfo, addr 0x2b0c16c, size 0x208, virtual false, abstract: false, final false
  inline ::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo* GetLocatorInfo(::StringW c);

  /// @brief Method GetResourceLocations, addr 0x2b06f84, size 0x6bc, virtual false, abstract: false, final false
  inline bool GetResourceLocations(::System::Object* key, ::System::Type* type,
                                   ByRef<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> locations);

  /// @brief Method GetResourceLocations, addr 0x2b0771c, size 0x4e8, virtual false, abstract: false, final false
  inline bool GetResourceLocations(::System::Collections::IEnumerable* keys, ::System::Type* type, ::UnityEngine::AddressableAssets::__Addressables__MergeMode merge,
                                   ByRef<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> locations);

  /// @brief Method InitializeAsync, addr 0x2afefe8, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> InitializeAsync();

  /// @brief Method InitializeAsync, addr 0x2aff130, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> InitializeAsync(bool autoReleaseHandle);

  /// @brief Method InitializeAsync, addr 0x2b07c04, size 0x470, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
  InitializeAsync(::StringW runtimeDataPath, ::StringW providerSuffix, bool autoReleaseHandle);

  /// @brief Method InstantiateAsync, addr 0x2b03dac, size 0x440, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  InstantiateAsync(::System::Object* key, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters, bool trackHandle);

  /// @brief Method InstantiateAsync, addr 0x2b03ca4, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> InstantiateAsync(::System::Object* key, ::UnityEngine::Transform* parent,
                                                                                                                                          bool instantiateInWorldSpace, bool trackHandle);

  /// @brief Method InstantiateAsync, addr 0x2b03d2c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  InstantiateAsync(::System::Object* key, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parent, bool trackHandle);

  /// @brief Method InstantiateAsync, addr 0x2b03afc, size 0x128, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  InstantiateAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                   ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters, bool trackHandle);

  /// @brief Method InstantiateAsync, addr 0x2b0b19c, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  InstantiateAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::Transform* parent, bool instantiateInWorldSpace, bool trackHandle);

  /// @brief Method InstantiateAsync, addr 0x2b03c24, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  InstantiateAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                   ::UnityEngine::Transform* parent, bool trackHandle);

  /// @brief Method InstantiateWithChain, addr 0x2b0b224, size 0x180, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  InstantiateWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dep, ::System::Object* key,
                       ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters, bool trackHandle);

  /// @brief Method InstantiateWithChain, addr 0x2b0b3ac, size 0x180, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  InstantiateWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dep, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                       ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters, bool trackHandle);

  /// @brief Method InternalUnloadScene, addr 0x2b0b908, size 0xd0, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  InternalUnloadScene(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> handle,
                      ::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions, bool autoReleaseHandle);

  /// @brief Method LoadAssetAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject> inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAssetAsync(::System::Object* key);

  /// @brief Method LoadAssetAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAssetAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);

  /// @brief Method LoadAssetWithChain, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAssetWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dep,
                                                                                                                ::System::Object* key);

  /// @brief Method LoadAssetsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  LoadAssetsAsync(::System::Object* key, ::System::Action_1<TObject>* callback, bool releaseDependenciesOnFailure);

  /// @brief Method LoadAssetsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  LoadAssetsAsync(::System::Collections::IEnumerable* keys, ::System::Action_1<TObject>* callback, ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode, bool releaseDependenciesOnFailure);

  /// @brief Method LoadAssetsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  LoadAssetsAsync(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations, ::System::Action_1<TObject>* callback,
                  bool releaseDependenciesOnFailure);

  /// @brief Method LoadAssetsWithChain, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  LoadAssetsWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dep, ::System::Object* key, ::System::Action_1<TObject>* callback, bool releaseDependenciesOnFailure);

  /// @brief Method LoadAssetsWithChain, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  LoadAssetsWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dep, ::System::Collections::IEnumerable* keys, ::System::Action_1<TObject>* callback,
                      ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode, bool releaseDependenciesOnFailure);

  /// @brief Method LoadContentCatalogAsync, addr 0x2aff308, size 0x1f8, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
  LoadContentCatalogAsync(::StringW catalogPath, bool autoReleaseHandle, ::StringW providerSuffix);

  /// @brief Method LoadResourceLocationsAsync, addr 0x2affab0, size 0x148, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
  LoadResourceLocationsAsync(::System::Object* key, ::System::Type* type);

  /// @brief Method LoadResourceLocationsAsync, addr 0x2aff744, size 0x154, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
  LoadResourceLocationsAsync(::System::Collections::IEnumerable* keys, ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode, ::System::Type* type);

  /// @brief Method LoadResourceLocationsWithChain, addr 0x2b094d4, size 0x138, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
  LoadResourceLocationsWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dep, ::System::Object* key, ::System::Type* type);

  /// @brief Method LoadResourceLocationsWithChain, addr 0x2b0932c, size 0x148, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
  LoadResourceLocationsWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dep, ::System::Collections::IEnumerable* keys,
                                 ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode, ::System::Type* type);

  /// @brief Method LoadSceneAsync, addr 0x2b044dc, size 0x260, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  LoadSceneAsync(::System::Object* key, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int32_t priority, bool trackHandle);

  /// @brief Method LoadSceneAsync, addr 0x2b0473c, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  LoadSceneAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int32_t priority,
                 bool trackHandle);

  /// @brief Method LoadSceneWithChain, addr 0x2b0b534, size 0x16c, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  LoadSceneWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dep, ::System::Object* key, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad,
                     int32_t priority);

  /// @brief Method Log, addr 0x2afe834, size 0x58, virtual false, abstract: false, final false
  inline void Log(::StringW msg);

  /// @brief Method LogError, addr 0x2afe7dc, size 0x58, virtual false, abstract: false, final false
  inline void LogError(::StringW msg);

  /// @brief Method LogErrorFormat, addr 0x2afea18, size 0x68, virtual false, abstract: false, final false
  inline void LogErrorFormat(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method LogException, addr 0x2afeed0, size 0x4, virtual false, abstract: false, final false
  inline void LogException(::System::Exception* ex);

  /// @brief Method LogException, addr 0x2afeda4, size 0x9c, virtual false, abstract: false, final false
  inline void LogException(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op, ::System::Exception* ex);

  /// @brief Method LogFormat, addr 0x2afea80, size 0x68, virtual false, abstract: false, final false
  inline void LogFormat(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method LogWarning, addr 0x2afe784, size 0x58, virtual false, abstract: false, final false
  inline void LogWarning(::StringW msg);

  /// @brief Method LogWarningFormat, addr 0x2afe9b0, size 0x68, virtual false, abstract: false, final false
  inline void LogWarningFormat(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  static inline ::UnityEngine::AddressableAssets::AddressablesImpl* New_ctor(::UnityEngine::ResourceManagement::Util::IAllocationStrategy* alloc);

  /// @brief Method OnHandleCompleted, addr 0x2b09830, size 0xf8, virtual false, abstract: false, final false
  inline void OnHandleCompleted(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle);

  /// @brief Method OnHandleDestroyed, addr 0x2b09668, size 0x88, virtual false, abstract: false, final false
  inline void OnHandleDestroyed(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle);

  /// @brief Method OnSceneHandleCompleted, addr 0x2b096f0, size 0x140, virtual false, abstract: false, final false
  inline void OnSceneHandleCompleted(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle);

  /// @brief Method OnSceneUnloaded, addr 0x2b06a60, size 0x3d4, virtual false, abstract: false, final false
  inline void OnSceneUnloaded(::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method QueueEditorUpdateIfNeeded, addr 0x2b08b3c, size 0x4, virtual false, abstract: false, final false
  inline void QueueEditorUpdateIfNeeded();

  /// @brief Method Release, addr 0x2affcbc, size 0x4c, virtual false, abstract: false, final false
  inline void Release(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle);

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject> inline void Release(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> handle);

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject> inline void Release(TObject obj);

  /// @brief Method ReleaseInstance, addr 0x2affda0, size 0xfc, virtual false, abstract: false, final false
  inline bool ReleaseInstance(::UnityEngine::GameObject* instance);

  /// @brief Method ReleaseSceneManagerOperation, addr 0x2b0672c, size 0xa4, virtual false, abstract: false, final false
  inline void ReleaseSceneManagerOperation();

  /// @brief Method RemoveResourceLocator, addr 0x2b05b38, size 0xdc, virtual false, abstract: false, final false
  inline void RemoveResourceLocator(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* loc);

  /// @brief Method ResolveInternalId, addr 0x2afaa04, size 0x54, virtual false, abstract: false, final false
  inline ::StringW ResolveInternalId(::StringW id);

  /// @brief Method TrackHandle, addr 0x2b092a0, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle TrackHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle);

  /// @brief Method TrackHandle, addr 0x2b091ec, size 0xb4, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  TrackHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> handle);

  /// @brief Method TrackHandle, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> TrackHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> handle);

  /// @brief Method UnloadSceneAsync, addr 0x2b05034, size 0x154, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadSceneAsync(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle, ::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions, bool autoReleaseHandle);

  /// @brief Method UnloadSceneAsync, addr 0x2b05268, size 0xc8, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadSceneAsync(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> handle,
                   ::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions, bool autoReleaseHandle);

  /// @brief Method UnloadSceneAsync, addr 0x2b04d20, size 0x220, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadSceneAsync(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance scene, ::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions, bool autoReleaseHandle);

  /// @brief Method UpdateCatalogs, addr 0x2b055f4, size 0x228, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*>
  UpdateCatalogs(::System::Collections::Generic::IEnumerable_1<::StringW>* catalogIds, bool autoReleaseHandle, bool autoCleanBundleCache);

  /// @brief Method WrapAsDownloadLocations, addr 0x2b09d40, size 0xf4, virtual false, abstract: false, final false
  static inline void WrapAsDownloadLocations(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations);

  /// @brief Method <AutoReleaseHandleOnCompletion>b__109_0, addr 0x2b0d6d8, size 0x2c, virtual false, abstract: false, final false
  inline void _AutoReleaseHandleOnCompletion_b__109_0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);

  /// @brief Method <AutoReleaseHandleOnCompletion>b__110_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject> inline void _AutoReleaseHandleOnCompletion_b__110_0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> op);

  /// @brief Method <AutoReleaseHandleOnTypelessCompletion>b__112_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject> inline void _AutoReleaseHandleOnTypelessCompletion_b__112_0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);

  /// @brief Method <TrackHandle>b__72_0, addr 0x2b0d628, size 0xb0, virtual false, abstract: false, final false
  inline void _TrackHandle_b__72_0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> sceneHandle);

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*& __cordl_internal_get_SceneProvider();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*> const& __cordl_internal_get_SceneProvider() const;

  constexpr bool const& __cordl_internal_get_hasStartedInitialization() const;

  constexpr bool& __cordl_internal_get_hasStartedInitialization();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*> const&
  __cordl_internal_get_m_ActiveCheckUpdateOperation() const;

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*>& __cordl_internal_get_m_ActiveCheckUpdateOperation();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> const& __cordl_internal_get_m_ActiveCleanBundleCacheOperation() const;

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>& __cordl_internal_get_m_ActiveCleanBundleCacheOperation();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*> const&
  __cordl_internal_get_m_ActiveUpdateOperation() const;

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*>&
  __cordl_internal_get_m_ActiveUpdateOperation();

  constexpr int32_t const& __cordl_internal_get_m_CatalogRequestsTimeout() const;

  constexpr int32_t& __cordl_internal_get_m_CatalogRequestsTimeout();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> const&
  __cordl_internal_get_m_InitializationOperation() const;

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>&
  __cordl_internal_get_m_InitializationOperation();

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*& __cordl_internal_get_m_InstanceProvider();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*> const& __cordl_internal_get_m_InstanceProvider() const;

  constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& __cordl_internal_get_m_OnHandleCompleteAction();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const&
  __cordl_internal_get_m_OnHandleCompleteAction() const;

  constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& __cordl_internal_get_m_OnHandleDestroyedAction();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const&
  __cordl_internal_get_m_OnHandleDestroyedAction() const;

  constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& __cordl_internal_get_m_OnSceneHandleCompleteAction();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const&
  __cordl_internal_get_m_OnSceneHandleCompleteAction() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo*>*& __cordl_internal_get_m_ResourceLocators();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo*>*> const&
  __cordl_internal_get_m_ResourceLocators() const;

  constexpr ::UnityEngine::ResourceManagement::ResourceManager*& __cordl_internal_get_m_ResourceManager();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceManager*> const& __cordl_internal_get_m_ResourceManager() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& __cordl_internal_get_m_SceneInstances();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const&
  __cordl_internal_get_m_SceneInstances() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& __cordl_internal_get_m_resultToHandle();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const&
  __cordl_internal_get_m_resultToHandle() const;

  constexpr void __cordl_internal_set_SceneProvider(::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider* value);

  constexpr void __cordl_internal_set_hasStartedInitialization(bool value);

  constexpr void
  __cordl_internal_set_m_ActiveCheckUpdateOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*> value);

  constexpr void __cordl_internal_set_m_ActiveCleanBundleCacheOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> value);

  constexpr void __cordl_internal_set_m_ActiveUpdateOperation(
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*> value);

  constexpr void __cordl_internal_set_m_CatalogRequestsTimeout(int32_t value);

  constexpr void __cordl_internal_set_m_InitializationOperation(
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> value);

  constexpr void __cordl_internal_set_m_InstanceProvider(::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* value);

  constexpr void __cordl_internal_set_m_OnHandleCompleteAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value);

  constexpr void __cordl_internal_set_m_OnHandleDestroyedAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value);

  constexpr void __cordl_internal_set_m_OnSceneHandleCompleteAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value);

  constexpr void __cordl_internal_set_m_ResourceLocators(::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo*>* value);

  constexpr void __cordl_internal_set_m_ResourceManager(::UnityEngine::ResourceManagement::ResourceManager* value);

  constexpr void __cordl_internal_set_m_SceneInstances(::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value);

  constexpr void
  __cordl_internal_set_m_resultToHandle(::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value);

  /// @brief Method .ctor, addr 0x2b0643c, size 0x1bc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ResourceManagement::Util::IAllocationStrategy* alloc);

  /// @brief Method get_BuildPath, addr 0x2afe358, size 0xdc, virtual false, abstract: false, final false
  inline ::StringW get_BuildPath();

  /// @brief Method get_CatalogRequestsTimeout, addr 0x2b06684, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_CatalogRequestsTimeout();

  /// @brief Method get_CatalogsWithAvailableUpdates, addr 0x2b0c374, size 0x1b8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_CatalogsWithAvailableUpdates();

  /// @brief Method get_ChainOperation, addr 0x2b067d0, size 0x1b0, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle get_ChainOperation();

  /// @brief Method get_InstanceProvider, addr 0x2b065f8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* get_InstanceProvider();

  /// @brief Method get_InternalIdTransformFunc, addr 0x2afdf78, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>* get_InternalIdTransformFunc();

  /// @brief Method get_PlayerBuildDataPath, addr 0x2afe4c4, size 0x88, virtual false, abstract: false, final false
  inline ::StringW get_PlayerBuildDataPath();

  /// @brief Method get_ResourceLocators, addr 0x2afdb44, size 0xfc, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>* get_ResourceLocators();

  /// @brief Method get_ResourceManager, addr 0x2af9dbc, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::ResourceManager* get_ResourceManager();

  /// @brief Method get_RuntimePath, addr 0x2afe5dc, size 0x4, virtual false, abstract: false, final false
  inline ::StringW get_RuntimePath();

  /// @brief Method get_SceneOperationCount, addr 0x2b06694, size 0x48, virtual false, abstract: false, final false
  inline int32_t get_SceneOperationCount();

  /// @brief Method get_ShouldChainRequest, addr 0x2b06980, size 0xe0, virtual false, abstract: false, final false
  inline bool get_ShouldChainRequest();

  /// @brief Method get_StreamingAssetsSubFolder, addr 0x2afe288, size 0x40, virtual false, abstract: false, final false
  inline ::StringW get_StreamingAssetsSubFolder();

  /// @brief Method get_TrackedHandleCount, addr 0x2b066dc, size 0x50, virtual false, abstract: false, final false
  inline int32_t get_TrackedHandleCount();

  /// @brief Method get_WebRequestOverride, addr 0x2afe0f0, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* get_WebRequestOverride();

  /// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>"
  constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*
  i___System__Collections__Generic__IEqualityComparer_1___UnityEngine__ResourceManagement__ResourceLocations__IResourceLocation__() noexcept;

  /// @brief Method set_CatalogRequestsTimeout, addr 0x2b0668c, size 0x8, virtual false, abstract: false, final false
  inline void set_CatalogRequestsTimeout(int32_t value);

  /// @brief Method set_InstanceProvider, addr 0x2b06600, size 0x84, virtual false, abstract: false, final false
  inline void set_InstanceProvider(::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* value);

  /// @brief Method set_InternalIdTransformFunc, addr 0x2afe034, size 0x20, virtual false, abstract: false, final false
  inline void set_InternalIdTransformFunc(::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>* value);

  /// @brief Method set_WebRequestOverride, addr 0x2afe1ac, size 0x20, virtual false, abstract: false, final false
  inline void set_WebRequestOverride(::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AddressablesImpl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AddressablesImpl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AddressablesImpl(AddressablesImpl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AddressablesImpl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AddressablesImpl(AddressablesImpl const&) = delete;

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
