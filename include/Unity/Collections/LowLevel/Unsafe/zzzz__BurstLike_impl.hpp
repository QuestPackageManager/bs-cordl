#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/BurstLike.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__BurstLike_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__BurstLike_def.hpp"
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<T>::_ctor(void* buffer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<T>>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer);
}
template <typename T> inline ::ByRef<T> Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<T>::get_Data() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<T>>::get(), "get_Data",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<T>, false>(this, ___internal_method);
}
template <typename T>
template <typename TContext>
inline ::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<T> Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<T>::GetOrCreate(uint32_t alignment) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<T>>::get(), "GetOrCreate",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContext>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContext>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<T>, false>(nullptr, ___internal_method, alignment);
}
// Ctor Parameters [CppParam { name: "_buffer", ty: "void*", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<T>::BurstLike_SharedStatic_1(void* _buffer) noexcept {
  this->_buffer = _buffer;
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<T>::BurstLike_SharedStatic_1() {}
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic.GetOrCreateSharedStaticInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(int64_t, int64_t, uint32_t, uint32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic::GetOrCreateSharedStaticInternal)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6892f38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic*>::get(), "GetOrCreateSharedStaticInternal",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
inline void* Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic::GetOrCreateSharedStaticInternal(int64_t getHashCode64, int64_t getSubHashCode64, uint32_t sizeOf, uint32_t alignment) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic*>::get(), "GetOrCreateSharedStaticInternal",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, getHashCode64, getSubHashCode64, sizeOf, alignment);
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic::BurstLike_SharedStatic() {}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::BurstLike::BurstLike() {}
