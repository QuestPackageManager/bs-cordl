#pragma once
// IWYU pragma private; include "GlobalNamespace/CallbacksInTime.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CallbacksInTime_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CallbacksInTime.get_isEmpty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::CallbacksInTime::*)()>(&::GlobalNamespace::CallbacksInTime::get_isEmpty)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3a82860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CallbacksInTime*>::get(), "get_isEmpty",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CallbacksInTime._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CallbacksInTime::*)(float_t)>(&::GlobalNamespace::CallbacksInTime::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3a83a98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CallbacksInTime*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CallbacksInTime.AddCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CallbacksInTime::*)(::GlobalNamespace::BeatmapDataCallbackWrapper*)>(
    &::GlobalNamespace::CallbacksInTime::AddCallback)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x3a83b70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CallbacksInTime*>::get(), "AddCallback", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataCallbackWrapper*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CallbacksInTime.RemoveCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CallbacksInTime::*)(::GlobalNamespace::BeatmapDataCallbackWrapper*)>(
    &::GlobalNamespace::CallbacksInTime::RemoveCallback)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x3a82674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CallbacksInTime*>::get(), "RemoveCallback", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataCallbackWrapper*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CallbacksInTime.CallCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CallbacksInTime::*)(::GlobalNamespace::BeatmapDataItem*)>(
    &::GlobalNamespace::CallbacksInTime::CallCallbacks)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3a82a4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CallbacksInTime*>::get(), "CallCallbacks", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataItem*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CallbacksInTime.CallCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CallbacksInTime::*)(::System::Type*, ::GlobalNamespace::BeatmapDataItem*)>(
    &::GlobalNamespace::CallbacksInTime::CallCallbacks)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x3a83e60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CallbacksInTime*>::get(), "CallCallbacks", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataItem*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*& GlobalNamespace::CallbacksInTime::__cordl_internal_get_lastProcessedNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastProcessedNode;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*> const&
GlobalNamespace::CallbacksInTime::__cordl_internal_get_lastProcessedNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastProcessedNode;
}
constexpr void GlobalNamespace::CallbacksInTime::__cordl_internal_set_lastProcessedNode(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lastProcessedNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::CallbacksInTime::__cordl_internal_get_aheadTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___aheadTime;
}
constexpr float_t const& GlobalNamespace::CallbacksInTime::__cordl_internal_get_aheadTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___aheadTime;
}
constexpr void GlobalNamespace::CallbacksInTime::__cordl_internal_set_aheadTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___aheadTime = value;
}
constexpr ::GlobalNamespace::BeatmapEventData*& GlobalNamespace::CallbacksInTime::__cordl_internal_get_beatmapEventDataForCallbacksAfterNodeRemoval() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapEventDataForCallbacksAfterNodeRemoval;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapEventData*> const& GlobalNamespace::CallbacksInTime::__cordl_internal_get_beatmapEventDataForCallbacksAfterNodeRemoval() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapEventDataForCallbacksAfterNodeRemoval;
}
constexpr void GlobalNamespace::CallbacksInTime::__cordl_internal_set_beatmapEventDataForCallbacksAfterNodeRemoval(::GlobalNamespace::BeatmapEventData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapEventDataForCallbacksAfterNodeRemoval)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDataCallbackWrapper*>*>*&
GlobalNamespace::CallbacksInTime::__cordl_internal_get__callbacksWithSubtypeIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callbacksWithSubtypeIdentifier;
}
constexpr ::cordl_internals::to_const_pointer<
    ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDataCallbackWrapper*>*>*> const&
GlobalNamespace::CallbacksInTime::__cordl_internal_get__callbacksWithSubtypeIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callbacksWithSubtypeIdentifier;
}
constexpr void GlobalNamespace::CallbacksInTime::__cordl_internal_set__callbacksWithSubtypeIdentifier(
    ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDataCallbackWrapper*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____callbacksWithSubtypeIdentifier)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDataCallbackWrapper*>*>*&
GlobalNamespace::CallbacksInTime::__cordl_internal_get__callbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callbacks;
}
constexpr ::cordl_internals::to_const_pointer<
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDataCallbackWrapper*>*>*> const&
GlobalNamespace::CallbacksInTime::__cordl_internal_get__callbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callbacks;
}
constexpr void GlobalNamespace::CallbacksInTime::__cordl_internal_set__callbacks(
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDataCallbackWrapper*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____callbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool GlobalNamespace::CallbacksInTime::get_isEmpty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CallbacksInTime*>::get(), "get_isEmpty",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::CallbacksInTime* GlobalNamespace::CallbacksInTime::New_ctor(float_t aheadTime) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::CallbacksInTime*>(aheadTime));
}
inline void GlobalNamespace::CallbacksInTime::_ctor(float_t aheadTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CallbacksInTime*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aheadTime);
}
inline void GlobalNamespace::CallbacksInTime::AddCallback(::GlobalNamespace::BeatmapDataCallbackWrapper* callbackWrapper) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CallbacksInTime*>::get(), "AddCallback", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataCallbackWrapper*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callbackWrapper);
}
inline void GlobalNamespace::CallbacksInTime::RemoveCallback(::GlobalNamespace::BeatmapDataCallbackWrapper* callbackWrapper) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CallbacksInTime*>::get(), "RemoveCallback", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataCallbackWrapper*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callbackWrapper);
}
inline void GlobalNamespace::CallbacksInTime::CallCallbacks(::GlobalNamespace::BeatmapDataItem* beatmapDataItem) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CallbacksInTime*>::get(), "CallCallbacks", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataItem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapDataItem);
}
inline void GlobalNamespace::CallbacksInTime::CallCallbacks(::System::Type* beatmapEventDataType, ::GlobalNamespace::BeatmapDataItem* beatmapDataItem) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CallbacksInTime*>::get(), "CallCallbacks", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataItem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapEventDataType, beatmapDataItem);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CallbacksInTime::CallbacksInTime() {}
