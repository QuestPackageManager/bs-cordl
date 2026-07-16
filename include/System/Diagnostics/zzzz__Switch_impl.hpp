#pragma once
// IWYU pragma private; include "System/Diagnostics/Switch.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Diagnostics/zzzz__Switch_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__WeakReference_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::Switch.get_IntializedLock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Diagnostics::Switch::*)()>(&::System::Diagnostics::Switch::get_IntializedLock)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6391d84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Switch*>(), { "get_IntializedLock", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Switch._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Switch::*)(::StringW, ::StringW)>(&::System::Diagnostics::Switch::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6391674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Switch*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Switch._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Switch::*)(::StringW, ::StringW, ::StringW)>(&::System::Diagnostics::Switch::_ctor)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x6391a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Switch*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Switch._pruneCachedSwitches
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Diagnostics::Switch::_pruneCachedSwitches)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x6391df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Switch*>(), { "_pruneCachedSwitches", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Switch.get_SwitchSetting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Diagnostics::Switch::*)()>(&::System::Diagnostics::Switch::get_SwitchSetting)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6391c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Switch*>(), { "get_SwitchSetting", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Switch.set_SwitchSetting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Switch::*)(int32_t)>(&::System::Diagnostics::Switch::set_SwitchSetting)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x639175c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Switch*>(), { "set_SwitchSetting", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Switch.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Diagnostics::Switch::*)()>(&::System::Diagnostics::Switch::get_Value)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6391740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Switch*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Switch.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Switch::*)()>(&::System::Diagnostics::Switch::Initialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6392420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Switch*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Switch.InitializeWithStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Diagnostics::Switch::*)()>(&::System::Diagnostics::Switch::InitializeWithStatus)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x63922fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Switch*>(), { "InitializeWithStatus", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Switch.InitializeConfigSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Diagnostics::Switch::*)()>(&::System::Diagnostics::Switch::InitializeConfigSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6392424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Switch*>(), { "InitializeConfigSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Switch.OnSwitchSettingChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Switch::*)()>(&::System::Diagnostics::Switch::OnSwitchSettingChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x639242c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Diagnostics::Switch*>(), { ::i2c::class_of<::System::Diagnostics::Switch*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Switch.OnValueChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Switch::*)()>(&::System::Diagnostics::Switch::OnValueChanged)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x639186c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Diagnostics::Switch*>(), { ::i2c::class_of<::System::Diagnostics::Switch*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Diagnostics::Switch::__cordl_internal_get_switchSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___switchSettings;
}
constexpr ::System::Object* const& System::Diagnostics::Switch::__cordl_internal_get_switchSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___switchSettings;
}
constexpr void System::Diagnostics::Switch::__cordl_internal_set_switchSettings(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___switchSettings = value;
}
constexpr ::StringW& System::Diagnostics::Switch::__cordl_internal_get_description() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___description;
}
constexpr ::StringW const& System::Diagnostics::Switch::__cordl_internal_get_description() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___description;
}
constexpr void System::Diagnostics::Switch::__cordl_internal_set_description(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___description = value;
}
constexpr ::StringW& System::Diagnostics::Switch::__cordl_internal_get_displayName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayName;
}
constexpr ::StringW const& System::Diagnostics::Switch::__cordl_internal_get_displayName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayName;
}
constexpr void System::Diagnostics::Switch::__cordl_internal_set_displayName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___displayName = value;
}
constexpr int32_t& System::Diagnostics::Switch::__cordl_internal_get_switchSetting() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___switchSetting;
}
constexpr int32_t const& System::Diagnostics::Switch::__cordl_internal_get_switchSetting() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___switchSetting;
}
constexpr void System::Diagnostics::Switch::__cordl_internal_set_switchSetting(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___switchSetting = value;
}
constexpr bool& System::Diagnostics::Switch::__cordl_internal_get_initialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initialized;
}
constexpr bool const& System::Diagnostics::Switch::__cordl_internal_get_initialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initialized;
}
constexpr void System::Diagnostics::Switch::__cordl_internal_set_initialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___initialized = value;
}
constexpr bool& System::Diagnostics::Switch::__cordl_internal_get_initializing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initializing;
}
constexpr bool const& System::Diagnostics::Switch::__cordl_internal_get_initializing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initializing;
}
constexpr void System::Diagnostics::Switch::__cordl_internal_set_initializing(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___initializing = value;
}
constexpr ::StringW& System::Diagnostics::Switch::__cordl_internal_get_switchValueString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___switchValueString;
}
constexpr ::StringW const& System::Diagnostics::Switch::__cordl_internal_get_switchValueString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___switchValueString;
}
constexpr void System::Diagnostics::Switch::__cordl_internal_set_switchValueString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___switchValueString = value;
}
constexpr ::StringW& System::Diagnostics::Switch::__cordl_internal_get_defaultValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultValue;
}
constexpr ::StringW const& System::Diagnostics::Switch::__cordl_internal_get_defaultValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultValue;
}
constexpr void System::Diagnostics::Switch::__cordl_internal_set_defaultValue(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultValue = value;
}
constexpr ::System::Object*& System::Diagnostics::Switch::__cordl_internal_get_m_intializedLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_intializedLock;
}
constexpr ::System::Object* const& System::Diagnostics::Switch::__cordl_internal_get_m_intializedLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_intializedLock;
}
constexpr void System::Diagnostics::Switch::__cordl_internal_set_m_intializedLock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_intializedLock = value;
}
inline void System::Diagnostics::Switch::setStaticF_switches(::System::Collections::Generic::List_1<::System::WeakReference*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::WeakReference*>*, "switches", ::System::Diagnostics::Switch*>(
      std::forward<::System::Collections::Generic::List_1<::System::WeakReference*>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::WeakReference*>* System::Diagnostics::Switch::getStaticF_switches() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::WeakReference*>*, "switches", ::System::Diagnostics::Switch*>();
}
inline void System::Diagnostics::Switch::setStaticF_s_LastCollectionCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_LastCollectionCount", ::System::Diagnostics::Switch*>(std::forward<int32_t>(value));
}
inline int32_t System::Diagnostics::Switch::getStaticF_s_LastCollectionCount() {
  return ::cordl_internals::getStaticField<int32_t, "s_LastCollectionCount", ::System::Diagnostics::Switch*>();
}
inline ::System::Object* System::Diagnostics::Switch::get_IntializedLock() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Switch*>(), { "get_IntializedLock", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Diagnostics::Switch::_ctor(::StringW displayName, ::StringW description) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Switch*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, displayName, description);
}
inline void System::Diagnostics::Switch::_ctor(::StringW displayName, ::StringW description, ::StringW defaultSwitchValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Switch*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, displayName, description, defaultSwitchValue);
}
inline void System::Diagnostics::Switch::_pruneCachedSwitches() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Switch*>(), { "_pruneCachedSwitches", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline int32_t System::Diagnostics::Switch::get_SwitchSetting() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Switch*>(), { "get_SwitchSetting", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Diagnostics::Switch::set_SwitchSetting(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Switch*>(), { "set_SwitchSetting", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Diagnostics::Switch::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Switch*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Diagnostics::Switch::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Switch*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Diagnostics::Switch::InitializeWithStatus() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Switch*>(), { "InitializeWithStatus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Diagnostics::Switch::InitializeConfigSettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Switch*>(), { "InitializeConfigSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Diagnostics::Switch::OnSwitchSettingChanged() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Diagnostics::Switch*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Diagnostics::Switch::OnValueChanged() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Diagnostics::Switch*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Diagnostics::Switch* System::Diagnostics::Switch::New_ctor(::StringW displayName, ::StringW description) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Diagnostics::Switch*>(displayName, description));
}
inline ::System::Diagnostics::Switch* System::Diagnostics::Switch::New_ctor(::StringW displayName, ::StringW description, ::StringW defaultSwitchValue) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Diagnostics::Switch*>(displayName, description, defaultSwitchValue));
}
// Ctor Parameters []
constexpr ::System::Diagnostics::Switch::Switch() {}
