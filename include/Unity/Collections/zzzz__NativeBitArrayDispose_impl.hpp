#pragma once
// IWYU pragma private; include "Unity/Collections/NativeBitArrayDispose.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_impl.hpp"
#include "Unity/Collections/zzzz__NativeBitArrayDispose_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeBitArray_def.hpp"
//  Writing Method size for method: ::Unity::Collections::NativeBitArrayDispose.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::NativeBitArrayDispose::*)()>(&::Unity::Collections::NativeBitArrayDispose::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x630cab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeBitArrayDispose>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Collections::NativeBitArrayDispose::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeBitArrayDispose>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_BitArrayData", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Allocator", ty:
// "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::NativeBitArrayDispose::NativeBitArrayDispose(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray* m_BitArrayData,
                                                                             ::Unity::Collections::AllocatorManager_AllocatorHandle m_Allocator) noexcept {
  this->m_BitArrayData = m_BitArrayData;
  this->m_Allocator = m_Allocator;
}
// Ctor Parameters []
constexpr ::Unity::Collections::NativeBitArrayDispose::NativeBitArrayDispose() {}
