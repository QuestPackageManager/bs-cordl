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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::ManifestBasedResourceGroveler::*)(
    ::System::Resources::ResourceManager_ResourceManagerMediator*)>(&::System::Resources::ManifestBasedResourceGroveler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59c58cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ManifestBasedResourceGroveler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Resources::ResourceManager_ResourceManagerMediator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ManifestBasedResourceGroveler.GrovelForResourceSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Resources::ResourceSet* (
    ::System::Resources::ManifestBasedResourceGroveler::*)(::System::Globalization::CultureInfo*, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>*, bool,
                                                           bool, ::ByRef<::System::Threading::StackCrawlMark>)>(&::System::Resources::ManifestBasedResourceGroveler::GrovelForResourceSet)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x59c58d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ManifestBasedResourceGroveler*>::get(), "GrovelForResourceSet", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Threading::StackCrawlMark>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ManifestBasedResourceGroveler.UltimateFallbackFixup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CultureInfo* (
    ::System::Resources::ManifestBasedResourceGroveler::*)(::System::Globalization::CultureInfo*)>(&::System::Resources::ManifestBasedResourceGroveler::UltimateFallbackFixup)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x59c5b88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ManifestBasedResourceGroveler*>::get(), "UltimateFallbackFixup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ManifestBasedResourceGroveler.GetNeutralResourcesLanguage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Globalization::CultureInfo* (*)(::System::Reflection::Assembly*, ::ByRef<::System::Resources::UltimateResourceFallbackLocation>)>(
        &::System::Resources::ManifestBasedResourceGroveler::GetNeutralResourcesLanguage)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x59c6efc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ManifestBasedResourceGroveler*>::get(), "GetNeutralResourcesLanguage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Resources::UltimateResourceFallbackLocation>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ManifestBasedResourceGroveler.CreateResourceSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Resources::ResourceSet* (
    ::System::Resources::ManifestBasedResourceGroveler::*)(::System::IO::Stream*, ::System::Reflection::Assembly*)>(&::System::Resources::ManifestBasedResourceGroveler::CreateResourceSet)> {
  constexpr static std::size_t size = 0x910;
  constexpr static std::size_t addrs = 0x59c6328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ManifestBasedResourceGroveler*>::get(), "CreateResourceSet", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ManifestBasedResourceGroveler.GetManifestResourceStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IO::Stream* (::System::Resources::ManifestBasedResourceGroveler::*)(::System::Reflection::RuntimeAssembly*, ::StringW, ::ByRef<::System::Threading::StackCrawlMark>)>(
        &::System::Resources::ManifestBasedResourceGroveler::GetManifestResourceStream)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x59c625c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ManifestBasedResourceGroveler*>::get(), "GetManifestResourceStream", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::RuntimeAssembly*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Threading::StackCrawlMark>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ManifestBasedResourceGroveler.CaseInsensitiveManifestResourceStreamLookup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IO::Stream* (::System::Resources::ManifestBasedResourceGroveler::*)(::System::Reflection::RuntimeAssembly*, ::StringW)>(
        &::System::Resources::ManifestBasedResourceGroveler::CaseInsensitiveManifestResourceStreamLookup)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x59c73e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ManifestBasedResourceGroveler*>::get(),
                                                 "CaseInsensitiveManifestResourceStreamLookup", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::RuntimeAssembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ManifestBasedResourceGroveler.GetSatelliteAssembly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Reflection::RuntimeAssembly* (::System::Resources::ManifestBasedResourceGroveler::*)(::System::Globalization::CultureInfo*, ::ByRef<::System::Threading::StackCrawlMark>)>(
        &::System::Resources::ManifestBasedResourceGroveler::GetSatelliteAssembly)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x59c5d38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ManifestBasedResourceGroveler*>::get(), "GetSatelliteAssembly", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Threading::StackCrawlMark>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ManifestBasedResourceGroveler.CanUseDefaultResourceClasses
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Resources::ManifestBasedResourceGroveler::*)(::StringW, ::StringW)>(
    &::System::Resources::ManifestBasedResourceGroveler::CanUseDefaultResourceClasses)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x59c728c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ManifestBasedResourceGroveler*>::get(), "CanUseDefaultResourceClasses", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ManifestBasedResourceGroveler.GetSatelliteAssemblyName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Resources::ManifestBasedResourceGroveler::*)()>(
    &::System::Resources::ManifestBasedResourceGroveler::GetSatelliteAssemblyName)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x59c77e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ManifestBasedResourceGroveler*>::get(),
                                                                               "GetSatelliteAssemblyName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ManifestBasedResourceGroveler.HandleSatelliteMissing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::ManifestBasedResourceGroveler::*)()>(
    &::System::Resources::ManifestBasedResourceGroveler::HandleSatelliteMissing)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x59c5eb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ManifestBasedResourceGroveler*>::get(),
                                                                               "HandleSatelliteMissing", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ManifestBasedResourceGroveler.HandleResourceStreamMissing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::ManifestBasedResourceGroveler::*)(::StringW)>(
    &::System::Resources::ManifestBasedResourceGroveler::HandleResourceStreamMissing)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x59c6c38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ManifestBasedResourceGroveler*>::get(), "HandleResourceStreamMissing",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ManifestBasedResourceGroveler.GetNeutralResourcesLanguageAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Reflection::Assembly*, ::ByRef<::StringW>, ::ByRef<int16_t>)>(
    &::System::Resources::ManifestBasedResourceGroveler::GetNeutralResourcesLanguageAttribute)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x59c7210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ManifestBasedResourceGroveler*>::get(),
                                                 "GetNeutralResourcesLanguageAttribute", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int16_t>>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mediator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Resources::ManifestBasedResourceGroveler::_ctor(::System::Resources::ResourceManager_ResourceManagerMediator* mediator) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ManifestBasedResourceGroveler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Resources::ResourceManager_ResourceManagerMediator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mediator);
}
inline ::System::Resources::ResourceSet*
System::Resources::ManifestBasedResourceGroveler::GrovelForResourceSet(::System::Globalization::CultureInfo* culture,
                                                                       ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>* localResourceSets, bool tryParents,
                                                                       bool createIfNotExists, ::ByRef<::System::Threading::StackCrawlMark> stackMark) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ManifestBasedResourceGroveler*>::get(), "GrovelForResourceSet", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Threading::StackCrawlMark>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Resources::ResourceSet*, false>(this, ___internal_method, culture, localResourceSets, tryParents, createIfNotExists, stackMark);
}
inline ::System::Globalization::CultureInfo* System::Resources::ManifestBasedResourceGroveler::UltimateFallbackFixup(::System::Globalization::CultureInfo* lookForCulture) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ManifestBasedResourceGroveler*>::get(), "UltimateFallbackFixup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*, false>(this, ___internal_method, lookForCulture);
}
inline ::System::Globalization::CultureInfo*
System::Resources::ManifestBasedResourceGroveler::GetNeutralResourcesLanguage(::System::Reflection::Assembly* a, ::ByRef<::System::Resources::UltimateResourceFallbackLocation> fallbackLocation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ManifestBasedResourceGroveler*>::get(), "GetNeutralResourcesLanguage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Resources::UltimateResourceFallbackLocation>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*, false>(nullptr, ___internal_method, a, fallbackLocation);
}
inline ::System::Resources::ResourceSet* System::Resources::ManifestBasedResourceGroveler::CreateResourceSet(::System::IO::Stream* store, ::System::Reflection::Assembly* assembly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ManifestBasedResourceGroveler*>::get(), "CreateResourceSet", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Resources::ResourceSet*, false>(this, ___internal_method, store, assembly);
}
inline ::System::IO::Stream* System::Resources::ManifestBasedResourceGroveler::GetManifestResourceStream(::System::Reflection::RuntimeAssembly* satellite, ::StringW fileName,
                                                                                                         ::ByRef<::System::Threading::StackCrawlMark> stackMark) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ManifestBasedResourceGroveler*>::get(), "GetManifestResourceStream", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::RuntimeAssembly*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Threading::StackCrawlMark>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method, satellite, fileName, stackMark);
}
inline ::System::IO::Stream* System::Resources::ManifestBasedResourceGroveler::CaseInsensitiveManifestResourceStreamLookup(::System::Reflection::RuntimeAssembly* satellite, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ManifestBasedResourceGroveler*>::get(),
                                               "CaseInsensitiveManifestResourceStreamLookup", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::RuntimeAssembly*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method, satellite, name);
}
inline ::System::Reflection::RuntimeAssembly* System::Resources::ManifestBasedResourceGroveler::GetSatelliteAssembly(::System::Globalization::CultureInfo* lookForCulture,
                                                                                                                     ::ByRef<::System::Threading::StackCrawlMark> stackMark) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ManifestBasedResourceGroveler*>::get(), "GetSatelliteAssembly", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Threading::StackCrawlMark>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::RuntimeAssembly*, false>(this, ___internal_method, lookForCulture, stackMark);
}
inline bool System::Resources::ManifestBasedResourceGroveler::CanUseDefaultResourceClasses(::StringW readerTypeName, ::StringW resSetTypeName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ManifestBasedResourceGroveler*>::get(), "CanUseDefaultResourceClasses", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, readerTypeName, resSetTypeName);
}
inline ::StringW System::Resources::ManifestBasedResourceGroveler::GetSatelliteAssemblyName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ManifestBasedResourceGroveler*>::get(),
                                                                             "GetSatelliteAssemblyName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Resources::ManifestBasedResourceGroveler::HandleSatelliteMissing() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ManifestBasedResourceGroveler*>::get(),
                                                                             "HandleSatelliteMissing", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Resources::ManifestBasedResourceGroveler::HandleResourceStreamMissing(::StringW fileName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ManifestBasedResourceGroveler*>::get(), "HandleResourceStreamMissing",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fileName);
}
inline bool System::Resources::ManifestBasedResourceGroveler::GetNeutralResourcesLanguageAttribute(::System::Reflection::Assembly* assembly, ::ByRef<::StringW> cultureName,
                                                                                                   ::ByRef<int16_t> fallbackLocation) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ManifestBasedResourceGroveler*>::get(),
                                               "GetNeutralResourcesLanguageAttribute", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int16_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, assembly, cultureName, fallbackLocation);
}
inline ::System::Resources::ManifestBasedResourceGroveler* System::Resources::ManifestBasedResourceGroveler::New_ctor(::System::Resources::ResourceManager_ResourceManagerMediator* mediator) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Resources::ManifestBasedResourceGroveler*>(mediator));
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
