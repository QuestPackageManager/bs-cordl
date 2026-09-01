#pragma once
// IWYU pragma private; include "UnityEngine\AddressableAssets\ResourceLocators\ContentCatalogData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__ObjectInitializationData_impl.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__SerializedType_impl.hpp"
#include "UnityEngine/AddressableAssets/ResourceLocators/zzzz__ContentCatalogData_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/AddressableAssets/ResourceLocators/zzzz__ContentCatalogDataEntry_def.hpp"
#include "UnityEngine/AddressableAssets/ResourceLocators/zzzz__ContentCatalogData_def.hpp"
#include "UnityEngine/AddressableAssets/ResourceLocators/zzzz__ResourceLocationMap_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__ObjectInitializationData_def.hpp"
// Ctor Parameters [CppParam { name: "dataOffset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "entries", ty: "::ArrayW<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_Bucket::ContentCatalogData_Bucket(int32_t dataOffset, ::ArrayW<int32_t> entries) noexcept {
  this->dataOffset = dataOffset;
  this->entries = entries;
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_Bucket::ContentCatalogData_Bucket() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation.get_InternalId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::*)()>(
    &::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::get_InternalId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x646af20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation*>(), { "get_InternalId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation.get_ProviderId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::*)()>(
    &::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::get_ProviderId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x646af28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation*>(), { "get_ProviderId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation.get_Dependencies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* (
    ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::*)()>(
    &::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::get_Dependencies)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x646af30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation*>(), { "get_Dependencies", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation.get_HasDependencies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::*)()>(
    &::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::get_HasDependencies)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x646afb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation*>(), { "get_HasDependencies", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation.get_DependencyHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::*)()>(
    &::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::get_DependencyHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x646afc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation*>(), { "get_DependencyHashCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation.get_Data
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::*)()>(
    &::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::get_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x646afc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation*>(), { "get_Data", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation.get_PrimaryKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::*)()>(
    &::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::get_PrimaryKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x646afd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation*>(), { "get_PrimaryKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation.set_PrimaryKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::*)(::StringW)>(
    &::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::set_PrimaryKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x646afd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation*>(),
                                                                                           { "set_PrimaryKey", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation.get_ResourceType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::*)()>(
    &::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::get_ResourceType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x646afe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation*>(), { "get_ResourceType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::*)()>(
    &::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x646afe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation*>(),
                                                            { ::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation.Hash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::*)(::System::Type*)>(
    &::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::Hash)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x646aff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation*>(),
                                                                                           { "Hash", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::*)(
    ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*, ::StringW, ::StringW, ::System::Object*, ::System::Object*, int32_t, ::StringW, ::System::Type*)>(
    &::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x646969c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*&
UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::__cordl_internal_get_m_Locator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Locator;
}
constexpr ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* const&
UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::__cordl_internal_get_m_Locator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Locator;
}
constexpr void
UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::__cordl_internal_set_m_Locator(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Locator = value;
}
constexpr ::StringW& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::__cordl_internal_get_m_InternalId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InternalId;
}
constexpr ::StringW const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::__cordl_internal_get_m_InternalId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InternalId;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::__cordl_internal_set_m_InternalId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InternalId = value;
}
constexpr ::StringW& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::__cordl_internal_get_m_ProviderId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProviderId;
}
constexpr ::StringW const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::__cordl_internal_get_m_ProviderId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProviderId;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::__cordl_internal_set_m_ProviderId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ProviderId = value;
}
constexpr ::System::Object*& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::__cordl_internal_get_m_Dependency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Dependency;
}
constexpr ::System::Object* const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::__cordl_internal_get_m_Dependency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Dependency;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::__cordl_internal_set_m_Dependency(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Dependency = value;
}
constexpr ::System::Object*& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::__cordl_internal_get_m_Data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Data;
}
constexpr ::System::Object* const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::__cordl_internal_get_m_Data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Data;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::__cordl_internal_set_m_Data(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Data = value;
}
constexpr int32_t& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::__cordl_internal_get_m_HashCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HashCode;
}
constexpr int32_t const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::__cordl_internal_get_m_HashCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HashCode;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::__cordl_internal_set_m_HashCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HashCode = value;
}
constexpr int32_t& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::__cordl_internal_get_m_DependencyHashCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DependencyHashCode;
}
constexpr int32_t const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::__cordl_internal_get_m_DependencyHashCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DependencyHashCode;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::__cordl_internal_set_m_DependencyHashCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DependencyHashCode = value;
}
constexpr ::StringW& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::__cordl_internal_get_m_PrimaryKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrimaryKey;
}
constexpr ::StringW const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::__cordl_internal_get_m_PrimaryKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrimaryKey;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::__cordl_internal_set_m_PrimaryKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PrimaryKey = value;
}
constexpr ::System::Type*& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::__cordl_internal_get_m_Type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Type;
}
constexpr ::System::Type* const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::__cordl_internal_get_m_Type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Type;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::__cordl_internal_set_m_Type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Type = value;
}
inline ::StringW UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::get_InternalId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation*>(), { "get_InternalId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::get_ProviderId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation*>(), { "get_ProviderId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*
UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::get_Dependencies() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation*>(), { "get_Dependencies", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>(this, ___internal_method);
}
inline bool UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::get_HasDependencies() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation*>(), { "get_HasDependencies", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::get_DependencyHashCode() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation*>(), { "get_DependencyHashCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::get_Data() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation*>(), { "get_Data", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::StringW UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::get_PrimaryKey() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation*>(), { "get_PrimaryKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::set_PrimaryKey(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation*>(),
                                                                                         { "set_PrimaryKey", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Type* UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::get_ResourceType() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation*>(), { "get_ResourceType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::StringW UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                                                  { ::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::Hash(::System::Type* t) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation*>(),
                                                                                         { "Hash", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, t);
}
inline void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::_ctor(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* locator,
                                                                                                        ::StringW internalId, ::StringW providerId, ::System::Object* dependencyKey,
                                                                                                        ::System::Object* data, int32_t depHash, ::StringW primaryKey, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, locator, internalId, providerId, dependencyKey, data, depHash, primaryKey, type);
}
inline ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation*
UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::New_ctor(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* locator, ::StringW internalId,
                                                                                               ::StringW providerId, ::System::Object* dependencyKey, ::System::Object* data, int32_t depHash,
                                                                                               ::StringW primaryKey, ::System::Type* type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation*>(locator, internalId, providerId, dependencyKey, data,
                                                                                                                                                   depHash, primaryKey, type));
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation"
constexpr UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::operator ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation"
constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*
UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::i___UnityEngine__ResourceManagement__ResourceLocations__IResourceLocation() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation::ContentCatalogData_CompactLocation() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData___c::*)()>(
    &::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x646b090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData___c._GetData_b__48_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData___c::*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(&::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData___c::_GetData_b__48_0)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x646b094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData___c*>(),
                                                             { "<GetData>b__48_0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData___c::setStaticF___9(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData___c*, "<>9", ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData___c*>(
      std::forward<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData___c*>(value));
}
inline ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData___c* UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData___c*, "<>9",
                                           ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData___c*>();
}
inline void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData___c::setStaticF___9__48_0(
    ::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>*, "<>9__48_0",
                                    ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData___c*>(
      std::forward<::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>*
UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData___c::getStaticF___9__48_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>*, "<>9__48_0",
                                           ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData___c*>();
}
inline void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData___c::_GetData_b__48_0(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* d) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData___c*>(),
                                                           { "<GetData>b__48_0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, d);
}
inline ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData___c* UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData___c::ContentCatalogData___c() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.get_BuildResultHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(
    &::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_BuildResultHash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6468bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(), { "get_BuildResultHash", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.set_BuildResultHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(::StringW)>(
    &::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_BuildResultHash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6468bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(), { "set_BuildResultHash", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.get_ProviderId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(
    &::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_ProviderId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6468bd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(), { "get_ProviderId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.set_ProviderId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(::StringW)>(
    &::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_ProviderId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6468be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(), { "set_ProviderId", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.get_InstanceProviderData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::Util::ObjectInitializationData (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(
    &::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_InstanceProviderData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6468be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(), { "get_InstanceProviderData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.set_InstanceProviderData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(
    ::UnityEngine::ResourceManagement::Util::ObjectInitializationData)>(&::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_InstanceProviderData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6468bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(),
                                                             { "set_InstanceProviderData", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.get_SceneProviderData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::Util::ObjectInitializationData (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(
    &::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_SceneProviderData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6468c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(), { "get_SceneProviderData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.set_SceneProviderData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(
    ::UnityEngine::ResourceManagement::Util::ObjectInitializationData)>(&::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_SceneProviderData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6468c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(),
                                                             { "set_SceneProviderData", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.get_ResourceProviderData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* (
    ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_ResourceProviderData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6468c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(), { "get_ResourceProviderData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.set_ResourceProviderData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*)>(
    &::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_ResourceProviderData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6468c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(),
                            { "set_ResourceProviderData", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(::StringW)>(
    &::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6468c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(
    &::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6468ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.get_ProviderIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(
    &::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_ProviderIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6468d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(), { "get_ProviderIds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.get_InternalIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(
    &::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_InternalIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6468d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(), { "get_InternalIds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.LoadFromFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* (*)(::StringW, int32_t)>(
    &::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::LoadFromFile)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6468d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(),
                                                                                           { "LoadFromFile", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.SaveToFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(::StringW)>(
    &::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::SaveToFile)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6468da4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(), { "SaveToFile", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.CleanData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(
    &::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CleanData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x64673c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(), { "CleanData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.CreateCustomLocator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* (
    ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(::StringW, ::StringW)>(&::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CreateCustomLocator)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6462b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(),
                                                                                           { "CreateCustomLocator", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.CreateLocator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* (
    ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(::StringW)>(&::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CreateLocator)> {
  constexpr static std::size_t size = 0x760;
  constexpr static std::size_t addrs = 0x6468dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(), { "CreateLocator", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.GetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry*>* (
    ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::GetData)> {
  constexpr static std::size_t size = 0xe9c;
  constexpr static std::size_t addrs = 0x64697ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(), { "GetData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.ExpandInternalId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<::StringW>, ::StringW)>(&::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::ExpandInternalId)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x64695d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(),
                                                                                           { "ExpandInternalId", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_LocalHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LocalHash;
}
constexpr ::StringW const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_LocalHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LocalHash;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_set_LocalHash(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LocalHash = value;
}
constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_location() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___location;
}
constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_location() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___location;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_set_location(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___location = value;
}
constexpr ::StringW& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_LocatorId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocatorId;
}
constexpr ::StringW const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_LocatorId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocatorId;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_set_m_LocatorId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LocatorId = value;
}
constexpr ::StringW& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_BuildResultHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BuildResultHash;
}
constexpr ::StringW const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_BuildResultHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BuildResultHash;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_set_m_BuildResultHash(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BuildResultHash = value;
}
constexpr ::UnityEngine::ResourceManagement::Util::ObjectInitializationData& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_InstanceProviderData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InstanceProviderData;
}
constexpr ::UnityEngine::ResourceManagement::Util::ObjectInitializationData const&
UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_InstanceProviderData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InstanceProviderData;
}
constexpr void
UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_set_m_InstanceProviderData(::UnityEngine::ResourceManagement::Util::ObjectInitializationData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InstanceProviderData = value;
}
constexpr ::UnityEngine::ResourceManagement::Util::ObjectInitializationData& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_SceneProviderData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SceneProviderData;
}
constexpr ::UnityEngine::ResourceManagement::Util::ObjectInitializationData const&
UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_SceneProviderData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SceneProviderData;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_set_m_SceneProviderData(::UnityEngine::ResourceManagement::Util::ObjectInitializationData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SceneProviderData = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*&
UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_ResourceProviderData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResourceProviderData;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* const&
UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_ResourceProviderData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResourceProviderData;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_set_m_ResourceProviderData(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ResourceProviderData = value;
}
constexpr ::System::Collections::Generic::IList_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry*>*&
UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_Entries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Entries;
}
constexpr ::System::Collections::Generic::IList_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry*>* const&
UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_Entries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Entries;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_set_m_Entries(
    ::System::Collections::Generic::IList_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Entries = value;
}
constexpr ::ArrayW<::StringW>& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_ProviderIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProviderIds;
}
constexpr ::ArrayW<::StringW> const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_ProviderIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProviderIds;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_set_m_ProviderIds(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ProviderIds = value;
}
constexpr ::ArrayW<::StringW>& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_InternalIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InternalIds;
}
constexpr ::ArrayW<::StringW> const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_InternalIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InternalIds;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_set_m_InternalIds(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InternalIds = value;
}
constexpr ::StringW& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_KeyDataString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KeyDataString;
}
constexpr ::StringW const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_KeyDataString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KeyDataString;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_set_m_KeyDataString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_KeyDataString = value;
}
constexpr ::StringW& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_BucketDataString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BucketDataString;
}
constexpr ::StringW const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_BucketDataString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BucketDataString;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_set_m_BucketDataString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BucketDataString = value;
}
constexpr ::StringW& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_EntryDataString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EntryDataString;
}
constexpr ::StringW const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_EntryDataString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EntryDataString;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_set_m_EntryDataString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EntryDataString = value;
}
constexpr ::StringW& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_ExtraDataString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExtraDataString;
}
constexpr ::StringW const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_ExtraDataString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExtraDataString;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_set_m_ExtraDataString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ExtraDataString = value;
}
constexpr ::ArrayW<::UnityEngine::ResourceManagement::Util::SerializedType>& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_resourceTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_resourceTypes;
}
constexpr ::ArrayW<::UnityEngine::ResourceManagement::Util::SerializedType> const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_resourceTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_resourceTypes;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_set_m_resourceTypes(::ArrayW<::UnityEngine::ResourceManagement::Util::SerializedType> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_resourceTypes = value;
}
constexpr ::ArrayW<::StringW>& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_InternalIdPrefixes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InternalIdPrefixes;
}
constexpr ::ArrayW<::StringW> const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_get_m_InternalIdPrefixes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InternalIdPrefixes;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__cordl_internal_set_m_InternalIdPrefixes(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InternalIdPrefixes = value;
}
inline void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::setStaticF_kMagic(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kMagic", ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::getStaticF_kMagic() {
  return ::cordl_internals::getStaticField<int32_t, "kMagic", ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>();
}
inline ::StringW UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_BuildResultHash() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(), { "get_BuildResultHash", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_BuildResultHash(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(), { "set_BuildResultHash", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_ProviderId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(), { "get_ProviderId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_ProviderId(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(), { "set_ProviderId", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ResourceManagement::Util::ObjectInitializationData UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_InstanceProviderData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(), { "get_InstanceProviderData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_InstanceProviderData(::UnityEngine::ResourceManagement::Util::ObjectInitializationData value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(),
                                                           { "set_InstanceProviderData", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ResourceManagement::Util::ObjectInitializationData UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_SceneProviderData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(), { "get_SceneProviderData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_SceneProviderData(::UnityEngine::ResourceManagement::Util::ObjectInitializationData value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(),
                                                           { "set_SceneProviderData", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*
UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_ResourceProviderData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(), { "get_ResourceProviderData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_ResourceProviderData(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(),
                          { "set_ResourceProviderData", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::_ctor(::StringW id) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::StringW> UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_ProviderIds() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(), { "get_ProviderIds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::ArrayW<::StringW> UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_InternalIds() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(), { "get_InternalIds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::LoadFromFile(::StringW path, int32_t cacheSize) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(),
                                                                                         { "LoadFromFile", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(nullptr, ___internal_method, path, cacheSize);
}
inline void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::SaveToFile(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(), { "SaveToFile", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path);
}
inline void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CleanData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(), { "CleanData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CreateCustomLocator(::StringW overrideId,
                                                                                                                                                                          ::StringW providerSuffix) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(),
                                                                                         { "CreateCustomLocator", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*>(this, ___internal_method, overrideId, providerSuffix);
}
inline ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CreateLocator(::StringW providerSuffix) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(), { "CreateLocator", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*>(this, ___internal_method, providerSuffix);
}
inline ::System::Collections::Generic::IList_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry*>*
UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::GetData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(), { "GetData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry*>*>(this, ___internal_method);
}
inline ::StringW UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::ExpandInternalId(::ArrayW<::StringW> internalIdPrefixes, ::StringW v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(),
                                                                                         { "ExpandInternalId", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, internalIdPrefixes, v);
}
inline ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::New_ctor(::StringW id) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>(id));
}
inline ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::ContentCatalogData() {}
