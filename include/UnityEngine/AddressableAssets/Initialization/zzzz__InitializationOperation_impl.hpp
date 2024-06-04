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
#include "UnityEngine/AddressableAssets/Utility/zzzz__ResourceManagerDiagnostics_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AddressablesImpl_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__InitalizationObjectsOperation_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__IResourceProvider_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__ObjectInitializationData_def.hpp"
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c::*)()>(
    &::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30863e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c._Execute_b__13_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c::*)(
    ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*)>(&::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c::_Execute_b__13_0)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x30863ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c*>::get(), "<Execute>b__13_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c::setStaticF___9(::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c*>::get>(
      std::forward<::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c*>(value));
}
inline ::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c* UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c*>::get>();
}
inline void UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c::setStaticF___9__13_0(
    ::System::Func_2<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, bool>*, "<>9__13_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, bool>*>(value));
}
inline ::System::Func_2<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, bool>*
UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c::getStaticF___9__13_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, bool>*, "<>9__13_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c*>::get>();
}
inline ::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c* UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c*>());
}
inline void UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c::_Execute_b__13_0(::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider* rp) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c*>::get(), "<Execute>b__13_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, rp);
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c::__InitializationOperation____c() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass16_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass16_0::*)()>(
    &::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass16_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3086488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass16_0*>::get(),
                                    ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass16_0._LoadContentCatalog_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
    ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> (::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass16_0::*)(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>)>(
    &::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass16_0::_LoadContentCatalog_b__0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3086490;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass16_0*>::get(),
                                   "<LoadContentCatalog>b__0", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                       ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass16_0::__cordl_internal_get_addressables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___addressables;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const&
UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass16_0::__cordl_internal_get_addressables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___addressables;
}
constexpr void
UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass16_0::__cordl_internal_set_addressables(::UnityEngine::AddressableAssets::AddressablesImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___addressables)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass16_0::__cordl_internal_get_providerSuffix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___providerSuffix;
}
constexpr ::StringW const& UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass16_0::__cordl_internal_get_providerSuffix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___providerSuffix;
}
constexpr void UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass16_0::__cordl_internal_set_providerSuffix(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___providerSuffix)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*&
UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass16_0::__cordl_internal_get_remoteHashLocation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___remoteHashLocation;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*> const&
UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass16_0::__cordl_internal_get_remoteHashLocation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___remoteHashLocation;
}
constexpr void UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass16_0::__cordl_internal_set_remoteHashLocation(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___remoteHashLocation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass16_0*
UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass16_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass16_0*>());
}
inline void UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass16_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass16_0*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass16_0::_LoadContentCatalog_b__0(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*> res) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass16_0*>::get(),
                                  "<LoadContentCatalog>b__0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>, false>(
      this, ___internal_method, res);
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass16_0::__InitializationOperation____c__DisplayClass16_0() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass18_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass18_0::*)()>(
    &::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass18_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30864d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass18_0*>::get(),
                                    ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass18_0._LoadContentCatalogInternal_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass18_0::*)(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>)>(
    &::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass18_0::_LoadContentCatalogInternal_b__0)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x30864dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass18_0*>::get(),
                                    "<LoadContentCatalogInternal>b__0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                        ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AddressableAssets::Initialization::InitializationOperation*&
UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass18_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*> const&
UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass18_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass18_0::__cordl_internal_set___4__this(
    ::UnityEngine::AddressableAssets::Initialization::InitializationOperation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*&
UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass18_0::__cordl_internal_get_catalogs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___catalogs;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> const&
UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass18_0::__cordl_internal_get_catalogs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___catalogs;
}
constexpr void UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass18_0::__cordl_internal_set_catalogs(
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___catalogs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*&
UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass18_0::__cordl_internal_get_locMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___locMap;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*> const&
UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass18_0::__cordl_internal_get_locMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___locMap;
}
constexpr void UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass18_0::__cordl_internal_set_locMap(
    ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___locMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass18_0::__cordl_internal_get_index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
constexpr int32_t const& UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass18_0::__cordl_internal_get_index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
constexpr void UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass18_0::__cordl_internal_set_index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___index = value;
}
constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*&
UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass18_0::__cordl_internal_get_remoteHashLocation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___remoteHashLocation;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*> const&
UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass18_0::__cordl_internal_get_remoteHashLocation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___remoteHashLocation;
}
constexpr void UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass18_0::__cordl_internal_set_remoteHashLocation(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___remoteHashLocation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass18_0*
UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass18_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass18_0*>());
}
inline void UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass18_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass18_0*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass18_0::_LoadContentCatalogInternal_b__0(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> op) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass18_0*>::get(),
                                  "<LoadContentCatalogInternal>b__0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, op);
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass18_0::__InitializationOperation____c__DisplayClass18_0() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::InitializationOperation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::Initialization::InitializationOperation::*)(
    ::UnityEngine::AddressableAssets::AddressablesImpl*)>(&::UnityEngine::AddressableAssets::Initialization::InitializationOperation::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3083390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::AddressablesImpl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::InitializationOperation.get_Progress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::AddressableAssets::Initialization::InitializationOperation::*)()>(
    &::UnityEngine::AddressableAssets::Initialization::InitializationOperation::get_Progress)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3083434;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::InitializationOperation.get_DebugName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::AddressableAssets::Initialization::InitializationOperation::*)()>(
    &::UnityEngine::AddressableAssets::Initialization::InitializationOperation::get_DebugName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x30834b4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::InitializationOperation.CreateInitializationOperation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> (*)(
        ::UnityEngine::AddressableAssets::AddressablesImpl*, ::StringW, ::StringW)>(&::UnityEngine::AddressableAssets::Initialization::InitializationOperation::CreateInitializationOperation)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x306fe00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>::get(), "CreateInitializationOperation",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::AddressablesImpl*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::InitializationOperation.InvokeWaitForCompletion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::AddressableAssets::Initialization::InitializationOperation::*)()>(
    &::UnityEngine::AddressableAssets::Initialization::InitializationOperation::InvokeWaitForCompletion)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x30834f4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::InitializationOperation.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::Initialization::InitializationOperation::*)()>(
    &::UnityEngine::AddressableAssets::Initialization::InitializationOperation::Execute)> {
  constexpr static std::size_t size = 0xd10;
  constexpr static std::size_t addrs = 0x30836b8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::InitializationOperation.LoadProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::AddressableAssets::AddressablesImpl*, ::UnityEngine::ResourceManagement::Util::ObjectInitializationData, ::StringW)>(
        &::UnityEngine::AddressableAssets::Initialization::InitializationOperation::LoadProvider)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x30845bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>::get(), "LoadProvider",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::AddressablesImpl*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::InitializationOperation.OnCatalogDataLoaded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> (*)(
        ::UnityEngine::AddressableAssets::AddressablesImpl*,
        ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>, ::StringW,
        ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(&::UnityEngine::AddressableAssets::Initialization::InitializationOperation::OnCatalogDataLoaded)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x3084a4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>::get(), "OnCatalogDataLoaded",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::AddressablesImpl*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                            ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::InitializationOperation.LoadContentCatalog
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> (*)(
        ::UnityEngine::AddressableAssets::AddressablesImpl*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW,
        ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(&::UnityEngine::AddressableAssets::Initialization::InitializationOperation::LoadContentCatalog)> {
  constexpr static std::size_t size = 0x6a4;
  constexpr static std::size_t addrs = 0x30708d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>::get(), "LoadContentCatalog",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::AddressablesImpl*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::InitializationOperation.LoadContentCatalog
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
    ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> (::UnityEngine::AddressableAssets::Initialization::InitializationOperation::*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(
    &::UnityEngine::AddressableAssets::Initialization::InitializationOperation::LoadContentCatalog)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3084fec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>::get(), "LoadContentCatalog",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::InitializationOperation.LoadContentCatalogInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
    ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> (::UnityEngine::AddressableAssets::Initialization::InitializationOperation::*)(
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*, int32_t,
    ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(
    &::UnityEngine::AddressableAssets::Initialization::InitializationOperation::LoadContentCatalogInternal)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x30843c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>::get(), "LoadContentCatalogInternal",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::InitializationOperation.LoadOpComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::Initialization::InitializationOperation::*)(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>,
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*, ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*,
    int32_t, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(&::UnityEngine::AddressableAssets::Initialization::InitializationOperation::LoadOpComplete)> {
  constexpr static std::size_t size = 0x1368;
  constexpr static std::size_t addrs = 0x3085018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>::get(), "LoadOpComplete",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ProviderSuffix)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& UnityEngine::AddressableAssets::Initialization::InitializationOperation::__cordl_internal_get_m_Addressables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Addressables;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const&
UnityEngine::AddressableAssets::Initialization::InitializationOperation::__cordl_internal_get_m_Addressables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Addressables;
}
constexpr void UnityEngine::AddressableAssets::Initialization::InitializationOperation::__cordl_internal_set_m_Addressables(::UnityEngine::AddressableAssets::AddressablesImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Addressables)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics*& UnityEngine::AddressableAssets::Initialization::InitializationOperation::__cordl_internal_get_m_Diagnostics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Diagnostics;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics*> const&
UnityEngine::AddressableAssets::Initialization::InitializationOperation::__cordl_internal_get_m_Diagnostics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Diagnostics;
}
constexpr void
UnityEngine::AddressableAssets::Initialization::InitializationOperation::__cordl_internal_set_m_Diagnostics(::UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Diagnostics)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation*&
UnityEngine::AddressableAssets::Initialization::InitializationOperation::__cordl_internal_get_m_InitGroupOps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InitGroupOps;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation*> const&
UnityEngine::AddressableAssets::Initialization::InitializationOperation::__cordl_internal_get_m_InitGroupOps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InitGroupOps;
}
constexpr void
UnityEngine::AddressableAssets::Initialization::InitializationOperation::__cordl_internal_set_m_InitGroupOps(::UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_InitGroupOps)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::AddressableAssets::Initialization::InitializationOperation*
UnityEngine::AddressableAssets::Initialization::InitializationOperation::New_ctor(::UnityEngine::AddressableAssets::AddressablesImpl* aa) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>(aa));
}
inline void UnityEngine::AddressableAssets::Initialization::InitializationOperation::_ctor(::UnityEngine::AddressableAssets::AddressablesImpl* aa) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::AddressablesImpl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aa);
}
inline float_t UnityEngine::AddressableAssets::Initialization::InitializationOperation::get_Progress() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::AddressableAssets::Initialization::InitializationOperation::get_DebugName() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
UnityEngine::AddressableAssets::Initialization::InitializationOperation::CreateInitializationOperation(::UnityEngine::AddressableAssets::AddressablesImpl* aa, ::StringW playerSettingsLocation,
                                                                                                       ::StringW providerSuffix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>::get(), "CreateInitializationOperation",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::AddressablesImpl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>, false>(
      nullptr, ___internal_method, aa, playerSettingsLocation, providerSuffix);
}
inline bool UnityEngine::AddressableAssets::Initialization::InitializationOperation::InvokeWaitForCompletion() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::Initialization::InitializationOperation::Execute() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::Initialization::InitializationOperation::LoadProvider(::UnityEngine::AddressableAssets::AddressablesImpl* addressables,
                                                                                                  ::UnityEngine::ResourceManagement::Util::ObjectInitializationData providerData,
                                                                                                  ::StringW providerSuffix) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>::get(), "LoadProvider",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::AddressablesImpl*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, addressables, providerData, providerSuffix);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
UnityEngine::AddressableAssets::Initialization::InitializationOperation::OnCatalogDataLoaded(
    ::UnityEngine::AddressableAssets::AddressablesImpl* addressables,
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*> op, ::StringW providerSuffix,
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* remoteHashLocation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>::get(), "OnCatalogDataLoaded",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::AddressablesImpl*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                          ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>, false>(
      nullptr, ___internal_method, addressables, op, providerSuffix, remoteHashLocation);
}
/// @param remoteHashLocation: ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* (default: nullptr)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
UnityEngine::AddressableAssets::Initialization::InitializationOperation::LoadContentCatalog(::UnityEngine::AddressableAssets::AddressablesImpl* addressables,
                                                                                            ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* loc, ::StringW providerSuffix,
                                                                                            ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* remoteHashLocation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>::get(), "LoadContentCatalog",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::AddressablesImpl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>, false>(
      nullptr, ___internal_method, addressables, loc, providerSuffix, remoteHashLocation);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
UnityEngine::AddressableAssets::Initialization::InitializationOperation::LoadContentCatalog(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* loc, ::StringW providerSuffix,
                                                                                            ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* remoteHashLocation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>::get(), "LoadContentCatalog",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>, false>(
      this, ___internal_method, loc, providerSuffix, remoteHashLocation);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
UnityEngine::AddressableAssets::Initialization::InitializationOperation::LoadContentCatalogInternal(
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* catalogs, int32_t index,
    ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* locMap, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* remoteHashLocation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>::get(), "LoadContentCatalogInternal",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>, false>(
      this, ___internal_method, catalogs, index, locMap, remoteHashLocation);
}
inline void UnityEngine::AddressableAssets::Initialization::InitializationOperation::LoadOpComplete(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> op,
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* catalogs,
    ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* locMap, int32_t index, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* remoteHashLocation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*>::get(), "LoadOpComplete",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, op, catalogs, locMap, index, remoteHashLocation);
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::Initialization::InitializationOperation::InitializationOperation() {}
