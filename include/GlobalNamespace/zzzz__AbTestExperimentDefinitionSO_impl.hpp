#pragma once
// IWYU pragma private; include "GlobalNamespace/AbTestExperimentDefinitionSO.hpp"
#include "GlobalNamespace/zzzz__AbTestExperimentDefinitionSO_impl.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__AbTestExperimentDefinitionSO_def.hpp"
#include "GlobalNamespace/zzzz__AbTestExperimentDefinitionSO_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__AbTestExperimentDefinitionSO__Group::__AbTestExperimentDefinitionSO__Group(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AbTestExperimentDefinitionSO__Group::__AbTestExperimentDefinitionSO__Group() {}
constexpr ::GlobalNamespace::__AbTestExperimentDefinitionSO__Group GlobalNamespace::__AbTestExperimentDefinitionSO__Group::Control{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__AbTestExperimentDefinitionSO__Group GlobalNamespace::__AbTestExperimentDefinitionSO__Group::Test1{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__AbTestExperimentDefinitionSO__Group GlobalNamespace::__AbTestExperimentDefinitionSO__Group::Test2{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::AbTestExperimentDefinitionSO.get_test1GroupSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::AbTestExperimentDefinitionSO::*)()>(
    &::GlobalNamespace::AbTestExperimentDefinitionSO::get_test1GroupSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a959d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AbTestExperimentDefinitionSO*>::get(),
                                                                               "get_test1GroupSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AbTestExperimentDefinitionSO.get_test2GroupSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::AbTestExperimentDefinitionSO::*)()>(
    &::GlobalNamespace::AbTestExperimentDefinitionSO::get_test2GroupSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a959e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AbTestExperimentDefinitionSO*>::get(),
                                                                               "get_test2GroupSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AbTestExperimentDefinitionSO.get_experimentName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::AbTestExperimentDefinitionSO::*)()>(
    &::GlobalNamespace::AbTestExperimentDefinitionSO::get_experimentName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a959e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AbTestExperimentDefinitionSO*>::get(),
                                                                               "get_experimentName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AbTestExperimentDefinitionSO.get_currentUserTreatmentGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__AbTestExperimentDefinitionSO__Group (::GlobalNamespace::AbTestExperimentDefinitionSO::*)()>(
    &::GlobalNamespace::AbTestExperimentDefinitionSO::get_currentUserTreatmentGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a959f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AbTestExperimentDefinitionSO*>::get(),
                                                                               "get_currentUserTreatmentGroup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AbTestExperimentDefinitionSO.OnValidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AbTestExperimentDefinitionSO::*)()>(
    &::GlobalNamespace::AbTestExperimentDefinitionSO::OnValidate)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3a959f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AbTestExperimentDefinitionSO*>::get(),
                                                                               "OnValidate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AbTestExperimentDefinitionSO.ComputeCurrentUserTreatment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AbTestExperimentDefinitionSO::*)(::StringW)>(
    &::GlobalNamespace::AbTestExperimentDefinitionSO::ComputeCurrentUserTreatment)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3a95a24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AbTestExperimentDefinitionSO*>::get(), "ComputeCurrentUserTreatment",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AbTestExperimentDefinitionSO.ForceSetTreatmentGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AbTestExperimentDefinitionSO::*)(::GlobalNamespace::__AbTestExperimentDefinitionSO__Group)>(
    &::GlobalNamespace::AbTestExperimentDefinitionSO::ForceSetTreatmentGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a95c94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AbTestExperimentDefinitionSO*>::get(), "ForceSetTreatmentGroup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AbTestExperimentDefinitionSO__Group>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AbTestExperimentDefinitionSO.AbSplit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::__AbTestExperimentDefinitionSO__Group (::GlobalNamespace::AbTestExperimentDefinitionSO::*)(::StringW)>(&::GlobalNamespace::AbTestExperimentDefinitionSO::AbSplit)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x3a95a3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AbTestExperimentDefinitionSO*>::get(), "AbSplit",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AbTestExperimentDefinitionSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AbTestExperimentDefinitionSO::*)()>(
    &::GlobalNamespace::AbTestExperimentDefinitionSO::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3a95c9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AbTestExperimentDefinitionSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::AbTestExperimentDefinitionSO::__cordl_internal_get__experimentName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____experimentName;
}
constexpr ::StringW const& GlobalNamespace::AbTestExperimentDefinitionSO::__cordl_internal_get__experimentName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____experimentName;
}
constexpr void GlobalNamespace::AbTestExperimentDefinitionSO::__cordl_internal_set__experimentName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____experimentName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::AbTestExperimentDefinitionSO::__cordl_internal_get__test1GroupSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____test1GroupSize;
}
constexpr float_t const& GlobalNamespace::AbTestExperimentDefinitionSO::__cordl_internal_get__test1GroupSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____test1GroupSize;
}
constexpr void GlobalNamespace::AbTestExperimentDefinitionSO::__cordl_internal_set__test1GroupSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____test1GroupSize = value;
}
constexpr float_t& GlobalNamespace::AbTestExperimentDefinitionSO::__cordl_internal_get__test2GroupSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____test2GroupSize;
}
constexpr float_t const& GlobalNamespace::AbTestExperimentDefinitionSO::__cordl_internal_get__test2GroupSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____test2GroupSize;
}
constexpr void GlobalNamespace::AbTestExperimentDefinitionSO::__cordl_internal_set__test2GroupSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____test2GroupSize = value;
}
constexpr float_t& GlobalNamespace::AbTestExperimentDefinitionSO::__cordl_internal_get__controlGroupSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controlGroupSize;
}
constexpr float_t const& GlobalNamespace::AbTestExperimentDefinitionSO::__cordl_internal_get__controlGroupSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controlGroupSize;
}
constexpr void GlobalNamespace::AbTestExperimentDefinitionSO::__cordl_internal_set__controlGroupSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____controlGroupSize = value;
}
constexpr ::StringW& GlobalNamespace::AbTestExperimentDefinitionSO::__cordl_internal_get__salt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____salt;
}
constexpr ::StringW const& GlobalNamespace::AbTestExperimentDefinitionSO::__cordl_internal_get__salt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____salt;
}
constexpr void GlobalNamespace::AbTestExperimentDefinitionSO::__cordl_internal_set__salt(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____salt)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__AbTestExperimentDefinitionSO__Group& GlobalNamespace::AbTestExperimentDefinitionSO::__cordl_internal_get__currentUserTreatmentGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentUserTreatmentGroup;
}
constexpr ::GlobalNamespace::__AbTestExperimentDefinitionSO__Group const& GlobalNamespace::AbTestExperimentDefinitionSO::__cordl_internal_get__currentUserTreatmentGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentUserTreatmentGroup;
}
constexpr void GlobalNamespace::AbTestExperimentDefinitionSO::__cordl_internal_set__currentUserTreatmentGroup(::GlobalNamespace::__AbTestExperimentDefinitionSO__Group value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentUserTreatmentGroup = value;
}
inline float_t GlobalNamespace::AbTestExperimentDefinitionSO::get_test1GroupSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AbTestExperimentDefinitionSO*>::get(),
                                                                             "get_test1GroupSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::AbTestExperimentDefinitionSO::get_test2GroupSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AbTestExperimentDefinitionSO*>::get(),
                                                                             "get_test2GroupSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::AbTestExperimentDefinitionSO::get_experimentName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AbTestExperimentDefinitionSO*>::get(),
                                                                             "get_experimentName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__AbTestExperimentDefinitionSO__Group GlobalNamespace::AbTestExperimentDefinitionSO::get_currentUserTreatmentGroup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AbTestExperimentDefinitionSO*>::get(),
                                                                             "get_currentUserTreatmentGroup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__AbTestExperimentDefinitionSO__Group, false>(this, ___internal_method);
}
inline void GlobalNamespace::AbTestExperimentDefinitionSO::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AbTestExperimentDefinitionSO*>::get(),
                                                                             "OnValidate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AbTestExperimentDefinitionSO::ComputeCurrentUserTreatment(::StringW userId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AbTestExperimentDefinitionSO*>::get(), "ComputeCurrentUserTreatment",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId);
}
inline void GlobalNamespace::AbTestExperimentDefinitionSO::ForceSetTreatmentGroup(::GlobalNamespace::__AbTestExperimentDefinitionSO__Group group) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AbTestExperimentDefinitionSO*>::get(), "ForceSetTreatmentGroup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AbTestExperimentDefinitionSO__Group>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, group);
}
inline ::GlobalNamespace::__AbTestExperimentDefinitionSO__Group GlobalNamespace::AbTestExperimentDefinitionSO::AbSplit(::StringW userId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AbTestExperimentDefinitionSO*>::get(), "AbSplit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__AbTestExperimentDefinitionSO__Group, false>(this, ___internal_method, userId);
}
inline ::GlobalNamespace::AbTestExperimentDefinitionSO* GlobalNamespace::AbTestExperimentDefinitionSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::AbTestExperimentDefinitionSO*>());
}
inline void GlobalNamespace::AbTestExperimentDefinitionSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AbTestExperimentDefinitionSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AbTestExperimentDefinitionSO::AbTestExperimentDefinitionSO() {}
