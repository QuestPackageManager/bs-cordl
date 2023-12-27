#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentLightGroups_def.hpp"
#include "GlobalNamespace/zzzz__ILightGroup_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupSO_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__IEnvironmentLightGroups_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentLightGroups_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__EnvironmentLightGroups____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__EnvironmentLightGroups____c::*)()>(
    &::GlobalNamespace::__EnvironmentLightGroups____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22408e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EnvironmentLightGroups____c*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__EnvironmentLightGroups____c._Sort_b__6_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__EnvironmentLightGroups____c::*)(::GlobalNamespace::LightGroupSO*)>(
    &::GlobalNamespace::__EnvironmentLightGroups____c::_Sort_b__6_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x22408f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EnvironmentLightGroups____c*>::get(), "<Sort>b__6_0", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroupSO*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__EnvironmentLightGroups____c::setStaticF___9(::GlobalNamespace::__EnvironmentLightGroups____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__EnvironmentLightGroups____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EnvironmentLightGroups____c*>::get>(
      std::forward<::GlobalNamespace::__EnvironmentLightGroups____c*>(value));
}
inline ::GlobalNamespace::__EnvironmentLightGroups____c* GlobalNamespace::__EnvironmentLightGroups____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__EnvironmentLightGroups____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EnvironmentLightGroups____c*>::get>();
}
inline void GlobalNamespace::__EnvironmentLightGroups____c::setStaticF___9__6_0(::System::Func_2<::GlobalNamespace::LightGroupSO*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::LightGroupSO*, int32_t>*, "<>9__6_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EnvironmentLightGroups____c*>::get>(
      std::forward<::System::Func_2<::GlobalNamespace::LightGroupSO*, int32_t>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::LightGroupSO*, int32_t>* GlobalNamespace::__EnvironmentLightGroups____c::getStaticF___9__6_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::LightGroupSO*, int32_t>*, "<>9__6_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EnvironmentLightGroups____c*>::get>();
}
inline ::GlobalNamespace::__EnvironmentLightGroups____c* GlobalNamespace::__EnvironmentLightGroups____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__EnvironmentLightGroups____c*>());
}
inline void GlobalNamespace::__EnvironmentLightGroups____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EnvironmentLightGroups____c*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::__EnvironmentLightGroups____c::_Sort_b__6_0(::GlobalNamespace::LightGroupSO* s) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EnvironmentLightGroups____c*>::get(), "<Sort>b__6_0", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroupSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, s);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__EnvironmentLightGroups____c::__EnvironmentLightGroups____c() {}
//  Writing Method size for method: ::GlobalNamespace::EnvironmentLightGroups.get_lightGroupSOList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO*>* (
    ::GlobalNamespace::EnvironmentLightGroups::*)()>(&::GlobalNamespace::EnvironmentLightGroups::get_lightGroupSOList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2240508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentLightGroups*>::get(),
                                                                               "get_lightGroupSOList", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentLightGroups.GetDataForGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ILightGroup* (::GlobalNamespace::EnvironmentLightGroups::*)(int32_t)>(
    &::GlobalNamespace::EnvironmentLightGroups::GetDataForGroup)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x2240510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentLightGroups*>::get(), "GetDataForGroup",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentLightGroups.Sort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentLightGroups::*)()>(&::GlobalNamespace::EnvironmentLightGroups::Sort)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x224075c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentLightGroups*>::get(), "Sort",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentLightGroups._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentLightGroups::*)()>(&::GlobalNamespace::EnvironmentLightGroups::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224087c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentLightGroups*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IEnvironmentLightGroups"
constexpr GlobalNamespace::EnvironmentLightGroups::operator ::GlobalNamespace::IEnvironmentLightGroups*() noexcept {
  return static_cast<::GlobalNamespace::IEnvironmentLightGroups*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO*>*& GlobalNamespace::EnvironmentLightGroups::__get__lightGroupSOList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lightGroupSOList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO*>*> const&
GlobalNamespace::EnvironmentLightGroups::__get__lightGroupSOList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lightGroupSOList;
}
constexpr void GlobalNamespace::EnvironmentLightGroups::__set__lightGroupSOList(::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightGroupSOList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightGroupSO*>*& GlobalNamespace::EnvironmentLightGroups::__get__lightGroupSODict() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lightGroupSODict;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightGroupSO*>*> const&
GlobalNamespace::EnvironmentLightGroups::__get__lightGroupSODict() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lightGroupSODict;
}
constexpr void GlobalNamespace::EnvironmentLightGroups::__set__lightGroupSODict(::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightGroupSO*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightGroupSODict)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO*>*& GlobalNamespace::EnvironmentLightGroups::__get__lightGroupSOListForLightGroupDataDict() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lightGroupSOListForLightGroupDataDict;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO*>*> const&
GlobalNamespace::EnvironmentLightGroups::__get__lightGroupSOListForLightGroupDataDict() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lightGroupSOListForLightGroupDataDict;
}
constexpr void GlobalNamespace::EnvironmentLightGroups::__set__lightGroupSOListForLightGroupDataDict(::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightGroupSOListForLightGroupDataDict)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO*>* GlobalNamespace::EnvironmentLightGroups::get_lightGroupSOList() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentLightGroups*>::get(),
                                                                             "get_lightGroupSOList", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO*>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ILightGroup* GlobalNamespace::EnvironmentLightGroups::GetDataForGroup(int32_t groupId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentLightGroups*>::get(), "GetDataForGroup",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILightGroup*, false>(this, ___internal_method, groupId);
}
inline void GlobalNamespace::EnvironmentLightGroups::Sort() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentLightGroups*>::get(), "Sort",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentLightGroups* GlobalNamespace::EnvironmentLightGroups::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::EnvironmentLightGroups*>());
}
inline void GlobalNamespace::EnvironmentLightGroups::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentLightGroups*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentLightGroups::EnvironmentLightGroups() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
