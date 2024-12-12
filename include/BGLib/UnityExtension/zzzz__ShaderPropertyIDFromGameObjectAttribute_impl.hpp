#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/ShaderPropertyIDFromGameObjectAttribute.hpp"
#include "BGLib/UnityExtension/zzzz__ShaderPropertyIDAttribute_impl.hpp"
#include "BGLib/UnityExtension/zzzz__ShaderPropertyIDFromGameObjectAttribute_def.hpp"
#include "BGLib/UnityExtension/zzzz__ShaderPropertyAttributeFilter_def.hpp"
//  Writing Method size for method: ::BGLib::UnityExtension::ShaderPropertyIDFromGameObjectAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::UnityExtension::ShaderPropertyIDFromGameObjectAttribute::*)(
    ::StringW, ::BGLib::UnityExtension::ShaderPropertyAttributeFilter_PropType)>(&::BGLib::UnityExtension::ShaderPropertyIDFromGameObjectAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22b51c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::ShaderPropertyIDFromGameObjectAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::UnityExtension::ShaderPropertyAttributeFilter_PropType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::ShaderPropertyIDFromGameObjectAttribute.GetTargetName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BGLib::UnityExtension::ShaderPropertyIDFromGameObjectAttribute::*)()>(
    &::BGLib::UnityExtension::ShaderPropertyIDFromGameObjectAttribute::GetTargetName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x22b51cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::ShaderPropertyIDFromGameObjectAttribute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::ShaderPropertyIDFromGameObjectAttribute*>::get(), 7));
    return ___internal_method;
  }
};
inline void BGLib::UnityExtension::ShaderPropertyIDFromGameObjectAttribute::_ctor(::StringW nameFilter, ::BGLib::UnityExtension::ShaderPropertyAttributeFilter_PropType filterPropType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::ShaderPropertyIDFromGameObjectAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::UnityExtension::ShaderPropertyAttributeFilter_PropType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nameFilter, filterPropType);
}
inline ::StringW BGLib::UnityExtension::ShaderPropertyIDFromGameObjectAttribute::GetTargetName() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::ShaderPropertyIDFromGameObjectAttribute*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::BGLib::UnityExtension::ShaderPropertyIDFromGameObjectAttribute*
BGLib::UnityExtension::ShaderPropertyIDFromGameObjectAttribute::New_ctor(::StringW nameFilter, ::BGLib::UnityExtension::ShaderPropertyAttributeFilter_PropType filterPropType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::UnityExtension::ShaderPropertyIDFromGameObjectAttribute*>(nameFilter, filterPropType));
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::ShaderPropertyIDFromGameObjectAttribute::ShaderPropertyIDFromGameObjectAttribute() {}
