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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::TraceSource::*)(::StringW)>(&::System::Diagnostics::TraceSource::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x617ce28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceSource*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceSource._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::TraceSource::*)(::StringW, ::System::Diagnostics::SourceLevels)>(
    &::System::Diagnostics::TraceSource::_ctor)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x617ce30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceSource*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::SourceLevels>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceSource._pruneCachedTraceSources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::Diagnostics::TraceSource::_pruneCachedTraceSources)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x617d0a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceSource*>::get(),
                                                                               "_pruneCachedTraceSources", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceSource.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::TraceSource::*)()>(&::System::Diagnostics::TraceSource::Initialize)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x617d5b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceSource*>::get(), "Initialize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceSource.NoConfigInit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::TraceSource::*)()>(&::System::Diagnostics::TraceSource::NoConfigInit)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x617d69c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceSource*>::get(), "NoConfigInit",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceSource.Flush
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::TraceSource::*)()>(&::System::Diagnostics::TraceSource::Flush)> {
  constexpr static std::size_t size = 0x6ec;
  constexpr static std::size_t addrs = 0x617d80c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceSource*>::get(), "Flush",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceSource.get_Listeners
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::TraceListenerCollection* (::System::Diagnostics::TraceSource::*)()>(
    &::System::Diagnostics::TraceSource::get_Listeners)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x617def8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceSource*>::get(), "get_Listeners",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceSource.get_Switch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::SourceSwitch* (::System::Diagnostics::TraceSource::*)()>(
    &::System::Diagnostics::TraceSource::get_Switch)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x617df14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceSource*>::get(), "get_Switch",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___internalSwitch)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___listeners)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attributes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sourceName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::WeakReference*>*, "tracesources",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceSource*>::get>(
      std::forward<::System::Collections::Generic::List_1<::System::WeakReference*>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::WeakReference*>* System::Diagnostics::TraceSource::getStaticF_tracesources() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::WeakReference*>*, "tracesources",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceSource*>::get>();
}
inline void System::Diagnostics::TraceSource::setStaticF_s_LastCollectionCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_LastCollectionCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceSource*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Diagnostics::TraceSource::getStaticF_s_LastCollectionCount() {
  return ::cordl_internals::getStaticField<int32_t, "s_LastCollectionCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceSource*>::get>();
}
inline void System::Diagnostics::TraceSource::_ctor(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceSource*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline void System::Diagnostics::TraceSource::_ctor(::StringW name, ::System::Diagnostics::SourceLevels defaultLevel) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceSource*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::SourceLevels>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, defaultLevel);
}
inline void System::Diagnostics::TraceSource::_pruneCachedTraceSources() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceSource*>::get(),
                                                                             "_pruneCachedTraceSources", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void System::Diagnostics::TraceSource::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceSource*>::get(), "Initialize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Diagnostics::TraceSource::NoConfigInit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceSource*>::get(), "NoConfigInit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Diagnostics::TraceSource::Flush() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceSource*>::get(), "Flush",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Diagnostics::TraceListenerCollection* System::Diagnostics::TraceSource::get_Listeners() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceSource*>::get(), "get_Listeners",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::TraceListenerCollection*, false>(this, ___internal_method);
}
inline ::System::Diagnostics::SourceSwitch* System::Diagnostics::TraceSource::get_Switch() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceSource*>::get(), "get_Switch",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::SourceSwitch*, false>(this, ___internal_method);
}
inline ::System::Diagnostics::TraceSource* System::Diagnostics::TraceSource::New_ctor(::StringW name) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Diagnostics::TraceSource*>(name));
}
inline ::System::Diagnostics::TraceSource* System::Diagnostics::TraceSource::New_ctor(::StringW name, ::System::Diagnostics::SourceLevels defaultLevel) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Diagnostics::TraceSource*>(name, defaultLevel));
}
// Ctor Parameters []
constexpr ::System::Diagnostics::TraceSource::TraceSource() {}
