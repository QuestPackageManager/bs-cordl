#pragma once
// IWYU pragma private; include "System/Diagnostics/TraceSource.hpp"
#include "System/Diagnostics/zzzz__SourceLevels_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Diagnostics/zzzz__TraceSource_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Specialized/zzzz__StringDictionary_def.hpp"
#include "System/Diagnostics/zzzz__SourceLevels_def.hpp"
#include "System/Diagnostics/zzzz__SourceSwitch_def.hpp"
#include "System/Diagnostics/zzzz__TraceListenerCollection_def.hpp"
#include "System/zzzz__WeakReference_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::TraceSource._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::TraceSource::*)(::StringW)>(&::System::Diagnostics::TraceSource::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6394c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceSource*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceSource._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::TraceSource::*)(::StringW, ::System::Diagnostics::SourceLevels)>(&::System::Diagnostics::TraceSource::_ctor)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x6394c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceSource*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Diagnostics::SourceLevels>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceSource._pruneCachedTraceSources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Diagnostics::TraceSource::_pruneCachedTraceSources)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x6394f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceSource*>(), { "_pruneCachedTraceSources", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceSource.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::TraceSource::*)()>(&::System::Diagnostics::TraceSource::Initialize)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6395420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceSource*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceSource.NoConfigInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::TraceSource::*)()>(&::System::Diagnostics::TraceSource::NoConfigInit)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6395508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceSource*>(), { "NoConfigInit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceSource.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::TraceSource::*)()>(&::System::Diagnostics::TraceSource::Flush)> {
  constexpr static std::size_t size = 0x6ec;
  constexpr static std::size_t addrs = 0x6395678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceSource*>(), { "Flush", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceSource.get_Listeners
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Diagnostics::TraceListenerCollection* (::System::Diagnostics::TraceSource::*)()>(&::System::Diagnostics::TraceSource::get_Listeners)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6395d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceSource*>(), { "get_Listeners", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceSource.get_Switch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Diagnostics::SourceSwitch* (::System::Diagnostics::TraceSource::*)()>(&::System::Diagnostics::TraceSource::get_Switch)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6395d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceSource*>(), { "get_Switch", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Diagnostics::SourceSwitch*& System::Diagnostics::TraceSource::__cordl_internal_get_internalSwitch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___internalSwitch;
}
constexpr ::System::Diagnostics::SourceSwitch* const& System::Diagnostics::TraceSource::__cordl_internal_get_internalSwitch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___internalSwitch;
}
constexpr void System::Diagnostics::TraceSource::__cordl_internal_set_internalSwitch(::System::Diagnostics::SourceSwitch* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___internalSwitch = value;
}
constexpr ::System::Diagnostics::TraceListenerCollection*& System::Diagnostics::TraceSource::__cordl_internal_get_listeners() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___listeners;
}
constexpr ::System::Diagnostics::TraceListenerCollection* const& System::Diagnostics::TraceSource::__cordl_internal_get_listeners() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___listeners;
}
constexpr void System::Diagnostics::TraceSource::__cordl_internal_set_listeners(::System::Diagnostics::TraceListenerCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___listeners = value;
}
constexpr ::System::Collections::Specialized::StringDictionary*& System::Diagnostics::TraceSource::__cordl_internal_get_attributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributes;
}
constexpr ::System::Collections::Specialized::StringDictionary* const& System::Diagnostics::TraceSource::__cordl_internal_get_attributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributes;
}
constexpr void System::Diagnostics::TraceSource::__cordl_internal_set_attributes(::System::Collections::Specialized::StringDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributes = value;
}
constexpr ::System::Diagnostics::SourceLevels& System::Diagnostics::TraceSource::__cordl_internal_get_switchLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___switchLevel;
}
constexpr ::System::Diagnostics::SourceLevels const& System::Diagnostics::TraceSource::__cordl_internal_get_switchLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___switchLevel;
}
constexpr void System::Diagnostics::TraceSource::__cordl_internal_set_switchLevel(::System::Diagnostics::SourceLevels value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___switchLevel = value;
}
constexpr ::StringW& System::Diagnostics::TraceSource::__cordl_internal_get_sourceName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceName;
}
constexpr ::StringW const& System::Diagnostics::TraceSource::__cordl_internal_get_sourceName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceName;
}
constexpr void System::Diagnostics::TraceSource::__cordl_internal_set_sourceName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sourceName = value;
}
constexpr bool& System::Diagnostics::TraceSource::__cordl_internal_get__initCalled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initCalled;
}
constexpr bool const& System::Diagnostics::TraceSource::__cordl_internal_get__initCalled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initCalled;
}
constexpr void System::Diagnostics::TraceSource::__cordl_internal_set__initCalled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initCalled = value;
}
inline void System::Diagnostics::TraceSource::setStaticF_tracesources(::System::Collections::Generic::List_1<::System::WeakReference*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::WeakReference*>*, "tracesources", ::System::Diagnostics::TraceSource*>(
      std::forward<::System::Collections::Generic::List_1<::System::WeakReference*>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::WeakReference*>* System::Diagnostics::TraceSource::getStaticF_tracesources() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::WeakReference*>*, "tracesources", ::System::Diagnostics::TraceSource*>();
}
inline void System::Diagnostics::TraceSource::setStaticF_s_LastCollectionCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_LastCollectionCount", ::System::Diagnostics::TraceSource*>(std::forward<int32_t>(value));
}
inline int32_t System::Diagnostics::TraceSource::getStaticF_s_LastCollectionCount() {
  return ::cordl_internals::getStaticField<int32_t, "s_LastCollectionCount", ::System::Diagnostics::TraceSource*>();
}
inline void System::Diagnostics::TraceSource::_ctor(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceSource*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void System::Diagnostics::TraceSource::_ctor(::StringW name, ::System::Diagnostics::SourceLevels defaultLevel) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceSource*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Diagnostics::SourceLevels>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, defaultLevel);
}
inline void System::Diagnostics::TraceSource::_pruneCachedTraceSources() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceSource*>(), { "_pruneCachedTraceSources", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::Diagnostics::TraceSource::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceSource*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Diagnostics::TraceSource::NoConfigInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceSource*>(), { "NoConfigInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Diagnostics::TraceSource::Flush() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceSource*>(), { "Flush", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Diagnostics::TraceListenerCollection* System::Diagnostics::TraceSource::get_Listeners() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceSource*>(), { "get_Listeners", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::TraceListenerCollection*>(this, ___internal_method);
}
inline ::System::Diagnostics::SourceSwitch* System::Diagnostics::TraceSource::get_Switch() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceSource*>(), { "get_Switch", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::SourceSwitch*>(this, ___internal_method);
}
inline ::System::Diagnostics::TraceSource* System::Diagnostics::TraceSource::New_ctor(::StringW name) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Diagnostics::TraceSource*>(name));
}
inline ::System::Diagnostics::TraceSource* System::Diagnostics::TraceSource::New_ctor(::StringW name, ::System::Diagnostics::SourceLevels defaultLevel) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Diagnostics::TraceSource*>(name, defaultLevel));
}
// Ctor Parameters []
constexpr ::System::Diagnostics::TraceSource::TraceSource() {}
