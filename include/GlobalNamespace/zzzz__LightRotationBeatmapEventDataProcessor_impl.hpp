#pragma once
// IWYU pragma private; include "GlobalNamespace\LightRotationBeatmapEventDataProcessor.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataProcessor_1_impl.hpp"
#include "GlobalNamespace/zzzz__LightRotationBeatmapEventDataProcessor_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "GlobalNamespace/zzzz__LightRotationBeatmapEventData_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightRotationBeatmapEventDataProcessor.ProcessInsertedEventDataInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightRotationBeatmapEventDataProcessor::*)(
    ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*)>(&::GlobalNamespace::LightRotationBeatmapEventDataProcessor::ProcessInsertedEventDataInternal)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x325bee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventDataProcessor*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventDataProcessor*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationBeatmapEventDataProcessor.ProcessBeforeDeleteEventDataInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightRotationBeatmapEventDataProcessor::*)(
    ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*)>(&::GlobalNamespace::LightRotationBeatmapEventDataProcessor::ProcessBeforeDeleteEventDataInternal)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x325bfd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventDataProcessor*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventDataProcessor*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationBeatmapEventDataProcessor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightRotationBeatmapEventDataProcessor::*)()>(&::GlobalNamespace::LightRotationBeatmapEventDataProcessor::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x325c0c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventDataProcessor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void
GlobalNamespace::LightRotationBeatmapEventDataProcessor::ProcessInsertedEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* insertedNode) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventDataProcessor*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, insertedNode);
}
inline void
GlobalNamespace::LightRotationBeatmapEventDataProcessor::ProcessBeforeDeleteEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* nodeToDelete) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventDataProcessor*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodeToDelete);
}
inline void GlobalNamespace::LightRotationBeatmapEventDataProcessor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventDataProcessor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LightRotationBeatmapEventDataProcessor* GlobalNamespace::LightRotationBeatmapEventDataProcessor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightRotationBeatmapEventDataProcessor*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightRotationBeatmapEventDataProcessor::LightRotationBeatmapEventDataProcessor() {}
