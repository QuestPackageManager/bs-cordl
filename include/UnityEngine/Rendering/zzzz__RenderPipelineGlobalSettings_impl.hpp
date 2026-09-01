#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\RenderPipelineGlobalSettings.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderPipelineGlobalSettings_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineGraphicsSettings_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineGlobalSettings.get_settingsList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>* (
    ::UnityEngine::Rendering::RenderPipelineGlobalSettings::*)()>(&::UnityEngine::Rendering::RenderPipelineGlobalSettings::get_settingsList)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x6b22b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineGlobalSettings*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderPipelineGlobalSettings*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineGlobalSettings.get_settingsMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::System::Type*, int32_t>* (::UnityEngine::Rendering::RenderPipelineGlobalSettings::*)()>(
    &::UnityEngine::Rendering::RenderPipelineGlobalSettings::get_settingsMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b22dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineGlobalSettings*>(), { "get_settingsMap", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineGlobalSettings.RecreateSettingsMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderPipelineGlobalSettings::*)()>(
    &::UnityEngine::Rendering::RenderPipelineGlobalSettings::RecreateSettingsMap)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6b22dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineGlobalSettings*>(), { "RecreateSettingsMap", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineGlobalSettings.TryGet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderPipelineGlobalSettings::*)(
    ::System::Type*, ::by_ref<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>)>(&::UnityEngine::Rendering::RenderPipelineGlobalSettings::TryGet)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6b22f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineGlobalSettings*>(),
                                                { "TryGet", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineGlobalSettings.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderPipelineGlobalSettings::*)(::System::Type*)>(
    &::UnityEngine::Rendering::RenderPipelineGlobalSettings::Contains)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b22ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineGlobalSettings*>(), { "Contains", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineGlobalSettings.OnBeforeSerialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderPipelineGlobalSettings::*)()>(
    &::UnityEngine::Rendering::RenderPipelineGlobalSettings::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b2308c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineGlobalSettings*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderPipelineGlobalSettings*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineGlobalSettings.OnAfterDeserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderPipelineGlobalSettings::*)()>(
    &::UnityEngine::Rendering::RenderPipelineGlobalSettings::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b23090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineGlobalSettings*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderPipelineGlobalSettings*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipelineGlobalSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderPipelineGlobalSettings::*)()>(&::UnityEngine::Rendering::RenderPipelineGlobalSettings::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6b23094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineGlobalSettings*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, int32_t>*& UnityEngine::Rendering::RenderPipelineGlobalSettings::__cordl_internal_get__settingsMap_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsMap_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, int32_t>* const&
UnityEngine::Rendering::RenderPipelineGlobalSettings::__cordl_internal_get__settingsMap_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsMap_k__BackingField;
}
constexpr void UnityEngine::Rendering::RenderPipelineGlobalSettings::__cordl_internal_set__settingsMap_k__BackingField(::System::Collections::Generic::Dictionary_2<::System::Type*, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsMap_k__BackingField = value;
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>* UnityEngine::Rendering::RenderPipelineGlobalSettings::get_settingsList() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderPipelineGlobalSettings*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*, int32_t>* UnityEngine::Rendering::RenderPipelineGlobalSettings::get_settingsMap() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineGlobalSettings*>(), { "get_settingsMap", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::Type*, int32_t>*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderPipelineGlobalSettings::RecreateSettingsMap() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineGlobalSettings*>(), { "RecreateSettingsMap", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::RenderPipelineGlobalSettings::TryGet(::System::Type* type, ::by_ref<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*> settings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineGlobalSettings*>(),
                                              { "TryGet", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type, settings);
}
template <typename TSettingsInterfaceType> inline bool UnityEngine::Rendering::RenderPipelineGlobalSettings::TryGetFirstSettingsImplementingInterface(::by_ref<TSettingsInterfaceType> settings) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineGlobalSettings*>(),
                                              { "TryGetFirstSettingsImplementingInterface", { ::i2c::class_of<TSettingsInterfaceType>() }, { ::i2c::type_of<::by_ref<TSettingsInterfaceType>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TSettingsInterfaceType>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, settings);
}
template <typename TSettingsInterfaceType>
inline bool UnityEngine::Rendering::RenderPipelineGlobalSettings::GetSettingsImplementingInterface(::by_ref<::System::Collections::Generic::List_1<TSettingsInterfaceType>*> settings) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineGlobalSettings*>(),
                                                                                              { "GetSettingsImplementingInterface",
                                                                                                { ::i2c::class_of<TSettingsInterfaceType>() },
                                                                                                { ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<TSettingsInterfaceType>*>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TSettingsInterfaceType>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, settings);
}
inline bool UnityEngine::Rendering::RenderPipelineGlobalSettings::Contains(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineGlobalSettings*>(), { "Contains", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type);
}
inline void UnityEngine::Rendering::RenderPipelineGlobalSettings::OnBeforeSerialize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderPipelineGlobalSettings*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderPipelineGlobalSettings::OnAfterDeserialize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderPipelineGlobalSettings*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderPipelineGlobalSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineGlobalSettings*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderPipelineGlobalSettings* UnityEngine::Rendering::RenderPipelineGlobalSettings::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderPipelineGlobalSettings*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr UnityEngine::Rendering::RenderPipelineGlobalSettings::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::Rendering::RenderPipelineGlobalSettings::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderPipelineGlobalSettings::RenderPipelineGlobalSettings() {}
