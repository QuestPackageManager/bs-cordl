#pragma once
// IWYU pragma private; include "System\Reflection\CustomAttributeNamedArgument.hpp"
#include "System/Reflection/zzzz__CustomAttributeTypedArgument_impl.hpp"
#include "System/Reflection/zzzz__CustomAttributeNamedArgument_def.hpp"
#include "System/Reflection/zzzz__CustomAttributeTypedArgument_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::CustomAttributeNamedArgument._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::CustomAttributeNamedArgument::*)(
    ::System::Type*, ::StringW, bool, ::System::Reflection::CustomAttributeTypedArgument)>(&::System::Reflection::CustomAttributeNamedArgument::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b84590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Reflection::CustomAttributeNamedArgument>(),
            { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Reflection::CustomAttributeTypedArgument>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeNamedArgument._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::CustomAttributeNamedArgument::*)(::System::Reflection::MemberInfo*, ::System::Object*)>(
    &::System::Reflection::CustomAttributeNamedArgument::_ctor)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5b845a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeNamedArgument>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeNamedArgument._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::CustomAttributeNamedArgument::*)(
    ::System::Reflection::MemberInfo*, ::System::Reflection::CustomAttributeTypedArgument)>(&::System::Reflection::CustomAttributeNamedArgument::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5b847e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeNamedArgument>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Reflection::CustomAttributeTypedArgument>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeNamedArgument.get_TypedValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::CustomAttributeTypedArgument (::System::Reflection::CustomAttributeNamedArgument::*)()>(
    &::System::Reflection::CustomAttributeNamedArgument::get_TypedValue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b84910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeNamedArgument>(), { "get_TypedValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeNamedArgument.get_IsField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::CustomAttributeNamedArgument::*)()>(&::System::Reflection::CustomAttributeNamedArgument::get_IsField)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b8491c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeNamedArgument>(), { "get_IsField", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeNamedArgument.get_MemberName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::CustomAttributeNamedArgument::*)()>(&::System::Reflection::CustomAttributeNamedArgument::get_MemberName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b84924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeNamedArgument>(), { "get_MemberName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeNamedArgument.get_MemberInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MemberInfo* (::System::Reflection::CustomAttributeNamedArgument::*)()>(
    &::System::Reflection::CustomAttributeNamedArgument::get_MemberInfo)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5b8492c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeNamedArgument>(), { "get_MemberInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeNamedArgument.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::CustomAttributeNamedArgument::*)(::System::Object*)>(&::System::Reflection::CustomAttributeNamedArgument::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b84a0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeNamedArgument>(), { ::i2c::class_of<::System::Reflection::CustomAttributeNamedArgument>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeNamedArgument.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Reflection::CustomAttributeNamedArgument::*)()>(&::System::Reflection::CustomAttributeNamedArgument::GetHashCode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b84a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeNamedArgument>(), { ::i2c::class_of<::System::Reflection::CustomAttributeNamedArgument>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeNamedArgument.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::CustomAttributeNamedArgument, ::System::Reflection::CustomAttributeNamedArgument)>(
    &::System::Reflection::CustomAttributeNamedArgument::op_Equality)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b84af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeNamedArgument>(),
                            { "op_Equality", {}, { ::i2c::type_of<::System::Reflection::CustomAttributeNamedArgument>(), ::i2c::type_of<::System::Reflection::CustomAttributeNamedArgument>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeNamedArgument.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::CustomAttributeNamedArgument, ::System::Reflection::CustomAttributeNamedArgument)>(
    &::System::Reflection::CustomAttributeNamedArgument::op_Inequality)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b84b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeNamedArgument>(),
                            { "op_Inequality", {}, { ::i2c::type_of<::System::Reflection::CustomAttributeNamedArgument>(), ::i2c::type_of<::System::Reflection::CustomAttributeNamedArgument>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeNamedArgument.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::CustomAttributeNamedArgument::*)()>(&::System::Reflection::CustomAttributeNamedArgument::ToString)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x5b84bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeNamedArgument>(), { ::i2c::class_of<::System::Reflection::CustomAttributeNamedArgument>(), 3 }));
    return ___internal_method;
  }
};
inline void System::Reflection::CustomAttributeNamedArgument::_ctor(::System::Type* attributeType, ::StringW memberName, bool isField, ::System::Reflection::CustomAttributeTypedArgument typedValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Reflection::CustomAttributeNamedArgument>(),
          { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Reflection::CustomAttributeTypedArgument>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, attributeType, memberName, isField, typedValue);
}
inline void System::Reflection::CustomAttributeNamedArgument::_ctor(::System::Reflection::MemberInfo* memberInfo, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeNamedArgument>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, memberInfo, value);
}
inline void System::Reflection::CustomAttributeNamedArgument::_ctor(::System::Reflection::MemberInfo* memberInfo, ::System::Reflection::CustomAttributeTypedArgument typedArgument) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeNamedArgument>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Reflection::CustomAttributeTypedArgument>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, memberInfo, typedArgument);
}
inline ::System::Reflection::CustomAttributeTypedArgument System::Reflection::CustomAttributeNamedArgument::get_TypedValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeNamedArgument>(), { "get_TypedValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::CustomAttributeTypedArgument>(*this, ___internal_method);
}
inline bool System::Reflection::CustomAttributeNamedArgument::get_IsField() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeNamedArgument>(), { "get_IsField", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::StringW System::Reflection::CustomAttributeNamedArgument::get_MemberName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeNamedArgument>(), { "get_MemberName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::System::Reflection::MemberInfo* System::Reflection::CustomAttributeNamedArgument::get_MemberInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeNamedArgument>(), { "get_MemberInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MemberInfo*>(*this, ___internal_method);
}
inline bool System::Reflection::CustomAttributeNamedArgument::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::CustomAttributeNamedArgument>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t System::Reflection::CustomAttributeNamedArgument::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::CustomAttributeNamedArgument>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool System::Reflection::CustomAttributeNamedArgument::op_Equality(::System::Reflection::CustomAttributeNamedArgument left, ::System::Reflection::CustomAttributeNamedArgument right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeNamedArgument>(),
                          { "op_Equality", {}, { ::i2c::type_of<::System::Reflection::CustomAttributeNamedArgument>(), ::i2c::type_of<::System::Reflection::CustomAttributeNamedArgument>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool System::Reflection::CustomAttributeNamedArgument::op_Inequality(::System::Reflection::CustomAttributeNamedArgument left, ::System::Reflection::CustomAttributeNamedArgument right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeNamedArgument>(),
                          { "op_Inequality", {}, { ::i2c::type_of<::System::Reflection::CustomAttributeNamedArgument>(), ::i2c::type_of<::System::Reflection::CustomAttributeNamedArgument>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline ::StringW System::Reflection::CustomAttributeNamedArgument::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::CustomAttributeNamedArgument>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_TypedValue_k__BackingField", ty: "::System::Reflection::CustomAttributeTypedArgument", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_IsField_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_MemberName_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "_attributeType", ty: "::System::Type*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_lazyMemberInfo", ty: "::System::Reflection::MemberInfo*", modifiers: "", def_value:
// Some("{}") }]
constexpr ::System::Reflection::CustomAttributeNamedArgument::CustomAttributeNamedArgument(::System::Reflection::CustomAttributeTypedArgument _TypedValue_k__BackingField,
                                                                                           bool _IsField_k__BackingField, ::StringW _MemberName_k__BackingField, ::System::Type* _attributeType,
                                                                                           ::System::Reflection::MemberInfo* _lazyMemberInfo) noexcept {
  this->_TypedValue_k__BackingField = _TypedValue_k__BackingField;
  this->_IsField_k__BackingField = _IsField_k__BackingField;
  this->_MemberName_k__BackingField = _MemberName_k__BackingField;
  this->_attributeType = _attributeType;
  this->_lazyMemberInfo = _lazyMemberInfo;
}
// Ctor Parameters []
constexpr ::System::Reflection::CustomAttributeNamedArgument::CustomAttributeNamedArgument() {}
