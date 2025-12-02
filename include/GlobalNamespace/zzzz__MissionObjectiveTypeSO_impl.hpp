#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionObjectiveTypeSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveTypeSO_def.hpp"
#include "GlobalNamespace/zzzz__ObjectiveValueFormatterSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveTypeSO.get_objectiveName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::MissionObjectiveTypeSO::*)()>(
    &::GlobalNamespace::MissionObjectiveTypeSO::get_objectiveName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3608b60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveTypeSO*>::get(),
                                                                               "get_objectiveName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveTypeSO.get_objectiveNameLocalized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::MissionObjectiveTypeSO::*)()>(
    &::GlobalNamespace::MissionObjectiveTypeSO::get_objectiveNameLocalized)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3608b68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveTypeSO*>::get(),
                                                                               "get_objectiveNameLocalized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveTypeSO.get_noConditionValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MissionObjectiveTypeSO::*)()>(
    &::GlobalNamespace::MissionObjectiveTypeSO::get_noConditionValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3608b74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveTypeSO*>::get(),
                                                                               "get_noConditionValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveTypeSO.get_objectiveValueFormater
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::ObjectiveValueFormatterSO> (::GlobalNamespace::MissionObjectiveTypeSO::*)()>(
    &::GlobalNamespace::MissionObjectiveTypeSO::get_objectiveValueFormater)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3608b7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveTypeSO*>::get(),
                                                                               "get_objectiveValueFormater", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveTypeSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveTypeSO::*)()>(&::GlobalNamespace::MissionObjectiveTypeSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3608b84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveTypeSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::MissionObjectiveTypeSO::__cordl_internal_get__objectiveName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectiveName;
}
constexpr ::StringW const& GlobalNamespace::MissionObjectiveTypeSO::__cordl_internal_get__objectiveName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectiveName;
}
constexpr void GlobalNamespace::MissionObjectiveTypeSO::__cordl_internal_set__objectiveName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____objectiveName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::MissionObjectiveTypeSO::__cordl_internal_get__noConditionValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noConditionValue;
}
constexpr bool const& GlobalNamespace::MissionObjectiveTypeSO::__cordl_internal_get__noConditionValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noConditionValue;
}
constexpr void GlobalNamespace::MissionObjectiveTypeSO::__cordl_internal_set__noConditionValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noConditionValue = value;
}
constexpr ::UnityW<::GlobalNamespace::ObjectiveValueFormatterSO>& GlobalNamespace::MissionObjectiveTypeSO::__cordl_internal_get__objectiveValueFormater() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectiveValueFormater;
}
constexpr ::UnityW<::GlobalNamespace::ObjectiveValueFormatterSO> const& GlobalNamespace::MissionObjectiveTypeSO::__cordl_internal_get__objectiveValueFormater() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectiveValueFormater;
}
constexpr void GlobalNamespace::MissionObjectiveTypeSO::__cordl_internal_set__objectiveValueFormater(::UnityW<::GlobalNamespace::ObjectiveValueFormatterSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____objectiveValueFormater)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::MissionObjectiveTypeSO::get_objectiveName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveTypeSO*>::get(),
                                                                             "get_objectiveName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::MissionObjectiveTypeSO::get_objectiveNameLocalized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveTypeSO*>::get(),
                                                                             "get_objectiveNameLocalized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool GlobalNamespace::MissionObjectiveTypeSO::get_noConditionValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveTypeSO*>::get(),
                                                                             "get_noConditionValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::ObjectiveValueFormatterSO> GlobalNamespace::MissionObjectiveTypeSO::get_objectiveValueFormater() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveTypeSO*>::get(),
                                                                             "get_objectiveValueFormater", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::ObjectiveValueFormatterSO>, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectiveTypeSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveTypeSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionObjectiveTypeSO* GlobalNamespace::MissionObjectiveTypeSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MissionObjectiveTypeSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionObjectiveTypeSO::MissionObjectiveTypeSO() {}
