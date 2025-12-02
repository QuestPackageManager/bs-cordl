#pragma once
// IWYU pragma private; include "Unity/Properties/IPropertyBag_1.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBagVisitor_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_def.hpp"
#include "Unity/Properties/zzzz__PropertyCollection_1_def.hpp"
template <typename TContainer> inline ::Unity::Properties::PropertyCollection_1<TContainer> Unity::Properties::IPropertyBag_1<TContainer>::GetProperties() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IPropertyBag_1<TContainer>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::PropertyCollection_1<TContainer>, false>(this, ___internal_method);
}
template <typename TContainer> inline ::Unity::Properties::PropertyCollection_1<TContainer> Unity::Properties::IPropertyBag_1<TContainer>::GetProperties(::ByRef<TContainer> container) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IPropertyBag_1<TContainer>*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::PropertyCollection_1<TContainer>, false>(this, ___internal_method, container);
}
template <typename TContainer> inline void Unity::Properties::IPropertyBag_1<TContainer>::Accept(::Unity::Properties::IPropertyBagVisitor* visitor, ::ByRef<TContainer> container) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IPropertyBag_1<TContainer>*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, visitor, container);
}
/// @brief Convert operator to "::Unity::Properties::IPropertyBag"
template <typename TContainer> constexpr Unity::Properties::IPropertyBag_1<TContainer>::operator ::Unity::Properties::IPropertyBag*() noexcept {
  return static_cast<::Unity::Properties::IPropertyBag*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IPropertyBag"
template <typename TContainer> constexpr ::Unity::Properties::IPropertyBag* Unity::Properties::IPropertyBag_1<TContainer>::i___Unity__Properties__IPropertyBag() noexcept {
  return static_cast<::Unity::Properties::IPropertyBag*>(static_cast<void*>(this));
}
