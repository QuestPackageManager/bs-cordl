#pragma once
// IWYU pragma private; include "System/ComponentModel/Design/Serialization/InstanceDescriptor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/Design/Serialization/zzzz__InstanceDescriptor_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::Design::Serialization::InstanceDescriptor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::Design::Serialization::InstanceDescriptor::*)(
    ::System::Reflection::MemberInfo*, ::System::Collections::ICollection*)>(&::System::ComponentModel::Design::Serialization::InstanceDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63e6b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::Design::Serialization::InstanceDescriptor*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Collections::ICollection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Design::Serialization::InstanceDescriptor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::Design::Serialization::InstanceDescriptor::*)(
    ::System::Reflection::MemberInfo*, ::System::Collections::ICollection*, bool)>(&::System::ComponentModel::Design::Serialization::InstanceDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x534;
  constexpr static std::size_t addrs = 0x63e6b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::ComponentModel::Design::Serialization::InstanceDescriptor*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Collections::ICollection*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Design::Serialization::InstanceDescriptor.get_Arguments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (::System::ComponentModel::Design::Serialization::InstanceDescriptor::*)()>(
    &::System::ComponentModel::Design::Serialization::InstanceDescriptor::get_Arguments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63e70ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::Design::Serialization::InstanceDescriptor*>(), { "get_Arguments", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Design::Serialization::InstanceDescriptor.get_MemberInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MemberInfo* (::System::ComponentModel::Design::Serialization::InstanceDescriptor::*)()>(
    &::System::ComponentModel::Design::Serialization::InstanceDescriptor::get_MemberInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63e70b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::Design::Serialization::InstanceDescriptor*>(), { "get_MemberInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Design::Serialization::InstanceDescriptor.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::Design::Serialization::InstanceDescriptor::*)()>(
    &::System::ComponentModel::Design::Serialization::InstanceDescriptor::Invoke)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x63e70bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::Design::Serialization::InstanceDescriptor*>(), { "Invoke", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::ICollection*& System::ComponentModel::Design::Serialization::InstanceDescriptor::__cordl_internal_get__Arguments_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Arguments_k__BackingField;
}
constexpr ::System::Collections::ICollection* const& System::ComponentModel::Design::Serialization::InstanceDescriptor::__cordl_internal_get__Arguments_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Arguments_k__BackingField;
}
constexpr void System::ComponentModel::Design::Serialization::InstanceDescriptor::__cordl_internal_set__Arguments_k__BackingField(::System::Collections::ICollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Arguments_k__BackingField = value;
}
constexpr bool& System::ComponentModel::Design::Serialization::InstanceDescriptor::__cordl_internal_get__IsComplete_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsComplete_k__BackingField;
}
constexpr bool const& System::ComponentModel::Design::Serialization::InstanceDescriptor::__cordl_internal_get__IsComplete_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsComplete_k__BackingField;
}
constexpr void System::ComponentModel::Design::Serialization::InstanceDescriptor::__cordl_internal_set__IsComplete_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsComplete_k__BackingField = value;
}
constexpr ::System::Reflection::MemberInfo*& System::ComponentModel::Design::Serialization::InstanceDescriptor::__cordl_internal_get__MemberInfo_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MemberInfo_k__BackingField;
}
constexpr ::System::Reflection::MemberInfo* const& System::ComponentModel::Design::Serialization::InstanceDescriptor::__cordl_internal_get__MemberInfo_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MemberInfo_k__BackingField;
}
constexpr void System::ComponentModel::Design::Serialization::InstanceDescriptor::__cordl_internal_set__MemberInfo_k__BackingField(::System::Reflection::MemberInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MemberInfo_k__BackingField = value;
}
inline void System::ComponentModel::Design::Serialization::InstanceDescriptor::_ctor(::System::Reflection::MemberInfo* member, ::System::Collections::ICollection* arguments) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::Design::Serialization::InstanceDescriptor*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Collections::ICollection*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, member, arguments);
}
inline void System::ComponentModel::Design::Serialization::InstanceDescriptor::_ctor(::System::Reflection::MemberInfo* member, ::System::Collections::ICollection* arguments, bool isComplete) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::ComponentModel::Design::Serialization::InstanceDescriptor*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Collections::ICollection*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, member, arguments, isComplete);
}
inline ::System::Collections::ICollection* System::ComponentModel::Design::Serialization::InstanceDescriptor::get_Arguments() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::Design::Serialization::InstanceDescriptor*>(), { "get_Arguments", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method);
}
inline ::System::Reflection::MemberInfo* System::ComponentModel::Design::Serialization::InstanceDescriptor::get_MemberInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::Design::Serialization::InstanceDescriptor*>(), { "get_MemberInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MemberInfo*>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::Design::Serialization::InstanceDescriptor::Invoke() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::Design::Serialization::InstanceDescriptor*>(), { "Invoke", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::ComponentModel::Design::Serialization::InstanceDescriptor* System::ComponentModel::Design::Serialization::InstanceDescriptor::New_ctor(::System::Reflection::MemberInfo* member,
                                                                                                                                                        ::System::Collections::ICollection* arguments) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::Design::Serialization::InstanceDescriptor*>(member, arguments));
}
inline ::System::ComponentModel::Design::Serialization::InstanceDescriptor*
System::ComponentModel::Design::Serialization::InstanceDescriptor::New_ctor(::System::Reflection::MemberInfo* member, ::System::Collections::ICollection* arguments, bool isComplete) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::Design::Serialization::InstanceDescriptor*>(member, arguments, isComplete));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::Design::Serialization::InstanceDescriptor::InstanceDescriptor() {}
