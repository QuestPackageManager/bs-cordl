#pragma once
// IWYU pragma private; include "System\Dynamic\InvokeMemberBinder.hpp"
#include "System/Dynamic/zzzz__DynamicMetaObjectBinder_impl.hpp"
#include "System/Dynamic/zzzz__InvokeMemberBinder_def.hpp"
#include "System/Dynamic/zzzz__DynamicMetaObject_def.hpp"
//  Writing Method size for method: ::System::Dynamic::InvokeMemberBinder.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Dynamic::InvokeMemberBinder::*)()>(&::System::Dynamic::InvokeMemberBinder::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fc8a94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::InvokeMemberBinder*>(), { "get_Name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::InvokeMemberBinder.get_IgnoreCase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Dynamic::InvokeMemberBinder::*)()>(&::System::Dynamic::InvokeMemberBinder::get_IgnoreCase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fc8a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::InvokeMemberBinder*>(), { "get_IgnoreCase", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::InvokeMemberBinder.Bind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Dynamic::DynamicMetaObject* (
    ::System::Dynamic::InvokeMemberBinder::*)(::System::Dynamic::DynamicMetaObject*, ::ArrayW<::System::Dynamic::DynamicMetaObject*>)>(&::System::Dynamic::InvokeMemberBinder::Bind)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5fc8aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::InvokeMemberBinder*>(),
                                                { "Bind", {}, { ::i2c::type_of<::System::Dynamic::DynamicMetaObject*>(), ::i2c::type_of<::ArrayW<::System::Dynamic::DynamicMetaObject*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::InvokeMemberBinder.FallbackInvokeMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Dynamic::DynamicMetaObject* (
    ::System::Dynamic::InvokeMemberBinder::*)(::System::Dynamic::DynamicMetaObject*, ::ArrayW<::System::Dynamic::DynamicMetaObject*>)>(&::System::Dynamic::InvokeMemberBinder::FallbackInvokeMember)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fc76d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Dynamic::InvokeMemberBinder*>(),
                            { "FallbackInvokeMember", {}, { ::i2c::type_of<::System::Dynamic::DynamicMetaObject*>(), ::i2c::type_of<::ArrayW<::System::Dynamic::DynamicMetaObject*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::InvokeMemberBinder.FallbackInvokeMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Dynamic::DynamicMetaObject* (
    ::System::Dynamic::InvokeMemberBinder::*)(::System::Dynamic::DynamicMetaObject*, ::ArrayW<::System::Dynamic::DynamicMetaObject*>, ::System::Dynamic::DynamicMetaObject*)>(
    &::System::Dynamic::InvokeMemberBinder::FallbackInvokeMember)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Dynamic::InvokeMemberBinder*>(), { ::i2c::class_of<::System::Dynamic::InvokeMemberBinder*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::InvokeMemberBinder.FallbackInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Dynamic::DynamicMetaObject* (
    ::System::Dynamic::InvokeMemberBinder::*)(::System::Dynamic::DynamicMetaObject*, ::ArrayW<::System::Dynamic::DynamicMetaObject*>, ::System::Dynamic::DynamicMetaObject*)>(
    &::System::Dynamic::InvokeMemberBinder::FallbackInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Dynamic::InvokeMemberBinder*>(), { ::i2c::class_of<::System::Dynamic::InvokeMemberBinder*>(), 10 }));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Dynamic::InvokeMemberBinder::__cordl_internal_get__Name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr ::StringW const& System::Dynamic::InvokeMemberBinder::__cordl_internal_get__Name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr void System::Dynamic::InvokeMemberBinder::__cordl_internal_set__Name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Name_k__BackingField = value;
}
constexpr bool& System::Dynamic::InvokeMemberBinder::__cordl_internal_get__IgnoreCase_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IgnoreCase_k__BackingField;
}
constexpr bool const& System::Dynamic::InvokeMemberBinder::__cordl_internal_get__IgnoreCase_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IgnoreCase_k__BackingField;
}
constexpr void System::Dynamic::InvokeMemberBinder::__cordl_internal_set__IgnoreCase_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IgnoreCase_k__BackingField = value;
}
inline ::StringW System::Dynamic::InvokeMemberBinder::get_Name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::InvokeMemberBinder*>(), { "get_Name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Dynamic::InvokeMemberBinder::get_IgnoreCase() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::InvokeMemberBinder*>(), { "get_IgnoreCase", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::InvokeMemberBinder::Bind(::System::Dynamic::DynamicMetaObject* target, ::ArrayW<::System::Dynamic::DynamicMetaObject*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::InvokeMemberBinder*>(),
                                              { "Bind", {}, { ::i2c::type_of<::System::Dynamic::DynamicMetaObject*>(), ::i2c::type_of<::ArrayW<::System::Dynamic::DynamicMetaObject*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*>(this, ___internal_method, target, args);
}
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::InvokeMemberBinder::FallbackInvokeMember(::System::Dynamic::DynamicMetaObject* target,
                                                                                                       ::ArrayW<::System::Dynamic::DynamicMetaObject*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Dynamic::InvokeMemberBinder*>(),
                          { "FallbackInvokeMember", {}, { ::i2c::type_of<::System::Dynamic::DynamicMetaObject*>(), ::i2c::type_of<::ArrayW<::System::Dynamic::DynamicMetaObject*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*>(this, ___internal_method, target, args);
}
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::InvokeMemberBinder::FallbackInvokeMember(::System::Dynamic::DynamicMetaObject* target,
                                                                                                       ::ArrayW<::System::Dynamic::DynamicMetaObject*> args,
                                                                                                       ::System::Dynamic::DynamicMetaObject* errorSuggestion) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Dynamic::InvokeMemberBinder*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*>(this, ___internal_method, target, args, errorSuggestion);
}
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::InvokeMemberBinder::FallbackInvoke(::System::Dynamic::DynamicMetaObject* target, ::ArrayW<::System::Dynamic::DynamicMetaObject*> args,
                                                                                                 ::System::Dynamic::DynamicMetaObject* errorSuggestion) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Dynamic::InvokeMemberBinder*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*>(this, ___internal_method, target, args, errorSuggestion);
}
// Ctor Parameters []
constexpr ::System::Dynamic::InvokeMemberBinder::InvokeMemberBinder() {}
