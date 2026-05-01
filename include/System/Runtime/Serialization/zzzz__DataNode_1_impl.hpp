#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/DataNode_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__DataNode_1_def.hpp"
#include "System/Runtime/Serialization/zzzz__ElementData_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDataNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
template <typename T> constexpr ::System::Type*& System::Runtime::Serialization::DataNode_1<T>::__cordl_internal_get_dataType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataType;
}
template <typename T> constexpr ::System::Type* const& System::Runtime::Serialization::DataNode_1<T>::__cordl_internal_get_dataType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataType;
}
template <typename T> constexpr void System::Runtime::Serialization::DataNode_1<T>::__cordl_internal_set_dataType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___dataType, value);
}
template <typename T> constexpr T& System::Runtime::Serialization::DataNode_1<T>::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
template <typename T> constexpr T const& System::Runtime::Serialization::DataNode_1<T>::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
template <typename T> constexpr void System::Runtime::Serialization::DataNode_1<T>::__cordl_internal_set_value(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___value, value);
}
template <typename T> constexpr ::StringW& System::Runtime::Serialization::DataNode_1<T>::__cordl_internal_get_dataContractName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataContractName;
}
template <typename T> constexpr ::StringW const& System::Runtime::Serialization::DataNode_1<T>::__cordl_internal_get_dataContractName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataContractName;
}
template <typename T> constexpr void System::Runtime::Serialization::DataNode_1<T>::__cordl_internal_set_dataContractName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___dataContractName, value);
}
template <typename T> constexpr ::StringW& System::Runtime::Serialization::DataNode_1<T>::__cordl_internal_get_dataContractNamespace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataContractNamespace;
}
template <typename T> constexpr ::StringW const& System::Runtime::Serialization::DataNode_1<T>::__cordl_internal_get_dataContractNamespace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataContractNamespace;
}
template <typename T> constexpr void System::Runtime::Serialization::DataNode_1<T>::__cordl_internal_set_dataContractNamespace(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___dataContractNamespace, value);
}
template <typename T> constexpr ::StringW& System::Runtime::Serialization::DataNode_1<T>::__cordl_internal_get_clrTypeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clrTypeName;
}
template <typename T> constexpr ::StringW const& System::Runtime::Serialization::DataNode_1<T>::__cordl_internal_get_clrTypeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clrTypeName;
}
template <typename T> constexpr void System::Runtime::Serialization::DataNode_1<T>::__cordl_internal_set_clrTypeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___clrTypeName, value);
}
template <typename T> constexpr ::StringW& System::Runtime::Serialization::DataNode_1<T>::__cordl_internal_get_clrAssemblyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clrAssemblyName;
}
template <typename T> constexpr ::StringW const& System::Runtime::Serialization::DataNode_1<T>::__cordl_internal_get_clrAssemblyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clrAssemblyName;
}
template <typename T> constexpr void System::Runtime::Serialization::DataNode_1<T>::__cordl_internal_set_clrAssemblyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___clrAssemblyName, value);
}
template <typename T> constexpr ::StringW& System::Runtime::Serialization::DataNode_1<T>::__cordl_internal_get_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
template <typename T> constexpr ::StringW const& System::Runtime::Serialization::DataNode_1<T>::__cordl_internal_get_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
template <typename T> constexpr void System::Runtime::Serialization::DataNode_1<T>::__cordl_internal_set_id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___id, value);
}
template <typename T> constexpr bool& System::Runtime::Serialization::DataNode_1<T>::__cordl_internal_get_isFinalValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isFinalValue;
}
template <typename T> constexpr bool const& System::Runtime::Serialization::DataNode_1<T>::__cordl_internal_get_isFinalValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isFinalValue;
}
template <typename T> constexpr void System::Runtime::Serialization::DataNode_1<T>::__cordl_internal_set_isFinalValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isFinalValue = value;
}
template <typename T> inline void System::Runtime::Serialization::DataNode_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::DataNode_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void System::Runtime::Serialization::DataNode_1<T>::_ctor(T value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::DataNode_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::System::Type* System::Runtime::Serialization::DataNode_1<T>::get_DataType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::DataNode_1<T>*>::get(),
                                                                             "get_DataType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Object* System::Runtime::Serialization::DataNode_1<T>::get_Value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::DataNode_1<T>*>::get(),
                                                                             "get_Value", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename T> inline void System::Runtime::Serialization::DataNode_1<T>::set_Value(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::DataNode_1<T>*>::get(), "set_Value",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline bool System::Runtime::Serialization::DataNode_1<T>::System_Runtime_Serialization_IDataNode_get_IsFinalValue() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::DataNode_1<T>*>::get(),
                                               "System.Runtime.Serialization.IDataNode.get_IsFinalValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void System::Runtime::Serialization::DataNode_1<T>::System_Runtime_Serialization_IDataNode_set_IsFinalValue(bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::DataNode_1<T>*>::get(),
                                                                             "System.Runtime.Serialization.IDataNode.set_IsFinalValue", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline T System::Runtime::Serialization::DataNode_1<T>::GetValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::DataNode_1<T>*>::get(),
                                                                             "GetValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline ::StringW System::Runtime::Serialization::DataNode_1<T>::get_DataContractName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::DataNode_1<T>*>::get(),
                                                                             "get_DataContractName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename T> inline void System::Runtime::Serialization::DataNode_1<T>::set_DataContractName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::DataNode_1<T>*>::get(), "set_DataContractName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::StringW System::Runtime::Serialization::DataNode_1<T>::get_DataContractNamespace() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::DataNode_1<T>*>::get(),
                                                                             "get_DataContractNamespace", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename T> inline void System::Runtime::Serialization::DataNode_1<T>::set_DataContractNamespace(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::DataNode_1<T>*>::get(), "set_DataContractNamespace",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::StringW System::Runtime::Serialization::DataNode_1<T>::get_ClrTypeName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::DataNode_1<T>*>::get(),
                                                                             "get_ClrTypeName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename T> inline void System::Runtime::Serialization::DataNode_1<T>::set_ClrTypeName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::DataNode_1<T>*>::get(), "set_ClrTypeName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::StringW System::Runtime::Serialization::DataNode_1<T>::get_ClrAssemblyName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::DataNode_1<T>*>::get(),
                                                                             "get_ClrAssemblyName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename T> inline void System::Runtime::Serialization::DataNode_1<T>::set_ClrAssemblyName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::DataNode_1<T>*>::get(), "set_ClrAssemblyName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline bool System::Runtime::Serialization::DataNode_1<T>::get_PreservesReferences() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::DataNode_1<T>*>::get(),
                                                                             "get_PreservesReferences", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline ::StringW System::Runtime::Serialization::DataNode_1<T>::get_Id() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::DataNode_1<T>*>::get(), "get_Id",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename T> inline void System::Runtime::Serialization::DataNode_1<T>::set_Id(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::DataNode_1<T>*>::get(), "set_Id", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void System::Runtime::Serialization::DataNode_1<T>::GetData(::System::Runtime::Serialization::ElementData* element) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::DataNode_1<T>*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, element);
}
template <typename T> inline void System::Runtime::Serialization::DataNode_1<T>::Clear() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::DataNode_1<T>*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void System::Runtime::Serialization::DataNode_1<T>::AddQualifiedNameAttribute(::System::Runtime::Serialization::ElementData* element, ::StringW elementPrefix, ::StringW elementName,
                                                                                     ::StringW elementNs, ::StringW valueName, ::StringW valueNs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::DataNode_1<T>*>::get(), "AddQualifiedNameAttribute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ElementData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, element, elementPrefix, elementName, elementNs, valueName, valueNs);
}
template <typename T> inline ::System::Runtime::Serialization::DataNode_1<T>* System::Runtime::Serialization::DataNode_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::DataNode_1<T>*>());
}
template <typename T> inline ::System::Runtime::Serialization::DataNode_1<T>* System::Runtime::Serialization::DataNode_1<T>::New_ctor(T value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::DataNode_1<T>*>(value));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IDataNode"
template <typename T> constexpr System::Runtime::Serialization::DataNode_1<T>::operator ::System::Runtime::Serialization::IDataNode*() noexcept {
  return static_cast<::System::Runtime::Serialization::IDataNode*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::IDataNode"
template <typename T> constexpr ::System::Runtime::Serialization::IDataNode* System::Runtime::Serialization::DataNode_1<T>::i___System__Runtime__Serialization__IDataNode() noexcept {
  return static_cast<::System::Runtime::Serialization::IDataNode*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::System::Runtime::Serialization::DataNode_1<T>::DataNode_1() {}
