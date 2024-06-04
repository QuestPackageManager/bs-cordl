#pragma once
// IWYU pragma private; include "UnityEngine/AssetFileNameExtensionAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__AssetFileNameExtensionAttribute_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::AssetFileNameExtensionAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AssetFileNameExtensionAttribute::*)(::StringW, ::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::UnityEngine::AssetFileNameExtensionAttribute::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3497a74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AssetFileNameExtensionAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::AssetFileNameExtensionAttribute::__cordl_internal_get__preferredExtension_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preferredExtension_k__BackingField;
}
constexpr ::StringW const& UnityEngine::AssetFileNameExtensionAttribute::__cordl_internal_get__preferredExtension_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preferredExtension_k__BackingField;
}
constexpr void UnityEngine::AssetFileNameExtensionAttribute::__cordl_internal_set__preferredExtension_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____preferredExtension_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>*& UnityEngine::AssetFileNameExtensionAttribute::__cordl_internal_get__otherExtensions_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____otherExtensions_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::StringW>*> const&
UnityEngine::AssetFileNameExtensionAttribute::__cordl_internal_get__otherExtensions_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____otherExtensions_k__BackingField;
}
constexpr void UnityEngine::AssetFileNameExtensionAttribute::__cordl_internal_set__otherExtensions_k__BackingField(::System::Collections::Generic::IEnumerable_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____otherExtensions_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::AssetFileNameExtensionAttribute* UnityEngine::AssetFileNameExtensionAttribute::New_ctor(::StringW preferredExtension, ::ArrayW<::StringW, ::Array<::StringW>*> otherExtensions) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::AssetFileNameExtensionAttribute*>(preferredExtension, otherExtensions));
}
inline void UnityEngine::AssetFileNameExtensionAttribute::_ctor(::StringW preferredExtension, ::ArrayW<::StringW, ::Array<::StringW>*> otherExtensions) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AssetFileNameExtensionAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, preferredExtension, otherExtensions);
}
// Ctor Parameters []
constexpr ::UnityEngine::AssetFileNameExtensionAttribute::AssetFileNameExtensionAttribute() {}
