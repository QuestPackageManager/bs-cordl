#pragma once
// IWYU pragma private; include "UnityEngine\AddressableAssets\ResourceLocators\ResourceLocationMap.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/AddressableAssets/ResourceLocators/zzzz__ResourceLocationMap_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/AddressableAssets/ResourceLocators/zzzz__IResourceLocator_def.hpp"
#include "UnityEngine/AddressableAssets/ResourceLocators/zzzz__ResourceLocationData_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::*)(::StringW, int32_t)>(
    &::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6469528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap.get_LocatorId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::*)()>(
    &::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::get_LocatorId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x646b364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*>(), { "get_LocatorId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap.set_LocatorId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::*)(::StringW)>(
    &::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::set_LocatorId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x646b36c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*>(), { "set_LocatorId", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::*)(
    ::StringW, ::System::Collections::Generic::IList_1<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData*>*)>(
    &::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::_ctor)> {
  constexpr static std::size_t size = 0xb04;
  constexpr static std::size_t addrs = 0x646b374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*>(),
            { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap.get_Locations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>* (
        ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::*)()>(&::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::get_Locations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x646c000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*>(), { "get_Locations", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap.get_Keys
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Object*>* (
    ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::*)()>(&::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::get_Keys)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x646a688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*>(), { "get_Keys", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap.Locate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::*)(
    ::System::Object*, ::System::Type*, ::by_ref<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>)>(
    &::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::Locate)> {
  constexpr static std::size_t size = 0x7c8;
  constexpr static std::size_t addrs = 0x646a6dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*>(),
                                         { "Locate",
                                           {},
                                           { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(),
                                             ::i2c::type_of<::by_ref<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::*)(
    ::System::Object*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(&::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::Add)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x646be78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*>(),
                                                { "Add", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::*)(
    ::System::Object*, ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*)>(
    &::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::Add)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6469770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*>(),
                                                { "Add",
                                                  {},
                                                  { ::i2c::type_of<::System::Object*>(),
                                                    ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::__cordl_internal_get__LocatorId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LocatorId_k__BackingField;
}
constexpr ::StringW const& UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::__cordl_internal_get__LocatorId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LocatorId_k__BackingField;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::__cordl_internal_set__LocatorId_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LocatorId_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>*&
UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::__cordl_internal_get_locations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___locations;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>* const&
UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::__cordl_internal_get_locations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___locations;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::__cordl_internal_set_locations(
    ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___locations = value;
}
inline void UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::_ctor(::StringW id, int32_t capacity) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, capacity);
}
inline ::StringW UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::get_LocatorId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*>(), { "get_LocatorId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::set_LocatorId(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*>(), { "set_LocatorId", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::_ctor(
    ::StringW id, ::System::Collections::Generic::IList_1<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData*>* locations) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*>(),
          { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, locations);
}
inline ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>*
UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::get_Locations() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*>(), { "get_Locations", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>*>(
      this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::get_Keys() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*>(), { "get_Keys", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>(this, ___internal_method);
}
inline bool UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::Locate(
    ::System::Object* key, ::System::Type* type, ::by_ref<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> locations) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*>(),
                                              { "Locate",
                                                {},
                                                { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(),
                                                  ::i2c::type_of<::by_ref<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, type, locations);
}
inline void UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::Add(::System::Object* key, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*>(),
                                              { "Add", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, location);
}
inline void UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::Add(
    ::System::Object* key, ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*>(),
                                              { "Add",
                                                {},
                                                { ::i2c::type_of<::System::Object*>(),
                                                  ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, locations);
}
inline ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::New_ctor(::StringW id, int32_t capacity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*>(id, capacity));
}
inline ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::New_ctor(
    ::StringW id, ::System::Collections::Generic::IList_1<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData*>* locations) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*>(id, locations));
}
/// @brief Convert operator to "::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator"
constexpr UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::operator ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*() noexcept {
  return static_cast<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator"
constexpr ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*
UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::i___UnityEngine__AddressableAssets__ResourceLocators__IResourceLocator() noexcept {
  return static_cast<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap::ResourceLocationMap() {}
