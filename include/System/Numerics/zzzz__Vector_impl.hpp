#pragma once
// IWYU pragma private; include "System/Numerics/Vector.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Numerics/zzzz__Vector_def.hpp"
#include "System/Numerics/zzzz__Vector_1_def.hpp"
//  Writing Method size for method: ::System::Numerics::Vector.get_IsHardwareAccelerated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Numerics::Vector::get_IsHardwareAccelerated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d35b50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector*>::get(), "get_IsHardwareAccelerated",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
template <typename T> inline ::System::Numerics::Vector_1<T> System::Numerics::Vector::Equals(::System::Numerics::Vector_1<T> left, ::System::Numerics::Vector_1<T> right) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector*>::get(), "Equals",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::Vector_1<T>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::Vector_1<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::Vector_1<T>, false>(nullptr, ___internal_method, left, right);
}
inline bool System::Numerics::Vector::get_IsHardwareAccelerated() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector*>::get(), "get_IsHardwareAccelerated",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
template <typename T> inline ::System::Numerics::Vector_1<uint64_t> System::Numerics::Vector::AsVectorUInt64(::System::Numerics::Vector_1<T> value) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector*>::get(), "AsVectorUInt64",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::Vector_1<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::Vector_1<uint64_t>, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::System::Numerics::Vector::Vector() {}
