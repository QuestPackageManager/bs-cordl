#pragma once
// IWYU pragma private; include "GlobalNamespace\MissionObjectiveTypeCollection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveTypeCollection_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveTypeCollection_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveTypeSO_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveTypeCollection___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjectiveTypeCollection___c::*)()>(&::GlobalNamespace::MissionObjectiveTypeCollection___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3756824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveTypeCollection___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveTypeCollection___c.__ctor_b__1_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MissionObjectiveTypeCollection___c::*)(::GlobalNamespace::MissionObjectiveTypeSO*)>(
    &::GlobalNamespace::MissionObjectiveTypeCollection___c::__ctor_b__1_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3756828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveTypeCollection___c*>(),
                                                                                           { "<.ctor>b__1_0", {}, { ::i2c::type_of<::GlobalNamespace::MissionObjectiveTypeSO*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MissionObjectiveTypeCollection___c::setStaticF___9(::GlobalNamespace::MissionObjectiveTypeCollection___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::MissionObjectiveTypeCollection___c*, "<>9", ::GlobalNamespace::MissionObjectiveTypeCollection___c*>(
      std::forward<::GlobalNamespace::MissionObjectiveTypeCollection___c*>(value));
}
inline ::GlobalNamespace::MissionObjectiveTypeCollection___c* GlobalNamespace::MissionObjectiveTypeCollection___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::MissionObjectiveTypeCollection___c*, "<>9", ::GlobalNamespace::MissionObjectiveTypeCollection___c*>();
}
inline void GlobalNamespace::MissionObjectiveTypeCollection___c::setStaticF___9__1_0(::System::Func_2<::UnityW<::GlobalNamespace::MissionObjectiveTypeSO>, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::GlobalNamespace::MissionObjectiveTypeSO>, ::StringW>*, "<>9__1_0", ::GlobalNamespace::MissionObjectiveTypeCollection___c*>(
      std::forward<::System::Func_2<::UnityW<::GlobalNamespace::MissionObjectiveTypeSO>, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityW<::GlobalNamespace::MissionObjectiveTypeSO>, ::StringW>* GlobalNamespace::MissionObjectiveTypeCollection___c::getStaticF___9__1_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::GlobalNamespace::MissionObjectiveTypeSO>, ::StringW>*, "<>9__1_0", ::GlobalNamespace::MissionObjectiveTypeCollection___c*>();
}
inline void GlobalNamespace::MissionObjectiveTypeCollection___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveTypeCollection___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::MissionObjectiveTypeCollection___c::__ctor_b__1_0(::GlobalNamespace::MissionObjectiveTypeSO* m) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveTypeCollection___c*>(),
                                                                                         { "<.ctor>b__1_0", {}, { ::i2c::type_of<::GlobalNamespace::MissionObjectiveTypeSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, m);
}
inline ::GlobalNamespace::MissionObjectiveTypeCollection___c* GlobalNamespace::MissionObjectiveTypeCollection___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionObjectiveTypeCollection___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionObjectiveTypeCollection___c::MissionObjectiveTypeCollection___c() {}
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveTypeCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjectiveTypeCollection::*)(
    ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::MissionObjectiveTypeSO>>*)>(&::GlobalNamespace::MissionObjectiveTypeCollection::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x375663c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveTypeCollection*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::MissionObjectiveTypeSO>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveTypeCollection.GetMissionObjectiveTypeByName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MissionObjectiveTypeSO> (::GlobalNamespace::MissionObjectiveTypeCollection::*)(::StringW)>(
    &::GlobalNamespace::MissionObjectiveTypeCollection::GetMissionObjectiveTypeByName)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3756750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveTypeCollection*>(), { "GetMissionObjectiveTypeByName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::MissionObjectiveTypeSO>>*&
GlobalNamespace::MissionObjectiveTypeCollection::__cordl_internal_get__missionObjectiveTypeByName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionObjectiveTypeByName;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::MissionObjectiveTypeSO>>* const&
GlobalNamespace::MissionObjectiveTypeCollection::__cordl_internal_get__missionObjectiveTypeByName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionObjectiveTypeByName;
}
constexpr void GlobalNamespace::MissionObjectiveTypeCollection::__cordl_internal_set__missionObjectiveTypeByName(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::MissionObjectiveTypeSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionObjectiveTypeByName = value;
}
inline void GlobalNamespace::MissionObjectiveTypeCollection::_ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::MissionObjectiveTypeSO>>* missionObjectiveTypes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveTypeCollection*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::MissionObjectiveTypeSO>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, missionObjectiveTypes);
}
inline ::UnityW<::GlobalNamespace::MissionObjectiveTypeSO> GlobalNamespace::MissionObjectiveTypeCollection::GetMissionObjectiveTypeByName(::StringW objectiveName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveTypeCollection*>(), { "GetMissionObjectiveTypeByName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MissionObjectiveTypeSO>>(this, ___internal_method, objectiveName);
}
inline ::GlobalNamespace::MissionObjectiveTypeCollection*
GlobalNamespace::MissionObjectiveTypeCollection::New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::MissionObjectiveTypeSO>>* missionObjectiveTypes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionObjectiveTypeCollection*>(missionObjectiveTypes));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionObjectiveTypeCollection::MissionObjectiveTypeCollection() {}
