#pragma once
// IWYU pragma private; include "System/Resources/FileBasedResourceGroveler.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Resources::FileBasedResourceGroveler::*)(::System::Resources::ResourceManager_ResourceManagerMediator*)>(&::System::Resources::FileBasedResourceGroveler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59c5288;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::FileBasedResourceGroveler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Resources::ResourceManager_ResourceManagerMediator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::FileBasedResourceGroveler.GrovelForResourceSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Resources::ResourceSet* (
    ::System::Resources::FileBasedResourceGroveler::*)(::System::Globalization::CultureInfo*, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>*, bool, bool,
                                                       ::ByRef<::System::Threading::StackCrawlMark>)>(&::System::Resources::FileBasedResourceGroveler::GrovelForResourceSet)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x59c5290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::FileBasedResourceGroveler*>::get(), "GrovelForResourceSet", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Threading::StackCrawlMark>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::FileBasedResourceGroveler.FindResourceFile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Resources::FileBasedResourceGroveler::*)(::System::Globalization::CultureInfo*, ::StringW)>(
    &::System::Resources::FileBasedResourceGroveler::FindResourceFile)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x59c54f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::FileBasedResourceGroveler*>::get(), "FindResourceFile", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::FileBasedResourceGroveler.CreateResourceSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Resources::ResourceSet* (::System::Resources::FileBasedResourceGroveler::*)(::StringW)>(
    &::System::Resources::FileBasedResourceGroveler::CreateResourceSet)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x59c55d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::FileBasedResourceGroveler*>::get(), "CreateResourceSet",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mediator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Resources::FileBasedResourceGroveler::_ctor(::System::Resources::ResourceManager_ResourceManagerMediator* mediator) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::FileBasedResourceGroveler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Resources::ResourceManager_ResourceManagerMediator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mediator);
}
inline ::System::Resources::ResourceSet*
System::Resources::FileBasedResourceGroveler::GrovelForResourceSet(::System::Globalization::CultureInfo* culture,
                                                                   ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>* localResourceSets, bool tryParents,
                                                                   bool createIfNotExists, ::ByRef<::System::Threading::StackCrawlMark> stackMark) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::FileBasedResourceGroveler*>::get(), "GrovelForResourceSet", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Threading::StackCrawlMark>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Resources::ResourceSet*, false>(this, ___internal_method, culture, localResourceSets, tryParents, createIfNotExists, stackMark);
}
inline ::StringW System::Resources::FileBasedResourceGroveler::FindResourceFile(::System::Globalization::CultureInfo* culture, ::StringW fileName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::FileBasedResourceGroveler*>::get(), "FindResourceFile", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, culture, fileName);
}
inline ::System::Resources::ResourceSet* System::Resources::FileBasedResourceGroveler::CreateResourceSet(::StringW file) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::FileBasedResourceGroveler*>::get(), "CreateResourceSet",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Resources::ResourceSet*, false>(this, ___internal_method, file);
}
inline ::System::Resources::FileBasedResourceGroveler* System::Resources::FileBasedResourceGroveler::New_ctor(::System::Resources::ResourceManager_ResourceManagerMediator* mediator) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Resources::FileBasedResourceGroveler*>(mediator));
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
