#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/Initialization/InitializationOperation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "UnityEngine/AddressableAssets/Initialization/zzzz__InitializationOperation_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/AddressableAssets/Initialization/zzzz__InitializationOperation_def.hpp"
#include "UnityEngine/AddressableAssets/Initialization/zzzz__ResourceManagerRuntimeData_def.hpp"
#include "UnityEngine/AddressableAssets/ResourceLocators/zzzz__ContentCatalogData_def.hpp"
#include "UnityEngine/AddressableAssets/ResourceLocators/zzzz__IResourceLocator_def.hpp"
#include "UnityEngine/AddressableAssets/ResourceLocators/zzzz__ResourceLocationMap_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AddressablesImpl_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__InitalizationObjectsOperation_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__IResourceProvider_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__ObjectInitializationData_def.hpp"
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c::*)()>(
    &::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6469d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c._Execute_b__12_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c::*)(
    ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*)>(&::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c::_Execute_b__12_0)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6469d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c*>(),
                                                             { "<Execute>b__12_0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::AddressableAssets::Initialization::InitializationOperation___c::setStaticF___9(::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c*, "<>9",
                                    ::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c*>(
      std::forward<::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c*>(value));
}
inline ::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c* UnityEngine::AddressableAssets::Initialization::InitializationOperation___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c*, "<>9",
                                           ::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c*>();
}
inline void UnityEngine::AddressableAssets::Initialization::InitializationOperation___c::setStaticF___9__12_0(
    ::System::Func_2<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, bool>*, "<>9__12_0",
                                    ::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c*>(
      std::forward<::System::Func_2<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, bool>*>(value));
}
inline ::System::Func_2<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, bool>*
UnityEngine::AddressableAssets::Initialization::InitializationOperation___c::getStaticF___9__12_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, bool>*, "<>9__12_0",
                                           ::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c*>();
}
inline void UnityEngine::AddressableAssets::Initialization::InitializationOperation___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::AddressableAssets::Initialization::InitializationOperation___c::_Execute_b__12_0(::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider* rp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c*>(),
                                                           { "<Execute>b__12_0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rp);
}
inline ::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c* UnityEngine::AddressableAssets::Initialization::InitializationOperation___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c::InitializationOperation___c() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass15_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass15_0::*)()>(
    &::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass15_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6469dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass15_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass15_0._LoadContentCatalog_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
    ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> (::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass15_0::*)(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>)>(
    &::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass15_0::_LoadContentCatalog_b__0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6469e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass15_0*>(),
            { "<LoadContentCatalog>b__0",
              {},
              { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass15_0::__cordl_internal_get_addressables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___addressables;
}
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl* const&
UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass15_0::__cordl_internal_get_addressables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___addressables;
}
constexpr void
UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass15_0::__cordl_internal_set_addressables(::UnityEngine::AddressableAssets::AddressablesImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___addressables = value;
}
constexpr ::StringW& UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass15_0::__cordl_internal_get_providerSuffix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___providerSuffix;
}
constexpr ::StringW const& UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass15_0::__cordl_internal_get_providerSuffix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___providerSuffix;
}
constexpr void UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass15_0::__cordl_internal_set_providerSuffix(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___providerSuffix = value;
}
constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*&
UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass15_0::__cordl_internal_get_remoteHashLocation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___remoteHashLocation;
}
constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* const&
UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass15_0::__cordl_internal_get_remoteHashLocation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___remoteHashLocation;
}
constexpr void UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass15_0::__cordl_internal_set_remoteHashLocation(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___remoteHashLocation = value;
}
inline void UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass15_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass15_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass15_0::_LoadContentCatalog_b__0(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*> res) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass15_0*>(),
                       { "<LoadContentCatalog>b__0",
                         {},
                         { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>>(
      this, ___internal_method, res);
}
inline ::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass15_0*
UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass15_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass15_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass15_0::InitializationOperation___c__DisplayClass15_0() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass17_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass17_0::*)()>(
    &::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass17_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6469e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass17_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass17_0._LoadContentCatalogInternal_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass17_0::*)(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>)>(
    &::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass17_0::_LoadContentCatalogInternal_b__0)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6469e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass17_0*>(),
                         { "<LoadContentCatalogInternal>b__0",
                           {},
                           { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AddressableAssets::Initialization::InitializationOperation*&
UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass17_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityEngine::AddressableAssets::Initialization::InitializationOperation* const&
UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass17_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass17_0::__cordl_internal_set___4__this(
    ::UnityEngine::AddressableAssets::Initialization::InitializationOperation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*&
UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass17_0::__cordl_internal_get_catalogs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___catalogs;
}
constexpr ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* const&
UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass17_0::__cordl_internal_get_catalogs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___catalogs;
}
constexpr void UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass17_0::__cordl_internal_set_catalogs(
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___catalogs = value;
}
constexpr ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*&
UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass17_0::__cordl_internal_get_locMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___locMap;
}
constexpr ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* const&
UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass17_0::__cordl_internal_get_locMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___locMap;
}
constexpr void UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass17_0::__cordl_internal_set_locMap(
    ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___locMap = value;
}
constexpr int32_t& UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass17_0::__cordl_internal_get_index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
constexpr int32_t const& UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass17_0::__cordl_internal_get_index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
constexpr void UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass17_0::__cordl_internal_set_index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___index = value;
}
constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*&
UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass17_0::__cordl_internal_get_remoteHashLocation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___remoteHashLocation;
}
constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* const&
UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass17_0::__cordl_internal_get_remoteHashLocation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___remoteHashLocation;
}
constexpr void UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass17_0::__cordl_internal_set_remoteHashLocation(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___remoteHashLocation = value;
}
inline void UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass17_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass17_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass17_0::_LoadContentCatalogInternal_b__0(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> op) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass17_0*>(),
                       { "<LoadContentCatalogInternal>b__0",
                         {},
                         { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op);
}
inline ::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass17_0*
UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass17_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass17_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::Initialization::InitializationOperation___c__DisplayClass17_0::InitializationOperation___c__DisplayClass17_0() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::InitializationOperation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::Initialization::InitializationOperation::*)(::UnityEngine::AddressableAssets::AddressablesImpl*)>(
    &::UnityEngine::AddressableAssets::Initialization::InitializationOperation::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6467d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::AddressablesImpl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::InitializationOperation.get_Progress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AddressableAssets::Initialization::InitializationOperation::*)()>(
    &::UnityEngine::AddressableAssets::Initialization::InitializationOperation::get_Progress)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6467d60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::InitializationOperation.get_DebugName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::AddressableAssets::Initialization::InitializationOperation::*)()>(
    &::UnityEngine::AddressableAssets::Initialization::InitializationOperation::get_DebugName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6467de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::InitializationOperation.CreateInitializationOperation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> (*)(
        ::UnityEngine::AddressableAssets::AddressablesImpl*, ::StringW, ::StringW)>(&::UnityEngine::AddressableAssets::Initialization::InitializationOperation::CreateInitializationOperation)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x64538ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>(),
            { "CreateInitializationOperation", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::InitializationOperation.InvokeWaitForCompletion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AddressableAssets::Initialization::InitializationOperation::*)()>(
    &::UnityEngine::AddressableAssets::Initialization::InitializationOperation::InvokeWaitForCompletion)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x6467e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::InitializationOperation.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::Initialization::InitializationOperation::*)()>(
    &::UnityEngine::AddressableAssets::Initialization::InitializationOperation::Execute)> {
  constexpr static std::size_t size = 0xd14;
  constexpr static std::size_t addrs = 0x6468030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::InitializationOperation.LoadProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::AddressableAssets::AddressablesImpl*, ::UnityEngine::ResourceManagement::Util::ObjectInitializationData, ::StringW)>(
    &::UnityEngine::AddressableAssets::Initialization::InitializationOperation::LoadProvider)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x6468f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>(),
                                                             { "LoadProvider",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                                 ::i2c::type_of<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::InitializationOperation.OnCatalogDataLoaded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> (*)(
        ::UnityEngine::AddressableAssets::AddressablesImpl*,
        ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>, ::StringW,
        ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(&::UnityEngine::AddressableAssets::Initialization::InitializationOperation::OnCatalogDataLoaded)> {
  constexpr static std::size_t size = 0x548;
  constexpr static std::size_t addrs = 0x6469404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>(),
                            { "OnCatalogDataLoaded",
                              {},
                              { ::i2c::type_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>>(),
                                ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::InitializationOperation.LoadContentCatalog
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> (*)(
        ::UnityEngine::AddressableAssets::AddressablesImpl*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW,
        ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(&::UnityEngine::AddressableAssets::Initialization::InitializationOperation::LoadContentCatalog)> {
  constexpr static std::size_t size = 0x694;
  constexpr static std::size_t addrs = 0x6453e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>(),
                            { "LoadContentCatalog",
                              {},
                              { ::i2c::type_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(),
                                ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::InitializationOperation.LoadContentCatalog
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
    ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> (::UnityEngine::AddressableAssets::Initialization::InitializationOperation::*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(
    &::UnityEngine::AddressableAssets::Initialization::InitializationOperation::LoadContentCatalog)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x646994c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>(),
                                                             { "LoadContentCatalog",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::InitializationOperation.LoadContentCatalogInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
    ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> (::UnityEngine::AddressableAssets::Initialization::InitializationOperation::*)(
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*, int32_t,
    ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(
    &::UnityEngine::AddressableAssets::Initialization::InitializationOperation::LoadContentCatalogInternal)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x6468d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>(),
                                                             { "LoadContentCatalogInternal",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*>(),
                                                                 ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::InitializationOperation.LoadOpComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::Initialization::InitializationOperation::*)(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>,
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*, ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*,
    int32_t, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(&::UnityEngine::AddressableAssets::Initialization::InitializationOperation::LoadOpComplete)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x6469980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>(),
                            { "LoadOpComplete",
                              {},
                              { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>>(),
                                ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>(),
                                ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*>(), ::i2c::type_of<int32_t>(),
                                ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*>&
UnityEngine::AddressableAssets::Initialization::InitializationOperation::__cordl_internal_get_m_rtdOp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_rtdOp;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*> const&
UnityEngine::AddressableAssets::Initialization::InitializationOperation::__cordl_internal_get_m_rtdOp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_rtdOp;
}
constexpr void UnityEngine::AddressableAssets::Initialization::InitializationOperation::__cordl_internal_set_m_rtdOp(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_rtdOp = value;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>&
UnityEngine::AddressableAssets::Initialization::InitializationOperation::__cordl_internal_get_m_loadCatalogOp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_loadCatalogOp;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> const&
UnityEngine::AddressableAssets::Initialization::InitializationOperation::__cordl_internal_get_m_loadCatalogOp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_loadCatalogOp;
}
constexpr void UnityEngine::AddressableAssets::Initialization::InitializationOperation::__cordl_internal_set_m_loadCatalogOp(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_loadCatalogOp = value;
}
constexpr ::StringW& UnityEngine::AddressableAssets::Initialization::InitializationOperation::__cordl_internal_get_m_ProviderSuffix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProviderSuffix;
}
constexpr ::StringW const& UnityEngine::AddressableAssets::Initialization::InitializationOperation::__cordl_internal_get_m_ProviderSuffix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProviderSuffix;
}
constexpr void UnityEngine::AddressableAssets::Initialization::InitializationOperation::__cordl_internal_set_m_ProviderSuffix(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ProviderSuffix = value;
}
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& UnityEngine::AddressableAssets::Initialization::InitializationOperation::__cordl_internal_get_m_Addressables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Addressables;
}
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl* const& UnityEngine::AddressableAssets::Initialization::InitializationOperation::__cordl_internal_get_m_Addressables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Addressables;
}
constexpr void UnityEngine::AddressableAssets::Initialization::InitializationOperation::__cordl_internal_set_m_Addressables(::UnityEngine::AddressableAssets::AddressablesImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Addressables = value;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation*&
UnityEngine::AddressableAssets::Initialization::InitializationOperation::__cordl_internal_get_m_InitGroupOps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InitGroupOps;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation* const&
UnityEngine::AddressableAssets::Initialization::InitializationOperation::__cordl_internal_get_m_InitGroupOps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InitGroupOps;
}
constexpr void
UnityEngine::AddressableAssets::Initialization::InitializationOperation::__cordl_internal_set_m_InitGroupOps(::UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InitGroupOps = value;
}
inline void UnityEngine::AddressableAssets::Initialization::InitializationOperation::_ctor(::UnityEngine::AddressableAssets::AddressablesImpl* aa) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::AddressablesImpl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aa);
}
inline float_t UnityEngine::AddressableAssets::Initialization::InitializationOperation::get_Progress() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::StringW UnityEngine::AddressableAssets::Initialization::InitializationOperation::get_DebugName() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
UnityEngine::AddressableAssets::Initialization::InitializationOperation::CreateInitializationOperation(::UnityEngine::AddressableAssets::AddressablesImpl* aa, ::StringW playerSettingsLocation,
                                                                                                       ::StringW providerSuffix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>(),
                       { "CreateInitializationOperation", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>>(
      nullptr, ___internal_method, aa, playerSettingsLocation, providerSuffix);
}
inline bool UnityEngine::AddressableAssets::Initialization::InitializationOperation::InvokeWaitForCompletion() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::Initialization::InitializationOperation::Execute() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::Initialization::InitializationOperation::LoadProvider(::UnityEngine::AddressableAssets::AddressablesImpl* addressables,
                                                                                                  ::UnityEngine::ResourceManagement::Util::ObjectInitializationData providerData,
                                                                                                  ::StringW providerSuffix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>(),
                                                           { "LoadProvider",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                                                               ::i2c::type_of<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, addressables, providerData, providerSuffix);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
UnityEngine::AddressableAssets::Initialization::InitializationOperation::OnCatalogDataLoaded(
    ::UnityEngine::AddressableAssets::AddressablesImpl* addressables,
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*> op, ::StringW providerSuffix,
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* remoteHashLocation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>(),
                          { "OnCatalogDataLoaded",
                            {},
                            { ::i2c::type_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(),
                              ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>>(),
                              ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>>(
      nullptr, ___internal_method, addressables, op, providerSuffix, remoteHashLocation);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
UnityEngine::AddressableAssets::Initialization::InitializationOperation::LoadContentCatalog(::UnityEngine::AddressableAssets::AddressablesImpl* addressables,
                                                                                            ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* loc, ::StringW providerSuffix,
                                                                                            ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* remoteHashLocation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>(),
                          { "LoadContentCatalog",
                            {},
                            { ::i2c::type_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(),
                              ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>>(
      nullptr, ___internal_method, addressables, loc, providerSuffix, remoteHashLocation);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
UnityEngine::AddressableAssets::Initialization::InitializationOperation::LoadContentCatalog(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* loc, ::StringW providerSuffix,
                                                                                            ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* remoteHashLocation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>(),
                                                           { "LoadContentCatalog",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>>(
      this, ___internal_method, loc, providerSuffix, remoteHashLocation);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
UnityEngine::AddressableAssets::Initialization::InitializationOperation::LoadContentCatalogInternal(
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* catalogs, int32_t index,
    ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* locMap, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* remoteHashLocation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>(),
                                                           { "LoadContentCatalogInternal",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*>(),
                                                               ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>>(
      this, ___internal_method, catalogs, index, locMap, remoteHashLocation);
}
inline void UnityEngine::AddressableAssets::Initialization::InitializationOperation::LoadOpComplete(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> op,
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* catalogs,
    ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* locMap, int32_t index, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* remoteHashLocation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>(),
                          { "LoadOpComplete",
                            {},
                            { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>>(),
                              ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>(),
                              ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*>(), ::i2c::type_of<int32_t>(),
                              ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op, catalogs, locMap, index, remoteHashLocation);
}
inline ::UnityEngine::AddressableAssets::Initialization::InitializationOperation*
UnityEngine::AddressableAssets::Initialization::InitializationOperation::New_ctor(::UnityEngine::AddressableAssets::AddressablesImpl* aa) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>(aa));
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::Initialization::InitializationOperation::InitializationOperation() {}
