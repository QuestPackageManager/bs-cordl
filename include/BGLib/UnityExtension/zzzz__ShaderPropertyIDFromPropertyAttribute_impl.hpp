#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/ShaderPropertyIDFromPropertyAttribute.hpp"
#include "BGLib/UnityExtension/zzzz__ShaderPropertyIDFromRendererAttribute_impl.hpp"
#include "BGLib/UnityExtension/zzzz__ShaderPropertyIDFromPropertyAttribute_def.hpp"
#include "BGLib/UnityExtension/zzzz__ShaderPropertyAttributeFilter_def.hpp"
//  Writing Method size for method: ::BGLib::UnityExtension::ShaderPropertyIDFromPropertyAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::UnityExtension::ShaderPropertyIDFromPropertyAttribute::*)(
    ::StringW, ::StringW, ::StringW, ::BGLib::UnityExtension::ShaderPropertyAttributeFilter_PropType)>(&::BGLib::UnityExtension::ShaderPropertyIDFromPropertyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x22bb990;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::ShaderPropertyIDFromPropertyAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::UnityExtension::ShaderPropertyAttributeFilter_PropType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::ShaderPropertyIDFromPropertyAttribute.GetTargetName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BGLib::UnityExtension::ShaderPropertyIDFromPropertyAttribute::*)()>(
    &::BGLib::UnityExtension::ShaderPropertyIDFromPropertyAttribute::GetTargetName)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x22bb9c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::ShaderPropertyIDFromPropertyAttribute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::ShaderPropertyIDFromPropertyAttribute*>::get(), 7));
    return ___internal_method;
  }
};
constexpr ::StringW& BGLib::UnityExtension::ShaderPropertyIDFromPropertyAttribute::__cordl_internal_get_nestedPropertyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nestedPropertyName;
}
constexpr ::StringW const& BGLib::UnityExtension::ShaderPropertyIDFromPropertyAttribute::__cordl_internal_get_nestedPropertyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nestedPropertyName;
}
constexpr void BGLib::UnityExtension::ShaderPropertyIDFromPropertyAttribute::__cordl_internal_set_nestedPropertyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nestedPropertyName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BGLib::UnityExtension::ShaderPropertyIDFromPropertyAttribute::_ctor(::StringW propertyName, ::StringW nestedPropertyName, ::StringW nameFilter,
                                                                                ::BGLib::UnityExtension::ShaderPropertyAttributeFilter_PropType filterPropType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::ShaderPropertyIDFromPropertyAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::UnityExtension::ShaderPropertyAttributeFilter_PropType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, propertyName, nestedPropertyName, nameFilter, filterPropType);
}
inline ::StringW BGLib::UnityExtension::ShaderPropertyIDFromPropertyAttribute::GetTargetName() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::ShaderPropertyIDFromPropertyAttribute*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::BGLib::UnityExtension::ShaderPropertyIDFromPropertyAttribute*
BGLib::UnityExtension::ShaderPropertyIDFromPropertyAttribute::New_ctor(::StringW propertyName, ::StringW nestedPropertyName, ::StringW nameFilter,
                                                                       ::BGLib::UnityExtension::ShaderPropertyAttributeFilter_PropType filterPropType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::UnityExtension::ShaderPropertyIDFromPropertyAttribute*>(propertyName, nestedPropertyName, nameFilter, filterPropType));
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::ShaderPropertyIDFromPropertyAttribute::ShaderPropertyIDFromPropertyAttribute() {}
