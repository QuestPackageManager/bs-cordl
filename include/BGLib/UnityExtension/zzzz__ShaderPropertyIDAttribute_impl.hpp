#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/ShaderPropertyIDAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "BGLib/UnityExtension/zzzz__ShaderPropertyIDAttribute_def.hpp"
#include "BGLib/UnityExtension/zzzz__ShaderPropertyAttributeFilter_def.hpp"
//  Writing Method size for method: ::BGLib::UnityExtension::ShaderPropertyIDAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::UnityExtension::ShaderPropertyIDAttribute::*)(
    ::StringW, ::BGLib::UnityExtension::ShaderPropertyAttributeFilter_PropType)>(&::BGLib::UnityExtension::ShaderPropertyIDAttribute::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x22b514c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::ShaderPropertyIDAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::UnityExtension::ShaderPropertyAttributeFilter_PropType>::get() })));
    return ___internal_method;
  }
};
constexpr ::BGLib::UnityExtension::ShaderPropertyAttributeFilter*& BGLib::UnityExtension::ShaderPropertyIDAttribute::__cordl_internal_get_filter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___filter;
}
constexpr ::BGLib::UnityExtension::ShaderPropertyAttributeFilter* const& BGLib::UnityExtension::ShaderPropertyIDAttribute::__cordl_internal_get_filter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___filter;
}
constexpr void BGLib::UnityExtension::ShaderPropertyIDAttribute::__cordl_internal_set_filter(::BGLib::UnityExtension::ShaderPropertyAttributeFilter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___filter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BGLib::UnityExtension::ShaderPropertyIDAttribute::_ctor(::StringW nameFilter, ::BGLib::UnityExtension::ShaderPropertyAttributeFilter_PropType filterPropType) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::ShaderPropertyIDAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::UnityExtension::ShaderPropertyAttributeFilter_PropType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nameFilter, filterPropType);
}
inline ::StringW BGLib::UnityExtension::ShaderPropertyIDAttribute::GetTargetName() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::ShaderPropertyIDAttribute*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::BGLib::UnityExtension::ShaderPropertyIDAttribute* BGLib::UnityExtension::ShaderPropertyIDAttribute::New_ctor(::StringW nameFilter,
                                                                                                                      ::BGLib::UnityExtension::ShaderPropertyAttributeFilter_PropType filterPropType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::UnityExtension::ShaderPropertyIDAttribute*>(nameFilter, filterPropType));
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::ShaderPropertyIDAttribute::ShaderPropertyIDAttribute() {}
