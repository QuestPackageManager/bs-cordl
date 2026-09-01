#pragma once
// IWYU pragma private; include "GlobalNamespace\DisableForVisualTestComparator.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DisableForVisualTestComparator_def.hpp"
#include "GlobalNamespace/zzzz__DeterminismConfig_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DisableForVisualTestComparator.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DisableForVisualTestComparator::*)(::GlobalNamespace::DeterminismConfig*)>(
    &::GlobalNamespace::DisableForVisualTestComparator::Init)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5980d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DisableForVisualTestComparator*>(), { "Init", {}, { ::i2c::type_of<::GlobalNamespace::DeterminismConfig*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DisableForVisualTestComparator.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DisableForVisualTestComparator::*)()>(&::GlobalNamespace::DisableForVisualTestComparator::OnDestroy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5980dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DisableForVisualTestComparator*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DisableForVisualTestComparator.OnDeterminismSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DisableForVisualTestComparator::*)(bool)>(&::GlobalNamespace::DisableForVisualTestComparator::OnDeterminismSet)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x5980e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DisableForVisualTestComparator*>(), { "OnDeterminismSet", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DisableForVisualTestComparator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DisableForVisualTestComparator::*)()>(&::GlobalNamespace::DisableForVisualTestComparator::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x59810ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DisableForVisualTestComparator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::DeterminismConfig*& GlobalNamespace::DisableForVisualTestComparator::__cordl_internal_get__determinismConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____determinismConfig;
}
constexpr ::GlobalNamespace::DeterminismConfig* const& GlobalNamespace::DisableForVisualTestComparator::__cordl_internal_get__determinismConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____determinismConfig;
}
constexpr void GlobalNamespace::DisableForVisualTestComparator::__cordl_internal_set__determinismConfig(::GlobalNamespace::DeterminismConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____determinismConfig = value;
}
constexpr bool& GlobalNamespace::DisableForVisualTestComparator::__cordl_internal_get__disableEntireGameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disableEntireGameObject;
}
constexpr bool const& GlobalNamespace::DisableForVisualTestComparator::__cordl_internal_get__disableEntireGameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disableEntireGameObject;
}
constexpr void GlobalNamespace::DisableForVisualTestComparator::__cordl_internal_set__disableEntireGameObject(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disableEntireGameObject = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*& GlobalNamespace::DisableForVisualTestComparator::__cordl_internal_get__disableSpecificComponents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disableSpecificComponents;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>* const&
GlobalNamespace::DisableForVisualTestComparator::__cordl_internal_get__disableSpecificComponents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disableSpecificComponents;
}
constexpr void GlobalNamespace::DisableForVisualTestComparator::__cordl_internal_set__disableSpecificComponents(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disableSpecificComponents = value;
}
inline void GlobalNamespace::DisableForVisualTestComparator::Init(::GlobalNamespace::DeterminismConfig* determinismConfig) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DisableForVisualTestComparator*>(), { "Init", {}, { ::i2c::type_of<::GlobalNamespace::DeterminismConfig*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, determinismConfig);
}
inline void GlobalNamespace::DisableForVisualTestComparator::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DisableForVisualTestComparator*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DisableForVisualTestComparator::OnDeterminismSet(bool isDeterministic) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DisableForVisualTestComparator*>(), { "OnDeterminismSet", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isDeterministic);
}
inline void GlobalNamespace::DisableForVisualTestComparator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DisableForVisualTestComparator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DisableForVisualTestComparator* GlobalNamespace::DisableForVisualTestComparator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DisableForVisualTestComparator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DisableForVisualTestComparator::DisableForVisualTestComparator() {}
