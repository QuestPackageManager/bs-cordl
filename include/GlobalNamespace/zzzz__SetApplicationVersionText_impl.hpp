#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SetApplicationVersionText_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SetApplicationVersionText.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetApplicationVersionText::*)()>(&::GlobalNamespace::SetApplicationVersionText::Start)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x23c32a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetApplicationVersionText*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetApplicationVersionText._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetApplicationVersionText::*)()>(&::GlobalNamespace::SetApplicationVersionText::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c32f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetApplicationVersionText*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::TMPro::TextMeshPro*& GlobalNamespace::SetApplicationVersionText::__get__versionText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____versionText;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshPro*> const& GlobalNamespace::SetApplicationVersionText::__get__versionText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____versionText;
}
constexpr void GlobalNamespace::SetApplicationVersionText::__set__versionText(::TMPro::TextMeshPro* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____versionText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SetApplicationVersionText::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetApplicationVersionText*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SetApplicationVersionText* GlobalNamespace::SetApplicationVersionText::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SetApplicationVersionText*>());
}
inline void GlobalNamespace::SetApplicationVersionText::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetApplicationVersionText*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SetApplicationVersionText::SetApplicationVersionText() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
