#pragma once
// IWYU pragma private; include "Zenject/DefaultGameObjectKernel.hpp"
#include "Zenject/zzzz__MonoKernel_impl.hpp"
#include "Zenject/zzzz__DefaultGameObjectKernel_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
//  Writing Method size for method: ::Zenject::DefaultGameObjectKernel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DefaultGameObjectKernel::*)()>(&::Zenject::DefaultGameObjectKernel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4b4a7b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DefaultGameObjectKernel*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DefaultGameObjectKernel.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::DefaultGameObjectKernel::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x4b4a7c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DefaultGameObjectKernel*>::get(),
                                                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Zenject::DefaultGameObjectKernel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DefaultGameObjectKernel*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Zenject::InjectTypeInfo* Zenject::DefaultGameObjectKernel::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DefaultGameObjectKernel*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
inline ::Zenject::DefaultGameObjectKernel* Zenject::DefaultGameObjectKernel::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::DefaultGameObjectKernel*>());
}
// Ctor Parameters []
constexpr ::Zenject::DefaultGameObjectKernel::DefaultGameObjectKernel() {}
