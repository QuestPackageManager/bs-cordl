#pragma once
// IWYU pragma private; include "System\Attribute.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Reflection/zzzz__EventInfo_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Reflection/zzzz__Module_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Attribute.InternalGetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Attribute*> (*)(::System::Reflection::PropertyInfo*, ::System::Type*, bool)>(
    &::System::Attribute::InternalGetCustomAttributes)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5c72ae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Attribute*>(),
                                         { "InternalGetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::PropertyInfo*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Attribute.InternalGetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Attribute*> (*)(::System::Reflection::EventInfo*, ::System::Type*, bool)>(
    &::System::Attribute::InternalGetCustomAttributes)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5c72b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Attribute*>(),
                                         { "InternalGetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::EventInfo*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Attribute.InternalParamGetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Attribute*> (*)(::System::Reflection::ParameterInfo*, ::System::Type*, bool)>(
    &::System::Attribute::InternalParamGetCustomAttributes)> {
  constexpr static std::size_t size = 0x54c;
  constexpr static std::size_t addrs = 0x5c72c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Attribute*>(),
                            { "InternalParamGetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::ParameterInfo*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Attribute.InternalIsDefined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::PropertyInfo*, ::System::Type*, bool)>(&::System::Attribute::InternalIsDefined)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5c73198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Attribute*>(),
                                                { "InternalIsDefined", {}, { ::i2c::type_of<::System::Reflection::PropertyInfo*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Attribute.InternalIsDefined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::EventInfo*, ::System::Type*, bool)>(&::System::Attribute::InternalIsDefined)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5c7320c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Attribute*>(),
                                                { "InternalIsDefined", {}, { ::i2c::type_of<::System::Reflection::EventInfo*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Attribute.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Attribute*> (*)(::System::Reflection::MemberInfo*, ::System::Type*)>(&::System::Attribute::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c73280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Attribute*>(), { "GetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Attribute.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Attribute*> (*)(::System::Reflection::MemberInfo*, ::System::Type*, bool)>(&::System::Attribute::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x5c73288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Attribute*>(),
                                                { "GetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Attribute.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Attribute*> (*)(::System::Reflection::MemberInfo*)>(&::System::Attribute::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c73554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Attribute*>(), { "GetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Attribute.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Attribute*> (*)(::System::Reflection::MemberInfo*, bool)>(&::System::Attribute::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x5c7355c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Attribute*>(), { "GetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Attribute.IsDefined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::MemberInfo*, ::System::Type*)>(&::System::Attribute::IsDefined)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c73788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Attribute*>(), { "IsDefined", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Attribute.IsDefined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::MemberInfo*, ::System::Type*, bool)>(&::System::Attribute::IsDefined)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x5c73790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Attribute*>(),
                                                             { "IsDefined", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Attribute.GetCustomAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Attribute* (*)(::System::Reflection::MemberInfo*, ::System::Type*)>(&::System::Attribute::GetCustomAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c73a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Attribute*>(), { "GetCustomAttribute", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Attribute.GetCustomAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Attribute* (*)(::System::Reflection::MemberInfo*, ::System::Type*, bool)>(&::System::Attribute::GetCustomAttribute)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5c73a40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Attribute*>(),
                                                { "GetCustomAttribute", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Attribute.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Attribute*> (*)(::System::Reflection::ParameterInfo*, ::System::Type*, bool)>(&::System::Attribute::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x5c73ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Attribute*>(),
                                                { "GetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::ParameterInfo*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Attribute.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Attribute*> (*)(::System::Reflection::ParameterInfo*, bool)>(&::System::Attribute::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5c73d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Attribute*>(), { "GetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::ParameterInfo*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Attribute.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Attribute*> (*)(::System::Reflection::Module*, bool)>(&::System::Attribute::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5c73efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Attribute*>(), { "GetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::Module*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Attribute.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Attribute*> (*)(::System::Reflection::Module*, ::System::Type*, bool)>(&::System::Attribute::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x5c7403c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Attribute*>(),
                                                { "GetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::Module*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Attribute.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Attribute*> (*)(::System::Reflection::Assembly*, ::System::Type*)>(&::System::Attribute::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c74248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Attribute*>(), { "GetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Attribute.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Attribute*> (*)(::System::Reflection::Assembly*, ::System::Type*, bool)>(&::System::Attribute::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5c74250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Attribute*>(),
                                                { "GetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Attribute.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Attribute*> (*)(::System::Reflection::Assembly*)>(&::System::Attribute::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c7444c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Attribute*>(), { "GetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::Assembly*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Attribute.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Attribute*> (*)(::System::Reflection::Assembly*, bool)>(&::System::Attribute::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5c74454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Attribute*>(), { "GetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Attribute.GetCustomAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Attribute* (*)(::System::Reflection::Assembly*, ::System::Type*)>(&::System::Attribute::GetCustomAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c74584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Attribute*>(), { "GetCustomAttribute", {}, { ::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Attribute.GetCustomAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Attribute* (*)(::System::Reflection::Assembly*, ::System::Type*, bool)>(&::System::Attribute::GetCustomAttribute)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5c7458c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Attribute*>(),
                                                { "GetCustomAttribute", {}, { ::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Attribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Attribute::*)()>(&::System::Attribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c70508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Attribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Attribute.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Attribute::*)(::System::Object*)>(&::System::Attribute::Equals)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x5c7460c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Attribute*>(), { ::i2c::class_of<::System::Attribute*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Attribute.AreFieldValuesEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*, ::System::Object*)>(&::System::Attribute::AreFieldValuesEqual)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5c74850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Attribute*>(), { "AreFieldValuesEqual", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Attribute.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Attribute::*)()>(&::System::Attribute::GetHashCode)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5c749f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Attribute*>(), { ::i2c::class_of<::System::Attribute*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Attribute.get_TypeId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Attribute::*)()>(&::System::Attribute::get_TypeId)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c74b2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Attribute*>(), { ::i2c::class_of<::System::Attribute*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Attribute.Match
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Attribute::*)(::System::Object*)>(&::System::Attribute::Match)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c74b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Attribute*>(), { ::i2c::class_of<::System::Attribute*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Attribute.IsDefaultAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Attribute::*)()>(&::System::Attribute::IsDefaultAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c74b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Attribute*>(), { ::i2c::class_of<::System::Attribute*>(), 6 }));
    return ___internal_method;
  }
};
inline ::ArrayW<::System::Attribute*> System::Attribute::InternalGetCustomAttributes(::System::Reflection::PropertyInfo* element, ::System::Type* type, bool inherit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Attribute*>(),
                                       { "InternalGetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::PropertyInfo*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Attribute*>>(nullptr, ___internal_method, element, type, inherit);
}
inline ::ArrayW<::System::Attribute*> System::Attribute::InternalGetCustomAttributes(::System::Reflection::EventInfo* element, ::System::Type* type, bool inherit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Attribute*>(),
                                       { "InternalGetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::EventInfo*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Attribute*>>(nullptr, ___internal_method, element, type, inherit);
}
inline ::ArrayW<::System::Attribute*> System::Attribute::InternalParamGetCustomAttributes(::System::Reflection::ParameterInfo* parameter, ::System::Type* attributeType, bool inherit) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Attribute*>(),
                          { "InternalParamGetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::ParameterInfo*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Attribute*>>(nullptr, ___internal_method, parameter, attributeType, inherit);
}
inline bool System::Attribute::InternalIsDefined(::System::Reflection::PropertyInfo* element, ::System::Type* attributeType, bool inherit) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Attribute*>(),
                                              { "InternalIsDefined", {}, { ::i2c::type_of<::System::Reflection::PropertyInfo*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, element, attributeType, inherit);
}
inline bool System::Attribute::InternalIsDefined(::System::Reflection::EventInfo* element, ::System::Type* attributeType, bool inherit) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Attribute*>(),
                                              { "InternalIsDefined", {}, { ::i2c::type_of<::System::Reflection::EventInfo*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, element, attributeType, inherit);
}
inline ::ArrayW<::System::Attribute*> System::Attribute::GetCustomAttributes(::System::Reflection::MemberInfo* element, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Attribute*>(), { "GetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Attribute*>>(nullptr, ___internal_method, element, type);
}
inline ::ArrayW<::System::Attribute*> System::Attribute::GetCustomAttributes(::System::Reflection::MemberInfo* element, ::System::Type* type, bool inherit) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Attribute*>(),
                                              { "GetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Attribute*>>(nullptr, ___internal_method, element, type, inherit);
}
inline ::ArrayW<::System::Attribute*> System::Attribute::GetCustomAttributes(::System::Reflection::MemberInfo* element) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Attribute*>(), { "GetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Attribute*>>(nullptr, ___internal_method, element);
}
inline ::ArrayW<::System::Attribute*> System::Attribute::GetCustomAttributes(::System::Reflection::MemberInfo* element, bool inherit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Attribute*>(), { "GetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Attribute*>>(nullptr, ___internal_method, element, inherit);
}
inline bool System::Attribute::IsDefined(::System::Reflection::MemberInfo* element, ::System::Type* attributeType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Attribute*>(), { "IsDefined", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, element, attributeType);
}
inline bool System::Attribute::IsDefined(::System::Reflection::MemberInfo* element, ::System::Type* attributeType, bool inherit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Attribute*>(),
                                                           { "IsDefined", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, element, attributeType, inherit);
}
inline ::System::Attribute* System::Attribute::GetCustomAttribute(::System::Reflection::MemberInfo* element, ::System::Type* attributeType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Attribute*>(), { "GetCustomAttribute", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Attribute*>(nullptr, ___internal_method, element, attributeType);
}
inline ::System::Attribute* System::Attribute::GetCustomAttribute(::System::Reflection::MemberInfo* element, ::System::Type* attributeType, bool inherit) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Attribute*>(),
                                              { "GetCustomAttribute", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Attribute*>(nullptr, ___internal_method, element, attributeType, inherit);
}
inline ::ArrayW<::System::Attribute*> System::Attribute::GetCustomAttributes(::System::Reflection::ParameterInfo* element, ::System::Type* attributeType, bool inherit) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Attribute*>(),
                                              { "GetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::ParameterInfo*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Attribute*>>(nullptr, ___internal_method, element, attributeType, inherit);
}
inline ::ArrayW<::System::Attribute*> System::Attribute::GetCustomAttributes(::System::Reflection::ParameterInfo* element, bool inherit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Attribute*>(), { "GetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::ParameterInfo*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Attribute*>>(nullptr, ___internal_method, element, inherit);
}
inline ::ArrayW<::System::Attribute*> System::Attribute::GetCustomAttributes(::System::Reflection::Module* element, bool inherit) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Attribute*>(), { "GetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::Module*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Attribute*>>(nullptr, ___internal_method, element, inherit);
}
inline ::ArrayW<::System::Attribute*> System::Attribute::GetCustomAttributes(::System::Reflection::Module* element, ::System::Type* attributeType, bool inherit) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Attribute*>(),
                                              { "GetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::Module*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Attribute*>>(nullptr, ___internal_method, element, attributeType, inherit);
}
inline ::ArrayW<::System::Attribute*> System::Attribute::GetCustomAttributes(::System::Reflection::Assembly* element, ::System::Type* attributeType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Attribute*>(), { "GetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Attribute*>>(nullptr, ___internal_method, element, attributeType);
}
inline ::ArrayW<::System::Attribute*> System::Attribute::GetCustomAttributes(::System::Reflection::Assembly* element, ::System::Type* attributeType, bool inherit) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Attribute*>(),
                                              { "GetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Attribute*>>(nullptr, ___internal_method, element, attributeType, inherit);
}
inline ::ArrayW<::System::Attribute*> System::Attribute::GetCustomAttributes(::System::Reflection::Assembly* element) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Attribute*>(), { "GetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::Assembly*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Attribute*>>(nullptr, ___internal_method, element);
}
inline ::ArrayW<::System::Attribute*> System::Attribute::GetCustomAttributes(::System::Reflection::Assembly* element, bool inherit) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Attribute*>(), { "GetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Attribute*>>(nullptr, ___internal_method, element, inherit);
}
inline ::System::Attribute* System::Attribute::GetCustomAttribute(::System::Reflection::Assembly* element, ::System::Type* attributeType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Attribute*>(), { "GetCustomAttribute", {}, { ::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Attribute*>(nullptr, ___internal_method, element, attributeType);
}
inline ::System::Attribute* System::Attribute::GetCustomAttribute(::System::Reflection::Assembly* element, ::System::Type* attributeType, bool inherit) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Attribute*>(),
                                              { "GetCustomAttribute", {}, { ::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Attribute*>(nullptr, ___internal_method, element, attributeType, inherit);
}
inline void System::Attribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Attribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Attribute::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Attribute*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool System::Attribute::AreFieldValuesEqual(::System::Object* thisValue, ::System::Object* thatValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Attribute*>(), { "AreFieldValuesEqual", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, thisValue, thatValue);
}
inline int32_t System::Attribute::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Attribute*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Object* System::Attribute::get_TypeId() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Attribute*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::Attribute::Match(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Attribute*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool System::Attribute::IsDefaultAttribute() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Attribute*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Attribute* System::Attribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Attribute*>());
}
// Ctor Parameters []
constexpr ::System::Attribute::Attribute() {}
