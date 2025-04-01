#pragma once
// IWYU pragma private; include "GlobalNamespace/LightRotationBeatmapEventDataProcessor.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataProcessor_1_impl.hpp"
#include "GlobalNamespace/zzzz__LightRotationBeatmapEventDataProcessor_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "GlobalNamespace/zzzz__LightRotationBeatmapEventData_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightRotationBeatmapEventDataProcessor.ProcessInsertedEventDataInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightRotationBeatmapEventDataProcessor::*)(
    ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*)>(&::GlobalNamespace::LightRotationBeatmapEventDataProcessor::ProcessInsertedEventDataInternal)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2240fc0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationBeatmapEventDataProcessor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationBeatmapEventDataProcessor*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationBeatmapEventDataProcessor.ProcessBeforeDeleteEventDataInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightRotationBeatmapEventDataProcessor::*)(
    ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*)>(&::GlobalNamespace::LightRotationBeatmapEventDataProcessor::ProcessBeforeDeleteEventDataInternal)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x22410d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationBeatmapEventDataProcessor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationBeatmapEventDataProcessor*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationBeatmapEventDataProcessor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightRotationBeatmapEventDataProcessor::*)()>(
    &::GlobalNamespace::LightRotationBeatmapEventDataProcessor::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x22411cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationBeatmapEventDataProcessor*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void
GlobalNamespace::LightRotationBeatmapEventDataProcessor::ProcessInsertedEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* insertedNode) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationBeatmapEventDataProcessor*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, insertedNode);
}
inline void
GlobalNamespace::LightRotationBeatmapEventDataProcessor::ProcessBeforeDeleteEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* nodeToDelete) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationBeatmapEventDataProcessor*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nodeToDelete);
}
inline void GlobalNamespace::LightRotationBeatmapEventDataProcessor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationBeatmapEventDataProcessor*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LightRotationBeatmapEventDataProcessor* GlobalNamespace::LightRotationBeatmapEventDataProcessor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LightRotationBeatmapEventDataProcessor*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightRotationBeatmapEventDataProcessor::LightRotationBeatmapEventDataProcessor() {}
