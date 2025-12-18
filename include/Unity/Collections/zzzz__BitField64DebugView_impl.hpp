#pragma once
// IWYU pragma private; include "Unity/Collections/BitField64DebugView.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__BitField64_impl.hpp"
#include "Unity/Collections/zzzz__BitField64DebugView_def.hpp"
#include "Unity/Collections/zzzz__BitField64_def.hpp"
//  Writing Method size for method: ::Unity::Collections::BitField64DebugView._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::BitField64DebugView::*)(::Unity::Collections::BitField64)>(
    &::Unity::Collections::BitField64DebugView::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f5788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::BitField64DebugView*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::BitField64>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::BitField64DebugView.get_Bits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<bool, ::Array<bool>*> (::Unity::Collections::BitField64DebugView::*)()>(
    &::Unity::Collections::BitField64DebugView::get_Bits)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x62f5790;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::BitField64DebugView*>::get(), "get_Bits",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Unity::Collections::BitField64& Unity::Collections::BitField64DebugView::__cordl_internal_get_Data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Data;
}
constexpr ::Unity::Collections::BitField64 const& Unity::Collections::BitField64DebugView::__cordl_internal_get_Data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Data;
}
constexpr void Unity::Collections::BitField64DebugView::__cordl_internal_set_Data(::Unity::Collections::BitField64 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Data = value;
}
inline void Unity::Collections::BitField64DebugView::_ctor(::Unity::Collections::BitField64 data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::BitField64DebugView*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::BitField64>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline ::ArrayW<bool, ::Array<bool>*> Unity::Collections::BitField64DebugView::get_Bits() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::BitField64DebugView*>::get(), "get_Bits",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<bool, ::Array<bool>*>, false>(this, ___internal_method);
}
inline ::Unity::Collections::BitField64DebugView* Unity::Collections::BitField64DebugView::New_ctor(::Unity::Collections::BitField64 data) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Collections::BitField64DebugView*>(data));
}
// Ctor Parameters []
constexpr ::Unity::Collections::BitField64DebugView::BitField64DebugView() {}
