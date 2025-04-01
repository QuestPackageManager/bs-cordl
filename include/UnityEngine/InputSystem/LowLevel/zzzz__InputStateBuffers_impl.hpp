#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputStateBuffers.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateBuffers_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateBuffers_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers.get_valid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers::get_valid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4611018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers>::get(), "get_valid",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers.SetFrontBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers::*)(
    int32_t, ::cordl_internals::Ptr<void>)>(&::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers::SetFrontBuffer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4610a78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers>::get(), "SetFrontBuffer",
                                                 std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers.SetBackBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers::*)(
    int32_t, ::cordl_internals::Ptr<void>)>(&::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers::SetBackBuffer)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4610a88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers>::get(), "SetBackBuffer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers.GetFrontBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<void> (::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers::*)(int32_t)>(
    &::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers::GetFrontBuffer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4610818;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers>::get(), "GetFrontBuffer",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers.GetBackBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<void> (::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers::*)(int32_t)>(
    &::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers::GetBackBuffer)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4610880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers>::get(), "GetBackBuffer",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers.SwapBuffers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers::*)(int32_t)>(
    &::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers::SwapBuffers)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4611028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers>::get(), "SwapBuffers",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline bool UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers::get_valid() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers>::get(), "get_valid",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers::SetFrontBuffer(int32_t deviceIndex, ::cordl_internals::Ptr<void> ptr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers>::get(), "SetFrontBuffer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, deviceIndex, ptr);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers::SetBackBuffer(int32_t deviceIndex, ::cordl_internals::Ptr<void> ptr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers>::get(), "SetBackBuffer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, deviceIndex, ptr);
}
inline ::cordl_internals::Ptr<void> UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers::GetFrontBuffer(int32_t deviceIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers>::get(), "GetFrontBuffer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<void>, false>(this, ___internal_method, deviceIndex);
}
inline ::cordl_internals::Ptr<void> UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers::GetBackBuffer(int32_t deviceIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers>::get(), "GetBackBuffer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<void>, false>(this, ___internal_method, deviceIndex);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers::SwapBuffers(int32_t deviceIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers>::get(), "SwapBuffers",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, deviceIndex);
}
// Ctor Parameters [CppParam { name: "deviceToBufferMapping", ty: "::cordl_internals::Ptr<::cordl_internals::Ptr<void>>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers::InputStateBuffers_DoubleBuffers(::cordl_internals::Ptr<::cordl_internals::Ptr<void>> deviceToBufferMapping) noexcept {
  this->deviceToBufferMapping = deviceToBufferMapping;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers::InputStateBuffers_DoubleBuffers() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBuffers.GetDoubleBuffersFor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers (
    ::UnityEngine::InputSystem::LowLevel::InputStateBuffers::*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(
    &::UnityEngine::InputSystem::LowLevel::InputStateBuffers::GetDoubleBuffersFor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x46106f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>::get(), "GetDoubleBuffersFor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBuffers.GetFrontBufferForDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<void> (*)(int32_t)>(
    &::UnityEngine::InputSystem::LowLevel::InputStateBuffers::GetFrontBufferForDevice)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x46107c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>::get(), "GetFrontBufferForDevice",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBuffers.GetBackBufferForDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<void> (*)(int32_t)>(
    &::UnityEngine::InputSystem::LowLevel::InputStateBuffers::GetBackBufferForDevice)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x4610828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>::get(), "GetBackBufferForDevice",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBuffers.SwitchTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::InputSystem::LowLevel::InputStateBuffers, ::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(&::UnityEngine::InputSystem::LowLevel::InputStateBuffers::SwitchTo)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x4610894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>::get(), "SwitchTo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBuffers.AllocateAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateBuffers::*)(
    ::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*>, int32_t)>(&::UnityEngine::InputSystem::LowLevel::InputStateBuffers::AllocateAll)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x46108f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>::get(), "AllocateAll", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBuffers.SetUpDeviceToBufferMappings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers (*)(
    int32_t, ::ByRef<::cordl_internals::Ptr<uint8_t>>, uint32_t, uint32_t)>(&::UnityEngine::InputSystem::LowLevel::InputStateBuffers::SetUpDeviceToBufferMappings)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x4610a18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>::get(), "SetUpDeviceToBufferMappings", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::cordl_internals::Ptr<uint8_t>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBuffers.FreeAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateBuffers::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputStateBuffers::FreeAll)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x4610a9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>::get(),
                                                                               "FreeAll", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBuffers.MigrateAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateBuffers::*)(
    ::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*>, int32_t, ::UnityEngine::InputSystem::LowLevel::InputStateBuffers)>(
    &::UnityEngine::InputSystem::LowLevel::InputStateBuffers::MigrateAll)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x4610b5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>::get(), "MigrateAll", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBuffers.MigrateDoubleBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers, ::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*>,
                         int32_t, ::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers)>(&::UnityEngine::InputSystem::LowLevel::InputStateBuffers::MigrateDoubleBuffer)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x4610cb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>::get(), "MigrateDoubleBuffer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBuffers.MigrateSingleBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::cordl_internals::Ptr<void>, ::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*>, int32_t, ::cordl_internals::Ptr<void>)>(
        &::UnityEngine::InputSystem::LowLevel::InputStateBuffers::MigrateSingleBuffer)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x4610e24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>::get(), "MigrateSingleBuffer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBuffers.ComputeSizeOfSingleStateBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*>,
                                                                                               int32_t)>(&::UnityEngine::InputSystem::LowLevel::InputStateBuffers::ComputeSizeOfSingleStateBuffer)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x46109ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>::get(), "ComputeSizeOfSingleStateBuffer",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBuffers.NextDeviceOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(uint32_t, ::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::LowLevel::InputStateBuffers::NextDeviceOffset)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x4610f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>::get(), "NextDeviceOffset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::LowLevel::InputStateBuffers::setStaticF_s_DefaultStateBuffer(::cordl_internals::Ptr<void> value) {
  ::cordl_internals::setStaticField<::cordl_internals::Ptr<void>, "s_DefaultStateBuffer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>::get>(
      std::forward<::cordl_internals::Ptr<void>>(value));
}
inline ::cordl_internals::Ptr<void> UnityEngine::InputSystem::LowLevel::InputStateBuffers::getStaticF_s_DefaultStateBuffer() {
  return ::cordl_internals::getStaticField<::cordl_internals::Ptr<void>, "s_DefaultStateBuffer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>::get>();
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBuffers::setStaticF_s_NoiseMaskBuffer(::cordl_internals::Ptr<void> value) {
  ::cordl_internals::setStaticField<::cordl_internals::Ptr<void>, "s_NoiseMaskBuffer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>::get>(
      std::forward<::cordl_internals::Ptr<void>>(value));
}
inline ::cordl_internals::Ptr<void> UnityEngine::InputSystem::LowLevel::InputStateBuffers::getStaticF_s_NoiseMaskBuffer() {
  return ::cordl_internals::getStaticField<::cordl_internals::Ptr<void>, "s_NoiseMaskBuffer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>::get>();
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBuffers::setStaticF_s_ResetMaskBuffer(::cordl_internals::Ptr<void> value) {
  ::cordl_internals::setStaticField<::cordl_internals::Ptr<void>, "s_ResetMaskBuffer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>::get>(
      std::forward<::cordl_internals::Ptr<void>>(value));
}
inline ::cordl_internals::Ptr<void> UnityEngine::InputSystem::LowLevel::InputStateBuffers::getStaticF_s_ResetMaskBuffer() {
  return ::cordl_internals::getStaticField<::cordl_internals::Ptr<void>, "s_ResetMaskBuffer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>::get>();
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBuffers::setStaticF_s_CurrentBuffers(::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers, "s_CurrentBuffers",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>::get>(
      std::forward<::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers>(value));
}
inline ::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers UnityEngine::InputSystem::LowLevel::InputStateBuffers::getStaticF_s_CurrentBuffers() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers, "s_CurrentBuffers",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>::get>();
}
inline ::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers
UnityEngine::InputSystem::LowLevel::InputStateBuffers::GetDoubleBuffersFor(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>::get(), "GetDoubleBuffersFor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers, false>(this, ___internal_method, updateType);
}
inline ::cordl_internals::Ptr<void> UnityEngine::InputSystem::LowLevel::InputStateBuffers::GetFrontBufferForDevice(int32_t deviceIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>::get(), "GetFrontBufferForDevice",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<void>, false>(nullptr, ___internal_method, deviceIndex);
}
inline ::cordl_internals::Ptr<void> UnityEngine::InputSystem::LowLevel::InputStateBuffers::GetBackBufferForDevice(int32_t deviceIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>::get(), "GetBackBufferForDevice",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<void>, false>(nullptr, ___internal_method, deviceIndex);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBuffers::SwitchTo(::UnityEngine::InputSystem::LowLevel::InputStateBuffers buffers,
                                                                            ::UnityEngine::InputSystem::LowLevel::InputUpdateType update) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>::get(), "SwitchTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, buffers, update);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBuffers::AllocateAll(::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> devices,
                                                                               int32_t deviceCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>::get(), "AllocateAll", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, devices, deviceCount);
}
inline ::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers
UnityEngine::InputSystem::LowLevel::InputStateBuffers::SetUpDeviceToBufferMappings(int32_t deviceCount, ::ByRef<::cordl_internals::Ptr<uint8_t>> bufferPtr, uint32_t sizePerBuffer,
                                                                                   uint32_t mappingTableSizePerBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>::get(), "SetUpDeviceToBufferMappings", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::cordl_internals::Ptr<uint8_t>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers, false>(nullptr, ___internal_method, deviceCount, bufferPtr, sizePerBuffer,
                                                                                                                           mappingTableSizePerBuffer);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBuffers::FreeAll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>::get(),
                                                                             "FreeAll", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBuffers::MigrateAll(::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> devices,
                                                                              int32_t deviceCount, ::UnityEngine::InputSystem::LowLevel::InputStateBuffers oldBuffers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>::get(), "MigrateAll", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, devices, deviceCount, oldBuffers);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBuffers::MigrateDoubleBuffer(::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers newBuffer,
                                                                                       ::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> devices,
                                                                                       int32_t deviceCount, ::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers oldBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>::get(), "MigrateDoubleBuffer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, newBuffer, devices, deviceCount, oldBuffer);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBuffers::MigrateSingleBuffer(::cordl_internals::Ptr<void> newBuffer,
                                                                                       ::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> devices,
                                                                                       int32_t deviceCount, ::cordl_internals::Ptr<void> oldBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>::get(), "MigrateSingleBuffer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, newBuffer, devices, deviceCount, oldBuffer);
}
inline uint32_t
UnityEngine::InputSystem::LowLevel::InputStateBuffers::ComputeSizeOfSingleStateBuffer(::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> devices,
                                                                                      int32_t deviceCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>::get(), "ComputeSizeOfSingleStateBuffer",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, devices, deviceCount);
}
inline uint32_t UnityEngine::InputSystem::LowLevel::InputStateBuffers::NextDeviceOffset(uint32_t currentOffset, ::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>::get(), "NextDeviceOffset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, currentOffset, device);
}
// Ctor Parameters [CppParam { name: "sizePerBuffer", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "totalSize", ty: "uint32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "defaultStateBuffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: Some("{}") }, CppParam { name: "noiseMaskBuffer", ty: "::cordl_internals::Ptr<void>", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "resetMaskBuffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AllBuffers", ty:
// "::cordl_internals::Ptr<void>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PlayerStateBuffers", ty: "::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::InputStateBuffers::InputStateBuffers(uint32_t sizePerBuffer, uint32_t totalSize, ::cordl_internals::Ptr<void> defaultStateBuffer,
                                                                                     ::cordl_internals::Ptr<void> noiseMaskBuffer, ::cordl_internals::Ptr<void> resetMaskBuffer,
                                                                                     ::cordl_internals::Ptr<void> m_AllBuffers,
                                                                                     ::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers m_PlayerStateBuffers) noexcept {
  this->sizePerBuffer = sizePerBuffer;
  this->totalSize = totalSize;
  this->defaultStateBuffer = defaultStateBuffer;
  this->noiseMaskBuffer = noiseMaskBuffer;
  this->resetMaskBuffer = resetMaskBuffer;
  this->m_AllBuffers = m_AllBuffers;
  this->m_PlayerStateBuffers = m_PlayerStateBuffers;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::InputStateBuffers::InputStateBuffers() {}
