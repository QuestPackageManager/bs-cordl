#pragma once
// IWYU pragma private; include "System/ComponentModel/ReflectPropertyDescriptor.hpp"
#include "System/Collections/Specialized/zzzz__BitVector32_impl.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptor_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "System/ComponentModel/zzzz__ReflectPropertyDescriptor_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/ComponentModel/zzzz__EventDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__IExtenderProvider_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptor_def.hpp"
#include "System/Diagnostics/zzzz__TraceSwitch_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ReflectPropertyDescriptor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ReflectPropertyDescriptor::*)(::System::Type*, ::StringW, ::System::Type*, ::ArrayW<::System::Attribute*>)>(
    &::System::ComponentModel::ReflectPropertyDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x63ca94c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectPropertyDescriptor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ReflectPropertyDescriptor::*)(
    ::System::Type*, ::StringW, ::System::Type*, ::System::Reflection::PropertyInfo*, ::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*, ::ArrayW<::System::Attribute*>)>(
    &::System::ComponentModel::ReflectPropertyDescriptor::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x63cabdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(),
                            { ".ctor",
                              {},
                              { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::PropertyInfo*>(),
                                ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectPropertyDescriptor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ReflectPropertyDescriptor::*)(
    ::System::Type*, ::StringW, ::System::Type*, ::System::Type*, ::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*, ::ArrayW<::System::Attribute*>)>(
    &::System::ComponentModel::ReflectPropertyDescriptor::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x63cacd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(),
                            { ".ctor",
                              {},
                              { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(),
                                ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectPropertyDescriptor.get_AmbientValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::ReflectPropertyDescriptor::*)()>(
    &::System::ComponentModel::ReflectPropertyDescriptor::get_AmbientValue)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x63cad9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(), { "get_AmbientValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectPropertyDescriptor.get_ComponentType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::ComponentModel::ReflectPropertyDescriptor::*)()>(
    &::System::ComponentModel::ReflectPropertyDescriptor::get_ComponentType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63caf04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectPropertyDescriptor.get_DefaultValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::ReflectPropertyDescriptor::*)()>(
    &::System::ComponentModel::ReflectPropertyDescriptor::get_DefaultValue)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x63caf0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(), { "get_DefaultValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectPropertyDescriptor.get_GetMethodValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::ComponentModel::ReflectPropertyDescriptor::*)()>(
    &::System::ComponentModel::ReflectPropertyDescriptor::get_GetMethodValue)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x63cb16c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(), { "get_GetMethodValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectPropertyDescriptor.get_IsExtender
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ReflectPropertyDescriptor::*)()>(&::System::ComponentModel::ReflectPropertyDescriptor::get_IsExtender)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x63cb544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(), { "get_IsExtender", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectPropertyDescriptor.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ReflectPropertyDescriptor::*)()>(&::System::ComponentModel::ReflectPropertyDescriptor::get_IsReadOnly)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x63cb574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectPropertyDescriptor.get_PropertyType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::ComponentModel::ReflectPropertyDescriptor::*)()>(
    &::System::ComponentModel::ReflectPropertyDescriptor::get_PropertyType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63cbaa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectPropertyDescriptor.get_ResetMethodValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::ComponentModel::ReflectPropertyDescriptor::*)()>(
    &::System::ComponentModel::ReflectPropertyDescriptor::get_ResetMethodValue)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x63cbaa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(), { "get_ResetMethodValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectPropertyDescriptor.get_SetMethodValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::ComponentModel::ReflectPropertyDescriptor::*)()>(
    &::System::ComponentModel::ReflectPropertyDescriptor::get_SetMethodValue)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x63cb660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(), { "get_SetMethodValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectPropertyDescriptor.get_ShouldSerializeMethodValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::ComponentModel::ReflectPropertyDescriptor::*)()>(
    &::System::ComponentModel::ReflectPropertyDescriptor::get_ShouldSerializeMethodValue)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x63cbc7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(), { "get_ShouldSerializeMethodValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectPropertyDescriptor.ExtenderCanResetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ReflectPropertyDescriptor::*)(::System::ComponentModel::IExtenderProvider*, ::System::Object*)>(
    &::System::ComponentModel::ReflectPropertyDescriptor::ExtenderCanResetValue)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x63cbe50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(),
                                                { "ExtenderCanResetValue", {}, { ::i2c::type_of<::System::ComponentModel::IExtenderProvider*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectPropertyDescriptor.ExtenderGetReceiverType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::ComponentModel::ReflectPropertyDescriptor::*)()>(
    &::System::ComponentModel::ReflectPropertyDescriptor::ExtenderGetReceiverType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63cc23c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(), { "ExtenderGetReceiverType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectPropertyDescriptor.ExtenderGetType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::ComponentModel::ReflectPropertyDescriptor::*)(::System::ComponentModel::IExtenderProvider*)>(
    &::System::ComponentModel::ReflectPropertyDescriptor::ExtenderGetType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x63cc244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(),
                                                                                           { "ExtenderGetType", {}, { ::i2c::type_of<::System::ComponentModel::IExtenderProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectPropertyDescriptor.ExtenderGetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::ReflectPropertyDescriptor::*)(::System::ComponentModel::IExtenderProvider*, ::System::Object*)>(
    &::System::ComponentModel::ReflectPropertyDescriptor::ExtenderGetValue)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x63cc0f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(),
                                                             { "ExtenderGetValue", {}, { ::i2c::type_of<::System::ComponentModel::IExtenderProvider*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectPropertyDescriptor.ExtenderResetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ReflectPropertyDescriptor::*)(
    ::System::ComponentModel::IExtenderProvider*, ::System::Object*, ::System::ComponentModel::PropertyDescriptor*)>(&::System::ComponentModel::ReflectPropertyDescriptor::ExtenderResetValue)> {
  constexpr static std::size_t size = 0x4c8;
  constexpr static std::size_t addrs = 0x63cc254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(),
                                                                                           { "ExtenderResetValue",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::ComponentModel::IExtenderProvider*>(), ::i2c::type_of<::System::Object*>(),
                                                                                               ::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectPropertyDescriptor.ExtenderSetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ReflectPropertyDescriptor::*)(::System::ComponentModel::IExtenderProvider*, ::System::Object*, ::System::Object*,
                                                                                                                     ::System::ComponentModel::PropertyDescriptor*)>(
    &::System::ComponentModel::ReflectPropertyDescriptor::ExtenderSetValue)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x63cc71c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(),
                                                             { "ExtenderSetValue",
                                                               {},
                                                               { ::i2c::type_of<::System::ComponentModel::IExtenderProvider*>(), ::i2c::type_of<::System::Object*>(),
                                                                 ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectPropertyDescriptor.ExtenderShouldSerializeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ReflectPropertyDescriptor::*)(::System::ComponentModel::IExtenderProvider*, ::System::Object*)>(
    &::System::ComponentModel::ReflectPropertyDescriptor::ExtenderShouldSerializeValue)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x63ccb94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(),
                                                { "ExtenderShouldSerializeValue", {}, { ::i2c::type_of<::System::ComponentModel::IExtenderProvider*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectPropertyDescriptor.CanResetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ReflectPropertyDescriptor::*)(::System::Object*)>(
    &::System::ComponentModel::ReflectPropertyDescriptor::CanResetValue)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x63cd00c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectPropertyDescriptor.FillAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ReflectPropertyDescriptor::*)(::System::Collections::IList*)>(
    &::System::ComponentModel::ReflectPropertyDescriptor::FillAttributes)> {
  constexpr static std::size_t size = 0xa2c;
  constexpr static std::size_t addrs = 0x63cd298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectPropertyDescriptor.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::ReflectPropertyDescriptor::*)(::System::Object*)>(
    &::System::ComponentModel::ReflectPropertyDescriptor::GetValue)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x63ce23c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectPropertyDescriptor.OnValueChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ReflectPropertyDescriptor::*)(::System::Object*, ::System::EventArgs*)>(
    &::System::ComponentModel::ReflectPropertyDescriptor::OnValueChanged)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x63ce534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectPropertyDescriptor.ResetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ReflectPropertyDescriptor::*)(::System::Object*)>(
    &::System::ComponentModel::ReflectPropertyDescriptor::ResetValue)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x63ce5d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectPropertyDescriptor.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ReflectPropertyDescriptor::*)(::System::Object*, ::System::Object*)>(
    &::System::ComponentModel::ReflectPropertyDescriptor::SetValue)> {
  constexpr static std::size_t size = 0x5fc;
  constexpr static std::size_t addrs = 0x63ce9d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectPropertyDescriptor.ShouldSerializeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ReflectPropertyDescriptor::*)(::System::Object*)>(
    &::System::ComponentModel::ReflectPropertyDescriptor::ShouldSerializeValue)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x63cefd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(), 22 }));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Specialized::BitVector32& System::ComponentModel::ReflectPropertyDescriptor::__cordl_internal_get_state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr ::System::Collections::Specialized::BitVector32 const& System::ComponentModel::ReflectPropertyDescriptor::__cordl_internal_get_state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr void System::ComponentModel::ReflectPropertyDescriptor::__cordl_internal_set_state(::System::Collections::Specialized::BitVector32 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___state = value;
}
constexpr ::System::Type*& System::ComponentModel::ReflectPropertyDescriptor::__cordl_internal_get_componentClass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___componentClass;
}
constexpr ::System::Type* const& System::ComponentModel::ReflectPropertyDescriptor::__cordl_internal_get_componentClass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___componentClass;
}
constexpr void System::ComponentModel::ReflectPropertyDescriptor::__cordl_internal_set_componentClass(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___componentClass = value;
}
constexpr ::System::Type*& System::ComponentModel::ReflectPropertyDescriptor::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::System::Type* const& System::ComponentModel::ReflectPropertyDescriptor::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void System::ComponentModel::ReflectPropertyDescriptor::__cordl_internal_set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
constexpr ::System::Object*& System::ComponentModel::ReflectPropertyDescriptor::__cordl_internal_get_defaultValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultValue;
}
constexpr ::System::Object* const& System::ComponentModel::ReflectPropertyDescriptor::__cordl_internal_get_defaultValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultValue;
}
constexpr void System::ComponentModel::ReflectPropertyDescriptor::__cordl_internal_set_defaultValue(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultValue = value;
}
constexpr ::System::Object*& System::ComponentModel::ReflectPropertyDescriptor::__cordl_internal_get_ambientValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ambientValue;
}
constexpr ::System::Object* const& System::ComponentModel::ReflectPropertyDescriptor::__cordl_internal_get_ambientValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ambientValue;
}
constexpr void System::ComponentModel::ReflectPropertyDescriptor::__cordl_internal_set_ambientValue(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ambientValue = value;
}
constexpr ::System::Reflection::PropertyInfo*& System::ComponentModel::ReflectPropertyDescriptor::__cordl_internal_get_propInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___propInfo;
}
constexpr ::System::Reflection::PropertyInfo* const& System::ComponentModel::ReflectPropertyDescriptor::__cordl_internal_get_propInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___propInfo;
}
constexpr void System::ComponentModel::ReflectPropertyDescriptor::__cordl_internal_set_propInfo(::System::Reflection::PropertyInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___propInfo = value;
}
constexpr ::System::Reflection::MethodInfo*& System::ComponentModel::ReflectPropertyDescriptor::__cordl_internal_get_getMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getMethod;
}
constexpr ::System::Reflection::MethodInfo* const& System::ComponentModel::ReflectPropertyDescriptor::__cordl_internal_get_getMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getMethod;
}
constexpr void System::ComponentModel::ReflectPropertyDescriptor::__cordl_internal_set_getMethod(::System::Reflection::MethodInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___getMethod = value;
}
constexpr ::System::Reflection::MethodInfo*& System::ComponentModel::ReflectPropertyDescriptor::__cordl_internal_get_setMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setMethod;
}
constexpr ::System::Reflection::MethodInfo* const& System::ComponentModel::ReflectPropertyDescriptor::__cordl_internal_get_setMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setMethod;
}
constexpr void System::ComponentModel::ReflectPropertyDescriptor::__cordl_internal_set_setMethod(::System::Reflection::MethodInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___setMethod = value;
}
constexpr ::System::Reflection::MethodInfo*& System::ComponentModel::ReflectPropertyDescriptor::__cordl_internal_get_shouldSerializeMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shouldSerializeMethod;
}
constexpr ::System::Reflection::MethodInfo* const& System::ComponentModel::ReflectPropertyDescriptor::__cordl_internal_get_shouldSerializeMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shouldSerializeMethod;
}
constexpr void System::ComponentModel::ReflectPropertyDescriptor::__cordl_internal_set_shouldSerializeMethod(::System::Reflection::MethodInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shouldSerializeMethod = value;
}
constexpr ::System::Reflection::MethodInfo*& System::ComponentModel::ReflectPropertyDescriptor::__cordl_internal_get_resetMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resetMethod;
}
constexpr ::System::Reflection::MethodInfo* const& System::ComponentModel::ReflectPropertyDescriptor::__cordl_internal_get_resetMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resetMethod;
}
constexpr void System::ComponentModel::ReflectPropertyDescriptor::__cordl_internal_set_resetMethod(::System::Reflection::MethodInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resetMethod = value;
}
constexpr ::System::ComponentModel::EventDescriptor*& System::ComponentModel::ReflectPropertyDescriptor::__cordl_internal_get_realChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___realChangedEvent;
}
constexpr ::System::ComponentModel::EventDescriptor* const& System::ComponentModel::ReflectPropertyDescriptor::__cordl_internal_get_realChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___realChangedEvent;
}
constexpr void System::ComponentModel::ReflectPropertyDescriptor::__cordl_internal_set_realChangedEvent(::System::ComponentModel::EventDescriptor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___realChangedEvent = value;
}
constexpr ::System::Type*& System::ComponentModel::ReflectPropertyDescriptor::__cordl_internal_get_receiverType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___receiverType;
}
constexpr ::System::Type* const& System::ComponentModel::ReflectPropertyDescriptor::__cordl_internal_get_receiverType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___receiverType;
}
constexpr void System::ComponentModel::ReflectPropertyDescriptor::__cordl_internal_set_receiverType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___receiverType = value;
}
inline void System::ComponentModel::ReflectPropertyDescriptor::setStaticF_argsNone(::ArrayW<::System::Type*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Type*>, "argsNone", ::System::ComponentModel::ReflectPropertyDescriptor*>(std::forward<::ArrayW<::System::Type*>>(value));
}
inline ::ArrayW<::System::Type*> System::ComponentModel::ReflectPropertyDescriptor::getStaticF_argsNone() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Type*>, "argsNone", ::System::ComponentModel::ReflectPropertyDescriptor*>();
}
inline void System::ComponentModel::ReflectPropertyDescriptor::setStaticF_noValue(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "noValue", ::System::ComponentModel::ReflectPropertyDescriptor*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::ComponentModel::ReflectPropertyDescriptor::getStaticF_noValue() {
  return ::cordl_internals::getStaticField<::System::Object*, "noValue", ::System::ComponentModel::ReflectPropertyDescriptor*>();
}
inline void System::ComponentModel::ReflectPropertyDescriptor::setStaticF_PropDescCreateSwitch(::System::Diagnostics::TraceSwitch* value) {
  ::cordl_internals::setStaticField<::System::Diagnostics::TraceSwitch*, "PropDescCreateSwitch", ::System::ComponentModel::ReflectPropertyDescriptor*>(
      std::forward<::System::Diagnostics::TraceSwitch*>(value));
}
inline ::System::Diagnostics::TraceSwitch* System::ComponentModel::ReflectPropertyDescriptor::getStaticF_PropDescCreateSwitch() {
  return ::cordl_internals::getStaticField<::System::Diagnostics::TraceSwitch*, "PropDescCreateSwitch", ::System::ComponentModel::ReflectPropertyDescriptor*>();
}
inline void System::ComponentModel::ReflectPropertyDescriptor::setStaticF_PropDescUsageSwitch(::System::Diagnostics::TraceSwitch* value) {
  ::cordl_internals::setStaticField<::System::Diagnostics::TraceSwitch*, "PropDescUsageSwitch", ::System::ComponentModel::ReflectPropertyDescriptor*>(
      std::forward<::System::Diagnostics::TraceSwitch*>(value));
}
inline ::System::Diagnostics::TraceSwitch* System::ComponentModel::ReflectPropertyDescriptor::getStaticF_PropDescUsageSwitch() {
  return ::cordl_internals::getStaticField<::System::Diagnostics::TraceSwitch*, "PropDescUsageSwitch", ::System::ComponentModel::ReflectPropertyDescriptor*>();
}
inline void System::ComponentModel::ReflectPropertyDescriptor::setStaticF_BitDefaultValueQueried(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "BitDefaultValueQueried", ::System::ComponentModel::ReflectPropertyDescriptor*>(std::forward<int32_t>(value));
}
inline int32_t System::ComponentModel::ReflectPropertyDescriptor::getStaticF_BitDefaultValueQueried() {
  return ::cordl_internals::getStaticField<int32_t, "BitDefaultValueQueried", ::System::ComponentModel::ReflectPropertyDescriptor*>();
}
inline void System::ComponentModel::ReflectPropertyDescriptor::setStaticF_BitGetQueried(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "BitGetQueried", ::System::ComponentModel::ReflectPropertyDescriptor*>(std::forward<int32_t>(value));
}
inline int32_t System::ComponentModel::ReflectPropertyDescriptor::getStaticF_BitGetQueried() {
  return ::cordl_internals::getStaticField<int32_t, "BitGetQueried", ::System::ComponentModel::ReflectPropertyDescriptor*>();
}
inline void System::ComponentModel::ReflectPropertyDescriptor::setStaticF_BitSetQueried(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "BitSetQueried", ::System::ComponentModel::ReflectPropertyDescriptor*>(std::forward<int32_t>(value));
}
inline int32_t System::ComponentModel::ReflectPropertyDescriptor::getStaticF_BitSetQueried() {
  return ::cordl_internals::getStaticField<int32_t, "BitSetQueried", ::System::ComponentModel::ReflectPropertyDescriptor*>();
}
inline void System::ComponentModel::ReflectPropertyDescriptor::setStaticF_BitShouldSerializeQueried(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "BitShouldSerializeQueried", ::System::ComponentModel::ReflectPropertyDescriptor*>(std::forward<int32_t>(value));
}
inline int32_t System::ComponentModel::ReflectPropertyDescriptor::getStaticF_BitShouldSerializeQueried() {
  return ::cordl_internals::getStaticField<int32_t, "BitShouldSerializeQueried", ::System::ComponentModel::ReflectPropertyDescriptor*>();
}
inline void System::ComponentModel::ReflectPropertyDescriptor::setStaticF_BitResetQueried(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "BitResetQueried", ::System::ComponentModel::ReflectPropertyDescriptor*>(std::forward<int32_t>(value));
}
inline int32_t System::ComponentModel::ReflectPropertyDescriptor::getStaticF_BitResetQueried() {
  return ::cordl_internals::getStaticField<int32_t, "BitResetQueried", ::System::ComponentModel::ReflectPropertyDescriptor*>();
}
inline void System::ComponentModel::ReflectPropertyDescriptor::setStaticF_BitChangedQueried(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "BitChangedQueried", ::System::ComponentModel::ReflectPropertyDescriptor*>(std::forward<int32_t>(value));
}
inline int32_t System::ComponentModel::ReflectPropertyDescriptor::getStaticF_BitChangedQueried() {
  return ::cordl_internals::getStaticField<int32_t, "BitChangedQueried", ::System::ComponentModel::ReflectPropertyDescriptor*>();
}
inline void System::ComponentModel::ReflectPropertyDescriptor::setStaticF_BitIPropChangedQueried(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "BitIPropChangedQueried", ::System::ComponentModel::ReflectPropertyDescriptor*>(std::forward<int32_t>(value));
}
inline int32_t System::ComponentModel::ReflectPropertyDescriptor::getStaticF_BitIPropChangedQueried() {
  return ::cordl_internals::getStaticField<int32_t, "BitIPropChangedQueried", ::System::ComponentModel::ReflectPropertyDescriptor*>();
}
inline void System::ComponentModel::ReflectPropertyDescriptor::setStaticF_BitReadOnlyChecked(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "BitReadOnlyChecked", ::System::ComponentModel::ReflectPropertyDescriptor*>(std::forward<int32_t>(value));
}
inline int32_t System::ComponentModel::ReflectPropertyDescriptor::getStaticF_BitReadOnlyChecked() {
  return ::cordl_internals::getStaticField<int32_t, "BitReadOnlyChecked", ::System::ComponentModel::ReflectPropertyDescriptor*>();
}
inline void System::ComponentModel::ReflectPropertyDescriptor::setStaticF_BitAmbientValueQueried(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "BitAmbientValueQueried", ::System::ComponentModel::ReflectPropertyDescriptor*>(std::forward<int32_t>(value));
}
inline int32_t System::ComponentModel::ReflectPropertyDescriptor::getStaticF_BitAmbientValueQueried() {
  return ::cordl_internals::getStaticField<int32_t, "BitAmbientValueQueried", ::System::ComponentModel::ReflectPropertyDescriptor*>();
}
inline void System::ComponentModel::ReflectPropertyDescriptor::setStaticF_BitSetOnDemand(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "BitSetOnDemand", ::System::ComponentModel::ReflectPropertyDescriptor*>(std::forward<int32_t>(value));
}
inline int32_t System::ComponentModel::ReflectPropertyDescriptor::getStaticF_BitSetOnDemand() {
  return ::cordl_internals::getStaticField<int32_t, "BitSetOnDemand", ::System::ComponentModel::ReflectPropertyDescriptor*>();
}
inline void System::ComponentModel::ReflectPropertyDescriptor::_ctor(::System::Type* componentClass, ::StringW name, ::System::Type* type, ::ArrayW<::System::Attribute*> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, componentClass, name, type, attributes);
}
inline void System::ComponentModel::ReflectPropertyDescriptor::_ctor(::System::Type* componentClass, ::StringW name, ::System::Type* type, ::System::Reflection::PropertyInfo* propInfo,
                                                                     ::System::Reflection::MethodInfo* getMethod, ::System::Reflection::MethodInfo* setMethod, ::ArrayW<::System::Attribute*> attrs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(),
                          { ".ctor",
                            {},
                            { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::PropertyInfo*>(),
                              ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, componentClass, name, type, propInfo, getMethod, setMethod, attrs);
}
inline void System::ComponentModel::ReflectPropertyDescriptor::_ctor(::System::Type* componentClass, ::StringW name, ::System::Type* type, ::System::Type* receiverType,
                                                                     ::System::Reflection::MethodInfo* getMethod, ::System::Reflection::MethodInfo* setMethod, ::ArrayW<::System::Attribute*> attrs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(),
                          { ".ctor",
                            {},
                            { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(),
                              ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, componentClass, name, type, receiverType, getMethod, setMethod, attrs);
}
inline ::System::Object* System::ComponentModel::ReflectPropertyDescriptor::get_AmbientValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(), { "get_AmbientValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Type* System::ComponentModel::ReflectPropertyDescriptor::get_ComponentType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::ReflectPropertyDescriptor::get_DefaultValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(), { "get_DefaultValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::ComponentModel::ReflectPropertyDescriptor::get_GetMethodValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(), { "get_GetMethodValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method);
}
inline bool System::ComponentModel::ReflectPropertyDescriptor::get_IsExtender() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(), { "get_IsExtender", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::ComponentModel::ReflectPropertyDescriptor::get_IsReadOnly() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Type* System::ComponentModel::ReflectPropertyDescriptor::get_PropertyType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::ComponentModel::ReflectPropertyDescriptor::get_ResetMethodValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(), { "get_ResetMethodValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::ComponentModel::ReflectPropertyDescriptor::get_SetMethodValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(), { "get_SetMethodValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::ComponentModel::ReflectPropertyDescriptor::get_ShouldSerializeMethodValue() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(), { "get_ShouldSerializeMethodValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method);
}
inline bool System::ComponentModel::ReflectPropertyDescriptor::ExtenderCanResetValue(::System::ComponentModel::IExtenderProvider* provider, ::System::Object* component) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(),
                                                           { "ExtenderCanResetValue", {}, { ::i2c::type_of<::System::ComponentModel::IExtenderProvider*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, provider, component);
}
inline ::System::Type* System::ComponentModel::ReflectPropertyDescriptor::ExtenderGetReceiverType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(), { "ExtenderGetReceiverType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Type* System::ComponentModel::ReflectPropertyDescriptor::ExtenderGetType(::System::ComponentModel::IExtenderProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(),
                                                                                         { "ExtenderGetType", {}, { ::i2c::type_of<::System::ComponentModel::IExtenderProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, provider);
}
inline ::System::Object* System::ComponentModel::ReflectPropertyDescriptor::ExtenderGetValue(::System::ComponentModel::IExtenderProvider* provider, ::System::Object* component) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(),
                                                           { "ExtenderGetValue", {}, { ::i2c::type_of<::System::ComponentModel::IExtenderProvider*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, provider, component);
}
inline void System::ComponentModel::ReflectPropertyDescriptor::ExtenderResetValue(::System::ComponentModel::IExtenderProvider* provider, ::System::Object* component,
                                                                                  ::System::ComponentModel::PropertyDescriptor* notifyDesc) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(),
                                                                                         { "ExtenderResetValue",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::ComponentModel::IExtenderProvider*>(), ::i2c::type_of<::System::Object*>(),
                                                                                             ::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, provider, component, notifyDesc);
}
inline void System::ComponentModel::ReflectPropertyDescriptor::ExtenderSetValue(::System::ComponentModel::IExtenderProvider* provider, ::System::Object* component, ::System::Object* value,
                                                                                ::System::ComponentModel::PropertyDescriptor* notifyDesc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(),
                                                           { "ExtenderSetValue",
                                                             {},
                                                             { ::i2c::type_of<::System::ComponentModel::IExtenderProvider*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(),
                                                               ::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, provider, component, value, notifyDesc);
}
inline bool System::ComponentModel::ReflectPropertyDescriptor::ExtenderShouldSerializeValue(::System::ComponentModel::IExtenderProvider* provider, ::System::Object* component) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(),
                                              { "ExtenderShouldSerializeValue", {}, { ::i2c::type_of<::System::ComponentModel::IExtenderProvider*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, provider, component);
}
inline bool System::ComponentModel::ReflectPropertyDescriptor::CanResetValue(::System::Object* component) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, component);
}
inline void System::ComponentModel::ReflectPropertyDescriptor::FillAttributes(::System::Collections::IList* attributes) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributes);
}
inline ::System::Object* System::ComponentModel::ReflectPropertyDescriptor::GetValue(::System::Object* component) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, component);
}
inline void System::ComponentModel::ReflectPropertyDescriptor::OnValueChanged(::System::Object* component, ::System::EventArgs* e) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component, e);
}
inline void System::ComponentModel::ReflectPropertyDescriptor::ResetValue(::System::Object* component) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component);
}
inline void System::ComponentModel::ReflectPropertyDescriptor::SetValue(::System::Object* component, ::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component, value);
}
inline bool System::ComponentModel::ReflectPropertyDescriptor::ShouldSerializeValue(::System::Object* component) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ReflectPropertyDescriptor*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, component);
}
inline ::System::ComponentModel::ReflectPropertyDescriptor* System::ComponentModel::ReflectPropertyDescriptor::New_ctor(::System::Type* componentClass, ::StringW name, ::System::Type* type,
                                                                                                                        ::ArrayW<::System::Attribute*> attributes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::ReflectPropertyDescriptor*>(componentClass, name, type, attributes));
}
inline ::System::ComponentModel::ReflectPropertyDescriptor*
System::ComponentModel::ReflectPropertyDescriptor::New_ctor(::System::Type* componentClass, ::StringW name, ::System::Type* type, ::System::Reflection::PropertyInfo* propInfo,
                                                            ::System::Reflection::MethodInfo* getMethod, ::System::Reflection::MethodInfo* setMethod, ::ArrayW<::System::Attribute*> attrs) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::ReflectPropertyDescriptor*>(componentClass, name, type, propInfo, getMethod, setMethod, attrs));
}
inline ::System::ComponentModel::ReflectPropertyDescriptor* System::ComponentModel::ReflectPropertyDescriptor::New_ctor(::System::Type* componentClass, ::StringW name, ::System::Type* type,
                                                                                                                        ::System::Type* receiverType, ::System::Reflection::MethodInfo* getMethod,
                                                                                                                        ::System::Reflection::MethodInfo* setMethod,
                                                                                                                        ::ArrayW<::System::Attribute*> attrs) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::ReflectPropertyDescriptor*>(componentClass, name, type, receiverType, getMethod, setMethod, attrs));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ReflectPropertyDescriptor::ReflectPropertyDescriptor() {}
