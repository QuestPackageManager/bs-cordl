#pragma once
// IWYU pragma private; include "Zenject/SignalDeclaration.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__BindingId_impl.hpp"
#include "Zenject/zzzz__PlaceholderFactory_2_impl.hpp"
#include "Zenject/zzzz__SignalMissingHandlerResponses_impl.hpp"
#include "Zenject/zzzz__SignalDeclaration_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__BindingId_def.hpp"
#include "Zenject/zzzz__ITickable_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__SignalDeclarationBindInfo_def.hpp"
#include "Zenject/zzzz__SignalDeclaration_def.hpp"
#include "Zenject/zzzz__SignalSubscription_def.hpp"
#include "Zenject/zzzz__ZenjectSettings_def.hpp"
//  Writing Method size for method: ::Zenject::SignalDeclaration_Factory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalDeclaration_Factory::*)()>(&::Zenject::SignalDeclaration_Factory::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e44098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalDeclaration_Factory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalDeclaration_Factory.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::SignalDeclaration_Factory::__zenCreate)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6e440d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalDeclaration_Factory*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalDeclaration_Factory.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::SignalDeclaration_Factory::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e4414c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalDeclaration_Factory*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
inline void Zenject::SignalDeclaration_Factory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalDeclaration_Factory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Zenject::SignalDeclaration_Factory::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalDeclaration_Factory*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::SignalDeclaration_Factory::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalDeclaration_Factory*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::SignalDeclaration_Factory* Zenject::SignalDeclaration_Factory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SignalDeclaration_Factory*>());
}
// Ctor Parameters []
constexpr ::Zenject::SignalDeclaration_Factory::SignalDeclaration_Factory() {}
//  Writing Method size for method: ::Zenject::SignalDeclaration._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalDeclaration::*)(::Zenject::SignalDeclarationBindInfo*, ::Zenject::ZenjectSettings*)>(
    &::Zenject::SignalDeclaration::_ctor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6e4301c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalDeclaration*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Zenject::SignalDeclarationBindInfo*>(), ::i2c::type_of<::Zenject::ZenjectSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalDeclaration.get_TickPriority
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Zenject::SignalDeclaration::*)()>(&::Zenject::SignalDeclaration::get_TickPriority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e4318c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalDeclaration*>(), { "get_TickPriority", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalDeclaration.set_TickPriority
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalDeclaration::*)(int32_t)>(&::Zenject::SignalDeclaration::set_TickPriority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e43194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalDeclaration*>(), { "set_TickPriority", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalDeclaration.get_IsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::SignalDeclaration::*)()>(&::Zenject::SignalDeclaration::get_IsAsync)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e4319c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalDeclaration*>(), { "get_IsAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalDeclaration.get_BindingId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::BindingId (::Zenject::SignalDeclaration::*)()>(&::Zenject::SignalDeclaration::get_BindingId)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e431a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalDeclaration*>(), { "get_BindingId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalDeclaration.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalDeclaration::*)()>(&::Zenject::SignalDeclaration::Dispose)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6e431b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalDeclaration*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalDeclaration.Fire
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalDeclaration::*)(::System::Object*)>(&::Zenject::SignalDeclaration::Fire)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x6e43308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalDeclaration*>(), { "Fire", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalDeclaration.FireInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalDeclaration::*)(::System::Collections::Generic::List_1<::Zenject::SignalSubscription*>*, ::System::Object*)>(
    &::Zenject::SignalDeclaration::FireInternal)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x6e435bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::SignalDeclaration*>(),
                                         { "FireInternal", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::SignalSubscription*>*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalDeclaration.Tick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalDeclaration::*)()>(&::Zenject::SignalDeclaration::Tick)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x6e43834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalDeclaration*>(), { "Tick", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalDeclaration.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalDeclaration::*)(::Zenject::SignalSubscription*)>(&::Zenject::SignalDeclaration::Add)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6e43b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalDeclaration*>(), { "Add", {}, { ::i2c::type_of<::Zenject::SignalSubscription*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalDeclaration.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalDeclaration::*)(::Zenject::SignalSubscription*)>(&::Zenject::SignalDeclaration::Remove)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e43c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalDeclaration*>(), { "Remove", {}, { ::i2c::type_of<::Zenject::SignalSubscription*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalDeclaration.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::SignalDeclaration::__zenCreate)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6e43c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalDeclaration*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalDeclaration.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::SignalDeclaration::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x6e43dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalDeclaration*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Zenject::SignalSubscription*>*& Zenject::SignalDeclaration::__cordl_internal_get__subscriptions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subscriptions;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::SignalSubscription*>* const& Zenject::SignalDeclaration::__cordl_internal_get__subscriptions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subscriptions;
}
constexpr void Zenject::SignalDeclaration::__cordl_internal_set__subscriptions(::System::Collections::Generic::List_1<::Zenject::SignalSubscription*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____subscriptions = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>*& Zenject::SignalDeclaration::__cordl_internal_get__asyncQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____asyncQueue;
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& Zenject::SignalDeclaration::__cordl_internal_get__asyncQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____asyncQueue;
}
constexpr void Zenject::SignalDeclaration::__cordl_internal_set__asyncQueue(::System::Collections::Generic::List_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____asyncQueue = value;
}
constexpr ::Zenject::BindingId& Zenject::SignalDeclaration::__cordl_internal_get__bindingId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindingId;
}
constexpr ::Zenject::BindingId const& Zenject::SignalDeclaration::__cordl_internal_get__bindingId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindingId;
}
constexpr void Zenject::SignalDeclaration::__cordl_internal_set__bindingId(::Zenject::BindingId value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bindingId = value;
}
constexpr ::Zenject::SignalMissingHandlerResponses& Zenject::SignalDeclaration::__cordl_internal_get__missingHandlerResponses() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missingHandlerResponses;
}
constexpr ::Zenject::SignalMissingHandlerResponses const& Zenject::SignalDeclaration::__cordl_internal_get__missingHandlerResponses() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missingHandlerResponses;
}
constexpr void Zenject::SignalDeclaration::__cordl_internal_set__missingHandlerResponses(::Zenject::SignalMissingHandlerResponses value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missingHandlerResponses = value;
}
constexpr bool& Zenject::SignalDeclaration::__cordl_internal_get__isAsync() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isAsync;
}
constexpr bool const& Zenject::SignalDeclaration::__cordl_internal_get__isAsync() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isAsync;
}
constexpr void Zenject::SignalDeclaration::__cordl_internal_set__isAsync(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isAsync = value;
}
constexpr ::Zenject::ZenjectSettings_SignalSettings*& Zenject::SignalDeclaration::__cordl_internal_get__settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settings;
}
constexpr ::Zenject::ZenjectSettings_SignalSettings* const& Zenject::SignalDeclaration::__cordl_internal_get__settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settings;
}
constexpr void Zenject::SignalDeclaration::__cordl_internal_set__settings(::Zenject::ZenjectSettings_SignalSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settings = value;
}
constexpr int32_t& Zenject::SignalDeclaration::__cordl_internal_get__TickPriority_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TickPriority_k__BackingField;
}
constexpr int32_t const& Zenject::SignalDeclaration::__cordl_internal_get__TickPriority_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TickPriority_k__BackingField;
}
constexpr void Zenject::SignalDeclaration::__cordl_internal_set__TickPriority_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____TickPriority_k__BackingField = value;
}
inline void Zenject::SignalDeclaration::_ctor(::Zenject::SignalDeclarationBindInfo* bindInfo, ::Zenject::ZenjectSettings* zenjectSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalDeclaration*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Zenject::SignalDeclarationBindInfo*>(), ::i2c::type_of<::Zenject::ZenjectSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindInfo, zenjectSettings);
}
inline int32_t Zenject::SignalDeclaration::get_TickPriority() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalDeclaration*>(), { "get_TickPriority", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Zenject::SignalDeclaration::set_TickPriority(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalDeclaration*>(), { "set_TickPriority", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Zenject::SignalDeclaration::get_IsAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalDeclaration*>(), { "get_IsAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Zenject::BindingId Zenject::SignalDeclaration::get_BindingId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalDeclaration*>(), { "get_BindingId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::BindingId>(this, ___internal_method);
}
inline void Zenject::SignalDeclaration::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalDeclaration*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::SignalDeclaration::Fire(::System::Object* signal) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalDeclaration*>(), { "Fire", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signal);
}
inline void Zenject::SignalDeclaration::FireInternal(::System::Collections::Generic::List_1<::Zenject::SignalSubscription*>* subscriptions, ::System::Object* signal) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::SignalDeclaration*>(),
                                       { "FireInternal", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::SignalSubscription*>*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subscriptions, signal);
}
inline void Zenject::SignalDeclaration::Tick() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalDeclaration*>(), { "Tick", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::SignalDeclaration::Add(::Zenject::SignalSubscription* subscription) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalDeclaration*>(), { "Add", {}, { ::i2c::type_of<::Zenject::SignalSubscription*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subscription);
}
inline void Zenject::SignalDeclaration::Remove(::Zenject::SignalSubscription* subscription) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalDeclaration*>(), { "Remove", {}, { ::i2c::type_of<::Zenject::SignalSubscription*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subscription);
}
inline ::System::Object* Zenject::SignalDeclaration::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalDeclaration*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::SignalDeclaration::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalDeclaration*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::SignalDeclaration* Zenject::SignalDeclaration::New_ctor(::Zenject::SignalDeclarationBindInfo* bindInfo, ::Zenject::ZenjectSettings* zenjectSettings) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SignalDeclaration*>(bindInfo, zenjectSettings));
}
/// @brief Convert operator to "::Zenject::ITickable"
constexpr Zenject::SignalDeclaration::operator ::Zenject::ITickable*() noexcept {
  return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::ITickable"
constexpr ::Zenject::ITickable* Zenject::SignalDeclaration::i___Zenject__ITickable() noexcept {
  return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Zenject::SignalDeclaration::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Zenject::SignalDeclaration::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Zenject::SignalDeclaration::SignalDeclaration() {}
