#pragma once
// IWYU pragma private; include "Zenject\BindingId.hpp"
#include "Zenject/zzzz__BindingId_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Zenject::BindingId._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::BindingId::*)(::System::Type*, ::System::Object*)>(&::Zenject::BindingId::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e667b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::BindingId>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::BindingId.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Zenject::BindingId::*)()>(&::Zenject::BindingId::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e76f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::BindingId>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::BindingId.set_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::BindingId::*)(::System::Type*)>(&::Zenject::BindingId::set_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e76f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::BindingId>(), { "set_Type", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::BindingId.get_Identifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Zenject::BindingId::*)()>(&::Zenject::BindingId::get_Identifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e76f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::BindingId>(), { "get_Identifier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::BindingId.set_Identifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::BindingId::*)(::System::Object*)>(&::Zenject::BindingId::set_Identifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e76fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::BindingId>(), { "set_Identifier", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::BindingId.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Zenject::BindingId::*)()>(&::Zenject::BindingId::ToString)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6e76fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::BindingId>(), { ::i2c::class_of<::Zenject::BindingId>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::BindingId.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Zenject::BindingId::*)()>(&::Zenject::BindingId::GetHashCode)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e770d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::BindingId>(), { ::i2c::class_of<::Zenject::BindingId>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::BindingId.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::BindingId::*)(::System::Object*)>(&::Zenject::BindingId::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e77134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::BindingId>(), { ::i2c::class_of<::Zenject::BindingId>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::BindingId.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::BindingId::*)(::Zenject::BindingId)>(&::Zenject::BindingId::Equals)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e77240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::BindingId>(), { "Equals", {}, { ::i2c::type_of<::Zenject::BindingId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::BindingId.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Zenject::BindingId, ::Zenject::BindingId)>(&::Zenject::BindingId::op_Equality)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e771b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::BindingId>(), { "op_Equality", {}, { ::i2c::type_of<::Zenject::BindingId>(), ::i2c::type_of<::Zenject::BindingId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::BindingId.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Zenject::BindingId, ::Zenject::BindingId)>(&::Zenject::BindingId::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e77258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::BindingId>(), { "op_Inequality", {}, { ::i2c::type_of<::Zenject::BindingId>(), ::i2c::type_of<::Zenject::BindingId>() } })));
    return ___internal_method;
  }
};
inline void Zenject::BindingId::_ctor(::System::Type* type, ::System::Object* identifier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::BindingId>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, type, identifier);
}
inline ::System::Type* Zenject::BindingId::get_Type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::BindingId>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(*this, ___internal_method);
}
inline void Zenject::BindingId::set_Type(::System::Type* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::BindingId>(), { "set_Type", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Object* Zenject::BindingId::get_Identifier() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::BindingId>(), { "get_Identifier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline void Zenject::BindingId::set_Identifier(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::BindingId>(), { "set_Identifier", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW Zenject::BindingId::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::BindingId>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline int32_t Zenject::BindingId::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::BindingId>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Zenject::BindingId::Equals(::System::Object* other) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::BindingId>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool Zenject::BindingId::Equals(::Zenject::BindingId that) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::BindingId>(), { "Equals", {}, { ::i2c::type_of<::Zenject::BindingId>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, that);
}
inline bool Zenject::BindingId::op_Equality(::Zenject::BindingId left, ::Zenject::BindingId right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::BindingId>(), { "op_Equality", {}, { ::i2c::type_of<::Zenject::BindingId>(), ::i2c::type_of<::Zenject::BindingId>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool Zenject::BindingId::op_Inequality(::Zenject::BindingId left, ::Zenject::BindingId right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::BindingId>(), { "op_Inequality", {}, { ::i2c::type_of<::Zenject::BindingId>(), ::i2c::type_of<::Zenject::BindingId>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
/// @brief Convert operator to "::System::IEquatable_1<::Zenject::BindingId>"
constexpr Zenject::BindingId::operator ::System::IEquatable_1<::Zenject::BindingId>*() {
  return static_cast<::System::IEquatable_1<::Zenject::BindingId>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Zenject::BindingId>"
constexpr ::System::IEquatable_1<::Zenject::BindingId>* Zenject::BindingId::i___System__IEquatable_1___Zenject__BindingId_() {
  return static_cast<::System::IEquatable_1<::Zenject::BindingId>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_type", ty: "::System::Type*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_identifier", ty: "::System::Object*", modifiers: "", def_value:
// Some("{}") }]
constexpr ::Zenject::BindingId::BindingId(::System::Type* _type, ::System::Object* _identifier) noexcept {
  this->_type = _type;
  this->_identifier = _identifier;
}
// Ctor Parameters []
constexpr ::Zenject::BindingId::BindingId() {}
