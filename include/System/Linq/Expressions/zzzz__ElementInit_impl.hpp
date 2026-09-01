#pragma once
// IWYU pragma private; include "System\Linq\Expressions\ElementInit.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/zzzz__ElementInit_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__IArgumentProvider_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::ElementInit.get_AddMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Linq::Expressions::ElementInit::*)()>(&::System::Linq::Expressions::ElementInit::get_AddMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f7add0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ElementInit*>(), { "get_AddMethod", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ElementInit.get_Arguments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* (
    ::System::Linq::Expressions::ElementInit::*)()>(&::System::Linq::Expressions::ElementInit::get_Arguments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f7add8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ElementInit*>(), { "get_Arguments", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ElementInit.GetArgument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::ElementInit::*)(int32_t)>(
    &::System::Linq::Expressions::ElementInit::GetArgument)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f7ade0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ElementInit*>(), { "GetArgument", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ElementInit.get_ArgumentCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::ElementInit::*)()>(&::System::Linq::Expressions::ElementInit::get_ArgumentCount)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5f7ae44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ElementInit*>(), { "get_ArgumentCount", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::MethodInfo*& System::Linq::Expressions::ElementInit::__cordl_internal_get__AddMethod_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AddMethod_k__BackingField;
}
constexpr ::System::Reflection::MethodInfo* const& System::Linq::Expressions::ElementInit::__cordl_internal_get__AddMethod_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AddMethod_k__BackingField;
}
constexpr void System::Linq::Expressions::ElementInit::__cordl_internal_set__AddMethod_k__BackingField(::System::Reflection::MethodInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____AddMethod_k__BackingField = value;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*&
System::Linq::Expressions::ElementInit::__cordl_internal_get__Arguments_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Arguments_k__BackingField;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* const&
System::Linq::Expressions::ElementInit::__cordl_internal_get__Arguments_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Arguments_k__BackingField;
}
constexpr void
System::Linq::Expressions::ElementInit::__cordl_internal_set__Arguments_k__BackingField(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Arguments_k__BackingField = value;
}
inline ::System::Reflection::MethodInfo* System::Linq::Expressions::ElementInit::get_AddMethod() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ElementInit*>(), { "get_AddMethod", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method);
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* System::Linq::Expressions::ElementInit::get_Arguments() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ElementInit*>(), { "get_Arguments", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::ElementInit::GetArgument(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ElementInit*>(), { "GetArgument", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, index);
}
inline int32_t System::Linq::Expressions::ElementInit::get_ArgumentCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ElementInit*>(), { "get_ArgumentCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
/// @brief Convert operator to "::System::Linq::Expressions::IArgumentProvider"
constexpr System::Linq::Expressions::ElementInit::operator ::System::Linq::Expressions::IArgumentProvider*() noexcept {
  return static_cast<::System::Linq::Expressions::IArgumentProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Linq::Expressions::IArgumentProvider"
constexpr ::System::Linq::Expressions::IArgumentProvider* System::Linq::Expressions::ElementInit::i___System__Linq__Expressions__IArgumentProvider() noexcept {
  return static_cast<::System::Linq::Expressions::IArgumentProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::ElementInit::ElementInit() {}
