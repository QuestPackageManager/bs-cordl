#pragma once
// IWYU pragma private; include "Unity/Collections/DeallocateOnJobCompletionAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/Collections/zzzz__DeallocateOnJobCompletionAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Collections::DeallocateOnJobCompletionAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::DeallocateOnJobCompletionAttribute::*)()>(
    &::Unity::Collections::DeallocateOnJobCompletionAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6892e20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DeallocateOnJobCompletionAttribute*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Collections::DeallocateOnJobCompletionAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::DeallocateOnJobCompletionAttribute*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Collections::DeallocateOnJobCompletionAttribute* Unity::Collections::DeallocateOnJobCompletionAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Collections::DeallocateOnJobCompletionAttribute*>());
}
// Ctor Parameters []
constexpr ::Unity::Collections::DeallocateOnJobCompletionAttribute::DeallocateOnJobCompletionAttribute() {}
