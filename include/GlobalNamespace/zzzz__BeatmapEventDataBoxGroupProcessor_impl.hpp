#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapEventDataBoxGroupProcessor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBoxGroupProcessor_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBoxGroup_def.hpp"
#include "GlobalNamespace/zzzz__ISortedListItemProcessor_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroupProcessor.get_dirtyBoxGroups
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* (
    ::GlobalNamespace::BeatmapEventDataBoxGroupProcessor::*)()>(&::GlobalNamespace::BeatmapEventDataBoxGroupProcessor::get_dirtyBoxGroups)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3718718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroupProcessor*>(), { "get_dirtyBoxGroups", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroupProcessor.ProcessInsertedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapEventDataBoxGroupProcessor::*)(
    ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*)>(&::GlobalNamespace::BeatmapEventDataBoxGroupProcessor::ProcessInsertedData)> {
  constexpr static std::size_t size = 0x5cc;
  constexpr static std::size_t addrs = 0x3718720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroupProcessor*>(),
                                                { "ProcessInsertedData", {}, { ::i2c::type_of<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroupProcessor.ProcessBeforeDeleteData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapEventDataBoxGroupProcessor::*)(
    ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*)>(&::GlobalNamespace::BeatmapEventDataBoxGroupProcessor::ProcessBeforeDeleteData)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x3718cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroupProcessor*>(),
                                         { "ProcessBeforeDeleteData", {}, { ::i2c::type_of<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroupProcessor.ClearDirtyData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapEventDataBoxGroupProcessor::*)()>(&::GlobalNamespace::BeatmapEventDataBoxGroupProcessor::ClearDirtyData)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3717c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroupProcessor*>(), { "ClearDirtyData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroupProcessor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapEventDataBoxGroupProcessor::*)()>(&::GlobalNamespace::BeatmapEventDataBoxGroupProcessor::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3717878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroupProcessor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*& GlobalNamespace::BeatmapEventDataBoxGroupProcessor::__cordl_internal_get__dirtyBoxGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dirtyBoxGroups;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* const&
GlobalNamespace::BeatmapEventDataBoxGroupProcessor::__cordl_internal_get__dirtyBoxGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dirtyBoxGroups;
}
constexpr void
GlobalNamespace::BeatmapEventDataBoxGroupProcessor::__cordl_internal_set__dirtyBoxGroups(::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dirtyBoxGroups = value;
}
inline ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* GlobalNamespace::BeatmapEventDataBoxGroupProcessor::get_dirtyBoxGroups() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroupProcessor*>(), { "get_dirtyBoxGroups", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapEventDataBoxGroupProcessor::ProcessInsertedData(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* insertedNode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroupProcessor*>(),
                                              { "ProcessInsertedData", {}, { ::i2c::type_of<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, insertedNode);
}
inline void GlobalNamespace::BeatmapEventDataBoxGroupProcessor::ProcessBeforeDeleteData(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* nodeToDelete) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroupProcessor*>(),
                                       { "ProcessBeforeDeleteData", {}, { ::i2c::type_of<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodeToDelete);
}
inline void GlobalNamespace::BeatmapEventDataBoxGroupProcessor::ClearDirtyData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroupProcessor*>(), { "ClearDirtyData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapEventDataBoxGroupProcessor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroupProcessor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapEventDataBoxGroupProcessor* GlobalNamespace::BeatmapEventDataBoxGroupProcessor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapEventDataBoxGroupProcessor*>());
}
/// @brief Convert operator to "::GlobalNamespace::ISortedListItemProcessor_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>"
constexpr GlobalNamespace::BeatmapEventDataBoxGroupProcessor::operator ::GlobalNamespace::ISortedListItemProcessor_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*() noexcept {
  return static_cast<::GlobalNamespace::ISortedListItemProcessor_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ISortedListItemProcessor_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>"
constexpr ::GlobalNamespace::ISortedListItemProcessor_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*
GlobalNamespace::BeatmapEventDataBoxGroupProcessor::i___GlobalNamespace__ISortedListItemProcessor_1___GlobalNamespace__BeatmapEventDataBoxGroup__() noexcept {
  return static_cast<::GlobalNamespace::ISortedListItemProcessor_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapEventDataBoxGroupProcessor::BeatmapEventDataBoxGroupProcessor() {}
