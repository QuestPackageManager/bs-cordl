#pragma once
// IWYU pragma private; include "Zenject\SignalSubscription.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__BindingId_impl.hpp"
#include "Zenject/zzzz__PoolableMemoryPool_3_impl.hpp"
#include "Zenject/zzzz__SignalSubscription_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__BindingId_def.hpp"
#include "Zenject/zzzz__IPoolable_2_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__SignalDeclaration_def.hpp"
#include "Zenject/zzzz__SignalSubscription_def.hpp"
//  Writing Method size for method: ::Zenject::SignalSubscription_Pool._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalSubscription_Pool::*)()>(&::Zenject::SignalSubscription_Pool::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e47cc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalSubscription_Pool*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalSubscription_Pool.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::SignalSubscription_Pool::__zenCreate)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6e47cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalSubscription_Pool*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalSubscription_Pool.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::SignalSubscription_Pool::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e47d74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalSubscription_Pool*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
inline void Zenject::SignalSubscription_Pool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalSubscription_Pool*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Zenject::SignalSubscription_Pool::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalSubscription_Pool*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::SignalSubscription_Pool::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalSubscription_Pool*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::SignalSubscription_Pool* Zenject::SignalSubscription_Pool::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SignalSubscription_Pool*>());
}
// Ctor Parameters []
constexpr ::Zenject::SignalSubscription_Pool::SignalSubscription_Pool() {}
//  Writing Method size for method: ::Zenject::SignalSubscription._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalSubscription::*)(::Zenject::SignalSubscription_Pool*)>(&::Zenject::SignalSubscription::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e47868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalSubscription*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::SignalSubscription_Pool*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalSubscription.get_SignalId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::BindingId (::Zenject::SignalSubscription::*)()>(&::Zenject::SignalSubscription::get_SignalId)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e4788c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalSubscription*>(), { "get_SignalId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalSubscription.OnSpawned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalSubscription::*)(::System::Action_1<::System::Object*>*, ::Zenject::SignalDeclaration*)>(
    &::Zenject::SignalSubscription::OnSpawned)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e47898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalSubscription*>(),
                                                             { "OnSpawned", {}, { ::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::Zenject::SignalDeclaration*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalSubscription.OnDespawned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalSubscription::*)()>(&::Zenject::SignalSubscription::OnDespawned)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6e478dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalSubscription*>(), { "OnDespawned", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalSubscription.SetDefaults
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalSubscription::*)()>(&::Zenject::SignalSubscription::SetDefaults)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e4787c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalSubscription*>(), { "SetDefaults", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalSubscription.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalSubscription::*)()>(&::Zenject::SignalSubscription::Dispose)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6e47908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalSubscription*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalSubscription.OnDeclarationDespawned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalSubscription::*)()>(&::Zenject::SignalSubscription::OnDeclarationDespawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e46888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalSubscription*>(), { "OnDeclarationDespawned", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalSubscription.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalSubscription::*)(::System::Object*)>(&::Zenject::SignalSubscription::Invoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6e46d9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalSubscription*>(), { "Invoke", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalSubscription.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::SignalSubscription::__zenCreate)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6e479b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalSubscription*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalSubscription.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::SignalSubscription::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x6e47a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalSubscription*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::SignalSubscription_Pool*& Zenject::SignalSubscription::__cordl_internal_get__pool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pool;
}
constexpr ::Zenject::SignalSubscription_Pool* const& Zenject::SignalSubscription::__cordl_internal_get__pool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pool;
}
constexpr void Zenject::SignalSubscription::__cordl_internal_set__pool(::Zenject::SignalSubscription_Pool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pool = value;
}
constexpr ::System::Action_1<::System::Object*>*& Zenject::SignalSubscription::__cordl_internal_get__callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callback;
}
constexpr ::System::Action_1<::System::Object*>* const& Zenject::SignalSubscription::__cordl_internal_get__callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callback;
}
constexpr void Zenject::SignalSubscription::__cordl_internal_set__callback(::System::Action_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____callback = value;
}
constexpr ::Zenject::SignalDeclaration*& Zenject::SignalSubscription::__cordl_internal_get__declaration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____declaration;
}
constexpr ::Zenject::SignalDeclaration* const& Zenject::SignalSubscription::__cordl_internal_get__declaration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____declaration;
}
constexpr void Zenject::SignalSubscription::__cordl_internal_set__declaration(::Zenject::SignalDeclaration* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____declaration = value;
}
constexpr ::Zenject::BindingId& Zenject::SignalSubscription::__cordl_internal_get__signalId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signalId;
}
constexpr ::Zenject::BindingId const& Zenject::SignalSubscription::__cordl_internal_get__signalId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signalId;
}
constexpr void Zenject::SignalSubscription::__cordl_internal_set__signalId(::Zenject::BindingId value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____signalId = value;
}
inline void Zenject::SignalSubscription::_ctor(::Zenject::SignalSubscription_Pool* pool) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalSubscription*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::SignalSubscription_Pool*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pool);
}
inline ::Zenject::BindingId Zenject::SignalSubscription::get_SignalId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalSubscription*>(), { "get_SignalId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::BindingId>(this, ___internal_method);
}
inline void Zenject::SignalSubscription::OnSpawned(::System::Action_1<::System::Object*>* callback, ::Zenject::SignalDeclaration* declaration) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalSubscription*>(),
                                                           { "OnSpawned", {}, { ::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::Zenject::SignalDeclaration*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback, declaration);
}
inline void Zenject::SignalSubscription::OnDespawned() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalSubscription*>(), { "OnDespawned", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::SignalSubscription::SetDefaults() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalSubscription*>(), { "SetDefaults", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::SignalSubscription::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalSubscription*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::SignalSubscription::OnDeclarationDespawned() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalSubscription*>(), { "OnDeclarationDespawned", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::SignalSubscription::Invoke(::System::Object* signal) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalSubscription*>(), { "Invoke", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signal);
}
inline ::System::Object* Zenject::SignalSubscription::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalSubscription*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::SignalSubscription::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalSubscription*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::SignalSubscription* Zenject::SignalSubscription::New_ctor(::Zenject::SignalSubscription_Pool* pool) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SignalSubscription*>(pool));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Zenject::SignalSubscription::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Zenject::SignalSubscription::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IPoolable_2<::System::Action_1<::System::Object*>*,::Zenject::SignalDeclaration*>"
constexpr Zenject::SignalSubscription::operator ::Zenject::IPoolable_2<::System::Action_1<::System::Object*>*, ::Zenject::SignalDeclaration*>*() noexcept {
  return static_cast<::Zenject::IPoolable_2<::System::Action_1<::System::Object*>*, ::Zenject::SignalDeclaration*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IPoolable_2<::System::Action_1<::System::Object*>*,::Zenject::SignalDeclaration*>"
constexpr ::Zenject::IPoolable_2<::System::Action_1<::System::Object*>*, ::Zenject::SignalDeclaration*>*
Zenject::SignalSubscription::i___Zenject__IPoolable_2___System__Action_1___System__Object______Zenject__SignalDeclaration__() noexcept {
  return static_cast<::Zenject::IPoolable_2<::System::Action_1<::System::Object*>*, ::Zenject::SignalDeclaration*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Zenject::SignalSubscription::SignalSubscription() {}
