#pragma once
// IWYU pragma private; include "Unity/IntegerTime/RationalTimeExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/IntegerTime/zzzz__RationalTimeExtensions_def.hpp"
#include "Unity/IntegerTime/zzzz__RationalTime_def.hpp"
//  Writing Method size for method: ::Unity::IntegerTime::RationalTimeExtensions.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::IntegerTime::RationalTime (*)(
    ::Unity::IntegerTime::RationalTime, ::Unity::IntegerTime::RationalTime_TicksPerSecond)>(&::Unity::IntegerTime::RationalTimeExtensions::Convert)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6828484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IntegerTime::RationalTimeExtensions*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::IntegerTime::RationalTime>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::IntegerTime::RationalTime_TicksPerSecond>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IntegerTime::RationalTimeExtensions.Convert_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ByRef<::Unity::IntegerTime::RationalTime>, ::ByRef<::Unity::IntegerTime::RationalTime_TicksPerSecond>, ::ByRef<::Unity::IntegerTime::RationalTime>)>(
        &::Unity::IntegerTime::RationalTimeExtensions::Convert_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6828990;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IntegerTime::RationalTimeExtensions*>::get(), "Convert_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::IntegerTime::RationalTime>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::IntegerTime::RationalTime_TicksPerSecond>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::IntegerTime::RationalTime>>::get() })));
    return ___internal_method;
  }
};
inline ::Unity::IntegerTime::RationalTime Unity::IntegerTime::RationalTimeExtensions::Convert(::Unity::IntegerTime::RationalTime time, ::Unity::IntegerTime::RationalTime_TicksPerSecond rate) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IntegerTime::RationalTimeExtensions*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::IntegerTime::RationalTime>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::IntegerTime::RationalTime_TicksPerSecond>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::IntegerTime::RationalTime, false>(nullptr, ___internal_method, time, rate);
}
inline void Unity::IntegerTime::RationalTimeExtensions::Convert_Injected(::ByRef<::Unity::IntegerTime::RationalTime> time, ::ByRef<::Unity::IntegerTime::RationalTime_TicksPerSecond> rate,
                                                                         ::ByRef<::Unity::IntegerTime::RationalTime> ret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IntegerTime::RationalTimeExtensions*>::get(), "Convert_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::IntegerTime::RationalTime>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::IntegerTime::RationalTime_TicksPerSecond>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::IntegerTime::RationalTime>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, time, rate, ret);
}
// Ctor Parameters []
constexpr ::Unity::IntegerTime::RationalTimeExtensions::RationalTimeExtensions() {}
