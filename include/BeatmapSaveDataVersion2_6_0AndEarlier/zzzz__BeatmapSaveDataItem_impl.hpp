#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__BeatmapSaveDataItem_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__IBeat_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem.get_beat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem::*)()>(
    &::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem::get_beat)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x14f43d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>::get(), "get_beat",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem.get_time
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem::*)()>(
    &::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem::get_time)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem::*)()>(
    &::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14f4170;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::BeatmapSaveDataCommon::IBeat"
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem::operator ::BeatmapSaveDataCommon::IBeat*() noexcept {
  return static_cast<::BeatmapSaveDataCommon::IBeat*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatmapSaveDataCommon::IBeat"
constexpr ::BeatmapSaveDataCommon::IBeat* BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem::i___BeatmapSaveDataCommon__IBeat() noexcept {
  return static_cast<::BeatmapSaveDataCommon::IBeat*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>"
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem::operator ::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>*() noexcept {
  return static_cast<::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>"
constexpr ::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>* BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem::i___System__IComparable_1___BeatmapSaveDataCommon__IBeat__() noexcept {
  return static_cast<::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>*>(static_cast<void*>(this));
}
inline float_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem::get_beat() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>::get(), "get_beat",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem::get_time() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem* BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>());
}
inline void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem::BeatmapSaveDataItem() {}
