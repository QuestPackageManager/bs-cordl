#pragma once
// IWYU pragma private; include "GlobalNamespace/FileUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__FileUtility_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FileUtility.GetPlatformPersistentDataPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(bool)>(&::GlobalNamespace::FileUtility::GetPlatformPersistentDataPath)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x22a204c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileUtility*>::get(), "GetPlatformPersistentDataPath",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::FileUtility::GetPlatformPersistentDataPath(bool local) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileUtility*>::get(), "GetPlatformPersistentDataPath",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, local);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FileUtility::FileUtility() {}
