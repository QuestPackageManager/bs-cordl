#pragma once
// IWYU pragma private; include "UnityEngine\AddressableAssets\UpdateCatalogsOperation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "UnityEngine/AddressableAssets/zzzz__UpdateCatalogsOperation_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/AddressableAssets/ResourceLocators/zzzz__IResourceLocator_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AddressablesImpl_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__ResourceLocatorInfo_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__UpdateCatalogsOperation_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__IResourceProvider_def.hpp"
//  Writing Method size for method: ::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c::*)()>(
    &::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64636b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c._Start_b__6_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c::*)(
    ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*)>(&::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c::_Start_b__6_0)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x64636b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c*>(),
                                                             { "<Start>b__6_0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::AddressableAssets::UpdateCatalogsOperation___c::setStaticF___9(::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c*, "<>9", ::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c*>(
      std::forward<::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c*>(value));
}
inline ::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c* UnityEngine::AddressableAssets::UpdateCatalogsOperation___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c*, "<>9", ::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c*>();
}
inline void UnityEngine::AddressableAssets::UpdateCatalogsOperation___c::setStaticF___9__6_0(::System::Func_2<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, bool>*, "<>9__6_0",
                                    ::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c*>(
      std::forward<::System::Func_2<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, bool>*>(value));
}
inline ::System::Func_2<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, bool>* UnityEngine::AddressableAssets::UpdateCatalogsOperation___c::getStaticF___9__6_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, bool>*, "<>9__6_0",
                                           ::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c*>();
}
inline void UnityEngine::AddressableAssets::UpdateCatalogsOperation___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::AddressableAssets::UpdateCatalogsOperation___c::_Start_b__6_0(::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider* rp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c*>(),
                                                           { "<Start>b__6_0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rp);
}
inline ::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c* UnityEngine::AddressableAssets::UpdateCatalogsOperation___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c::UpdateCatalogsOperation___c() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c__DisplayClass11_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c__DisplayClass11_0::*)()>(
    &::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c__DisplayClass11_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6463658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c__DisplayClass11_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c__DisplayClass11_0._OnCleanCacheCompleted_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c__DisplayClass11_0::*)(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>)>(&::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c__DisplayClass11_0::_OnCleanCacheCompleted_b__0)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x6463740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c__DisplayClass11_0*>(),
                                                { "<OnCleanCacheCompleted>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AddressableAssets::UpdateCatalogsOperation*& UnityEngine::AddressableAssets::UpdateCatalogsOperation___c__DisplayClass11_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityEngine::AddressableAssets::UpdateCatalogsOperation* const& UnityEngine::AddressableAssets::UpdateCatalogsOperation___c__DisplayClass11_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::AddressableAssets::UpdateCatalogsOperation___c__DisplayClass11_0::__cordl_internal_set___4__this(::UnityEngine::AddressableAssets::UpdateCatalogsOperation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*&
UnityEngine::AddressableAssets::UpdateCatalogsOperation___c__DisplayClass11_0::__cordl_internal_get_catalogs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___catalogs;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>* const&
UnityEngine::AddressableAssets::UpdateCatalogsOperation___c__DisplayClass11_0::__cordl_internal_get_catalogs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___catalogs;
}
constexpr void UnityEngine::AddressableAssets::UpdateCatalogsOperation___c__DisplayClass11_0::__cordl_internal_set_catalogs(
    ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___catalogs = value;
}
inline void UnityEngine::AddressableAssets::UpdateCatalogsOperation___c__DisplayClass11_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c__DisplayClass11_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void
UnityEngine::AddressableAssets::UpdateCatalogsOperation___c__DisplayClass11_0::_OnCleanCacheCompleted_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c__DisplayClass11_0*>(),
                                              { "<OnCleanCacheCompleted>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline ::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c__DisplayClass11_0* UnityEngine::AddressableAssets::UpdateCatalogsOperation___c__DisplayClass11_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c__DisplayClass11_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c__DisplayClass11_0::UpdateCatalogsOperation___c__DisplayClass11_0() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::UpdateCatalogsOperation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::UpdateCatalogsOperation::*)(::UnityEngine::AddressableAssets::AddressablesImpl*)>(
    &::UnityEngine::AddressableAssets::UpdateCatalogsOperation::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x645de40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::UpdateCatalogsOperation*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::AddressablesImpl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::UpdateCatalogsOperation.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
    ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*> (::UnityEngine::AddressableAssets::UpdateCatalogsOperation::*)(
    ::System::Collections::Generic::IEnumerable_1<::StringW>*, bool)>(&::UnityEngine::AddressableAssets::UpdateCatalogsOperation::Start)> {
  constexpr static std::size_t size = 0x6e0;
  constexpr static std::size_t addrs = 0x645dea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::UpdateCatalogsOperation*>(),
                                                             { "Start", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::UpdateCatalogsOperation.InvokeWaitForCompletion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AddressableAssets::UpdateCatalogsOperation::*)()>(
    &::UnityEngine::AddressableAssets::UpdateCatalogsOperation::InvokeWaitForCompletion)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x6462b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::UpdateCatalogsOperation*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::AddressableAssets::UpdateCatalogsOperation*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::UpdateCatalogsOperation.Destroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::UpdateCatalogsOperation::*)()>(&::UnityEngine::AddressableAssets::UpdateCatalogsOperation::Destroy)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6462d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::UpdateCatalogsOperation*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::AddressableAssets::UpdateCatalogsOperation*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::UpdateCatalogsOperation.GetDependencies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::UpdateCatalogsOperation::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*)>(&::UnityEngine::AddressableAssets::UpdateCatalogsOperation::GetDependencies)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6462db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::UpdateCatalogsOperation*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::AddressableAssets::UpdateCatalogsOperation*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::UpdateCatalogsOperation.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::UpdateCatalogsOperation::*)()>(&::UnityEngine::AddressableAssets::UpdateCatalogsOperation::Execute)> {
  constexpr static std::size_t size = 0x6b0;
  constexpr static std::size_t addrs = 0x6462e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::UpdateCatalogsOperation*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::AddressableAssets::UpdateCatalogsOperation*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::UpdateCatalogsOperation.OnCleanCacheCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::UpdateCatalogsOperation::*)(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>, ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*)>(
    &::UnityEngine::AddressableAssets::UpdateCatalogsOperation::OnCleanCacheCompleted)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6463544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::UpdateCatalogsOperation*>(),
                                                { "OnCleanCacheCompleted",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>(),
                                                    ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& UnityEngine::AddressableAssets::UpdateCatalogsOperation::__cordl_internal_get_m_Addressables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Addressables;
}
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl* const& UnityEngine::AddressableAssets::UpdateCatalogsOperation::__cordl_internal_get_m_Addressables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Addressables;
}
constexpr void UnityEngine::AddressableAssets::UpdateCatalogsOperation::__cordl_internal_set_m_Addressables(::UnityEngine::AddressableAssets::AddressablesImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Addressables = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>*&
UnityEngine::AddressableAssets::UpdateCatalogsOperation::__cordl_internal_get_m_LocatorInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocatorInfos;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>* const&
UnityEngine::AddressableAssets::UpdateCatalogsOperation::__cordl_internal_get_m_LocatorInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocatorInfos;
}
constexpr void
UnityEngine::AddressableAssets::UpdateCatalogsOperation::__cordl_internal_set_m_LocatorInfos(::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LocatorInfos = value;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>&
UnityEngine::AddressableAssets::UpdateCatalogsOperation::__cordl_internal_get_m_DepOp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepOp;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const&
UnityEngine::AddressableAssets::UpdateCatalogsOperation::__cordl_internal_get_m_DepOp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepOp;
}
constexpr void UnityEngine::AddressableAssets::UpdateCatalogsOperation::__cordl_internal_set_m_DepOp(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DepOp = value;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>& UnityEngine::AddressableAssets::UpdateCatalogsOperation::__cordl_internal_get_m_CleanCacheOp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CleanCacheOp;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> const& UnityEngine::AddressableAssets::UpdateCatalogsOperation::__cordl_internal_get_m_CleanCacheOp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CleanCacheOp;
}
constexpr void UnityEngine::AddressableAssets::UpdateCatalogsOperation::__cordl_internal_set_m_CleanCacheOp(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CleanCacheOp = value;
}
constexpr bool& UnityEngine::AddressableAssets::UpdateCatalogsOperation::__cordl_internal_get_m_AutoCleanBundleCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AutoCleanBundleCache;
}
constexpr bool const& UnityEngine::AddressableAssets::UpdateCatalogsOperation::__cordl_internal_get_m_AutoCleanBundleCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AutoCleanBundleCache;
}
constexpr void UnityEngine::AddressableAssets::UpdateCatalogsOperation::__cordl_internal_set_m_AutoCleanBundleCache(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AutoCleanBundleCache = value;
}
inline void UnityEngine::AddressableAssets::UpdateCatalogsOperation::_ctor(::UnityEngine::AddressableAssets::AddressablesImpl* aa) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::UpdateCatalogsOperation*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::AddressablesImpl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aa);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*>
UnityEngine::AddressableAssets::UpdateCatalogsOperation::Start(::System::Collections::Generic::IEnumerable_1<::StringW>* catalogIds, bool autoCleanBundleCache) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::UpdateCatalogsOperation*>(),
                                                           { "Start", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*>>(
      this, ___internal_method, catalogIds, autoCleanBundleCache);
}
inline bool UnityEngine::AddressableAssets::UpdateCatalogsOperation::InvokeWaitForCompletion() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AddressableAssets::UpdateCatalogsOperation*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::UpdateCatalogsOperation::Destroy() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AddressableAssets::UpdateCatalogsOperation*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::UpdateCatalogsOperation::GetDependencies(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* dependencies) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AddressableAssets::UpdateCatalogsOperation*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dependencies);
}
inline void UnityEngine::AddressableAssets::UpdateCatalogsOperation::Execute() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AddressableAssets::UpdateCatalogsOperation*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::UpdateCatalogsOperation::OnCleanCacheCompleted(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> handle,
    ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>* catalogs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::UpdateCatalogsOperation*>(),
                                                           { "OnCleanCacheCompleted",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle, catalogs);
}
inline ::UnityEngine::AddressableAssets::UpdateCatalogsOperation* UnityEngine::AddressableAssets::UpdateCatalogsOperation::New_ctor(::UnityEngine::AddressableAssets::AddressablesImpl* aa) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::UpdateCatalogsOperation*>(aa));
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::UpdateCatalogsOperation::UpdateCatalogsOperation() {}
