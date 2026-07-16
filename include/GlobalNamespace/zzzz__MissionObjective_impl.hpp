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
//  Writing Method size for method: ::GlobalNamespace::MissionObjective._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjective::*)(
    ::GlobalNamespace::MissionObjectiveTypeSO*, ::GlobalNamespace::MissionObjective_ReferenceValueComparisonType, int32_t)>(&::GlobalNamespace::MissionObjective::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3751bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjective*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::MissionObjectiveTypeSO*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::MissionObjective_ReferenceValueComparisonType>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjective.get_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MissionObjectiveTypeSO> (::GlobalNamespace::MissionObjective::*)()>(
    &::GlobalNamespace::MissionObjective::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3751bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjective*>(), { "get_type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjective.get_referenceValueComparisonType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MissionObjective_ReferenceValueComparisonType (::GlobalNamespace::MissionObjective::*)()>(
    &::GlobalNamespace::MissionObjective::get_referenceValueComparisonType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3751c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjective*>(), { "get_referenceValueComparisonType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjective.get_referenceValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MissionObjective::*)()>(&::GlobalNamespace::MissionObjective::get_referenceValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3751c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjective*>(), { "get_referenceValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjective.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::MissionObjective*, ::GlobalNamespace::MissionObjective*)>(&::GlobalNamespace::MissionObjective::op_Equality)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3751c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjective*>(),
                                                { "op_Equality", {}, { ::i2c::type_of<::GlobalNamespace::MissionObjective*>(), ::i2c::type_of<::GlobalNamespace::MissionObjective*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjective.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::MissionObjective*, ::GlobalNamespace::MissionObjective*)>(&::GlobalNamespace::MissionObjective::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3751cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjective*>(),
                                                { "op_Inequality", {}, { ::i2c::type_of<::GlobalNamespace::MissionObjective*>(), ::i2c::type_of<::GlobalNamespace::MissionObjective*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjective.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MissionObjective::*)(::System::Object*)>(&::GlobalNamespace::MissionObjective::Equals)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3751ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjective*>(), { ::i2c::class_of<::GlobalNamespace::MissionObjective*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjective.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MissionObjective::*)()>(&::GlobalNamespace::MissionObjective::GetHashCode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3751ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjective*>(), { ::i2c::class_of<::GlobalNamespace::MissionObjective*>(), 2 }));
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
  this->____type = value;
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
inline void GlobalNamespace::MissionObjective::_ctor(::GlobalNamespace::MissionObjectiveTypeSO* type, ::GlobalNamespace::MissionObjective_ReferenceValueComparisonType referenceValueComparisonType,
                                                     int32_t referenceValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjective*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::MissionObjectiveTypeSO*>(),
                                                               ::i2c::type_of<::GlobalNamespace::MissionObjective_ReferenceValueComparisonType>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, referenceValueComparisonType, referenceValue);
}
inline ::UnityW<::GlobalNamespace::MissionObjectiveTypeSO> GlobalNamespace::MissionObjective::get_type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjective*>(), { "get_type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MissionObjectiveTypeSO>>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionObjective_ReferenceValueComparisonType GlobalNamespace::MissionObjective::get_referenceValueComparisonType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjective*>(), { "get_referenceValueComparisonType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MissionObjective_ReferenceValueComparisonType>(this, ___internal_method);
}
inline int32_t GlobalNamespace::MissionObjective::get_referenceValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjective*>(), { "get_referenceValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::MissionObjective::op_Equality(::GlobalNamespace::MissionObjective* obj1, ::GlobalNamespace::MissionObjective* obj2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjective*>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::GlobalNamespace::MissionObjective*>(), ::i2c::type_of<::GlobalNamespace::MissionObjective*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj1, obj2);
}
inline bool GlobalNamespace::MissionObjective::op_Inequality(::GlobalNamespace::MissionObjective* obj1, ::GlobalNamespace::MissionObjective* obj2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjective*>(),
                                              { "op_Inequality", {}, { ::i2c::type_of<::GlobalNamespace::MissionObjective*>(), ::i2c::type_of<::GlobalNamespace::MissionObjective*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj1, obj2);
}
inline bool GlobalNamespace::MissionObjective::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MissionObjective*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::MissionObjective::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MissionObjective*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionObjective* GlobalNamespace::MissionObjective::New_ctor(::GlobalNamespace::MissionObjectiveTypeSO* type,
                                                                                        ::GlobalNamespace::MissionObjective_ReferenceValueComparisonType referenceValueComparisonType,
                                                                                        int32_t referenceValue) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionObjective*>(type, referenceValueComparisonType, referenceValue));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionObjective::MissionObjective() {}
