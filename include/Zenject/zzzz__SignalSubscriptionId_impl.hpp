#pragma once
// IWYU pragma private; include "Zenject\SignalSubscriptionId.hpp"
#include "Zenject/zzzz__BindingId_impl.hpp"
#include "Zenject/zzzz__SignalSubscriptionId_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__BindingId_def.hpp"
//  Writing Method size for method: ::Zenject::SignalSubscriptionId._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalSubscriptionId::*)(::Zenject::BindingId, ::System::Object*)>(&::Zenject::SignalSubscriptionId::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e47f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalSubscriptionId>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::BindingId>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalSubscriptionId.get_SignalId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::BindingId (::Zenject::SignalSubscriptionId::*)()>(&::Zenject::SignalSubscriptionId::get_SignalId)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e47f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalSubscriptionId>(), { "get_SignalId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalSubscriptionId.get_Callback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Zenject::SignalSubscriptionId::*)()>(&::Zenject::SignalSubscriptionId::get_Callback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e47f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalSubscriptionId>(), { "get_Callback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalSubscriptionId.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Zenject::SignalSubscriptionId::*)()>(&::Zenject::SignalSubscriptionId::GetHashCode)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6e47f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::SignalSubscriptionId>(), { ::i2c::class_of<::Zenject::SignalSubscriptionId>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalSubscriptionId.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::SignalSubscriptionId::*)(::System::Object*)>(&::Zenject::SignalSubscriptionId::Equals)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6e47f70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::SignalSubscriptionId>(), { ::i2c::class_of<::Zenject::SignalSubscriptionId>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalSubscriptionId.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::SignalSubscriptionId::*)(::Zenject::SignalSubscriptionId)>(&::Zenject::SignalSubscriptionId::Equals)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6e48004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalSubscriptionId>(), { "Equals", {}, { ::i2c::type_of<::Zenject::SignalSubscriptionId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalSubscriptionId.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Zenject::SignalSubscriptionId, ::Zenject::SignalSubscriptionId)>(&::Zenject::SignalSubscriptionId::op_Equality)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6e480f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalSubscriptionId>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::Zenject::SignalSubscriptionId>(), ::i2c::type_of<::Zenject::SignalSubscriptionId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalSubscriptionId.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Zenject::SignalSubscriptionId, ::Zenject::SignalSubscriptionId)>(&::Zenject::SignalSubscriptionId::op_Inequality)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6e48128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalSubscriptionId>(),
                                                             { "op_Inequality", {}, { ::i2c::type_of<::Zenject::SignalSubscriptionId>(), ::i2c::type_of<::Zenject::SignalSubscriptionId>() } })));
    return ___internal_method;
  }
};
inline void Zenject::SignalSubscriptionId::_ctor(::Zenject::BindingId signalId, ::System::Object* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalSubscriptionId>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::BindingId>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, signalId, callback);
}
inline ::Zenject::BindingId Zenject::SignalSubscriptionId::get_SignalId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalSubscriptionId>(), { "get_SignalId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::BindingId>(*this, ___internal_method);
}
inline ::System::Object* Zenject::SignalSubscriptionId::get_Callback() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalSubscriptionId>(), { "get_Callback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline int32_t Zenject::SignalSubscriptionId::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::SignalSubscriptionId>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Zenject::SignalSubscriptionId::Equals(::System::Object* that) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::SignalSubscriptionId>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, that);
}
inline bool Zenject::SignalSubscriptionId::Equals(::Zenject::SignalSubscriptionId that) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalSubscriptionId>(), { "Equals", {}, { ::i2c::type_of<::Zenject::SignalSubscriptionId>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, that);
}
inline bool Zenject::SignalSubscriptionId::op_Equality(::Zenject::SignalSubscriptionId left, ::Zenject::SignalSubscriptionId right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalSubscriptionId>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::Zenject::SignalSubscriptionId>(), ::i2c::type_of<::Zenject::SignalSubscriptionId>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool Zenject::SignalSubscriptionId::op_Inequality(::Zenject::SignalSubscriptionId left, ::Zenject::SignalSubscriptionId right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalSubscriptionId>(),
                                                           { "op_Inequality", {}, { ::i2c::type_of<::Zenject::SignalSubscriptionId>(), ::i2c::type_of<::Zenject::SignalSubscriptionId>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
/// @brief Convert operator to "::System::IEquatable_1<::Zenject::SignalSubscriptionId>"
constexpr Zenject::SignalSubscriptionId::operator ::System::IEquatable_1<::Zenject::SignalSubscriptionId>*() {
  return static_cast<::System::IEquatable_1<::Zenject::SignalSubscriptionId>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Zenject::SignalSubscriptionId>"
constexpr ::System::IEquatable_1<::Zenject::SignalSubscriptionId>* Zenject::SignalSubscriptionId::i___System__IEquatable_1___Zenject__SignalSubscriptionId_() {
  return static_cast<::System::IEquatable_1<::Zenject::SignalSubscriptionId>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_signalId", ty: "::Zenject::BindingId", modifiers: "", def_value: Some("{}") }, CppParam { name: "_callback", ty: "::System::Object*", modifiers: "", def_value:
// Some("{}") }]
constexpr ::Zenject::SignalSubscriptionId::SignalSubscriptionId(::Zenject::BindingId _signalId, ::System::Object* _callback) noexcept {
  this->_signalId = _signalId;
  this->_callback = _callback;
}
// Ctor Parameters []
constexpr ::Zenject::SignalSubscriptionId::SignalSubscriptionId() {}
