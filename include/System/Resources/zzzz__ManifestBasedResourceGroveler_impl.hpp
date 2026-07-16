#pragma once
// IWYU pragma private; include "System/Resources/ManifestBasedResourceGroveler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Resources/zzzz__ManifestBasedResourceGroveler_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Reflection/zzzz__RuntimeAssembly_def.hpp"
#include "System/Resources/zzzz__IResourceGroveler_def.hpp"
#include "System/Resources/zzzz__ResourceManager_def.hpp"
#include "System/Resources/zzzz__ResourceSet_def.hpp"
#include "System/Resources/zzzz__UltimateResourceFallbackLocation_def.hpp"
#include "System/Threading/zzzz__StackCrawlMark_def.hpp"
//  Writing Method size for method: ::System::Resources::ManifestBasedResourceGroveler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Resources::ManifestBasedResourceGroveler::*)(::System::Resources::ResourceManager_ResourceManagerMediator*)>(
    &::System::Resources::ManifestBasedResourceGroveler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b7358c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ManifestBasedResourceGroveler*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Resources::ResourceManager_ResourceManagerMediator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ManifestBasedResourceGroveler.GrovelForResourceSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Resources::ResourceSet* (
    ::System::Resources::ManifestBasedResourceGroveler::*)(::System::Globalization::CultureInfo*, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>*, bool,
                                                           bool, ::by_ref<::System::Threading::StackCrawlMark>)>(&::System::Resources::ManifestBasedResourceGroveler::GrovelForResourceSet)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x5b73594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Resources::ManifestBasedResourceGroveler*>(),
                            { "GrovelForResourceSet",
                              {},
                              { ::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>*>(),
                                ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ManifestBasedResourceGroveler.UltimateFallbackFixup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureInfo* (::System::Resources::ManifestBasedResourceGroveler::*)(::System::Globalization::CultureInfo*)>(
    &::System::Resources::ManifestBasedResourceGroveler::UltimateFallbackFixup)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5b73848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ManifestBasedResourceGroveler*>(),
                                                                                           { "UltimateFallbackFixup", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ManifestBasedResourceGroveler.GetNeutralResourcesLanguage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureInfo* (*)(::System::Reflection::Assembly*, ::by_ref<::System::Resources::UltimateResourceFallbackLocation>)>(
    &::System::Resources::ManifestBasedResourceGroveler::GetNeutralResourcesLanguage)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x5b74bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Resources::ManifestBasedResourceGroveler*>(),
            { "GetNeutralResourcesLanguage", {}, { ::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<::by_ref<::System::Resources::UltimateResourceFallbackLocation>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ManifestBasedResourceGroveler.CreateResourceSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Resources::ResourceSet* (
    ::System::Resources::ManifestBasedResourceGroveler::*)(::System::IO::Stream*, ::System::Reflection::Assembly*)>(&::System::Resources::ManifestBasedResourceGroveler::CreateResourceSet)> {
  constexpr static std::size_t size = 0x910;
  constexpr static std::size_t addrs = 0x5b73fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ManifestBasedResourceGroveler*>(),
                                                             { "CreateResourceSet", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Reflection::Assembly*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ManifestBasedResourceGroveler.GetManifestResourceStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IO::Stream* (::System::Resources::ManifestBasedResourceGroveler::*)(::System::Reflection::RuntimeAssembly*, ::StringW, ::by_ref<::System::Threading::StackCrawlMark>)>(
        &::System::Resources::ManifestBasedResourceGroveler::GetManifestResourceStream)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5b73f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Resources::ManifestBasedResourceGroveler*>(),
                            { "GetManifestResourceStream",
                              {},
                              { ::i2c::type_of<::System::Reflection::RuntimeAssembly*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ManifestBasedResourceGroveler.CaseInsensitiveManifestResourceStreamLookup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::System::Resources::ManifestBasedResourceGroveler::*)(::System::Reflection::RuntimeAssembly*, ::StringW)>(
    &::System::Resources::ManifestBasedResourceGroveler::CaseInsensitiveManifestResourceStreamLookup)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x5b750a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ManifestBasedResourceGroveler*>(),
                                                { "CaseInsensitiveManifestResourceStreamLookup", {}, { ::i2c::type_of<::System::Reflection::RuntimeAssembly*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ManifestBasedResourceGroveler.GetSatelliteAssembly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Reflection::RuntimeAssembly* (::System::Resources::ManifestBasedResourceGroveler::*)(::System::Globalization::CultureInfo*, ::by_ref<::System::Threading::StackCrawlMark>)>(
        &::System::Resources::ManifestBasedResourceGroveler::GetSatelliteAssembly)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5b739f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Resources::ManifestBasedResourceGroveler*>(),
                            { "GetSatelliteAssembly", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ManifestBasedResourceGroveler.CanUseDefaultResourceClasses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Resources::ManifestBasedResourceGroveler::*)(::StringW, ::StringW)>(
    &::System::Resources::ManifestBasedResourceGroveler::CanUseDefaultResourceClasses)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5b74f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ManifestBasedResourceGroveler*>(),
                                                                                           { "CanUseDefaultResourceClasses", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ManifestBasedResourceGroveler.GetSatelliteAssemblyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Resources::ManifestBasedResourceGroveler::*)()>(
    &::System::Resources::ManifestBasedResourceGroveler::GetSatelliteAssemblyName)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b754a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ManifestBasedResourceGroveler*>(), { "GetSatelliteAssemblyName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ManifestBasedResourceGroveler.HandleSatelliteMissing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Resources::ManifestBasedResourceGroveler::*)()>(&::System::Resources::ManifestBasedResourceGroveler::HandleSatelliteMissing)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x5b73b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ManifestBasedResourceGroveler*>(), { "HandleSatelliteMissing", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ManifestBasedResourceGroveler.HandleResourceStreamMissing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Resources::ManifestBasedResourceGroveler::*)(::StringW)>(
    &::System::Resources::ManifestBasedResourceGroveler::HandleResourceStreamMissing)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x5b748f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ManifestBasedResourceGroveler*>(), { "HandleResourceStreamMissing", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ManifestBasedResourceGroveler.GetNeutralResourcesLanguageAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::Assembly*, ::by_ref<::StringW>, ::by_ref<int16_t>)>(
    &::System::Resources::ManifestBasedResourceGroveler::GetNeutralResourcesLanguageAttribute)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b74ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Resources::ManifestBasedResourceGroveler*>(),
            { "GetNeutralResourcesLanguageAttribute", {}, { ::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<int16_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Resources::ResourceManager_ResourceManagerMediator*& System::Resources::ManifestBasedResourceGroveler::__cordl_internal_get__mediator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mediator;
}
constexpr ::System::Resources::ResourceManager_ResourceManagerMediator* const& System::Resources::ManifestBasedResourceGroveler::__cordl_internal_get__mediator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mediator;
}
constexpr void System::Resources::ManifestBasedResourceGroveler::__cordl_internal_set__mediator(::System::Resources::ResourceManager_ResourceManagerMediator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mediator = value;
}
inline void System::Resources::ManifestBasedResourceGroveler::_ctor(::System::Resources::ResourceManager_ResourceManagerMediator* mediator) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ManifestBasedResourceGroveler*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Resources::ResourceManager_ResourceManagerMediator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mediator);
}
inline ::System::Resources::ResourceSet*
System::Resources::ManifestBasedResourceGroveler::GrovelForResourceSet(::System::Globalization::CultureInfo* culture,
                                                                       ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>* localResourceSets, bool tryParents,
                                                                       bool createIfNotExists, ::by_ref<::System::Threading::StackCrawlMark> stackMark) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Resources::ManifestBasedResourceGroveler*>(),
                          { "GrovelForResourceSet",
                            {},
                            { ::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>*>(),
                              ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Resources::ResourceSet*>(this, ___internal_method, culture, localResourceSets, tryParents, createIfNotExists, stackMark);
}
inline ::System::Globalization::CultureInfo* System::Resources::ManifestBasedResourceGroveler::UltimateFallbackFixup(::System::Globalization::CultureInfo* lookForCulture) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ManifestBasedResourceGroveler*>(),
                                                                                         { "UltimateFallbackFixup", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*>(this, ___internal_method, lookForCulture);
}
inline ::System::Globalization::CultureInfo*
System::Resources::ManifestBasedResourceGroveler::GetNeutralResourcesLanguage(::System::Reflection::Assembly* a, ::by_ref<::System::Resources::UltimateResourceFallbackLocation> fallbackLocation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Resources::ManifestBasedResourceGroveler*>(),
          { "GetNeutralResourcesLanguage", {}, { ::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<::by_ref<::System::Resources::UltimateResourceFallbackLocation>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*>(nullptr, ___internal_method, a, fallbackLocation);
}
inline ::System::Resources::ResourceSet* System::Resources::ManifestBasedResourceGroveler::CreateResourceSet(::System::IO::Stream* store, ::System::Reflection::Assembly* assembly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ManifestBasedResourceGroveler*>(),
                                                           { "CreateResourceSet", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Reflection::Assembly*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Resources::ResourceSet*>(this, ___internal_method, store, assembly);
}
inline ::System::IO::Stream* System::Resources::ManifestBasedResourceGroveler::GetManifestResourceStream(::System::Reflection::RuntimeAssembly* satellite, ::StringW fileName,
                                                                                                         ::by_ref<::System::Threading::StackCrawlMark> stackMark) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Resources::ManifestBasedResourceGroveler*>(),
                          { "GetManifestResourceStream",
                            {},
                            { ::i2c::type_of<::System::Reflection::RuntimeAssembly*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, satellite, fileName, stackMark);
}
inline ::System::IO::Stream* System::Resources::ManifestBasedResourceGroveler::CaseInsensitiveManifestResourceStreamLookup(::System::Reflection::RuntimeAssembly* satellite, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ManifestBasedResourceGroveler*>(),
                                              { "CaseInsensitiveManifestResourceStreamLookup", {}, { ::i2c::type_of<::System::Reflection::RuntimeAssembly*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, satellite, name);
}
inline ::System::Reflection::RuntimeAssembly* System::Resources::ManifestBasedResourceGroveler::GetSatelliteAssembly(::System::Globalization::CultureInfo* lookForCulture,
                                                                                                                     ::by_ref<::System::Threading::StackCrawlMark> stackMark) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Resources::ManifestBasedResourceGroveler*>(),
                                       { "GetSatelliteAssembly", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::RuntimeAssembly*>(this, ___internal_method, lookForCulture, stackMark);
}
inline bool System::Resources::ManifestBasedResourceGroveler::CanUseDefaultResourceClasses(::StringW readerTypeName, ::StringW resSetTypeName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ManifestBasedResourceGroveler*>(),
                                                                                         { "CanUseDefaultResourceClasses", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, readerTypeName, resSetTypeName);
}
inline ::StringW System::Resources::ManifestBasedResourceGroveler::GetSatelliteAssemblyName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ManifestBasedResourceGroveler*>(), { "GetSatelliteAssemblyName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Resources::ManifestBasedResourceGroveler::HandleSatelliteMissing() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ManifestBasedResourceGroveler*>(), { "HandleSatelliteMissing", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Resources::ManifestBasedResourceGroveler::HandleResourceStreamMissing(::StringW fileName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ManifestBasedResourceGroveler*>(), { "HandleResourceStreamMissing", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fileName);
}
inline bool System::Resources::ManifestBasedResourceGroveler::GetNeutralResourcesLanguageAttribute(::System::Reflection::Assembly* assembly, ::by_ref<::StringW> cultureName,
                                                                                                   ::by_ref<int16_t> fallbackLocation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Resources::ManifestBasedResourceGroveler*>(),
          { "GetNeutralResourcesLanguageAttribute", {}, { ::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<int16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, assembly, cultureName, fallbackLocation);
}
inline ::System::Resources::ManifestBasedResourceGroveler* System::Resources::ManifestBasedResourceGroveler::New_ctor(::System::Resources::ResourceManager_ResourceManagerMediator* mediator) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Resources::ManifestBasedResourceGroveler*>(mediator));
}
/// @brief Convert operator to "::System::Resources::IResourceGroveler"
constexpr System::Resources::ManifestBasedResourceGroveler::operator ::System::Resources::IResourceGroveler*() noexcept {
  return static_cast<::System::Resources::IResourceGroveler*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Resources::IResourceGroveler"
constexpr ::System::Resources::IResourceGroveler* System::Resources::ManifestBasedResourceGroveler::i___System__Resources__IResourceGroveler() noexcept {
  return static_cast<::System::Resources::IResourceGroveler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Resources::ManifestBasedResourceGroveler::ManifestBasedResourceGroveler() {}
