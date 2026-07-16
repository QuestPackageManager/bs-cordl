#pragma once
// IWYU pragma private; include "System/Dynamic/DeleteMemberBinder.hpp"
#include "System/Dynamic/zzzz__DynamicMetaObjectBinder_impl.hpp"
#include "System/Dynamic/zzzz__DeleteMemberBinder_def.hpp"
#include "System/Dynamic/zzzz__DynamicMetaObject_def.hpp"
//  Writing Method size for method: ::System::Dynamic::DeleteMemberBinder.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Dynamic::DeleteMemberBinder::*)()>(&::System::Dynamic::DeleteMemberBinder::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fbd594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::DeleteMemberBinder*>(), { "get_Name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::DeleteMemberBinder.get_IgnoreCase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Dynamic::DeleteMemberBinder::*)()>(&::System::Dynamic::DeleteMemberBinder::get_IgnoreCase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fbd59c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::DeleteMemberBinder*>(), { "get_IgnoreCase", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::DeleteMemberBinder.FallbackDeleteMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Dynamic::DynamicMetaObject* (::System::Dynamic::DeleteMemberBinder::*)(::System::Dynamic::DynamicMetaObject*)>(
    &::System::Dynamic::DeleteMemberBinder::FallbackDeleteMember)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fbd5a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Dynamic::DeleteMemberBinder*>(), { "FallbackDeleteMember", {}, { ::i2c::type_of<::System::Dynamic::DynamicMetaObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::DeleteMemberBinder.FallbackDeleteMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Dynamic::DynamicMetaObject* (
    ::System::Dynamic::DeleteMemberBinder::*)(::System::Dynamic::DynamicMetaObject*, ::System::Dynamic::DynamicMetaObject*)>(&::System::Dynamic::DeleteMemberBinder::FallbackDeleteMember)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Dynamic::DeleteMemberBinder*>(), { ::i2c::class_of<::System::Dynamic::DeleteMemberBinder*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::DeleteMemberBinder.Bind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Dynamic::DynamicMetaObject* (
    ::System::Dynamic::DeleteMemberBinder::*)(::System::Dynamic::DynamicMetaObject*, ::ArrayW<::System::Dynamic::DynamicMetaObject*>)>(&::System::Dynamic::DeleteMemberBinder::Bind)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5fbd5b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::DeleteMemberBinder*>(),
                                                { "Bind", {}, { ::i2c::type_of<::System::Dynamic::DynamicMetaObject*>(), ::i2c::type_of<::ArrayW<::System::Dynamic::DynamicMetaObject*>>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Dynamic::DeleteMemberBinder::__cordl_internal_get__Name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr ::StringW const& System::Dynamic::DeleteMemberBinder::__cordl_internal_get__Name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr void System::Dynamic::DeleteMemberBinder::__cordl_internal_set__Name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Name_k__BackingField = value;
}
constexpr bool& System::Dynamic::DeleteMemberBinder::__cordl_internal_get__IgnoreCase_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IgnoreCase_k__BackingField;
}
constexpr bool const& System::Dynamic::DeleteMemberBinder::__cordl_internal_get__IgnoreCase_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IgnoreCase_k__BackingField;
}
constexpr void System::Dynamic::DeleteMemberBinder::__cordl_internal_set__IgnoreCase_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IgnoreCase_k__BackingField = value;
}
inline ::StringW System::Dynamic::DeleteMemberBinder::get_Name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::DeleteMemberBinder*>(), { "get_Name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Dynamic::DeleteMemberBinder::get_IgnoreCase() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::DeleteMemberBinder*>(), { "get_IgnoreCase", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::DeleteMemberBinder::FallbackDeleteMember(::System::Dynamic::DynamicMetaObject* target) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::DeleteMemberBinder*>(), { "FallbackDeleteMember", {}, { ::i2c::type_of<::System::Dynamic::DynamicMetaObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*>(this, ___internal_method, target);
}
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::DeleteMemberBinder::FallbackDeleteMember(::System::Dynamic::DynamicMetaObject* target,
                                                                                                       ::System::Dynamic::DynamicMetaObject* errorSuggestion) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Dynamic::DeleteMemberBinder*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*>(this, ___internal_method, target, errorSuggestion);
}
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::DeleteMemberBinder::Bind(::System::Dynamic::DynamicMetaObject* target, ::ArrayW<::System::Dynamic::DynamicMetaObject*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::DeleteMemberBinder*>(),
                                              { "Bind", {}, { ::i2c::type_of<::System::Dynamic::DynamicMetaObject*>(), ::i2c::type_of<::ArrayW<::System::Dynamic::DynamicMetaObject*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*>(this, ___internal_method, target, args);
}
// Ctor Parameters []
constexpr ::System::Dynamic::DeleteMemberBinder::DeleteMemberBinder() {}
