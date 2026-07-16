#pragma once
// IWYU pragma private; include "System/Reflection/RuntimeParameterInfo.hpp"
#include "System/Reflection/zzzz__ParameterInfo_impl.hpp"
#include "System/Reflection/zzzz__RuntimeParameterInfo_def.hpp"
#include "System/Reflection/zzzz__CallingConventions_def.hpp"
#include "System/Reflection/zzzz__CustomAttributeData_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/Runtime/InteropServices/zzzz__MarshalAsAttribute_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::RuntimeParameterInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::RuntimeParameterInfo::*)(
    ::StringW, ::System::Type*, int32_t, int32_t, ::System::Object*, ::System::Reflection::MemberInfo*, ::System::Runtime::InteropServices::MarshalAsAttribute*)>(
    &::System::Reflection::RuntimeParameterInfo::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b8d978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeParameterInfo*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>(),
                                             ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Runtime::InteropServices::MarshalAsAttribute*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeParameterInfo.FormatParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, ::ArrayW<::System::Reflection::ParameterInfo*>, ::System::Reflection::CallingConventions, bool)>(
    &::System::Reflection::RuntimeParameterInfo::FormatParameters)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5b8aee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeParameterInfo*>(),
                                                             { "FormatParameters",
                                                               {},
                                                               { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterInfo*>>(),
                                                                 ::i2c::type_of<::System::Reflection::CallingConventions>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeParameterInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::RuntimeParameterInfo::*)(::System::Reflection::ParameterInfo*, ::System::Reflection::MemberInfo*)>(
    &::System::Reflection::RuntimeParameterInfo::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b8d990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeParameterInfo*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Reflection::ParameterInfo*>(), ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeParameterInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::RuntimeParameterInfo::*)(
    ::System::Type*, ::System::Reflection::MemberInfo*, ::System::Runtime::InteropServices::MarshalAsAttribute*)>(&::System::Reflection::RuntimeParameterInfo::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b8dacc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Reflection::RuntimeParameterInfo*>(),
            { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Runtime::InteropServices::MarshalAsAttribute*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeParameterInfo.get_DefaultValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Reflection::RuntimeParameterInfo::*)()>(&::System::Reflection::RuntimeParameterInfo::get_DefaultValue)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x5b8daec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeParameterInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeParameterInfo*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeParameterInfo.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Reflection::RuntimeParameterInfo::*)(bool)>(
    &::System::Reflection::RuntimeParameterInfo::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b8de30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeParameterInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeParameterInfo*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeParameterInfo.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Reflection::RuntimeParameterInfo::*)(::System::Type*, bool)>(
    &::System::Reflection::RuntimeParameterInfo::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5b8de90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeParameterInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeParameterInfo*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeParameterInfo.GetDefaultValueImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Reflection::RuntimeParameterInfo::*)(::System::Reflection::ParameterInfo*)>(
    &::System::Reflection::RuntimeParameterInfo::GetDefaultValueImpl)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5b8da18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeParameterInfo*>(), { "GetDefaultValueImpl", {}, { ::i2c::type_of<::System::Reflection::ParameterInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeParameterInfo.IsDefined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::RuntimeParameterInfo::*)(::System::Type*, bool)>(&::System::Reflection::RuntimeParameterInfo::IsDefined)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b8df00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeParameterInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeParameterInfo*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeParameterInfo.GetPseudoCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Reflection::RuntimeParameterInfo::*)()>(
    &::System::Reflection::RuntimeParameterInfo::GetPseudoCustomAttributes)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5b8df74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeParameterInfo*>(), { "GetPseudoCustomAttributes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeParameterInfo.GetPseudoCustomAttributesData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::CustomAttributeData*> (::System::Reflection::RuntimeParameterInfo::*)()>(
    &::System::Reflection::RuntimeParameterInfo::GetPseudoCustomAttributesData)> {
  constexpr static std::size_t size = 0x544;
  constexpr static std::size_t addrs = 0x5b8e1dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeParameterInfo*>(), { "GetPseudoCustomAttributesData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeParameterInfo.New
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::ParameterInfo* (*)(::System::Reflection::ParameterInfo*, ::System::Reflection::MemberInfo*)>(
    &::System::Reflection::RuntimeParameterInfo::New)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b8e720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeParameterInfo*>(),
                                                             { "New", {}, { ::i2c::type_of<::System::Reflection::ParameterInfo*>(), ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeParameterInfo.New
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Reflection::ParameterInfo* (*)(::System::Type*, ::System::Reflection::MemberInfo*, ::System::Runtime::InteropServices::MarshalAsAttribute*)>(
        &::System::Reflection::RuntimeParameterInfo::New)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5b8abbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Reflection::RuntimeParameterInfo*>(),
            { "New", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Runtime::InteropServices::MarshalAsAttribute*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::MarshalAsAttribute*& System::Reflection::RuntimeParameterInfo::__cordl_internal_get_marshalAs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___marshalAs;
}
constexpr ::System::Runtime::InteropServices::MarshalAsAttribute* const& System::Reflection::RuntimeParameterInfo::__cordl_internal_get_marshalAs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___marshalAs;
}
constexpr void System::Reflection::RuntimeParameterInfo::__cordl_internal_set_marshalAs(::System::Runtime::InteropServices::MarshalAsAttribute* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___marshalAs = value;
}
inline void System::Reflection::RuntimeParameterInfo::_ctor(::StringW name, ::System::Type* type, int32_t position, int32_t attrs, ::System::Object* defaultValue,
                                                            ::System::Reflection::MemberInfo* member, ::System::Runtime::InteropServices::MarshalAsAttribute* marshalAs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeParameterInfo*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>(),
                                           ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Runtime::InteropServices::MarshalAsAttribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, type, position, attrs, defaultValue, member, marshalAs);
}
inline void System::Reflection::RuntimeParameterInfo::FormatParameters(::System::Text::StringBuilder* sb, ::ArrayW<::System::Reflection::ParameterInfo*> p,
                                                                       ::System::Reflection::CallingConventions callingConvention, bool serialization) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeParameterInfo*>(),
                                                           { "FormatParameters",
                                                             {},
                                                             { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterInfo*>>(),
                                                               ::i2c::type_of<::System::Reflection::CallingConventions>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, p, callingConvention, serialization);
}
inline void System::Reflection::RuntimeParameterInfo::_ctor(::System::Reflection::ParameterInfo* pinfo, ::System::Reflection::MemberInfo* member) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeParameterInfo*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Reflection::ParameterInfo*>(), ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pinfo, member);
}
inline void System::Reflection::RuntimeParameterInfo::_ctor(::System::Type* type, ::System::Reflection::MemberInfo* member, ::System::Runtime::InteropServices::MarshalAsAttribute* marshalAs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Reflection::RuntimeParameterInfo*>(),
          { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Runtime::InteropServices::MarshalAsAttribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, member, marshalAs);
}
inline ::System::Object* System::Reflection::RuntimeParameterInfo::get_DefaultValue() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeParameterInfo*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::ArrayW<::System::Object*> System::Reflection::RuntimeParameterInfo::GetCustomAttributes(bool inherit) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeParameterInfo*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, inherit);
}
inline ::ArrayW<::System::Object*> System::Reflection::RuntimeParameterInfo::GetCustomAttributes(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeParameterInfo*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, attributeType, inherit);
}
inline ::System::Object* System::Reflection::RuntimeParameterInfo::GetDefaultValueImpl(::System::Reflection::ParameterInfo* pinfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeParameterInfo*>(), { "GetDefaultValueImpl", {}, { ::i2c::type_of<::System::Reflection::ParameterInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, pinfo);
}
inline bool System::Reflection::RuntimeParameterInfo::IsDefined(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeParameterInfo*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, attributeType, inherit);
}
inline ::ArrayW<::System::Object*> System::Reflection::RuntimeParameterInfo::GetPseudoCustomAttributes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeParameterInfo*>(), { "GetPseudoCustomAttributes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method);
}
inline ::ArrayW<::System::Reflection::CustomAttributeData*> System::Reflection::RuntimeParameterInfo::GetPseudoCustomAttributesData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeParameterInfo*>(), { "GetPseudoCustomAttributesData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::CustomAttributeData*>>(this, ___internal_method);
}
inline ::System::Reflection::ParameterInfo* System::Reflection::RuntimeParameterInfo::New(::System::Reflection::ParameterInfo* pinfo, ::System::Reflection::MemberInfo* member) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeParameterInfo*>(),
                                                           { "New", {}, { ::i2c::type_of<::System::Reflection::ParameterInfo*>(), ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::ParameterInfo*>(nullptr, ___internal_method, pinfo, member);
}
inline ::System::Reflection::ParameterInfo* System::Reflection::RuntimeParameterInfo::New(::System::Type* type, ::System::Reflection::MemberInfo* member,
                                                                                          ::System::Runtime::InteropServices::MarshalAsAttribute* marshalAs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Reflection::RuntimeParameterInfo*>(),
          { "New", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Runtime::InteropServices::MarshalAsAttribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::ParameterInfo*>(nullptr, ___internal_method, type, member, marshalAs);
}
inline ::System::Reflection::RuntimeParameterInfo* System::Reflection::RuntimeParameterInfo::New_ctor(::StringW name, ::System::Type* type, int32_t position, int32_t attrs,
                                                                                                      ::System::Object* defaultValue, ::System::Reflection::MemberInfo* member,
                                                                                                      ::System::Runtime::InteropServices::MarshalAsAttribute* marshalAs) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::RuntimeParameterInfo*>(name, type, position, attrs, defaultValue, member, marshalAs));
}
inline ::System::Reflection::RuntimeParameterInfo* System::Reflection::RuntimeParameterInfo::New_ctor(::System::Reflection::ParameterInfo* pinfo, ::System::Reflection::MemberInfo* member) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::RuntimeParameterInfo*>(pinfo, member));
}
inline ::System::Reflection::RuntimeParameterInfo* System::Reflection::RuntimeParameterInfo::New_ctor(::System::Type* type, ::System::Reflection::MemberInfo* member,
                                                                                                      ::System::Runtime::InteropServices::MarshalAsAttribute* marshalAs) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::RuntimeParameterInfo*>(type, member, marshalAs));
}
// Ctor Parameters []
constexpr ::System::Reflection::RuntimeParameterInfo::RuntimeParameterInfo() {}
