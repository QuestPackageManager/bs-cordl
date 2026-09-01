#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\RenderPipelineGraphicsSettingsCollection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderPipelineGraphicsSettingsCollection_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineGraphicsSettings_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection.get_settingsList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>* (
    ::UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection::*)()>(&::UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection::get_settingsList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b0b5f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection*>(), { "get_settingsList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection::*)()>(
    &::UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6b0b5f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection*>(), { ".ctor", {}, {} })));
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
  this->___m_List = value;
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>* UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection::get_settingsList() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection*>(), { "get_settingsList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection* UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection::RenderPipelineGraphicsSettingsCollection() {}
