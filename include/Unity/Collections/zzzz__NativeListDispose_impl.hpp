#pragma once
// IWYU pragma private; include "Unity\Collections\NativeListDispose.hpp"
#include "Unity/Collections/zzzz__NativeListDispose_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UntypedUnsafeList_def.hpp"
//  Writing Method size for method: ::Unity::Collections::NativeListDispose.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeListDispose::*)()>(&::Unity::Collections::NativeListDispose::Dispose)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x64c319c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeListDispose>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Collections::NativeListDispose::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeListDispose>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_ListData", ty: "::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeList*", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::NativeListDispose::NativeListDispose(::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeList* m_ListData) noexcept {
  this->m_ListData = m_ListData;
}
// Ctor Parameters []
constexpr ::Unity::Collections::NativeListDispose::NativeListDispose() {}
