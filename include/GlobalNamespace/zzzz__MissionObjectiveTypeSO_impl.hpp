#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveTypeSO_def.hpp"
#include "GlobalNamespace/zzzz__ObjectiveValueFormatterSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveTypeSO.get_objectiveName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::MissionObjectiveTypeSO::*)()>(
    &::GlobalNamespace::MissionObjectiveTypeSO::get_objectiveName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2204e2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveTypeSO*>::get(),
                                                                               "get_objectiveName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveTypeSO.get_objectiveNameLocalized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::MissionObjectiveTypeSO::*)()>(
    &::GlobalNamespace::MissionObjectiveTypeSO::get_objectiveNameLocalized)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2204e34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveTypeSO*>::get(),
                                                                               "get_objectiveNameLocalized", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveTypeSO.get_noConditionValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MissionObjectiveTypeSO::*)()>(
    &::GlobalNamespace::MissionObjectiveTypeSO::get_noConditionValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2204e40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveTypeSO*>::get(),
                                                                               "get_noConditionValue", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveTypeSO.get_objectiveValueFormater
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ObjectiveValueFormatterSO* (::GlobalNamespace::MissionObjectiveTypeSO::*)()>(
    &::GlobalNamespace::MissionObjectiveTypeSO::get_objectiveValueFormater)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2204e48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveTypeSO*>::get(),
                                                                               "get_objectiveValueFormater", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveTypeSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveTypeSO::*)()>(&::GlobalNamespace::MissionObjectiveTypeSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2204e50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveTypeSO*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::MissionObjectiveTypeSO::__get__objectiveName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectiveName;
}
constexpr ::StringW const& GlobalNamespace::MissionObjectiveTypeSO::__get__objectiveName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectiveName;
}
constexpr void GlobalNamespace::MissionObjectiveTypeSO::__set__objectiveName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____objectiveName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::MissionObjectiveTypeSO::__get__noConditionValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noConditionValue;
}
constexpr bool const& GlobalNamespace::MissionObjectiveTypeSO::__get__noConditionValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noConditionValue;
}
constexpr void GlobalNamespace::MissionObjectiveTypeSO::__set__noConditionValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noConditionValue = value;
}
constexpr ::GlobalNamespace::ObjectiveValueFormatterSO*& GlobalNamespace::MissionObjectiveTypeSO::__get__objectiveValueFormater() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectiveValueFormater;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ObjectiveValueFormatterSO*> const& GlobalNamespace::MissionObjectiveTypeSO::__get__objectiveValueFormater() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectiveValueFormater;
}
constexpr void GlobalNamespace::MissionObjectiveTypeSO::__set__objectiveValueFormater(::GlobalNamespace::ObjectiveValueFormatterSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____objectiveValueFormater)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::MissionObjectiveTypeSO::get_objectiveName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveTypeSO*>::get(),
                                                                             "get_objectiveName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::MissionObjectiveTypeSO::get_objectiveNameLocalized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveTypeSO*>::get(),
                                                                             "get_objectiveNameLocalized", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool GlobalNamespace::MissionObjectiveTypeSO::get_noConditionValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveTypeSO*>::get(),
                                                                             "get_noConditionValue", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ObjectiveValueFormatterSO* GlobalNamespace::MissionObjectiveTypeSO::get_objectiveValueFormater() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveTypeSO*>::get(),
                                                                             "get_objectiveValueFormater", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ObjectiveValueFormatterSO*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionObjectiveTypeSO* GlobalNamespace::MissionObjectiveTypeSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MissionObjectiveTypeSO*>());
}
inline void GlobalNamespace::MissionObjectiveTypeSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveTypeSO*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionObjectiveTypeSO::MissionObjectiveTypeSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
