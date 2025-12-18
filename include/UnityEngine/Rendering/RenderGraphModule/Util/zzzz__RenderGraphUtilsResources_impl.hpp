#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/Util/RenderGraphUtilsResources.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/Util/zzzz__RenderGraphUtilsResources_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/Util/zzzz__RenderGraphUtilsResources_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineGraphicsSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineResources_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources_Version::RenderGraphUtilsResources_Version(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources_Version::RenderGraphUtilsResources_Version() {}
constexpr ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources_Version UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources_Version::Initial{
  static_cast<int32_t>(0x0)
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources_Version UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources_Version::Count{
  static_cast<int32_t>(0x1)
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources_Version UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources_Version::Latest{
  static_cast<int32_t>(0x0)
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources.UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources::UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6636ad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources*>::get(),
                                    "UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_version", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources.get_coreCopyPS
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Shader> (::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources::get_coreCopyPS)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6636adc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources*>::get(),
                                                 "get_coreCopyPS", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources.set_coreCopyPS
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources::*)(::UnityEngine::Shader*)>(
    &::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources::set_coreCopyPS)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6636ae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources*>::get(), "set_coreCopyPS",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6636b54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources_Version&
UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources::__cordl_internal_get_m_Version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources_Version const&
UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources::__cordl_internal_get_m_Version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr void
UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources::__cordl_internal_set_m_Version(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources_Version value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Version = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources::__cordl_internal_get_m_CoreCopyPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CoreCopyPS;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources::__cordl_internal_get_m_CoreCopyPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CoreCopyPS;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources::__cordl_internal_set_m_CoreCopyPS(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CoreCopyPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources::UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources*>::get(),
                                  "UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_version", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Shader> UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources::get_coreCopyPS() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources*>::get(),
                                               "get_coreCopyPS", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources::set_coreCopyPS(::UnityEngine::Shader* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources*>::get(), "set_coreCopyPS",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources* UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineResources"
constexpr UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources::operator ::UnityEngine::Rendering::IRenderPipelineResources*() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineResources*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineResources"
constexpr ::UnityEngine::Rendering::IRenderPipelineResources*
UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources::i___UnityEngine__Rendering__IRenderPipelineResources() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineResources*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources::operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*
UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources::i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources::RenderGraphUtilsResources() {}
