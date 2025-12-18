#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderPipelineGraphicsSettingsCollection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderPipelineGraphicsSettingsCollection_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineGraphicsSettings_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection.get_settingsList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>* (
    ::UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection::*)()>(&::UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection::get_settingsList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6940394;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection*>::get(), "get_settingsList",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection::*)()>(
    &::UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x694039c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>*&
UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection::__cordl_internal_get_m_List() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_List;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>* const&
UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection::__cordl_internal_get_m_List() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_List;
}
constexpr void UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection::__cordl_internal_set_m_List(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_List)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>* UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection::get_settingsList() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection*>::get(), "get_settingsList",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection* UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection::RenderPipelineGraphicsSettingsCollection() {}
