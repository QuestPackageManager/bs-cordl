#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/CheckCatalogsOperation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "UnityEngine/AddressableAssets/zzzz__CheckCatalogsOperation_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AddressablesImpl_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__CheckCatalogsOperation_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__ResourceLocatorInfo_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__IResourceProvider_def.hpp"
//  Writing Method size for method: ::UnityEngine::AddressableAssets::CheckCatalogsOperation___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::CheckCatalogsOperation___c::*)()>(
    &::UnityEngine::AddressableAssets::CheckCatalogsOperation___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x645be94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::CheckCatalogsOperation___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::CheckCatalogsOperation___c._Start_b__5_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AddressableAssets::CheckCatalogsOperation___c::*)(
    ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*)>(&::UnityEngine::AddressableAssets::CheckCatalogsOperation___c::_Start_b__5_0)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x645be98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::CheckCatalogsOperation___c*>(),
                                                             { "<Start>b__5_0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::AddressableAssets::CheckCatalogsOperation___c::setStaticF___9(::UnityEngine::AddressableAssets::CheckCatalogsOperation___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::AddressableAssets::CheckCatalogsOperation___c*, "<>9", ::UnityEngine::AddressableAssets::CheckCatalogsOperation___c*>(
      std::forward<::UnityEngine::AddressableAssets::CheckCatalogsOperation___c*>(value));
}
inline ::UnityEngine::AddressableAssets::CheckCatalogsOperation___c* UnityEngine::AddressableAssets::CheckCatalogsOperation___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::AddressableAssets::CheckCatalogsOperation___c*, "<>9", ::UnityEngine::AddressableAssets::CheckCatalogsOperation___c*>();
}
inline void UnityEngine::AddressableAssets::CheckCatalogsOperation___c::setStaticF___9__5_0(::System::Func_2<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, bool>*, "<>9__5_0",
                                    ::UnityEngine::AddressableAssets::CheckCatalogsOperation___c*>(
      std::forward<::System::Func_2<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, bool>*>(value));
}
inline ::System::Func_2<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, bool>* UnityEngine::AddressableAssets::CheckCatalogsOperation___c::getStaticF___9__5_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, bool>*, "<>9__5_0",
                                           ::UnityEngine::AddressableAssets::CheckCatalogsOperation___c*>();
}
inline void UnityEngine::AddressableAssets::CheckCatalogsOperation___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::CheckCatalogsOperation___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::AddressableAssets::CheckCatalogsOperation___c::_Start_b__5_0(::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider* rp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::CheckCatalogsOperation___c*>(),
                                                           { "<Start>b__5_0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rp);
}
inline ::UnityEngine::AddressableAssets::CheckCatalogsOperation___c* UnityEngine::AddressableAssets::CheckCatalogsOperation___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::CheckCatalogsOperation___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::CheckCatalogsOperation___c::CheckCatalogsOperation___c() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::CheckCatalogsOperation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::CheckCatalogsOperation::*)(::UnityEngine::AddressableAssets::AddressablesImpl*)>(
    &::UnityEngine::AddressableAssets::CheckCatalogsOperation::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6457e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::CheckCatalogsOperation*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::AddressablesImpl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::CheckCatalogsOperation.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*> (
    ::UnityEngine::AddressableAssets::CheckCatalogsOperation::*)(::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>*)>(
    &::UnityEngine::AddressableAssets::CheckCatalogsOperation::Start)> {
  constexpr static std::size_t size = 0x590;
  constexpr static std::size_t addrs = 0x6457ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::CheckCatalogsOperation*>(),
                                                             { "Start", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::CheckCatalogsOperation.InvokeWaitForCompletion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AddressableAssets::CheckCatalogsOperation::*)()>(
    &::UnityEngine::AddressableAssets::CheckCatalogsOperation::InvokeWaitForCompletion)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x645b514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::CheckCatalogsOperation*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::AddressableAssets::CheckCatalogsOperation*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::CheckCatalogsOperation.Destroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::CheckCatalogsOperation::*)()>(&::UnityEngine::AddressableAssets::CheckCatalogsOperation::Destroy)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x645b680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::CheckCatalogsOperation*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::AddressableAssets::CheckCatalogsOperation*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::CheckCatalogsOperation.GetDependencies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::CheckCatalogsOperation::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*)>(&::UnityEngine::AddressableAssets::CheckCatalogsOperation::GetDependencies)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x645b6cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::CheckCatalogsOperation*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::AddressableAssets::CheckCatalogsOperation*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::CheckCatalogsOperation.ProcessDependentOpResults
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::List_1<::StringW>* (*)(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*,
                                                                       ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>*,
                                                                       ::System::Collections::Generic::List_1<::StringW>*, ::by_ref<::StringW>, ::by_ref<bool>)>(
        &::UnityEngine::AddressableAssets::CheckCatalogsOperation::ProcessDependentOpResults)> {
  constexpr static std::size_t size = 0x5e4;
  constexpr static std::size_t addrs = 0x645b7b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::CheckCatalogsOperation*>(),
                                         { "ProcessDependentOpResults",
                                           {},
                                           { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>(),
                                             ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>*>(),
                                             ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::CheckCatalogsOperation.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::CheckCatalogsOperation::*)()>(&::UnityEngine::AddressableAssets::CheckCatalogsOperation::Execute)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x645bd94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::CheckCatalogsOperation*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::AddressableAssets::CheckCatalogsOperation*>(), 28 }));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& UnityEngine::AddressableAssets::CheckCatalogsOperation::__cordl_internal_get_m_Addressables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Addressables;
}
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl* const& UnityEngine::AddressableAssets::CheckCatalogsOperation::__cordl_internal_get_m_Addressables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Addressables;
}
constexpr void UnityEngine::AddressableAssets::CheckCatalogsOperation::__cordl_internal_set_m_Addressables(::UnityEngine::AddressableAssets::AddressablesImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Addressables = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& UnityEngine::AddressableAssets::CheckCatalogsOperation::__cordl_internal_get_m_LocalHashes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocalHashes;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& UnityEngine::AddressableAssets::CheckCatalogsOperation::__cordl_internal_get_m_LocalHashes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocalHashes;
}
constexpr void UnityEngine::AddressableAssets::CheckCatalogsOperation::__cordl_internal_set_m_LocalHashes(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LocalHashes = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>*&
UnityEngine::AddressableAssets::CheckCatalogsOperation::__cordl_internal_get_m_LocatorInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocatorInfos;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>* const&
UnityEngine::AddressableAssets::CheckCatalogsOperation::__cordl_internal_get_m_LocatorInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocatorInfos;
}
constexpr void
UnityEngine::AddressableAssets::CheckCatalogsOperation::__cordl_internal_set_m_LocatorInfos(::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LocatorInfos = value;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>&
UnityEngine::AddressableAssets::CheckCatalogsOperation::__cordl_internal_get_m_DepOp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepOp;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const&
UnityEngine::AddressableAssets::CheckCatalogsOperation::__cordl_internal_get_m_DepOp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepOp;
}
constexpr void UnityEngine::AddressableAssets::CheckCatalogsOperation::__cordl_internal_set_m_DepOp(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DepOp = value;
}
inline void UnityEngine::AddressableAssets::CheckCatalogsOperation::_ctor(::UnityEngine::AddressableAssets::AddressablesImpl* aa) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::CheckCatalogsOperation*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::AddressablesImpl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aa);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*>
UnityEngine::AddressableAssets::CheckCatalogsOperation::Start(::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>* locatorInfos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::CheckCatalogsOperation*>(),
                                                           { "Start", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*>>(this, ___internal_method,
                                                                                                                                                                             locatorInfos);
}
inline bool UnityEngine::AddressableAssets::CheckCatalogsOperation::InvokeWaitForCompletion() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AddressableAssets::CheckCatalogsOperation*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::CheckCatalogsOperation::Destroy() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AddressableAssets::CheckCatalogsOperation*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::CheckCatalogsOperation::GetDependencies(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* dependencies) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AddressableAssets::CheckCatalogsOperation*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dependencies);
}
inline ::System::Collections::Generic::List_1<::StringW>* UnityEngine::AddressableAssets::CheckCatalogsOperation::ProcessDependentOpResults(
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* results,
    ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>* locatorInfos, ::System::Collections::Generic::List_1<::StringW>* localHashes,
    ::by_ref<::StringW> errorString, ::by_ref<bool> success) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::CheckCatalogsOperation*>(),
                                              { "ProcessDependentOpResults",
                                                {},
                                                { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>(),
                                                  ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>*>(),
                                                  ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(nullptr, ___internal_method, results, locatorInfos, localHashes, errorString, success);
}
inline void UnityEngine::AddressableAssets::CheckCatalogsOperation::Execute() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AddressableAssets::CheckCatalogsOperation*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AddressableAssets::CheckCatalogsOperation* UnityEngine::AddressableAssets::CheckCatalogsOperation::New_ctor(::UnityEngine::AddressableAssets::AddressablesImpl* aa) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::CheckCatalogsOperation*>(aa));
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::CheckCatalogsOperation::CheckCatalogsOperation() {}
