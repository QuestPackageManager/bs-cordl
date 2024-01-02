#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__BeatmapSaveDataItem_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem.get_time
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem::*)()>(
    &::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem::get_time)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem::*)(
    ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*)>(&::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem::CompareTo)> {
  constexpr static std::size_t size = 0x10b0;
  constexpr static std::size_t addrs = 0xe0914c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>::get(), "CompareTo", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem::*)()>(
    &::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08e7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IComparable_1<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>"
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem::operator ::System::IComparable_1<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>*() noexcept {
  return static_cast<::System::IComparable_1<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>*>(static_cast<void*>(this));
}
inline float_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem::get_time() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem::CompareTo(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem* other) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>::get(), "CompareTo", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
inline ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem* BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>());
}
inline void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem::BeatmapSaveDataItem() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
