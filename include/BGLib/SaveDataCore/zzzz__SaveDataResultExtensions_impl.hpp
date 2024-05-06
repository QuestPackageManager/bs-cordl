#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/SaveDataCore/zzzz__SaveDataResultExtensions_def.hpp"
#include "BGLib/SaveDataCore/zzzz__SaveDataResult_def.hpp"
//  Writing Method size for method: ::BGLib::SaveDataCore::SaveDataResultExtensions.IsError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::BGLib::SaveDataCore::SaveDataResult)>(&::BGLib::SaveDataCore::SaveDataResultExtensions::IsError)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x108260c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::SaveDataResultExtensions*>::get(), "IsError", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::SaveDataCore::SaveDataResult>::get() })));
    return ___internal_method;
  }
};
inline bool BGLib::SaveDataCore::SaveDataResultExtensions::IsError(::BGLib::SaveDataCore::SaveDataResult result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::SaveDataResultExtensions*>::get(), "IsError", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::SaveDataCore::SaveDataResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::BGLib::SaveDataCore::SaveDataResultExtensions::SaveDataResultExtensions() {}
