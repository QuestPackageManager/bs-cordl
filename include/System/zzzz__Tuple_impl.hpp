#pragma once
// IWYU pragma private; include "System/Tuple.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Tuple_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
#include "System/zzzz__Tuple_3_def.hpp"
#include "System/zzzz__Tuple_4_def.hpp"
//  Writing Method size for method: ::System::Tuple.CombineHashCodes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, int32_t)>(&::System::Tuple::CombineHashCodes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3da1b40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple*>::get(), "CombineHashCodes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Tuple.CombineHashCodes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, int32_t, int32_t)>(&::System::Tuple::CombineHashCodes)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3da1b4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple*>::get(), "CombineHashCodes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Tuple.CombineHashCodes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, int32_t, int32_t, int32_t)>(&::System::Tuple::CombineHashCodes)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3da1b60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple*>::get(), "CombineHashCodes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
template <typename T1, typename T2> inline ::System::Tuple_2<T1, T2>* System::Tuple::Create(T1 item1, T2 item2) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple*>::get(), "Create",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Tuple_2<T1, T2>*, false>(nullptr, ___internal_method, item1, item2);
}
template <typename T1, typename T2, typename T3> inline ::System::Tuple_3<T1, T2, T3>* System::Tuple::Create(T1 item1, T2 item2, T3 item3) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple*>::get(), "Create",
      std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T3>::get() })));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base, std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(),
                                                                  ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Tuple_3<T1, T2, T3>*, false>(nullptr, ___internal_method, item1, item2, item3);
}
template <typename T1, typename T2, typename T3, typename T4> inline ::System::Tuple_4<T1, T2, T3, T4>* System::Tuple::Create(T1 item1, T2 item2, T3 item3, T4 item4) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple*>::get(), "Create",
      std::array<Il2CppClass const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T4>::get() },
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T4>::get() })));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base,
      std::array<Il2CppClass const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T4>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Tuple_4<T1, T2, T3, T4>*, false>(nullptr, ___internal_method, item1, item2, item3, item4);
}
inline int32_t System::Tuple::CombineHashCodes(int32_t h1, int32_t h2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple*>::get(), "CombineHashCodes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, h1, h2);
}
inline int32_t System::Tuple::CombineHashCodes(int32_t h1, int32_t h2, int32_t h3) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple*>::get(), "CombineHashCodes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, h1, h2, h3);
}
inline int32_t System::Tuple::CombineHashCodes(int32_t h1, int32_t h2, int32_t h3, int32_t h4) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Tuple*>::get(), "CombineHashCodes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, h1, h2, h3, h4);
}
// Ctor Parameters []
constexpr ::System::Tuple::Tuple() {}
