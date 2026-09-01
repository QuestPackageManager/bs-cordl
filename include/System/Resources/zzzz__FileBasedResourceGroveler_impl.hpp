#pragma once
// IWYU pragma private; include "System\Resources\FileBasedResourceGroveler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Resources/zzzz__FileBasedResourceGroveler_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Resources/zzzz__IResourceGroveler_def.hpp"
#include "System/Resources/zzzz__ResourceManager_def.hpp"
#include "System/Resources/zzzz__ResourceSet_def.hpp"
#include "System/Threading/zzzz__StackCrawlMark_def.hpp"
//  Writing Method size for method: ::System::Resources::FileBasedResourceGroveler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Resources::FileBasedResourceGroveler::*)(::System::Resources::ResourceManager_ResourceManagerMediator*)>(
    &::System::Resources::FileBasedResourceGroveler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b75248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::FileBasedResourceGroveler*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Resources::ResourceManager_ResourceManagerMediator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::FileBasedResourceGroveler.GrovelForResourceSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Resources::ResourceSet* (
    ::System::Resources::FileBasedResourceGroveler::*)(::System::Globalization::CultureInfo*, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>*, bool, bool,
                                                       ::by_ref<::System::Threading::StackCrawlMark>)>(&::System::Resources::FileBasedResourceGroveler::GrovelForResourceSet)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x5b75250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Resources::FileBasedResourceGroveler*>(),
                            { "GrovelForResourceSet",
                              {},
                              { ::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>*>(),
                                ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::FileBasedResourceGroveler.FindResourceFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Resources::FileBasedResourceGroveler::*)(::System::Globalization::CultureInfo*, ::StringW)>(
    &::System::Resources::FileBasedResourceGroveler::FindResourceFile)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5b754b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::FileBasedResourceGroveler*>(),
                                                             { "FindResourceFile", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::FileBasedResourceGroveler.CreateResourceSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Resources::ResourceSet* (::System::Resources::FileBasedResourceGroveler::*)(::StringW)>(
    &::System::Resources::FileBasedResourceGroveler::CreateResourceSet)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x5b75594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::FileBasedResourceGroveler*>(), { "CreateResourceSet", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Resources::ResourceManager_ResourceManagerMediator*& System::Resources::FileBasedResourceGroveler::__cordl_internal_get__mediator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mediator;
}
constexpr ::System::Resources::ResourceManager_ResourceManagerMediator* const& System::Resources::FileBasedResourceGroveler::__cordl_internal_get__mediator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mediator;
}
constexpr void System::Resources::FileBasedResourceGroveler::__cordl_internal_set__mediator(::System::Resources::ResourceManager_ResourceManagerMediator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mediator = value;
}
inline void System::Resources::FileBasedResourceGroveler::_ctor(::System::Resources::ResourceManager_ResourceManagerMediator* mediator) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::FileBasedResourceGroveler*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Resources::ResourceManager_ResourceManagerMediator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mediator);
}
inline ::System::Resources::ResourceSet*
System::Resources::FileBasedResourceGroveler::GrovelForResourceSet(::System::Globalization::CultureInfo* culture,
                                                                   ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>* localResourceSets, bool tryParents,
                                                                   bool createIfNotExists, ::by_ref<::System::Threading::StackCrawlMark> stackMark) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Resources::FileBasedResourceGroveler*>(),
                          { "GrovelForResourceSet",
                            {},
                            { ::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>*>(),
                              ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Resources::ResourceSet*>(this, ___internal_method, culture, localResourceSets, tryParents, createIfNotExists, stackMark);
}
inline ::StringW System::Resources::FileBasedResourceGroveler::FindResourceFile(::System::Globalization::CultureInfo* culture, ::StringW fileName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::FileBasedResourceGroveler*>(),
                                                           { "FindResourceFile", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, culture, fileName);
}
inline ::System::Resources::ResourceSet* System::Resources::FileBasedResourceGroveler::CreateResourceSet(::StringW file) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::FileBasedResourceGroveler*>(), { "CreateResourceSet", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Resources::ResourceSet*>(this, ___internal_method, file);
}
inline ::System::Resources::FileBasedResourceGroveler* System::Resources::FileBasedResourceGroveler::New_ctor(::System::Resources::ResourceManager_ResourceManagerMediator* mediator) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Resources::FileBasedResourceGroveler*>(mediator));
}
/// @brief Convert operator to "::System::Resources::IResourceGroveler"
constexpr System::Resources::FileBasedResourceGroveler::operator ::System::Resources::IResourceGroveler*() noexcept {
  return static_cast<::System::Resources::IResourceGroveler*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Resources::IResourceGroveler"
constexpr ::System::Resources::IResourceGroveler* System::Resources::FileBasedResourceGroveler::i___System__Resources__IResourceGroveler() noexcept {
  return static_cast<::System::Resources::IResourceGroveler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Resources::FileBasedResourceGroveler::FileBasedResourceGroveler() {}
