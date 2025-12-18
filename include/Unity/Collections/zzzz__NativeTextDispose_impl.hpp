#pragma once
// IWYU pragma private; include "Unity/Collections/NativeTextDispose.hpp"
#include "Unity/Collections/zzzz__NativeTextDispose_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeText_def.hpp"
//  Writing Method size for method: ::Unity::Collections::NativeTextDispose.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::NativeTextDispose::*)()>(&::Unity::Collections::NativeTextDispose::Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63109a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeTextDispose>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Collections::NativeTextDispose::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeTextDispose>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_TextData", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeText*", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::NativeTextDispose::NativeTextDispose(::Unity::Collections::LowLevel::Unsafe::UnsafeText* m_TextData) noexcept {
  this->m_TextData = m_TextData;
}
// Ctor Parameters []
constexpr ::Unity::Collections::NativeTextDispose::NativeTextDispose() {}
