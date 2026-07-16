#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapCharacteristicCollection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollection_def.hpp"
#include "GlobalNamespace/zzzz__AppStaticSettingsSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollectionSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollection_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicCollection___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicCollection___c::*)()>(&::GlobalNamespace::BeatmapCharacteristicCollection___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x370c6c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicCollection___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicCollection___c.__ctor_b__3_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapCharacteristic (::GlobalNamespace::BeatmapCharacteristicCollection___c::*)(
    ::GlobalNamespace::BeatmapCharacteristicSO*)>(&::GlobalNamespace::BeatmapCharacteristicCollection___c::__ctor_b__3_0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x370c6cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicCollection___c*>(),
                                                                                           { "<.ctor>b__3_0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristicSO*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapCharacteristicCollection___c::setStaticF___9(::GlobalNamespace::BeatmapCharacteristicCollection___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BeatmapCharacteristicCollection___c*, "<>9", ::GlobalNamespace::BeatmapCharacteristicCollection___c*>(
      std::forward<::GlobalNamespace::BeatmapCharacteristicCollection___c*>(value));
}
inline ::GlobalNamespace::BeatmapCharacteristicCollection___c* GlobalNamespace::BeatmapCharacteristicCollection___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BeatmapCharacteristicCollection___c*, "<>9", ::GlobalNamespace::BeatmapCharacteristicCollection___c*>();
}
inline void
GlobalNamespace::BeatmapCharacteristicCollection___c::setStaticF___9__3_0(::System::Func_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapCharacteristic>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapCharacteristic>*, "<>9__3_0",
                                    ::GlobalNamespace::BeatmapCharacteristicCollection___c*>(
      std::forward<::System::Func_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapCharacteristic>*>(value));
}
inline ::System::Func_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapCharacteristic>* GlobalNamespace::BeatmapCharacteristicCollection___c::getStaticF___9__3_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapCharacteristic>*, "<>9__3_0",
                                           ::GlobalNamespace::BeatmapCharacteristicCollection___c*>();
}
inline void GlobalNamespace::BeatmapCharacteristicCollection___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicCollection___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapCharacteristic GlobalNamespace::BeatmapCharacteristicCollection___c::__ctor_b__3_0(::GlobalNamespace::BeatmapCharacteristicSO* c) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicCollection___c*>(),
                                                                                         { "<.ctor>b__3_0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristicSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapCharacteristic>(this, ___internal_method, c);
}
inline ::GlobalNamespace::BeatmapCharacteristicCollection___c* GlobalNamespace::BeatmapCharacteristicCollection___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapCharacteristicCollection___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapCharacteristicCollection___c::BeatmapCharacteristicCollection___c() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicCollection::*)(
    ::GlobalNamespace::BeatmapCharacteristicCollectionSO*, ::GlobalNamespace::AppStaticSettingsSO*)>(&::GlobalNamespace::BeatmapCharacteristicCollection::_ctor)> {
  constexpr static std::size_t size = 0x64c;
  constexpr static std::size_t addrs = 0x370bc28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicCollection*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristicCollectionSO*>(), ::i2c::type_of<::GlobalNamespace::AppStaticSettingsSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicCollection.GetBeatmapCharacteristicBySerializedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> (::GlobalNamespace::BeatmapCharacteristicCollection::*)(::StringW)>(
    &::GlobalNamespace::BeatmapCharacteristicCollection::GetBeatmapCharacteristicBySerializedName)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x370c488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicCollection*>(), { "GetBeatmapCharacteristicBySerializedName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicCollection.GetBeatmapCharacteristicIcon
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (::GlobalNamespace::BeatmapCharacteristicCollection::*)(::GlobalNamespace::BeatmapCharacteristic)>(
    &::GlobalNamespace::BeatmapCharacteristicCollection::GetBeatmapCharacteristicIcon)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x370c508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicCollection*>(),
                                                                                           { "GetBeatmapCharacteristicIcon", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*&
GlobalNamespace::BeatmapCharacteristicCollection::__cordl_internal_get__beatmapCharacteristicsBySerializedName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicsBySerializedName;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* const&
GlobalNamespace::BeatmapCharacteristicCollection::__cordl_internal_get__beatmapCharacteristicsBySerializedName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicsBySerializedName;
}
constexpr void GlobalNamespace::BeatmapCharacteristicCollection::__cordl_internal_set__beatmapCharacteristicsBySerializedName(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCharacteristicsBySerializedName = value;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapCharacteristic>*& GlobalNamespace::BeatmapCharacteristicCollection::__cordl_internal_get_beatmapCharacteristics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapCharacteristics;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapCharacteristic>* const&
GlobalNamespace::BeatmapCharacteristicCollection::__cordl_internal_get_beatmapCharacteristics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapCharacteristics;
}
constexpr void
GlobalNamespace::BeatmapCharacteristicCollection::__cordl_internal_set_beatmapCharacteristics(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapCharacteristic>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapCharacteristics = value;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapCharacteristic>*&
GlobalNamespace::BeatmapCharacteristicCollection::__cordl_internal_get_disabledBeatmapCharacteristics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disabledBeatmapCharacteristics;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapCharacteristic>* const&
GlobalNamespace::BeatmapCharacteristicCollection::__cordl_internal_get_disabledBeatmapCharacteristics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disabledBeatmapCharacteristics;
}
constexpr void GlobalNamespace::BeatmapCharacteristicCollection::__cordl_internal_set_disabledBeatmapCharacteristics(
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapCharacteristic>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disabledBeatmapCharacteristics = value;
}
inline void GlobalNamespace::BeatmapCharacteristicCollection::_ctor(::GlobalNamespace::BeatmapCharacteristicCollectionSO* collection, ::GlobalNamespace::AppStaticSettingsSO* appStaticSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicCollection*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristicCollectionSO*>(), ::i2c::type_of<::GlobalNamespace::AppStaticSettingsSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collection, appStaticSettings);
}
inline ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> GlobalNamespace::BeatmapCharacteristicCollection::GetBeatmapCharacteristicBySerializedName(::StringW serializedName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicCollection*>(), { "GetBeatmapCharacteristicBySerializedName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>(this, ___internal_method, serializedName);
}
inline ::UnityW<::UnityEngine::Sprite> GlobalNamespace::BeatmapCharacteristicCollection::GetBeatmapCharacteristicIcon(::GlobalNamespace::BeatmapCharacteristic characteristic) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicCollection*>(),
                                                                                         { "GetBeatmapCharacteristicIcon", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(this, ___internal_method, characteristic);
}
inline ::GlobalNamespace::BeatmapCharacteristicCollection* GlobalNamespace::BeatmapCharacteristicCollection::New_ctor(::GlobalNamespace::BeatmapCharacteristicCollectionSO* collection,
                                                                                                                      ::GlobalNamespace::AppStaticSettingsSO* appStaticSettings) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapCharacteristicCollection*>(collection, appStaticSettings));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapCharacteristicCollection::BeatmapCharacteristicCollection() {}
