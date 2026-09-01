#pragma once
// IWYU pragma private; include "Unity\Collections\NativeReferenceDispose.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_impl.hpp"
#include "Unity/Collections/zzzz__NativeReferenceDispose_def.hpp"
//  Writing Method size for method: ::Unity::Collections::NativeReferenceDispose.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeReferenceDispose::*)()>(&::Unity::Collections::NativeReferenceDispose::Dispose)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x64c323c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeReferenceDispose>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Collections::NativeReferenceDispose::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeReferenceDispose>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Data", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::NativeReferenceDispose::NativeReferenceDispose(void* m_Data, ::Unity::Collections::AllocatorManager_AllocatorHandle m_AllocatorLabel) noexcept {
  this->m_Data = m_Data;
  this->m_AllocatorLabel = m_AllocatorLabel;
}
// Ctor Parameters []
constexpr ::Unity::Collections::NativeReferenceDispose::NativeReferenceDispose() {}
