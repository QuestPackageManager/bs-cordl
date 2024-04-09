#pragma once
#include "Newtonsoft/Json/Utilities/zzzz__StructMultiKey_2_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
/// @brief Convert operator to "::System::IEquatable_1<::Newtonsoft::Json::Utilities::StructMultiKey_2<T1,T2>>"
template <typename T1, typename T2> constexpr Newtonsoft::Json::Utilities::StructMultiKey_2<T1, T2>::operator ::System::IEquatable_1<::Newtonsoft::Json::Utilities::StructMultiKey_2<T1, T2>>*() {
  return static_cast<::System::IEquatable_1<::Newtonsoft::Json::Utilities::StructMultiKey_2<T1, T2>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::Newtonsoft::Json::Utilities::StructMultiKey_2<T1,T2>>"
template <typename T1, typename T2>
constexpr ::System::IEquatable_1<::Newtonsoft::Json::Utilities::StructMultiKey_2<T1, T2>>*
Newtonsoft::Json::Utilities::StructMultiKey_2<T1, T2>::i___System__IEquatable_1___Newtonsoft__Json__Utilities__StructMultiKey_2_T1_T2__() {
  return static_cast<::System::IEquatable_1<::Newtonsoft::Json::Utilities::StructMultiKey_2<T1, T2>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename T1, typename T2> inline void Newtonsoft::Json::Utilities::StructMultiKey_2<T1, T2>::_ctor(T1 v1, T2 v2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::StructMultiKey_2<T1, T2>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, v1, v2);
}
template <typename T1, typename T2> inline int32_t Newtonsoft::Json::Utilities::StructMultiKey_2<T1, T2>::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::StructMultiKey_2<T1, T2>>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T1, typename T2> inline bool Newtonsoft::Json::Utilities::StructMultiKey_2<T1, T2>::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::StructMultiKey_2<T1, T2>>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
template <typename T1, typename T2> inline bool Newtonsoft::Json::Utilities::StructMultiKey_2<T1, T2>::Equals(::Newtonsoft::Json::Utilities::StructMultiKey_2<T1, T2> other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::StructMultiKey_2<T1, T2>>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Utilities::StructMultiKey_2<T1, T2>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "Value1", ty: "T1", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "Value2", ty: "T2", modifiers: "", def_value: Some("nullptr") }]
template <typename T1, typename T2> constexpr ::Newtonsoft::Json::Utilities::StructMultiKey_2<T1, T2>::StructMultiKey_2(T1 Value1, T2 Value2) noexcept {
  this->Value1 = Value1;
  this->Value2 = Value2;
}
// Ctor Parameters []
template <typename T1, typename T2> constexpr ::Newtonsoft::Json::Utilities::StructMultiKey_2<T1, T2>::StructMultiKey_2() {}
