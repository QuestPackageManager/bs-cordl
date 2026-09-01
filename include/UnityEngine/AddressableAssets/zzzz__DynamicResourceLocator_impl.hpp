#pragma once
// IWYU pragma private; include "UnityEngine\AddressableAssets\DynamicResourceLocator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/AddressableAssets/zzzz__DynamicResourceLocator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/AddressableAssets/ResourceLocators/zzzz__IResourceLocator_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AddressablesImpl_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
//  Writing Method size for method: ::UnityEngine::AddressableAssets::DynamicResourceLocator.get_LocatorId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::AddressableAssets::DynamicResourceLocator::*)()>(
    &::UnityEngine::AddressableAssets::DynamicResourceLocator::get_LocatorId)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6463904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::DynamicResourceLocator*>(), { "get_LocatorId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::DynamicResourceLocator.get_Keys
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Object*>* (::UnityEngine::AddressableAssets::DynamicResourceLocator::*)()>(
    &::UnityEngine::AddressableAssets::DynamicResourceLocator::get_Keys)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6463948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::DynamicResourceLocator*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::AddressableAssets::DynamicResourceLocator*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::DynamicResourceLocator.get_AtlasSpriteProviderId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::AddressableAssets::DynamicResourceLocator::*)()>(
    &::UnityEngine::AddressableAssets::DynamicResourceLocator::get_AtlasSpriteProviderId)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x6463990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::DynamicResourceLocator*>(), { "get_AtlasSpriteProviderId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::DynamicResourceLocator.get_AllLocations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* (
    ::UnityEngine::AddressableAssets::DynamicResourceLocator::*)()>(&::UnityEngine::AddressableAssets::DynamicResourceLocator::get_AllLocations)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6463d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::DynamicResourceLocator*>(), { "get_AllLocations", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::DynamicResourceLocator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::DynamicResourceLocator::*)(::UnityEngine::AddressableAssets::AddressablesImpl*)>(
    &::UnityEngine::AddressableAssets::DynamicResourceLocator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6463de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::DynamicResourceLocator*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::AddressablesImpl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::DynamicResourceLocator.Locate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AddressableAssets::DynamicResourceLocator::*)(
    ::System::Object*, ::System::Type*, ::by_ref<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>)>(
    &::UnityEngine::AddressableAssets::DynamicResourceLocator::Locate)> {
  constexpr static std::size_t size = 0x504;
  constexpr static std::size_t addrs = 0x6463de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::DynamicResourceLocator*>(),
                                         { "Locate",
                                           {},
                                           { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(),
                                             ::i2c::type_of<::by_ref<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::DynamicResourceLocator.CreateDynamicLocations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::DynamicResourceLocator::*)(
    ::System::Type*, ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*, ::StringW, ::StringW,
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(&::UnityEngine::AddressableAssets::DynamicResourceLocator::CreateDynamicLocations)> {
  constexpr static std::size_t size = 0x7b0;
  constexpr static std::size_t addrs = 0x64642ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::DynamicResourceLocator*>(),
                            { "CreateDynamicLocations",
                              {},
                              { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>(),
                                ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& UnityEngine::AddressableAssets::DynamicResourceLocator::__cordl_internal_get_m_Addressables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Addressables;
}
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl* const& UnityEngine::AddressableAssets::DynamicResourceLocator::__cordl_internal_get_m_Addressables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Addressables;
}
constexpr void UnityEngine::AddressableAssets::DynamicResourceLocator::__cordl_internal_set_m_Addressables(::UnityEngine::AddressableAssets::AddressablesImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Addressables = value;
}
constexpr ::StringW& UnityEngine::AddressableAssets::DynamicResourceLocator::__cordl_internal_get_m_AtlasSpriteProviderId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasSpriteProviderId;
}
constexpr ::StringW const& UnityEngine::AddressableAssets::DynamicResourceLocator::__cordl_internal_get_m_AtlasSpriteProviderId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasSpriteProviderId;
}
constexpr void UnityEngine::AddressableAssets::DynamicResourceLocator::__cordl_internal_set_m_AtlasSpriteProviderId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AtlasSpriteProviderId = value;
}
inline ::StringW UnityEngine::AddressableAssets::DynamicResourceLocator::get_LocatorId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::DynamicResourceLocator*>(), { "get_LocatorId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* UnityEngine::AddressableAssets::DynamicResourceLocator::get_Keys() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AddressableAssets::DynamicResourceLocator*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>(this, ___internal_method);
}
inline ::StringW UnityEngine::AddressableAssets::DynamicResourceLocator::get_AtlasSpriteProviderId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::DynamicResourceLocator*>(), { "get_AtlasSpriteProviderId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*
UnityEngine::AddressableAssets::DynamicResourceLocator::get_AllLocations() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::DynamicResourceLocator*>(), { "get_AllLocations", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::DynamicResourceLocator::_ctor(::UnityEngine::AddressableAssets::AddressablesImpl* addr) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::DynamicResourceLocator*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::AddressablesImpl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, addr);
}
inline bool
UnityEngine::AddressableAssets::DynamicResourceLocator::Locate(::System::Object* key, ::System::Type* type,
                                                               ::by_ref<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> locations) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::DynamicResourceLocator*>(),
                                              { "Locate",
                                                {},
                                                { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(),
                                                  ::i2c::type_of<::by_ref<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, type, locations);
}
inline void UnityEngine::AddressableAssets::DynamicResourceLocator::CreateDynamicLocations(
    ::System::Type* type, ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations, ::StringW locName, ::StringW subKey,
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* mainLoc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::DynamicResourceLocator*>(),
                          { "CreateDynamicLocations",
                            {},
                            { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>(),
                              ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, locations, locName, subKey, mainLoc);
}
inline ::UnityEngine::AddressableAssets::DynamicResourceLocator* UnityEngine::AddressableAssets::DynamicResourceLocator::New_ctor(::UnityEngine::AddressableAssets::AddressablesImpl* addr) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::DynamicResourceLocator*>(addr));
}
/// @brief Convert operator to "::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator"
constexpr UnityEngine::AddressableAssets::DynamicResourceLocator::operator ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*() noexcept {
  return static_cast<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator"
constexpr ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*
UnityEngine::AddressableAssets::DynamicResourceLocator::i___UnityEngine__AddressableAssets__ResourceLocators__IResourceLocator() noexcept {
  return static_cast<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::DynamicResourceLocator::DynamicResourceLocator() {}
