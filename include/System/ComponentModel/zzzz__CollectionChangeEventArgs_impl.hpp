#pragma once
// IWYU pragma private; include "System/ComponentModel/CollectionChangeEventArgs.hpp"
#include "System/ComponentModel/zzzz__CollectionChangeAction_impl.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/ComponentModel/zzzz__CollectionChangeEventArgs_def.hpp"
#include "System/ComponentModel/zzzz__CollectionChangeAction_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::CollectionChangeEventArgs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::CollectionChangeEventArgs::*)(::System::ComponentModel::CollectionChangeAction, ::System::Object*)>(
    &::System::ComponentModel::CollectionChangeEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x63b1b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::CollectionChangeEventArgs*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::ComponentModel::CollectionChangeAction>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CollectionChangeEventArgs.get_Action
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::CollectionChangeAction (::System::ComponentModel::CollectionChangeEventArgs::*)()>(
    &::System::ComponentModel::CollectionChangeEventArgs::get_Action)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63b1bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::CollectionChangeEventArgs*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::CollectionChangeEventArgs*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CollectionChangeEventArgs.get_Element
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::CollectionChangeEventArgs::*)()>(
    &::System::ComponentModel::CollectionChangeEventArgs::get_Element)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63b1be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::CollectionChangeEventArgs*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::CollectionChangeEventArgs*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::CollectionChangeAction& System::ComponentModel::CollectionChangeEventArgs::__cordl_internal_get__Action_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Action_k__BackingField;
}
constexpr ::System::ComponentModel::CollectionChangeAction const& System::ComponentModel::CollectionChangeEventArgs::__cordl_internal_get__Action_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Action_k__BackingField;
}
constexpr void System::ComponentModel::CollectionChangeEventArgs::__cordl_internal_set__Action_k__BackingField(::System::ComponentModel::CollectionChangeAction value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Action_k__BackingField = value;
}
constexpr ::System::Object*& System::ComponentModel::CollectionChangeEventArgs::__cordl_internal_get__Element_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Element_k__BackingField;
}
constexpr ::System::Object* const& System::ComponentModel::CollectionChangeEventArgs::__cordl_internal_get__Element_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Element_k__BackingField;
}
constexpr void System::ComponentModel::CollectionChangeEventArgs::__cordl_internal_set__Element_k__BackingField(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Element_k__BackingField = value;
}
inline void System::ComponentModel::CollectionChangeEventArgs::_ctor(::System::ComponentModel::CollectionChangeAction action, ::System::Object* element) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::CollectionChangeEventArgs*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::ComponentModel::CollectionChangeAction>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action, element);
}
inline ::System::ComponentModel::CollectionChangeAction System::ComponentModel::CollectionChangeEventArgs::get_Action() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::CollectionChangeEventArgs*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::CollectionChangeAction>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::CollectionChangeEventArgs::get_Element() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::CollectionChangeEventArgs*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::ComponentModel::CollectionChangeEventArgs* System::ComponentModel::CollectionChangeEventArgs::New_ctor(::System::ComponentModel::CollectionChangeAction action,
                                                                                                                        ::System::Object* element) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::CollectionChangeEventArgs*>(action, element));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::CollectionChangeEventArgs::CollectionChangeEventArgs() {}
