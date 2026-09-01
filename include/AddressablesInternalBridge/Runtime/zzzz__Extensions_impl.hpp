#pragma once
// IWYU pragma private; include "AddressablesInternalBridge\Runtime\Extensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "AddressablesInternalBridge/Runtime/zzzz__Extensions_def.hpp"
#include "AddressablesInternalBridge/Runtime/zzzz__CatalogLocationData_def.hpp"
#include "AddressablesInternalBridge/Runtime/zzzz__Extensions_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__ResourceLocatorInfo_def.hpp"
//  Writing Method size for method: ::AddressablesInternalBridge::Runtime::Extensions___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::AddressablesInternalBridge::Runtime::Extensions___c::*)()>(&::AddressablesInternalBridge::Runtime::Extensions___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x644a654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::AddressablesInternalBridge::Runtime::Extensions___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AddressablesInternalBridge::Runtime::Extensions___c._GetUpdateableCatalogLocationDatas_b__1_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::AddressablesInternalBridge::Runtime::Extensions___c::*)(::UnityEngine::AddressableAssets::ResourceLocatorInfo*)>(
    &::AddressablesInternalBridge::Runtime::Extensions___c::_GetUpdateableCatalogLocationDatas_b__1_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x644a658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::AddressablesInternalBridge::Runtime::Extensions___c*>(),
                                                             { "<GetUpdateableCatalogLocationDatas>b__1_0", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AddressablesInternalBridge::Runtime::Extensions___c._GetUpdateableCatalogLocationDatas_b__1_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::AddressablesInternalBridge::Runtime::CatalogLocationData* (::AddressablesInternalBridge::Runtime::Extensions___c::*)(::UnityEngine::AddressableAssets::ResourceLocatorInfo*)>(
        &::AddressablesInternalBridge::Runtime::Extensions___c::_GetUpdateableCatalogLocationDatas_b__1_1)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x644a818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::AddressablesInternalBridge::Runtime::Extensions___c*>(),
                                                             { "<GetUpdateableCatalogLocationDatas>b__1_1", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>() } })));
    return ___internal_method;
  }
};
inline void AddressablesInternalBridge::Runtime::Extensions___c::setStaticF___9(::AddressablesInternalBridge::Runtime::Extensions___c* value) {
  ::cordl_internals::setStaticField<::AddressablesInternalBridge::Runtime::Extensions___c*, "<>9", ::AddressablesInternalBridge::Runtime::Extensions___c*>(
      std::forward<::AddressablesInternalBridge::Runtime::Extensions___c*>(value));
}
inline ::AddressablesInternalBridge::Runtime::Extensions___c* AddressablesInternalBridge::Runtime::Extensions___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::AddressablesInternalBridge::Runtime::Extensions___c*, "<>9", ::AddressablesInternalBridge::Runtime::Extensions___c*>();
}
inline void AddressablesInternalBridge::Runtime::Extensions___c::setStaticF___9__1_0(::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, bool>*, "<>9__1_0", ::AddressablesInternalBridge::Runtime::Extensions___c*>(
      std::forward<::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, bool>*>(value));
}
inline ::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, bool>* AddressablesInternalBridge::Runtime::Extensions___c::getStaticF___9__1_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, bool>*, "<>9__1_0", ::AddressablesInternalBridge::Runtime::Extensions___c*>();
}
inline void AddressablesInternalBridge::Runtime::Extensions___c::setStaticF___9__1_1(
    ::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, ::AddressablesInternalBridge::Runtime::CatalogLocationData*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, ::AddressablesInternalBridge::Runtime::CatalogLocationData*>*, "<>9__1_1",
                                    ::AddressablesInternalBridge::Runtime::Extensions___c*>(
      std::forward<::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, ::AddressablesInternalBridge::Runtime::CatalogLocationData*>*>(value));
}
inline ::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, ::AddressablesInternalBridge::Runtime::CatalogLocationData*>*
AddressablesInternalBridge::Runtime::Extensions___c::getStaticF___9__1_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, ::AddressablesInternalBridge::Runtime::CatalogLocationData*>*, "<>9__1_1",
                                           ::AddressablesInternalBridge::Runtime::Extensions___c*>();
}
inline void AddressablesInternalBridge::Runtime::Extensions___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::AddressablesInternalBridge::Runtime::Extensions___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool AddressablesInternalBridge::Runtime::Extensions___c::_GetUpdateableCatalogLocationDatas_b__1_0(::UnityEngine::AddressableAssets::ResourceLocatorInfo* locatorInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::AddressablesInternalBridge::Runtime::Extensions___c*>(),
                                                           { "<GetUpdateableCatalogLocationDatas>b__1_0", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, locatorInfo);
}
inline ::AddressablesInternalBridge::Runtime::CatalogLocationData*
AddressablesInternalBridge::Runtime::Extensions___c::_GetUpdateableCatalogLocationDatas_b__1_1(::UnityEngine::AddressableAssets::ResourceLocatorInfo* locatorInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::AddressablesInternalBridge::Runtime::Extensions___c*>(),
                                                           { "<GetUpdateableCatalogLocationDatas>b__1_1", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::AddressablesInternalBridge::Runtime::CatalogLocationData*>(this, ___internal_method, locatorInfo);
}
inline ::AddressablesInternalBridge::Runtime::Extensions___c* AddressablesInternalBridge::Runtime::Extensions___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::AddressablesInternalBridge::Runtime::Extensions___c*>());
}
// Ctor Parameters []
constexpr ::AddressablesInternalBridge::Runtime::Extensions___c::Extensions___c() {}
//  Writing Method size for method: ::AddressablesInternalBridge::Runtime::Extensions.GetCatalogLocationData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::AddressablesInternalBridge::Runtime::CatalogLocationData* (*)(::StringW)>(
    &::AddressablesInternalBridge::Runtime::Extensions::GetCatalogLocationData)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x644a108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::AddressablesInternalBridge::Runtime::Extensions*>(), { "GetCatalogLocationData", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AddressablesInternalBridge::Runtime::Extensions.GetUpdateableCatalogLocationDatas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::AddressablesInternalBridge::Runtime::CatalogLocationData*>* (*)()>(
    &::AddressablesInternalBridge::Runtime::Extensions::GetUpdateableCatalogLocationDatas)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x644a404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::AddressablesInternalBridge::Runtime::Extensions*>(), { "GetUpdateableCatalogLocationDatas", {}, {} })));
    return ___internal_method;
  }
};
inline ::AddressablesInternalBridge::Runtime::CatalogLocationData* AddressablesInternalBridge::Runtime::Extensions::GetCatalogLocationData(::StringW locatorId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::AddressablesInternalBridge::Runtime::Extensions*>(), { "GetCatalogLocationData", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::AddressablesInternalBridge::Runtime::CatalogLocationData*>(nullptr, ___internal_method, locatorId);
}
inline ::System::Collections::Generic::IEnumerable_1<::AddressablesInternalBridge::Runtime::CatalogLocationData*>*
AddressablesInternalBridge::Runtime::Extensions::GetUpdateableCatalogLocationDatas() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::AddressablesInternalBridge::Runtime::Extensions*>(), { "GetUpdateableCatalogLocationDatas", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::AddressablesInternalBridge::Runtime::CatalogLocationData*>*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::AddressablesInternalBridge::Runtime::Extensions::Extensions() {}
