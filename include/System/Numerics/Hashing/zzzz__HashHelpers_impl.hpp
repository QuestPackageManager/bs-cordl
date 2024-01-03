#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Numerics/Hashing/zzzz__HashHelpers_def.hpp"
//  Writing Method size for method: ::System::Numerics::Hashing::HashHelpers.Combine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, int32_t)>(&::System::Numerics::Hashing::HashHelpers::Combine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x24fbef8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Hashing::HashHelpers*>::get(), "Combine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void System::Numerics::Hashing::HashHelpers::setStaticF_RandomSeed(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "RandomSeed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Hashing::HashHelpers*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Numerics::Hashing::HashHelpers::getStaticF_RandomSeed() {
  return ::cordl_internals::getStaticField<int32_t, "RandomSeed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Hashing::HashHelpers*>::get>();
}
inline int32_t System::Numerics::Hashing::HashHelpers::Combine(int32_t h1, int32_t h2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Hashing::HashHelpers*>::get(), "Combine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, h1, h2);
}
// Ctor Parameters []
constexpr ::System::Numerics::Hashing::HashHelpers::HashHelpers() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
