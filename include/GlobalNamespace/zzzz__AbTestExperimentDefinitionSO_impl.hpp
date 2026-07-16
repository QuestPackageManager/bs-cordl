#pragma once
// IWYU pragma private; include "GlobalNamespace/AbTestExperimentDefinitionSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__AbTestExperimentDefinitionSO_def.hpp"
#include "GlobalNamespace/zzzz__AbTestExperimentDefinitionSO_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AbTestExperimentDefinitionSO_Group::AbTestExperimentDefinitionSO_Group(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AbTestExperimentDefinitionSO_Group::AbTestExperimentDefinitionSO_Group() {}
constexpr ::GlobalNamespace::AbTestExperimentDefinitionSO_Group GlobalNamespace::AbTestExperimentDefinitionSO_Group::Control{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::AbTestExperimentDefinitionSO_Group GlobalNamespace::AbTestExperimentDefinitionSO_Group::Test1{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::AbTestExperimentDefinitionSO_Group GlobalNamespace::AbTestExperimentDefinitionSO_Group::Test2{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::AbTestExperimentDefinitionSO.get_test1GroupSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AbTestExperimentDefinitionSO::*)()>(&::GlobalNamespace::AbTestExperimentDefinitionSO::get_test1GroupSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a20540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AbTestExperimentDefinitionSO*>(), { "get_test1GroupSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AbTestExperimentDefinitionSO.get_test2GroupSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AbTestExperimentDefinitionSO::*)()>(&::GlobalNamespace::AbTestExperimentDefinitionSO::get_test2GroupSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a20548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AbTestExperimentDefinitionSO*>(), { "get_test2GroupSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AbTestExperimentDefinitionSO.get_experimentName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::AbTestExperimentDefinitionSO::*)()>(&::GlobalNamespace::AbTestExperimentDefinitionSO::get_experimentName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a20550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AbTestExperimentDefinitionSO*>(), { "get_experimentName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AbTestExperimentDefinitionSO.get_currentUserTreatmentGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AbTestExperimentDefinitionSO_Group (::GlobalNamespace::AbTestExperimentDefinitionSO::*)()>(
    &::GlobalNamespace::AbTestExperimentDefinitionSO::get_currentUserTreatmentGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a20558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AbTestExperimentDefinitionSO*>(), { "get_currentUserTreatmentGroup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AbTestExperimentDefinitionSO.OnValidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AbTestExperimentDefinitionSO::*)()>(&::GlobalNamespace::AbTestExperimentDefinitionSO::OnValidate)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5a20560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AbTestExperimentDefinitionSO*>(), { "OnValidate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AbTestExperimentDefinitionSO.ComputeCurrentUserTreatment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AbTestExperimentDefinitionSO::*)(::StringW)>(
    &::GlobalNamespace::AbTestExperimentDefinitionSO::ComputeCurrentUserTreatment)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a20594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AbTestExperimentDefinitionSO*>(), { "ComputeCurrentUserTreatment", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AbTestExperimentDefinitionSO.ForceSetTreatmentGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AbTestExperimentDefinitionSO::*)(::GlobalNamespace::AbTestExperimentDefinitionSO_Group)>(
    &::GlobalNamespace::AbTestExperimentDefinitionSO::ForceSetTreatmentGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a207b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AbTestExperimentDefinitionSO*>(),
                                                             { "ForceSetTreatmentGroup", {}, { ::i2c::type_of<::GlobalNamespace::AbTestExperimentDefinitionSO_Group>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AbTestExperimentDefinitionSO.AbSplit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AbTestExperimentDefinitionSO_Group (::GlobalNamespace::AbTestExperimentDefinitionSO::*)(::StringW)>(
    &::GlobalNamespace::AbTestExperimentDefinitionSO::AbSplit)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x5a205ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AbTestExperimentDefinitionSO*>(), { "AbSplit", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AbTestExperimentDefinitionSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AbTestExperimentDefinitionSO::*)()>(&::GlobalNamespace::AbTestExperimentDefinitionSO::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a207c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AbTestExperimentDefinitionSO*>(), { ".ctor", {}, {} })));
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
  this->____experimentName = value;
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
  this->____salt = value;
}
constexpr ::GlobalNamespace::AbTestExperimentDefinitionSO_Group& GlobalNamespace::AbTestExperimentDefinitionSO::__cordl_internal_get__currentUserTreatmentGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentUserTreatmentGroup;
}
constexpr ::GlobalNamespace::AbTestExperimentDefinitionSO_Group const& GlobalNamespace::AbTestExperimentDefinitionSO::__cordl_internal_get__currentUserTreatmentGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentUserTreatmentGroup;
}
constexpr void GlobalNamespace::AbTestExperimentDefinitionSO::__cordl_internal_set__currentUserTreatmentGroup(::GlobalNamespace::AbTestExperimentDefinitionSO_Group value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentUserTreatmentGroup = value;
}
inline float_t GlobalNamespace::AbTestExperimentDefinitionSO::get_test1GroupSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AbTestExperimentDefinitionSO*>(), { "get_test1GroupSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::AbTestExperimentDefinitionSO::get_test2GroupSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AbTestExperimentDefinitionSO*>(), { "get_test2GroupSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::AbTestExperimentDefinitionSO::get_experimentName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AbTestExperimentDefinitionSO*>(), { "get_experimentName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::AbTestExperimentDefinitionSO_Group GlobalNamespace::AbTestExperimentDefinitionSO::get_currentUserTreatmentGroup() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AbTestExperimentDefinitionSO*>(), { "get_currentUserTreatmentGroup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AbTestExperimentDefinitionSO_Group>(this, ___internal_method);
}
inline void GlobalNamespace::AbTestExperimentDefinitionSO::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AbTestExperimentDefinitionSO*>(), { "OnValidate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AbTestExperimentDefinitionSO::ComputeCurrentUserTreatment(::StringW userId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AbTestExperimentDefinitionSO*>(), { "ComputeCurrentUserTreatment", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::AbTestExperimentDefinitionSO::ForceSetTreatmentGroup(::GlobalNamespace::AbTestExperimentDefinitionSO_Group group) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AbTestExperimentDefinitionSO*>(),
                                                           { "ForceSetTreatmentGroup", {}, { ::i2c::type_of<::GlobalNamespace::AbTestExperimentDefinitionSO_Group>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, group);
}
inline ::GlobalNamespace::AbTestExperimentDefinitionSO_Group GlobalNamespace::AbTestExperimentDefinitionSO::AbSplit(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AbTestExperimentDefinitionSO*>(), { "AbSplit", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AbTestExperimentDefinitionSO_Group>(this, ___internal_method, userId);
}
inline void GlobalNamespace::AbTestExperimentDefinitionSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AbTestExperimentDefinitionSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AbTestExperimentDefinitionSO* GlobalNamespace::AbTestExperimentDefinitionSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AbTestExperimentDefinitionSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AbTestExperimentDefinitionSO::AbTestExperimentDefinitionSO() {}
