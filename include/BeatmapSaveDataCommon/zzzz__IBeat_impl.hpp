#pragma once
// IWYU pragma private; include "BeatmapSaveDataCommon/IBeat.hpp"
#include "BeatmapSaveDataCommon/zzzz__IBeat_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataCommon::IBeat.get_beat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataCommon::IBeat::*)()>(&::BeatmapSaveDataCommon::IBeat::get_beat)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataCommon::IBeat*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataCommon::IBeat*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataCommon::IBeat.System_IComparable_BeatmapSaveDataCommon_IBeat__CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataCommon::IBeat::*)(::BeatmapSaveDataCommon::IBeat*)>(
    &::BeatmapSaveDataCommon::IBeat::System_IComparable_BeatmapSaveDataCommon_IBeat__CompareTo)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x3662320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataCommon::IBeat*>::get(), "System.IComparable<BeatmapSaveDataCommon.IBeat>.CompareTo",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataCommon::IBeat*>::get() })));
    return ___internal_method;
  }
};
inline float_t BeatmapSaveDataCommon::IBeat::get_beat() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataCommon::IBeat*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline int32_t BeatmapSaveDataCommon::IBeat::System_IComparable_BeatmapSaveDataCommon_IBeat__CompareTo(::BeatmapSaveDataCommon::IBeat* other) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataCommon::IBeat*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>"
constexpr BeatmapSaveDataCommon::IBeat::operator ::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>*() noexcept {
  return static_cast<::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>"
constexpr ::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>* BeatmapSaveDataCommon::IBeat::i___System__IComparable_1___BeatmapSaveDataCommon__IBeat__() noexcept {
  return static_cast<::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>*>(static_cast<void*>(this));
}
