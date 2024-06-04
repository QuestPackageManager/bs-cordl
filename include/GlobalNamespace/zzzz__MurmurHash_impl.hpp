#pragma once
// IWYU pragma private; include "GlobalNamespace/MurmurHash.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MurmurHash_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MurmurHash.MurmurHash2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::StringW)>(&::GlobalNamespace::MurmurHash::MurmurHash2)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x150a81c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MurmurHash*>::get(), "MurmurHash2", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline uint32_t GlobalNamespace::MurmurHash::MurmurHash2(::StringW key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MurmurHash*>::get(), "MurmurHash2", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, key);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MurmurHash::MurmurHash() {}
