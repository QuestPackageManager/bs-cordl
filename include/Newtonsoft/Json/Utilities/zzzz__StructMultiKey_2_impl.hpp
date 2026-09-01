#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Utilities\StructMultiKey_2.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__StructMultiKey_2_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T1, typename T2> inline void Newtonsoft::Json::Utilities::StructMultiKey_2<T1, T2>::_ctor(T1 v1, T2 v2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StructMultiKey_2<T1, T2>>(), { ".ctor", {}, { ::i2c::type_of<T1>(), ::i2c::type_of<T2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v1, v2);
}
template <typename T1, typename T2> inline int32_t Newtonsoft::Json::Utilities::StructMultiKey_2<T1, T2>::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Utilities::StructMultiKey_2<T1, T2>>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T1, typename T2> inline bool Newtonsoft::Json::Utilities::StructMultiKey_2<T1, T2>::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Utilities::StructMultiKey_2<T1, T2>>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
template <typename T1, typename T2> inline bool Newtonsoft::Json::Utilities::StructMultiKey_2<T1, T2>::Equals(::Newtonsoft::Json::Utilities::StructMultiKey_2<T1, T2> other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StructMultiKey_2<T1, T2>>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::Newtonsoft::Json::Utilities::StructMultiKey_2<T1, T2>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::Newtonsoft::Json::Utilities::StructMultiKey_2<T1,T2>>"
template <typename T1, typename T2> constexpr Newtonsoft::Json::Utilities::StructMultiKey_2<T1, T2>::operator ::System::IEquatable_1<::Newtonsoft::Json::Utilities::StructMultiKey_2<T1, T2>>*() {
  return static_cast<::System::IEquatable_1<::Newtonsoft::Json::Utilities::StructMultiKey_2<T1, T2>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Newtonsoft::Json::Utilities::StructMultiKey_2<T1,T2>>"
template <typename T1, typename T2>
constexpr ::System::IEquatable_1<::Newtonsoft::Json::Utilities::StructMultiKey_2<T1, T2>>*
Newtonsoft::Json::Utilities::StructMultiKey_2<T1, T2>::i___System__IEquatable_1___Newtonsoft__Json__Utilities__StructMultiKey_2_T1_T2__() {
  return static_cast<::System::IEquatable_1<::Newtonsoft::Json::Utilities::StructMultiKey_2<T1, T2>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Value1", ty: "T1", modifiers: "", def_value: Some("{}") }, CppParam { name: "Value2", ty: "T2", modifiers: "", def_value: Some("{}") }]
template <typename T1, typename T2> constexpr ::Newtonsoft::Json::Utilities::StructMultiKey_2<T1, T2>::StructMultiKey_2(T1 Value1, T2 Value2) noexcept {
  this->Value1 = Value1;
  this->Value2 = Value2;
}
// Ctor Parameters []
template <typename T1, typename T2> constexpr ::Newtonsoft::Json::Utilities::StructMultiKey_2<T1, T2>::StructMultiKey_2() {}
