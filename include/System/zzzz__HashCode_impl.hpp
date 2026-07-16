#pragma once
// IWYU pragma private; include "System/HashCode.hpp"
#include "System/zzzz__HashCode_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::HashCode.GenerateGlobalSeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::System::HashCode::GenerateGlobalSeed)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5c4116c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::HashCode>(), { "GenerateGlobalSeed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::HashCode.Rol
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, int32_t)>(&::System::HashCode::Rol)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c41190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::HashCode>(), { "Rol", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::HashCode.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<uint32_t>, ::by_ref<uint32_t>, ::by_ref<uint32_t>, ::by_ref<uint32_t>)>(&::System::HashCode::Initialize)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5c4119c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::HashCode>(),
            { "Initialize", {}, { ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::HashCode.Round
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, uint32_t)>(&::System::HashCode::Round)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5c41254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::HashCode>(), { "Round", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::HashCode.QueueRound
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, uint32_t)>(&::System::HashCode::QueueRound)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5c412d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::HashCode>(), { "QueueRound", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::HashCode.MixState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, uint32_t, uint32_t, uint32_t)>(&::System::HashCode::MixState)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5c4134c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::HashCode>(),
                                                             { "MixState", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::HashCode.MixEmptyState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::System::HashCode::MixEmptyState)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c413d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::HashCode>(), { "MixEmptyState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::HashCode.MixFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t)>(&::System::HashCode::MixFinal)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c41440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::HashCode>(), { "MixFinal", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::HashCode.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::HashCode::*)(int32_t)>(&::System::HashCode::Add)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x5c41468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::HashCode>(), { "Add", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::HashCode.ToHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::HashCode::*)()>(&::System::HashCode::ToHashCode)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x5c41714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::HashCode>(), { "ToHashCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::HashCode.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::HashCode::*)()>(&::System::HashCode::GetHashCode)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c4196c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::HashCode>(), { ::i2c::class_of<::System::HashCode>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::HashCode.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::HashCode::*)(::System::Object*)>(&::System::HashCode::Equals)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c419d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::HashCode>(), { ::i2c::class_of<::System::HashCode>(), 0 }));
    return ___internal_method;
  }
};
inline void System::HashCode::setStaticF_s_seed(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "s_seed", ::System::HashCode>(std::forward<uint32_t>(value));
}
inline uint32_t System::HashCode::getStaticF_s_seed() {
  return ::cordl_internals::getStaticField<uint32_t, "s_seed", ::System::HashCode>();
}
inline uint32_t System::HashCode::GenerateGlobalSeed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::HashCode>(), { "GenerateGlobalSeed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
template <typename T1, typename T2> inline int32_t System::HashCode::Combine(T1 value1, T2 value2) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::HashCode>(), { "Combine", { ::i2c::class_of<T1>(), ::i2c::class_of<T2>() }, { ::i2c::type_of<T1>(), ::i2c::type_of<T2>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T1>(), ::i2c::class_of<T2>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value1, value2);
}
template <typename T1, typename T2, typename T3, typename T4> inline int32_t System::HashCode::Combine(T1 value1, T2 value2, T3 value3, T4 value4) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::HashCode>(), { "Combine",
                                                                                                    { ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>() },
                                                                                                    { ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value1, value2, value3, value4);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5> inline int32_t System::HashCode::Combine(T1 value1, T2 value2, T3 value3, T4 value4, T5 value5) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::HashCode>(), { "Combine",
                                                                                { ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>() },
                                                                                { ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>() } })));
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value1, value2, value3, value4, value5);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> inline int32_t System::HashCode::Combine(T1 value1, T2 value2, T3 value3, T4 value4, T5 value5, T6 value6) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::HashCode>(),
                                              { "Combine",
                                                { ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>() },
                                                { ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(),
                                                                                                                     ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value1, value2, value3, value4, value5, value6);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline int32_t System::HashCode::Combine(T1 value1, T2 value2, T3 value3, T4 value4, T5 value5, T6 value6, T7 value7) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::HashCode>(),
                          { "Combine",
                            { ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>() },
                            { ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<T7>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(),
                                                                                       ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value1, value2, value3, value4, value5, value6, value7);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline int32_t System::HashCode::Combine(T1 value1, T2 value2, T3 value3, T4 value4, T5 value5, T6 value6, T7 value7, T8 value8) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::HashCode>(), { "Combine",
                                                                                                    { ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(),
                                                                                                      ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>() },
                                                                                                    { ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(),
                                                                                                      ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<T7>(), ::i2c::type_of<T8>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(),
                                                                                       ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value1, value2, value3, value4, value5, value6, value7, value8);
}
inline uint32_t System::HashCode::Rol(uint32_t value, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::HashCode>(), { "Rol", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value, count);
}
inline void System::HashCode::Initialize(::by_ref<uint32_t> v1, ::by_ref<uint32_t> v2, ::by_ref<uint32_t> v3, ::by_ref<uint32_t> v4) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::HashCode>(),
          { "Initialize", {}, { ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, v1, v2, v3, v4);
}
inline uint32_t System::HashCode::Round(uint32_t hash, uint32_t input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::HashCode>(), { "Round", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, hash, input);
}
inline uint32_t System::HashCode::QueueRound(uint32_t hash, uint32_t queuedValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::HashCode>(), { "QueueRound", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, hash, queuedValue);
}
inline uint32_t System::HashCode::MixState(uint32_t v1, uint32_t v2, uint32_t v3, uint32_t v4) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::HashCode>(),
                                                           { "MixState", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, v1, v2, v3, v4);
}
inline uint32_t System::HashCode::MixEmptyState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::HashCode>(), { "MixEmptyState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline uint32_t System::HashCode::MixFinal(uint32_t hash) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::HashCode>(), { "MixFinal", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, hash);
}
template <typename T> inline void System::HashCode::Add(T value) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::HashCode>(), { "Add", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void System::HashCode::Add(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::HashCode>(), { "Add", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t System::HashCode::ToHashCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::HashCode>(), { "ToHashCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t System::HashCode::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::HashCode>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool System::HashCode::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::HashCode>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
// Ctor Parameters [CppParam { name: "_v1", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_v2", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_v3", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_v4", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_queue1", ty: "uint32_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "_queue2", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_queue3", ty: "uint32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_length", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::HashCode::HashCode(uint32_t _v1, uint32_t _v2, uint32_t _v3, uint32_t _v4, uint32_t _queue1, uint32_t _queue2, uint32_t _queue3, uint32_t _length) noexcept {
  this->_v1 = _v1;
  this->_v2 = _v2;
  this->_v3 = _v3;
  this->_v4 = _v4;
  this->_queue1 = _queue1;
  this->_queue2 = _queue2;
  this->_queue3 = _queue3;
  this->_length = _length;
}
// Ctor Parameters []
constexpr ::System::HashCode::HashCode() {}
