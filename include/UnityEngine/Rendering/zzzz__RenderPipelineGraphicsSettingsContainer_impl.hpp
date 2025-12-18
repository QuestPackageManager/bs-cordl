#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderPipelineGraphicsSettingsContainer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderPipelineGraphicsSettingsContainer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineGraphicsSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderPipelineGraphicsSettingsCollection_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer.get_settingsList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>* (
    ::UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer::*)()>(&::UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer::get_settingsList)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x65ebd38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer*>::get(), "get_settingsList",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer.OnBeforeSerialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer::*)()>(
    &::UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65ebd50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer*>::get(), "OnBeforeSerialize",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer.OnAfterDeserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer::*)()>(
    &::UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65ebd54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer*>::get(),
                                                 "OnAfterDeserialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer::*)()>(
    &::UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x65ebd58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection*& UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer::__cordl_internal_get_m_RuntimeSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RuntimeSettings;
}
constexpr ::UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection* const& UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer::__cordl_internal_get_m_RuntimeSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RuntimeSettings;
}
constexpr void UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer::__cordl_internal_set_m_RuntimeSettings(::UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RuntimeSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>* UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer::get_settingsList() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer*>::get(), "get_settingsList",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer::OnBeforeSerialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer*>::get(), "OnBeforeSerialize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer::OnAfterDeserialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer*>::get(), "OnAfterDeserialize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer* UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer::RenderPipelineGraphicsSettingsContainer() {}
