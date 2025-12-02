#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityPlayerLoopManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__UnityPlayerLoopManager_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/LowLevel/zzzz__PlayerLoopSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UnityPlayerLoopManager.InitializePlayerLoop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::UnityPlayerLoopManager::InitializePlayerLoop)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5637f08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityPlayerLoopManager*>::get(),
                                                                               "InitializePlayerLoop", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityPlayerLoopManager.RemoveDisabledSubsystems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::UnityEngine::LowLevel::PlayerLoopSystem>, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>)>(
    &::GlobalNamespace::UnityPlayerLoopManager::RemoveDisabledSubsystems)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x56380c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityPlayerLoopManager*>::get(), "RemoveDisabledSubsystems", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::LowLevel::PlayerLoopSystem>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::UnityPlayerLoopManager::InitializePlayerLoop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityPlayerLoopManager*>::get(),
                                                                             "InitializePlayerLoop", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::UnityPlayerLoopManager::RemoveDisabledSubsystems(::ByRef<::UnityEngine::LowLevel::PlayerLoopSystem> loop,
                                                                              ::ArrayW<::System::Type*, ::Array<::System::Type*>*> typesToRemove) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityPlayerLoopManager*>::get(), "RemoveDisabledSubsystems", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::LowLevel::PlayerLoopSystem>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, loop, typesToRemove);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnityPlayerLoopManager::UnityPlayerLoopManager() {}
