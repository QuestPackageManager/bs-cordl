#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraphLogIndent.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphLogIndent_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphLogger_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger*, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x66292c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent::Dispose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x662935c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent::Dispose)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6629390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent::_ctor(::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* logger, int32_t indentation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, logger, indentation);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "m_Indentation", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Logger", ty:
// "::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Disposed", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent::RenderGraphLogIndent(int32_t m_Indentation, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* m_Logger,
                                                                                                  bool m_Disposed) noexcept {
  this->m_Indentation = m_Indentation;
  this->m_Logger = m_Logger;
  this->m_Disposed = m_Disposed;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent::RenderGraphLogIndent() {}
