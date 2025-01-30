#pragma once
// IWYU pragma private; include "System/Resources/NeutralResourcesLanguageAttribute.hpp"
#include "System/Resources/zzzz__UltimateResourceFallbackLocation_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Resources/zzzz__NeutralResourcesLanguageAttribute_def.hpp"
#include "System/Resources/zzzz__UltimateResourceFallbackLocation_def.hpp"
//  Writing Method size for method: ::System::Resources::NeutralResourcesLanguageAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::NeutralResourcesLanguageAttribute::*)(::StringW)>(
    &::System::Resources::NeutralResourcesLanguageAttribute::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3d1cd5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::NeutralResourcesLanguageAttribute*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::NeutralResourcesLanguageAttribute.get_CultureName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Resources::NeutralResourcesLanguageAttribute::*)()>(
    &::System::Resources::NeutralResourcesLanguageAttribute::get_CultureName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d1cdd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::NeutralResourcesLanguageAttribute*>::get(),
                                                                               "get_CultureName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::NeutralResourcesLanguageAttribute.get_Location
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Resources::UltimateResourceFallbackLocation (::System::Resources::NeutralResourcesLanguageAttribute::*)()>(
    &::System::Resources::NeutralResourcesLanguageAttribute::get_Location)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d1cddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::NeutralResourcesLanguageAttribute*>::get(),
                                                                               "get_Location", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Resources::NeutralResourcesLanguageAttribute::__cordl_internal_get__CultureName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CultureName_k__BackingField;
}
constexpr ::StringW const& System::Resources::NeutralResourcesLanguageAttribute::__cordl_internal_get__CultureName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CultureName_k__BackingField;
}
constexpr void System::Resources::NeutralResourcesLanguageAttribute::__cordl_internal_set__CultureName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____CultureName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Resources::UltimateResourceFallbackLocation& System::Resources::NeutralResourcesLanguageAttribute::__cordl_internal_get__Location_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Location_k__BackingField;
}
constexpr ::System::Resources::UltimateResourceFallbackLocation const& System::Resources::NeutralResourcesLanguageAttribute::__cordl_internal_get__Location_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Location_k__BackingField;
}
constexpr void System::Resources::NeutralResourcesLanguageAttribute::__cordl_internal_set__Location_k__BackingField(::System::Resources::UltimateResourceFallbackLocation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Location_k__BackingField = value;
}
inline void System::Resources::NeutralResourcesLanguageAttribute::_ctor(::StringW cultureName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::NeutralResourcesLanguageAttribute*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cultureName);
}
inline ::StringW System::Resources::NeutralResourcesLanguageAttribute::get_CultureName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::NeutralResourcesLanguageAttribute*>::get(),
                                                                             "get_CultureName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Resources::UltimateResourceFallbackLocation System::Resources::NeutralResourcesLanguageAttribute::get_Location() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::NeutralResourcesLanguageAttribute*>::get(),
                                                                             "get_Location", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Resources::UltimateResourceFallbackLocation, false>(this, ___internal_method);
}
inline ::System::Resources::NeutralResourcesLanguageAttribute* System::Resources::NeutralResourcesLanguageAttribute::New_ctor(::StringW cultureName) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Resources::NeutralResourcesLanguageAttribute*>(cultureName));
}
// Ctor Parameters []
constexpr ::System::Resources::NeutralResourcesLanguageAttribute::NeutralResourcesLanguageAttribute() {}
