#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapEventDataBoxGroupLists.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBoxGroupLists_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBoxGroupList_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBoxGroup_def.hpp"
#include "GlobalNamespace/zzzz__IBeatToTimeConverter_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLightEventConverter_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroupLists._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapEventDataBoxGroupLists::*)(
    ::GlobalNamespace::BeatmapData*, ::GlobalNamespace::IBeatToTimeConverter*, bool, ::GlobalNamespace::IBeatmapLightEventConverter*)>(&::GlobalNamespace::BeatmapEventDataBoxGroupLists::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x37181bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroupLists*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::BeatmapData*>(), ::i2c::type_of<::GlobalNamespace::IBeatToTimeConverter*>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<::GlobalNamespace::IBeatmapLightEventConverter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroupLists.Insert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* (
    ::GlobalNamespace::BeatmapEventDataBoxGroupLists::*)(int32_t, ::GlobalNamespace::BeatmapEventDataBoxGroup*)>(&::GlobalNamespace::BeatmapEventDataBoxGroupLists::Insert)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x3718284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroupLists*>(),
                                                             { "Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BeatmapEventDataBoxGroup*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroupLists.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapEventDataBoxGroupLists::*)(
    int32_t, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*)>(&::GlobalNamespace::BeatmapEventDataBoxGroupLists::Remove)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x37183ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroupLists*>(),
                            { "Remove", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroupLists.ToggleUpdateBeatmapDataOnInsert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapEventDataBoxGroupLists::*)(bool)>(
    &::GlobalNamespace::BeatmapEventDataBoxGroupLists::ToggleUpdateBeatmapDataOnInsert)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x371846c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroupLists*>(), { "ToggleUpdateBeatmapDataOnInsert", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroupLists.SyncWithBeatmapData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapEventDataBoxGroupLists::*)()>(&::GlobalNamespace::BeatmapEventDataBoxGroupLists::SyncWithBeatmapData)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x37185c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroupLists*>(), { "SyncWithBeatmapData", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::BeatmapEventDataBoxGroupList*>*&
GlobalNamespace::BeatmapEventDataBoxGroupLists::__cordl_internal_get__beatmapEventDataBoxGroupListDict() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEventDataBoxGroupListDict;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::BeatmapEventDataBoxGroupList*>* const&
GlobalNamespace::BeatmapEventDataBoxGroupLists::__cordl_internal_get__beatmapEventDataBoxGroupListDict() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEventDataBoxGroupListDict;
}
constexpr void GlobalNamespace::BeatmapEventDataBoxGroupLists::__cordl_internal_set__beatmapEventDataBoxGroupListDict(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::BeatmapEventDataBoxGroupList*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapEventDataBoxGroupListDict = value;
}
constexpr ::GlobalNamespace::BeatmapData*& GlobalNamespace::BeatmapEventDataBoxGroupLists::__cordl_internal_get__beatmapData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapData;
}
constexpr ::GlobalNamespace::BeatmapData* const& GlobalNamespace::BeatmapEventDataBoxGroupLists::__cordl_internal_get__beatmapData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapData;
}
constexpr void GlobalNamespace::BeatmapEventDataBoxGroupLists::__cordl_internal_set__beatmapData(::GlobalNamespace::BeatmapData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapData = value;
}
constexpr ::GlobalNamespace::IBeatToTimeConverter*& GlobalNamespace::BeatmapEventDataBoxGroupLists::__cordl_internal_get__beatToTimeConverter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatToTimeConverter;
}
constexpr ::GlobalNamespace::IBeatToTimeConverter* const& GlobalNamespace::BeatmapEventDataBoxGroupLists::__cordl_internal_get__beatToTimeConverter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatToTimeConverter;
}
constexpr void GlobalNamespace::BeatmapEventDataBoxGroupLists::__cordl_internal_set__beatToTimeConverter(::GlobalNamespace::IBeatToTimeConverter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatToTimeConverter = value;
}
constexpr bool& GlobalNamespace::BeatmapEventDataBoxGroupLists::__cordl_internal_get__updateBeatmapDataOnInsert() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updateBeatmapDataOnInsert;
}
constexpr bool const& GlobalNamespace::BeatmapEventDataBoxGroupLists::__cordl_internal_get__updateBeatmapDataOnInsert() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updateBeatmapDataOnInsert;
}
constexpr void GlobalNamespace::BeatmapEventDataBoxGroupLists::__cordl_internal_set__updateBeatmapDataOnInsert(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____updateBeatmapDataOnInsert = value;
}
constexpr ::GlobalNamespace::IBeatmapLightEventConverter*& GlobalNamespace::BeatmapEventDataBoxGroupLists::__cordl_internal_get__lightEventConverter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightEventConverter;
}
constexpr ::GlobalNamespace::IBeatmapLightEventConverter* const& GlobalNamespace::BeatmapEventDataBoxGroupLists::__cordl_internal_get__lightEventConverter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightEventConverter;
}
constexpr void GlobalNamespace::BeatmapEventDataBoxGroupLists::__cordl_internal_set__lightEventConverter(::GlobalNamespace::IBeatmapLightEventConverter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightEventConverter = value;
}
inline void GlobalNamespace::BeatmapEventDataBoxGroupLists::_ctor(::GlobalNamespace::BeatmapData* beatmapData, ::GlobalNamespace::IBeatToTimeConverter* beatToTimeConverter,
                                                                  bool updateBeatmapDataOnInsert, ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroupLists*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::BeatmapData*>(), ::i2c::type_of<::GlobalNamespace::IBeatToTimeConverter*>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<::GlobalNamespace::IBeatmapLightEventConverter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapData, beatToTimeConverter, updateBeatmapDataOnInsert, lightEventConverter);
}
inline ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*
GlobalNamespace::BeatmapEventDataBoxGroupLists::Insert(int32_t groupId, ::GlobalNamespace::BeatmapEventDataBoxGroup* beatmapEventDataBoxGroup) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroupLists*>(),
                                                           { "Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BeatmapEventDataBoxGroup*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*>(this, ___internal_method, groupId,
                                                                                                                                              beatmapEventDataBoxGroup);
}
inline void GlobalNamespace::BeatmapEventDataBoxGroupLists::Remove(int32_t groupId, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* nodeToDelete) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroupLists*>(),
                          { "Remove", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupId, nodeToDelete);
}
inline void GlobalNamespace::BeatmapEventDataBoxGroupLists::ToggleUpdateBeatmapDataOnInsert(bool enableUpdateOnInsert) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroupLists*>(), { "ToggleUpdateBeatmapDataOnInsert", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enableUpdateOnInsert);
}
inline void GlobalNamespace::BeatmapEventDataBoxGroupLists::SyncWithBeatmapData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroupLists*>(), { "SyncWithBeatmapData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapEventDataBoxGroupLists* GlobalNamespace::BeatmapEventDataBoxGroupLists::New_ctor(::GlobalNamespace::BeatmapData* beatmapData,
                                                                                                                  ::GlobalNamespace::IBeatToTimeConverter* beatToTimeConverter,
                                                                                                                  bool updateBeatmapDataOnInsert,
                                                                                                                  ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapEventDataBoxGroupLists*>(beatmapData, beatToTimeConverter, updateBeatmapDataOnInsert, lightEventConverter));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapEventDataBoxGroupLists::BeatmapEventDataBoxGroupLists() {}
