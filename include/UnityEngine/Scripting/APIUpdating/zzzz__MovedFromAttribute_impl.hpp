#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Scripting/APIUpdating/zzzz__MovedFromAttributeData_impl.hpp"
#include "UnityEngine/Scripting/APIUpdating/zzzz__MovedFromAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Scripting::APIUpdating::MovedFromAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Scripting::APIUpdating::MovedFromAttribute::*)(bool, ::StringW, ::StringW, ::StringW)>(
    &::UnityEngine::Scripting::APIUpdating::MovedFromAttribute::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2ce9dd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Scripting::APIUpdating::MovedFromAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Scripting::APIUpdating::MovedFromAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Scripting::APIUpdating::MovedFromAttribute::*)(::StringW)>(
    &::UnityEngine::Scripting::APIUpdating::MovedFromAttribute::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ce9e40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Scripting::APIUpdating::MovedFromAttribute*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Scripting::APIUpdating::MovedFromAttributeData& UnityEngine::Scripting::APIUpdating::MovedFromAttribute::__get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::UnityEngine::Scripting::APIUpdating::MovedFromAttributeData const& UnityEngine::Scripting::APIUpdating::MovedFromAttribute::__get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void UnityEngine::Scripting::APIUpdating::MovedFromAttribute::__set_data(::UnityEngine::Scripting::APIUpdating::MovedFromAttributeData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
/// @param sourceNamespace: ::StringW (default: nullptr)
/// @param sourceAssembly: ::StringW (default: nullptr)
/// @param sourceClassName: ::StringW (default: nullptr)
inline ::UnityEngine::Scripting::APIUpdating::MovedFromAttribute* UnityEngine::Scripting::APIUpdating::MovedFromAttribute::New_ctor(bool autoUpdateAPI, ::StringW sourceNamespace,
                                                                                                                                    ::StringW sourceAssembly, ::StringW sourceClassName) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Scripting::APIUpdating::MovedFromAttribute*>(autoUpdateAPI, sourceNamespace, sourceAssembly, sourceClassName));
}
/// @param sourceNamespace: ::StringW (default: nullptr)
/// @param sourceAssembly: ::StringW (default: nullptr)
/// @param sourceClassName: ::StringW (default: nullptr)
inline void UnityEngine::Scripting::APIUpdating::MovedFromAttribute::_ctor(bool autoUpdateAPI, ::StringW sourceNamespace, ::StringW sourceAssembly, ::StringW sourceClassName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Scripting::APIUpdating::MovedFromAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, autoUpdateAPI, sourceNamespace, sourceAssembly, sourceClassName);
}
inline ::UnityEngine::Scripting::APIUpdating::MovedFromAttribute* UnityEngine::Scripting::APIUpdating::MovedFromAttribute::New_ctor(::StringW sourceNamespace) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Scripting::APIUpdating::MovedFromAttribute*>(sourceNamespace));
}
inline void UnityEngine::Scripting::APIUpdating::MovedFromAttribute::_ctor(::StringW sourceNamespace) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Scripting::APIUpdating::MovedFromAttribute*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sourceNamespace);
}
// Ctor Parameters []
constexpr ::UnityEngine::Scripting::APIUpdating::MovedFromAttribute::MovedFromAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
