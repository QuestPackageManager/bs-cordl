#pragma once
// IWYU pragma private; include "Unity\Collections\NativeStreamDispose.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeStream_impl.hpp"
#include "Unity/Collections/zzzz__NativeStreamDispose_def.hpp"
//  Writing Method size for method: ::Unity::Collections::NativeStreamDispose.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeStreamDispose::*)()>(&::Unity::Collections::NativeStreamDispose::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64c3c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStreamDispose>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Collections::NativeStreamDispose::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStreamDispose>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_StreamData", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeStream", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::NativeStreamDispose::NativeStreamDispose(::Unity::Collections::LowLevel::Unsafe::UnsafeStream m_StreamData) noexcept {
  this->m_StreamData = m_StreamData;
}
// Ctor Parameters []
constexpr ::Unity::Collections::NativeStreamDispose::NativeStreamDispose() {}
