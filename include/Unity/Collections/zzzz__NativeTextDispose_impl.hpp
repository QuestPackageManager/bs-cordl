#pragma once
// IWYU pragma private; include "Unity\Collections\NativeTextDispose.hpp"
#include "Unity/Collections/zzzz__NativeTextDispose_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeText_def.hpp"
//  Writing Method size for method: ::Unity::Collections::NativeTextDispose.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeTextDispose::*)()>(&::Unity::Collections::NativeTextDispose::Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64c7020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeTextDispose>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Collections::NativeTextDispose::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeTextDispose>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_TextData", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeText*", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::NativeTextDispose::NativeTextDispose(::Unity::Collections::LowLevel::Unsafe::UnsafeText* m_TextData) noexcept {
  this->m_TextData = m_TextData;
}
// Ctor Parameters []
constexpr ::Unity::Collections::NativeTextDispose::NativeTextDispose() {}
