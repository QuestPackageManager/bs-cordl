#pragma once
// IWYU pragma private; include "System/Dynamic/BindingRestrictions_MergedRestriction.hpp"
#include "System/Dynamic/zzzz__BindingRestrictions_impl.hpp"
#include "System/Dynamic/zzzz__BindingRestrictions_MergedRestriction_def.hpp"
#include "System/Dynamic/zzzz__BindingRestrictions_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BindingRestrictions_MergedRestriction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BindingRestrictions_MergedRestriction::*)(
    ::System::Dynamic::BindingRestrictions*, ::System::Dynamic::BindingRestrictions*)>(&::GlobalNamespace::BindingRestrictions_MergedRestriction::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5fbc270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BindingRestrictions_MergedRestriction*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Dynamic::BindingRestrictions*>(), ::i2c::type_of<::System::Dynamic::BindingRestrictions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BindingRestrictions_MergedRestriction.GetExpression
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::GlobalNamespace::BindingRestrictions_MergedRestriction::*)()>(
    &::GlobalNamespace::BindingRestrictions_MergedRestriction::GetExpression)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5fbcb24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BindingRestrictions_MergedRestriction*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BindingRestrictions_MergedRestriction*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::System::Dynamic::BindingRestrictions*& GlobalNamespace::BindingRestrictions_MergedRestriction::__cordl_internal_get_Left() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Left;
}
constexpr ::System::Dynamic::BindingRestrictions* const& GlobalNamespace::BindingRestrictions_MergedRestriction::__cordl_internal_get_Left() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Left;
}
constexpr void GlobalNamespace::BindingRestrictions_MergedRestriction::__cordl_internal_set_Left(::System::Dynamic::BindingRestrictions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Left = value;
}
constexpr ::System::Dynamic::BindingRestrictions*& GlobalNamespace::BindingRestrictions_MergedRestriction::__cordl_internal_get_Right() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Right;
}
constexpr ::System::Dynamic::BindingRestrictions* const& GlobalNamespace::BindingRestrictions_MergedRestriction::__cordl_internal_get_Right() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Right;
}
constexpr void GlobalNamespace::BindingRestrictions_MergedRestriction::__cordl_internal_set_Right(::System::Dynamic::BindingRestrictions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Right = value;
}
inline void GlobalNamespace::BindingRestrictions_MergedRestriction::_ctor(::System::Dynamic::BindingRestrictions* left, ::System::Dynamic::BindingRestrictions* right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BindingRestrictions_MergedRestriction*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Dynamic::BindingRestrictions*>(), ::i2c::type_of<::System::Dynamic::BindingRestrictions*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, left, right);
}
inline ::System::Linq::Expressions::Expression* GlobalNamespace::BindingRestrictions_MergedRestriction::GetExpression() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BindingRestrictions_MergedRestriction*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method);
}
inline ::GlobalNamespace::BindingRestrictions_MergedRestriction* GlobalNamespace::BindingRestrictions_MergedRestriction::New_ctor(::System::Dynamic::BindingRestrictions* left,
                                                                                                                                  ::System::Dynamic::BindingRestrictions* right) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BindingRestrictions_MergedRestriction*>(left, right));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BindingRestrictions_MergedRestriction::BindingRestrictions_MergedRestriction() {}
