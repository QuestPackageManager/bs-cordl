#pragma once
// IWYU pragma private; include "System/Resources/ResourceManager.hpp"
#include "System/Resources/zzzz__UltimateResourceFallbackLocation_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Resources/zzzz__ResourceManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Reflection/zzzz__AssemblyName_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Reflection/zzzz__RuntimeAssembly_def.hpp"
#include "System/Resources/zzzz__IResourceGroveler_def.hpp"
#include "System/Resources/zzzz__ResourceManager_def.hpp"
#include "System/Resources/zzzz__ResourceSet_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Resources::__ResourceManager__CultureNameResourceSetPair._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::__ResourceManager__CultureNameResourceSetPair::*)()>(
    &::System::Resources::__ResourceManager__CultureNameResourceSetPair::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ca7908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::__ResourceManager__CultureNameResourceSetPair*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Resources::__ResourceManager__CultureNameResourceSetPair* System::Resources::__ResourceManager__CultureNameResourceSetPair::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Resources::__ResourceManager__CultureNameResourceSetPair*>());
}
inline void System::Resources::__ResourceManager__CultureNameResourceSetPair::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::__ResourceManager__CultureNameResourceSetPair*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Resources::__ResourceManager__CultureNameResourceSetPair::__ResourceManager__CultureNameResourceSetPair() {}
//  Writing Method size for method: ::System::Resources::__ResourceManager__ResourceManagerMediator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::__ResourceManager__ResourceManagerMediator::*)(::System::Resources::ResourceManager*)>(
    &::System::Resources::__ResourceManager__ResourceManagerMediator::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3ca7910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::__ResourceManager__ResourceManagerMediator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Resources::ResourceManager*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Resources::ResourceManager*& System::Resources::__ResourceManager__ResourceManagerMediator::__cordl_internal_get__rm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rm;
}
constexpr ::cordl_internals::to_const_pointer<::System::Resources::ResourceManager*> const& System::Resources::__ResourceManager__ResourceManagerMediator::__cordl_internal_get__rm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rm;
}
constexpr void System::Resources::__ResourceManager__ResourceManagerMediator::__cordl_internal_set__rm(::System::Resources::ResourceManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Resources::__ResourceManager__ResourceManagerMediator* System::Resources::__ResourceManager__ResourceManagerMediator::New_ctor(::System::Resources::ResourceManager* rm) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Resources::__ResourceManager__ResourceManagerMediator*>(rm));
}
inline void System::Resources::__ResourceManager__ResourceManagerMediator::_ctor(::System::Resources::ResourceManager* rm) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::__ResourceManager__ResourceManagerMediator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Resources::ResourceManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rm);
}
// Ctor Parameters []
constexpr ::System::Resources::__ResourceManager__ResourceManagerMediator::__ResourceManager__ResourceManagerMediator() {}
//  Writing Method size for method: ::System::Resources::ResourceManager.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::ResourceManager::*)()>(&::System::Resources::ResourceManager::Init)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3ca7720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(), "Init",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::ResourceManager::*)()>(&::System::Resources::ResourceManager::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3ca783c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager.OnDeserializing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::ResourceManager::*)(::System::Runtime::Serialization::StreamingContext)>(
    &::System::Resources::ResourceManager::OnDeserializing)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3ca7984;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(), "OnDeserializing", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager.OnDeserialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::ResourceManager::*)(::System::Runtime::Serialization::StreamingContext)>(
    &::System::Resources::ResourceManager::OnDeserialized)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x3ca7994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(), "OnDeserialized", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager.OnSerializing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::ResourceManager::*)(::System::Runtime::Serialization::StreamingContext)>(
    &::System::Resources::ResourceManager::OnSerializing)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3ca7b60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(), "OnSerializing", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager.CompareNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW, ::System::Reflection::AssemblyName*)>(
    &::System::Resources::ResourceManager::CompareNames)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x3ca7bc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(), "CompareNames", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::AssemblyName*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Hashtable*& System::Resources::ResourceManager::__cordl_internal_get_ResourceSets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ResourceSets;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::Resources::ResourceManager::__cordl_internal_get_ResourceSets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ResourceSets;
}
constexpr void System::Resources::ResourceManager::__cordl_internal_set_ResourceSets(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ResourceSets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>*& System::Resources::ResourceManager::__cordl_internal_get__resourceSets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resourceSets;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>*> const&
System::Resources::ResourceManager::__cordl_internal_get__resourceSets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resourceSets;
}
constexpr void System::Resources::ResourceManager::__cordl_internal_set__resourceSets(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____resourceSets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Reflection::Assembly*& System::Resources::ResourceManager::__cordl_internal_get_MainAssembly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MainAssembly;
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::Assembly*> const& System::Resources::ResourceManager::__cordl_internal_get_MainAssembly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MainAssembly;
}
constexpr void System::Resources::ResourceManager::__cordl_internal_set_MainAssembly(::System::Reflection::Assembly* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___MainAssembly)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Globalization::CultureInfo*& System::Resources::ResourceManager::__cordl_internal_get__neutralResourcesCulture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____neutralResourcesCulture;
}
constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CultureInfo*> const& System::Resources::ResourceManager::__cordl_internal_get__neutralResourcesCulture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____neutralResourcesCulture;
}
constexpr void System::Resources::ResourceManager::__cordl_internal_set__neutralResourcesCulture(::System::Globalization::CultureInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____neutralResourcesCulture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Resources::__ResourceManager__CultureNameResourceSetPair*& System::Resources::ResourceManager::__cordl_internal_get__lastUsedResourceCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastUsedResourceCache;
}
constexpr ::cordl_internals::to_const_pointer<::System::Resources::__ResourceManager__CultureNameResourceSetPair*> const&
System::Resources::ResourceManager::__cordl_internal_get__lastUsedResourceCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastUsedResourceCache;
}
constexpr void System::Resources::ResourceManager::__cordl_internal_set__lastUsedResourceCache(::System::Resources::__ResourceManager__CultureNameResourceSetPair* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lastUsedResourceCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Resources::ResourceManager::__cordl_internal_get_UseManifest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UseManifest;
}
constexpr bool const& System::Resources::ResourceManager::__cordl_internal_get_UseManifest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UseManifest;
}
constexpr void System::Resources::ResourceManager::__cordl_internal_set_UseManifest(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___UseManifest = value;
}
constexpr bool& System::Resources::ResourceManager::__cordl_internal_get_UseSatelliteAssem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UseSatelliteAssem;
}
constexpr bool const& System::Resources::ResourceManager::__cordl_internal_get_UseSatelliteAssem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UseSatelliteAssem;
}
constexpr void System::Resources::ResourceManager::__cordl_internal_set_UseSatelliteAssem(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___UseSatelliteAssem = value;
}
constexpr ::System::Resources::UltimateResourceFallbackLocation& System::Resources::ResourceManager::__cordl_internal_get__fallbackLoc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fallbackLoc;
}
constexpr ::System::Resources::UltimateResourceFallbackLocation const& System::Resources::ResourceManager::__cordl_internal_get__fallbackLoc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fallbackLoc;
}
constexpr void System::Resources::ResourceManager::__cordl_internal_set__fallbackLoc(::System::Resources::UltimateResourceFallbackLocation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fallbackLoc = value;
}
constexpr ::System::Reflection::Assembly*& System::Resources::ResourceManager::__cordl_internal_get__callingAssembly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callingAssembly;
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::Assembly*> const& System::Resources::ResourceManager::__cordl_internal_get__callingAssembly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callingAssembly;
}
constexpr void System::Resources::ResourceManager::__cordl_internal_set__callingAssembly(::System::Reflection::Assembly* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____callingAssembly)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Reflection::RuntimeAssembly*& System::Resources::ResourceManager::__cordl_internal_get_m_callingAssembly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_callingAssembly;
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::RuntimeAssembly*> const& System::Resources::ResourceManager::__cordl_internal_get_m_callingAssembly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_callingAssembly;
}
constexpr void System::Resources::ResourceManager::__cordl_internal_set_m_callingAssembly(::System::Reflection::RuntimeAssembly* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_callingAssembly)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Resources::IResourceGroveler*& System::Resources::ResourceManager::__cordl_internal_get_resourceGroveler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourceGroveler;
}
constexpr ::cordl_internals::to_const_pointer<::System::Resources::IResourceGroveler*> const& System::Resources::ResourceManager::__cordl_internal_get_resourceGroveler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourceGroveler;
}
constexpr void System::Resources::ResourceManager::__cordl_internal_set_resourceGroveler(::System::Resources::IResourceGroveler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___resourceGroveler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Resources::ResourceManager::setStaticF_MagicNumber(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "MagicNumber", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Resources::ResourceManager::getStaticF_MagicNumber() {
  return ::cordl_internals::getStaticField<int32_t, "MagicNumber", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get>();
}
inline void System::Resources::ResourceManager::setStaticF_HeaderVersionNumber(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "HeaderVersionNumber", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Resources::ResourceManager::getStaticF_HeaderVersionNumber() {
  return ::cordl_internals::getStaticField<int32_t, "HeaderVersionNumber", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get>();
}
inline void System::Resources::ResourceManager::setStaticF__minResourceSet(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "_minResourceSet", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get>(
      std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Resources::ResourceManager::getStaticF__minResourceSet() {
  return ::cordl_internals::getStaticField<::System::Type*, "_minResourceSet", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get>();
}
inline void System::Resources::ResourceManager::setStaticF_ResReaderTypeName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ResReaderTypeName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get>(std::forward<::StringW>(value));
}
inline ::StringW System::Resources::ResourceManager::getStaticF_ResReaderTypeName() {
  return ::cordl_internals::getStaticField<::StringW, "ResReaderTypeName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get>();
}
inline void System::Resources::ResourceManager::setStaticF_ResSetTypeName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ResSetTypeName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get>(std::forward<::StringW>(value));
}
inline ::StringW System::Resources::ResourceManager::getStaticF_ResSetTypeName() {
  return ::cordl_internals::getStaticField<::StringW, "ResSetTypeName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get>();
}
inline void System::Resources::ResourceManager::setStaticF_MscorlibName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "MscorlibName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get>(std::forward<::StringW>(value));
}
inline ::StringW System::Resources::ResourceManager::getStaticF_MscorlibName() {
  return ::cordl_internals::getStaticField<::StringW, "MscorlibName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get>();
}
inline void System::Resources::ResourceManager::setStaticF_DEBUG(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "DEBUG", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Resources::ResourceManager::getStaticF_DEBUG() {
  return ::cordl_internals::getStaticField<int32_t, "DEBUG", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get>();
}
inline void System::Resources::ResourceManager::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(), "Init",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Resources::ResourceManager* System::Resources::ResourceManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Resources::ResourceManager*>());
}
inline void System::Resources::ResourceManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Resources::ResourceManager::OnDeserializing(::System::Runtime::Serialization::StreamingContext ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(), "OnDeserializing", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctx);
}
inline void System::Resources::ResourceManager::OnDeserialized(::System::Runtime::Serialization::StreamingContext ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(), "OnDeserialized", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctx);
}
inline void System::Resources::ResourceManager::OnSerializing(::System::Runtime::Serialization::StreamingContext ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(), "OnSerializing", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctx);
}
inline bool System::Resources::ResourceManager::CompareNames(::StringW asmTypeName1, ::StringW typeName2, ::System::Reflection::AssemblyName* asmName2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(), "CompareNames", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::AssemblyName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, asmTypeName1, typeName2, asmName2);
}
// Ctor Parameters []
constexpr ::System::Resources::ResourceManager::ResourceManager() {}
