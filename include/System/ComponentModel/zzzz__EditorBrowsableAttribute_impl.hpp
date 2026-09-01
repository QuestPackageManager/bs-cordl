#pragma once
// IWYU pragma private; include "System\ComponentModel\EditorBrowsableAttribute.hpp"
#include "System/ComponentModel/zzzz__EditorBrowsableState_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__EditorBrowsableAttribute_def.hpp"
#include "System/ComponentModel/zzzz__EditorBrowsableState_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::EditorBrowsableAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::EditorBrowsableAttribute::*)(::System::ComponentModel::EditorBrowsableState)>(
    &::System::ComponentModel::EditorBrowsableAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63b38f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::EditorBrowsableAttribute*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::ComponentModel::EditorBrowsableState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EditorBrowsableAttribute.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::EditorBrowsableAttribute::*)(::System::Object*)>(&::System::ComponentModel::EditorBrowsableAttribute::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x63b38f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::EditorBrowsableAttribute*>(), { ::i2c::class_of<::System::ComponentModel::EditorBrowsableAttribute*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EditorBrowsableAttribute.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::EditorBrowsableAttribute::*)()>(&::System::ComponentModel::EditorBrowsableAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63b3984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::EditorBrowsableAttribute*>(), { ::i2c::class_of<::System::ComponentModel::EditorBrowsableAttribute*>(), 2 }));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::EditorBrowsableState& System::ComponentModel::EditorBrowsableAttribute::__cordl_internal_get_browsableState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___browsableState;
}
constexpr ::System::ComponentModel::EditorBrowsableState const& System::ComponentModel::EditorBrowsableAttribute::__cordl_internal_get_browsableState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___browsableState;
}
constexpr void System::ComponentModel::EditorBrowsableAttribute::__cordl_internal_set_browsableState(::System::ComponentModel::EditorBrowsableState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___browsableState = value;
}
inline void System::ComponentModel::EditorBrowsableAttribute::_ctor(::System::ComponentModel::EditorBrowsableState state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::ComponentModel::EditorBrowsableAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::System::ComponentModel::EditorBrowsableState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline bool System::ComponentModel::EditorBrowsableAttribute::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::EditorBrowsableAttribute*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::ComponentModel::EditorBrowsableAttribute::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::EditorBrowsableAttribute*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::ComponentModel::EditorBrowsableAttribute* System::ComponentModel::EditorBrowsableAttribute::New_ctor(::System::ComponentModel::EditorBrowsableState state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::EditorBrowsableAttribute*>(state));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::EditorBrowsableAttribute::EditorBrowsableAttribute() {}
