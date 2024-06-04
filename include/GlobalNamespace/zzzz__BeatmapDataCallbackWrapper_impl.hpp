#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapDataCallbackWrapper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataCallbackWrapper._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::BeatmapDataCallbackWrapper::*)(float_t, ::System::Type*, ::ArrayW<int32_t, ::Array<int32_t>*>)>(&::GlobalNamespace::BeatmapDataCallbackWrapper::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2629920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataCallbackWrapper*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataCallbackWrapper.CallCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapDataCallbackWrapper::*)(::GlobalNamespace::BeatmapDataItem*)>(
    &::GlobalNamespace::BeatmapDataCallbackWrapper::CallCallback)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataCallbackWrapper*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataCallbackWrapper*>::get(), 4));
    return ___internal_method;
  }
};
constexpr ::System::Type*& GlobalNamespace::BeatmapDataCallbackWrapper::__cordl_internal_get_BasicBeatmapEventType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BasicBeatmapEventType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& GlobalNamespace::BeatmapDataCallbackWrapper::__cordl_internal_get_BasicBeatmapEventType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BasicBeatmapEventType;
}
constexpr void GlobalNamespace::BeatmapDataCallbackWrapper::__cordl_internal_set_BasicBeatmapEventType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___BasicBeatmapEventType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::BeatmapDataCallbackWrapper::__cordl_internal_get_aheadTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___aheadTime;
}
constexpr float_t const& GlobalNamespace::BeatmapDataCallbackWrapper::__cordl_internal_get_aheadTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___aheadTime;
}
constexpr void GlobalNamespace::BeatmapDataCallbackWrapper::__cordl_internal_set_aheadTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___aheadTime = value;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& GlobalNamespace::BeatmapDataCallbackWrapper::__cordl_internal_get_subtypeIdentifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subtypeIdentifiers;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& GlobalNamespace::BeatmapDataCallbackWrapper::__cordl_internal_get_subtypeIdentifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subtypeIdentifiers;
}
constexpr void GlobalNamespace::BeatmapDataCallbackWrapper::__cordl_internal_set_subtypeIdentifiers(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___subtypeIdentifiers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::BeatmapDataCallbackWrapper* GlobalNamespace::BeatmapDataCallbackWrapper::New_ctor(float_t aheadTime, ::System::Type* BasicBeatmapEventType,
                                                                                                            ::ArrayW<int32_t, ::Array<int32_t>*> subtypeIdentifiers) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatmapDataCallbackWrapper*>(aheadTime, BasicBeatmapEventType, subtypeIdentifiers));
}
inline void GlobalNamespace::BeatmapDataCallbackWrapper::_ctor(float_t aheadTime, ::System::Type* BasicBeatmapEventType, ::ArrayW<int32_t, ::Array<int32_t>*> subtypeIdentifiers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataCallbackWrapper*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aheadTime, BasicBeatmapEventType, subtypeIdentifiers);
}
inline void GlobalNamespace::BeatmapDataCallbackWrapper::CallCallback(::GlobalNamespace::BeatmapDataItem* beatmapData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataCallbackWrapper*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapData);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper::BeatmapDataCallbackWrapper() {}
