#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Profiling/EngineEmitter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/Profiling/zzzz__EngineEmitter_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "UnityEngine/ResourceManagement/Profiling/zzzz__IProfilerEmitter_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Profiling::EngineEmitter.get_IsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ResourceManagement::Profiling::EngineEmitter::*)()>(
    &::UnityEngine::ResourceManagement::Profiling::EngineEmitter::get_IsEnabled)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x676bff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Profiling::EngineEmitter*>::get(), "get_IsEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Profiling::EngineEmitter.EmitFrameMetaData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::Profiling::EngineEmitter::*)(::System::Guid, int32_t, ::System::Array*)>(
    &::UnityEngine::ResourceManagement::Profiling::EngineEmitter::EmitFrameMetaData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x676c01c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Profiling::EngineEmitter*>::get(), "EmitFrameMetaData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Profiling::EngineEmitter.InitialiseCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::Profiling::EngineEmitter::*)(::System::Action_1<float_t>*)>(
    &::UnityEngine::ResourceManagement::Profiling::EngineEmitter::InitialiseCallbacks)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x676c020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Profiling::EngineEmitter*>::get(), "InitialiseCallbacks", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Profiling::EngineEmitter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::Profiling::EngineEmitter::*)()>(
    &::UnityEngine::ResourceManagement::Profiling::EngineEmitter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x676c078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Profiling::EngineEmitter*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool UnityEngine::ResourceManagement::Profiling::EngineEmitter::get_IsEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Profiling::EngineEmitter*>::get(), "get_IsEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::Profiling::EngineEmitter::EmitFrameMetaData(::System::Guid id, int32_t tag, ::System::Array* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Profiling::EngineEmitter*>::get(), "EmitFrameMetaData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, tag, data);
}
inline void UnityEngine::ResourceManagement::Profiling::EngineEmitter::InitialiseCallbacks(::System::Action_1<float_t>* d) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Profiling::EngineEmitter*>::get(), "InitialiseCallbacks", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, d);
}
inline void UnityEngine::ResourceManagement::Profiling::EngineEmitter::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Profiling::EngineEmitter*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::Profiling::EngineEmitter* UnityEngine::ResourceManagement::Profiling::EngineEmitter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::Profiling::EngineEmitter*>());
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::Profiling::IProfilerEmitter"
constexpr UnityEngine::ResourceManagement::Profiling::EngineEmitter::operator ::UnityEngine::ResourceManagement::Profiling::IProfilerEmitter*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Profiling::IProfilerEmitter*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::Profiling::IProfilerEmitter"
constexpr ::UnityEngine::ResourceManagement::Profiling::IProfilerEmitter*
UnityEngine::ResourceManagement::Profiling::EngineEmitter::i___UnityEngine__ResourceManagement__Profiling__IProfilerEmitter() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Profiling::IProfilerEmitter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Profiling::EngineEmitter::EngineEmitter() {}
