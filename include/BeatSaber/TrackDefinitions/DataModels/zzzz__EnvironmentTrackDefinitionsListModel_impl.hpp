#pragma once
// IWYU pragma private; include "BeatSaber\TrackDefinitions\DataModels\EnvironmentTrackDefinitionsListModel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/TrackDefinitions/DataModels/zzzz__EnvironmentTrackDefinitionsListModel_def.hpp"
#include "BeatSaber/TrackDefinitions/DataModels/zzzz__EnvironmentTrackDefinitionModel_def.hpp"
#include "BeatSaber/TrackDefinitions/DataModels/zzzz__EnvironmentTrackDefinitionsListModel_def.hpp"
#include "BeatSaber/TrackDefinitions/zzzz__EnvironmentTracksDefinitionSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c::*)()>(
    &::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32ee1ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c.__ctor_b__1_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::EnvironmentInfoSO> (::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c::*)(
    ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO*)>(&::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c::__ctor_b__1_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x32ee1b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c*>(),
                                                             { "<.ctor>b__1_0", {}, { ::i2c::type_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c.__ctor_b__1_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel* (
    ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c::*)(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO*)>(
    &::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c::__ctor_b__1_1)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x32ee1c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c*>(),
                                                             { "<.ctor>b__1_1", {}, { ::i2c::type_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO*>() } })));
    return ___internal_method;
  }
};
inline void
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c::setStaticF___9(::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c* value) {
  ::cordl_internals::setStaticField<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c*, "<>9",
                                    ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c*>(
      std::forward<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c*>(value));
}
inline ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c* BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c*, "<>9",
                                           ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c*>();
}
inline void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c::setStaticF___9__1_0(
    ::System::Func_2<::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*, "<>9__1_0",
                                    ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c*>(
      std::forward<::System::Func_2<::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*>(value));
}
inline ::System::Func_2<::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c::getStaticF___9__1_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*, "<>9__1_0",
                                           ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c*>();
}
inline void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c::setStaticF___9__1_1(
    ::System::Func_2<::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>, ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>, ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>*, "<>9__1_1",
      ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c*>(
      std::forward<::System::Func_2<::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>, ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>*>(value));
}
inline ::System::Func_2<::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>, ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c::getStaticF___9__1_1() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>, ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>*, "<>9__1_1",
      ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c*>();
}
inline void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::EnvironmentInfoSO>
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c::__ctor_b__1_0(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO* trackDefinition) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c*>(),
                                                           { "<.ctor>b__1_0", {}, { ::i2c::type_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>(this, ___internal_method, trackDefinition);
}
inline ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c::__ctor_b__1_1(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO* trackDefinition) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c*>(),
                                                           { "<.ctor>b__1_1", {}, { ::i2c::type_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>(this, ___internal_method, trackDefinition);
}
inline ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c* BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c::EnvironmentTrackDefinitionsListModel___c() {}
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel::*)(
    ::System::Collections::Generic::IEnumerable_1<::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>>*)>(
    &::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel::_ctor)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x32ec4a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel* (
    ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel::*)(::GlobalNamespace::EnvironmentInfoSO*)>(
    &::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel::get_Item)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x32ee0e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel*>(),
                                                                                           { "get_Item", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentInfoSO*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>*&
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel::__cordl_internal_get__environmentTracksTypeMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentTracksTypeMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>* const&
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel::__cordl_internal_get__environmentTracksTypeMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentTracksTypeMap;
}
constexpr void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel::__cordl_internal_set__environmentTracksTypeMap(
    ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentTracksTypeMap = value;
}
inline void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel::_ctor(
    ::System::Collections::Generic::IEnumerable_1<::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>>* environmentTrackDefinitions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, environmentTrackDefinitions);
}
inline ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel::get_Item(::GlobalNamespace::EnvironmentInfoSO* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel*>(),
                                                                                         { "get_Item", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentInfoSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>(this, ___internal_method, type);
}
inline ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel* BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel::New_ctor(
    ::System::Collections::Generic::IEnumerable_1<::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>>* environmentTrackDefinitions) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel*>(environmentTrackDefinitions));
}
// Ctor Parameters []
constexpr ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel::EnvironmentTrackDefinitionsListModel() {}
