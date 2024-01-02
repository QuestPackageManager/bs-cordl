#pragma once
#include "GlobalNamespace/zzzz__BeatmapEventDataProcessor_1_impl.hpp"
#include "GlobalNamespace/zzzz__LightColorBeatmapEventData_impl.hpp"
#include "GlobalNamespace/zzzz__LightColorBeatmapEventDataProcessor_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightColorBeatmapEventDataProcessor.ProcessInsertedEventDataInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightColorBeatmapEventDataProcessor::*)(
    ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*)>(&::GlobalNamespace::LightColorBeatmapEventDataProcessor::ProcessInsertedEventDataInternal)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xdff99c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorBeatmapEventDataProcessor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorBeatmapEventDataProcessor*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightColorBeatmapEventDataProcessor.ProcessBeforeDeleteEventDataInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightColorBeatmapEventDataProcessor::*)(
    ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*)>(&::GlobalNamespace::LightColorBeatmapEventDataProcessor::ProcessBeforeDeleteEventDataInternal)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xdffac4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorBeatmapEventDataProcessor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorBeatmapEventDataProcessor*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightColorBeatmapEventDataProcessor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightColorBeatmapEventDataProcessor::*)()>(
    &::GlobalNamespace::LightColorBeatmapEventDataProcessor::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xdffbcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorBeatmapEventDataProcessor*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void
GlobalNamespace::LightColorBeatmapEventDataProcessor::ProcessInsertedEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* insertedNode) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorBeatmapEventDataProcessor*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, insertedNode);
}
inline void
GlobalNamespace::LightColorBeatmapEventDataProcessor::ProcessBeforeDeleteEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* nodeToDelete) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorBeatmapEventDataProcessor*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nodeToDelete);
}
inline ::GlobalNamespace::LightColorBeatmapEventDataProcessor* GlobalNamespace::LightColorBeatmapEventDataProcessor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LightColorBeatmapEventDataProcessor*>());
}
inline void GlobalNamespace::LightColorBeatmapEventDataProcessor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorBeatmapEventDataProcessor*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightColorBeatmapEventDataProcessor::LightColorBeatmapEventDataProcessor() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
