#pragma once
// IWYU pragma private; include "BeatSaber\AvatarCore\AvatarSystemIdentifier.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSystemIdentifier_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemIdentifier._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::AvatarSystemIdentifier::*)(::StringW)>(&::BeatSaber::AvatarCore::AvatarSystemIdentifier::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x326e830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemIdentifier>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemIdentifier.HashAvatarSystemTypeMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::StringW)>(&::BeatSaber::AvatarCore::AvatarSystemIdentifier::HashAvatarSystemTypeMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x326d910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemIdentifier>(), { "HashAvatarSystemTypeMultiplier", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemIdentifier.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::AvatarCore::AvatarSystemIdentifier::*)(::BeatSaber::AvatarCore::AvatarSystemIdentifier)>(
    &::BeatSaber::AvatarCore::AvatarSystemIdentifier::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x326e854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemIdentifier>(), { "Equals", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::AvatarSystemIdentifier>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemIdentifier.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::AvatarCore::AvatarSystemIdentifier::*)(::System::Object*)>(&::BeatSaber::AvatarCore::AvatarSystemIdentifier::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x326e864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemIdentifier>(), { ::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemIdentifier>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemIdentifier.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::BeatSaber::AvatarCore::AvatarSystemIdentifier::*)()>(&::BeatSaber::AvatarCore::AvatarSystemIdentifier::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x326e8e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemIdentifier>(), { ::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemIdentifier>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemIdentifier.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::BeatSaber::AvatarCore::AvatarSystemIdentifier, ::BeatSaber::AvatarCore::AvatarSystemIdentifier)>(
    &::BeatSaber::AvatarCore::AvatarSystemIdentifier::op_Equality)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x326e8e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemIdentifier>(),
                            { "op_Equality", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::AvatarSystemIdentifier>(), ::i2c::type_of<::BeatSaber::AvatarCore::AvatarSystemIdentifier>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemIdentifier.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::BeatSaber::AvatarCore::AvatarSystemIdentifier, ::BeatSaber::AvatarCore::AvatarSystemIdentifier)>(
    &::BeatSaber::AvatarCore::AvatarSystemIdentifier::op_Inequality)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x326e964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemIdentifier>(),
                            { "op_Inequality", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::AvatarSystemIdentifier>(), ::i2c::type_of<::BeatSaber::AvatarCore::AvatarSystemIdentifier>() } })));
    return ___internal_method;
  }
};
inline void BeatSaber::AvatarCore::AvatarSystemIdentifier::_ctor(::StringW avatarSystemTypeIdentifier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemIdentifier>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, avatarSystemTypeIdentifier);
}
inline uint32_t BeatSaber::AvatarCore::AvatarSystemIdentifier::HashAvatarSystemTypeMultiplier(::StringW avatarSystemTypeIdentifier) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemIdentifier>(), { "HashAvatarSystemTypeMultiplier", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, avatarSystemTypeIdentifier);
}
inline bool BeatSaber::AvatarCore::AvatarSystemIdentifier::Equals(::BeatSaber::AvatarCore::AvatarSystemIdentifier other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemIdentifier>(), { "Equals", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::AvatarSystemIdentifier>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool BeatSaber::AvatarCore::AvatarSystemIdentifier::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemIdentifier>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t BeatSaber::AvatarCore::AvatarSystemIdentifier::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemIdentifier>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool BeatSaber::AvatarCore::AvatarSystemIdentifier::op_Equality(::BeatSaber::AvatarCore::AvatarSystemIdentifier obj1, ::BeatSaber::AvatarCore::AvatarSystemIdentifier obj2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemIdentifier>(),
                          { "op_Equality", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::AvatarSystemIdentifier>(), ::i2c::type_of<::BeatSaber::AvatarCore::AvatarSystemIdentifier>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj1, obj2);
}
inline bool BeatSaber::AvatarCore::AvatarSystemIdentifier::op_Inequality(::BeatSaber::AvatarCore::AvatarSystemIdentifier obj1, ::BeatSaber::AvatarCore::AvatarSystemIdentifier obj2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemIdentifier>(),
                          { "op_Inequality", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::AvatarSystemIdentifier>(), ::i2c::type_of<::BeatSaber::AvatarCore::AvatarSystemIdentifier>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj1, obj2);
}
/// @brief Convert operator to "::System::IEquatable_1<::BeatSaber::AvatarCore::AvatarSystemIdentifier>"
constexpr BeatSaber::AvatarCore::AvatarSystemIdentifier::operator ::System::IEquatable_1<::BeatSaber::AvatarCore::AvatarSystemIdentifier>*() {
  return static_cast<::System::IEquatable_1<::BeatSaber::AvatarCore::AvatarSystemIdentifier>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::BeatSaber::AvatarCore::AvatarSystemIdentifier>"
constexpr ::System::IEquatable_1<::BeatSaber::AvatarCore::AvatarSystemIdentifier>*
BeatSaber::AvatarCore::AvatarSystemIdentifier::i___System__IEquatable_1___BeatSaber__AvatarCore__AvatarSystemIdentifier_() {
  return static_cast<::System::IEquatable_1<::BeatSaber::AvatarCore::AvatarSystemIdentifier>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "hash", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::AvatarCore::AvatarSystemIdentifier::AvatarSystemIdentifier(::StringW value, uint32_t hash) noexcept {
  this->value = value;
  this->hash = hash;
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::AvatarSystemIdentifier::AvatarSystemIdentifier() {}
