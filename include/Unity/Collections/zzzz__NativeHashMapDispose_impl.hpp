#pragma once
// IWYU pragma private; include "Unity/Collections/NativeHashMapDispose.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_impl.hpp"
#include "Unity/Collections/zzzz__NativeHashMapDispose_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeHashMap_2_def.hpp"
//  Writing Method size for method: ::Unity::Collections::NativeHashMapDispose.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeHashMapDispose::*)()>(&::Unity::Collections::NativeHashMapDispose::Dispose)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x64bd934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMapDispose>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Collections::NativeHashMapDispose::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMapDispose>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_HashMapData", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeHashMap_2<int32_t,int32_t>*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_Allocator", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::NativeHashMapDispose::NativeHashMapDispose(::Unity::Collections::LowLevel::Unsafe::UnsafeHashMap_2<int32_t, int32_t>* m_HashMapData,
                                                                           ::Unity::Collections::AllocatorManager_AllocatorHandle m_Allocator) noexcept {
  this->m_HashMapData = m_HashMapData;
  this->m_Allocator = m_Allocator;
}
// Ctor Parameters []
constexpr ::Unity::Collections::NativeHashMapDispose::NativeHashMapDispose() {}
