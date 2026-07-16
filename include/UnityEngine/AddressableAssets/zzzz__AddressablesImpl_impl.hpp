#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/AddressablesImpl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/AddressableAssets/zzzz__Addressables_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__InstantiationParameters_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneReleaseMode_impl.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneParameters_impl.hpp"
#include "UnityEngine/SceneManagement/zzzz__UnloadSceneOptions_impl.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AddressablesImpl_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/AddressableAssets/ResourceLocators/zzzz__IResourceLocator_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AddressablesImpl_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__Addressables_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__ResourceLocatorInfo_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__ResourceLocationBase_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__IAssetBundleResource_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__IInstanceProvider_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ISceneProvider_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__InstantiationParameters_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneInstance_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneReleaseMode_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__IAllocationStrategy_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneParameters_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__UnloadSceneOptions_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Hash128_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp.get_DebugName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp::*)()>(
    &::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp::get_DebugName)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6459988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp::*)(
    ::UnityEngine::AddressableAssets::AddressablesImpl*, ::System::Type*, ::System::Object*)>(&::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp::Init)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x645498c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp*>(),
                            { "Init", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp.InvokeWaitForCompletion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp::*)()>(
    &::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp::InvokeWaitForCompletion)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x64599a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp::*)()>(
    &::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp::Execute)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6459a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp::*)()>(
    &::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6454940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp::__cordl_internal_get_m_Keys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Keys;
}
constexpr ::System::Object* const& UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp::__cordl_internal_get_m_Keys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Keys;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp::__cordl_internal_set_m_Keys(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Keys = value;
}
constexpr ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*&
UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp::__cordl_internal_get_m_locations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_locations;
}
constexpr ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* const&
UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp::__cordl_internal_get_m_locations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_locations;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp::__cordl_internal_set_m_locations(
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_locations = value;
}
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp::__cordl_internal_get_m_Addressables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Addressables;
}
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl* const& UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp::__cordl_internal_get_m_Addressables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Addressables;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp::__cordl_internal_set_m_Addressables(::UnityEngine::AddressableAssets::AddressablesImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Addressables = value;
}
constexpr ::System::Type*& UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp::__cordl_internal_get_m_ResourceType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResourceType;
}
constexpr ::System::Type* const& UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp::__cordl_internal_get_m_ResourceType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResourceType;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp::__cordl_internal_set_m_ResourceType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ResourceType = value;
}
inline ::StringW UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp::get_DebugName() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp::Init(::UnityEngine::AddressableAssets::AddressablesImpl* aa, ::System::Type* t, ::System::Object* keys) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp*>(),
                          { "Init", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aa, t, keys);
}
inline bool UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp::InvokeWaitForCompletion() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp::Execute() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp* UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeyOp::AddressablesImpl_LoadResourceLocationKeyOp() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp.get_DebugName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp::*)()>(
    &::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp::get_DebugName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6459b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp::*)(
    ::UnityEngine::AddressableAssets::AddressablesImpl*, ::System::Type*, ::System::Collections::IEnumerable*, ::UnityEngine::AddressableAssets::Addressables_MergeMode)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp::Init)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64547b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp*>(),
                                                { "Init",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), ::i2c::type_of<::System::Type*>(),
                                                    ::i2c::type_of<::System::Collections::IEnumerable*>(), ::i2c::type_of<::UnityEngine::AddressableAssets::Addressables_MergeMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp::*)()>(
    &::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp::Execute)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6459b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp.InvokeWaitForCompletion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp::*)()>(
    &::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp::InvokeWaitForCompletion)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6459c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp::*)()>(
    &::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x645476c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IEnumerable*& UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp::__cordl_internal_get_m_Key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Key;
}
constexpr ::System::Collections::IEnumerable* const& UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp::__cordl_internal_get_m_Key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Key;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp::__cordl_internal_set_m_Key(::System::Collections::IEnumerable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Key = value;
}
constexpr ::UnityEngine::AddressableAssets::Addressables_MergeMode& UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp::__cordl_internal_get_m_MergeMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MergeMode;
}
constexpr ::UnityEngine::AddressableAssets::Addressables_MergeMode const& UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp::__cordl_internal_get_m_MergeMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MergeMode;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp::__cordl_internal_set_m_MergeMode(::UnityEngine::AddressableAssets::Addressables_MergeMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MergeMode = value;
}
constexpr ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*&
UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp::__cordl_internal_get_m_locations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_locations;
}
constexpr ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* const&
UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp::__cordl_internal_get_m_locations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_locations;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp::__cordl_internal_set_m_locations(
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_locations = value;
}
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp::__cordl_internal_get_m_Addressables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Addressables;
}
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl* const& UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp::__cordl_internal_get_m_Addressables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Addressables;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp::__cordl_internal_set_m_Addressables(::UnityEngine::AddressableAssets::AddressablesImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Addressables = value;
}
constexpr ::System::Type*& UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp::__cordl_internal_get_m_ResourceType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResourceType;
}
constexpr ::System::Type* const& UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp::__cordl_internal_get_m_ResourceType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResourceType;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp::__cordl_internal_set_m_ResourceType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ResourceType = value;
}
inline ::StringW UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp::get_DebugName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp::Init(::UnityEngine::AddressableAssets::AddressablesImpl* aa, ::System::Type* t,
                                                                                              ::System::Collections::IEnumerable* key,
                                                                                              ::UnityEngine::AddressableAssets::Addressables_MergeMode mergeMode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp*>(),
                                                           { "Init",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), ::i2c::type_of<::System::Type*>(),
                                                               ::i2c::type_of<::System::Collections::IEnumerable*>(), ::i2c::type_of<::UnityEngine::AddressableAssets::Addressables_MergeMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aa, t, key, mergeMode);
}
inline void UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp::Execute() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp::InvokeWaitForCompletion() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp* UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl_LoadResourceLocationKeysOp::AddressablesImpl_LoadResourceLocationKeysOp() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl___c::*)()>(&::UnityEngine::AddressableAssets::AddressablesImpl___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6459d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c._get_ResourceLocators_b__59_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* (
    ::UnityEngine::AddressableAssets::AddressablesImpl___c::*)(::UnityEngine::AddressableAssets::ResourceLocatorInfo*)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c::_get_ResourceLocators_b__59_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6459d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c*>(),
                                                             { "<get_ResourceLocators>b__59_0", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c._get_CatalogsWithAvailableUpdates_b__143_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AddressableAssets::AddressablesImpl___c::*)(::UnityEngine::AddressableAssets::ResourceLocatorInfo*)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c::_get_CatalogsWithAvailableUpdates_b__143_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6459d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c*>(),
                                                             { "<get_CatalogsWithAvailableUpdates>b__143_0", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c._get_CatalogsWithAvailableUpdates_b__143_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::AddressableAssets::AddressablesImpl___c::*)(::UnityEngine::AddressableAssets::ResourceLocatorInfo*)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c::_get_CatalogsWithAvailableUpdates_b__143_1)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6459d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c*>(),
                                                             { "<get_CatalogsWithAvailableUpdates>b__143_1", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c._CleanBundleCache_b__147_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::AddressableAssets::AddressablesImpl___c::*)(::UnityEngine::AddressableAssets::ResourceLocatorInfo*)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c::_CleanBundleCache_b__147_0)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6459df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c*>(),
                                                             { "<CleanBundleCache>b__147_0", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::AddressableAssets::AddressablesImpl___c::setStaticF___9(::UnityEngine::AddressableAssets::AddressablesImpl___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::AddressableAssets::AddressablesImpl___c*, "<>9", ::UnityEngine::AddressableAssets::AddressablesImpl___c*>(
      std::forward<::UnityEngine::AddressableAssets::AddressablesImpl___c*>(value));
}
inline ::UnityEngine::AddressableAssets::AddressablesImpl___c* UnityEngine::AddressableAssets::AddressablesImpl___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::AddressableAssets::AddressablesImpl___c*, "<>9", ::UnityEngine::AddressableAssets::AddressablesImpl___c*>();
}
inline void UnityEngine::AddressableAssets::AddressablesImpl___c::setStaticF___9__59_0(
    ::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*, "<>9__59_0",
                                    ::UnityEngine::AddressableAssets::AddressablesImpl___c*>(
      std::forward<::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*>(value));
}
inline ::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*
UnityEngine::AddressableAssets::AddressablesImpl___c::getStaticF___9__59_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*,
                                           "<>9__59_0", ::UnityEngine::AddressableAssets::AddressablesImpl___c*>();
}
inline void UnityEngine::AddressableAssets::AddressablesImpl___c::setStaticF___9__143_0(::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, bool>*, "<>9__143_0", ::UnityEngine::AddressableAssets::AddressablesImpl___c*>(
      std::forward<::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, bool>*>(value));
}
inline ::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, bool>* UnityEngine::AddressableAssets::AddressablesImpl___c::getStaticF___9__143_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, bool>*, "<>9__143_0", ::UnityEngine::AddressableAssets::AddressablesImpl___c*>();
}
inline void UnityEngine::AddressableAssets::AddressablesImpl___c::setStaticF___9__143_1(::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, ::StringW>*, "<>9__143_1", ::UnityEngine::AddressableAssets::AddressablesImpl___c*>(
      std::forward<::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, ::StringW>* UnityEngine::AddressableAssets::AddressablesImpl___c::getStaticF___9__143_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, ::StringW>*, "<>9__143_1",
                                           ::UnityEngine::AddressableAssets::AddressablesImpl___c*>();
}
inline void UnityEngine::AddressableAssets::AddressablesImpl___c::setStaticF___9__147_0(::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, ::StringW>*, "<>9__147_0", ::UnityEngine::AddressableAssets::AddressablesImpl___c*>(
      std::forward<::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, ::StringW>* UnityEngine::AddressableAssets::AddressablesImpl___c::getStaticF___9__147_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, ::StringW>*, "<>9__147_0",
                                           ::UnityEngine::AddressableAssets::AddressablesImpl___c*>();
}
inline void UnityEngine::AddressableAssets::AddressablesImpl___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*
UnityEngine::AddressableAssets::AddressablesImpl___c::_get_ResourceLocators_b__59_0(::UnityEngine::AddressableAssets::ResourceLocatorInfo* l) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c*>(),
                                                           { "<get_ResourceLocators>b__59_0", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>(this, ___internal_method, l);
}
inline bool UnityEngine::AddressableAssets::AddressablesImpl___c::_get_CatalogsWithAvailableUpdates_b__143_0(::UnityEngine::AddressableAssets::ResourceLocatorInfo* s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c*>(),
                                                           { "<get_CatalogsWithAvailableUpdates>b__143_0", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, s);
}
inline ::StringW UnityEngine::AddressableAssets::AddressablesImpl___c::_get_CatalogsWithAvailableUpdates_b__143_1(::UnityEngine::AddressableAssets::ResourceLocatorInfo* s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c*>(),
                                                           { "<get_CatalogsWithAvailableUpdates>b__143_1", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, s);
}
inline ::StringW UnityEngine::AddressableAssets::AddressablesImpl___c::_CleanBundleCache_b__147_0(::UnityEngine::AddressableAssets::ResourceLocatorInfo* s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c*>(),
                                                           { "<CleanBundleCache>b__147_0", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, s);
}
inline ::UnityEngine::AddressableAssets::AddressablesImpl___c* UnityEngine::AddressableAssets::AddressablesImpl___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::AddressablesImpl___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl___c::AddressablesImpl___c() {}
template <typename TObject>
inline void UnityEngine::AddressableAssets::AddressablesImpl___c__115_1<TObject>::setStaticF___9(::UnityEngine::AddressableAssets::AddressablesImpl___c__115_1<TObject>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::AddressableAssets::AddressablesImpl___c__115_1<TObject>*, "<>9", ::UnityEngine::AddressableAssets::AddressablesImpl___c__115_1<TObject>*>(
      std::forward<::UnityEngine::AddressableAssets::AddressablesImpl___c__115_1<TObject>*>(value));
}
template <typename TObject> inline ::UnityEngine::AddressableAssets::AddressablesImpl___c__115_1<TObject>* UnityEngine::AddressableAssets::AddressablesImpl___c__115_1<TObject>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::AddressableAssets::AddressablesImpl___c__115_1<TObject>*, "<>9", ::UnityEngine::AddressableAssets::AddressablesImpl___c__115_1<TObject>*>();
}
template <typename TObject>
inline void
UnityEngine::AddressableAssets::AddressablesImpl___c__115_1<TObject>::setStaticF___9__115_0(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*, "<>9__115_0",
                                    ::UnityEngine::AddressableAssets::AddressablesImpl___c__115_1<TObject>*>(
      std::forward<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>(value));
}
template <typename TObject>
inline ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* UnityEngine::AddressableAssets::AddressablesImpl___c__115_1<TObject>::getStaticF___9__115_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*, "<>9__115_0",
                                           ::UnityEngine::AddressableAssets::AddressablesImpl___c__115_1<TObject>*>();
}
template <typename TObject> inline void UnityEngine::AddressableAssets::AddressablesImpl___c__115_1<TObject>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__115_1<TObject>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TObject>
inline void
UnityEngine::AddressableAssets::AddressablesImpl___c__115_1<TObject>::_AutoReleaseHandleOnTypelessCompletion_b__115_0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__115_1<TObject>*>(),
                                       { "<AutoReleaseHandleOnTypelessCompletion>b__115_0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op);
}
template <typename TObject> inline ::UnityEngine::AddressableAssets::AddressablesImpl___c__115_1<TObject>* UnityEngine::AddressableAssets::AddressablesImpl___c__115_1<TObject>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::AddressablesImpl___c__115_1<TObject>*>());
}
// Ctor Parameters []
template <typename TObject> constexpr ::UnityEngine::AddressableAssets::AddressablesImpl___c__115_1<TObject>::AddressablesImpl___c__115_1() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass100_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass100_0::*)()>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass100_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64551bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass100_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass100_0._ComputeCatalogSizeWithChain_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> (
    ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass100_0::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass100_0::_ComputeCatalogSizeWithChain_b__0)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x6459e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass100_0*>(),
                                                { "<ComputeCatalogSizeWithChain>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass100_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass100_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass100_0::__cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass100_0::__cordl_internal_get_catalogLoc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___catalogLoc;
}
constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* const&
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass100_0::__cordl_internal_get_catalogLoc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___catalogLoc;
}
constexpr void
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass100_0::__cordl_internal_set_catalogLoc(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___catalogLoc = value;
}
inline void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass100_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass100_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass100_0::_ComputeCatalogSizeWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass100_0*>(),
                                              { "<ComputeCatalogSizeWithChain>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>(this, ___internal_method, op);
}
inline ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass100_0* UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass100_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass100_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass100_0::AddressablesImpl___c__DisplayClass100_0() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass103_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass103_0::*)()>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass103_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6455bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass103_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass103_0._GetDownloadSizeWithChain_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> (
    ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass103_0::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass103_0::_GetDownloadSizeWithChain_b__0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x645a0a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass103_0*>(),
                                                { "<GetDownloadSizeWithChain>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass103_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass103_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass103_0::__cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Collections::IEnumerable*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass103_0::__cordl_internal_get_keys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keys;
}
constexpr ::System::Collections::IEnumerable* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass103_0::__cordl_internal_get_keys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keys;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass103_0::__cordl_internal_set_keys(::System::Collections::IEnumerable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keys = value;
}
inline void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass103_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass103_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass103_0::_GetDownloadSizeWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass103_0*>(),
                                                           { "<GetDownloadSizeWithChain>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>(this, ___internal_method, op);
}
inline ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass103_0* UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass103_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass103_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass103_0::AddressablesImpl___c__DisplayClass103_0() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass106_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass106_0::*)()>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass106_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6455db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass106_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass106_0._DownloadDependenciesAsyncWithChain_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource*>*> (
        ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass106_0::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass106_0::_DownloadDependenciesAsyncWithChain_b__0)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x645a0ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass106_0*>(),
                                                { "<DownloadDependenciesAsyncWithChain>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass106_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass106_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass106_0::__cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Object*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass106_0::__cordl_internal_get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr ::System::Object* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass106_0::__cordl_internal_get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass106_0::__cordl_internal_set_key(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___key = value;
}
inline void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass106_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass106_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource*>*>
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass106_0::_DownloadDependenciesAsyncWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass106_0*>(),
                                              { "<DownloadDependenciesAsyncWithChain>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource*>*>>(this, ___internal_method, op);
}
inline ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass106_0* UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass106_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass106_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass106_0::AddressablesImpl___c__DisplayClass106_0() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass110_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass110_0::*)()>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass110_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64568f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass110_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass110_0._DownloadDependenciesAsyncWithChain_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource*>*> (
        ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass110_0::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass110_0::_DownloadDependenciesAsyncWithChain_b__0)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x645a188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass110_0*>(),
                                                { "<DownloadDependenciesAsyncWithChain>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass110_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass110_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass110_0::__cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*&
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass110_0::__cordl_internal_get_locations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___locations;
}
constexpr ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* const&
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass110_0::__cordl_internal_get_locations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___locations;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass110_0::__cordl_internal_set_locations(
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___locations = value;
}
inline void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass110_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass110_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource*>*>
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass110_0::_DownloadDependenciesAsyncWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass110_0*>(),
                                              { "<DownloadDependenciesAsyncWithChain>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource*>*>>(this, ___internal_method, op);
}
inline ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass110_0* UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass110_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass110_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass110_0::AddressablesImpl___c__DisplayClass110_0() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass112_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass112_0::*)()>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass112_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6456abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass112_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass112_0._DownloadDependenciesAsyncWithChain_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource*>*> (
        ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass112_0::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass112_0::_DownloadDependenciesAsyncWithChain_b__0)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x645a224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass112_0*>(),
                                                { "<DownloadDependenciesAsyncWithChain>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass112_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass112_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass112_0::__cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Collections::IEnumerable*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass112_0::__cordl_internal_get_keys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keys;
}
constexpr ::System::Collections::IEnumerable* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass112_0::__cordl_internal_get_keys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keys;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass112_0::__cordl_internal_set_keys(::System::Collections::IEnumerable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keys = value;
}
constexpr ::UnityEngine::AddressableAssets::Addressables_MergeMode& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass112_0::__cordl_internal_get_mode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mode;
}
constexpr ::UnityEngine::AddressableAssets::Addressables_MergeMode const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass112_0::__cordl_internal_get_mode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mode;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass112_0::__cordl_internal_set_mode(::UnityEngine::AddressableAssets::Addressables_MergeMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mode = value;
}
inline void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass112_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass112_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource*>*>
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass112_0::_DownloadDependenciesAsyncWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass112_0*>(),
                                              { "<DownloadDependenciesAsyncWithChain>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource*>*>>(this, ___internal_method, op);
}
inline ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass112_0* UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass112_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass112_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass112_0::AddressablesImpl___c__DisplayClass112_0() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass116_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass116_0::*)()>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass116_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64571cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass116_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass116_0._ClearDependencyCacheAsync_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> (
    ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass116_0::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass116_0::_ClearDependencyCacheAsync_b__0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x645a2c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass116_0*>(),
                                                { "<ClearDependencyCacheAsync>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass116_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass116_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass116_0::__cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Object*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass116_0::__cordl_internal_get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr ::System::Object* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass116_0::__cordl_internal_get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass116_0::__cordl_internal_set_key(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___key = value;
}
constexpr bool& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass116_0::__cordl_internal_get_autoReleaseHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoReleaseHandle;
}
constexpr bool const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass116_0::__cordl_internal_get_autoReleaseHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoReleaseHandle;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass116_0::__cordl_internal_set_autoReleaseHandle(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___autoReleaseHandle = value;
}
inline void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass116_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass116_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass116_0::_ClearDependencyCacheAsync_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass116_0*>(),
                                                           { "<ClearDependencyCacheAsync>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>(this, ___internal_method, op);
}
inline ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass116_0* UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass116_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass116_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass116_0::AddressablesImpl___c__DisplayClass116_0() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass117_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass117_0::*)()>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass117_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64571d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass117_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass117_0._ClearDependencyCacheAsync_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> (
    ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass117_0::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass117_0::_ClearDependencyCacheAsync_b__0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x645a30c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass117_0*>(),
                                                { "<ClearDependencyCacheAsync>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass117_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass117_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass117_0::__cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*&
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass117_0::__cordl_internal_get_locations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___locations;
}
constexpr ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* const&
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass117_0::__cordl_internal_get_locations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___locations;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass117_0::__cordl_internal_set_locations(
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___locations = value;
}
constexpr bool& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass117_0::__cordl_internal_get_autoReleaseHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoReleaseHandle;
}
constexpr bool const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass117_0::__cordl_internal_get_autoReleaseHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoReleaseHandle;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass117_0::__cordl_internal_set_autoReleaseHandle(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___autoReleaseHandle = value;
}
inline void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass117_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass117_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass117_0::_ClearDependencyCacheAsync_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass117_0*>(),
                                                           { "<ClearDependencyCacheAsync>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>(this, ___internal_method, op);
}
inline ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass117_0* UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass117_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass117_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass117_0::AddressablesImpl___c__DisplayClass117_0() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass118_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass118_0::*)()>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass118_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64571d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass118_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass118_0._ClearDependencyCacheAsync_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> (
    ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass118_0::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass118_0::_ClearDependencyCacheAsync_b__0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x645a354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass118_0*>(),
                                                { "<ClearDependencyCacheAsync>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass118_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass118_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass118_0::__cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Collections::IEnumerable*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass118_0::__cordl_internal_get_keys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keys;
}
constexpr ::System::Collections::IEnumerable* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass118_0::__cordl_internal_get_keys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keys;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass118_0::__cordl_internal_set_keys(::System::Collections::IEnumerable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keys = value;
}
constexpr bool& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass118_0::__cordl_internal_get_autoReleaseHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoReleaseHandle;
}
constexpr bool const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass118_0::__cordl_internal_get_autoReleaseHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoReleaseHandle;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass118_0::__cordl_internal_set_autoReleaseHandle(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___autoReleaseHandle = value;
}
inline void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass118_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass118_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass118_0::_ClearDependencyCacheAsync_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass118_0*>(),
                                                           { "<ClearDependencyCacheAsync>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>(this, ___internal_method, op);
}
inline ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass118_0* UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass118_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass118_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass118_0::AddressablesImpl___c__DisplayClass118_0() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass123_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass123_0::*)()>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass123_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6457414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass123_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass123_0._InstantiateWithChain_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> (
    ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass123_0::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass123_0::_InstantiateWithChain_b__0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x645a39c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass123_0*>(),
                                                             { "<InstantiateWithChain>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass123_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass123_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass123_0::__cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Object*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass123_0::__cordl_internal_get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr ::System::Object* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass123_0::__cordl_internal_get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass123_0::__cordl_internal_set_key(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___key = value;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters&
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass123_0::__cordl_internal_get_instantiateParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___instantiateParameters;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters const&
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass123_0::__cordl_internal_get_instantiateParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___instantiateParameters;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass123_0::__cordl_internal_set_instantiateParameters(
    ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___instantiateParameters = value;
}
inline void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass123_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass123_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass123_0::_InstantiateWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass123_0*>(),
                                                           { "<InstantiateWithChain>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>(this, ___internal_method, op);
}
inline ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass123_0* UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass123_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass123_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass123_0::AddressablesImpl___c__DisplayClass123_0() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass125_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass125_0::*)()>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass125_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64575d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass125_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass125_0._InstantiateWithChain_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> (
    ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass125_0::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass125_0::_InstantiateWithChain_b__0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x645a3f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass125_0*>(),
                                                             { "<InstantiateWithChain>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass125_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass125_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass125_0::__cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass125_0::__cordl_internal_get_location() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___location;
}
constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* const&
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass125_0::__cordl_internal_get_location() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___location;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass125_0::__cordl_internal_set_location(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___location = value;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters&
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass125_0::__cordl_internal_get_instantiateParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___instantiateParameters;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters const&
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass125_0::__cordl_internal_get_instantiateParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___instantiateParameters;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass125_0::__cordl_internal_set_instantiateParameters(
    ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___instantiateParameters = value;
}
inline void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass125_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass125_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass125_0::_InstantiateWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass125_0*>(),
                                                           { "<InstantiateWithChain>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>(this, ___internal_method, op);
}
inline ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass125_0* UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass125_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass125_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass125_0::AddressablesImpl___c__DisplayClass125_0() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass128_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass128_0::*)()>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass128_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x645778c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass128_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass128_0._LoadSceneWithChain_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (
    ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass128_0::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass128_0::_LoadSceneWithChain_b__0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x645a454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass128_0*>(),
                                                             { "<LoadSceneWithChain>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass128_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass128_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass128_0::__cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Object*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass128_0::__cordl_internal_get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr ::System::Object* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass128_0::__cordl_internal_get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass128_0::__cordl_internal_set_key(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___key = value;
}
constexpr ::UnityEngine::SceneManagement::LoadSceneParameters& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass128_0::__cordl_internal_get_loadSceneParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadSceneParameters;
}
constexpr ::UnityEngine::SceneManagement::LoadSceneParameters const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass128_0::__cordl_internal_get_loadSceneParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadSceneParameters;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass128_0::__cordl_internal_set_loadSceneParameters(::UnityEngine::SceneManagement::LoadSceneParameters value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___loadSceneParameters = value;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass128_0::__cordl_internal_get_releaseMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___releaseMode;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode const&
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass128_0::__cordl_internal_get_releaseMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___releaseMode;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass128_0::__cordl_internal_set_releaseMode(::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___releaseMode = value;
}
constexpr bool& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass128_0::__cordl_internal_get_activateOnLoad() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activateOnLoad;
}
constexpr bool const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass128_0::__cordl_internal_get_activateOnLoad() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activateOnLoad;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass128_0::__cordl_internal_set_activateOnLoad(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___activateOnLoad = value;
}
constexpr int32_t& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass128_0::__cordl_internal_get_priority() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priority;
}
constexpr int32_t const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass128_0::__cordl_internal_get_priority() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priority;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass128_0::__cordl_internal_set_priority(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___priority = value;
}
inline void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass128_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass128_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass128_0::_LoadSceneWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass128_0*>(),
                                                           { "<LoadSceneWithChain>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(
      this, ___internal_method, op);
}
inline ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass128_0* UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass128_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass128_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass128_0::AddressablesImpl___c__DisplayClass128_0() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass129_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass129_0::*)()>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass129_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6457940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass129_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass129_0._LoadSceneWithChain_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (
    ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass129_0::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass129_0::_LoadSceneWithChain_b__0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x645a4a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass129_0*>(),
                                                             { "<LoadSceneWithChain>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass129_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass129_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass129_0::__cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass129_0::__cordl_internal_get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass129_0::__cordl_internal_get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass129_0::__cordl_internal_set_key(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___key = value;
}
constexpr ::UnityEngine::SceneManagement::LoadSceneParameters& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass129_0::__cordl_internal_get_loadSceneParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadSceneParameters;
}
constexpr ::UnityEngine::SceneManagement::LoadSceneParameters const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass129_0::__cordl_internal_get_loadSceneParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadSceneParameters;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass129_0::__cordl_internal_set_loadSceneParameters(::UnityEngine::SceneManagement::LoadSceneParameters value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___loadSceneParameters = value;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass129_0::__cordl_internal_get_releaseMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___releaseMode;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode const&
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass129_0::__cordl_internal_get_releaseMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___releaseMode;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass129_0::__cordl_internal_set_releaseMode(::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___releaseMode = value;
}
constexpr bool& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass129_0::__cordl_internal_get_activateOnLoad() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activateOnLoad;
}
constexpr bool const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass129_0::__cordl_internal_get_activateOnLoad() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activateOnLoad;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass129_0::__cordl_internal_set_activateOnLoad(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___activateOnLoad = value;
}
constexpr int32_t& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass129_0::__cordl_internal_get_priority() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priority;
}
constexpr int32_t const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass129_0::__cordl_internal_get_priority() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priority;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass129_0::__cordl_internal_set_priority(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___priority = value;
}
inline void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass129_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass129_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass129_0::_LoadSceneWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass129_0*>(),
                                                           { "<LoadSceneWithChain>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(
      this, ___internal_method, op);
}
inline ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass129_0* UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass129_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass129_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass129_0::AddressablesImpl___c__DisplayClass129_0() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass135_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass135_0::*)()>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass135_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6457cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass135_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass135_0._CreateUnloadSceneWithChain_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (
    ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass135_0::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass135_0::_CreateUnloadSceneWithChain_b__0)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x645a4fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass135_0*>(),
                                                { "<CreateUnloadSceneWithChain>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass135_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass135_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass135_0::__cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::UnityEngine::SceneManagement::UnloadSceneOptions& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass135_0::__cordl_internal_get_unloadOptions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unloadOptions;
}
constexpr ::UnityEngine::SceneManagement::UnloadSceneOptions const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass135_0::__cordl_internal_get_unloadOptions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unloadOptions;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass135_0::__cordl_internal_set_unloadOptions(::UnityEngine::SceneManagement::UnloadSceneOptions value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unloadOptions = value;
}
constexpr bool& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass135_0::__cordl_internal_get_autoReleaseHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoReleaseHandle;
}
constexpr bool const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass135_0::__cordl_internal_get_autoReleaseHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoReleaseHandle;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass135_0::__cordl_internal_set_autoReleaseHandle(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___autoReleaseHandle = value;
}
inline void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass135_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass135_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass135_0::_CreateUnloadSceneWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle completedHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass135_0*>(),
                                              { "<CreateUnloadSceneWithChain>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(
      this, ___internal_method, completedHandle);
}
inline ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass135_0* UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass135_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass135_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass135_0::AddressablesImpl___c__DisplayClass135_0() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass136_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass136_0::*)()>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass136_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6457d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass136_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass136_0._CreateUnloadSceneWithChain_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (
    ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass136_0::*)(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass136_0::_CreateUnloadSceneWithChain_b__0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x645a5ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass136_0*>(),
                         { "<CreateUnloadSceneWithChain>b__0",
                           {},
                           { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass136_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass136_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass136_0::__cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::UnityEngine::SceneManagement::UnloadSceneOptions& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass136_0::__cordl_internal_get_unloadOptions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unloadOptions;
}
constexpr ::UnityEngine::SceneManagement::UnloadSceneOptions const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass136_0::__cordl_internal_get_unloadOptions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unloadOptions;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass136_0::__cordl_internal_set_unloadOptions(::UnityEngine::SceneManagement::UnloadSceneOptions value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unloadOptions = value;
}
constexpr bool& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass136_0::__cordl_internal_get_autoReleaseHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoReleaseHandle;
}
constexpr bool const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass136_0::__cordl_internal_get_autoReleaseHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoReleaseHandle;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass136_0::__cordl_internal_set_autoReleaseHandle(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___autoReleaseHandle = value;
}
inline void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass136_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass136_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass136_0::_CreateUnloadSceneWithChain_b__0(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> completedHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass136_0*>(),
                          { "<CreateUnloadSceneWithChain>b__0",
                            {},
                            { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(
      this, ___internal_method, completedHandle);
}
inline ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass136_0* UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass136_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass136_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass136_0::AddressablesImpl___c__DisplayClass136_0() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass140_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass140_0::*)()>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass140_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6458458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass140_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass140_0._CheckForCatalogUpdatesWithChain_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*> (
    ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass140_0::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass140_0::_CheckForCatalogUpdatesWithChain_b__0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x645a608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass140_0*>(),
                                                { "<CheckForCatalogUpdatesWithChain>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass140_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass140_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass140_0::__cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr bool& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass140_0::__cordl_internal_get_autoReleaseHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoReleaseHandle;
}
constexpr bool const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass140_0::__cordl_internal_get_autoReleaseHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoReleaseHandle;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass140_0::__cordl_internal_set_autoReleaseHandle(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___autoReleaseHandle = value;
}
inline void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass140_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass140_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*>
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass140_0::_CheckForCatalogUpdatesWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass140_0*>(),
                                              { "<CheckForCatalogUpdatesWithChain>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*>>(this, ___internal_method,
                                                                                                                                                                             op);
}
inline ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass140_0* UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass140_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass140_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass140_0::AddressablesImpl___c__DisplayClass140_0() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass144_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass144_0::*)()>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass144_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6458624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass144_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass144_0._UpdateCatalogs_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
    ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*> (::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass144_0::*)(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*>)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass144_0::_UpdateCatalogs_b__0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x645a64c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass144_0*>(),
            { "<UpdateCatalogs>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*>>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass144_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass144_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass144_0::__cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr bool& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass144_0::__cordl_internal_get_autoReleaseHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoReleaseHandle;
}
constexpr bool const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass144_0::__cordl_internal_get_autoReleaseHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoReleaseHandle;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass144_0::__cordl_internal_set_autoReleaseHandle(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___autoReleaseHandle = value;
}
constexpr bool& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass144_0::__cordl_internal_get_autoCleanBundleCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoCleanBundleCache;
}
constexpr bool const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass144_0::__cordl_internal_get_autoCleanBundleCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoCleanBundleCache;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass144_0::__cordl_internal_set_autoCleanBundleCache(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___autoCleanBundleCache = value;
}
inline void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass144_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass144_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*>
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass144_0::_UpdateCatalogs_b__0(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*> depOp) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass144_0*>(),
          { "<UpdateCatalogs>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*>>(
      this, ___internal_method, depOp);
}
inline ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass144_0* UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass144_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass144_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass144_0::AddressablesImpl___c__DisplayClass144_0() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass149_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass149_0::*)()>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass149_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64597c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass149_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass149_0._CleanBundleCacheWithChain_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> (
    ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass149_0::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass149_0::_CleanBundleCacheWithChain_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x645a6ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass149_0*>(),
                                                { "<CleanBundleCacheWithChain>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass149_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass149_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass149_0::__cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>&
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass149_0::__cordl_internal_get_depOp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depOp;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const&
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass149_0::__cordl_internal_get_depOp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depOp;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass149_0::__cordl_internal_set_depOp(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___depOp = value;
}
constexpr bool& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass149_0::__cordl_internal_get_forceSingleThreading() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forceSingleThreading;
}
constexpr bool const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass149_0::__cordl_internal_get_forceSingleThreading() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forceSingleThreading;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass149_0::__cordl_internal_set_forceSingleThreading(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forceSingleThreading = value;
}
inline void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass149_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass149_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass149_0::_CleanBundleCacheWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass149_0*>(),
                                                           { "<CleanBundleCacheWithChain>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>(this, ___internal_method, op);
}
inline ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass149_0* UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass149_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass149_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass149_0::AddressablesImpl___c__DisplayClass149_0() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass150_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass150_0::*)()>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass150_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64597c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass150_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass150_0._CleanBundleCacheWithChain_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> (
    ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass150_0::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass150_0::_CleanBundleCacheWithChain_b__0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x645a704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass150_0*>(),
                                                { "<CleanBundleCacheWithChain>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass150_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass150_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass150_0::__cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass150_0::__cordl_internal_get_catalogIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___catalogIds;
}
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass150_0::__cordl_internal_get_catalogIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___catalogIds;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass150_0::__cordl_internal_set_catalogIds(::System::Collections::Generic::IEnumerable_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___catalogIds = value;
}
constexpr bool& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass150_0::__cordl_internal_get_forceSingleThreading() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forceSingleThreading;
}
constexpr bool const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass150_0::__cordl_internal_get_forceSingleThreading() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forceSingleThreading;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass150_0::__cordl_internal_set_forceSingleThreading(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forceSingleThreading = value;
}
inline void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass150_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass150_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass150_0::_CleanBundleCacheWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass150_0*>(),
                                                           { "<CleanBundleCacheWithChain>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>(this, ___internal_method, op);
}
inline ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass150_0* UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass150_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass150_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass150_0::AddressablesImpl___c__DisplayClass150_0() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass61_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass61_0::*)()>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass61_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64527a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass61_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass61_0._RemoveResourceLocator_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass61_0::*)(::UnityEngine::AddressableAssets::ResourceLocatorInfo*)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass61_0::_RemoveResourceLocator_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x645a74c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass61_0*>(),
                                                             { "<RemoveResourceLocator>b__0", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass61_0::__cordl_internal_get_loc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loc;
}
constexpr ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass61_0::__cordl_internal_get_loc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loc;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass61_0::__cordl_internal_set_loc(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___loc = value;
}
inline void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass61_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass61_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass61_0::_RemoveResourceLocator_b__0(::UnityEngine::AddressableAssets::ResourceLocatorInfo* l) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass61_0*>(),
                                                           { "<RemoveResourceLocator>b__0", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, l);
}
inline ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass61_0* UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass61_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass61_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass61_0::AddressablesImpl___c__DisplayClass61_0() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass72_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass72_0::*)()>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass72_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6453dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass72_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass72_0._LoadContentCatalogAsync_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> (
        ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass72_0::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(
        &::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass72_0::_LoadContentCatalogAsync_b__0)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x645a76c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass72_0*>(),
                                                             { "<LoadContentCatalogAsync>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass72_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass72_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass72_0::__cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::StringW& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass72_0::__cordl_internal_get_catalogPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___catalogPath;
}
constexpr ::StringW const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass72_0::__cordl_internal_get_catalogPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___catalogPath;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass72_0::__cordl_internal_set_catalogPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___catalogPath = value;
}
constexpr bool& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass72_0::__cordl_internal_get_autoReleaseHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoReleaseHandle;
}
constexpr bool const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass72_0::__cordl_internal_get_autoReleaseHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoReleaseHandle;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass72_0::__cordl_internal_set_autoReleaseHandle(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___autoReleaseHandle = value;
}
constexpr ::StringW& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass72_0::__cordl_internal_get_providerSuffix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___providerSuffix;
}
constexpr ::StringW const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass72_0::__cordl_internal_get_providerSuffix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___providerSuffix;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass72_0::__cordl_internal_set_providerSuffix(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___providerSuffix = value;
}
inline void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass72_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass72_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass72_0::_LoadContentCatalogAsync_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass72_0*>(),
                                                           { "<LoadContentCatalogAsync>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>>(
      this, ___internal_method, op);
}
inline ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass72_0* UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass72_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass72_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass72_0::AddressablesImpl___c__DisplayClass72_0() {}
template <typename TObject>
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass78_0_1<TObject>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TObject>
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass78_0_1<TObject>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TObject>
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass78_0_1<TObject>::__cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
template <typename TObject>
constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass78_0_1<TObject>::__cordl_internal_get_loc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loc;
}
template <typename TObject>
constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* const&
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass78_0_1<TObject>::__cordl_internal_get_loc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loc;
}
template <typename TObject>
constexpr void
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass78_0_1<TObject>::__cordl_internal_set_loc(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___loc = value;
}
template <typename TObject> inline void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass78_0_1<TObject>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass78_0_1<TObject>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass78_0_1<TObject>::_LoadAssetWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass78_0_1<TObject>*>(),
                                                           { "<LoadAssetWithChain>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(this, ___internal_method, op);
}
template <typename TObject>
inline ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass78_0_1<TObject>* UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass78_0_1<TObject>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass78_0_1<TObject>*>());
}
// Ctor Parameters []
template <typename TObject> constexpr ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass78_0_1<TObject>::AddressablesImpl___c__DisplayClass78_0_1() {}
template <typename TObject>
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass79_0_1<TObject>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TObject>
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass79_0_1<TObject>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TObject>
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass79_0_1<TObject>::__cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
template <typename TObject> constexpr ::System::Object*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass79_0_1<TObject>::__cordl_internal_get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
template <typename TObject> constexpr ::System::Object* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass79_0_1<TObject>::__cordl_internal_get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
template <typename TObject> constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass79_0_1<TObject>::__cordl_internal_set_key(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___key = value;
}
template <typename TObject> inline void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass79_0_1<TObject>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass79_0_1<TObject>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass79_0_1<TObject>::_LoadAssetWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass79_0_1<TObject>*>(),
                                                           { "<LoadAssetWithChain>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(this, ___internal_method, op);
}
template <typename TObject>
inline ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass79_0_1<TObject>* UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass79_0_1<TObject>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass79_0_1<TObject>*>());
}
// Ctor Parameters []
template <typename TObject> constexpr ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass79_0_1<TObject>::AddressablesImpl___c__DisplayClass79_0_1() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass83_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass83_0::*)()>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass83_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6454768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass83_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass83_0._LoadResourceLocationsWithChain_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> (::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass83_0::*)(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass83_0::_LoadResourceLocationsWithChain_b__0)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x645a7b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass83_0*>(),
                                                { "<LoadResourceLocationsWithChain>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass83_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass83_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass83_0::__cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Collections::IEnumerable*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass83_0::__cordl_internal_get_keys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keys;
}
constexpr ::System::Collections::IEnumerable* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass83_0::__cordl_internal_get_keys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keys;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass83_0::__cordl_internal_set_keys(::System::Collections::IEnumerable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keys = value;
}
constexpr ::UnityEngine::AddressableAssets::Addressables_MergeMode& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass83_0::__cordl_internal_get_mode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mode;
}
constexpr ::UnityEngine::AddressableAssets::Addressables_MergeMode const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass83_0::__cordl_internal_get_mode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mode;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass83_0::__cordl_internal_set_mode(::UnityEngine::AddressableAssets::Addressables_MergeMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mode = value;
}
constexpr ::System::Type*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass83_0::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::System::Type* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass83_0::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass83_0::__cordl_internal_set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
inline void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass83_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass83_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass83_0::_LoadResourceLocationsWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass83_0*>(),
                                              { "<LoadResourceLocationsWithChain>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>>(
      this, ___internal_method, op);
}
inline ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass83_0* UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass83_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass83_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass83_0::AddressablesImpl___c__DisplayClass83_0() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass85_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass85_0::*)()>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass85_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x645493c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass85_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass85_0._LoadResourceLocationsWithChain_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> (::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass85_0::*)(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass85_0::_LoadResourceLocationsWithChain_b__0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x645a804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass85_0*>(),
                                                { "<LoadResourceLocationsWithChain>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass85_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass85_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass85_0::__cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Object*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass85_0::__cordl_internal_get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr ::System::Object* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass85_0::__cordl_internal_get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass85_0::__cordl_internal_set_key(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___key = value;
}
constexpr ::System::Type*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass85_0::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::System::Type* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass85_0::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass85_0::__cordl_internal_set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
inline void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass85_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass85_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass85_0::_LoadResourceLocationsWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass85_0*>(),
                                              { "<LoadResourceLocationsWithChain>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>>(
      this, ___internal_method, op);
}
inline ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass85_0* UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass85_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass85_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass85_0::AddressablesImpl___c__DisplayClass85_0() {}
template <typename TObject>
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass88_0_1<TObject>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TObject>
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass88_0_1<TObject>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TObject>
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass88_0_1<TObject>::__cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
template <typename TObject>
constexpr ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*&
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass88_0_1<TObject>::__cordl_internal_get_locations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___locations;
}
template <typename TObject>
constexpr ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* const&
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass88_0_1<TObject>::__cordl_internal_get_locations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___locations;
}
template <typename TObject>
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass88_0_1<TObject>::__cordl_internal_set_locations(
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___locations = value;
}
template <typename TObject> constexpr ::System::Action_1<TObject>*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass88_0_1<TObject>::__cordl_internal_get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename TObject> constexpr ::System::Action_1<TObject>* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass88_0_1<TObject>::__cordl_internal_get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename TObject> constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass88_0_1<TObject>::__cordl_internal_set_callback(::System::Action_1<TObject>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___callback = value;
}
template <typename TObject> constexpr bool& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass88_0_1<TObject>::__cordl_internal_get_releaseDependenciesOnFailure() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___releaseDependenciesOnFailure;
}
template <typename TObject> constexpr bool const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass88_0_1<TObject>::__cordl_internal_get_releaseDependenciesOnFailure() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___releaseDependenciesOnFailure;
}
template <typename TObject> constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass88_0_1<TObject>::__cordl_internal_set_releaseDependenciesOnFailure(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___releaseDependenciesOnFailure = value;
}
template <typename TObject> inline void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass88_0_1<TObject>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass88_0_1<TObject>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass88_0_1<TObject>::_LoadAssetsWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass88_0_1<TObject>*>(),
                                                           { "<LoadAssetsWithChain>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>>(this, ___internal_method,
                                                                                                                                                                            op);
}
template <typename TObject>
inline ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass88_0_1<TObject>* UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass88_0_1<TObject>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass88_0_1<TObject>*>());
}
// Ctor Parameters []
template <typename TObject> constexpr ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass88_0_1<TObject>::AddressablesImpl___c__DisplayClass88_0_1() {}
template <typename TObject>
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass89_0_1<TObject>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TObject>
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass89_0_1<TObject>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TObject>
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass89_0_1<TObject>::__cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
template <typename TObject> constexpr ::System::Collections::IEnumerable*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass89_0_1<TObject>::__cordl_internal_get_keys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keys;
}
template <typename TObject> constexpr ::System::Collections::IEnumerable* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass89_0_1<TObject>::__cordl_internal_get_keys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keys;
}
template <typename TObject> constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass89_0_1<TObject>::__cordl_internal_set_keys(::System::Collections::IEnumerable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keys = value;
}
template <typename TObject> constexpr ::System::Action_1<TObject>*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass89_0_1<TObject>::__cordl_internal_get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename TObject> constexpr ::System::Action_1<TObject>* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass89_0_1<TObject>::__cordl_internal_get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename TObject> constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass89_0_1<TObject>::__cordl_internal_set_callback(::System::Action_1<TObject>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___callback = value;
}
template <typename TObject>
constexpr ::UnityEngine::AddressableAssets::Addressables_MergeMode& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass89_0_1<TObject>::__cordl_internal_get_mode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mode;
}
template <typename TObject>
constexpr ::UnityEngine::AddressableAssets::Addressables_MergeMode const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass89_0_1<TObject>::__cordl_internal_get_mode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mode;
}
template <typename TObject>
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass89_0_1<TObject>::__cordl_internal_set_mode(::UnityEngine::AddressableAssets::Addressables_MergeMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mode = value;
}
template <typename TObject> constexpr bool& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass89_0_1<TObject>::__cordl_internal_get_releaseDependenciesOnFailure() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___releaseDependenciesOnFailure;
}
template <typename TObject> constexpr bool const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass89_0_1<TObject>::__cordl_internal_get_releaseDependenciesOnFailure() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___releaseDependenciesOnFailure;
}
template <typename TObject> constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass89_0_1<TObject>::__cordl_internal_set_releaseDependenciesOnFailure(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___releaseDependenciesOnFailure = value;
}
template <typename TObject> inline void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass89_0_1<TObject>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass89_0_1<TObject>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass89_0_1<TObject>::_LoadAssetsWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass89_0_1<TObject>*>(),
                                                           { "<LoadAssetsWithChain>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>>(this, ___internal_method,
                                                                                                                                                                            op);
}
template <typename TObject>
inline ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass89_0_1<TObject>* UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass89_0_1<TObject>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass89_0_1<TObject>*>());
}
// Ctor Parameters []
template <typename TObject> constexpr ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass89_0_1<TObject>::AddressablesImpl___c__DisplayClass89_0_1() {}
template <typename TObject>
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass91_0_1<TObject>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TObject>
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass91_0_1<TObject>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TObject>
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass91_0_1<TObject>::__cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
template <typename TObject> constexpr ::System::Object*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass91_0_1<TObject>::__cordl_internal_get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
template <typename TObject> constexpr ::System::Object* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass91_0_1<TObject>::__cordl_internal_get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
template <typename TObject> constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass91_0_1<TObject>::__cordl_internal_set_key(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___key = value;
}
template <typename TObject> constexpr ::System::Action_1<TObject>*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass91_0_1<TObject>::__cordl_internal_get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename TObject> constexpr ::System::Action_1<TObject>* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass91_0_1<TObject>::__cordl_internal_get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename TObject> constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass91_0_1<TObject>::__cordl_internal_set_callback(::System::Action_1<TObject>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___callback = value;
}
template <typename TObject> constexpr bool& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass91_0_1<TObject>::__cordl_internal_get_releaseDependenciesOnFailure() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___releaseDependenciesOnFailure;
}
template <typename TObject> constexpr bool const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass91_0_1<TObject>::__cordl_internal_get_releaseDependenciesOnFailure() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___releaseDependenciesOnFailure;
}
template <typename TObject> constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass91_0_1<TObject>::__cordl_internal_set_releaseDependenciesOnFailure(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___releaseDependenciesOnFailure = value;
}
template <typename TObject> inline void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass91_0_1<TObject>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass91_0_1<TObject>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass91_0_1<TObject>::_LoadAssetsWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass91_0_1<TObject>*>(),
                                                           { "<LoadAssetsWithChain>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>>(this, ___internal_method,
                                                                                                                                                                            op2);
}
template <typename TObject>
inline ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass91_0_1<TObject>* UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass91_0_1<TObject>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass91_0_1<TObject>*>());
}
// Ctor Parameters []
template <typename TObject> constexpr ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass91_0_1<TObject>::AddressablesImpl___c__DisplayClass91_0_1() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass99_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass99_0::*)()>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass99_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6454dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass99_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass99_0._GetDownloadSizeWithChain_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> (
    ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass99_0::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass99_0::_GetDownloadSizeWithChain_b__0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x645a848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass99_0*>(),
                                                { "<GetDownloadSizeWithChain>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass99_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass99_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass99_0::__cordl_internal_set___4__this(::UnityEngine::AddressableAssets::AddressablesImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Object*& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass99_0::__cordl_internal_get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr ::System::Object* const& UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass99_0::__cordl_internal_get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass99_0::__cordl_internal_set_key(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___key = value;
}
inline void UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass99_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass99_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>
UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass99_0::_GetDownloadSizeWithChain_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass99_0*>(),
                                                           { "<GetDownloadSizeWithChain>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>(this, ___internal_method, op);
}
inline ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass99_0* UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass99_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass99_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl___c__DisplayClass99_0::AddressablesImpl___c__DisplayClass99_0() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.get_InstanceProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* (::UnityEngine::AddressableAssets::AddressablesImpl::*)()>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::get_InstanceProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6451df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "get_InstanceProvider", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.set_InstanceProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl::*)(::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::set_InstanceProvider)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6451df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                             { "set_InstanceProvider", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.get_ResourceManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::ResourceManager* (::UnityEngine::AddressableAssets::AddressablesImpl::*)()>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::get_ResourceManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6451e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "get_ResourceManager", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.get_CatalogRequestsTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AddressableAssets::AddressablesImpl::*)()>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::get_CatalogRequestsTimeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6451e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "get_CatalogRequestsTimeout", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.set_CatalogRequestsTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl::*)(int32_t)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::set_CatalogRequestsTimeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6451e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "set_CatalogRequestsTimeout", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.get_ActiveSceneInstances
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AddressableAssets::AddressablesImpl::*)()>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::get_ActiveSceneInstances)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6451e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "get_ActiveSceneInstances", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.get_TrackedHandleCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AddressableAssets::AddressablesImpl::*)()>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::get_TrackedHandleCount)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6451ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "get_TrackedHandleCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl::*)(::UnityEngine::ResourceManagement::Util::IAllocationStrategy*)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::_ctor)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x6451c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::Util::IAllocationStrategy*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.ReleaseSceneManagerOperation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl::*)()>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::ReleaseSceneManagerOperation)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6451f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "ReleaseSceneManagerOperation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.get_InternalIdTransformFunc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>* (
    ::UnityEngine::AddressableAssets::AddressablesImpl::*)()>(&::UnityEngine::AddressableAssets::AddressablesImpl::get_InternalIdTransformFunc)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6449d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "get_InternalIdTransformFunc", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.set_InternalIdTransformFunc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl::*)(
    ::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>*)>(&::UnityEngine::AddressableAssets::AddressablesImpl::set_InternalIdTransformFunc)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6449dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                            { "set_InternalIdTransformFunc", {}, { ::i2c::type_of<::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.get_WebRequestOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* (::UnityEngine::AddressableAssets::AddressablesImpl::*)()>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::get_WebRequestOverride)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6449e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "get_WebRequestOverride", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.set_WebRequestOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl::*)(::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::set_WebRequestOverride)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6449f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                             { "set_WebRequestOverride", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.get_ChainOperation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (::UnityEngine::AddressableAssets::AddressablesImpl::*)()>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::get_ChainOperation)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x6451fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "get_ChainOperation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.get_ShouldChainRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AddressableAssets::AddressablesImpl::*)()>(&::UnityEngine::AddressableAssets::AddressablesImpl::get_ShouldChainRequest)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6452190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "get_ShouldChainRequest", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.OnSceneUnloaded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl::*)(::UnityEngine::SceneManagement::Scene)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::OnSceneUnloaded)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x6452278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                                                           { "OnSceneUnloaded", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.get_StreamingAssetsSubFolder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::AddressableAssets::AddressablesImpl::*)()>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::get_StreamingAssetsSubFolder)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x644a040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "get_StreamingAssetsSubFolder", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.get_BuildPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::AddressableAssets::AddressablesImpl::*)()>(&::UnityEngine::AddressableAssets::AddressablesImpl::get_BuildPath)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x644a120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "get_BuildPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.get_PlayerBuildDataPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::AddressableAssets::AddressablesImpl::*)()>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::get_PlayerBuildDataPath)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x644a2a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "get_PlayerBuildDataPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.get_RuntimePath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::AddressableAssets::AddressablesImpl::*)()>(&::UnityEngine::AddressableAssets::AddressablesImpl::get_RuntimePath)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x644a3ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "get_RuntimePath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.Log
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl::*)(::StringW)>(&::UnityEngine::AddressableAssets::AddressablesImpl::Log)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x644a65c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "Log", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.LogFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl::*)(::StringW, ::ArrayW<::System::Object*>)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::LogFormat)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x644a8b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                                                           { "LogFormat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.LogWarning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl::*)(::StringW)>(&::UnityEngine::AddressableAssets::AddressablesImpl::LogWarning)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x644a5a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "LogWarning", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.LogWarningFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl::*)(::StringW, ::ArrayW<::System::Object*>)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::LogWarningFormat)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x644a7e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                             { "LogWarningFormat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.LogError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl::*)(::StringW)>(&::UnityEngine::AddressableAssets::AddressablesImpl::LogError)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x644a600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "LogError", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.LogException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl::*)(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::System::Exception*)>(&::UnityEngine::AddressableAssets::AddressablesImpl::LogException)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x644ac08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                            { "LogException", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.LogException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl::*)(::System::Exception*)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::LogException)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x644ad50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "LogException", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.LogErrorFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl::*)(::StringW, ::ArrayW<::System::Object*>)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::LogErrorFormat)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x644a84c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                                                           { "LogErrorFormat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.ResolveInternalId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::AddressableAssets::AddressablesImpl::*)(::StringW)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::ResolveInternalId)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6449c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "ResolveInternalId", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.get_ResourceLocators
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>* (
    ::UnityEngine::AddressableAssets::AddressablesImpl::*)()>(&::UnityEngine::AddressableAssets::AddressablesImpl::get_ResourceLocators)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6449874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "get_ResourceLocators", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.AddResourceLocator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl::*)(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*, ::StringW,
                                                                                                                    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::AddResourceLocator)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6451120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                             { "AddResourceLocator",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.RemoveResourceLocator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl::*)(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::RemoveResourceLocator)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x64512c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                             { "RemoveResourceLocator", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.ClearResourceLocators
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl::*)()>(&::UnityEngine::AddressableAssets::AddressablesImpl::ClearResourceLocators)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x645143c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "ClearResourceLocators", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.GetResourceLocations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AddressableAssets::AddressablesImpl::*)(
    ::System::Object*, ::System::Type*, ::by_ref<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::GetResourceLocations)> {
  constexpr static std::size_t size = 0x64c;
  constexpr static std::size_t addrs = 0x64527a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                         { "GetResourceLocations",
                                           {},
                                           { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(),
                                             ::i2c::type_of<::by_ref<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.GetResourceLocations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AddressableAssets::AddressablesImpl::*)(
    ::System::Collections::IEnumerable*, ::System::Type*, ::UnityEngine::AddressableAssets::Addressables_MergeMode,
    ::by_ref<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::GetResourceLocations)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x6452ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                            { "GetResourceLocations",
                              {},
                              { ::i2c::type_of<::System::Collections::IEnumerable*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::AddressableAssets::Addressables_MergeMode>(),
                                ::i2c::type_of<::by_ref<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.InitializeAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> (
        ::UnityEngine::AddressableAssets::AddressablesImpl::*)(::StringW, ::StringW, bool)>(&::UnityEngine::AddressableAssets::AddressablesImpl::InitializeAsync)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0x645338c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                             { "InitializeAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.InitializeAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> (
        ::UnityEngine::AddressableAssets::AddressablesImpl::*)()>(&::UnityEngine::AddressableAssets::AddressablesImpl::InitializeAsync)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x644ae18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "InitializeAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.InitializeAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> (
        ::UnityEngine::AddressableAssets::AddressablesImpl::*)(bool)>(&::UnityEngine::AddressableAssets::AddressablesImpl::InitializeAsync)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x644af7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "InitializeAsync", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.QueueEditorUpdateIfNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl::*)()>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::QueueEditorUpdateIfNeeded)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6453df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "QueueEditorUpdateIfNeeded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.LoadContentCatalogAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> (
        ::UnityEngine::AddressableAssets::AddressablesImpl::*)(::StringW, bool, ::StringW)>(&::UnityEngine::AddressableAssets::AddressablesImpl::LoadContentCatalogAsync)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x644b0f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                             { "LoadContentCatalogAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.TrackHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (
    ::UnityEngine::AddressableAssets::AddressablesImpl::*)(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::TrackHandle)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6454494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                         { "TrackHandle",
                           {},
                           { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.TrackHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (::UnityEngine::AddressableAssets::AddressablesImpl::*)(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&::UnityEngine::AddressableAssets::AddressablesImpl::TrackHandle)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6454554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                             { "TrackHandle", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.ClearTrackHandles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl::*)()>(&::UnityEngine::AddressableAssets::AddressablesImpl::ClearTrackHandles)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6454590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "ClearTrackHandles", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.LoadResourceLocationsWithChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> (::UnityEngine::AddressableAssets::AddressablesImpl::*)(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::System::Collections::IEnumerable*, ::UnityEngine::AddressableAssets::Addressables_MergeMode, ::System::Type*)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationsWithChain)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x64545e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                { "LoadResourceLocationsWithChain",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), ::i2c::type_of<::System::Collections::IEnumerable*>(),
                                                    ::i2c::type_of<::UnityEngine::AddressableAssets::Addressables_MergeMode>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.LoadResourceLocationsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> (::UnityEngine::AddressableAssets::AddressablesImpl::*)(
    ::System::Collections::IEnumerable*, ::UnityEngine::AddressableAssets::Addressables_MergeMode, ::System::Type*)>(&::UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationsAsync)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x644b4d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                             { "LoadResourceLocationsAsync",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::IEnumerable*>(), ::i2c::type_of<::UnityEngine::AddressableAssets::Addressables_MergeMode>(),
                                                                 ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.LoadResourceLocationsWithChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> (
        ::UnityEngine::AddressableAssets::AddressablesImpl::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::System::Object*, ::System::Type*)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationsWithChain)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x64547c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                                                           { "LoadResourceLocationsWithChain",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(),
                                                                                               ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.LoadResourceLocationsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> (
        ::UnityEngine::AddressableAssets::AddressablesImpl::*)(::System::Object*, ::System::Type*)>(&::UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationsAsync)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x644b6ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                             { "LoadResourceLocationsAsync", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.OnHandleDestroyed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::OnHandleDestroyed)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6454998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                             { "OnHandleDestroyed", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.OnSceneHandleCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::OnSceneHandleCompleted)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6454a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                             { "OnSceneHandleCompleted", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.OnHandleCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::OnHandleCompleted)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6454b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                             { "OnHandleCompleted", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::Release)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6454c30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                             { "Release", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.GetDownloadSizeWithChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> (::UnityEngine::AddressableAssets::AddressablesImpl::*)(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::System::Object*)>(&::UnityEngine::AddressableAssets::AddressablesImpl::GetDownloadSizeWithChain)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x6454c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                            { "GetDownloadSizeWithChain", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.ComputeCatalogSizeWithChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> (::UnityEngine::AddressableAssets::AddressablesImpl::*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(&::UnityEngine::AddressableAssets::AddressablesImpl::ComputeCatalogSizeWithChain)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x6454dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                             { "ComputeCatalogSizeWithChain", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.IsCatalogCached
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AddressableAssets::AddressablesImpl::*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::Hash128)>(&::UnityEngine::AddressableAssets::AddressablesImpl::IsCatalogCached)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x64551c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                            { "IsCatalogCached", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(), ::i2c::type_of<::UnityEngine::Hash128>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.GetRemoteCatalogHeaderSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> (::UnityEngine::AddressableAssets::AddressablesImpl::*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(&::UnityEngine::AddressableAssets::AddressablesImpl::GetRemoteCatalogHeaderSize)> {
  constexpr static std::size_t size = 0x4a4;
  constexpr static std::size_t addrs = 0x64555e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                             { "GetRemoteCatalogHeaderSize", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.GetDownloadSizeWithChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> (::UnityEngine::AddressableAssets::AddressablesImpl::*)(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::System::Collections::IEnumerable*)>(&::UnityEngine::AddressableAssets::AddressablesImpl::GetDownloadSizeWithChain)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x6455a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                         { "GetDownloadSizeWithChain",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), ::i2c::type_of<::System::Collections::IEnumerable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.GetDownloadSizeAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> (::UnityEngine::AddressableAssets::AddressablesImpl::*)(
    ::System::Object*)>(&::UnityEngine::AddressableAssets::AddressablesImpl::GetDownloadSizeAsync)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x644bb08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "GetDownloadSizeAsync", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.GetDownloadSizeAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> (::UnityEngine::AddressableAssets::AddressablesImpl::*)(
    ::System::Collections::IEnumerable*)>(&::UnityEngine::AddressableAssets::AddressablesImpl::GetDownloadSizeAsync)> {
  constexpr static std::size_t size = 0xe64;
  constexpr static std::size_t addrs = 0x644bd70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                                                           { "GetDownloadSizeAsync", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.DownloadDependenciesAsyncWithChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (::UnityEngine::AddressableAssets::AddressablesImpl::*)(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::System::Object*, bool)>(&::UnityEngine::AddressableAssets::AddressablesImpl::DownloadDependenciesAsyncWithChain)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x6455bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                            { "DownloadDependenciesAsyncWithChain",
                              {},
                              { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.WrapAsDownloadLocations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::WrapAsDownloadLocations)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6455db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                         { "WrapAsDownloadLocations", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.GatherDependenciesFromLocations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* (*)(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::GatherDependenciesFromLocations)> {
  constexpr static std::size_t size = 0x888;
  constexpr static std::size_t addrs = 0x6455eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
            { "GatherDependenciesFromLocations", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.DownloadDependenciesAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (::UnityEngine::AddressableAssets::AddressablesImpl::*)(
    ::System::Object*, bool)>(&::UnityEngine::AddressableAssets::AddressablesImpl::DownloadDependenciesAsync)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x644ccb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                                                           { "DownloadDependenciesAsync", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.DownloadDependenciesAsyncWithChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (::UnityEngine::AddressableAssets::AddressablesImpl::*)(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*,
    bool)>(&::UnityEngine::AddressableAssets::AddressablesImpl::DownloadDependenciesAsyncWithChain)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x6456738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                            { "DownloadDependenciesAsyncWithChain",
                              {},
                              { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(),
                                ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.DownloadDependenciesAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (::UnityEngine::AddressableAssets::AddressablesImpl::*)(
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*, bool)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::DownloadDependenciesAsync)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x644cfc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                            { "DownloadDependenciesAsync",
                              {},
                              { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.DownloadDependenciesAsyncWithChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (::UnityEngine::AddressableAssets::AddressablesImpl::*)(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::System::Collections::IEnumerable*, ::UnityEngine::AddressableAssets::Addressables_MergeMode, bool)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::DownloadDependenciesAsyncWithChain)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x64568f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                { "DownloadDependenciesAsyncWithChain",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), ::i2c::type_of<::System::Collections::IEnumerable*>(),
                                                    ::i2c::type_of<::UnityEngine::AddressableAssets::Addressables_MergeMode>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.DownloadDependenciesAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (::UnityEngine::AddressableAssets::AddressablesImpl::*)(
    ::System::Collections::IEnumerable*, ::UnityEngine::AddressableAssets::Addressables_MergeMode, bool)>(&::UnityEngine::AddressableAssets::AddressablesImpl::DownloadDependenciesAsync)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x644d1d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                            { "DownloadDependenciesAsync",
                              {},
                              { ::i2c::type_of<::System::Collections::IEnumerable*>(), ::i2c::type_of<::UnityEngine::AddressableAssets::Addressables_MergeMode>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.ClearDependencyCacheForKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AddressableAssets::AddressablesImpl::*)(::System::Object*)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::ClearDependencyCacheForKey)> {
  constexpr static std::size_t size = 0x70c;
  constexpr static std::size_t addrs = 0x6456ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "ClearDependencyCacheForKey", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.ClearDependencyCacheAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> (::UnityEngine::AddressableAssets::AddressablesImpl::*)(
    ::System::Object*, bool)>(&::UnityEngine::AddressableAssets::AddressablesImpl::ClearDependencyCacheAsync)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x644d4e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                                                           { "ClearDependencyCacheAsync", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.ClearDependencyCacheAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> (::UnityEngine::AddressableAssets::AddressablesImpl::*)(
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*, bool)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::ClearDependencyCacheAsync)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x644d7e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                            { "ClearDependencyCacheAsync",
                              {},
                              { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.ClearDependencyCacheAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> (::UnityEngine::AddressableAssets::AddressablesImpl::*)(
    ::System::Collections::IEnumerable*, bool)>(&::UnityEngine::AddressableAssets::AddressablesImpl::ClearDependencyCacheAsync)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0x644dd60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                             { "ClearDependencyCacheAsync", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.InstantiateAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> (
    ::UnityEngine::AddressableAssets::AddressablesImpl::*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::Transform*, bool, bool)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::InstantiateAsync)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x64571d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                                                           { "InstantiateAsync",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.InstantiateAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> (
    ::UnityEngine::AddressableAssets::AddressablesImpl::*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion,
                                                           ::UnityEngine::Transform*, bool)>(&::UnityEngine::AddressableAssets::AddressablesImpl::InstantiateAsync)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x644ebc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                             { "InstantiateAsync",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                 ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.InstantiateAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> (
    ::UnityEngine::AddressableAssets::AddressablesImpl::*)(::System::Object*, ::UnityEngine::Transform*, bool, bool)>(&::UnityEngine::AddressableAssets::AddressablesImpl::InstantiateAsync)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x644ed3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                            { "InstantiateAsync", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.InstantiateAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> (
    ::UnityEngine::AddressableAssets::AddressablesImpl::*)(::System::Object*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Transform*, bool)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::InstantiateAsync)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x644ef04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                             { "InstantiateAsync",
                                                               {},
                                                               { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(),
                                                                 ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.InstantiateWithChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> (::UnityEngine::AddressableAssets::AddressablesImpl::*)(
        ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::System::Object*, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters, bool)>(
        &::UnityEngine::AddressableAssets::AddressablesImpl::InstantiateWithChain)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x6457254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                             { "InstantiateWithChain",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), ::i2c::type_of<::System::Object*>(),
                                                                 ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.InstantiateAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> (
    ::UnityEngine::AddressableAssets::AddressablesImpl::*)(::System::Object*, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters, bool)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::InstantiateAsync)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x644f058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                            { "InstantiateAsync",
                              {},
                              { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.InstantiateWithChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> (::UnityEngine::AddressableAssets::AddressablesImpl::*)(
        ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,
        ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters, bool)>(&::UnityEngine::AddressableAssets::AddressablesImpl::InstantiateWithChain)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x6457418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                             { "InstantiateWithChain",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(),
                                                                 ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(),
                                                                 ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.InstantiateAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> (::UnityEngine::AddressableAssets::AddressablesImpl::*)(
        ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters, bool)>(
        &::UnityEngine::AddressableAssets::AddressablesImpl::InstantiateAsync)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x644e95c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                             { "InstantiateAsync",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(),
                                                                 ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.ReleaseInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AddressableAssets::AddressablesImpl::*)(::UnityEngine::GameObject*)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::ReleaseInstance)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x644b8d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "ReleaseInstance", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.LoadSceneWithChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (
    ::UnityEngine::AddressableAssets::AddressablesImpl::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::System::Object*,
                                                           ::UnityEngine::SceneManagement::LoadSceneParameters, ::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode, bool, int32_t)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::LoadSceneWithChain)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x64575dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                { "LoadSceneWithChain",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), ::i2c::type_of<::System::Object*>(),
                                                    ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>(),
                                                    ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.LoadSceneWithChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (
    ::UnityEngine::AddressableAssets::AddressablesImpl::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,
                                                           ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::SceneManagement::LoadSceneParameters,
                                                           ::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode, bool, int32_t)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::LoadSceneWithChain)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x6457790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                            { "LoadSceneWithChain",
                              {},
                              { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(),
                                ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>(),
                                ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.LoadSceneAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (
    ::UnityEngine::AddressableAssets::AddressablesImpl::*)(::System::Object*, ::UnityEngine::SceneManagement::LoadSceneParameters,
                                                           ::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode, bool, int32_t, bool)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::LoadSceneAsync)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x644f628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                             { "LoadSceneAsync",
                                                               {},
                                                               { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>(),
                                                                 ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.LoadSceneAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (
    ::UnityEngine::AddressableAssets::AddressablesImpl::*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::SceneManagement::LoadSceneParameters,
                                                           ::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode, bool, int32_t, bool)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::LoadSceneAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x644fc80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                         { "LoadSceneAsync",
                           {},
                           { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>(),
                             ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.UnloadSceneAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (
    ::UnityEngine::AddressableAssets::AddressablesImpl::*)(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, ::UnityEngine::SceneManagement::UnloadSceneOptions, bool)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::UnloadSceneAsync)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x645017c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                                                           { "UnloadSceneAsync",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>(),
                                                                                               ::i2c::type_of<::UnityEngine::SceneManagement::UnloadSceneOptions>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.UnloadSceneAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (
    ::UnityEngine::AddressableAssets::AddressablesImpl::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::UnityEngine::SceneManagement::UnloadSceneOptions, bool)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::UnloadSceneAsync)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x64504c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                                                           { "UnloadSceneAsync",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(),
                                                                                               ::i2c::type_of<::UnityEngine::SceneManagement::UnloadSceneOptions>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.UnloadSceneAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (
    ::UnityEngine::AddressableAssets::AddressablesImpl::*)(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, ::UnityEngine::SceneManagement::UnloadSceneOptions,
    bool)>(&::UnityEngine::AddressableAssets::AddressablesImpl::UnloadSceneAsync)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6450900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                            { "UnloadSceneAsync",
                              {},
                              { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(),
                                ::i2c::type_of<::UnityEngine::SceneManagement::UnloadSceneOptions>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.CreateUnloadSceneWithChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (
    ::UnityEngine::AddressableAssets::AddressablesImpl::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::UnityEngine::SceneManagement::UnloadSceneOptions, bool)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::CreateUnloadSceneWithChain)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6457944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                                                           { "CreateUnloadSceneWithChain",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(),
                                                                                               ::i2c::type_of<::UnityEngine::SceneManagement::UnloadSceneOptions>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.CreateUnloadSceneWithChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (
    ::UnityEngine::AddressableAssets::AddressablesImpl::*)(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, ::UnityEngine::SceneManagement::UnloadSceneOptions,
    bool)>(&::UnityEngine::AddressableAssets::AddressablesImpl::CreateUnloadSceneWithChain)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6457ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                            { "CreateUnloadSceneWithChain",
                              {},
                              { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(),
                                ::i2c::type_of<::UnityEngine::SceneManagement::UnloadSceneOptions>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.InternalUnloadScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (
    ::UnityEngine::AddressableAssets::AddressablesImpl::*)(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, ::UnityEngine::SceneManagement::UnloadSceneOptions,
    bool)>(&::UnityEngine::AddressableAssets::AddressablesImpl::InternalUnloadScene)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6457c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                            { "InternalUnloadScene",
                              {},
                              { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(),
                                ::i2c::type_of<::UnityEngine::SceneManagement::UnloadSceneOptions>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.EvaluateKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::AddressableAssets::AddressablesImpl::*)(::System::Object*)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::EvaluateKey)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6452df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "EvaluateKey", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.CheckForCatalogUpdates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*> (
    ::UnityEngine::AddressableAssets::AddressablesImpl::*)(bool)>(&::UnityEngine::AddressableAssets::AddressablesImpl::CheckForCatalogUpdates)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6450ab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "CheckForCatalogUpdates", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.CheckForCatalogUpdatesWithChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*> (
    ::UnityEngine::AddressableAssets::AddressablesImpl::*)(bool)>(&::UnityEngine::AddressableAssets::AddressablesImpl::CheckForCatalogUpdatesWithChain)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x6457d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "CheckForCatalogUpdatesWithChain", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.GetLocatorInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AddressableAssets::ResourceLocatorInfo* (::UnityEngine::AddressableAssets::AddressablesImpl::*)(::StringW)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::GetLocatorInfo)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x6444a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "GetLocatorInfo", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.get_CatalogsWithAvailableUpdates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (::UnityEngine::AddressableAssets::AddressablesImpl::*)()>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::get_CatalogsWithAvailableUpdates)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x645845c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "get_CatalogsWithAvailableUpdates", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.UpdateCatalogs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
    ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*> (::UnityEngine::AddressableAssets::AddressablesImpl::*)(
    ::System::Collections::Generic::IEnumerable_1<::StringW>*, bool, bool)>(&::UnityEngine::AddressableAssets::AddressablesImpl::UpdateCatalogs)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x6450ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                         { "UpdateCatalogs", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AddressableAssets::AddressablesImpl::*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,
                                                                                                                    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::Equals)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x6458d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                                                           { "Equals",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(),
                                                                                               ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AddressableAssets::AddressablesImpl::*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::GetHashCode)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x645904c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                             { "GetHashCode", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.CleanBundleCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> (::UnityEngine::AddressableAssets::AddressablesImpl::*)(
    ::System::Collections::Generic::IEnumerable_1<::StringW>*, bool)>(&::UnityEngine::AddressableAssets::AddressablesImpl::CleanBundleCache)> {
  constexpr static std::size_t size = 0x584;
  constexpr static std::size_t addrs = 0x6451588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                             { "CleanBundleCache", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.CleanBundleCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> (::UnityEngine::AddressableAssets::AddressablesImpl::*)(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>,
    bool)>(&::UnityEngine::AddressableAssets::AddressablesImpl::CleanBundleCache)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x64592ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                             { "CleanBundleCache",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
                                                                     ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>(),
                                                                 ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.CleanBundleCacheWithChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> (::UnityEngine::AddressableAssets::AddressablesImpl::*)(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>,
    bool)>(&::UnityEngine::AddressableAssets::AddressablesImpl::CleanBundleCacheWithChain)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x6459488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                             { "CleanBundleCacheWithChain",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
                                                                     ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>(),
                                                                 ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl.CleanBundleCacheWithChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> (::UnityEngine::AddressableAssets::AddressablesImpl::*)(
    ::System::Collections::Generic::IEnumerable_1<::StringW>*, bool)>(&::UnityEngine::AddressableAssets::AddressablesImpl::CleanBundleCacheWithChain)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x645917c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                { "CleanBundleCacheWithChain", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl._TrackHandle_b__73_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AddressablesImpl::*)(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::_TrackHandle_b__73_0)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x64597c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                         { "<TrackHandle>b__73_0",
                           {},
                           { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AddressablesImpl._GetRemoteCatalogHeaderSize_b__102_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> (::UnityEngine::AddressableAssets::AddressablesImpl::*)(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::Networking::UnityWebRequest*>)>(
    &::UnityEngine::AddressableAssets::AddressablesImpl::_GetRemoteCatalogHeaderSize_b__102_0)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6459850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                { "<GetRemoteCatalogHeaderSize>b__102_0",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::Networking::UnityWebRequest*>>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ResourceManagement::ResourceManager*& UnityEngine::AddressableAssets::AddressablesImpl::__cordl_internal_get_m_ResourceManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResourceManager;
}
constexpr ::UnityEngine::ResourceManagement::ResourceManager* const& UnityEngine::AddressableAssets::AddressablesImpl::__cordl_internal_get_m_ResourceManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResourceManager;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl::__cordl_internal_set_m_ResourceManager(::UnityEngine::ResourceManagement::ResourceManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ResourceManager = value;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*& UnityEngine::AddressableAssets::AddressablesImpl::__cordl_internal_get_m_InstanceProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InstanceProvider;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* const& UnityEngine::AddressableAssets::AddressablesImpl::__cordl_internal_get_m_InstanceProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InstanceProvider;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl::__cordl_internal_set_m_InstanceProvider(::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InstanceProvider = value;
}
constexpr int32_t& UnityEngine::AddressableAssets::AddressablesImpl::__cordl_internal_get_m_CatalogRequestsTimeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CatalogRequestsTimeout;
}
constexpr int32_t const& UnityEngine::AddressableAssets::AddressablesImpl::__cordl_internal_get_m_CatalogRequestsTimeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CatalogRequestsTimeout;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl::__cordl_internal_set_m_CatalogRequestsTimeout(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CatalogRequestsTimeout = value;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*& UnityEngine::AddressableAssets::AddressablesImpl::__cordl_internal_get_SceneProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SceneProvider;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider* const& UnityEngine::AddressableAssets::AddressablesImpl::__cordl_internal_get_SceneProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SceneProvider;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl::__cordl_internal_set_SceneProvider(::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SceneProvider = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>*& UnityEngine::AddressableAssets::AddressablesImpl::__cordl_internal_get_m_ResourceLocators() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResourceLocators;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>* const&
UnityEngine::AddressableAssets::AddressablesImpl::__cordl_internal_get_m_ResourceLocators() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResourceLocators;
}
constexpr void
UnityEngine::AddressableAssets::AddressablesImpl::__cordl_internal_set_m_ResourceLocators(::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ResourceLocators = value;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>&
UnityEngine::AddressableAssets::AddressablesImpl::__cordl_internal_get_m_InitializationOperation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InitializationOperation;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> const&
UnityEngine::AddressableAssets::AddressablesImpl::__cordl_internal_get_m_InitializationOperation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InitializationOperation;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl::__cordl_internal_set_m_InitializationOperation(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InitializationOperation = value;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*>&
UnityEngine::AddressableAssets::AddressablesImpl::__cordl_internal_get_m_ActiveCheckUpdateOperation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveCheckUpdateOperation;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*> const&
UnityEngine::AddressableAssets::AddressablesImpl::__cordl_internal_get_m_ActiveCheckUpdateOperation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveCheckUpdateOperation;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl::__cordl_internal_set_m_ActiveCheckUpdateOperation(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActiveCheckUpdateOperation = value;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*>&
UnityEngine::AddressableAssets::AddressablesImpl::__cordl_internal_get_m_ActiveUpdateOperation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveUpdateOperation;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
    ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*> const&
UnityEngine::AddressableAssets::AddressablesImpl::__cordl_internal_get_m_ActiveUpdateOperation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveUpdateOperation;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl::__cordl_internal_set_m_ActiveUpdateOperation(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActiveUpdateOperation = value;
}
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*&
UnityEngine::AddressableAssets::AddressablesImpl::__cordl_internal_get_m_OnHandleCompleteAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnHandleCompleteAction;
}
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* const&
UnityEngine::AddressableAssets::AddressablesImpl::__cordl_internal_get_m_OnHandleCompleteAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnHandleCompleteAction;
}
constexpr void
UnityEngine::AddressableAssets::AddressablesImpl::__cordl_internal_set_m_OnHandleCompleteAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnHandleCompleteAction = value;
}
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*&
UnityEngine::AddressableAssets::AddressablesImpl::__cordl_internal_get_m_OnSceneHandleCompleteAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnSceneHandleCompleteAction;
}
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* const&
UnityEngine::AddressableAssets::AddressablesImpl::__cordl_internal_get_m_OnSceneHandleCompleteAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnSceneHandleCompleteAction;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl::__cordl_internal_set_m_OnSceneHandleCompleteAction(
    ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnSceneHandleCompleteAction = value;
}
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*&
UnityEngine::AddressableAssets::AddressablesImpl::__cordl_internal_get_m_OnHandleDestroyedAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnHandleDestroyedAction;
}
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* const&
UnityEngine::AddressableAssets::AddressablesImpl::__cordl_internal_get_m_OnHandleDestroyedAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnHandleDestroyedAction;
}
constexpr void
UnityEngine::AddressableAssets::AddressablesImpl::__cordl_internal_set_m_OnHandleDestroyedAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnHandleDestroyedAction = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*&
UnityEngine::AddressableAssets::AddressablesImpl::__cordl_internal_get_m_resultToHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_resultToHandle;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* const&
UnityEngine::AddressableAssets::AddressablesImpl::__cordl_internal_get_m_resultToHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_resultToHandle;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl::__cordl_internal_set_m_resultToHandle(
    ::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_resultToHandle = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*&
UnityEngine::AddressableAssets::AddressablesImpl::__cordl_internal_get_m_SceneInstances() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SceneInstances;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* const&
UnityEngine::AddressableAssets::AddressablesImpl::__cordl_internal_get_m_SceneInstances() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SceneInstances;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl::__cordl_internal_set_m_SceneInstances(
    ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SceneInstances = value;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>& UnityEngine::AddressableAssets::AddressablesImpl::__cordl_internal_get_m_ActiveCleanBundleCacheOperation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveCleanBundleCacheOperation;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> const&
UnityEngine::AddressableAssets::AddressablesImpl::__cordl_internal_get_m_ActiveCleanBundleCacheOperation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveCleanBundleCacheOperation;
}
constexpr void
UnityEngine::AddressableAssets::AddressablesImpl::__cordl_internal_set_m_ActiveCleanBundleCacheOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActiveCleanBundleCacheOperation = value;
}
constexpr bool& UnityEngine::AddressableAssets::AddressablesImpl::__cordl_internal_get_hasStartedInitialization() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasStartedInitialization;
}
constexpr bool const& UnityEngine::AddressableAssets::AddressablesImpl::__cordl_internal_get_hasStartedInitialization() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasStartedInitialization;
}
constexpr void UnityEngine::AddressableAssets::AddressablesImpl::__cordl_internal_set_hasStartedInitialization(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasStartedInitialization = value;
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* UnityEngine::AddressableAssets::AddressablesImpl::get_InstanceProvider() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "get_InstanceProvider", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::AddressablesImpl::set_InstanceProvider(::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                           { "set_InstanceProvider", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ResourceManagement::ResourceManager* UnityEngine::AddressableAssets::AddressablesImpl::get_ResourceManager() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "get_ResourceManager", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::ResourceManager*>(this, ___internal_method);
}
inline int32_t UnityEngine::AddressableAssets::AddressablesImpl::get_CatalogRequestsTimeout() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "get_CatalogRequestsTimeout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::AddressablesImpl::set_CatalogRequestsTimeout(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "set_CatalogRequestsTimeout", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::AddressableAssets::AddressablesImpl::get_ActiveSceneInstances() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "get_ActiveSceneInstances", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::AddressableAssets::AddressablesImpl::get_TrackedHandleCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "get_TrackedHandleCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::AddressablesImpl::_ctor(::UnityEngine::ResourceManagement::Util::IAllocationStrategy* alloc) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::Util::IAllocationStrategy*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alloc);
}
inline void UnityEngine::AddressableAssets::AddressablesImpl::ReleaseSceneManagerOperation() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "ReleaseSceneManagerOperation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>* UnityEngine::AddressableAssets::AddressablesImpl::get_InternalIdTransformFunc() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "get_InternalIdTransformFunc", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>*>(this, ___internal_method);
}
inline void
UnityEngine::AddressableAssets::AddressablesImpl::set_InternalIdTransformFunc(::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                          { "set_InternalIdTransformFunc", {}, { ::i2c::type_of<::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* UnityEngine::AddressableAssets::AddressablesImpl::get_WebRequestOverride() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "get_WebRequestOverride", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::AddressablesImpl::set_WebRequestOverride(::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                           { "set_WebRequestOverride", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine::AddressableAssets::AddressablesImpl::get_ChainOperation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "get_ChainOperation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(this, ___internal_method);
}
inline bool UnityEngine::AddressableAssets::AddressablesImpl::get_ShouldChainRequest() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "get_ShouldChainRequest", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::AddressablesImpl::OnSceneUnloaded(::UnityEngine::SceneManagement::Scene scene) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                                                         { "OnSceneUnloaded", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scene);
}
inline ::StringW UnityEngine::AddressableAssets::AddressablesImpl::get_StreamingAssetsSubFolder() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "get_StreamingAssetsSubFolder", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW UnityEngine::AddressableAssets::AddressablesImpl::get_BuildPath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "get_BuildPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW UnityEngine::AddressableAssets::AddressablesImpl::get_PlayerBuildDataPath() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "get_PlayerBuildDataPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW UnityEngine::AddressableAssets::AddressablesImpl::get_RuntimePath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "get_RuntimePath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::AddressablesImpl::Log(::StringW msg) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "Log", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline void UnityEngine::AddressableAssets::AddressablesImpl::LogFormat(::StringW format, ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                                                         { "LogFormat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, args);
}
inline void UnityEngine::AddressableAssets::AddressablesImpl::LogWarning(::StringW msg) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "LogWarning", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline void UnityEngine::AddressableAssets::AddressablesImpl::LogWarningFormat(::StringW format, ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                                                         { "LogWarningFormat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, args);
}
inline void UnityEngine::AddressableAssets::AddressablesImpl::LogError(::StringW msg) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "LogError", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline void UnityEngine::AddressableAssets::AddressablesImpl::LogException(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op, ::System::Exception* ex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                          { "LogException", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op, ex);
}
inline void UnityEngine::AddressableAssets::AddressablesImpl::LogException(::System::Exception* ex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "LogException", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ex);
}
inline void UnityEngine::AddressableAssets::AddressablesImpl::LogErrorFormat(::StringW format, ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                                                         { "LogErrorFormat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, args);
}
inline ::StringW UnityEngine::AddressableAssets::AddressablesImpl::ResolveInternalId(::StringW id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "ResolveInternalId", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, id);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>* UnityEngine::AddressableAssets::AddressablesImpl::get_ResourceLocators() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "get_ResourceLocators", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::AddressablesImpl::AddResourceLocator(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* loc, ::StringW localCatalogHash,
                                                                                 ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* remoteCatalogLocation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                           { "AddResourceLocator",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, loc, localCatalogHash, remoteCatalogLocation);
}
inline void UnityEngine::AddressableAssets::AddressablesImpl::RemoveResourceLocator(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* loc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                           { "RemoveResourceLocator", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, loc);
}
inline void UnityEngine::AddressableAssets::AddressablesImpl::ClearResourceLocators() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "ClearResourceLocators", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::AddressableAssets::AddressablesImpl::GetResourceLocations(
    ::System::Object* key, ::System::Type* type, ::by_ref<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> locations) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                              { "GetResourceLocations",
                                                {},
                                                { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(),
                                                  ::i2c::type_of<::by_ref<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, type, locations);
}
inline bool UnityEngine::AddressableAssets::AddressablesImpl::GetResourceLocations(
    ::System::Collections::IEnumerable* keys, ::System::Type* type, ::UnityEngine::AddressableAssets::Addressables_MergeMode merge,
    ::by_ref<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> locations) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                          { "GetResourceLocations",
                            {},
                            { ::i2c::type_of<::System::Collections::IEnumerable*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::AddressableAssets::Addressables_MergeMode>(),
                              ::i2c::type_of<::by_ref<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, keys, type, merge, locations);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
UnityEngine::AddressableAssets::AddressablesImpl::InitializeAsync(::StringW runtimeDataPath, ::StringW providerSuffix, bool autoReleaseHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                           { "InitializeAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>>(
      this, ___internal_method, runtimeDataPath, providerSuffix, autoReleaseHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
UnityEngine::AddressableAssets::AddressablesImpl::InitializeAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "InitializeAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>>(
      this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
UnityEngine::AddressableAssets::AddressablesImpl::InitializeAsync(bool autoReleaseHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "InitializeAsync", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>>(
      this, ___internal_method, autoReleaseHandle);
}
template <typename T>
inline ::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase*
UnityEngine::AddressableAssets::AddressablesImpl::CreateCatalogLocationWithHashDependencies(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* catalogLocation) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                          { "CreateCatalogLocationWithHashDependencies", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase*>(this, ___internal_method, catalogLocation);
}
template <typename T>
inline ::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase*
UnityEngine::AddressableAssets::AddressablesImpl::CreateCatalogLocationWithHashDependencies(::StringW catalogLocation) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                           { "CreateCatalogLocationWithHashDependencies", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase*>(this, ___internal_method, catalogLocation);
}
template <typename T>
inline ::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase* UnityEngine::AddressableAssets::AddressablesImpl::CreateCatalogLocationWithHashDependencies(::StringW catalogPath,
                                                                                                                                                                               ::StringW hashFilePath) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                           { "CreateCatalogLocationWithHashDependencies", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase*>(this, ___internal_method, catalogPath, hashFilePath);
}
inline void UnityEngine::AddressableAssets::AddressablesImpl::QueueEditorUpdateIfNeeded() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "QueueEditorUpdateIfNeeded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
UnityEngine::AddressableAssets::AddressablesImpl::LoadContentCatalogAsync(::StringW catalogPath, bool autoReleaseHandle, ::StringW providerSuffix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                           { "LoadContentCatalogAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>>(
      this, ___internal_method, catalogPath, autoReleaseHandle, providerSuffix);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::AddressableAssets::AddressablesImpl::TrackHandle(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                          { "TrackHandle",
                            {},
                            { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(
      this, ___internal_method, handle);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>
UnityEngine::AddressableAssets::AddressablesImpl::TrackHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> handle) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                       { "TrackHandle", { ::i2c::class_of<TObject>() }, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObject>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(this, ___internal_method, handle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle
UnityEngine::AddressableAssets::AddressablesImpl::TrackHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                           { "TrackHandle", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(this, ___internal_method, handle);
}
inline void UnityEngine::AddressableAssets::AddressablesImpl::ClearTrackHandles() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "ClearTrackHandles", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>
UnityEngine::AddressableAssets::AddressablesImpl::LoadAssetAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                              { "LoadAssetAsync", { ::i2c::class_of<TObject>() }, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObject>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(this, ___internal_method, location);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>
UnityEngine::AddressableAssets::AddressablesImpl::LoadAssetWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dep,
                                                                     ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* loc) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                                                              { "LoadAssetWithChain",
                                                                                                { ::i2c::class_of<TObject>() },
                                                                                                { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(),
                                                                                                  ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObject>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(this, ___internal_method, dep, loc);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>
UnityEngine::AddressableAssets::AddressablesImpl::LoadAssetWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dep, ::System::Object* key) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                           { "LoadAssetWithChain",
                                                             { ::i2c::class_of<TObject>() },
                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), ::i2c::type_of<::System::Object*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObject>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(this, ___internal_method, dep, key);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::AddressableAssets::AddressablesImpl::LoadAssetAsync(::System::Object* key) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                                                              { "LoadAssetAsync", { ::i2c::class_of<TObject>() }, { ::i2c::type_of<::System::Object*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObject>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(this, ___internal_method, key);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationsWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dep, ::System::Collections::IEnumerable* keys,
                                                                                 ::UnityEngine::AddressableAssets::Addressables_MergeMode mode, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                              { "LoadResourceLocationsWithChain",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), ::i2c::type_of<::System::Collections::IEnumerable*>(),
                                                  ::i2c::type_of<::UnityEngine::AddressableAssets::Addressables_MergeMode>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>>(
      this, ___internal_method, dep, keys, mode, type);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationsAsync(::System::Collections::IEnumerable* keys, ::UnityEngine::AddressableAssets::Addressables_MergeMode mode,
                                                                             ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                           { "LoadResourceLocationsAsync",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::IEnumerable*>(), ::i2c::type_of<::UnityEngine::AddressableAssets::Addressables_MergeMode>(),
                                                               ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>>(
      this, ___internal_method, keys, mode, type);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationsWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dep, ::System::Object* key,
                                                                                 ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                          { "LoadResourceLocationsWithChain",
                            {},
                            { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>>(
      this, ___internal_method, dep, key, type);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationsAsync(::System::Object* key, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                           { "LoadResourceLocationsAsync", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>>(
      this, ___internal_method, key, type);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
UnityEngine::AddressableAssets::AddressablesImpl::LoadAssetsAsync(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations,
                                                                  ::System::Action_1<TObject>* callback, bool releaseDependenciesOnFailure) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                           { "LoadAssetsAsync",
                                                             { ::i2c::class_of<TObject>() },
                                                             { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>(),
                                                               ::i2c::type_of<::System::Action_1<TObject>*>(), ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObject>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>>(
      this, ___internal_method, locations, callback, releaseDependenciesOnFailure);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
UnityEngine::AddressableAssets::AddressablesImpl::LoadAssetsWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dep,
                                                                      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations,
                                                                      ::System::Action_1<TObject>* callback, bool releaseDependenciesOnFailure) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                           { "LoadAssetsWithChain",
                                                             { ::i2c::class_of<TObject>() },
                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>(),
                                                               ::i2c::type_of<::System::Action_1<TObject>*>(), ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObject>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>>(
      this, ___internal_method, dep, locations, callback, releaseDependenciesOnFailure);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
UnityEngine::AddressableAssets::AddressablesImpl::LoadAssetsWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dep, ::System::Collections::IEnumerable* keys,
                                                                      ::System::Action_1<TObject>* callback, ::UnityEngine::AddressableAssets::Addressables_MergeMode mode,
                                                                      bool releaseDependenciesOnFailure) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                       { "LoadAssetsWithChain",
                                         { ::i2c::class_of<TObject>() },
                                         { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), ::i2c::type_of<::System::Collections::IEnumerable*>(),
                                           ::i2c::type_of<::System::Action_1<TObject>*>(), ::i2c::type_of<::UnityEngine::AddressableAssets::Addressables_MergeMode>(), ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObject>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>>(
      this, ___internal_method, dep, keys, callback, mode, releaseDependenciesOnFailure);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
UnityEngine::AddressableAssets::AddressablesImpl::LoadAssetsAsync(::System::Collections::IEnumerable* keys, ::System::Action_1<TObject>* callback,
                                                                  ::UnityEngine::AddressableAssets::Addressables_MergeMode mode, bool releaseDependenciesOnFailure) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                           { "LoadAssetsAsync",
                                                             { ::i2c::class_of<TObject>() },
                                                             { ::i2c::type_of<::System::Collections::IEnumerable*>(), ::i2c::type_of<::System::Action_1<TObject>*>(),
                                                               ::i2c::type_of<::UnityEngine::AddressableAssets::Addressables_MergeMode>(), ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObject>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>>(
      this, ___internal_method, keys, callback, mode, releaseDependenciesOnFailure);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
UnityEngine::AddressableAssets::AddressablesImpl::LoadAssetsWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dep, ::System::Object* key,
                                                                      ::System::Action_1<TObject>* callback, bool releaseDependenciesOnFailure) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                           { "LoadAssetsWithChain",
                                                             { ::i2c::class_of<TObject>() },
                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), ::i2c::type_of<::System::Object*>(),
                                                               ::i2c::type_of<::System::Action_1<TObject>*>(), ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObject>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>>(
      this, ___internal_method, dep, key, callback, releaseDependenciesOnFailure);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
UnityEngine::AddressableAssets::AddressablesImpl::LoadAssetsAsync(::System::Object* key, ::System::Action_1<TObject>* callback, bool releaseDependenciesOnFailure) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                          { "LoadAssetsAsync", { ::i2c::class_of<TObject>() }, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Action_1<TObject>*>(), ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObject>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>>(
      this, ___internal_method, key, callback, releaseDependenciesOnFailure);
}
inline void UnityEngine::AddressableAssets::AddressablesImpl::OnHandleDestroyed(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                           { "OnHandleDestroyed", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline void UnityEngine::AddressableAssets::AddressablesImpl::OnSceneHandleCompleted(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                           { "OnSceneHandleCompleted", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline void UnityEngine::AddressableAssets::AddressablesImpl::OnHandleCompleted(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                           { "OnHandleCompleted", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
template <typename TObject> inline void UnityEngine::AddressableAssets::AddressablesImpl::Release(TObject obj) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "Release", { ::i2c::class_of<TObject>() }, { ::i2c::type_of<TObject>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObject>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
template <typename TObject> inline void UnityEngine::AddressableAssets::AddressablesImpl::Release(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> handle) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                       { "Release", { ::i2c::class_of<TObject>() }, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObject>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline void UnityEngine::AddressableAssets::AddressablesImpl::Release(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                           { "Release", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>
UnityEngine::AddressableAssets::AddressablesImpl::GetDownloadSizeWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dep, ::System::Object* key) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                          { "GetDownloadSizeWithChain", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>(this, ___internal_method, dep, key);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>
UnityEngine::AddressableAssets::AddressablesImpl::ComputeCatalogSizeWithChain(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* catalogLoc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                           { "ComputeCatalogSizeWithChain", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>(this, ___internal_method, catalogLoc);
}
inline bool UnityEngine::AddressableAssets::AddressablesImpl::IsCatalogCached(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* catalogLoc, ::UnityEngine::Hash128 remoteHash) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                          { "IsCatalogCached", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(), ::i2c::type_of<::UnityEngine::Hash128>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, catalogLoc, remoteHash);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>
UnityEngine::AddressableAssets::AddressablesImpl::GetRemoteCatalogHeaderSize(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* catalogLoc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                           { "GetRemoteCatalogHeaderSize", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>(this, ___internal_method, catalogLoc);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>
UnityEngine::AddressableAssets::AddressablesImpl::GetDownloadSizeWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dep, ::System::Collections::IEnumerable* keys) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
          { "GetDownloadSizeWithChain", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), ::i2c::type_of<::System::Collections::IEnumerable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>(this, ___internal_method, dep, keys);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> UnityEngine::AddressableAssets::AddressablesImpl::GetDownloadSizeAsync(::System::Object* key) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "GetDownloadSizeAsync", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>(this, ___internal_method, key);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>
UnityEngine::AddressableAssets::AddressablesImpl::GetDownloadSizeAsync(::System::Collections::IEnumerable* keys) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                                                         { "GetDownloadSizeAsync", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>(this, ___internal_method, keys);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle
UnityEngine::AddressableAssets::AddressablesImpl::DownloadDependenciesAsyncWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dep, ::System::Object* key,
                                                                                     bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                          { "DownloadDependenciesAsyncWithChain",
                            {},
                            { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(this, ___internal_method, dep, key, autoReleaseHandle);
}
inline void
UnityEngine::AddressableAssets::AddressablesImpl::WrapAsDownloadLocations(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                          { "WrapAsDownloadLocations", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, locations);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*
UnityEngine::AddressableAssets::AddressablesImpl::GatherDependenciesFromLocations(
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
          { "GatherDependenciesFromLocations", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>(nullptr, ___internal_method, locations);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine::AddressableAssets::AddressablesImpl::DownloadDependenciesAsync(::System::Object* key,
                                                                                                                                                            bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                                                         { "DownloadDependenciesAsync", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(this, ___internal_method, key, autoReleaseHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine::AddressableAssets::AddressablesImpl::DownloadDependenciesAsyncWithChain(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dep,
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations, bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                          { "DownloadDependenciesAsyncWithChain",
                            {},
                            { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(),
                              ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(this, ___internal_method, dep, locations, autoReleaseHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine::AddressableAssets::AddressablesImpl::DownloadDependenciesAsync(
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations, bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                          { "DownloadDependenciesAsync",
                            {},
                            { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(this, ___internal_method, locations, autoReleaseHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle
UnityEngine::AddressableAssets::AddressablesImpl::DownloadDependenciesAsyncWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dep,
                                                                                     ::System::Collections::IEnumerable* keys, ::UnityEngine::AddressableAssets::Addressables_MergeMode mode,
                                                                                     bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                              { "DownloadDependenciesAsyncWithChain",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), ::i2c::type_of<::System::Collections::IEnumerable*>(),
                                                  ::i2c::type_of<::UnityEngine::AddressableAssets::Addressables_MergeMode>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(this, ___internal_method, dep, keys, mode, autoReleaseHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle
UnityEngine::AddressableAssets::AddressablesImpl::DownloadDependenciesAsync(::System::Collections::IEnumerable* keys, ::UnityEngine::AddressableAssets::Addressables_MergeMode mode,
                                                                            bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                          { "DownloadDependenciesAsync",
                            {},
                            { ::i2c::type_of<::System::Collections::IEnumerable*>(), ::i2c::type_of<::UnityEngine::AddressableAssets::Addressables_MergeMode>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(this, ___internal_method, keys, mode, autoReleaseHandle);
}
inline bool UnityEngine::AddressableAssets::AddressablesImpl::ClearDependencyCacheForKey(::System::Object* key) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "ClearDependencyCacheForKey", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template <typename TObject>
inline void UnityEngine::AddressableAssets::AddressablesImpl::AutoReleaseHandleOnTypelessCompletion(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> handle) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
          { "AutoReleaseHandleOnTypelessCompletion", { ::i2c::class_of<TObject>() }, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObject>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> UnityEngine::AddressableAssets::AddressablesImpl::ClearDependencyCacheAsync(::System::Object* key,
                                                                                                                                                                    bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                                                         { "ClearDependencyCacheAsync", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>(this, ___internal_method, key, autoReleaseHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> UnityEngine::AddressableAssets::AddressablesImpl::ClearDependencyCacheAsync(
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations, bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                          { "ClearDependencyCacheAsync",
                            {},
                            { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>(this, ___internal_method, locations, autoReleaseHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>
UnityEngine::AddressableAssets::AddressablesImpl::ClearDependencyCacheAsync(::System::Collections::IEnumerable* keys, bool autoReleaseHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                           { "ClearDependencyCacheAsync", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>(this, ___internal_method, keys, autoReleaseHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
UnityEngine::AddressableAssets::AddressablesImpl::InstantiateAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::Transform* parent,
                                                                   bool instantiateInWorldSpace, bool trackHandle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                                                         { "InstantiateAsync",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>(
      this, ___internal_method, location, parent, instantiateInWorldSpace, trackHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
UnityEngine::AddressableAssets::AddressablesImpl::InstantiateAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::Vector3 position,
                                                                   ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parent, bool trackHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                           { "InstantiateAsync",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                               ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>(this, ___internal_method, location,
                                                                                                                                                              position, rotation, parent, trackHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
UnityEngine::AddressableAssets::AddressablesImpl::InstantiateAsync(::System::Object* key, ::UnityEngine::Transform* parent, bool instantiateInWorldSpace, bool trackHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                          { "InstantiateAsync", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>(this, ___internal_method, key, parent,
                                                                                                                                                              instantiateInWorldSpace, trackHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
UnityEngine::AddressableAssets::AddressablesImpl::InstantiateAsync(::System::Object* key, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parent,
                                                                   bool trackHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                           { "InstantiateAsync",
                                                             {},
                                                             { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(),
                                                               ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>(this, ___internal_method, key, position,
                                                                                                                                                              rotation, parent, trackHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
UnityEngine::AddressableAssets::AddressablesImpl::InstantiateWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dep, ::System::Object* key,
                                                                       ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters, bool trackHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                           { "InstantiateWithChain",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), ::i2c::type_of<::System::Object*>(),
                                                               ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>(this, ___internal_method, dep, key,
                                                                                                                                                              instantiateParameters, trackHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
UnityEngine::AddressableAssets::AddressablesImpl::InstantiateAsync(::System::Object* key, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters,
                                                                   bool trackHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                          { "InstantiateAsync",
                            {},
                            { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>(this, ___internal_method, key,
                                                                                                                                                              instantiateParameters, trackHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
UnityEngine::AddressableAssets::AddressablesImpl::InstantiateWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dep,
                                                                       ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                                       ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters, bool trackHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                           { "InstantiateWithChain",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(),
                                                               ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(),
                                                               ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>(this, ___internal_method, dep, location,
                                                                                                                                                              instantiateParameters, trackHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
UnityEngine::AddressableAssets::AddressablesImpl::InstantiateAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                                   ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters, bool trackHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                           { "InstantiateAsync",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(),
                                                               ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>(this, ___internal_method, location,
                                                                                                                                                              instantiateParameters, trackHandle);
}
inline bool UnityEngine::AddressableAssets::AddressablesImpl::ReleaseInstance(::UnityEngine::GameObject* instance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "ReleaseInstance", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, instance);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::AddressableAssets::AddressablesImpl::LoadSceneWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dep, ::System::Object* key,
                                                                     ::UnityEngine::SceneManagement::LoadSceneParameters loadSceneParameters,
                                                                     ::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode releaseMode, bool activateOnLoad, int32_t priority) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                              { "LoadSceneWithChain",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), ::i2c::type_of<::System::Object*>(),
                                                  ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>(),
                                                  ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(
      this, ___internal_method, dep, key, loadSceneParameters, releaseMode, activateOnLoad, priority);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::AddressableAssets::AddressablesImpl::LoadSceneWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dep,
                                                                     ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* key,
                                                                     ::UnityEngine::SceneManagement::LoadSceneParameters loadSceneParameters,
                                                                     ::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode releaseMode, bool activateOnLoad, int32_t priority) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                          { "LoadSceneWithChain",
                            {},
                            { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(),
                              ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>(),
                              ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(
      this, ___internal_method, dep, key, loadSceneParameters, releaseMode, activateOnLoad, priority);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::AddressableAssets::AddressablesImpl::LoadSceneAsync(::System::Object* key, ::UnityEngine::SceneManagement::LoadSceneParameters loadSceneParameters,
                                                                 ::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode releaseMode, bool activateOnLoad, int32_t priority,
                                                                 bool trackHandle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                                                         { "LoadSceneAsync",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>(),
                                                                                             ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode>(),
                                                                                             ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(
      this, ___internal_method, key, loadSceneParameters, releaseMode, activateOnLoad, priority, trackHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::AddressableAssets::AddressablesImpl::LoadSceneAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                                 ::UnityEngine::SceneManagement::LoadSceneParameters loadSceneParameters,
                                                                 ::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode releaseMode, bool activateOnLoad, int32_t priority,
                                                                 bool trackHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                       { "LoadSceneAsync",
                         {},
                         { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>(),
                           ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(
      this, ___internal_method, location, loadSceneParameters, releaseMode, activateOnLoad, priority, trackHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::AddressableAssets::AddressablesImpl::UnloadSceneAsync(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance scene,
                                                                   ::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions, bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                                                         { "UnloadSceneAsync",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>(),
                                                                                             ::i2c::type_of<::UnityEngine::SceneManagement::UnloadSceneOptions>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(
      this, ___internal_method, scene, unloadOptions, autoReleaseHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::AddressableAssets::AddressablesImpl::UnloadSceneAsync(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle,
                                                                   ::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions, bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                                                         { "UnloadSceneAsync",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(),
                                                                                             ::i2c::type_of<::UnityEngine::SceneManagement::UnloadSceneOptions>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(
      this, ___internal_method, handle, unloadOptions, autoReleaseHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::AddressableAssets::AddressablesImpl::UnloadSceneAsync(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> handle,
    ::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions, bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                          { "UnloadSceneAsync",
                            {},
                            { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(),
                              ::i2c::type_of<::UnityEngine::SceneManagement::UnloadSceneOptions>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(
      this, ___internal_method, handle, unloadOptions, autoReleaseHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::AddressableAssets::AddressablesImpl::CreateUnloadSceneWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle,
                                                                             ::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions, bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                                                         { "CreateUnloadSceneWithChain",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(),
                                                                                             ::i2c::type_of<::UnityEngine::SceneManagement::UnloadSceneOptions>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(
      this, ___internal_method, handle, unloadOptions, autoReleaseHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::AddressableAssets::AddressablesImpl::CreateUnloadSceneWithChain(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> handle,
    ::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions, bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                          { "CreateUnloadSceneWithChain",
                            {},
                            { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(),
                              ::i2c::type_of<::UnityEngine::SceneManagement::UnloadSceneOptions>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(
      this, ___internal_method, handle, unloadOptions, autoReleaseHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::AddressableAssets::AddressablesImpl::InternalUnloadScene(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> handle,
    ::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions, bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                          { "InternalUnloadScene",
                            {},
                            { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(),
                              ::i2c::type_of<::UnityEngine::SceneManagement::UnloadSceneOptions>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(
      this, ___internal_method, handle, unloadOptions, autoReleaseHandle);
}
inline ::System::Object* UnityEngine::AddressableAssets::AddressablesImpl::EvaluateKey(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "EvaluateKey", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, obj);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*>
UnityEngine::AddressableAssets::AddressablesImpl::CheckForCatalogUpdates(bool autoReleaseHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "CheckForCatalogUpdates", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*>>(this, ___internal_method,
                                                                                                                                                                             autoReleaseHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*>
UnityEngine::AddressableAssets::AddressablesImpl::CheckForCatalogUpdatesWithChain(bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "CheckForCatalogUpdatesWithChain", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*>>(this, ___internal_method,
                                                                                                                                                                             autoReleaseHandle);
}
inline ::UnityEngine::AddressableAssets::ResourceLocatorInfo* UnityEngine::AddressableAssets::AddressablesImpl::GetLocatorInfo(::StringW c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "GetLocatorInfo", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>(this, ___internal_method, c);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* UnityEngine::AddressableAssets::AddressablesImpl::get_CatalogsWithAvailableUpdates() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), { "get_CatalogsWithAvailableUpdates", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*>
UnityEngine::AddressableAssets::AddressablesImpl::UpdateCatalogs(::System::Collections::Generic::IEnumerable_1<::StringW>* catalogIds, bool autoReleaseHandle, bool autoCleanBundleCache) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                       { "UpdateCatalogs", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*>>(
      this, ___internal_method, catalogIds, autoReleaseHandle, autoCleanBundleCache);
}
inline bool UnityEngine::AddressableAssets::AddressablesImpl::Equals(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* x,
                                                                     ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* y) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                                                         { "Equals",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(),
                                                                                             ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, y);
}
inline int32_t UnityEngine::AddressableAssets::AddressablesImpl::GetHashCode(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* loc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                           { "GetHashCode", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, loc);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>
UnityEngine::AddressableAssets::AddressablesImpl::CleanBundleCache(::System::Collections::Generic::IEnumerable_1<::StringW>* catalogIds, bool forceSingleThreading) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                           { "CleanBundleCache", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>(this, ___internal_method, catalogIds, forceSingleThreading);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> UnityEngine::AddressableAssets::AddressablesImpl::CleanBundleCache(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
        depOp,
    bool forceSingleThreading) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                           { "CleanBundleCache",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
                                                                   ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>(),
                                                               ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>(this, ___internal_method, depOp, forceSingleThreading);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> UnityEngine::AddressableAssets::AddressablesImpl::CleanBundleCacheWithChain(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
        depOp,
    bool forceSingleThreading) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                           { "CleanBundleCacheWithChain",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
                                                                   ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>(),
                                                               ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>(this, ___internal_method, depOp, forceSingleThreading);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>
UnityEngine::AddressableAssets::AddressablesImpl::CleanBundleCacheWithChain(::System::Collections::Generic::IEnumerable_1<::StringW>* catalogIds, bool forceSingleThreading) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                              { "CleanBundleCacheWithChain", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>(this, ___internal_method, catalogIds, forceSingleThreading);
}
inline void UnityEngine::AddressableAssets::AddressablesImpl::_TrackHandle_b__73_0(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> sceneHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                          { "<TrackHandle>b__73_0",
                            {},
                            { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> UnityEngine::AddressableAssets::AddressablesImpl::_GetRemoteCatalogHeaderSize_b__102_0(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::Networking::UnityWebRequest*> getOp) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                              { "<GetRemoteCatalogHeaderSize>b__102_0",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::Networking::UnityWebRequest*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>(this, ___internal_method, getOp);
}
inline ::UnityEngine::AddressableAssets::AddressablesImpl* UnityEngine::AddressableAssets::AddressablesImpl::New_ctor(::UnityEngine::ResourceManagement::Util::IAllocationStrategy* alloc) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::AddressablesImpl*>(alloc));
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>"
constexpr UnityEngine::AddressableAssets::AddressablesImpl::operator ::System::Collections::Generic::IEqualityComparer_1<
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*
UnityEngine::AddressableAssets::AddressablesImpl::i___System__Collections__Generic__IEqualityComparer_1___UnityEngine__ResourceManagement__ResourceLocations__IResourceLocation__() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl::AddressablesImpl() {}
