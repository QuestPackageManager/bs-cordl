#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeTextExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeTextExtensions_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeText_def.hpp"
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeTextExtensions.AsUnsafeListOfBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint8_t>> (*)(
    ::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeText>)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeTextExtensions::AsUnsafeListOfBytes)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6318de4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeTextExtensions*>::get(), "AsUnsafeListOfBytes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeText>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeTextExtensions.AsUnsafeListOfBytesRO
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint8_t> (*)(
    ::Unity::Collections::LowLevel::Unsafe::UnsafeText)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeTextExtensions::AsUnsafeListOfBytesRO)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6318e28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeTextExtensions*>::get(), "AsUnsafeListOfBytesRO", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::LowLevel::Unsafe::UnsafeText>::get() })));
    return ___internal_method;
  }
};
inline ::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint8_t>>
Unity::Collections::LowLevel::Unsafe::UnsafeTextExtensions::AsUnsafeListOfBytes(::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeText> text) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeTextExtensions*>::get(), "AsUnsafeListOfBytes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeText>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint8_t>>, false>(nullptr, ___internal_method, text);
}
inline ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint8_t>
Unity::Collections::LowLevel::Unsafe::UnsafeTextExtensions::AsUnsafeListOfBytesRO(::Unity::Collections::LowLevel::Unsafe::UnsafeText text) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeTextExtensions*>::get(), "AsUnsafeListOfBytesRO", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::LowLevel::Unsafe::UnsafeText>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint8_t>, false>(nullptr, ___internal_method, text);
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeTextExtensions::UnsafeTextExtensions() {}
