#pragma once
// IWYU pragma private; include "Unity/Burst/CompilerServices/Hint.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Burst/CompilerServices/zzzz__Hint_def.hpp"
//  Writing Method size for method: ::Unity::Burst::CompilerServices::Hint.Likely
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(bool)>(&::Unity::Burst::CompilerServices::Hint::Likely)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f0f94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::CompilerServices::Hint*>::get(), "Likely",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::CompilerServices::Hint.Unlikely
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(bool)>(&::Unity::Burst::CompilerServices::Hint::Unlikely)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f0f9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::CompilerServices::Hint*>::get(), "Unlikely",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::CompilerServices::Hint.Assume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Unity::Burst::CompilerServices::Hint::Assume)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62f0fa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::CompilerServices::Hint*>::get(), "Assume",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline bool Unity::Burst::CompilerServices::Hint::Likely(bool condition) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::CompilerServices::Hint*>::get(), "Likely",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, condition);
}
inline bool Unity::Burst::CompilerServices::Hint::Unlikely(bool condition) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::CompilerServices::Hint*>::get(), "Unlikely",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, condition);
}
inline void Unity::Burst::CompilerServices::Hint::Assume(bool condition) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::CompilerServices::Hint*>::get(), "Assume",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, condition);
}
// Ctor Parameters []
constexpr ::Unity::Burst::CompilerServices::Hint::Hint() {}
