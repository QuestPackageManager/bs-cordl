#pragma once
// IWYU pragma private; include "GlobalNamespace/ArrayExtension.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ArrayExtension_def.hpp"
#include "System/zzzz__Array_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ArrayExtension.IsValidIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Array*, int32_t)>(&::GlobalNamespace::ArrayExtension::IsValidIndex)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x225ee0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ArrayExtension*>::get(), "IsValidIndex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::ArrayExtension::IsValidIndex(::System::Array* array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ArrayExtension*>::get(), "IsValidIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, array, index);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ArrayExtension::ArrayExtension() {}
