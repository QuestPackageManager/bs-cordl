#pragma once
// IWYU pragma private; include "GlobalNamespace\EnvironmentName.hpp"
#include "GlobalNamespace/zzzz__EnvironmentName_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnvironmentName._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnvironmentName::*)(::StringW)>(&::GlobalNamespace::EnvironmentName::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3708d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentName>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentName.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EnvironmentName::*)(::GlobalNamespace::EnvironmentName)>(&::GlobalNamespace::EnvironmentName::Equals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3708d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentName>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentName>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentName.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EnvironmentName::*)(::System::Object*)>(&::GlobalNamespace::EnvironmentName::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3708d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentName>(), { ::i2c::class_of<::GlobalNamespace::EnvironmentName>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentName.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::EnvironmentName::*)()>(&::GlobalNamespace::EnvironmentName::GetHashCode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3708e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentName>(), { ::i2c::class_of<::GlobalNamespace::EnvironmentName>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentName.op_Implicit___StringW
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::EnvironmentName)>(&::GlobalNamespace::EnvironmentName::op_Implicit___StringW)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3708e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentName>(), { "op_Implicit", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentName>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentName.op_Implicit___GlobalNamespace__EnvironmentName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::EnvironmentName (*)(::StringW)>(&::GlobalNamespace::EnvironmentName::op_Implicit___GlobalNamespace__EnvironmentName)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3708e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentName>(), { "op_Implicit", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentName.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::EnvironmentName, ::GlobalNamespace::EnvironmentName)>(&::GlobalNamespace::EnvironmentName::op_Equality)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3708e30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentName>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentName>(), ::i2c::type_of<::GlobalNamespace::EnvironmentName>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentName.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::EnvironmentName, ::GlobalNamespace::EnvironmentName)>(&::GlobalNamespace::EnvironmentName::op_Inequality)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3708e34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentName>(),
                                                             { "op_Inequality", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentName>(), ::i2c::type_of<::GlobalNamespace::EnvironmentName>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentName.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::EnvironmentName::*)()>(&::GlobalNamespace::EnvironmentName::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3708ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentName>(), { ::i2c::class_of<::GlobalNamespace::EnvironmentName>(), 3 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EnvironmentName::setStaticF_Empty(::GlobalNamespace::EnvironmentName value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::EnvironmentName, "Empty", ::GlobalNamespace::EnvironmentName>(std::forward<::GlobalNamespace::EnvironmentName>(value));
}
inline ::GlobalNamespace::EnvironmentName GlobalNamespace::EnvironmentName::getStaticF_Empty() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::EnvironmentName, "Empty", ::GlobalNamespace::EnvironmentName>();
}
inline void GlobalNamespace::EnvironmentName::_ctor(::StringW environmentName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentName>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, environmentName);
}
inline bool GlobalNamespace::EnvironmentName::Equals(::GlobalNamespace::EnvironmentName other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentName>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentName>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::EnvironmentName::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::EnvironmentName>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::EnvironmentName::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::EnvironmentName>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::EnvironmentName::op_Implicit___StringW(::GlobalNamespace::EnvironmentName e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentName>(), { "op_Implicit", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentName>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, e);
}
inline ::GlobalNamespace::EnvironmentName GlobalNamespace::EnvironmentName::op_Implicit___GlobalNamespace__EnvironmentName(::StringW environmentName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentName>(), { "op_Implicit", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentName>(nullptr, ___internal_method, environmentName);
}
inline bool GlobalNamespace::EnvironmentName::op_Equality(::GlobalNamespace::EnvironmentName a, ::GlobalNamespace::EnvironmentName b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentName>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentName>(), ::i2c::type_of<::GlobalNamespace::EnvironmentName>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool GlobalNamespace::EnvironmentName::op_Inequality(::GlobalNamespace::EnvironmentName a, ::GlobalNamespace::EnvironmentName b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentName>(),
                                                           { "op_Inequality", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentName>(), ::i2c::type_of<::GlobalNamespace::EnvironmentName>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline ::StringW GlobalNamespace::EnvironmentName::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::EnvironmentName>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_environmentName", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EnvironmentName::EnvironmentName(::StringW _environmentName) noexcept {
  this->_environmentName = _environmentName;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentName::EnvironmentName() {}
