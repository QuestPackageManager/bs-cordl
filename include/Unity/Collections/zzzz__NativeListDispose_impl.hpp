#pragma once
// IWYU pragma private; include "Unity/Collections/NativeListDispose.hpp"
#include "Unity/Collections/zzzz__NativeListDispose_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UntypedUnsafeList_def.hpp"
//  Writing Method size for method: ::Unity::Collections::NativeListDispose.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::NativeListDispose::*)()>(&::Unity::Collections::NativeListDispose::Dispose)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x630cb20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeListDispose>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Collections::NativeListDispose::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeListDispose>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_ListData", ty: "::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeList*", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::NativeListDispose::NativeListDispose(::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeList* m_ListData) noexcept {
  this->m_ListData = m_ListData;
}
// Ctor Parameters []
constexpr ::Unity::Collections::NativeListDispose::NativeListDispose() {}
