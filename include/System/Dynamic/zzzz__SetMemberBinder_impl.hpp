#pragma once
// IWYU pragma private; include "System\Dynamic\SetMemberBinder.hpp"
#include "System/Dynamic/zzzz__DynamicMetaObjectBinder_impl.hpp"
#include "System/Dynamic/zzzz__SetMemberBinder_def.hpp"
#include "System/Dynamic/zzzz__DynamicMetaObject_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Dynamic::SetMemberBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Dynamic::SetMemberBinder::*)(::StringW, bool)>(&::System::Dynamic::SetMemberBinder::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5fc8ca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::SetMemberBinder*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::SetMemberBinder.get_ReturnType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Dynamic::SetMemberBinder::*)()>(&::System::Dynamic::SetMemberBinder::get_ReturnType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5fc8d1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::SetMemberBinder*>(), { "get_ReturnType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::SetMemberBinder.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Dynamic::SetMemberBinder::*)()>(&::System::Dynamic::SetMemberBinder::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fc8d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::SetMemberBinder*>(), { "get_Name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::SetMemberBinder.get_IgnoreCase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Dynamic::SetMemberBinder::*)()>(&::System::Dynamic::SetMemberBinder::get_IgnoreCase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fc8d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::SetMemberBinder*>(), { "get_IgnoreCase", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::SetMemberBinder.Bind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Dynamic::DynamicMetaObject* (
    ::System::Dynamic::SetMemberBinder::*)(::System::Dynamic::DynamicMetaObject*, ::ArrayW<::System::Dynamic::DynamicMetaObject*>)>(&::System::Dynamic::SetMemberBinder::Bind)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5fc8d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::SetMemberBinder*>(),
                                                { "Bind", {}, { ::i2c::type_of<::System::Dynamic::DynamicMetaObject*>(), ::i2c::type_of<::ArrayW<::System::Dynamic::DynamicMetaObject*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::SetMemberBinder.get_IsStandardBinder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Dynamic::SetMemberBinder::*)()>(&::System::Dynamic::SetMemberBinder::get_IsStandardBinder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fc8e30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::SetMemberBinder*>(), { "get_IsStandardBinder", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::SetMemberBinder.FallbackSetMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Dynamic::DynamicMetaObject* (
    ::System::Dynamic::SetMemberBinder::*)(::System::Dynamic::DynamicMetaObject*, ::System::Dynamic::DynamicMetaObject*)>(&::System::Dynamic::SetMemberBinder::FallbackSetMember)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fc8e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::SetMemberBinder*>(),
                                                { "FallbackSetMember", {}, { ::i2c::type_of<::System::Dynamic::DynamicMetaObject*>(), ::i2c::type_of<::System::Dynamic::DynamicMetaObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::SetMemberBinder.FallbackSetMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Dynamic::DynamicMetaObject* (
    ::System::Dynamic::SetMemberBinder::*)(::System::Dynamic::DynamicMetaObject*, ::System::Dynamic::DynamicMetaObject*, ::System::Dynamic::DynamicMetaObject*)>(
    &::System::Dynamic::SetMemberBinder::FallbackSetMember)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Dynamic::SetMemberBinder*>(), { ::i2c::class_of<::System::Dynamic::SetMemberBinder*>(), 9 }));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Dynamic::SetMemberBinder::__cordl_internal_get__Name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr ::StringW const& System::Dynamic::SetMemberBinder::__cordl_internal_get__Name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr void System::Dynamic::SetMemberBinder::__cordl_internal_set__Name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Name_k__BackingField = value;
}
constexpr bool& System::Dynamic::SetMemberBinder::__cordl_internal_get__IgnoreCase_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IgnoreCase_k__BackingField;
}
constexpr bool const& System::Dynamic::SetMemberBinder::__cordl_internal_get__IgnoreCase_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IgnoreCase_k__BackingField;
}
constexpr void System::Dynamic::SetMemberBinder::__cordl_internal_set__IgnoreCase_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IgnoreCase_k__BackingField = value;
}
inline void System::Dynamic::SetMemberBinder::_ctor(::StringW name, bool ignoreCase) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::SetMemberBinder*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, ignoreCase);
}
inline ::System::Type* System::Dynamic::SetMemberBinder::get_ReturnType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::SetMemberBinder*>(), { "get_ReturnType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::StringW System::Dynamic::SetMemberBinder::get_Name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::SetMemberBinder*>(), { "get_Name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Dynamic::SetMemberBinder::get_IgnoreCase() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::SetMemberBinder*>(), { "get_IgnoreCase", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::SetMemberBinder::Bind(::System::Dynamic::DynamicMetaObject* target, ::ArrayW<::System::Dynamic::DynamicMetaObject*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::SetMemberBinder*>(),
                                              { "Bind", {}, { ::i2c::type_of<::System::Dynamic::DynamicMetaObject*>(), ::i2c::type_of<::ArrayW<::System::Dynamic::DynamicMetaObject*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*>(this, ___internal_method, target, args);
}
inline bool System::Dynamic::SetMemberBinder::get_IsStandardBinder() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::SetMemberBinder*>(), { "get_IsStandardBinder", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::SetMemberBinder::FallbackSetMember(::System::Dynamic::DynamicMetaObject* target, ::System::Dynamic::DynamicMetaObject* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::SetMemberBinder*>(),
                                              { "FallbackSetMember", {}, { ::i2c::type_of<::System::Dynamic::DynamicMetaObject*>(), ::i2c::type_of<::System::Dynamic::DynamicMetaObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*>(this, ___internal_method, target, value);
}
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::SetMemberBinder::FallbackSetMember(::System::Dynamic::DynamicMetaObject* target, ::System::Dynamic::DynamicMetaObject* value,
                                                                                                 ::System::Dynamic::DynamicMetaObject* errorSuggestion) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Dynamic::SetMemberBinder*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*>(this, ___internal_method, target, value, errorSuggestion);
}
inline ::System::Dynamic::SetMemberBinder* System::Dynamic::SetMemberBinder::New_ctor(::StringW name, bool ignoreCase) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Dynamic::SetMemberBinder*>(name, ignoreCase));
}
// Ctor Parameters []
constexpr ::System::Dynamic::SetMemberBinder::SetMemberBinder() {}
