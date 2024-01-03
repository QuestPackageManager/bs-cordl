#pragma once
#include "GlobalNamespace/zzzz__LightGroupSubsystem_impl.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroup_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FloatFxGroup.get_isTriggerOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::FloatFxGroup::*)()>(&::GlobalNamespace::FloatFxGroup::get_isTriggerOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23a5800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroup*>::get(), "get_isTriggerOnly",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatFxGroup.get_targets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::FloatFxGroupEffectTarget*>* (::GlobalNamespace::FloatFxGroup::*)()>(&::GlobalNamespace::FloatFxGroup::get_targets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23a5808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroup*>::get(), "get_targets",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatFxGroup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatFxGroup::*)()>(&::GlobalNamespace::FloatFxGroup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23a5810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroup*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::FloatFxGroup::__get__isTriggerOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isTriggerOnly;
}
constexpr bool const& GlobalNamespace::FloatFxGroup::__get__isTriggerOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isTriggerOnly;
}
constexpr void GlobalNamespace::FloatFxGroup::__set__isTriggerOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isTriggerOnly = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FloatFxGroupEffectTarget*>*& GlobalNamespace::FloatFxGroup::__get__targets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targets;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::FloatFxGroupEffectTarget*>*> const& GlobalNamespace::FloatFxGroup::__get__targets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targets;
}
constexpr void GlobalNamespace::FloatFxGroup::__set__targets(::System::Collections::Generic::List_1<::GlobalNamespace::FloatFxGroupEffectTarget*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____targets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool GlobalNamespace::FloatFxGroup::get_isTriggerOnly() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroup*>::get(), "get_isTriggerOnly",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::FloatFxGroupEffectTarget*>* GlobalNamespace::FloatFxGroup::get_targets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroup*>::get(), "get_targets",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::FloatFxGroupEffectTarget*>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::FloatFxGroup* GlobalNamespace::FloatFxGroup::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::FloatFxGroup*>());
}
inline void GlobalNamespace::FloatFxGroup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroup*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FloatFxGroup::FloatFxGroup() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
