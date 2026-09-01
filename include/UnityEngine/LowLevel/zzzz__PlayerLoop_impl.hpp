#pragma once
// IWYU pragma private; include "UnityEngine\LowLevel\PlayerLoop.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/LowLevel/zzzz__PlayerLoop_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/LowLevel/zzzz__PlayerLoopSystemInternal_def.hpp"
#include "UnityEngine/LowLevel/zzzz__PlayerLoopSystem_def.hpp"
//  Writing Method size for method: ::UnityEngine::LowLevel::PlayerLoop.GetCurrentPlayerLoop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevel::PlayerLoopSystem (*)()>(&::UnityEngine::LowLevel::PlayerLoop::GetCurrentPlayerLoop)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6b014d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevel::PlayerLoop*>(), { "GetCurrentPlayerLoop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevel::PlayerLoop.SetPlayerLoop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::LowLevel::PlayerLoopSystem)>(&::UnityEngine::LowLevel::PlayerLoop::SetPlayerLoop)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6b0175c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevel::PlayerLoop*>(), { "SetPlayerLoop", {}, { ::i2c::type_of<::UnityEngine::LowLevel::PlayerLoopSystem>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevel::PlayerLoop.PlayerLoopSystemToInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<int32_t (*)(::UnityEngine::LowLevel::PlayerLoopSystem, ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::LowLevel::PlayerLoopSystemInternal>*>)>(
        &::UnityEngine::LowLevel::PlayerLoop::PlayerLoopSystemToInternal)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x6b01844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevel::PlayerLoop*>(),
                                                             { "PlayerLoopSystemToInternal",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::LowLevel::PlayerLoopSystem>(),
                                                                 ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::LowLevel::PlayerLoopSystemInternal>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevel::PlayerLoop.InternalToPlayerLoopSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevel::PlayerLoopSystem (*)(::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystemInternal>, ::by_ref<int32_t>)>(
    &::UnityEngine::LowLevel::PlayerLoop::InternalToPlayerLoopSystem)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x6b01564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevel::PlayerLoop*>(),
                            { "InternalToPlayerLoopSystem", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystemInternal>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevel::PlayerLoop.GetCurrentPlayerLoopInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystemInternal> (*)()>(&::UnityEngine::LowLevel::PlayerLoop::GetCurrentPlayerLoopInternal)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b0153c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevel::PlayerLoop*>(), { "GetCurrentPlayerLoopInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevel::PlayerLoop.SetPlayerLoopInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystemInternal>)>(&::UnityEngine::LowLevel::PlayerLoop::SetPlayerLoopInternal)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b019f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevel::PlayerLoop*>(),
                                                             { "SetPlayerLoopInternal", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystemInternal>>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::LowLevel::PlayerLoopSystem UnityEngine::LowLevel::PlayerLoop::GetCurrentPlayerLoop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevel::PlayerLoop*>(), { "GetCurrentPlayerLoop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevel::PlayerLoopSystem>(nullptr, ___internal_method);
}
inline void UnityEngine::LowLevel::PlayerLoop::SetPlayerLoop(::UnityEngine::LowLevel::PlayerLoopSystem loop) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevel::PlayerLoop*>(), { "SetPlayerLoop", {}, { ::i2c::type_of<::UnityEngine::LowLevel::PlayerLoopSystem>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, loop);
}
inline int32_t UnityEngine::LowLevel::PlayerLoop::PlayerLoopSystemToInternal(::UnityEngine::LowLevel::PlayerLoopSystem sys,
                                                                             ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::LowLevel::PlayerLoopSystemInternal>*> internalSys) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevel::PlayerLoop*>(),
                                                           { "PlayerLoopSystemToInternal",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::LowLevel::PlayerLoopSystem>(),
                                                               ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::LowLevel::PlayerLoopSystemInternal>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sys, internalSys);
}
inline ::UnityEngine::LowLevel::PlayerLoopSystem UnityEngine::LowLevel::PlayerLoop::InternalToPlayerLoopSystem(::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystemInternal> internalSys,
                                                                                                               ::by_ref<int32_t> offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevel::PlayerLoop*>(),
                                       { "InternalToPlayerLoopSystem", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystemInternal>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevel::PlayerLoopSystem>(nullptr, ___internal_method, internalSys, offset);
}
inline ::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystemInternal> UnityEngine::LowLevel::PlayerLoop::GetCurrentPlayerLoopInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevel::PlayerLoop*>(), { "GetCurrentPlayerLoopInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystemInternal>>(nullptr, ___internal_method);
}
inline void UnityEngine::LowLevel::PlayerLoop::SetPlayerLoopInternal(::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystemInternal> loop) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevel::PlayerLoop*>(),
                                                           { "SetPlayerLoopInternal", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystemInternal>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, loop);
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevel::PlayerLoop::PlayerLoop() {}
