#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/NotBurstCompatible/Extensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/NotBurstCompatible/zzzz__Extensions_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeAppendBuffer_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelHashSet_1_def.hpp"
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::NotBurstCompatible::Extensions.AddNBC
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer>, ::StringW)>(
    &::Unity::Collections::LowLevel::Unsafe::NotBurstCompatible::Extensions::AddNBC)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x63197dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::NotBurstCompatible::Extensions*>::get(), "AddNBC", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::NotBurstCompatible::Extensions.ToBytesNBC
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer>)>(
    &::Unity::Collections::LowLevel::Unsafe::NotBurstCompatible::Extensions::ToBytesNBC)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x631986c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::NotBurstCompatible::Extensions*>::get(), "ToBytesNBC", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::NotBurstCompatible::Extensions.ReadNextNBC
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer_Reader>, ::ByRef<::StringW>)>(
    &::Unity::Collections::LowLevel::Unsafe::NotBurstCompatible::Extensions::ReadNextNBC)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6319920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::NotBurstCompatible::Extensions*>::get(), "ReadNextNBC", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer_Reader>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
template <typename T>
inline ::ArrayW<T, ::Array<T>*> Unity::Collections::LowLevel::Unsafe::NotBurstCompatible::Extensions::ToArray(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T> set) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::NotBurstCompatible::Extensions*>::get(), "ToArray",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T, ::Array<T>*>, false>(nullptr, ___internal_method, set);
}
inline void Unity::Collections::LowLevel::Unsafe::NotBurstCompatible::Extensions::AddNBC(::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer> buffer, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::NotBurstCompatible::Extensions*>::get(), "AddNBC", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, buffer, value);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*>
Unity::Collections::LowLevel::Unsafe::NotBurstCompatible::Extensions::ToBytesNBC(::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer> buffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::NotBurstCompatible::Extensions*>::get(), "ToBytesNBC", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, buffer);
}
inline void Unity::Collections::LowLevel::Unsafe::NotBurstCompatible::Extensions::ReadNextNBC(::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer_Reader> reader,
                                                                                              ::ByRef<::StringW> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::NotBurstCompatible::Extensions*>::get(), "ReadNextNBC", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer_Reader>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, reader, value);
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::NotBurstCompatible::Extensions::Extensions() {}
