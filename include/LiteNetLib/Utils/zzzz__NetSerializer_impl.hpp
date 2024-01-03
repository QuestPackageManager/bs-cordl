#pragma once
#include "LiteNetLib/Utils/zzzz__NetSerializer_impl.hpp"
#include "System/Net/zzzz__IPEndPoint_impl.hpp"
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
template <typename T> constexpr bool& LiteNetLib::Utils::__NetSerializer__FastCall_1<T>::__get_IsArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsArray;
}
template <typename T> constexpr bool const& LiteNetLib::Utils::__NetSerializer__FastCall_1<T>::__get_IsArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsArray;
}
template <typename T> constexpr void LiteNetLib::Utils::__NetSerializer__FastCall_1<T>::__set_IsArray(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IsArray = value;
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__FastCall_1<T>::Init(::System::Reflection::MethodInfo* getMethod, ::System::Reflection::MethodInfo* setMethod, bool isArray) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, getMethod, setMethod, isArray);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__FastCall_1<T>::Read(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__FastCall_1<T>::Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, w);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__FastCall_1<T>::ReadArray(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__FastCall_1<T>::WriteArray(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, w);
}
template <typename T> inline ::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>* LiteNetLib::Utils::__NetSerializer__FastCall_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*>());
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__FastCall_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>::__NetSerializer__FastCall_1() {}
template <typename TClass, typename TProperty> constexpr ::System::Func_2<TClass, TProperty>*& LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass, TProperty>::__get_Getter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Getter;
}
template <typename TClass, typename TProperty>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TClass, TProperty>*> const& LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass, TProperty>::__get_Getter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Getter;
}
template <typename TClass, typename TProperty> constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass, TProperty>::__set_Getter(::System::Func_2<TClass, TProperty>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Getter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TClass, typename TProperty> constexpr ::System::Action_2<TClass, TProperty>*& LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass, TProperty>::__get_Setter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Setter;
}
template <typename TClass, typename TProperty>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<TClass, TProperty>*> const& LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass, TProperty>::__get_Setter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Setter;
}
template <typename TClass, typename TProperty> constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass, TProperty>::__set_Setter(::System::Action_2<TClass, TProperty>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Setter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TClass, typename TProperty>
constexpr ::System::Func_2<TClass, ::ArrayW<TProperty, ::Array<TProperty>*>>*& LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass, TProperty>::__get_GetterArr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___GetterArr;
}
template <typename TClass, typename TProperty>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TClass, ::ArrayW<TProperty, ::Array<TProperty>*>>*> const&
LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass, TProperty>::__get_GetterArr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___GetterArr;
}
template <typename TClass, typename TProperty>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass, TProperty>::__set_GetterArr(::System::Func_2<TClass, ::ArrayW<TProperty, ::Array<TProperty>*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___GetterArr)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TClass, typename TProperty>
constexpr ::System::Action_2<TClass, ::ArrayW<TProperty, ::Array<TProperty>*>>*& LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass, TProperty>::__get_SetterArr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SetterArr;
}
template <typename TClass, typename TProperty>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<TClass, ::ArrayW<TProperty, ::Array<TProperty>*>>*> const&
LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass, TProperty>::__get_SetterArr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SetterArr;
}
template <typename TClass, typename TProperty>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass, TProperty>::__set_SetterArr(::System::Action_2<TClass, ::ArrayW<TProperty, ::Array<TProperty>*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SetterArr)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TClass, typename TProperty>
inline ::ArrayW<TProperty, ::Array<TProperty>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass, TProperty>::ReadArrayHelper(TClass inf, ::LiteNetLib::Utils::NetDataReader* r) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass, TProperty>*>::get(), "ReadArrayHelper", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<TProperty, ::Array<TProperty>*>, false>(this, ___internal_method, inf, r);
}
template <typename TClass, typename TProperty>
inline ::ArrayW<TProperty, ::Array<TProperty>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass, TProperty>::WriteArrayHelper(TClass inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass, TProperty>*>::get(), "WriteArrayHelper", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<TProperty, ::Array<TProperty>*>, false>(this, ___internal_method, inf, w);
}
template <typename TClass, typename TProperty>
inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass, TProperty>::Init(::System::Reflection::MethodInfo* getMethod, ::System::Reflection::MethodInfo* setMethod, bool isArray) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass, TProperty>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, getMethod, setMethod, isArray);
}
template <typename TClass, typename TProperty>
inline ::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass, TProperty>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass, TProperty>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass, TProperty>*>());
}
template <typename TClass, typename TProperty> inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass, TProperty>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass, TProperty>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TClass, typename TProperty> constexpr ::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass, TProperty>::__NetSerializer__FastCallSpecific_2() {}
template <typename TClass, typename TProperty>
inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass, TProperty>::ElementRead(::LiteNetLib::Utils::NetDataReader* r, ByRef<TProperty> prop) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass, TProperty>*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, r, prop);
}
template <typename TClass, typename TProperty>
inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass, TProperty>::ElementWrite(::LiteNetLib::Utils::NetDataWriter* w, ByRef<TProperty> prop) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass, TProperty>*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, w, prop);
}
template <typename TClass, typename TProperty> inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass, TProperty>::Read(TClass inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass, TProperty>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, r);
}
template <typename TClass, typename TProperty> inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass, TProperty>::Write(TClass inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass, TProperty>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, w);
}
template <typename TClass, typename TProperty> inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass, TProperty>::ReadArray(TClass inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass, TProperty>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, r);
}
template <typename TClass, typename TProperty>
inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass, TProperty>::WriteArray(TClass inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass, TProperty>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, w);
}
template <typename TClass, typename TProperty>
inline ::LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass, TProperty>* LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass, TProperty>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass, TProperty>*>());
}
template <typename TClass, typename TProperty> inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass, TProperty>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass, TProperty>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TClass, typename TProperty> constexpr ::LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass, TProperty>::__NetSerializer__FastCallSpecificAuto_2() {}
template <typename TClass, typename TProperty>
constexpr ::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, TProperty>*& LiteNetLib::Utils::__NetSerializer__FastCallStatic_2<TClass, TProperty>::__get__writer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writer;
}
template <typename TClass, typename TProperty>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, TProperty>*> const&
LiteNetLib::Utils::__NetSerializer__FastCallStatic_2<TClass, TProperty>::__get__writer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writer;
}
template <typename TClass, typename TProperty>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallStatic_2<TClass, TProperty>::__set__writer(::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, TProperty>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____writer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TClass, typename TProperty>
constexpr ::System::Func_2<::LiteNetLib::Utils::NetDataReader*, TProperty>*& LiteNetLib::Utils::__NetSerializer__FastCallStatic_2<TClass, TProperty>::__get__reader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reader;
}
template <typename TClass, typename TProperty>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::LiteNetLib::Utils::NetDataReader*, TProperty>*> const&
LiteNetLib::Utils::__NetSerializer__FastCallStatic_2<TClass, TProperty>::__get__reader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reader;
}
template <typename TClass, typename TProperty>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallStatic_2<TClass, TProperty>::__set__reader(::System::Func_2<::LiteNetLib::Utils::NetDataReader*, TProperty>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____reader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TClass, typename TProperty>
inline ::LiteNetLib::Utils::__NetSerializer__FastCallStatic_2<TClass, TProperty>*
LiteNetLib::Utils::__NetSerializer__FastCallStatic_2<TClass, TProperty>::New_ctor(::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, TProperty>* write,
                                                                                  ::System::Func_2<::LiteNetLib::Utils::NetDataReader*, TProperty>* read) {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__FastCallStatic_2<TClass, TProperty>*>(write, read));
}
template <typename TClass, typename TProperty>
inline void LiteNetLib::Utils::__NetSerializer__FastCallStatic_2<TClass, TProperty>::_ctor(::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, TProperty>* write,
                                                                                           ::System::Func_2<::LiteNetLib::Utils::NetDataReader*, TProperty>* read) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallStatic_2<TClass, TProperty>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, TProperty>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::LiteNetLib::Utils::NetDataReader*, TProperty>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, write, read);
}
template <typename TClass, typename TProperty> inline void LiteNetLib::Utils::__NetSerializer__FastCallStatic_2<TClass, TProperty>::Read(TClass inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallStatic_2<TClass, TProperty>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, r);
}
template <typename TClass, typename TProperty> inline void LiteNetLib::Utils::__NetSerializer__FastCallStatic_2<TClass, TProperty>::Write(TClass inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallStatic_2<TClass, TProperty>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, w);
}
template <typename TClass, typename TProperty> inline void LiteNetLib::Utils::__NetSerializer__FastCallStatic_2<TClass, TProperty>::ReadArray(TClass inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallStatic_2<TClass, TProperty>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, r);
}
template <typename TClass, typename TProperty> inline void LiteNetLib::Utils::__NetSerializer__FastCallStatic_2<TClass, TProperty>::WriteArray(TClass inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallStatic_2<TClass, TProperty>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, w);
}
// Ctor Parameters []
template <typename TClass, typename TProperty> constexpr ::LiteNetLib::Utils::__NetSerializer__FastCallStatic_2<TClass, TProperty>::__NetSerializer__FastCallStatic_2() {}
template <typename TClass, typename TProperty> constexpr TProperty& LiteNetLib::Utils::__NetSerializer__FastCallStruct_2<TClass, TProperty>::__get__p() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____p;
}
template <typename TClass, typename TProperty> constexpr TProperty const& LiteNetLib::Utils::__NetSerializer__FastCallStruct_2<TClass, TProperty>::__get__p() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____p;
}
template <typename TClass, typename TProperty> constexpr void LiteNetLib::Utils::__NetSerializer__FastCallStruct_2<TClass, TProperty>::__set__p(TProperty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____p)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TClass, typename TProperty> inline void LiteNetLib::Utils::__NetSerializer__FastCallStruct_2<TClass, TProperty>::Read(TClass inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallStruct_2<TClass, TProperty>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, r);
}
template <typename TClass, typename TProperty> inline void LiteNetLib::Utils::__NetSerializer__FastCallStruct_2<TClass, TProperty>::Write(TClass inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallStruct_2<TClass, TProperty>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, w);
}
template <typename TClass, typename TProperty> inline void LiteNetLib::Utils::__NetSerializer__FastCallStruct_2<TClass, TProperty>::ReadArray(TClass inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallStruct_2<TClass, TProperty>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, r);
}
template <typename TClass, typename TProperty> inline void LiteNetLib::Utils::__NetSerializer__FastCallStruct_2<TClass, TProperty>::WriteArray(TClass inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallStruct_2<TClass, TProperty>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, w);
}
template <typename TClass, typename TProperty>
inline ::LiteNetLib::Utils::__NetSerializer__FastCallStruct_2<TClass, TProperty>* LiteNetLib::Utils::__NetSerializer__FastCallStruct_2<TClass, TProperty>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__FastCallStruct_2<TClass, TProperty>*>());
}
template <typename TClass, typename TProperty> inline void LiteNetLib::Utils::__NetSerializer__FastCallStruct_2<TClass, TProperty>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallStruct_2<TClass, TProperty>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TClass, typename TProperty> constexpr ::LiteNetLib::Utils::__NetSerializer__FastCallStruct_2<TClass, TProperty>::__NetSerializer__FastCallStruct_2() {}
template <typename TClass, typename TProperty> constexpr ::System::Func_1<TProperty>*& LiteNetLib::Utils::__NetSerializer__FastCallClass_2<TClass, TProperty>::__get__constructor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____constructor;
}
template <typename TClass, typename TProperty>
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<TProperty>*> const& LiteNetLib::Utils::__NetSerializer__FastCallClass_2<TClass, TProperty>::__get__constructor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____constructor;
}
template <typename TClass, typename TProperty> constexpr void LiteNetLib::Utils::__NetSerializer__FastCallClass_2<TClass, TProperty>::__set__constructor(::System::Func_1<TProperty>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____constructor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TClass, typename TProperty>
inline ::LiteNetLib::Utils::__NetSerializer__FastCallClass_2<TClass, TProperty>*
LiteNetLib::Utils::__NetSerializer__FastCallClass_2<TClass, TProperty>::New_ctor(::System::Func_1<TProperty>* constructor) {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__FastCallClass_2<TClass, TProperty>*>(constructor));
}
template <typename TClass, typename TProperty> inline void LiteNetLib::Utils::__NetSerializer__FastCallClass_2<TClass, TProperty>::_ctor(::System::Func_1<TProperty>* constructor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallClass_2<TClass, TProperty>*>::get(), ".ctor",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<TProperty>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, constructor);
}
template <typename TClass, typename TProperty> inline void LiteNetLib::Utils::__NetSerializer__FastCallClass_2<TClass, TProperty>::Read(TClass inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallClass_2<TClass, TProperty>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, r);
}
template <typename TClass, typename TProperty> inline void LiteNetLib::Utils::__NetSerializer__FastCallClass_2<TClass, TProperty>::Write(TClass inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallClass_2<TClass, TProperty>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, w);
}
template <typename TClass, typename TProperty> inline void LiteNetLib::Utils::__NetSerializer__FastCallClass_2<TClass, TProperty>::ReadArray(TClass inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallClass_2<TClass, TProperty>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, r);
}
template <typename TClass, typename TProperty> inline void LiteNetLib::Utils::__NetSerializer__FastCallClass_2<TClass, TProperty>::WriteArray(TClass inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallClass_2<TClass, TProperty>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, w);
}
// Ctor Parameters []
template <typename TClass, typename TProperty> constexpr ::LiteNetLib::Utils::__NetSerializer__FastCallClass_2<TClass, TProperty>::__NetSerializer__FastCallClass_2() {}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__IntSerializer_1<T>::Read(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__IntSerializer_1<T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__IntSerializer_1<T>::Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__IntSerializer_1<T>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, w);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__IntSerializer_1<T>::ReadArray(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__IntSerializer_1<T>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__IntSerializer_1<T>::WriteArray(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__IntSerializer_1<T>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, w);
}
template <typename T> inline ::LiteNetLib::Utils::__NetSerializer__IntSerializer_1<T>* LiteNetLib::Utils::__NetSerializer__IntSerializer_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__IntSerializer_1<T>*>());
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__IntSerializer_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__IntSerializer_1<T>*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::LiteNetLib::Utils::__NetSerializer__IntSerializer_1<T>::__NetSerializer__IntSerializer_1() {}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__UIntSerializer_1<T>::Read(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__UIntSerializer_1<T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__UIntSerializer_1<T>::Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__UIntSerializer_1<T>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, w);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__UIntSerializer_1<T>::ReadArray(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__UIntSerializer_1<T>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__UIntSerializer_1<T>::WriteArray(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__UIntSerializer_1<T>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, w);
}
template <typename T> inline ::LiteNetLib::Utils::__NetSerializer__UIntSerializer_1<T>* LiteNetLib::Utils::__NetSerializer__UIntSerializer_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__UIntSerializer_1<T>*>());
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__UIntSerializer_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__UIntSerializer_1<T>*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::LiteNetLib::Utils::__NetSerializer__UIntSerializer_1<T>::__NetSerializer__UIntSerializer_1() {}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__ShortSerializer_1<T>::Read(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__ShortSerializer_1<T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__ShortSerializer_1<T>::Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__ShortSerializer_1<T>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, w);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__ShortSerializer_1<T>::ReadArray(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__ShortSerializer_1<T>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__ShortSerializer_1<T>::WriteArray(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__ShortSerializer_1<T>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, w);
}
template <typename T> inline ::LiteNetLib::Utils::__NetSerializer__ShortSerializer_1<T>* LiteNetLib::Utils::__NetSerializer__ShortSerializer_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__ShortSerializer_1<T>*>());
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__ShortSerializer_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__ShortSerializer_1<T>*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::LiteNetLib::Utils::__NetSerializer__ShortSerializer_1<T>::__NetSerializer__ShortSerializer_1() {}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__UShortSerializer_1<T>::Read(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__UShortSerializer_1<T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__UShortSerializer_1<T>::Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__UShortSerializer_1<T>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, w);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__UShortSerializer_1<T>::ReadArray(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__UShortSerializer_1<T>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__UShortSerializer_1<T>::WriteArray(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__UShortSerializer_1<T>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, w);
}
template <typename T> inline ::LiteNetLib::Utils::__NetSerializer__UShortSerializer_1<T>* LiteNetLib::Utils::__NetSerializer__UShortSerializer_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__UShortSerializer_1<T>*>());
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__UShortSerializer_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__UShortSerializer_1<T>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::LiteNetLib::Utils::__NetSerializer__UShortSerializer_1<T>::__NetSerializer__UShortSerializer_1() {}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__LongSerializer_1<T>::Read(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__LongSerializer_1<T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__LongSerializer_1<T>::Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__LongSerializer_1<T>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, w);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__LongSerializer_1<T>::ReadArray(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__LongSerializer_1<T>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__LongSerializer_1<T>::WriteArray(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__LongSerializer_1<T>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, w);
}
template <typename T> inline ::LiteNetLib::Utils::__NetSerializer__LongSerializer_1<T>* LiteNetLib::Utils::__NetSerializer__LongSerializer_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__LongSerializer_1<T>*>());
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__LongSerializer_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__LongSerializer_1<T>*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::LiteNetLib::Utils::__NetSerializer__LongSerializer_1<T>::__NetSerializer__LongSerializer_1() {}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__ULongSerializer_1<T>::Read(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__ULongSerializer_1<T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__ULongSerializer_1<T>::Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__ULongSerializer_1<T>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, w);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__ULongSerializer_1<T>::ReadArray(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__ULongSerializer_1<T>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__ULongSerializer_1<T>::WriteArray(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__ULongSerializer_1<T>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, w);
}
template <typename T> inline ::LiteNetLib::Utils::__NetSerializer__ULongSerializer_1<T>* LiteNetLib::Utils::__NetSerializer__ULongSerializer_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__ULongSerializer_1<T>*>());
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__ULongSerializer_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__ULongSerializer_1<T>*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::LiteNetLib::Utils::__NetSerializer__ULongSerializer_1<T>::__NetSerializer__ULongSerializer_1() {}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__ByteSerializer_1<T>::Read(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__ByteSerializer_1<T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__ByteSerializer_1<T>::Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__ByteSerializer_1<T>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, w);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__ByteSerializer_1<T>::ReadArray(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__ByteSerializer_1<T>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__ByteSerializer_1<T>::WriteArray(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__ByteSerializer_1<T>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, w);
}
template <typename T> inline ::LiteNetLib::Utils::__NetSerializer__ByteSerializer_1<T>* LiteNetLib::Utils::__NetSerializer__ByteSerializer_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__ByteSerializer_1<T>*>());
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__ByteSerializer_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__ByteSerializer_1<T>*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::LiteNetLib::Utils::__NetSerializer__ByteSerializer_1<T>::__NetSerializer__ByteSerializer_1() {}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__SByteSerializer_1<T>::Read(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__SByteSerializer_1<T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__SByteSerializer_1<T>::Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__SByteSerializer_1<T>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, w);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__SByteSerializer_1<T>::ReadArray(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__SByteSerializer_1<T>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__SByteSerializer_1<T>::WriteArray(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__SByteSerializer_1<T>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, w);
}
template <typename T> inline ::LiteNetLib::Utils::__NetSerializer__SByteSerializer_1<T>* LiteNetLib::Utils::__NetSerializer__SByteSerializer_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__SByteSerializer_1<T>*>());
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__SByteSerializer_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__SByteSerializer_1<T>*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::LiteNetLib::Utils::__NetSerializer__SByteSerializer_1<T>::__NetSerializer__SByteSerializer_1() {}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__FloatSerializer_1<T>::Read(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FloatSerializer_1<T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__FloatSerializer_1<T>::Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FloatSerializer_1<T>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, w);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__FloatSerializer_1<T>::ReadArray(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FloatSerializer_1<T>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__FloatSerializer_1<T>::WriteArray(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FloatSerializer_1<T>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, w);
}
template <typename T> inline ::LiteNetLib::Utils::__NetSerializer__FloatSerializer_1<T>* LiteNetLib::Utils::__NetSerializer__FloatSerializer_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__FloatSerializer_1<T>*>());
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__FloatSerializer_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FloatSerializer_1<T>*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::LiteNetLib::Utils::__NetSerializer__FloatSerializer_1<T>::__NetSerializer__FloatSerializer_1() {}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__DoubleSerializer_1<T>::Read(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__DoubleSerializer_1<T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__DoubleSerializer_1<T>::Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__DoubleSerializer_1<T>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, w);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__DoubleSerializer_1<T>::ReadArray(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__DoubleSerializer_1<T>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__DoubleSerializer_1<T>::WriteArray(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__DoubleSerializer_1<T>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, w);
}
template <typename T> inline ::LiteNetLib::Utils::__NetSerializer__DoubleSerializer_1<T>* LiteNetLib::Utils::__NetSerializer__DoubleSerializer_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__DoubleSerializer_1<T>*>());
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__DoubleSerializer_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__DoubleSerializer_1<T>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::LiteNetLib::Utils::__NetSerializer__DoubleSerializer_1<T>::__NetSerializer__DoubleSerializer_1() {}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__BoolSerializer_1<T>::Read(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__BoolSerializer_1<T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__BoolSerializer_1<T>::Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__BoolSerializer_1<T>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, w);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__BoolSerializer_1<T>::ReadArray(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__BoolSerializer_1<T>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__BoolSerializer_1<T>::WriteArray(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__BoolSerializer_1<T>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, w);
}
template <typename T> inline ::LiteNetLib::Utils::__NetSerializer__BoolSerializer_1<T>* LiteNetLib::Utils::__NetSerializer__BoolSerializer_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__BoolSerializer_1<T>*>());
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__BoolSerializer_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__BoolSerializer_1<T>*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::LiteNetLib::Utils::__NetSerializer__BoolSerializer_1<T>::__NetSerializer__BoolSerializer_1() {}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__CharSerializer_1<T>::ElementWrite(::LiteNetLib::Utils::NetDataWriter* w, ByRef<char16_t> prop) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__CharSerializer_1<T>*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, w, prop);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__CharSerializer_1<T>::ElementRead(::LiteNetLib::Utils::NetDataReader* r, ByRef<char16_t> prop) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__CharSerializer_1<T>*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, r, prop);
}
template <typename T> inline ::LiteNetLib::Utils::__NetSerializer__CharSerializer_1<T>* LiteNetLib::Utils::__NetSerializer__CharSerializer_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__CharSerializer_1<T>*>());
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__CharSerializer_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__CharSerializer_1<T>*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::LiteNetLib::Utils::__NetSerializer__CharSerializer_1<T>::__NetSerializer__CharSerializer_1() {}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__IPEndPointSerializer_1<T>::ElementWrite(::LiteNetLib::Utils::NetDataWriter* w, ByRef<::System::Net::IPEndPoint*> prop) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__IPEndPointSerializer_1<T>*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, w, prop);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__IPEndPointSerializer_1<T>::ElementRead(::LiteNetLib::Utils::NetDataReader* r, ByRef<::System::Net::IPEndPoint*> prop) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__IPEndPointSerializer_1<T>*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, r, prop);
}
template <typename T> inline ::LiteNetLib::Utils::__NetSerializer__IPEndPointSerializer_1<T>* LiteNetLib::Utils::__NetSerializer__IPEndPointSerializer_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__IPEndPointSerializer_1<T>*>());
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__IPEndPointSerializer_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__IPEndPointSerializer_1<T>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::LiteNetLib::Utils::__NetSerializer__IPEndPointSerializer_1<T>::__NetSerializer__IPEndPointSerializer_1() {}
template <typename T> constexpr int32_t& LiteNetLib::Utils::__NetSerializer__StringSerializer_1<T>::__get__maxLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxLength;
}
template <typename T> constexpr int32_t const& LiteNetLib::Utils::__NetSerializer__StringSerializer_1<T>::__get__maxLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxLength;
}
template <typename T> constexpr void LiteNetLib::Utils::__NetSerializer__StringSerializer_1<T>::__set__maxLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxLength = value;
}
template <typename T> inline ::LiteNetLib::Utils::__NetSerializer__StringSerializer_1<T>* LiteNetLib::Utils::__NetSerializer__StringSerializer_1<T>::New_ctor(int32_t maxLength) {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__StringSerializer_1<T>*>(maxLength));
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__StringSerializer_1<T>::_ctor(int32_t maxLength) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__StringSerializer_1<T>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, maxLength);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__StringSerializer_1<T>::Read(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__StringSerializer_1<T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__StringSerializer_1<T>::Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__StringSerializer_1<T>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, w);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__StringSerializer_1<T>::ReadArray(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__StringSerializer_1<T>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__StringSerializer_1<T>::WriteArray(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__StringSerializer_1<T>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, w);
}
// Ctor Parameters []
template <typename T> constexpr ::LiteNetLib::Utils::__NetSerializer__StringSerializer_1<T>::__NetSerializer__StringSerializer_1() {}
template <typename T> constexpr ::System::Reflection::PropertyInfo*& LiteNetLib::Utils::__NetSerializer__EnumByteSerializer_1<T>::__get_Property() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Property;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Reflection::PropertyInfo*> const& LiteNetLib::Utils::__NetSerializer__EnumByteSerializer_1<T>::__get_Property() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Property;
}
template <typename T> constexpr void LiteNetLib::Utils::__NetSerializer__EnumByteSerializer_1<T>::__set_Property(::System::Reflection::PropertyInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Property)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Type*& LiteNetLib::Utils::__NetSerializer__EnumByteSerializer_1<T>::__get_PropertyType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PropertyType;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& LiteNetLib::Utils::__NetSerializer__EnumByteSerializer_1<T>::__get_PropertyType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PropertyType;
}
template <typename T> constexpr void LiteNetLib::Utils::__NetSerializer__EnumByteSerializer_1<T>::__set_PropertyType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PropertyType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
inline ::LiteNetLib::Utils::__NetSerializer__EnumByteSerializer_1<T>* LiteNetLib::Utils::__NetSerializer__EnumByteSerializer_1<T>::New_ctor(::System::Reflection::PropertyInfo* property,
                                                                                                                                            ::System::Type* propertyType) {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__EnumByteSerializer_1<T>*>(property, propertyType));
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__EnumByteSerializer_1<T>::_ctor(::System::Reflection::PropertyInfo* property, ::System::Type* propertyType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__EnumByteSerializer_1<T>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::PropertyInfo*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, property, propertyType);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__EnumByteSerializer_1<T>::Read(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__EnumByteSerializer_1<T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__EnumByteSerializer_1<T>::Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__EnumByteSerializer_1<T>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, w);
}
// Ctor Parameters []
template <typename T> constexpr ::LiteNetLib::Utils::__NetSerializer__EnumByteSerializer_1<T>::__NetSerializer__EnumByteSerializer_1() {}
template <typename T>
inline ::LiteNetLib::Utils::__NetSerializer__EnumIntSerializer_1<T>* LiteNetLib::Utils::__NetSerializer__EnumIntSerializer_1<T>::New_ctor(::System::Reflection::PropertyInfo* property,
                                                                                                                                          ::System::Type* propertyType) {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__EnumIntSerializer_1<T>*>(property, propertyType));
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__EnumIntSerializer_1<T>::_ctor(::System::Reflection::PropertyInfo* property, ::System::Type* propertyType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__EnumIntSerializer_1<T>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::PropertyInfo*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, property, propertyType);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__EnumIntSerializer_1<T>::Read(T inf, ::LiteNetLib::Utils::NetDataReader* r) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__EnumIntSerializer_1<T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, r);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__EnumIntSerializer_1<T>::Write(T inf, ::LiteNetLib::Utils::NetDataWriter* w) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__EnumIntSerializer_1<T>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inf, w);
}
// Ctor Parameters []
template <typename T> constexpr ::LiteNetLib::Utils::__NetSerializer__EnumIntSerializer_1<T>::__NetSerializer__EnumIntSerializer_1() {}
template <typename T>
constexpr ::ArrayW<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*, ::Array<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*>*>&
LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>::__get__serializers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serializers;
}
template <typename T>
constexpr ::ArrayW<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*, ::Array<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*>*> const&
LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>::__get__serializers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serializers;
}
template <typename T>
constexpr void LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>::__set__serializers(
    ::ArrayW<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*, ::Array<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____serializers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>::__get__membersCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____membersCount;
}
template <typename T> constexpr int32_t const& LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>::__get__membersCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____membersCount;
}
template <typename T> constexpr void LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>::__set__membersCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____membersCount = value;
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>::setStaticF_Instance(::LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>* value) {
  ::cordl_internals::setStaticField<::LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>*>::get>(
      std::forward<::LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>*>(value));
}
template <typename T> inline ::LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>* LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>*>::get>();
}
template <typename T>
inline ::LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>*
LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>::New_ctor(::System::Collections::Generic::List_1<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*>* serializers) {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>*>(serializers));
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>::_ctor(::System::Collections::Generic::List_1<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*>* serializers) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializers);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>::Write(T obj, ::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>*>::get(), "Write", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, writer);
}
template <typename T> inline void LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>::Read(T obj, ::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>*>::get(), "Read", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, reader);
}
// Ctor Parameters []
template <typename T> constexpr ::LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>::__NetSerializer__ClassInfo_1() {}
//  Writing Method size for method: ::LiteNetLib::Utils::__NetSerializer__CustomType._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Utils::__NetSerializer__CustomType::*)()>(
    &::LiteNetLib::Utils::__NetSerializer__CustomType::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220bccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__CustomType*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
template <typename T> inline ::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>* LiteNetLib::Utils::__NetSerializer__CustomType::Get() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__CustomType*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*, false>(this, ___internal_method);
}
inline ::LiteNetLib::Utils::__NetSerializer__CustomType* LiteNetLib::Utils::__NetSerializer__CustomType::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__CustomType*>());
}
inline void LiteNetLib::Utils::__NetSerializer__CustomType::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__CustomType*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::LiteNetLib::Utils::__NetSerializer__CustomType::__NetSerializer__CustomType() {}
template <typename TProperty> template <typename T> inline ::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>* LiteNetLib::Utils::__NetSerializer__CustomTypeStruct_1<TProperty>::Get() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__CustomTypeStruct_1<TProperty>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*, false>(this, ___internal_method);
}
template <typename TProperty> inline ::LiteNetLib::Utils::__NetSerializer__CustomTypeStruct_1<TProperty>* LiteNetLib::Utils::__NetSerializer__CustomTypeStruct_1<TProperty>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__CustomTypeStruct_1<TProperty>*>());
}
template <typename TProperty> inline void LiteNetLib::Utils::__NetSerializer__CustomTypeStruct_1<TProperty>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__CustomTypeStruct_1<TProperty>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TProperty> constexpr ::LiteNetLib::Utils::__NetSerializer__CustomTypeStruct_1<TProperty>::__NetSerializer__CustomTypeStruct_1() {}
template <typename TProperty> constexpr ::System::Func_1<TProperty>*& LiteNetLib::Utils::__NetSerializer__CustomTypeClass_1<TProperty>::__get__constructor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____constructor;
}
template <typename TProperty>
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<TProperty>*> const& LiteNetLib::Utils::__NetSerializer__CustomTypeClass_1<TProperty>::__get__constructor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____constructor;
}
template <typename TProperty> constexpr void LiteNetLib::Utils::__NetSerializer__CustomTypeClass_1<TProperty>::__set__constructor(::System::Func_1<TProperty>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____constructor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TProperty>
inline ::LiteNetLib::Utils::__NetSerializer__CustomTypeClass_1<TProperty>* LiteNetLib::Utils::__NetSerializer__CustomTypeClass_1<TProperty>::New_ctor(::System::Func_1<TProperty>* constructor) {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__CustomTypeClass_1<TProperty>*>(constructor));
}
template <typename TProperty> inline void LiteNetLib::Utils::__NetSerializer__CustomTypeClass_1<TProperty>::_ctor(::System::Func_1<TProperty>* constructor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__CustomTypeClass_1<TProperty>*>::get(), ".ctor",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<TProperty>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, constructor);
}
template <typename TProperty> template <typename T> inline ::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>* LiteNetLib::Utils::__NetSerializer__CustomTypeClass_1<TProperty>::Get() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__CustomTypeClass_1<TProperty>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TProperty> constexpr ::LiteNetLib::Utils::__NetSerializer__CustomTypeClass_1<TProperty>::__NetSerializer__CustomTypeClass_1() {}
template <typename TProperty> constexpr ::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, TProperty>*& LiteNetLib::Utils::__NetSerializer__CustomTypeStatic_1<TProperty>::__get__writer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writer;
}
template <typename TProperty>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, TProperty>*> const&
LiteNetLib::Utils::__NetSerializer__CustomTypeStatic_1<TProperty>::__get__writer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writer;
}
template <typename TProperty>
constexpr void LiteNetLib::Utils::__NetSerializer__CustomTypeStatic_1<TProperty>::__set__writer(::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, TProperty>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____writer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TProperty> constexpr ::System::Func_2<::LiteNetLib::Utils::NetDataReader*, TProperty>*& LiteNetLib::Utils::__NetSerializer__CustomTypeStatic_1<TProperty>::__get__reader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reader;
}
template <typename TProperty>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::LiteNetLib::Utils::NetDataReader*, TProperty>*> const&
LiteNetLib::Utils::__NetSerializer__CustomTypeStatic_1<TProperty>::__get__reader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reader;
}
template <typename TProperty> constexpr void LiteNetLib::Utils::__NetSerializer__CustomTypeStatic_1<TProperty>::__set__reader(::System::Func_2<::LiteNetLib::Utils::NetDataReader*, TProperty>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____reader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TProperty>
inline ::LiteNetLib::Utils::__NetSerializer__CustomTypeStatic_1<TProperty>*
LiteNetLib::Utils::__NetSerializer__CustomTypeStatic_1<TProperty>::New_ctor(::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, TProperty>* writer,
                                                                            ::System::Func_2<::LiteNetLib::Utils::NetDataReader*, TProperty>* reader) {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__CustomTypeStatic_1<TProperty>*>(writer, reader));
}
template <typename TProperty>
inline void LiteNetLib::Utils::__NetSerializer__CustomTypeStatic_1<TProperty>::_ctor(::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, TProperty>* writer,
                                                                                     ::System::Func_2<::LiteNetLib::Utils::NetDataReader*, TProperty>* reader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__CustomTypeStatic_1<TProperty>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, TProperty>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::LiteNetLib::Utils::NetDataReader*, TProperty>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, reader);
}
template <typename TProperty> template <typename T> inline ::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>* LiteNetLib::Utils::__NetSerializer__CustomTypeStatic_1<TProperty>::Get() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__CustomTypeStatic_1<TProperty>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TProperty> constexpr ::LiteNetLib::Utils::__NetSerializer__CustomTypeStatic_1<TProperty>::__NetSerializer__CustomTypeStatic_1() {}
//  Writing Method size for method: ::LiteNetLib::Utils::NetSerializer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Utils::NetSerializer::*)()>(&::LiteNetLib::Utils::NetSerializer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220b7a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetSerializer*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetSerializer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Utils::NetSerializer::*)(int32_t)>(&::LiteNetLib::Utils::NetSerializer::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x220b898;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetSerializer*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::LiteNetLib::Utils::NetDataWriter*& LiteNetLib::Utils::NetSerializer::__get__writer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writer;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataWriter*> const& LiteNetLib::Utils::NetSerializer::__get__writer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writer;
}
constexpr void LiteNetLib::Utils::NetSerializer::__set__writer(::LiteNetLib::Utils::NetDataWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____writer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& LiteNetLib::Utils::NetSerializer::__get__maxStringLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxStringLength;
}
constexpr int32_t const& LiteNetLib::Utils::NetSerializer::__get__maxStringLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxStringLength;
}
constexpr void LiteNetLib::Utils::NetSerializer::__set__maxStringLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxStringLength = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::LiteNetLib::Utils::__NetSerializer__CustomType*>*& LiteNetLib::Utils::NetSerializer::__get__registeredTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____registeredTypes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Type*, ::LiteNetLib::Utils::__NetSerializer__CustomType*>*> const&
LiteNetLib::Utils::NetSerializer::__get__registeredTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____registeredTypes;
}
constexpr void LiteNetLib::Utils::NetSerializer::__set__registeredTypes(::System::Collections::Generic::Dictionary_2<::System::Type*, ::LiteNetLib::Utils::__NetSerializer__CustomType*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____registeredTypes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer::RegisterNestedType() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetSerializer*>::get(), "RegisterNestedType",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::vector<Il2CppType const*>{})));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer::RegisterNestedType(::System::Func_1<T>* constructor) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetSerializer*>::get(), "RegisterNestedType",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, constructor);
}
template <typename T>
inline void LiteNetLib::Utils::NetSerializer::RegisterNestedType(::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, T>* writer, ::System::Func_2<::LiteNetLib::Utils::NetDataReader*, T>* reader) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetSerializer*>::get(), "RegisterNestedType",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, T>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::LiteNetLib::Utils::NetDataReader*, T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, reader);
}
inline ::LiteNetLib::Utils::NetSerializer* LiteNetLib::Utils::NetSerializer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::NetSerializer*>());
}
inline void LiteNetLib::Utils::NetSerializer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetSerializer*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::LiteNetLib::Utils::NetSerializer* LiteNetLib::Utils::NetSerializer::New_ctor(int32_t maxStringLength) {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::NetSerializer*>(maxStringLength));
}
inline void LiteNetLib::Utils::NetSerializer::_ctor(int32_t maxStringLength) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetSerializer*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, maxStringLength);
}
template <typename T> inline ::LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>* LiteNetLib::Utils::NetSerializer::RegisterInternal() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetSerializer*>::get(), "RegisterInternal",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::vector<Il2CppType const*>{})));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer::Register() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetSerializer*>::get(), "Register",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::vector<Il2CppType const*>{})));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline T LiteNetLib::Utils::NetSerializer::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetSerializer*>::get(), "Deserialize",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, reader);
}
template <typename T> inline bool LiteNetLib::Utils::NetSerializer::Deserialize(::LiteNetLib::Utils::NetDataReader* reader, T target) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetSerializer*>::get(), "Deserialize",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, reader, target);
}
template <typename T> inline void LiteNetLib::Utils::NetSerializer::Serialize(::LiteNetLib::Utils::NetDataWriter* writer, T obj) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetSerializer*>::get(), "Serialize",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, obj);
}
template <typename T> inline ::ArrayW<uint8_t, ::Array<uint8_t>*> LiteNetLib::Utils::NetSerializer::Serialize(T obj) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetSerializer*>::get(), "Serialize",
                                                                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                                                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, obj);
}
// Ctor Parameters []
constexpr ::LiteNetLib::Utils::NetSerializer::NetSerializer() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
