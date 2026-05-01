#pragma once
// IWYU pragma private; include "Unity/Collections/CollectionExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__CollectionExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "Unity/Collections/zzzz__CollectionExtensions_def.hpp"
template <typename T> constexpr ::System::Func_2<T, ::StringW>*& Unity::Collections::CollectionExtensions___c__DisplayClass3_0_1<T>::__cordl_internal_get_serializeElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializeElement;
}
template <typename T> constexpr ::System::Func_2<T, ::StringW>* const& Unity::Collections::CollectionExtensions___c__DisplayClass3_0_1<T>::__cordl_internal_get_serializeElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializeElement;
}
template <typename T> constexpr void Unity::Collections::CollectionExtensions___c__DisplayClass3_0_1<T>::__cordl_internal_set_serializeElement(::System::Func_2<T, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___serializeElement, value);
}
template <typename T> inline void Unity::Collections::CollectionExtensions___c__DisplayClass3_0_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::CollectionExtensions___c__DisplayClass3_0_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::StringW Unity::Collections::CollectionExtensions___c__DisplayClass3_0_1<T>::_SerializedView_b__0(T t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::CollectionExtensions___c__DisplayClass3_0_1<T>*>::get(), "<SerializedView>b__0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, t);
}
template <typename T> inline ::Unity::Collections::CollectionExtensions___c__DisplayClass3_0_1<T>* Unity::Collections::CollectionExtensions___c__DisplayClass3_0_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Collections::CollectionExtensions___c__DisplayClass3_0_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::CollectionExtensions___c__DisplayClass3_0_1<T>::CollectionExtensions___c__DisplayClass3_0_1() {}
template <typename T>
inline ::StringW Unity::Collections::CollectionExtensions::SerializedView(::System::Collections::Generic::IEnumerable_1<T>* collection, ::System::Func_2<T, ::StringW>* serializeElement) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::CollectionExtensions*>::get(), "SerializedView",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<T, ::StringW>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, collection, serializeElement);
}
// Ctor Parameters []
constexpr ::Unity::Collections::CollectionExtensions::CollectionExtensions() {}
