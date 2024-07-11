#pragma once
// IWYU pragma private; include "AddressablesInternalBridge/Runtime/CatalogLocationData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "AddressablesInternalBridge/Runtime/zzzz__CatalogLocationData_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
//  Writing Method size for method: ::AddressablesInternalBridge::Runtime::CatalogLocationData.get_LocatorId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::AddressablesInternalBridge::Runtime::CatalogLocationData::*)()>(
    &::AddressablesInternalBridge::Runtime::CatalogLocationData::get_LocatorId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3071d8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AddressablesInternalBridge::Runtime::CatalogLocationData*>::get(), "get_LocatorId",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AddressablesInternalBridge::Runtime::CatalogLocationData.get_LocalHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::AddressablesInternalBridge::Runtime::CatalogLocationData::*)()>(
    &::AddressablesInternalBridge::Runtime::CatalogLocationData::get_LocalHash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3071d94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AddressablesInternalBridge::Runtime::CatalogLocationData*>::get(), "get_LocalHash",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AddressablesInternalBridge::Runtime::CatalogLocationData.get_CatalogLocation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* (
    ::AddressablesInternalBridge::Runtime::CatalogLocationData::*)()>(&::AddressablesInternalBridge::Runtime::CatalogLocationData::get_CatalogLocation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3071d9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AddressablesInternalBridge::Runtime::CatalogLocationData*>::get(), "get_CatalogLocation",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AddressablesInternalBridge::Runtime::CatalogLocationData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AddressablesInternalBridge::Runtime::CatalogLocationData::*)(
    ::StringW, ::StringW, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(&::AddressablesInternalBridge::Runtime::CatalogLocationData::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x307172c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AddressablesInternalBridge::Runtime::CatalogLocationData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& AddressablesInternalBridge::Runtime::CatalogLocationData::__cordl_internal_get__LocatorId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LocatorId_k__BackingField;
}
constexpr ::StringW const& AddressablesInternalBridge::Runtime::CatalogLocationData::__cordl_internal_get__LocatorId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LocatorId_k__BackingField;
}
constexpr void AddressablesInternalBridge::Runtime::CatalogLocationData::__cordl_internal_set__LocatorId_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____LocatorId_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& AddressablesInternalBridge::Runtime::CatalogLocationData::__cordl_internal_get__LocalHash_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LocalHash_k__BackingField;
}
constexpr ::StringW const& AddressablesInternalBridge::Runtime::CatalogLocationData::__cordl_internal_get__LocalHash_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LocalHash_k__BackingField;
}
constexpr void AddressablesInternalBridge::Runtime::CatalogLocationData::__cordl_internal_set__LocalHash_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____LocalHash_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*& AddressablesInternalBridge::Runtime::CatalogLocationData::__cordl_internal_get__CatalogLocation_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CatalogLocation_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*> const&
AddressablesInternalBridge::Runtime::CatalogLocationData::__cordl_internal_get__CatalogLocation_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CatalogLocation_k__BackingField;
}
constexpr void
AddressablesInternalBridge::Runtime::CatalogLocationData::__cordl_internal_set__CatalogLocation_k__BackingField(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____CatalogLocation_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW AddressablesInternalBridge::Runtime::CatalogLocationData::get_LocatorId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AddressablesInternalBridge::Runtime::CatalogLocationData*>::get(),
                                                                             "get_LocatorId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW AddressablesInternalBridge::Runtime::CatalogLocationData::get_LocalHash() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AddressablesInternalBridge::Runtime::CatalogLocationData*>::get(),
                                                                             "get_LocalHash", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* AddressablesInternalBridge::Runtime::CatalogLocationData::get_CatalogLocation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AddressablesInternalBridge::Runtime::CatalogLocationData*>::get(),
                                                                             "get_CatalogLocation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, false>(this, ___internal_method);
}
inline ::AddressablesInternalBridge::Runtime::CatalogLocationData*
AddressablesInternalBridge::Runtime::CatalogLocationData::New_ctor(::StringW locatorId, ::StringW localHash,
                                                                   ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* resourceLocation) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AddressablesInternalBridge::Runtime::CatalogLocationData*>(locatorId, localHash, resourceLocation));
}
inline void AddressablesInternalBridge::Runtime::CatalogLocationData::_ctor(::StringW locatorId, ::StringW localHash,
                                                                            ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* resourceLocation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AddressablesInternalBridge::Runtime::CatalogLocationData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, locatorId, localHash, resourceLocation);
}
// Ctor Parameters []
constexpr ::AddressablesInternalBridge::Runtime::CatalogLocationData::CatalogLocationData() {}
