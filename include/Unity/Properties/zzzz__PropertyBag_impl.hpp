#pragma once
// IWYU pragma private; include "Unity\Properties\PropertyBag.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Properties/zzzz__PropertyBag_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBagVisitor_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_def.hpp"
#include "Unity/Properties/zzzz__PropertyBag_1_def.hpp"
//  Writing Method size for method: ::Unity::Properties::PropertyBag.GetPropertyBag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Properties::IPropertyBag* (*)(::System::Type*)>(&::Unity::Properties::PropertyBag::GetPropertyBag)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6ba1db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyBag*>(), { "GetPropertyBag", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
template <typename TContainer>
inline void Unity::Properties::PropertyBag::AcceptWithSpecializedVisitor(::Unity::Properties::IPropertyBag_1<TContainer>* properties, ::Unity::Properties::IPropertyBagVisitor* visitor,
                                                                         ::by_ref<TContainer> container) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyBag*>(), { "AcceptWithSpecializedVisitor",
                                                                                  { ::i2c::class_of<TContainer>() },
                                                                                  { ::i2c::type_of<::Unity::Properties::IPropertyBag_1<TContainer>*>(),
                                                                                    ::i2c::type_of<::Unity::Properties::IPropertyBagVisitor*>(), ::i2c::type_of<::by_ref<TContainer>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContainer>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, properties, visitor, container);
}
template <typename TContainer> inline void Unity::Properties::PropertyBag::Register(::Unity::Properties::PropertyBag_1<TContainer>* propertyBag) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyBag*>(),
                                                           { "Register", { ::i2c::class_of<TContainer>() }, { ::i2c::type_of<::Unity::Properties::PropertyBag_1<TContainer>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContainer>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, propertyBag);
}
template <typename TElement> inline void Unity::Properties::PropertyBag::RegisterList() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyBag*>(), { "RegisterList", { ::i2c::class_of<TElement>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TElement>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template <typename TContainer, typename TElement> inline void Unity::Properties::PropertyBag::RegisterList() {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyBag*>(), { "RegisterList", { ::i2c::class_of<TContainer>(), ::i2c::class_of<TElement>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContainer>(), ::i2c::class_of<TElement>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::Unity::Properties::IPropertyBag* Unity::Properties::PropertyBag::GetPropertyBag(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyBag*>(), { "GetPropertyBag", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::IPropertyBag*>(nullptr, ___internal_method, type);
}
template <typename TContainer> inline ::Unity::Properties::IPropertyBag_1<TContainer>* Unity::Properties::PropertyBag::GetPropertyBag() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyBag*>(), { "GetPropertyBag", { ::i2c::class_of<TContainer>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContainer>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::IPropertyBag_1<TContainer>*>(nullptr, ___internal_method);
}
template <typename TValue> inline bool Unity::Properties::PropertyBag::TryGetPropertyBagForValue(::by_ref<TValue> value, ::by_ref<::Unity::Properties::IPropertyBag*> propertyBag) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyBag*>(),
                          { "TryGetPropertyBagForValue", { ::i2c::class_of<TValue>() }, { ::i2c::type_of<::by_ref<TValue>>(), ::i2c::type_of<::by_ref<::Unity::Properties::IPropertyBag*>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, propertyBag);
}
// Ctor Parameters []
constexpr ::Unity::Properties::PropertyBag::PropertyBag() {}
