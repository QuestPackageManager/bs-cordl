#pragma once
#include "Unity/Collections/zzzz__Allocator_impl.hpp"
#include "Unity/Collections/zzzz__NativeArrayDispose_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
//  Writing Method size for method: ::Unity::Collections::NativeArrayDispose.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::NativeArrayDispose::*)()>(&::Unity::Collections::NativeArrayDispose::Dispose)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b392c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeArrayDispose>::get(), "Dispose",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void Unity::Collections::NativeArrayDispose::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeArrayDispose>::get(), "Dispose",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_AllocatorLabel", ty:
// "::Unity::Collections::Allocator", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::NativeArrayDispose::NativeArrayDispose(::cordl_internals::Ptr<void> m_Buffer, ::Unity::Collections::Allocator m_AllocatorLabel) noexcept {
  this->m_Buffer = m_Buffer;
  this->m_AllocatorLabel = m_AllocatorLabel;
}
// Ctor Parameters []
constexpr ::Unity::Collections::NativeArrayDispose::NativeArrayDispose() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
