#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/Extensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Linq/zzzz__Extensions_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__Extensions_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__IJEnumerable_1_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JObject_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JProperty_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Linq::Extensions___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::Extensions___c::*)()>(&::Newtonsoft::Json::Linq::Extensions___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d66550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::Extensions___c._Properties_b__4_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JProperty*>* (
    ::Newtonsoft::Json::Linq::Extensions___c::*)(::Newtonsoft::Json::Linq::JObject*)>(&::Newtonsoft::Json::Linq::Extensions___c::_Properties_b__4_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d66554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions___c*>(), { "<Properties>b__4_0", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JObject*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Linq::Extensions___c::setStaticF___9(::Newtonsoft::Json::Linq::Extensions___c* value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::Linq::Extensions___c*, "<>9", ::Newtonsoft::Json::Linq::Extensions___c*>(std::forward<::Newtonsoft::Json::Linq::Extensions___c*>(value));
}
inline ::Newtonsoft::Json::Linq::Extensions___c* Newtonsoft::Json::Linq::Extensions___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::Linq::Extensions___c*, "<>9", ::Newtonsoft::Json::Linq::Extensions___c*>();
}
inline void Newtonsoft::Json::Linq::Extensions___c::setStaticF___9__4_0(
    ::System::Func_2<::Newtonsoft::Json::Linq::JObject*, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JProperty*>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Newtonsoft::Json::Linq::JObject*, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JProperty*>*>*, "<>9__4_0",
                                    ::Newtonsoft::Json::Linq::Extensions___c*>(
      std::forward<::System::Func_2<::Newtonsoft::Json::Linq::JObject*, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JProperty*>*>*>(value));
}
inline ::System::Func_2<::Newtonsoft::Json::Linq::JObject*, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JProperty*>*>*
Newtonsoft::Json::Linq::Extensions___c::getStaticF___9__4_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Newtonsoft::Json::Linq::JObject*, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JProperty*>*>*, "<>9__4_0",
                                           ::Newtonsoft::Json::Linq::Extensions___c*>();
}
inline void Newtonsoft::Json::Linq::Extensions___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JProperty*>* Newtonsoft::Json::Linq::Extensions___c::_Properties_b__4_0(::Newtonsoft::Json::Linq::JObject* d) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions___c*>(), { "<Properties>b__4_0", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JProperty*>*>(this, ___internal_method, d);
}
inline ::Newtonsoft::Json::Linq::Extensions___c* Newtonsoft::Json::Linq::Extensions___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::Extensions___c*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::Extensions___c::Extensions___c() {}
template <typename T> inline void Newtonsoft::Json::Linq::Extensions___c__0_1<T>::setStaticF___9(::Newtonsoft::Json::Linq::Extensions___c__0_1<T>* value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::Linq::Extensions___c__0_1<T>*, "<>9", ::Newtonsoft::Json::Linq::Extensions___c__0_1<T>*>(
      std::forward<::Newtonsoft::Json::Linq::Extensions___c__0_1<T>*>(value));
}
template <typename T> inline ::Newtonsoft::Json::Linq::Extensions___c__0_1<T>* Newtonsoft::Json::Linq::Extensions___c__0_1<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::Linq::Extensions___c__0_1<T>*, "<>9", ::Newtonsoft::Json::Linq::Extensions___c__0_1<T>*>();
}
template <typename T>
inline void Newtonsoft::Json::Linq::Extensions___c__0_1<T>::setStaticF___9__0_0(::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>*, "<>9__0_0",
                                    ::Newtonsoft::Json::Linq::Extensions___c__0_1<T>*>(
      std::forward<::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>*>(value));
}
template <typename T>
inline ::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>* Newtonsoft::Json::Linq::Extensions___c__0_1<T>::getStaticF___9__0_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>*, "<>9__0_0",
                                           ::Newtonsoft::Json::Linq::Extensions___c__0_1<T>*>();
}
template <typename T> inline void Newtonsoft::Json::Linq::Extensions___c__0_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions___c__0_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::Extensions___c__0_1<T>::_Ancestors_b__0_0(T j) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions___c__0_1<T>*>(), { "<Ancestors>b__0_0", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>(this, ___internal_method, j);
}
template <typename T> inline ::Newtonsoft::Json::Linq::Extensions___c__0_1<T>* Newtonsoft::Json::Linq::Extensions___c__0_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::Extensions___c__0_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::Newtonsoft::Json::Linq::Extensions___c__0_1<T>::Extensions___c__0_1() {}
template <typename T> inline void Newtonsoft::Json::Linq::Extensions___c__1_1<T>::setStaticF___9(::Newtonsoft::Json::Linq::Extensions___c__1_1<T>* value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::Linq::Extensions___c__1_1<T>*, "<>9", ::Newtonsoft::Json::Linq::Extensions___c__1_1<T>*>(
      std::forward<::Newtonsoft::Json::Linq::Extensions___c__1_1<T>*>(value));
}
template <typename T> inline ::Newtonsoft::Json::Linq::Extensions___c__1_1<T>* Newtonsoft::Json::Linq::Extensions___c__1_1<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::Linq::Extensions___c__1_1<T>*, "<>9", ::Newtonsoft::Json::Linq::Extensions___c__1_1<T>*>();
}
template <typename T>
inline void Newtonsoft::Json::Linq::Extensions___c__1_1<T>::setStaticF___9__1_0(::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>*, "<>9__1_0",
                                    ::Newtonsoft::Json::Linq::Extensions___c__1_1<T>*>(
      std::forward<::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>*>(value));
}
template <typename T>
inline ::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>* Newtonsoft::Json::Linq::Extensions___c__1_1<T>::getStaticF___9__1_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>*, "<>9__1_0",
                                           ::Newtonsoft::Json::Linq::Extensions___c__1_1<T>*>();
}
template <typename T> inline void Newtonsoft::Json::Linq::Extensions___c__1_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions___c__1_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::Extensions___c__1_1<T>::_AncestorsAndSelf_b__1_0(T j) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions___c__1_1<T>*>(), { "<AncestorsAndSelf>b__1_0", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>(this, ___internal_method, j);
}
template <typename T> inline ::Newtonsoft::Json::Linq::Extensions___c__1_1<T>* Newtonsoft::Json::Linq::Extensions___c__1_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::Extensions___c__1_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::Newtonsoft::Json::Linq::Extensions___c__1_1<T>::Extensions___c__1_1() {}
template <typename T, typename U> inline void Newtonsoft::Json::Linq::Extensions___c__13_2<T, U>::setStaticF___9(::Newtonsoft::Json::Linq::Extensions___c__13_2<T, U>* value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::Linq::Extensions___c__13_2<T, U>*, "<>9", ::Newtonsoft::Json::Linq::Extensions___c__13_2<T, U>*>(
      std::forward<::Newtonsoft::Json::Linq::Extensions___c__13_2<T, U>*>(value));
}
template <typename T, typename U> inline ::Newtonsoft::Json::Linq::Extensions___c__13_2<T, U>* Newtonsoft::Json::Linq::Extensions___c__13_2<T, U>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::Linq::Extensions___c__13_2<T, U>*, "<>9", ::Newtonsoft::Json::Linq::Extensions___c__13_2<T, U>*>();
}
template <typename T, typename U>
inline void Newtonsoft::Json::Linq::Extensions___c__13_2<T, U>::setStaticF___9__13_0(::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>*, "<>9__13_0",
                                    ::Newtonsoft::Json::Linq::Extensions___c__13_2<T, U>*>(
      std::forward<::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>*>(value));
}
template <typename T, typename U>
inline ::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>* Newtonsoft::Json::Linq::Extensions___c__13_2<T, U>::getStaticF___9__13_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>*, "<>9__13_0",
                                           ::Newtonsoft::Json::Linq::Extensions___c__13_2<T, U>*>();
}
template <typename T, typename U> inline void Newtonsoft::Json::Linq::Extensions___c__13_2<T, U>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions___c__13_2<T, U>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T, typename U> inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::Extensions___c__13_2<T, U>::_Children_b__13_0(T c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions___c__13_2<T, U>*>(), { "<Children>b__13_0", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>(this, ___internal_method, c);
}
template <typename T, typename U> inline ::Newtonsoft::Json::Linq::Extensions___c__13_2<T, U>* Newtonsoft::Json::Linq::Extensions___c__13_2<T, U>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::Extensions___c__13_2<T, U>*>());
}
// Ctor Parameters []
template <typename T, typename U> constexpr ::Newtonsoft::Json::Linq::Extensions___c__13_2<T, U>::Extensions___c__13_2() {}
template <typename T> inline void Newtonsoft::Json::Linq::Extensions___c__2_1<T>::setStaticF___9(::Newtonsoft::Json::Linq::Extensions___c__2_1<T>* value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::Linq::Extensions___c__2_1<T>*, "<>9", ::Newtonsoft::Json::Linq::Extensions___c__2_1<T>*>(
      std::forward<::Newtonsoft::Json::Linq::Extensions___c__2_1<T>*>(value));
}
template <typename T> inline ::Newtonsoft::Json::Linq::Extensions___c__2_1<T>* Newtonsoft::Json::Linq::Extensions___c__2_1<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::Linq::Extensions___c__2_1<T>*, "<>9", ::Newtonsoft::Json::Linq::Extensions___c__2_1<T>*>();
}
template <typename T>
inline void Newtonsoft::Json::Linq::Extensions___c__2_1<T>::setStaticF___9__2_0(::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>*, "<>9__2_0",
                                    ::Newtonsoft::Json::Linq::Extensions___c__2_1<T>*>(
      std::forward<::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>*>(value));
}
template <typename T>
inline ::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>* Newtonsoft::Json::Linq::Extensions___c__2_1<T>::getStaticF___9__2_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>*, "<>9__2_0",
                                           ::Newtonsoft::Json::Linq::Extensions___c__2_1<T>*>();
}
template <typename T> inline void Newtonsoft::Json::Linq::Extensions___c__2_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions___c__2_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::Extensions___c__2_1<T>::_Descendants_b__2_0(T j) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions___c__2_1<T>*>(), { "<Descendants>b__2_0", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>(this, ___internal_method, j);
}
template <typename T> inline ::Newtonsoft::Json::Linq::Extensions___c__2_1<T>* Newtonsoft::Json::Linq::Extensions___c__2_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::Extensions___c__2_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::Newtonsoft::Json::Linq::Extensions___c__2_1<T>::Extensions___c__2_1() {}
template <typename T> inline void Newtonsoft::Json::Linq::Extensions___c__3_1<T>::setStaticF___9(::Newtonsoft::Json::Linq::Extensions___c__3_1<T>* value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::Linq::Extensions___c__3_1<T>*, "<>9", ::Newtonsoft::Json::Linq::Extensions___c__3_1<T>*>(
      std::forward<::Newtonsoft::Json::Linq::Extensions___c__3_1<T>*>(value));
}
template <typename T> inline ::Newtonsoft::Json::Linq::Extensions___c__3_1<T>* Newtonsoft::Json::Linq::Extensions___c__3_1<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::Linq::Extensions___c__3_1<T>*, "<>9", ::Newtonsoft::Json::Linq::Extensions___c__3_1<T>*>();
}
template <typename T>
inline void Newtonsoft::Json::Linq::Extensions___c__3_1<T>::setStaticF___9__3_0(::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>*, "<>9__3_0",
                                    ::Newtonsoft::Json::Linq::Extensions___c__3_1<T>*>(
      std::forward<::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>*>(value));
}
template <typename T>
inline ::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>* Newtonsoft::Json::Linq::Extensions___c__3_1<T>::getStaticF___9__3_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>*, "<>9__3_0",
                                           ::Newtonsoft::Json::Linq::Extensions___c__3_1<T>*>();
}
template <typename T> inline void Newtonsoft::Json::Linq::Extensions___c__3_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions___c__3_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::Extensions___c__3_1<T>::_DescendantsAndSelf_b__3_0(T j) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions___c__3_1<T>*>(), { "<DescendantsAndSelf>b__3_0", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>(this, ___internal_method, j);
}
template <typename T> inline ::Newtonsoft::Json::Linq::Extensions___c__3_1<T>* Newtonsoft::Json::Linq::Extensions___c__3_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::Extensions___c__3_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::Newtonsoft::Json::Linq::Extensions___c__3_1<T>::Extensions___c__3_1() {}
template <typename T, typename U> constexpr int32_t& Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T, typename U> constexpr int32_t const& Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T, typename U> constexpr void Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename T, typename U> constexpr U& Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T, typename U> constexpr U const& Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T, typename U> constexpr void Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>::__cordl_internal_set___2__current(U value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
template <typename T, typename U> constexpr int32_t& Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename T, typename U> constexpr int32_t const& Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename T, typename U> constexpr void Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
template <typename T, typename U> constexpr ::System::Collections::Generic::IEnumerable_1<T>*& Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>::__cordl_internal_get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
template <typename T, typename U> constexpr ::System::Collections::Generic::IEnumerable_1<T>* const& Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>::__cordl_internal_get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
template <typename T, typename U> constexpr void Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>::__cordl_internal_set_source(::System::Collections::Generic::IEnumerable_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___source = value;
}
template <typename T, typename U> constexpr ::System::Collections::Generic::IEnumerable_1<T>*& Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>::__cordl_internal_get___3__source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__source;
}
template <typename T, typename U>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* const& Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>::__cordl_internal_get___3__source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__source;
}
template <typename T, typename U> constexpr void Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>::__cordl_internal_set___3__source(::System::Collections::Generic::IEnumerable_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3__source = value;
}
template <typename T, typename U> constexpr ::System::Collections::Generic::IEnumerator_1<T>*& Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>::__cordl_internal_get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
template <typename T, typename U>
constexpr ::System::Collections::Generic::IEnumerator_1<T>* const& Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>::__cordl_internal_get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
template <typename T, typename U> constexpr void Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>::__cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap1 = value;
}
template <typename T, typename U> inline void Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
template <typename T, typename U> inline void Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T, typename U> inline bool Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T, typename U> inline void Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>*>(), { "<>m__Finally1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T, typename U> inline U Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>::System_Collections_Generic_IEnumerator_U__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>*>(), { "System.Collections.Generic.IEnumerator<U>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<U>(this, ___internal_method);
}
template <typename T, typename U> inline void Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T, typename U> inline ::System::Object* Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename T, typename U>
inline ::System::Collections::Generic::IEnumerator_1<U>* Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>::System_Collections_Generic_IEnumerable_U__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>*>(), { "System.Collections.Generic.IEnumerable<U>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<U>*>(this, ___internal_method);
}
template <typename T, typename U> inline ::System::Collections::IEnumerator* Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template <typename T, typename U> inline ::Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>* Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<U>"
template <typename T, typename U> constexpr Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>::operator ::System::Collections::Generic::IEnumerable_1<U>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<U>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<U>"
template <typename T, typename U>
constexpr ::System::Collections::Generic::IEnumerable_1<U>* Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>::i___System__Collections__Generic__IEnumerable_1_U_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<U>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T, typename U> constexpr Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T, typename U> constexpr ::System::Collections::IEnumerable* Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<U>"
template <typename T, typename U> constexpr Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>::operator ::System::Collections::Generic::IEnumerator_1<U>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<U>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<U>"
template <typename T, typename U>
constexpr ::System::Collections::Generic::IEnumerator_1<U>* Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>::i___System__Collections__Generic__IEnumerator_1_U_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<U>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T, typename U> constexpr Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename T, typename U> constexpr ::System::Collections::IEnumerator* Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T, typename U> constexpr Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T, typename U> constexpr ::System::IDisposable* Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T, typename U> constexpr ::Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>::Extensions__Convert_d__14_2() {}
template <typename T, typename U> constexpr int32_t& Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T, typename U> constexpr int32_t const& Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T, typename U> constexpr void Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename T, typename U> constexpr U& Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T, typename U> constexpr U const& Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T, typename U> constexpr void Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::__cordl_internal_set___2__current(U value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
template <typename T, typename U> constexpr int32_t& Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename T, typename U> constexpr int32_t const& Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename T, typename U> constexpr void Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
template <typename T, typename U> constexpr ::System::Collections::Generic::IEnumerable_1<T>*& Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::__cordl_internal_get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
template <typename T, typename U> constexpr ::System::Collections::Generic::IEnumerable_1<T>* const& Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::__cordl_internal_get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
template <typename T, typename U> constexpr void Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::__cordl_internal_set_source(::System::Collections::Generic::IEnumerable_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___source = value;
}
template <typename T, typename U> constexpr ::System::Collections::Generic::IEnumerable_1<T>*& Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::__cordl_internal_get___3__source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__source;
}
template <typename T, typename U>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* const& Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::__cordl_internal_get___3__source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__source;
}
template <typename T, typename U> constexpr void Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::__cordl_internal_set___3__source(::System::Collections::Generic::IEnumerable_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3__source = value;
}
template <typename T, typename U> constexpr ::System::Object*& Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::__cordl_internal_get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
template <typename T, typename U> constexpr ::System::Object* const& Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::__cordl_internal_get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
template <typename T, typename U> constexpr void Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::__cordl_internal_set_key(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___key = value;
}
template <typename T, typename U> constexpr ::System::Object*& Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::__cordl_internal_get___3__key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__key;
}
template <typename T, typename U> constexpr ::System::Object* const& Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::__cordl_internal_get___3__key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__key;
}
template <typename T, typename U> constexpr void Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::__cordl_internal_set___3__key(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3__key = value;
}
template <typename T, typename U> constexpr ::System::Collections::Generic::IEnumerator_1<T>*& Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::__cordl_internal_get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
template <typename T, typename U> constexpr ::System::Collections::Generic::IEnumerator_1<T>* const& Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::__cordl_internal_get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
template <typename T, typename U> constexpr void Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::__cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap1 = value;
}
template <typename T, typename U>
constexpr ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*& Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::__cordl_internal_get___7__wrap2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
template <typename T, typename U>
constexpr ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* const& Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::__cordl_internal_get___7__wrap2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
template <typename T, typename U>
constexpr void Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::__cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap2 = value;
}
template <typename T, typename U> inline void Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
template <typename T, typename U> inline void Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T, typename U> inline bool Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T, typename U> inline void Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::__m__Finally1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>*>(), { "<>m__Finally1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T, typename U> inline void Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::__m__Finally2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>*>(), { "<>m__Finally2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T, typename U> inline void Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::__m__Finally3() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>*>(), { "<>m__Finally3", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T, typename U> inline U Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::System_Collections_Generic_IEnumerator_U__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>*>(), { "System.Collections.Generic.IEnumerator<U>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<U>(this, ___internal_method);
}
template <typename T, typename U> inline void Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T, typename U> inline ::System::Object* Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename T, typename U>
inline ::System::Collections::Generic::IEnumerator_1<U>* Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::System_Collections_Generic_IEnumerable_U__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>*>(), { "System.Collections.Generic.IEnumerable<U>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<U>*>(this, ___internal_method);
}
template <typename T, typename U> inline ::System::Collections::IEnumerator* Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template <typename T, typename U> inline ::Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>* Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<U>"
template <typename T, typename U> constexpr Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::operator ::System::Collections::Generic::IEnumerable_1<U>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<U>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<U>"
template <typename T, typename U>
constexpr ::System::Collections::Generic::IEnumerable_1<U>* Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::i___System__Collections__Generic__IEnumerable_1_U_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<U>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T, typename U> constexpr Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T, typename U> constexpr ::System::Collections::IEnumerable* Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<U>"
template <typename T, typename U> constexpr Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::operator ::System::Collections::Generic::IEnumerator_1<U>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<U>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<U>"
template <typename T, typename U>
constexpr ::System::Collections::Generic::IEnumerator_1<U>* Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::i___System__Collections__Generic__IEnumerator_1_U_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<U>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T, typename U> constexpr Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename T, typename U> constexpr ::System::Collections::IEnumerator* Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T, typename U> constexpr Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T, typename U> constexpr ::System::IDisposable* Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T, typename U> constexpr ::Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>::Extensions__Values_d__11_2() {}
//  Writing Method size for method: ::Newtonsoft::Json::Linq::Extensions.Properties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JProperty*>* (*)(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JObject*>*)>(
        &::Newtonsoft::Json::Linq::Extensions::Properties)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5d66300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions*>(),
                                                             { "Properties", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JObject*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::Extensions.Values
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* (*)(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*, ::System::Object*)>(
        &::Newtonsoft::Json::Linq::Extensions::Values)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5d66448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions*>(),
                            { "Values", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::Extensions.Values
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* (*)(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*)>(
        &::Newtonsoft::Json::Linq::Extensions::Values)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d664f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions*>(),
                                                             { "Values", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::Extensions.AsJEnumerable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* (*)(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*)>(
        &::Newtonsoft::Json::Linq::Extensions::AsJEnumerable)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5d664a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions*>(),
                                                             { "AsJEnumerable", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>() } })));
    return ___internal_method;
  }
};
template <typename T>
inline ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::Extensions::Ancestors(::System::Collections::Generic::IEnumerable_1<T>* source) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions*>(),
                                                           { "Ancestors", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>(nullptr, ___internal_method, source);
}
template <typename T>
inline ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::Extensions::AncestorsAndSelf(::System::Collections::Generic::IEnumerable_1<T>* source) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions*>(),
                                                           { "AncestorsAndSelf", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>(nullptr, ___internal_method, source);
}
template <typename T>
inline ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::Extensions::Descendants(::System::Collections::Generic::IEnumerable_1<T>* source) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions*>(),
                                                           { "Descendants", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>(nullptr, ___internal_method, source);
}
template <typename T>
inline ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::Extensions::DescendantsAndSelf(::System::Collections::Generic::IEnumerable_1<T>* source) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions*>(),
                                                           { "DescendantsAndSelf", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>(nullptr, ___internal_method, source);
}
inline ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JProperty*>*
Newtonsoft::Json::Linq::Extensions::Properties(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JObject*>* source) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions*>(),
                                                           { "Properties", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JObject*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JProperty*>*>(nullptr, ___internal_method, source);
}
inline ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*
Newtonsoft::Json::Linq::Extensions::Values(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* source, ::System::Object* key) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions*>(),
                          { "Values", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>(nullptr, ___internal_method, source, key);
}
inline ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*
Newtonsoft::Json::Linq::Extensions::Values(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* source) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions*>(),
                                                           { "Values", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>(nullptr, ___internal_method, source);
}
template <typename U>
inline ::System::Collections::Generic::IEnumerable_1<U>* Newtonsoft::Json::Linq::Extensions::Values(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* source,
                                                                                                    ::System::Object* key) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Newtonsoft::Json::Linq::Extensions*>(),
          { "Values", { ::i2c::class_of<U>() }, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>(), ::i2c::type_of<::System::Object*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<U>*>(nullptr, ___internal_method, source, key);
}
template <typename U>
inline ::System::Collections::Generic::IEnumerable_1<U>* Newtonsoft::Json::Linq::Extensions::Values(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* source) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions*>(),
                                              { "Values", { ::i2c::class_of<U>() }, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<U>*>(nullptr, ___internal_method, source);
}
template <typename U> inline U Newtonsoft::Json::Linq::Extensions::Value(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions*>(),
                                              { "Value", { ::i2c::class_of<U>() }, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<U>(nullptr, ___internal_method, value);
}
template <typename T, typename U> inline U Newtonsoft::Json::Linq::Extensions::Value(::System::Collections::Generic::IEnumerable_1<T>* value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions*>(),
                                                           { "Value", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<U>(nullptr, ___internal_method, value);
}
template <typename T, typename U>
inline ::System::Collections::Generic::IEnumerable_1<U>* Newtonsoft::Json::Linq::Extensions::Values(::System::Collections::Generic::IEnumerable_1<T>* source, ::System::Object* key) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions*>(),
                          { "Values", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>(), ::i2c::type_of<::System::Object*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<U>*>(nullptr, ___internal_method, source, key);
}
template <typename T>
inline ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::Extensions::Children(::System::Collections::Generic::IEnumerable_1<T>* source) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions*>(),
                                                           { "Children", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>(nullptr, ___internal_method, source);
}
template <typename T, typename U> inline ::System::Collections::Generic::IEnumerable_1<U>* Newtonsoft::Json::Linq::Extensions::Children(::System::Collections::Generic::IEnumerable_1<T>* source) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions*>(),
                                                           { "Children", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<U>*>(nullptr, ___internal_method, source);
}
template <typename T, typename U> inline ::System::Collections::Generic::IEnumerable_1<U>* Newtonsoft::Json::Linq::Extensions::Convert(::System::Collections::Generic::IEnumerable_1<T>* source) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions*>(),
                                                           { "Convert", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<U>*>(nullptr, ___internal_method, source);
}
template <typename T, typename U> inline U Newtonsoft::Json::Linq::Extensions::Convert(T token) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions*>(), { "Convert", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<U>(nullptr, ___internal_method, token);
}
inline ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*
Newtonsoft::Json::Linq::Extensions::AsJEnumerable(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* source) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions*>(),
                                                           { "AsJEnumerable", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>(nullptr, ___internal_method, source);
}
template <typename T> inline ::Newtonsoft::Json::Linq::IJEnumerable_1<T>* Newtonsoft::Json::Linq::Extensions::AsJEnumerable(::System::Collections::Generic::IEnumerable_1<T>* source) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::Extensions*>(),
                                                           { "AsJEnumerable", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::IJEnumerable_1<T>*>(nullptr, ___internal_method, source);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::Extensions::Extensions() {}
