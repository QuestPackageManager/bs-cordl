#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionObjective.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MissionObjective_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveTypeSO_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjective_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MissionObjective_ReferenceValueComparisonType::MissionObjective_ReferenceValueComparisonType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionObjective_ReferenceValueComparisonType::MissionObjective_ReferenceValueComparisonType() {}
constexpr ::GlobalNamespace::MissionObjective_ReferenceValueComparisonType GlobalNamespace::MissionObjective_ReferenceValueComparisonType::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::MissionObjective_ReferenceValueComparisonType GlobalNamespace::MissionObjective_ReferenceValueComparisonType::Equal{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::MissionObjective_ReferenceValueComparisonType GlobalNamespace::MissionObjective_ReferenceValueComparisonType::Max{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::MissionObjective_ReferenceValueComparisonType GlobalNamespace::MissionObjective_ReferenceValueComparisonType::Min{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::GlobalNamespace::MissionObjective.get_type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::MissionObjectiveTypeSO> (::GlobalNamespace::MissionObjective::*)()>(
    &::GlobalNamespace::MissionObjective::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d6784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjective*>::get(), "get_type",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjective.get_referenceValueComparisonType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MissionObjective_ReferenceValueComparisonType (::GlobalNamespace::MissionObjective::*)()>(
    &::GlobalNamespace::MissionObjective::get_referenceValueComparisonType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d678c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjective*>::get(), "get_referenceValueComparisonType",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjective.get_referenceValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::MissionObjective::*)()>(&::GlobalNamespace::MissionObjective::get_referenceValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d6794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjective*>::get(),
                                                                               "get_referenceValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjective.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::MissionObjective*, ::GlobalNamespace::MissionObjective*)>(
    &::GlobalNamespace::MissionObjective::op_Equality)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x26d679c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjective*>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionObjective*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionObjective*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjective.op_Inequality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::MissionObjective*, ::GlobalNamespace::MissionObjective*)>(
    &::GlobalNamespace::MissionObjective::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x26d6858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjective*>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionObjective*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionObjective*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjective.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MissionObjective::*)(::System::Object*)>(&::GlobalNamespace::MissionObjective::Equals)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x26d6870;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjective*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjective*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjective.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::MissionObjective::*)()>(&::GlobalNamespace::MissionObjective::GetHashCode)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x26d697c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjective*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjective*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjective._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjective::*)()>(&::GlobalNamespace::MissionObjective::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d69e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjective*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MissionObjectiveTypeSO>& GlobalNamespace::MissionObjective::__cordl_internal_get__type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr ::UnityW<::GlobalNamespace::MissionObjectiveTypeSO> const& GlobalNamespace::MissionObjective::__cordl_internal_get__type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr void GlobalNamespace::MissionObjective::__cordl_internal_set__type(::UnityW<::GlobalNamespace::MissionObjectiveTypeSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MissionObjective_ReferenceValueComparisonType& GlobalNamespace::MissionObjective::__cordl_internal_get__referenceValueComparisonType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____referenceValueComparisonType;
}
constexpr ::GlobalNamespace::MissionObjective_ReferenceValueComparisonType const& GlobalNamespace::MissionObjective::__cordl_internal_get__referenceValueComparisonType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____referenceValueComparisonType;
}
constexpr void GlobalNamespace::MissionObjective::__cordl_internal_set__referenceValueComparisonType(::GlobalNamespace::MissionObjective_ReferenceValueComparisonType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____referenceValueComparisonType = value;
}
constexpr int32_t& GlobalNamespace::MissionObjective::__cordl_internal_get__referenceValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____referenceValue;
}
constexpr int32_t const& GlobalNamespace::MissionObjective::__cordl_internal_get__referenceValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____referenceValue;
}
constexpr void GlobalNamespace::MissionObjective::__cordl_internal_set__referenceValue(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____referenceValue = value;
}
inline ::UnityW<::GlobalNamespace::MissionObjectiveTypeSO> GlobalNamespace::MissionObjective::get_type() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjective*>::get(), "get_type",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MissionObjectiveTypeSO>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionObjective_ReferenceValueComparisonType GlobalNamespace::MissionObjective::get_referenceValueComparisonType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjective*>::get(),
                                                                             "get_referenceValueComparisonType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MissionObjective_ReferenceValueComparisonType, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::MissionObjective::get_referenceValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjective*>::get(), "get_referenceValue",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool GlobalNamespace::MissionObjective::op_Equality(::GlobalNamespace::MissionObjective* obj1, ::GlobalNamespace::MissionObjective* obj2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjective*>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionObjective*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionObjective*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, obj1, obj2);
}
inline bool GlobalNamespace::MissionObjective::op_Inequality(::GlobalNamespace::MissionObjective* obj1, ::GlobalNamespace::MissionObjective* obj2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjective*>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionObjective*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionObjective*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, obj1, obj2);
}
inline bool GlobalNamespace::MissionObjective::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjective*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::MissionObjective::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjective*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjective::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjective*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionObjective* GlobalNamespace::MissionObjective::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MissionObjective*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionObjective::MissionObjective() {}
