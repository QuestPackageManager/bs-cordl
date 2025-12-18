#pragma once
// IWYU pragma private; include "Unity/Properties/PropertyBag.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Properties/zzzz__PropertyBag_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBagVisitor_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_def.hpp"
#include "Unity/Properties/zzzz__PropertyBag_1_def.hpp"
//  Writing Method size for method: ::Unity::Properties::PropertyBag.GetPropertyBag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Properties::IPropertyBag* (*)(::System::Type*)>(&::Unity::Properties::PropertyBag::GetPropertyBag)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x69d68d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PropertyBag*>::get(), "GetPropertyBag", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
template <typename TContainer>
inline void Unity::Properties::PropertyBag::AcceptWithSpecializedVisitor(::Unity::Properties::IPropertyBag_1<TContainer>* properties, ::Unity::Properties::IPropertyBagVisitor* visitor,
                                                                         ::ByRef<TContainer> container) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PropertyBag*>::get(), "AcceptWithSpecializedVisitor",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContainer>::get() },
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::IPropertyBag_1<TContainer>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::IPropertyBagVisitor*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TContainer>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContainer>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, properties, visitor, container);
}
template <typename TContainer> inline void Unity::Properties::PropertyBag::Register(::Unity::Properties::PropertyBag_1<TContainer>* propertyBag) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PropertyBag*>::get(), "Register",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContainer>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::PropertyBag_1<TContainer>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContainer>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, propertyBag);
}
template <typename TElement> inline void Unity::Properties::PropertyBag::RegisterList() {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PropertyBag*>::get(), "RegisterList",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TElement>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TElement>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
template <typename TContainer, typename TElement> inline void Unity::Properties::PropertyBag::RegisterList() {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PropertyBag*>::get(), "RegisterList",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TElement>::get() },
      ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContainer>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TElement>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::Unity::Properties::IPropertyBag* Unity::Properties::PropertyBag::GetPropertyBag(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PropertyBag*>::get(), "GetPropertyBag", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::IPropertyBag*, false>(nullptr, ___internal_method, type);
}
template <typename TContainer> inline ::Unity::Properties::IPropertyBag_1<TContainer>* Unity::Properties::PropertyBag::GetPropertyBag() {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PropertyBag*>::get(), "GetPropertyBag",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContainer>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContainer>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::IPropertyBag_1<TContainer>*, false>(nullptr, ___internal_method);
}
template <typename TValue> inline bool Unity::Properties::PropertyBag::TryGetPropertyBagForValue(::ByRef<TValue> value, ::ByRef<::Unity::Properties::IPropertyBag*> propertyBag) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PropertyBag*>::get(), "TryGetPropertyBagForValue",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TValue>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Properties::IPropertyBag*>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value, propertyBag);
}
// Ctor Parameters []
constexpr ::Unity::Properties::PropertyBag::PropertyBag() {}
