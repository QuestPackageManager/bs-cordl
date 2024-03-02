#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Resources/zzzz__ManifestBasedResourceGroveler_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Resources/zzzz__IResourceGroveler_def.hpp"
#include "System/Resources/zzzz__ResourceManager_def.hpp"
#include "System/Resources/zzzz__UltimateResourceFallbackLocation_def.hpp"
//  Writing Method size for method: ::System::Resources::ManifestBasedResourceGroveler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::ManifestBasedResourceGroveler::*)(
    ::System::Resources::__ResourceManager__ResourceManagerMediator*)>(&::System::Resources::ManifestBasedResourceGroveler::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25d1cf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ManifestBasedResourceGroveler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Resources::__ResourceManager__ResourceManagerMediator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ManifestBasedResourceGroveler.GetNeutralResourcesLanguage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Globalization::CultureInfo* (*)(::System::Reflection::Assembly*, ByRef<::System::Resources::UltimateResourceFallbackLocation>)>(
        &::System::Resources::ManifestBasedResourceGroveler::GetNeutralResourcesLanguage)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x25d1d20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ManifestBasedResourceGroveler*>::get(), "GetNeutralResourcesLanguage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Resources::UltimateResourceFallbackLocation>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ManifestBasedResourceGroveler.GetNeutralResourcesLanguageAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Reflection::Assembly*, ByRef<::StringW>, ByRef<int16_t>)>(
    &::System::Resources::ManifestBasedResourceGroveler::GetNeutralResourcesLanguageAttribute)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x25d2040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ManifestBasedResourceGroveler*>::get(),
                                                 "GetNeutralResourcesLanguageAttribute", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int16_t>>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Resources::IResourceGroveler"
constexpr System::Resources::ManifestBasedResourceGroveler::operator ::System::Resources::IResourceGroveler*() noexcept {
  return static_cast<::System::Resources::IResourceGroveler*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Resources::IResourceGroveler"
constexpr ::System::Resources::IResourceGroveler* System::Resources::ManifestBasedResourceGroveler::i___System__Resources__IResourceGroveler() noexcept {
  return static_cast<::System::Resources::IResourceGroveler*>(static_cast<void*>(this));
}
constexpr ::System::Resources::__ResourceManager__ResourceManagerMediator*& System::Resources::ManifestBasedResourceGroveler::__cordl_internal_get__mediator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mediator;
}
constexpr ::cordl_internals::to_const_pointer<::System::Resources::__ResourceManager__ResourceManagerMediator*> const&
System::Resources::ManifestBasedResourceGroveler::__cordl_internal_get__mediator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mediator;
}
constexpr void System::Resources::ManifestBasedResourceGroveler::__cordl_internal_set__mediator(::System::Resources::__ResourceManager__ResourceManagerMediator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mediator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Resources::ManifestBasedResourceGroveler* System::Resources::ManifestBasedResourceGroveler::New_ctor(::System::Resources::__ResourceManager__ResourceManagerMediator* mediator) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Resources::ManifestBasedResourceGroveler*>(mediator));
}
inline void System::Resources::ManifestBasedResourceGroveler::_ctor(::System::Resources::__ResourceManager__ResourceManagerMediator* mediator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ManifestBasedResourceGroveler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Resources::__ResourceManager__ResourceManagerMediator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mediator);
}
inline ::System::Globalization::CultureInfo*
System::Resources::ManifestBasedResourceGroveler::GetNeutralResourcesLanguage(::System::Reflection::Assembly* a, ByRef<::System::Resources::UltimateResourceFallbackLocation> fallbackLocation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ManifestBasedResourceGroveler*>::get(), "GetNeutralResourcesLanguage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Resources::UltimateResourceFallbackLocation>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*, false>(nullptr, ___internal_method, a, fallbackLocation);
}
inline bool System::Resources::ManifestBasedResourceGroveler::GetNeutralResourcesLanguageAttribute(::System::Reflection::Assembly* assembly, ByRef<::StringW> cultureName,
                                                                                                   ByRef<int16_t> fallbackLocation) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ManifestBasedResourceGroveler*>::get(),
                                               "GetNeutralResourcesLanguageAttribute", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int16_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, assembly, cultureName, fallbackLocation);
}
// Ctor Parameters []
constexpr ::System::Resources::ManifestBasedResourceGroveler::ManifestBasedResourceGroveler() {}
