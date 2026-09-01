#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\Binding.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BindingUpdateTrigger_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Binding_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingActivationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingLogLevel_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingUpdateTrigger_def.hpp"
#include "UnityEngine/UIElements/zzzz__DataSourceContextChanged_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Binding.SetGlobalLogLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::BindingLogLevel)>(&::UnityEngine::UIElements::Binding::SetGlobalLogLevel)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6c30870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Binding*>(), { "SetGlobalLogLevel", {}, { ::i2c::type_of<::UnityEngine::UIElements::BindingLogLevel>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Binding.SetPanelLogLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::IPanel*, ::UnityEngine::UIElements::BindingLogLevel)>(
    &::UnityEngine::UIElements::Binding::SetPanelLogLevel)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6c308d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Binding*>(),
                                                { "SetPanelLogLevel", {}, { ::i2c::type_of<::UnityEngine::UIElements::IPanel*>(), ::i2c::type_of<::UnityEngine::UIElements::BindingLogLevel>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Binding.ResetPanelLogLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::IPanel*)>(&::UnityEngine::UIElements::Binding::ResetPanelLogLevel)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6c309f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Binding*>(), { "ResetPanelLogLevel", {}, { ::i2c::type_of<::UnityEngine::UIElements::IPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Binding.get_isDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::Binding::*)()>(&::UnityEngine::UIElements::Binding::get_isDirty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c30a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Binding*>(), { "get_isDirty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Binding.get_updateTrigger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::BindingUpdateTrigger (::UnityEngine::UIElements::Binding::*)()>(
    &::UnityEngine::UIElements::Binding::get_updateTrigger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c30a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Binding*>(), { "get_updateTrigger", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Binding.set_updateTrigger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Binding::*)(::UnityEngine::UIElements::BindingUpdateTrigger)>(
    &::UnityEngine::UIElements::Binding::set_updateTrigger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c30aa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Binding*>(), { "set_updateTrigger", {}, { ::i2c::type_of<::UnityEngine::UIElements::BindingUpdateTrigger>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Binding._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Binding::*)()>(&::UnityEngine::UIElements::Binding::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c30aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Binding*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Binding.MarkDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Binding::*)()>(&::UnityEngine::UIElements::Binding::MarkDirty)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c30ab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Binding*>(), { "MarkDirty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Binding.ClearDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Binding::*)()>(&::UnityEngine::UIElements::Binding::ClearDirty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c30ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Binding*>(), { "ClearDirty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Binding.OnActivated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Binding::*)(::by_ref<::UnityEngine::UIElements::BindingActivationContext>)>(
    &::UnityEngine::UIElements::Binding::OnActivated)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c30ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Binding*>(), { ::i2c::class_of<::UnityEngine::UIElements::Binding*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Binding.OnDeactivated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Binding::*)(::by_ref<::UnityEngine::UIElements::BindingActivationContext>)>(
    &::UnityEngine::UIElements::Binding::OnDeactivated)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c30acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Binding*>(), { ::i2c::class_of<::UnityEngine::UIElements::Binding*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Binding.OnDataSourceChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Binding::*)(::by_ref<::UnityEngine::UIElements::DataSourceContextChanged>)>(
    &::UnityEngine::UIElements::Binding::OnDataSourceChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c30ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Binding*>(), { ::i2c::class_of<::UnityEngine::UIElements::Binding*>(), 6 }));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::UIElements::Binding::__cordl_internal_get_m_Dirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Dirty;
}
constexpr bool const& UnityEngine::UIElements::Binding::__cordl_internal_get_m_Dirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Dirty;
}
constexpr void UnityEngine::UIElements::Binding::__cordl_internal_set_m_Dirty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Dirty = value;
}
constexpr ::UnityEngine::UIElements::BindingUpdateTrigger& UnityEngine::UIElements::Binding::__cordl_internal_get_m_UpdateTrigger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateTrigger;
}
constexpr ::UnityEngine::UIElements::BindingUpdateTrigger const& UnityEngine::UIElements::Binding::__cordl_internal_get_m_UpdateTrigger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateTrigger;
}
constexpr void UnityEngine::UIElements::Binding::__cordl_internal_set_m_UpdateTrigger(::UnityEngine::UIElements::BindingUpdateTrigger value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UpdateTrigger = value;
}
constexpr ::StringW& UnityEngine::UIElements::Binding::__cordl_internal_get__property_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____property_k__BackingField;
}
constexpr ::StringW const& UnityEngine::UIElements::Binding::__cordl_internal_get__property_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____property_k__BackingField;
}
constexpr void UnityEngine::UIElements::Binding::__cordl_internal_set__property_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____property_k__BackingField = value;
}
inline void UnityEngine::UIElements::Binding::SetGlobalLogLevel(::UnityEngine::UIElements::BindingLogLevel logLevel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Binding*>(), { "SetGlobalLogLevel", {}, { ::i2c::type_of<::UnityEngine::UIElements::BindingLogLevel>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, logLevel);
}
inline void UnityEngine::UIElements::Binding::SetPanelLogLevel(::UnityEngine::UIElements::IPanel* panel, ::UnityEngine::UIElements::BindingLogLevel logLevel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Binding*>(),
                                              { "SetPanelLogLevel", {}, { ::i2c::type_of<::UnityEngine::UIElements::IPanel*>(), ::i2c::type_of<::UnityEngine::UIElements::BindingLogLevel>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, panel, logLevel);
}
inline void UnityEngine::UIElements::Binding::ResetPanelLogLevel(::UnityEngine::UIElements::IPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Binding*>(), { "ResetPanelLogLevel", {}, { ::i2c::type_of<::UnityEngine::UIElements::IPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, panel);
}
inline bool UnityEngine::UIElements::Binding::get_isDirty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Binding*>(), { "get_isDirty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::BindingUpdateTrigger UnityEngine::UIElements::Binding::get_updateTrigger() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Binding*>(), { "get_updateTrigger", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BindingUpdateTrigger>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Binding::set_updateTrigger(::UnityEngine::UIElements::BindingUpdateTrigger value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Binding*>(), { "set_updateTrigger", {}, { ::i2c::type_of<::UnityEngine::UIElements::BindingUpdateTrigger>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Binding::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Binding*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Binding::MarkDirty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Binding*>(), { "MarkDirty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Binding::ClearDirty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Binding*>(), { "ClearDirty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Binding::OnActivated(::by_ref<::UnityEngine::UIElements::BindingActivationContext> context) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Binding*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::UIElements::Binding::OnDeactivated(::by_ref<::UnityEngine::UIElements::BindingActivationContext> context) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Binding*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::UIElements::Binding::OnDataSourceChanged(::by_ref<::UnityEngine::UIElements::DataSourceContextChanged> context) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Binding*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline ::UnityEngine::UIElements::Binding* UnityEngine::UIElements::Binding::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Binding*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Binding::Binding() {}
