#pragma once
// IWYU pragma private; include "Unity/Properties/ConcreteTypeVisitor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Properties/zzzz__ConcreteTypeVisitor_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBagVisitor_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_1_def.hpp"
//  Writing Method size for method: ::Unity::Properties::ConcreteTypeVisitor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::ConcreteTypeVisitor::*)()>(&::Unity::Properties::ConcreteTypeVisitor::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b9ea7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::ConcreteTypeVisitor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
template <typename TContainer> inline void Unity::Properties::ConcreteTypeVisitor::VisitContainer(::by_ref<TContainer> container) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::ConcreteTypeVisitor*>(), 5 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContainer>() }));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
template <typename TContainer>
inline void Unity::Properties::ConcreteTypeVisitor::Unity_Properties_IPropertyBagVisitor_Visit(::Unity::Properties::IPropertyBag_1<TContainer>* properties, ::by_ref<TContainer> container) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::ConcreteTypeVisitor*>(),
                                                           { "Unity.Properties.IPropertyBagVisitor.Visit",
                                                             { ::i2c::class_of<TContainer>() },
                                                             { ::i2c::type_of<::Unity::Properties::IPropertyBag_1<TContainer>*>(), ::i2c::type_of<::by_ref<TContainer>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContainer>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, properties, container);
}
inline void Unity::Properties::ConcreteTypeVisitor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::ConcreteTypeVisitor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Properties::ConcreteTypeVisitor* Unity::Properties::ConcreteTypeVisitor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::ConcreteTypeVisitor*>());
}
/// @brief Convert operator to "::Unity::Properties::IPropertyBagVisitor"
constexpr Unity::Properties::ConcreteTypeVisitor::operator ::Unity::Properties::IPropertyBagVisitor*() noexcept {
  return static_cast<::Unity::Properties::IPropertyBagVisitor*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IPropertyBagVisitor"
constexpr ::Unity::Properties::IPropertyBagVisitor* Unity::Properties::ConcreteTypeVisitor::i___Unity__Properties__IPropertyBagVisitor() noexcept {
  return static_cast<::Unity::Properties::IPropertyBagVisitor*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Properties::ConcreteTypeVisitor::ConcreteTypeVisitor() {}
