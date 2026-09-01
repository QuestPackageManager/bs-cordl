#pragma once
// IWYU pragma private; include "LiteNetLib\Utils\NetSerializer.hpp"
#include "LiteNetLib/Utils/zzzz__NetSerializer_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LiteNetLib/Utils/zzzz__NetSerializer_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetSerializer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
template <typename T> constexpr bool& LiteNetLib::Utils::NetSerializer_FastCall_1<T>::__cordl_internal_get_IsArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsArray;
}
template <typename T> constexpr bool const& LiteNetLib::Utils::NetSerializer_FastCall_1<T>::__cordl_internal_get_IsArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsArray;
}
template <typename T> constexpr void LiteNetLib::Utils::NetSerializer_FastCall_1<T>::__cordl_internal_set_IsArray(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IsArray = value;
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_FastCall_1<T>::Init(::System::Reflection::MethodInfo* getMethod, ::System::Reflection::MethodInfo* setMethod, bool isArray) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_FastCall_1<T>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, getMethod, setMethod, isArray);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_FastCall_1<T>::Read(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_FastCall_1<T>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_FastCall_1<T>::Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_FastCall_1<T>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, w);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_FastCall_1<T>::ReadArray(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_FastCall_1<T>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_FastCall_1<T>::WriteArray(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_FastCall_1<T>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, w);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_FastCall_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetSerializer_FastCall_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::LiteNetLib::Utils::NetSerializer_FastCall_1<T>* LiteNetLib::Utils::NetSerializer_FastCall_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Utils::NetSerializer_FastCall_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::LiteNetLib::Utils::NetSerializer_FastCall_1<T>::NetSerializer_FastCall_1() {}
template <typename TClass, typename TProperty> constexpr ::System::Func_2<TClass, TProperty>*& LiteNetLib::Utils::NetSerializer_FastCallSpecific_2<TClass, TProperty>::__cordl_internal_get_Getter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Getter;
}
template <typename TClass, typename TProperty>
constexpr ::System::Func_2<TClass, TProperty>* const& LiteNetLib::Utils::NetSerializer_FastCallSpecific_2<TClass, TProperty>::__cordl_internal_get_Getter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Getter;
}
template <typename TClass, typename TProperty>
constexpr void LiteNetLib::Utils::NetSerializer_FastCallSpecific_2<TClass, TProperty>::__cordl_internal_set_Getter(::System::Func_2<TClass, TProperty>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Getter = value;
}
template <typename TClass, typename TProperty> constexpr ::System::Action_2<TClass, TProperty>*& LiteNetLib::Utils::NetSerializer_FastCallSpecific_2<TClass, TProperty>::__cordl_internal_get_Setter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Setter;
}
template <typename TClass, typename TProperty>
constexpr ::System::Action_2<TClass, TProperty>* const& LiteNetLib::Utils::NetSerializer_FastCallSpecific_2<TClass, TProperty>::__cordl_internal_get_Setter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Setter;
}
template <typename TClass, typename TProperty>
constexpr void LiteNetLib::Utils::NetSerializer_FastCallSpecific_2<TClass, TProperty>::__cordl_internal_set_Setter(::System::Action_2<TClass, TProperty>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Setter = value;
}
template <typename TClass, typename TProperty>
constexpr ::System::Func_2<TClass, ::ArrayW<TProperty>>*& LiteNetLib::Utils::NetSerializer_FastCallSpecific_2<TClass, TProperty>::__cordl_internal_get_GetterArr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___GetterArr;
}
template <typename TClass, typename TProperty>
constexpr ::System::Func_2<TClass, ::ArrayW<TProperty>>* const& LiteNetLib::Utils::NetSerializer_FastCallSpecific_2<TClass, TProperty>::__cordl_internal_get_GetterArr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___GetterArr;
}
template <typename TClass, typename TProperty>
constexpr void LiteNetLib::Utils::NetSerializer_FastCallSpecific_2<TClass, TProperty>::__cordl_internal_set_GetterArr(::System::Func_2<TClass, ::ArrayW<TProperty>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___GetterArr = value;
}
template <typename TClass, typename TProperty>
constexpr ::System::Action_2<TClass, ::ArrayW<TProperty>>*& LiteNetLib::Utils::NetSerializer_FastCallSpecific_2<TClass, TProperty>::__cordl_internal_get_SetterArr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SetterArr;
}
template <typename TClass, typename TProperty>
constexpr ::System::Action_2<TClass, ::ArrayW<TProperty>>* const& LiteNetLib::Utils::NetSerializer_FastCallSpecific_2<TClass, TProperty>::__cordl_internal_get_SetterArr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SetterArr;
}
template <typename TClass, typename TProperty>
constexpr void LiteNetLib::Utils::NetSerializer_FastCallSpecific_2<TClass, TProperty>::__cordl_internal_set_SetterArr(::System::Action_2<TClass, ::ArrayW<TProperty>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SetterArr = value;
}
template <typename TClass, typename TProperty>
inline ::ArrayW<TProperty> LiteNetLib::Utils::NetSerializer_FastCallSpecific_2<TClass, TProperty>::ReadArrayHelper(TClass inf, ::LiteNetLib::Utils::NetDataReader* r) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetSerializer_FastCallSpecific_2<TClass, TProperty>*>(),
                                                           { "ReadArrayHelper", {}, { ::i2c::type_of<TClass>(), ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<TProperty>>(this, ___internal_method, inf, r);
}
template <typename TClass, typename TProperty>
inline ::ArrayW<TProperty> LiteNetLib::Utils::NetSerializer_FastCallSpecific_2<TClass, TProperty>::WriteArrayHelper(TClass inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetSerializer_FastCallSpecific_2<TClass, TProperty>*>(),
                                                           { "WriteArrayHelper", {}, { ::i2c::type_of<TClass>(), ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<TProperty>>(this, ___internal_method, inf, w);
}
template <typename TClass, typename TProperty>
inline void LiteNetLib::Utils::NetSerializer_FastCallSpecific_2<TClass, TProperty>::Init(::System::Reflection::MethodInfo* getMethod, ::System::Reflection::MethodInfo* setMethod, bool isArray) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_FastCallSpecific_2<TClass, TProperty>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, getMethod, setMethod, isArray);
}
template <typename TClass, typename TProperty> inline void LiteNetLib::Utils::NetSerializer_FastCallSpecific_2<TClass, TProperty>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetSerializer_FastCallSpecific_2<TClass, TProperty>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TClass, typename TProperty>
inline ::LiteNetLib::Utils::NetSerializer_FastCallSpecific_2<TClass, TProperty>* LiteNetLib::Utils::NetSerializer_FastCallSpecific_2<TClass, TProperty>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Utils::NetSerializer_FastCallSpecific_2<TClass, TProperty>*>());
}
// Ctor Parameters []
template <typename TClass, typename TProperty> constexpr ::LiteNetLib::Utils::NetSerializer_FastCallSpecific_2<TClass, TProperty>::NetSerializer_FastCallSpecific_2() {}
template <typename TClass, typename TProperty>
inline void LiteNetLib::Utils::NetSerializer_FastCallSpecificAuto_2<TClass, TProperty>::ElementRead(::LiteNetLib::Utils::NetDataReader* r, ::by_ref<TProperty> prop) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_FastCallSpecificAuto_2<TClass, TProperty>*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, r, prop);
}
template <typename TClass, typename TProperty>
inline void LiteNetLib::Utils::NetSerializer_FastCallSpecificAuto_2<TClass, TProperty>::ElementWrite(::LiteNetLib::Utils::NetDataWriter* w, ::by_ref<TProperty> prop) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_FastCallSpecificAuto_2<TClass, TProperty>*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, w, prop);
}
template <typename TClass, typename TProperty> inline void LiteNetLib::Utils::NetSerializer_FastCallSpecificAuto_2<TClass, TProperty>::Read(TClass inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_FastCallSpecificAuto_2<TClass, TProperty>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, r);
}
template <typename TClass, typename TProperty> inline void LiteNetLib::Utils::NetSerializer_FastCallSpecificAuto_2<TClass, TProperty>::Write(TClass inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_FastCallSpecificAuto_2<TClass, TProperty>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, w);
}
template <typename TClass, typename TProperty> inline void LiteNetLib::Utils::NetSerializer_FastCallSpecificAuto_2<TClass, TProperty>::ReadArray(TClass inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_FastCallSpecificAuto_2<TClass, TProperty>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, r);
}
template <typename TClass, typename TProperty> inline void LiteNetLib::Utils::NetSerializer_FastCallSpecificAuto_2<TClass, TProperty>::WriteArray(TClass inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_FastCallSpecificAuto_2<TClass, TProperty>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, w);
}
template <typename TClass, typename TProperty> inline void LiteNetLib::Utils::NetSerializer_FastCallSpecificAuto_2<TClass, TProperty>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetSerializer_FastCallSpecificAuto_2<TClass, TProperty>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TClass, typename TProperty>
inline ::LiteNetLib::Utils::NetSerializer_FastCallSpecificAuto_2<TClass, TProperty>* LiteNetLib::Utils::NetSerializer_FastCallSpecificAuto_2<TClass, TProperty>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Utils::NetSerializer_FastCallSpecificAuto_2<TClass, TProperty>*>());
}
// Ctor Parameters []
template <typename TClass, typename TProperty> constexpr ::LiteNetLib::Utils::NetSerializer_FastCallSpecificAuto_2<TClass, TProperty>::NetSerializer_FastCallSpecificAuto_2() {}
template <typename TClass, typename TProperty>
constexpr ::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, TProperty>*& LiteNetLib::Utils::NetSerializer_FastCallStatic_2<TClass, TProperty>::__cordl_internal_get__writer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writer;
}
template <typename TClass, typename TProperty>
constexpr ::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, TProperty>* const& LiteNetLib::Utils::NetSerializer_FastCallStatic_2<TClass, TProperty>::__cordl_internal_get__writer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writer;
}
template <typename TClass, typename TProperty>
constexpr void LiteNetLib::Utils::NetSerializer_FastCallStatic_2<TClass, TProperty>::__cordl_internal_set__writer(::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, TProperty>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____writer = value;
}
template <typename TClass, typename TProperty>
constexpr ::System::Func_2<::LiteNetLib::Utils::NetDataReader*, TProperty>*& LiteNetLib::Utils::NetSerializer_FastCallStatic_2<TClass, TProperty>::__cordl_internal_get__reader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reader;
}
template <typename TClass, typename TProperty>
constexpr ::System::Func_2<::LiteNetLib::Utils::NetDataReader*, TProperty>* const& LiteNetLib::Utils::NetSerializer_FastCallStatic_2<TClass, TProperty>::__cordl_internal_get__reader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reader;
}
template <typename TClass, typename TProperty>
constexpr void LiteNetLib::Utils::NetSerializer_FastCallStatic_2<TClass, TProperty>::__cordl_internal_set__reader(::System::Func_2<::LiteNetLib::Utils::NetDataReader*, TProperty>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reader = value;
}
template <typename TClass, typename TProperty>
inline void LiteNetLib::Utils::NetSerializer_FastCallStatic_2<TClass, TProperty>::_ctor(::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, TProperty>* write,
                                                                                        ::System::Func_2<::LiteNetLib::Utils::NetDataReader*, TProperty>* read) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetSerializer_FastCallStatic_2<TClass, TProperty>*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, TProperty>*>(),
                                                                                             ::i2c::type_of<::System::Func_2<::LiteNetLib::Utils::NetDataReader*, TProperty>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, write, read);
}
template <typename TClass, typename TProperty> inline void LiteNetLib::Utils::NetSerializer_FastCallStatic_2<TClass, TProperty>::Read(TClass inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_FastCallStatic_2<TClass, TProperty>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, r);
}
template <typename TClass, typename TProperty> inline void LiteNetLib::Utils::NetSerializer_FastCallStatic_2<TClass, TProperty>::Write(TClass inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_FastCallStatic_2<TClass, TProperty>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, w);
}
template <typename TClass, typename TProperty> inline void LiteNetLib::Utils::NetSerializer_FastCallStatic_2<TClass, TProperty>::ReadArray(TClass inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_FastCallStatic_2<TClass, TProperty>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, r);
}
template <typename TClass, typename TProperty> inline void LiteNetLib::Utils::NetSerializer_FastCallStatic_2<TClass, TProperty>::WriteArray(TClass inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_FastCallStatic_2<TClass, TProperty>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, w);
}
template <typename TClass, typename TProperty>
inline ::LiteNetLib::Utils::NetSerializer_FastCallStatic_2<TClass, TProperty>*
LiteNetLib::Utils::NetSerializer_FastCallStatic_2<TClass, TProperty>::New_ctor(::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, TProperty>* write,
                                                                               ::System::Func_2<::LiteNetLib::Utils::NetDataReader*, TProperty>* read) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Utils::NetSerializer_FastCallStatic_2<TClass, TProperty>*>(write, read));
}
// Ctor Parameters []
template <typename TClass, typename TProperty> constexpr ::LiteNetLib::Utils::NetSerializer_FastCallStatic_2<TClass, TProperty>::NetSerializer_FastCallStatic_2() {}
template <typename TClass, typename TProperty> constexpr TProperty& LiteNetLib::Utils::NetSerializer_FastCallStruct_2<TClass, TProperty>::__cordl_internal_get__p() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____p;
}
template <typename TClass, typename TProperty> constexpr TProperty const& LiteNetLib::Utils::NetSerializer_FastCallStruct_2<TClass, TProperty>::__cordl_internal_get__p() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____p;
}
template <typename TClass, typename TProperty> constexpr void LiteNetLib::Utils::NetSerializer_FastCallStruct_2<TClass, TProperty>::__cordl_internal_set__p(TProperty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____p = value;
}
template <typename TClass, typename TProperty> inline void LiteNetLib::Utils::NetSerializer_FastCallStruct_2<TClass, TProperty>::Read(TClass inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_FastCallStruct_2<TClass, TProperty>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, r);
}
template <typename TClass, typename TProperty> inline void LiteNetLib::Utils::NetSerializer_FastCallStruct_2<TClass, TProperty>::Write(TClass inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_FastCallStruct_2<TClass, TProperty>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, w);
}
template <typename TClass, typename TProperty> inline void LiteNetLib::Utils::NetSerializer_FastCallStruct_2<TClass, TProperty>::ReadArray(TClass inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_FastCallStruct_2<TClass, TProperty>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, r);
}
template <typename TClass, typename TProperty> inline void LiteNetLib::Utils::NetSerializer_FastCallStruct_2<TClass, TProperty>::WriteArray(TClass inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_FastCallStruct_2<TClass, TProperty>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, w);
}
template <typename TClass, typename TProperty> inline void LiteNetLib::Utils::NetSerializer_FastCallStruct_2<TClass, TProperty>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetSerializer_FastCallStruct_2<TClass, TProperty>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TClass, typename TProperty>
inline ::LiteNetLib::Utils::NetSerializer_FastCallStruct_2<TClass, TProperty>* LiteNetLib::Utils::NetSerializer_FastCallStruct_2<TClass, TProperty>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Utils::NetSerializer_FastCallStruct_2<TClass, TProperty>*>());
}
// Ctor Parameters []
template <typename TClass, typename TProperty> constexpr ::LiteNetLib::Utils::NetSerializer_FastCallStruct_2<TClass, TProperty>::NetSerializer_FastCallStruct_2() {}
template <typename TClass, typename TProperty> constexpr ::System::Func_1<TProperty>*& LiteNetLib::Utils::NetSerializer_FastCallClass_2<TClass, TProperty>::__cordl_internal_get__constructor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____constructor;
}
template <typename TClass, typename TProperty>
constexpr ::System::Func_1<TProperty>* const& LiteNetLib::Utils::NetSerializer_FastCallClass_2<TClass, TProperty>::__cordl_internal_get__constructor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____constructor;
}
template <typename TClass, typename TProperty>
constexpr void LiteNetLib::Utils::NetSerializer_FastCallClass_2<TClass, TProperty>::__cordl_internal_set__constructor(::System::Func_1<TProperty>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____constructor = value;
}
template <typename TClass, typename TProperty> inline void LiteNetLib::Utils::NetSerializer_FastCallClass_2<TClass, TProperty>::_ctor(::System::Func_1<TProperty>* constructor) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetSerializer_FastCallClass_2<TClass, TProperty>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Func_1<TProperty>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, constructor);
}
template <typename TClass, typename TProperty> inline void LiteNetLib::Utils::NetSerializer_FastCallClass_2<TClass, TProperty>::Read(TClass inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_FastCallClass_2<TClass, TProperty>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, r);
}
template <typename TClass, typename TProperty> inline void LiteNetLib::Utils::NetSerializer_FastCallClass_2<TClass, TProperty>::Write(TClass inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_FastCallClass_2<TClass, TProperty>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, w);
}
template <typename TClass, typename TProperty> inline void LiteNetLib::Utils::NetSerializer_FastCallClass_2<TClass, TProperty>::ReadArray(TClass inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_FastCallClass_2<TClass, TProperty>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, r);
}
template <typename TClass, typename TProperty> inline void LiteNetLib::Utils::NetSerializer_FastCallClass_2<TClass, TProperty>::WriteArray(TClass inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_FastCallClass_2<TClass, TProperty>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, w);
}
template <typename TClass, typename TProperty>
inline ::LiteNetLib::Utils::NetSerializer_FastCallClass_2<TClass, TProperty>* LiteNetLib::Utils::NetSerializer_FastCallClass_2<TClass, TProperty>::New_ctor(::System::Func_1<TProperty>* constructor) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Utils::NetSerializer_FastCallClass_2<TClass, TProperty>*>(constructor));
}
// Ctor Parameters []
template <typename TClass, typename TProperty> constexpr ::LiteNetLib::Utils::NetSerializer_FastCallClass_2<TClass, TProperty>::NetSerializer_FastCallClass_2() {}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_IntSerializer_1<T>::Read(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_IntSerializer_1<T>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_IntSerializer_1<T>::Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_IntSerializer_1<T>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, w);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_IntSerializer_1<T>::ReadArray(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_IntSerializer_1<T>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_IntSerializer_1<T>::WriteArray(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_IntSerializer_1<T>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, w);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_IntSerializer_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetSerializer_IntSerializer_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::LiteNetLib::Utils::NetSerializer_IntSerializer_1<T>* LiteNetLib::Utils::NetSerializer_IntSerializer_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Utils::NetSerializer_IntSerializer_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::LiteNetLib::Utils::NetSerializer_IntSerializer_1<T>::NetSerializer_IntSerializer_1() {}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_UIntSerializer_1<T>::Read(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_UIntSerializer_1<T>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_UIntSerializer_1<T>::Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_UIntSerializer_1<T>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, w);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_UIntSerializer_1<T>::ReadArray(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_UIntSerializer_1<T>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_UIntSerializer_1<T>::WriteArray(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_UIntSerializer_1<T>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, w);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_UIntSerializer_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetSerializer_UIntSerializer_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::LiteNetLib::Utils::NetSerializer_UIntSerializer_1<T>* LiteNetLib::Utils::NetSerializer_UIntSerializer_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Utils::NetSerializer_UIntSerializer_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::LiteNetLib::Utils::NetSerializer_UIntSerializer_1<T>::NetSerializer_UIntSerializer_1() {}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_ShortSerializer_1<T>::Read(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_ShortSerializer_1<T>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_ShortSerializer_1<T>::Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_ShortSerializer_1<T>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, w);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_ShortSerializer_1<T>::ReadArray(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_ShortSerializer_1<T>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_ShortSerializer_1<T>::WriteArray(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_ShortSerializer_1<T>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, w);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_ShortSerializer_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetSerializer_ShortSerializer_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::LiteNetLib::Utils::NetSerializer_ShortSerializer_1<T>* LiteNetLib::Utils::NetSerializer_ShortSerializer_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Utils::NetSerializer_ShortSerializer_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::LiteNetLib::Utils::NetSerializer_ShortSerializer_1<T>::NetSerializer_ShortSerializer_1() {}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_UShortSerializer_1<T>::Read(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_UShortSerializer_1<T>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_UShortSerializer_1<T>::Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_UShortSerializer_1<T>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, w);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_UShortSerializer_1<T>::ReadArray(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_UShortSerializer_1<T>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_UShortSerializer_1<T>::WriteArray(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_UShortSerializer_1<T>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, w);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_UShortSerializer_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetSerializer_UShortSerializer_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::LiteNetLib::Utils::NetSerializer_UShortSerializer_1<T>* LiteNetLib::Utils::NetSerializer_UShortSerializer_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Utils::NetSerializer_UShortSerializer_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::LiteNetLib::Utils::NetSerializer_UShortSerializer_1<T>::NetSerializer_UShortSerializer_1() {}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_LongSerializer_1<T>::Read(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_LongSerializer_1<T>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_LongSerializer_1<T>::Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_LongSerializer_1<T>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, w);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_LongSerializer_1<T>::ReadArray(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_LongSerializer_1<T>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_LongSerializer_1<T>::WriteArray(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_LongSerializer_1<T>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, w);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_LongSerializer_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetSerializer_LongSerializer_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::LiteNetLib::Utils::NetSerializer_LongSerializer_1<T>* LiteNetLib::Utils::NetSerializer_LongSerializer_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Utils::NetSerializer_LongSerializer_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::LiteNetLib::Utils::NetSerializer_LongSerializer_1<T>::NetSerializer_LongSerializer_1() {}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_ULongSerializer_1<T>::Read(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_ULongSerializer_1<T>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_ULongSerializer_1<T>::Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_ULongSerializer_1<T>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, w);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_ULongSerializer_1<T>::ReadArray(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_ULongSerializer_1<T>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_ULongSerializer_1<T>::WriteArray(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_ULongSerializer_1<T>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, w);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_ULongSerializer_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetSerializer_ULongSerializer_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::LiteNetLib::Utils::NetSerializer_ULongSerializer_1<T>* LiteNetLib::Utils::NetSerializer_ULongSerializer_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Utils::NetSerializer_ULongSerializer_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::LiteNetLib::Utils::NetSerializer_ULongSerializer_1<T>::NetSerializer_ULongSerializer_1() {}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_ByteSerializer_1<T>::Read(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_ByteSerializer_1<T>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_ByteSerializer_1<T>::Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_ByteSerializer_1<T>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, w);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_ByteSerializer_1<T>::ReadArray(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_ByteSerializer_1<T>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_ByteSerializer_1<T>::WriteArray(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_ByteSerializer_1<T>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, w);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_ByteSerializer_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetSerializer_ByteSerializer_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::LiteNetLib::Utils::NetSerializer_ByteSerializer_1<T>* LiteNetLib::Utils::NetSerializer_ByteSerializer_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Utils::NetSerializer_ByteSerializer_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::LiteNetLib::Utils::NetSerializer_ByteSerializer_1<T>::NetSerializer_ByteSerializer_1() {}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_SByteSerializer_1<T>::Read(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_SByteSerializer_1<T>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_SByteSerializer_1<T>::Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_SByteSerializer_1<T>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, w);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_SByteSerializer_1<T>::ReadArray(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_SByteSerializer_1<T>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_SByteSerializer_1<T>::WriteArray(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_SByteSerializer_1<T>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, w);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_SByteSerializer_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetSerializer_SByteSerializer_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::LiteNetLib::Utils::NetSerializer_SByteSerializer_1<T>* LiteNetLib::Utils::NetSerializer_SByteSerializer_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Utils::NetSerializer_SByteSerializer_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::LiteNetLib::Utils::NetSerializer_SByteSerializer_1<T>::NetSerializer_SByteSerializer_1() {}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_FloatSerializer_1<T>::Read(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_FloatSerializer_1<T>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_FloatSerializer_1<T>::Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_FloatSerializer_1<T>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, w);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_FloatSerializer_1<T>::ReadArray(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_FloatSerializer_1<T>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_FloatSerializer_1<T>::WriteArray(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_FloatSerializer_1<T>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, w);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_FloatSerializer_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetSerializer_FloatSerializer_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::LiteNetLib::Utils::NetSerializer_FloatSerializer_1<T>* LiteNetLib::Utils::NetSerializer_FloatSerializer_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Utils::NetSerializer_FloatSerializer_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::LiteNetLib::Utils::NetSerializer_FloatSerializer_1<T>::NetSerializer_FloatSerializer_1() {}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_DoubleSerializer_1<T>::Read(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_DoubleSerializer_1<T>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_DoubleSerializer_1<T>::Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_DoubleSerializer_1<T>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, w);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_DoubleSerializer_1<T>::ReadArray(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_DoubleSerializer_1<T>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_DoubleSerializer_1<T>::WriteArray(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_DoubleSerializer_1<T>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, w);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_DoubleSerializer_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetSerializer_DoubleSerializer_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::LiteNetLib::Utils::NetSerializer_DoubleSerializer_1<T>* LiteNetLib::Utils::NetSerializer_DoubleSerializer_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Utils::NetSerializer_DoubleSerializer_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::LiteNetLib::Utils::NetSerializer_DoubleSerializer_1<T>::NetSerializer_DoubleSerializer_1() {}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_BoolSerializer_1<T>::Read(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_BoolSerializer_1<T>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_BoolSerializer_1<T>::Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_BoolSerializer_1<T>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, w);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_BoolSerializer_1<T>::ReadArray(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_BoolSerializer_1<T>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_BoolSerializer_1<T>::WriteArray(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_BoolSerializer_1<T>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, w);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_BoolSerializer_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetSerializer_BoolSerializer_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::LiteNetLib::Utils::NetSerializer_BoolSerializer_1<T>* LiteNetLib::Utils::NetSerializer_BoolSerializer_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Utils::NetSerializer_BoolSerializer_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::LiteNetLib::Utils::NetSerializer_BoolSerializer_1<T>::NetSerializer_BoolSerializer_1() {}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_CharSerializer_1<T>::ElementWrite(::LiteNetLib::Utils::NetDataWriter* w, ::by_ref<char16_t> prop) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_CharSerializer_1<T>*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, w, prop);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_CharSerializer_1<T>::ElementRead(::LiteNetLib::Utils::NetDataReader* r, ::by_ref<char16_t> prop) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_CharSerializer_1<T>*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, r, prop);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_CharSerializer_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetSerializer_CharSerializer_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::LiteNetLib::Utils::NetSerializer_CharSerializer_1<T>* LiteNetLib::Utils::NetSerializer_CharSerializer_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Utils::NetSerializer_CharSerializer_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::LiteNetLib::Utils::NetSerializer_CharSerializer_1<T>::NetSerializer_CharSerializer_1() {}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_IPEndPointSerializer_1<T>::ElementWrite(::LiteNetLib::Utils::NetDataWriter* w, ::by_ref<::System::Net::IPEndPoint*> prop) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_IPEndPointSerializer_1<T>*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, w, prop);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_IPEndPointSerializer_1<T>::ElementRead(::LiteNetLib::Utils::NetDataReader* r, ::by_ref<::System::Net::IPEndPoint*> prop) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_IPEndPointSerializer_1<T>*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, r, prop);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_IPEndPointSerializer_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetSerializer_IPEndPointSerializer_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::LiteNetLib::Utils::NetSerializer_IPEndPointSerializer_1<T>* LiteNetLib::Utils::NetSerializer_IPEndPointSerializer_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Utils::NetSerializer_IPEndPointSerializer_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::LiteNetLib::Utils::NetSerializer_IPEndPointSerializer_1<T>::NetSerializer_IPEndPointSerializer_1() {}
template <typename T> constexpr int32_t& LiteNetLib::Utils::NetSerializer_StringSerializer_1<T>::__cordl_internal_get__maxLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxLength;
}
template <typename T> constexpr int32_t const& LiteNetLib::Utils::NetSerializer_StringSerializer_1<T>::__cordl_internal_get__maxLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxLength;
}
template <typename T> constexpr void LiteNetLib::Utils::NetSerializer_StringSerializer_1<T>::__cordl_internal_set__maxLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxLength = value;
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_StringSerializer_1<T>::_ctor(int32_t maxLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetSerializer_StringSerializer_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxLength);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_StringSerializer_1<T>::Read(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_StringSerializer_1<T>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_StringSerializer_1<T>::Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_StringSerializer_1<T>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, w);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_StringSerializer_1<T>::ReadArray(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_StringSerializer_1<T>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_StringSerializer_1<T>::WriteArray(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_StringSerializer_1<T>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, w);
}
template <typename T> inline ::LiteNetLib::Utils::NetSerializer_StringSerializer_1<T>* LiteNetLib::Utils::NetSerializer_StringSerializer_1<T>::New_ctor(int32_t maxLength) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Utils::NetSerializer_StringSerializer_1<T>*>(maxLength));
}
// Ctor Parameters []
template <typename T> constexpr ::LiteNetLib::Utils::NetSerializer_StringSerializer_1<T>::NetSerializer_StringSerializer_1() {}
template <typename T> constexpr ::System::Reflection::PropertyInfo*& LiteNetLib::Utils::NetSerializer_EnumByteSerializer_1<T>::__cordl_internal_get_Property() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Property;
}
template <typename T> constexpr ::System::Reflection::PropertyInfo* const& LiteNetLib::Utils::NetSerializer_EnumByteSerializer_1<T>::__cordl_internal_get_Property() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Property;
}
template <typename T> constexpr void LiteNetLib::Utils::NetSerializer_EnumByteSerializer_1<T>::__cordl_internal_set_Property(::System::Reflection::PropertyInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Property = value;
}
template <typename T> constexpr ::System::Type*& LiteNetLib::Utils::NetSerializer_EnumByteSerializer_1<T>::__cordl_internal_get_PropertyType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PropertyType;
}
template <typename T> constexpr ::System::Type* const& LiteNetLib::Utils::NetSerializer_EnumByteSerializer_1<T>::__cordl_internal_get_PropertyType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PropertyType;
}
template <typename T> constexpr void LiteNetLib::Utils::NetSerializer_EnumByteSerializer_1<T>::__cordl_internal_set_PropertyType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PropertyType = value;
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_EnumByteSerializer_1<T>::_ctor(::System::Reflection::PropertyInfo* property, ::System::Type* propertyType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetSerializer_EnumByteSerializer_1<T>*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Reflection::PropertyInfo*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, property, propertyType);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_EnumByteSerializer_1<T>::Read(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_EnumByteSerializer_1<T>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_EnumByteSerializer_1<T>::Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_EnumByteSerializer_1<T>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, w);
}
template <typename T>
inline ::LiteNetLib::Utils::NetSerializer_EnumByteSerializer_1<T>* LiteNetLib::Utils::NetSerializer_EnumByteSerializer_1<T>::New_ctor(::System::Reflection::PropertyInfo* property,
                                                                                                                                      ::System::Type* propertyType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Utils::NetSerializer_EnumByteSerializer_1<T>*>(property, propertyType));
}
// Ctor Parameters []
template <typename T> constexpr ::LiteNetLib::Utils::NetSerializer_EnumByteSerializer_1<T>::NetSerializer_EnumByteSerializer_1() {}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_EnumIntSerializer_1<T>::_ctor(::System::Reflection::PropertyInfo* property, ::System::Type* propertyType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetSerializer_EnumIntSerializer_1<T>*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Reflection::PropertyInfo*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, property, propertyType);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_EnumIntSerializer_1<T>::Read(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_EnumIntSerializer_1<T>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_EnumIntSerializer_1<T>::Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_EnumIntSerializer_1<T>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inf, w);
}
template <typename T>
inline ::LiteNetLib::Utils::NetSerializer_EnumIntSerializer_1<T>* LiteNetLib::Utils::NetSerializer_EnumIntSerializer_1<T>::New_ctor(::System::Reflection::PropertyInfo* property,
                                                                                                                                    ::System::Type* propertyType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Utils::NetSerializer_EnumIntSerializer_1<T>*>(property, propertyType));
}
// Ctor Parameters []
template <typename T> constexpr ::LiteNetLib::Utils::NetSerializer_EnumIntSerializer_1<T>::NetSerializer_EnumIntSerializer_1() {}
template <typename T> constexpr ::ArrayW<::LiteNetLib::Utils::NetSerializer_FastCall_1<T>*>& LiteNetLib::Utils::NetSerializer_ClassInfo_1<T>::__cordl_internal_get__serializers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serializers;
}
template <typename T> constexpr ::ArrayW<::LiteNetLib::Utils::NetSerializer_FastCall_1<T>*> const& LiteNetLib::Utils::NetSerializer_ClassInfo_1<T>::__cordl_internal_get__serializers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serializers;
}
template <typename T> constexpr void LiteNetLib::Utils::NetSerializer_ClassInfo_1<T>::__cordl_internal_set__serializers(::ArrayW<::LiteNetLib::Utils::NetSerializer_FastCall_1<T>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____serializers = value;
}
template <typename T> constexpr int32_t& LiteNetLib::Utils::NetSerializer_ClassInfo_1<T>::__cordl_internal_get__membersCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____membersCount;
}
template <typename T> constexpr int32_t const& LiteNetLib::Utils::NetSerializer_ClassInfo_1<T>::__cordl_internal_get__membersCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____membersCount;
}
template <typename T> constexpr void LiteNetLib::Utils::NetSerializer_ClassInfo_1<T>::__cordl_internal_set__membersCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____membersCount = value;
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_ClassInfo_1<T>::setStaticF_Instance(::LiteNetLib::Utils::NetSerializer_ClassInfo_1<T>* value) {
  ::cordl_internals::setStaticField<::LiteNetLib::Utils::NetSerializer_ClassInfo_1<T>*, "Instance", ::LiteNetLib::Utils::NetSerializer_ClassInfo_1<T>*>(
      std::forward<::LiteNetLib::Utils::NetSerializer_ClassInfo_1<T>*>(value));
}
template <typename T> inline ::LiteNetLib::Utils::NetSerializer_ClassInfo_1<T>* LiteNetLib::Utils::NetSerializer_ClassInfo_1<T>::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::LiteNetLib::Utils::NetSerializer_ClassInfo_1<T>*, "Instance", ::LiteNetLib::Utils::NetSerializer_ClassInfo_1<T>*>();
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_ClassInfo_1<T>::_ctor(::System::Collections::Generic::List_1<::LiteNetLib::Utils::NetSerializer_FastCall_1<T>*>* serializers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetSerializer_ClassInfo_1<T>*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::LiteNetLib::Utils::NetSerializer_FastCall_1<T>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializers);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_ClassInfo_1<T>::Write(T obj, ::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetSerializer_ClassInfo_1<T>*>(),
                                                                                         { "Write", {}, { ::i2c::type_of<T>(), ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, writer);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer_ClassInfo_1<T>::Read(T obj, ::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetSerializer_ClassInfo_1<T>*>(),
                                                                                         { "Read", {}, { ::i2c::type_of<T>(), ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, reader);
}
template <typename T>
inline ::LiteNetLib::Utils::NetSerializer_ClassInfo_1<T>*
LiteNetLib::Utils::NetSerializer_ClassInfo_1<T>::New_ctor(::System::Collections::Generic::List_1<::LiteNetLib::Utils::NetSerializer_FastCall_1<T>*>* serializers) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Utils::NetSerializer_ClassInfo_1<T>*>(serializers));
}
// Ctor Parameters []
template <typename T> constexpr ::LiteNetLib::Utils::NetSerializer_ClassInfo_1<T>::NetSerializer_ClassInfo_1() {}
//  Writing Method size for method: ::LiteNetLib::Utils::NetSerializer_CustomType._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetSerializer_CustomType::*)()>(&::LiteNetLib::Utils::NetSerializer_CustomType::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58ac844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetSerializer_CustomType*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
template <typename T> inline ::LiteNetLib::Utils::NetSerializer_FastCall_1<T>* LiteNetLib::Utils::NetSerializer_CustomType::Get() {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_CustomType*>(), 4 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::NetSerializer_FastCall_1<T>*>(this, ___internal_method);
}
inline void LiteNetLib::Utils::NetSerializer_CustomType::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetSerializer_CustomType*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::LiteNetLib::Utils::NetSerializer_CustomType* LiteNetLib::Utils::NetSerializer_CustomType::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Utils::NetSerializer_CustomType*>());
}
// Ctor Parameters []
constexpr ::LiteNetLib::Utils::NetSerializer_CustomType::NetSerializer_CustomType() {}
template <typename TProperty> template <typename T> inline ::LiteNetLib::Utils::NetSerializer_FastCall_1<T>* LiteNetLib::Utils::NetSerializer_CustomTypeStruct_1<TProperty>::Get() {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_CustomTypeStruct_1<TProperty>*>(), 4 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::NetSerializer_FastCall_1<T>*>(this, ___internal_method);
}
template <typename TProperty> inline void LiteNetLib::Utils::NetSerializer_CustomTypeStruct_1<TProperty>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetSerializer_CustomTypeStruct_1<TProperty>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TProperty> inline ::LiteNetLib::Utils::NetSerializer_CustomTypeStruct_1<TProperty>* LiteNetLib::Utils::NetSerializer_CustomTypeStruct_1<TProperty>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Utils::NetSerializer_CustomTypeStruct_1<TProperty>*>());
}
// Ctor Parameters []
template <typename TProperty> constexpr ::LiteNetLib::Utils::NetSerializer_CustomTypeStruct_1<TProperty>::NetSerializer_CustomTypeStruct_1() {}
template <typename TProperty> constexpr ::System::Func_1<TProperty>*& LiteNetLib::Utils::NetSerializer_CustomTypeClass_1<TProperty>::__cordl_internal_get__constructor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____constructor;
}
template <typename TProperty> constexpr ::System::Func_1<TProperty>* const& LiteNetLib::Utils::NetSerializer_CustomTypeClass_1<TProperty>::__cordl_internal_get__constructor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____constructor;
}
template <typename TProperty> constexpr void LiteNetLib::Utils::NetSerializer_CustomTypeClass_1<TProperty>::__cordl_internal_set__constructor(::System::Func_1<TProperty>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____constructor = value;
}
template <typename TProperty> inline void LiteNetLib::Utils::NetSerializer_CustomTypeClass_1<TProperty>::_ctor(::System::Func_1<TProperty>* constructor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetSerializer_CustomTypeClass_1<TProperty>*>(), { ".ctor", {}, { ::i2c::type_of<::System::Func_1<TProperty>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, constructor);
}
template <typename TProperty> template <typename T> inline ::LiteNetLib::Utils::NetSerializer_FastCall_1<T>* LiteNetLib::Utils::NetSerializer_CustomTypeClass_1<TProperty>::Get() {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_CustomTypeClass_1<TProperty>*>(), 4 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::NetSerializer_FastCall_1<T>*>(this, ___internal_method);
}
template <typename TProperty>
inline ::LiteNetLib::Utils::NetSerializer_CustomTypeClass_1<TProperty>* LiteNetLib::Utils::NetSerializer_CustomTypeClass_1<TProperty>::New_ctor(::System::Func_1<TProperty>* constructor) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Utils::NetSerializer_CustomTypeClass_1<TProperty>*>(constructor));
}
// Ctor Parameters []
template <typename TProperty> constexpr ::LiteNetLib::Utils::NetSerializer_CustomTypeClass_1<TProperty>::NetSerializer_CustomTypeClass_1() {}
template <typename TProperty>
constexpr ::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, TProperty>*& LiteNetLib::Utils::NetSerializer_CustomTypeStatic_1<TProperty>::__cordl_internal_get__writer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writer;
}
template <typename TProperty>
constexpr ::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, TProperty>* const& LiteNetLib::Utils::NetSerializer_CustomTypeStatic_1<TProperty>::__cordl_internal_get__writer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writer;
}
template <typename TProperty>
constexpr void LiteNetLib::Utils::NetSerializer_CustomTypeStatic_1<TProperty>::__cordl_internal_set__writer(::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, TProperty>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____writer = value;
}
template <typename TProperty>
constexpr ::System::Func_2<::LiteNetLib::Utils::NetDataReader*, TProperty>*& LiteNetLib::Utils::NetSerializer_CustomTypeStatic_1<TProperty>::__cordl_internal_get__reader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reader;
}
template <typename TProperty>
constexpr ::System::Func_2<::LiteNetLib::Utils::NetDataReader*, TProperty>* const& LiteNetLib::Utils::NetSerializer_CustomTypeStatic_1<TProperty>::__cordl_internal_get__reader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reader;
}
template <typename TProperty>
constexpr void LiteNetLib::Utils::NetSerializer_CustomTypeStatic_1<TProperty>::__cordl_internal_set__reader(::System::Func_2<::LiteNetLib::Utils::NetDataReader*, TProperty>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reader = value;
}
template <typename TProperty>
inline void LiteNetLib::Utils::NetSerializer_CustomTypeStatic_1<TProperty>::_ctor(::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, TProperty>* writer,
                                                                                  ::System::Func_2<::LiteNetLib::Utils::NetDataReader*, TProperty>* reader) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetSerializer_CustomTypeStatic_1<TProperty>*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, TProperty>*>(),
                                                                                             ::i2c::type_of<::System::Func_2<::LiteNetLib::Utils::NetDataReader*, TProperty>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, reader);
}
template <typename TProperty> template <typename T> inline ::LiteNetLib::Utils::NetSerializer_FastCall_1<T>* LiteNetLib::Utils::NetSerializer_CustomTypeStatic_1<TProperty>::Get() {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::NetSerializer_CustomTypeStatic_1<TProperty>*>(), 4 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::NetSerializer_FastCall_1<T>*>(this, ___internal_method);
}
template <typename TProperty>
inline ::LiteNetLib::Utils::NetSerializer_CustomTypeStatic_1<TProperty>*
LiteNetLib::Utils::NetSerializer_CustomTypeStatic_1<TProperty>::New_ctor(::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, TProperty>* writer,
                                                                         ::System::Func_2<::LiteNetLib::Utils::NetDataReader*, TProperty>* reader) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Utils::NetSerializer_CustomTypeStatic_1<TProperty>*>(writer, reader));
}
// Ctor Parameters []
template <typename TProperty> constexpr ::LiteNetLib::Utils::NetSerializer_CustomTypeStatic_1<TProperty>::NetSerializer_CustomTypeStatic_1() {}
//  Writing Method size for method: ::LiteNetLib::Utils::NetSerializer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetSerializer::*)()>(&::LiteNetLib::Utils::NetSerializer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58ac298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetSerializer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetSerializer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetSerializer::*)(int32_t)>(&::LiteNetLib::Utils::NetSerializer::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x58ac3a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetSerializer*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::LiteNetLib::Utils::NetDataWriter*& LiteNetLib::Utils::NetSerializer::__cordl_internal_get__writer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writer;
}
constexpr ::LiteNetLib::Utils::NetDataWriter* const& LiteNetLib::Utils::NetSerializer::__cordl_internal_get__writer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writer;
}
constexpr void LiteNetLib::Utils::NetSerializer::__cordl_internal_set__writer(::LiteNetLib::Utils::NetDataWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____writer = value;
}
constexpr int32_t& LiteNetLib::Utils::NetSerializer::__cordl_internal_get__maxStringLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxStringLength;
}
constexpr int32_t const& LiteNetLib::Utils::NetSerializer::__cordl_internal_get__maxStringLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxStringLength;
}
constexpr void LiteNetLib::Utils::NetSerializer::__cordl_internal_set__maxStringLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxStringLength = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::LiteNetLib::Utils::NetSerializer_CustomType*>*& LiteNetLib::Utils::NetSerializer::__cordl_internal_get__registeredTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____registeredTypes;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::LiteNetLib::Utils::NetSerializer_CustomType*>* const&
LiteNetLib::Utils::NetSerializer::__cordl_internal_get__registeredTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____registeredTypes;
}
constexpr void
LiteNetLib::Utils::NetSerializer::__cordl_internal_set__registeredTypes(::System::Collections::Generic::Dictionary_2<::System::Type*, ::LiteNetLib::Utils::NetSerializer_CustomType*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____registeredTypes = value;
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer::RegisterNestedType() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetSerializer*>(), { "RegisterNestedType", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer::RegisterNestedType(::System::Func_1<T>* constructor) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetSerializer*>(), { "RegisterNestedType", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Func_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, constructor);
}
template <typename T>
inline void LiteNetLib::Utils::NetSerializer::RegisterNestedType(::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, T>* writer, ::System::Func_2<::LiteNetLib::Utils::NetDataReader*, T>* reader) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetSerializer*>(), { "RegisterNestedType",
                                                                                                        { ::i2c::class_of<T>() },
                                                                                                        { ::i2c::type_of<::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, T>*>(),
                                                                                                          ::i2c::type_of<::System::Func_2<::LiteNetLib::Utils::NetDataReader*, T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, reader);
}
inline void LiteNetLib::Utils::NetSerializer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetSerializer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LiteNetLib::Utils::NetSerializer::_ctor(int32_t maxStringLength) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetSerializer*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxStringLength);
}
template <typename T> inline ::LiteNetLib::Utils::NetSerializer_ClassInfo_1<T>* LiteNetLib::Utils::NetSerializer::RegisterInternal() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetSerializer*>(), { "RegisterInternal", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::NetSerializer_ClassInfo_1<T>*>(this, ___internal_method);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer::Register() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetSerializer*>(), { "Register", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline T LiteNetLib::Utils::NetSerializer::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetSerializer*>(),
                                                                                              { "Deserialize", { ::i2c::class_of<T>() }, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, reader);
}
template <typename T> inline bool LiteNetLib::Utils::NetSerializer::Deserialize(::LiteNetLib::Utils::NetDataReader* reader, T target) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetSerializer*>(),
                                                           { "Deserialize", { ::i2c::class_of<T>() }, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, reader, target);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer::Serialize(::LiteNetLib::Utils::NetDataWriter* writer, T obj) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetSerializer*>(),
                                                           { "Serialize", { ::i2c::class_of<T>() }, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, obj);
}
template <typename T> inline ::ArrayW<uint8_t> LiteNetLib::Utils::NetSerializer::Serialize(T obj) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetSerializer*>(), { "Serialize", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, obj);
}
inline ::LiteNetLib::Utils::NetSerializer* LiteNetLib::Utils::NetSerializer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Utils::NetSerializer*>());
}
inline ::LiteNetLib::Utils::NetSerializer* LiteNetLib::Utils::NetSerializer::New_ctor(int32_t maxStringLength) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Utils::NetSerializer*>(maxStringLength));
}
// Ctor Parameters []
constexpr ::LiteNetLib::Utils::NetSerializer::NetSerializer() {}
