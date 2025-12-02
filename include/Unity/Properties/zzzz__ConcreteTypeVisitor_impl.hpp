#pragma once
// IWYU pragma private; include "Unity/Properties/ConcreteTypeVisitor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Properties/zzzz__ConcreteTypeVisitor_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBagVisitor_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_1_def.hpp"
//  Writing Method size for method: ::Unity::Properties::ConcreteTypeVisitor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Properties::ConcreteTypeVisitor::*)()>(&::Unity::Properties::ConcreteTypeVisitor::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x696dc9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::ConcreteTypeVisitor*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
template <typename TContainer> inline void Unity::Properties::ConcreteTypeVisitor::VisitContainer(::ByRef<TContainer> container) {
  auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                                  ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::ConcreteTypeVisitor*>::get(), 5)));
  auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContainer>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
template <typename TContainer>
inline void Unity::Properties::ConcreteTypeVisitor::Unity_Properties_IPropertyBagVisitor_Visit(::Unity::Properties::IPropertyBag_1<TContainer>* properties, ::ByRef<TContainer> container) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::ConcreteTypeVisitor*>::get(), "Unity.Properties.IPropertyBagVisitor.Visit",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContainer>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::IPropertyBag_1<TContainer>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TContainer>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContainer>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, properties, container);
}
inline void Unity::Properties::ConcreteTypeVisitor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::ConcreteTypeVisitor*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Properties::ConcreteTypeVisitor* Unity::Properties::ConcreteTypeVisitor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Properties::ConcreteTypeVisitor*>());
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
