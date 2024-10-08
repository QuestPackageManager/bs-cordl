#pragma once
// IWYU pragma private; include "GlobalNamespace/TextMeshProAutosizeGroup.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TextMeshProAutosizeGroup_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TextMeshProAutosizeGroup.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextMeshProAutosizeGroup::*)()>(&::GlobalNamespace::TextMeshProAutosizeGroup::Start)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x397d690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextMeshProAutosizeGroup*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextMeshProAutosizeGroup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextMeshProAutosizeGroup::*)()>(&::GlobalNamespace::TextMeshProAutosizeGroup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x397d794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextMeshProAutosizeGroup*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>, ::Array<::UnityW<::TMPro::TMP_Text>>*>& GlobalNamespace::TextMeshProAutosizeGroup::__cordl_internal_get__texts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____texts;
}
constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>, ::Array<::UnityW<::TMPro::TMP_Text>>*> const& GlobalNamespace::TextMeshProAutosizeGroup::__cordl_internal_get__texts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____texts;
}
constexpr void GlobalNamespace::TextMeshProAutosizeGroup::__cordl_internal_set__texts(::ArrayW<::UnityW<::TMPro::TMP_Text>, ::Array<::UnityW<::TMPro::TMP_Text>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____texts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::TextMeshProAutosizeGroup::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextMeshProAutosizeGroup*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::TextMeshProAutosizeGroup* GlobalNamespace::TextMeshProAutosizeGroup::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TextMeshProAutosizeGroup*>());
}
inline void GlobalNamespace::TextMeshProAutosizeGroup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextMeshProAutosizeGroup*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextMeshProAutosizeGroup::TextMeshProAutosizeGroup() {}
