#pragma once
// IWYU pragma private; include "Unity/Collections/BitField32DebugView.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__BitField32_impl.hpp"
#include "Unity/Collections/zzzz__BitField32DebugView_def.hpp"
#include "Unity/Collections/zzzz__BitField32_def.hpp"
//  Writing Method size for method: ::Unity::Collections::BitField32DebugView._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::BitField32DebugView::*)(::Unity::Collections::BitField32)>(
    &::Unity::Collections::BitField32DebugView::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x628d908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::BitField32DebugView*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::BitField32>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::BitField32DebugView.get_Bits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<bool, ::Array<bool>*> (::Unity::Collections::BitField32DebugView::*)()>(
    &::Unity::Collections::BitField32DebugView::get_Bits)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x628d910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::BitField32DebugView*>::get(), "get_Bits",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Unity::Collections::BitField32& Unity::Collections::BitField32DebugView::__cordl_internal_get_BitField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BitField;
}
constexpr ::Unity::Collections::BitField32 const& Unity::Collections::BitField32DebugView::__cordl_internal_get_BitField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BitField;
}
constexpr void Unity::Collections::BitField32DebugView::__cordl_internal_set_BitField(::Unity::Collections::BitField32 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___BitField = value;
}
inline void Unity::Collections::BitField32DebugView::_ctor(::Unity::Collections::BitField32 bitfield) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::BitField32DebugView*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::BitField32>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bitfield);
}
inline ::ArrayW<bool, ::Array<bool>*> Unity::Collections::BitField32DebugView::get_Bits() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::BitField32DebugView*>::get(), "get_Bits",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<bool, ::Array<bool>*>, false>(this, ___internal_method);
}
inline ::Unity::Collections::BitField32DebugView* Unity::Collections::BitField32DebugView::New_ctor(::Unity::Collections::BitField32 bitfield) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Collections::BitField32DebugView*>(bitfield));
}
// Ctor Parameters []
constexpr ::Unity::Collections::BitField32DebugView::BitField32DebugView() {}
