#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TextMeshProAutosizeGroup_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TextMeshProAutosizeGroup.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextMeshProAutosizeGroup::*)()>(&::GlobalNamespace::TextMeshProAutosizeGroup::Start)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2115e44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextMeshProAutosizeGroup*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextMeshProAutosizeGroup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextMeshProAutosizeGroup::*)()>(&::GlobalNamespace::TextMeshProAutosizeGroup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2115f4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextMeshProAutosizeGroup*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::TMPro::TMP_Text*, ::Array<::TMPro::TMP_Text*>*>& GlobalNamespace::TextMeshProAutosizeGroup::__get__texts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____texts;
}
constexpr ::ArrayW<::TMPro::TMP_Text*, ::Array<::TMPro::TMP_Text*>*> const& GlobalNamespace::TextMeshProAutosizeGroup::__get__texts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____texts;
}
constexpr void GlobalNamespace::TextMeshProAutosizeGroup::__set__texts(::ArrayW<::TMPro::TMP_Text*, ::Array<::TMPro::TMP_Text*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____texts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::TextMeshProAutosizeGroup::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextMeshProAutosizeGroup*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::TextMeshProAutosizeGroup* GlobalNamespace::TextMeshProAutosizeGroup::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::TextMeshProAutosizeGroup*>());
}
inline void GlobalNamespace::TextMeshProAutosizeGroup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextMeshProAutosizeGroup*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextMeshProAutosizeGroup::TextMeshProAutosizeGroup() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
