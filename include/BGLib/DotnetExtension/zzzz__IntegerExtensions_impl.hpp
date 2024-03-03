#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/DotnetExtension/zzzz__IntegerExtensions_def.hpp"
//  Writing Method size for method: ::BGLib::DotnetExtension::IntegerExtensions.ToUInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ByRef<uint32_t>, ByRef<bool>)>(&::BGLib::DotnetExtension::IntegerExtensions::ToUInt)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xe8ddf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::IntegerExtensions*>::get(), "ToUInt", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
inline void BGLib::DotnetExtension::IntegerExtensions::ToUInt(int32_t number, ByRef<uint32_t> uNumber, ByRef<bool> isNegative) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::IntegerExtensions*>::get(), "ToUInt", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, number, uNumber, isNegative);
}
// Ctor Parameters []
constexpr ::BGLib::DotnetExtension::IntegerExtensions::IntegerExtensions() {}
