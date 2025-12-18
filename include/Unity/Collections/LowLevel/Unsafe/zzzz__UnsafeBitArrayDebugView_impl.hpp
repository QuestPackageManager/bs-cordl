#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeBitArrayDebugView.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeBitArray_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeBitArrayDebugView_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeBitArray_def.hpp"
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView::*)(
    ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x63184c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView.get_Bits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<bool, ::Array<bool>*> (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView::*)()>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView::get_Bits)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x63184dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView*>::get(), "get_Bits",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray& Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView::__cordl_internal_get_Data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Data;
}
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray const& Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView::__cordl_internal_get_Data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Data;
}
constexpr void Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView::__cordl_internal_set_Data(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Data = value;
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView::_ctor(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline ::ArrayW<bool, ::Array<bool>*> Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView::get_Bits() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView*>::get(), "get_Bits",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<bool, ::Array<bool>*>, false>(this, ___internal_method);
}
inline ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView*
Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView::New_ctor(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray data) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView*>(data));
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView::UnsafeBitArrayDebugView() {}
