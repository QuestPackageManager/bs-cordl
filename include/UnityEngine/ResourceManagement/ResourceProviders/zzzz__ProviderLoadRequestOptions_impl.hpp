#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/ProviderLoadRequestOptions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ProviderLoadRequestOptions_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ProviderLoadRequestOptions_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__BinaryStorageBuffer_def.hpp"
// Ctor Parameters [CppParam { name: "ignoreFailures", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "requestTimeout", ty: "int32_t", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "localCachePathOffset", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::SerializationAdatapter_ProviderLoadRequestOptions_Data::SerializationAdatapter_ProviderLoadRequestOptions_Data(
    bool ignoreFailures, int32_t requestTimeout, uint32_t localCachePathOffset) noexcept {
  this->ignoreFailures = ignoreFailures;
  this->requestTimeout = requestTimeout;
  this->localCachePathOffset = localCachePathOffset;
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::SerializationAdatapter_ProviderLoadRequestOptions_Data::SerializationAdatapter_ProviderLoadRequestOptions_Data() {}
//  Writing Method size for method:
//  ::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions_SerializationAdatapter.UnityEngine_ResourceManagement_Util_BinaryStorageBuffer_ISerializationAdapter_get_Dependencies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>* (
    ::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions_SerializationAdatapter::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions_SerializationAdatapter::
        UnityEngine_ResourceManagement_Util_BinaryStorageBuffer_ISerializationAdapter_get_Dependencies)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d487d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions_SerializationAdatapter*>(),
                                                             { "UnityEngine.ResourceManagement.Util.BinaryStorageBuffer.ISerializationAdapter.get_Dependencies", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions_SerializationAdatapter.UnityEngine_ResourceManagement_Util_BinaryStorageBuffer_ISerializationAdapter_Deserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (
    ::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions_SerializationAdatapter::*)(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*, ::System::Type*,
                                                                                                                uint32_t, ::by_ref<uint32_t>)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions_SerializationAdatapter::
        UnityEngine_ResourceManagement_Util_BinaryStorageBuffer_ISerializationAdapter_Deserialize)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6d487e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions_SerializationAdatapter*>(),
                                                             { "UnityEngine.ResourceManagement.Util.BinaryStorageBuffer.ISerializationAdapter.Deserialize",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(), ::i2c::type_of<::System::Type*>(),
                                                                 ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions_SerializationAdatapter.UnityEngine_ResourceManagement_Util_BinaryStorageBuffer_ISerializationAdapter_Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions_SerializationAdatapter::*)(
    ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*, ::System::Object*)>(&::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions_SerializationAdatapter::
                                                                                                  UnityEngine_ResourceManagement_Util_BinaryStorageBuffer_ISerializationAdapter_Serialize)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6d488bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions_SerializationAdatapter*>(),
                                                             { "UnityEngine.ResourceManagement.Util.BinaryStorageBuffer.ISerializationAdapter.Serialize",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions_SerializationAdatapter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions_SerializationAdatapter::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions_SerializationAdatapter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d489a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions_SerializationAdatapter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>* UnityEngine::ResourceManagement::ResourceProviders::
    ProviderLoadRequestOptions_SerializationAdatapter::UnityEngine_ResourceManagement_Util_BinaryStorageBuffer_ISerializationAdapter_get_Dependencies() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions_SerializationAdatapter*>(),
                                                           { "UnityEngine.ResourceManagement.Util.BinaryStorageBuffer.ISerializationAdapter.get_Dependencies", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*>(this,
                                                                                                                                                                                  ___internal_method);
}
inline ::System::Object*
UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions_SerializationAdatapter::UnityEngine_ResourceManagement_Util_BinaryStorageBuffer_ISerializationAdapter_Deserialize(
    ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader* reader, ::System::Type* t, uint32_t offset, ::by_ref<uint32_t> size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions_SerializationAdatapter*>(),
                                                           { "UnityEngine.ResourceManagement.Util.BinaryStorageBuffer.ISerializationAdapter.Deserialize",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(), ::i2c::type_of<::System::Type*>(),
                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, t, offset, size);
}
inline uint32_t
UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions_SerializationAdatapter::UnityEngine_ResourceManagement_Util_BinaryStorageBuffer_ISerializationAdapter_Serialize(
    ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer* writer, ::System::Object* val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions_SerializationAdatapter*>(),
                                                           { "UnityEngine.ResourceManagement.Util.BinaryStorageBuffer.ISerializationAdapter.Serialize",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, writer, val);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions_SerializationAdatapter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions_SerializationAdatapter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions_SerializationAdatapter*
UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions_SerializationAdatapter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions_SerializationAdatapter*>());
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*>"
constexpr UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions_SerializationAdatapter::operator ::UnityEngine::ResourceManagement::Util::
    BinaryStorageBuffer_ISerializationAdapter_1<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*>*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*>*>(
      static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*>"
constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*>*
UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions_SerializationAdatapter::
    i___UnityEngine__ResourceManagement__Util__BinaryStorageBuffer_ISerializationAdapter_1___UnityEngine__ResourceManagement__ResourceProviders__ProviderLoadRequestOptions__() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*>*>(
      static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter"
constexpr UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions_SerializationAdatapter::operator ::UnityEngine::ResourceManagement::Util::
    BinaryStorageBuffer_ISerializationAdapter*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter"
constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*
UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions_SerializationAdatapter::i___UnityEngine__ResourceManagement__Util__BinaryStorageBuffer_ISerializationAdapter() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions_SerializationAdatapter::ProviderLoadRequestOptions_SerializationAdatapter() {}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions* (
    ::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::*)()>(&::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::Copy)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6d48724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*>(), { "Copy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions.get_IgnoreFailures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::get_IgnoreFailures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d487a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*>(), { "get_IgnoreFailures", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions.set_IgnoreFailures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::*)(bool)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::set_IgnoreFailures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d487ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*>(),
                                                                                           { "set_IgnoreFailures", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions.get_WebRequestTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::get_WebRequestTimeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d487b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*>(), { "get_WebRequestTimeout", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions.set_WebRequestTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::*)(int32_t)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::set_WebRequestTimeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d487bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*>(),
                                                                                           { "set_WebRequestTimeout", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions.get_LocalCachePath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::get_LocalCachePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d487c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*>(), { "get_LocalCachePath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions.set_LocalCachePath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::*)(::StringW)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::set_LocalCachePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d487cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*>(),
                                                                                           { "set_LocalCachePath", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d487d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::__cordl_internal_get_m_IgnoreFailures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IgnoreFailures;
}
constexpr bool const& UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::__cordl_internal_get_m_IgnoreFailures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IgnoreFailures;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::__cordl_internal_set_m_IgnoreFailures(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IgnoreFailures = value;
}
constexpr int32_t& UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::__cordl_internal_get_m_WebRequestTimeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WebRequestTimeout;
}
constexpr int32_t const& UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::__cordl_internal_get_m_WebRequestTimeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WebRequestTimeout;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::__cordl_internal_set_m_WebRequestTimeout(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_WebRequestTimeout = value;
}
constexpr ::StringW& UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::__cordl_internal_get_m_LocalCachePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocalCachePath;
}
constexpr ::StringW const& UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::__cordl_internal_get_m_LocalCachePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocalCachePath;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::__cordl_internal_set_m_LocalCachePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LocalCachePath = value;
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions* UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::Copy() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*>(), { "Copy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*>(this, ___internal_method);
}
inline bool UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::get_IgnoreFailures() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*>(), { "get_IgnoreFailures", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::set_IgnoreFailures(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*>(),
                                                                                         { "set_IgnoreFailures", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::get_WebRequestTimeout() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*>(), { "get_WebRequestTimeout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::set_WebRequestTimeout(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*>(),
                                                                                         { "set_WebRequestTimeout", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::get_LocalCachePath() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*>(), { "get_LocalCachePath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::set_LocalCachePath(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*>(),
                                                                                         { "set_LocalCachePath", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions* UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::ProviderLoadRequestOptions() {}
