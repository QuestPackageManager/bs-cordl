#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__DefaultAllocationStrategy_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__IAllocationStrategy_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy.New
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy::*)(::System::Type*, int32_t)>(
    &::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy::New)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2bd2014;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy*>::get(), "New", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy::*)(int32_t, ::System::Object*)>(
    &::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy::Release)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2bd2020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy*>::get(), "Release", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy::*)()>(
    &::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bd2024;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::IAllocationStrategy"
constexpr UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy::operator ::UnityEngine::ResourceManagement::Util::IAllocationStrategy*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::IAllocationStrategy*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::Util::IAllocationStrategy"
constexpr ::UnityEngine::ResourceManagement::Util::IAllocationStrategy*
UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy::i___UnityEngine__ResourceManagement__Util__IAllocationStrategy() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::IAllocationStrategy*>(static_cast<void*>(this));
}
inline ::System::Object* UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy::New(::System::Type* type, int32_t typeHash) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy*>::get(), "New", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, type, typeHash);
}
inline void UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy::Release(int32_t typeHash, ::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy*>::get(), "Release", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, typeHash, obj);
}
inline ::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy* UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy*>());
}
inline void UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy::DefaultAllocationStrategy() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
