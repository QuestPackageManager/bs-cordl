#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IncludeAdditionalRPAssets.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__IncludeAdditionalRPAssets_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineGraphicsSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__IncludeAdditionalRPAssets_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::IncludeAdditionalRPAssets_Version::IncludeAdditionalRPAssets_Version(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::IncludeAdditionalRPAssets_Version::IncludeAdditionalRPAssets_Version() {}
constexpr ::UnityEngine::Rendering::IncludeAdditionalRPAssets_Version UnityEngine::Rendering::IncludeAdditionalRPAssets_Version::Initial{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::IncludeAdditionalRPAssets_Version UnityEngine::Rendering::IncludeAdditionalRPAssets_Version::Count{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::IncludeAdditionalRPAssets_Version UnityEngine::Rendering::IncludeAdditionalRPAssets_Version::Last{ static_cast<int32_t>(0x0) };
//  Writing Method size for method: ::UnityEngine::Rendering::IncludeAdditionalRPAssets.UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::IncludeAdditionalRPAssets::*)()>(
    &::UnityEngine::Rendering::IncludeAdditionalRPAssets::UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x658424c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IncludeAdditionalRPAssets*>::get(),
                                    "UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_version", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IncludeAdditionalRPAssets.get_includeReferencedInScenes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::IncludeAdditionalRPAssets::*)()>(
    &::UnityEngine::Rendering::IncludeAdditionalRPAssets::get_includeReferencedInScenes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6584254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IncludeAdditionalRPAssets*>::get(),
                                                                               "get_includeReferencedInScenes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IncludeAdditionalRPAssets.set_includeReferencedInScenes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::IncludeAdditionalRPAssets::*)(bool)>(
    &::UnityEngine::Rendering::IncludeAdditionalRPAssets::set_includeReferencedInScenes)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x658425c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IncludeAdditionalRPAssets*>::get(), "set_includeReferencedInScenes",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IncludeAdditionalRPAssets.get_includeAssetsByLabel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::IncludeAdditionalRPAssets::*)()>(
    &::UnityEngine::Rendering::IncludeAdditionalRPAssets::get_includeAssetsByLabel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65842cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IncludeAdditionalRPAssets*>::get(),
                                                                               "get_includeAssetsByLabel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IncludeAdditionalRPAssets.set_includeAssetsByLabel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::IncludeAdditionalRPAssets::*)(bool)>(
    &::UnityEngine::Rendering::IncludeAdditionalRPAssets::set_includeAssetsByLabel)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x65842d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IncludeAdditionalRPAssets*>::get(), "set_includeAssetsByLabel",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IncludeAdditionalRPAssets.get_labelToInclude
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Rendering::IncludeAdditionalRPAssets::*)()>(
    &::UnityEngine::Rendering::IncludeAdditionalRPAssets::get_labelToInclude)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6584344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IncludeAdditionalRPAssets*>::get(),
                                                                               "get_labelToInclude", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IncludeAdditionalRPAssets.set_labelToInclude
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::IncludeAdditionalRPAssets::*)(::StringW)>(
    &::UnityEngine::Rendering::IncludeAdditionalRPAssets::set_labelToInclude)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x658434c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IncludeAdditionalRPAssets*>::get(), "set_labelToInclude",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IncludeAdditionalRPAssets._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::IncludeAdditionalRPAssets::*)()>(
    &::UnityEngine::Rendering::IncludeAdditionalRPAssets::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65843bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IncludeAdditionalRPAssets*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::IncludeAdditionalRPAssets_Version& UnityEngine::Rendering::IncludeAdditionalRPAssets::__cordl_internal_get_m_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_version;
}
constexpr ::UnityEngine::Rendering::IncludeAdditionalRPAssets_Version const& UnityEngine::Rendering::IncludeAdditionalRPAssets::__cordl_internal_get_m_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_version;
}
constexpr void UnityEngine::Rendering::IncludeAdditionalRPAssets::__cordl_internal_set_m_version(::UnityEngine::Rendering::IncludeAdditionalRPAssets_Version value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_version = value;
}
constexpr bool& UnityEngine::Rendering::IncludeAdditionalRPAssets::__cordl_internal_get_m_IncludeReferencedInScenes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IncludeReferencedInScenes;
}
constexpr bool const& UnityEngine::Rendering::IncludeAdditionalRPAssets::__cordl_internal_get_m_IncludeReferencedInScenes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IncludeReferencedInScenes;
}
constexpr void UnityEngine::Rendering::IncludeAdditionalRPAssets::__cordl_internal_set_m_IncludeReferencedInScenes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IncludeReferencedInScenes = value;
}
constexpr bool& UnityEngine::Rendering::IncludeAdditionalRPAssets::__cordl_internal_get_m_IncludeAssetsByLabel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IncludeAssetsByLabel;
}
constexpr bool const& UnityEngine::Rendering::IncludeAdditionalRPAssets::__cordl_internal_get_m_IncludeAssetsByLabel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IncludeAssetsByLabel;
}
constexpr void UnityEngine::Rendering::IncludeAdditionalRPAssets::__cordl_internal_set_m_IncludeAssetsByLabel(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IncludeAssetsByLabel = value;
}
constexpr ::StringW& UnityEngine::Rendering::IncludeAdditionalRPAssets::__cordl_internal_get_m_LabelToInclude() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LabelToInclude;
}
constexpr ::StringW const& UnityEngine::Rendering::IncludeAdditionalRPAssets::__cordl_internal_get_m_LabelToInclude() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LabelToInclude;
}
constexpr void UnityEngine::Rendering::IncludeAdditionalRPAssets::__cordl_internal_set_m_LabelToInclude(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LabelToInclude)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t UnityEngine::Rendering::IncludeAdditionalRPAssets::UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IncludeAdditionalRPAssets*>::get(),
                                  "UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_version", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::IncludeAdditionalRPAssets::get_includeReferencedInScenes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IncludeAdditionalRPAssets*>::get(),
                                                                             "get_includeReferencedInScenes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::IncludeAdditionalRPAssets::set_includeReferencedInScenes(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IncludeAdditionalRPAssets*>::get(), "set_includeReferencedInScenes",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::IncludeAdditionalRPAssets::get_includeAssetsByLabel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IncludeAdditionalRPAssets*>::get(),
                                                                             "get_includeAssetsByLabel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::IncludeAdditionalRPAssets::set_includeAssetsByLabel(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IncludeAdditionalRPAssets*>::get(), "set_includeAssetsByLabel",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Rendering::IncludeAdditionalRPAssets::get_labelToInclude() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IncludeAdditionalRPAssets*>::get(),
                                                                             "get_labelToInclude", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::IncludeAdditionalRPAssets::set_labelToInclude(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IncludeAdditionalRPAssets*>::get(), "set_labelToInclude",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::IncludeAdditionalRPAssets::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IncludeAdditionalRPAssets*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::IncludeAdditionalRPAssets* UnityEngine::Rendering::IncludeAdditionalRPAssets::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::IncludeAdditionalRPAssets*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr UnityEngine::Rendering::IncludeAdditionalRPAssets::operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* UnityEngine::Rendering::IncludeAdditionalRPAssets::i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::IncludeAdditionalRPAssets::IncludeAdditionalRPAssets() {}
