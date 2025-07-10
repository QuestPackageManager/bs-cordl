#pragma once
// IWYU pragma private; include "Unity/Burst/CompilerServices/Constant.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Burst/CompilerServices/zzzz__Constant_def.hpp"
//  Writing Method size for method: ::Unity::Burst::CompilerServices::Constant.IsConstantExpression
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::cordl_internals::Ptr<void>)>(&::Unity::Burst::CompilerServices::Constant::IsConstantExpression)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x453b600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::CompilerServices::Constant*>::get(), "IsConstantExpression", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get() })));
    return ___internal_method;
  }
};
template <typename T> inline bool Unity::Burst::CompilerServices::Constant::IsConstantExpression(T t) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::CompilerServices::Constant*>::get(), "IsConstantExpression",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, t);
}
inline bool Unity::Burst::CompilerServices::Constant::IsConstantExpression(::cordl_internals::Ptr<void> t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::CompilerServices::Constant*>::get(), "IsConstantExpression", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, t);
}
// Ctor Parameters []
constexpr ::Unity::Burst::CompilerServices::Constant::Constant() {}
