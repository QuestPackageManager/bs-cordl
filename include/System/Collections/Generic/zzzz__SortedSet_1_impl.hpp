#pragma once
// IWYU pragma private; include "System\Collections\Generic\SortedSet_1.hpp"
#include "System/Collections/Generic/zzzz__NodeColor_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/Generic/zzzz__SortedSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__ISet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__NodeColor_def.hpp"
#include "System/Collections/Generic/zzzz__SortedSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__SortedSet`1_TreeSubSet_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/Collections/Generic/zzzz__TreeRotation_def.hpp"
#include "System/Collections/Generic/zzzz__TreeWalkPredicate_1_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> constexpr ::System::Collections::Generic::List_1<T>*& System::Collections::Generic::TreeSubSet_SortedSet_1___c__DisplayClass9_0<T>::__cordl_internal_get_toRemove() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toRemove;
}
template <typename T> constexpr ::System::Collections::Generic::List_1<T>* const& System::Collections::Generic::TreeSubSet_SortedSet_1___c__DisplayClass9_0<T>::__cordl_internal_get_toRemove() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toRemove;
}
template <typename T> constexpr void System::Collections::Generic::TreeSubSet_SortedSet_1___c__DisplayClass9_0<T>::__cordl_internal_set_toRemove(::System::Collections::Generic::List_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___toRemove = value;
}
template <typename T> inline void System::Collections::Generic::TreeSubSet_SortedSet_1___c__DisplayClass9_0<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::TreeSubSet_SortedSet_1___c__DisplayClass9_0<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline bool System::Collections::Generic::TreeSubSet_SortedSet_1___c__DisplayClass9_0<T>::_Clear_b__0(::System::Collections::Generic::SortedSet_1_Node<T>* n) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::TreeSubSet_SortedSet_1___c__DisplayClass9_0<T>*>(),
                                                                                         { "<Clear>b__0", {}, { ::i2c::type_of<::System::Collections::Generic::SortedSet_1_Node<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, n);
}
template <typename T> inline ::System::Collections::Generic::TreeSubSet_SortedSet_1___c__DisplayClass9_0<T>* System::Collections::Generic::TreeSubSet_SortedSet_1___c__DisplayClass9_0<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Generic::TreeSubSet_SortedSet_1___c__DisplayClass9_0<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Generic::TreeSubSet_SortedSet_1___c__DisplayClass9_0<T>::TreeSubSet_SortedSet_1___c__DisplayClass9_0() {}
template <typename T> constexpr T& System::Collections::Generic::SortedSet_1_Node<T>::__cordl_internal_get__Item_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Item_k__BackingField;
}
template <typename T> constexpr T const& System::Collections::Generic::SortedSet_1_Node<T>::__cordl_internal_get__Item_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Item_k__BackingField;
}
template <typename T> constexpr void System::Collections::Generic::SortedSet_1_Node<T>::__cordl_internal_set__Item_k__BackingField(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Item_k__BackingField = value;
}
template <typename T> constexpr ::System::Collections::Generic::SortedSet_1_Node<T>*& System::Collections::Generic::SortedSet_1_Node<T>::__cordl_internal_get__Left_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Left_k__BackingField;
}
template <typename T> constexpr ::System::Collections::Generic::SortedSet_1_Node<T>* const& System::Collections::Generic::SortedSet_1_Node<T>::__cordl_internal_get__Left_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Left_k__BackingField;
}
template <typename T> constexpr void System::Collections::Generic::SortedSet_1_Node<T>::__cordl_internal_set__Left_k__BackingField(::System::Collections::Generic::SortedSet_1_Node<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Left_k__BackingField = value;
}
template <typename T> constexpr ::System::Collections::Generic::SortedSet_1_Node<T>*& System::Collections::Generic::SortedSet_1_Node<T>::__cordl_internal_get__Right_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Right_k__BackingField;
}
template <typename T> constexpr ::System::Collections::Generic::SortedSet_1_Node<T>* const& System::Collections::Generic::SortedSet_1_Node<T>::__cordl_internal_get__Right_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Right_k__BackingField;
}
template <typename T> constexpr void System::Collections::Generic::SortedSet_1_Node<T>::__cordl_internal_set__Right_k__BackingField(::System::Collections::Generic::SortedSet_1_Node<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Right_k__BackingField = value;
}
template <typename T> constexpr ::System::Collections::Generic::NodeColor& System::Collections::Generic::SortedSet_1_Node<T>::__cordl_internal_get__Color_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Color_k__BackingField;
}
template <typename T> constexpr ::System::Collections::Generic::NodeColor const& System::Collections::Generic::SortedSet_1_Node<T>::__cordl_internal_get__Color_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Color_k__BackingField;
}
template <typename T> constexpr void System::Collections::Generic::SortedSet_1_Node<T>::__cordl_internal_set__Color_k__BackingField(::System::Collections::Generic::NodeColor value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Color_k__BackingField = value;
}
template <typename T> inline void System::Collections::Generic::SortedSet_1_Node<T>::_ctor(T item, ::System::Collections::Generic::NodeColor color) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1_Node<T>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<T>(), ::i2c::type_of<::System::Collections::Generic::NodeColor>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item, color);
}
template <typename T> inline bool System::Collections::Generic::SortedSet_1_Node<T>::IsNonNullRed(::System::Collections::Generic::SortedSet_1_Node<T>* node) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1_Node<T>*>(),
                                                                                         { "IsNonNullRed", {}, { ::i2c::type_of<::System::Collections::Generic::SortedSet_1_Node<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, node);
}
template <typename T> inline bool System::Collections::Generic::SortedSet_1_Node<T>::IsNullOrBlack(::System::Collections::Generic::SortedSet_1_Node<T>* node) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1_Node<T>*>(),
                                                                                         { "IsNullOrBlack", {}, { ::i2c::type_of<::System::Collections::Generic::SortedSet_1_Node<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, node);
}
template <typename T> inline T System::Collections::Generic::SortedSet_1_Node<T>::get_Item() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1_Node<T>*>(), { "get_Item", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Generic::SortedSet_1_Node<T>::set_Item(T value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1_Node<T>*>(), { "set_Item", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline ::System::Collections::Generic::SortedSet_1_Node<T>* System::Collections::Generic::SortedSet_1_Node<T>::get_Left() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1_Node<T>*>(), { "get_Left", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::SortedSet_1_Node<T>*>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Generic::SortedSet_1_Node<T>::set_Left(::System::Collections::Generic::SortedSet_1_Node<T>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1_Node<T>*>(),
                                                                                         { "set_Left", {}, { ::i2c::type_of<::System::Collections::Generic::SortedSet_1_Node<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline ::System::Collections::Generic::SortedSet_1_Node<T>* System::Collections::Generic::SortedSet_1_Node<T>::get_Right() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1_Node<T>*>(), { "get_Right", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::SortedSet_1_Node<T>*>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Generic::SortedSet_1_Node<T>::set_Right(::System::Collections::Generic::SortedSet_1_Node<T>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1_Node<T>*>(),
                                                                                         { "set_Right", {}, { ::i2c::type_of<::System::Collections::Generic::SortedSet_1_Node<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline ::System::Collections::Generic::NodeColor System::Collections::Generic::SortedSet_1_Node<T>::get_Color() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1_Node<T>*>(), { "get_Color", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::NodeColor>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Generic::SortedSet_1_Node<T>::set_Color(::System::Collections::Generic::NodeColor value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1_Node<T>*>(), { "set_Color", {}, { ::i2c::type_of<::System::Collections::Generic::NodeColor>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline bool System::Collections::Generic::SortedSet_1_Node<T>::get_IsBlack() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1_Node<T>*>(), { "get_IsBlack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline bool System::Collections::Generic::SortedSet_1_Node<T>::get_IsRed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1_Node<T>*>(), { "get_IsRed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline bool System::Collections::Generic::SortedSet_1_Node<T>::get_Is2Node() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1_Node<T>*>(), { "get_Is2Node", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline bool System::Collections::Generic::SortedSet_1_Node<T>::get_Is4Node() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1_Node<T>*>(), { "get_Is4Node", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Generic::SortedSet_1_Node<T>::ColorBlack() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1_Node<T>*>(), { "ColorBlack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Generic::SortedSet_1_Node<T>::ColorRed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1_Node<T>*>(), { "ColorRed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::SortedSet_1_Node<T>* System::Collections::Generic::SortedSet_1_Node<T>::DeepClone(int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1_Node<T>*>(), { "DeepClone", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::SortedSet_1_Node<T>*>(this, ___internal_method, count);
}
template <typename T>
inline ::System::Collections::Generic::TreeRotation System::Collections::Generic::SortedSet_1_Node<T>::GetRotation(::System::Collections::Generic::SortedSet_1_Node<T>* current,
                                                                                                                   ::System::Collections::Generic::SortedSet_1_Node<T>* sibling) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1_Node<T>*>(),
                          { "GetRotation", {}, { ::i2c::type_of<::System::Collections::Generic::SortedSet_1_Node<T>*>(), ::i2c::type_of<::System::Collections::Generic::SortedSet_1_Node<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::TreeRotation>(this, ___internal_method, current, sibling);
}
template <typename T>
inline ::System::Collections::Generic::SortedSet_1_Node<T>* System::Collections::Generic::SortedSet_1_Node<T>::GetSibling(::System::Collections::Generic::SortedSet_1_Node<T>* node) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1_Node<T>*>(),
                                                                                         { "GetSibling", {}, { ::i2c::type_of<::System::Collections::Generic::SortedSet_1_Node<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::SortedSet_1_Node<T>*>(this, ___internal_method, node);
}
template <typename T> inline ::System::Collections::Generic::SortedSet_1_Node<T>* System::Collections::Generic::SortedSet_1_Node<T>::ShallowClone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1_Node<T>*>(), { "ShallowClone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::SortedSet_1_Node<T>*>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Generic::SortedSet_1_Node<T>::Split4Node() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1_Node<T>*>(), { "Split4Node", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::SortedSet_1_Node<T>* System::Collections::Generic::SortedSet_1_Node<T>::Rotate(::System::Collections::Generic::TreeRotation rotation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1_Node<T>*>(), { "Rotate", {}, { ::i2c::type_of<::System::Collections::Generic::TreeRotation>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::SortedSet_1_Node<T>*>(this, ___internal_method, rotation);
}
template <typename T> inline ::System::Collections::Generic::SortedSet_1_Node<T>* System::Collections::Generic::SortedSet_1_Node<T>::RotateLeft() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1_Node<T>*>(), { "RotateLeft", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::SortedSet_1_Node<T>*>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::SortedSet_1_Node<T>* System::Collections::Generic::SortedSet_1_Node<T>::RotateLeftRight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1_Node<T>*>(), { "RotateLeftRight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::SortedSet_1_Node<T>*>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::SortedSet_1_Node<T>* System::Collections::Generic::SortedSet_1_Node<T>::RotateRight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1_Node<T>*>(), { "RotateRight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::SortedSet_1_Node<T>*>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::SortedSet_1_Node<T>* System::Collections::Generic::SortedSet_1_Node<T>::RotateRightLeft() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1_Node<T>*>(), { "RotateRightLeft", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::SortedSet_1_Node<T>*>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Generic::SortedSet_1_Node<T>::Merge2Nodes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1_Node<T>*>(), { "Merge2Nodes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T>
inline void System::Collections::Generic::SortedSet_1_Node<T>::ReplaceChild(::System::Collections::Generic::SortedSet_1_Node<T>* child, ::System::Collections::Generic::SortedSet_1_Node<T>* newChild) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1_Node<T>*>(),
                          { "ReplaceChild", {}, { ::i2c::type_of<::System::Collections::Generic::SortedSet_1_Node<T>*>(), ::i2c::type_of<::System::Collections::Generic::SortedSet_1_Node<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, child, newChild);
}
template <typename T> inline ::System::Collections::Generic::SortedSet_1_Node<T>* System::Collections::Generic::SortedSet_1_Node<T>::New_ctor(T item, ::System::Collections::Generic::NodeColor color) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Generic::SortedSet_1_Node<T>*>(item, color));
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Generic::SortedSet_1_Node<T>::SortedSet_1_Node() {}
template <typename T> inline void System::Collections::Generic::SortedSet_1_Enumerator<T>::setStaticF_s_dummyNode(::System::Collections::Generic::SortedSet_1_Node<T>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::SortedSet_1_Node<T>*, "s_dummyNode", ::System::Collections::Generic::SortedSet_1_Enumerator<T>>(
      std::forward<::System::Collections::Generic::SortedSet_1_Node<T>*>(value));
}
template <typename T> inline ::System::Collections::Generic::SortedSet_1_Node<T>* System::Collections::Generic::SortedSet_1_Enumerator<T>::getStaticF_s_dummyNode() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::SortedSet_1_Node<T>*, "s_dummyNode", ::System::Collections::Generic::SortedSet_1_Enumerator<T>>();
}
template <typename T> inline void System::Collections::Generic::SortedSet_1_Enumerator<T>::_ctor(::System::Collections::Generic::SortedSet_1<T>* set) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1_Enumerator<T>>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::SortedSet_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, set);
}
template <typename T> inline void System::Collections::Generic::SortedSet_1_Enumerator<T>::_ctor(::System::Collections::Generic::SortedSet_1<T>* set, bool reverse) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1_Enumerator<T>>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::SortedSet_1<T>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, set, reverse);
}
template <typename T>
inline void System::Collections::Generic::SortedSet_1_Enumerator<T>::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                                              ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1_Enumerator<T>>(),
                                              { "System.Runtime.Serialization.ISerializable.GetObjectData",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, info, context);
}
template <typename T> inline void System::Collections::Generic::SortedSet_1_Enumerator<T>::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1_Enumerator<T>>(),
                                                           { "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sender);
}
template <typename T> inline void System::Collections::Generic::SortedSet_1_Enumerator<T>::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1_Enumerator<T>>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline bool System::Collections::Generic::SortedSet_1_Enumerator<T>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1_Enumerator<T>>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename T> inline void System::Collections::Generic::SortedSet_1_Enumerator<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1_Enumerator<T>>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline T System::Collections::Generic::SortedSet_1_Enumerator<T>::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1_Enumerator<T>>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template <typename T> inline ::System::Object* System::Collections::Generic::SortedSet_1_Enumerator<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1_Enumerator<T>>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template <typename T> inline bool System::Collections::Generic::SortedSet_1_Enumerator<T>::get_NotStartedOrEnded() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1_Enumerator<T>>(), { "get_NotStartedOrEnded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename T> inline void System::Collections::Generic::SortedSet_1_Enumerator<T>::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1_Enumerator<T>>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline void System::Collections::Generic::SortedSet_1_Enumerator<T>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1_Enumerator<T>>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr System::Collections::Generic::SortedSet_1_Enumerator<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerator_1<T>* System::Collections::Generic::SortedSet_1_Enumerator<T>::i___System__Collections__Generic__IEnumerator_1_T_() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr System::Collections::Generic::SortedSet_1_Enumerator<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* System::Collections::Generic::SortedSet_1_Enumerator<T>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr System::Collections::Generic::SortedSet_1_Enumerator<T>::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename T> constexpr ::System::Collections::IEnumerator* System::Collections::Generic::SortedSet_1_Enumerator<T>::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
template <typename T> constexpr System::Collections::Generic::SortedSet_1_Enumerator<T>::operator ::System::Runtime::Serialization::ISerializable*() {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
template <typename T> constexpr ::System::Runtime::Serialization::ISerializable* System::Collections::Generic::SortedSet_1_Enumerator<T>::i___System__Runtime__Serialization__ISerializable() {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
template <typename T> constexpr System::Collections::Generic::SortedSet_1_Enumerator<T>::operator ::System::Runtime::Serialization::IDeserializationCallback*() {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
template <typename T>
constexpr ::System::Runtime::Serialization::IDeserializationCallback* System::Collections::Generic::SortedSet_1_Enumerator<T>::i___System__Runtime__Serialization__IDeserializationCallback() {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_tree", ty: "::System::Collections::Generic::SortedSet_1<T>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_version", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_stack", ty: "::System::Collections::Generic::Stack_1<::System::Collections::Generic::SortedSet_1_Node<T>*>*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_current", ty: "::System::Collections::Generic::SortedSet_1_Node<T>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_reverse", ty: "bool", modifiers: "", def_value:
// Some("{}") }]
template <typename T>
constexpr ::System::Collections::Generic::SortedSet_1_Enumerator<T>::SortedSet_1_Enumerator(::System::Collections::Generic::SortedSet_1<T>* _tree, int32_t _version,
                                                                                            ::System::Collections::Generic::Stack_1<::System::Collections::Generic::SortedSet_1_Node<T>*>* _stack,
                                                                                            ::System::Collections::Generic::SortedSet_1_Node<T>* _current, bool _reverse) noexcept {
  this->_tree = _tree;
  this->_version = _version;
  this->_stack = _stack;
  this->_current = _current;
  this->_reverse = _reverse;
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Generic::SortedSet_1_Enumerator<T>::SortedSet_1_Enumerator() {}
// Ctor Parameters [CppParam { name: "UniqueCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "UnfoundCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::System::Collections::Generic::SortedSet_1_ElementCount<T>::SortedSet_1_ElementCount(int32_t UniqueCount, int32_t UnfoundCount) noexcept {
  this->UniqueCount = UniqueCount;
  this->UnfoundCount = UnfoundCount;
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Generic::SortedSet_1_ElementCount<T>::SortedSet_1_ElementCount() {}
template <typename T> constexpr int32_t& System::Collections::Generic::SortedSet_1___c__DisplayClass52_0<T>::__cordl_internal_get_index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
template <typename T> constexpr int32_t const& System::Collections::Generic::SortedSet_1___c__DisplayClass52_0<T>::__cordl_internal_get_index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
template <typename T> constexpr void System::Collections::Generic::SortedSet_1___c__DisplayClass52_0<T>::__cordl_internal_set_index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___index = value;
}
template <typename T> constexpr int32_t& System::Collections::Generic::SortedSet_1___c__DisplayClass52_0<T>::__cordl_internal_get_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
template <typename T> constexpr int32_t const& System::Collections::Generic::SortedSet_1___c__DisplayClass52_0<T>::__cordl_internal_get_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
template <typename T> constexpr void System::Collections::Generic::SortedSet_1___c__DisplayClass52_0<T>::__cordl_internal_set_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___count = value;
}
template <typename T> constexpr ::ArrayW<T>& System::Collections::Generic::SortedSet_1___c__DisplayClass52_0<T>::__cordl_internal_get_array() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___array;
}
template <typename T> constexpr ::ArrayW<T> const& System::Collections::Generic::SortedSet_1___c__DisplayClass52_0<T>::__cordl_internal_get_array() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___array;
}
template <typename T> constexpr void System::Collections::Generic::SortedSet_1___c__DisplayClass52_0<T>::__cordl_internal_set_array(::ArrayW<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___array = value;
}
template <typename T> inline void System::Collections::Generic::SortedSet_1___c__DisplayClass52_0<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1___c__DisplayClass52_0<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline bool System::Collections::Generic::SortedSet_1___c__DisplayClass52_0<T>::_CopyTo_b__0(::System::Collections::Generic::SortedSet_1_Node<T>* node) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1___c__DisplayClass52_0<T>*>(),
                                                                                         { "<CopyTo>b__0", {}, { ::i2c::type_of<::System::Collections::Generic::SortedSet_1_Node<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
template <typename T> inline ::System::Collections::Generic::SortedSet_1___c__DisplayClass52_0<T>* System::Collections::Generic::SortedSet_1___c__DisplayClass52_0<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Generic::SortedSet_1___c__DisplayClass52_0<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Generic::SortedSet_1___c__DisplayClass52_0<T>::SortedSet_1___c__DisplayClass52_0() {}
template <typename T> constexpr int32_t& System::Collections::Generic::SortedSet_1___c__DisplayClass53_0<T>::__cordl_internal_get_index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
template <typename T> constexpr int32_t const& System::Collections::Generic::SortedSet_1___c__DisplayClass53_0<T>::__cordl_internal_get_index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
template <typename T> constexpr void System::Collections::Generic::SortedSet_1___c__DisplayClass53_0<T>::__cordl_internal_set_index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___index = value;
}
template <typename T> constexpr ::ArrayW<::System::Object*>& System::Collections::Generic::SortedSet_1___c__DisplayClass53_0<T>::__cordl_internal_get_objects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objects;
}
template <typename T> constexpr ::ArrayW<::System::Object*> const& System::Collections::Generic::SortedSet_1___c__DisplayClass53_0<T>::__cordl_internal_get_objects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objects;
}
template <typename T> constexpr void System::Collections::Generic::SortedSet_1___c__DisplayClass53_0<T>::__cordl_internal_set_objects(::ArrayW<::System::Object*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objects = value;
}
template <typename T> inline void System::Collections::Generic::SortedSet_1___c__DisplayClass53_0<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1___c__DisplayClass53_0<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T>
inline bool System::Collections::Generic::SortedSet_1___c__DisplayClass53_0<T>::_System_Collections_ICollection_CopyTo_b__0(::System::Collections::Generic::SortedSet_1_Node<T>* node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1___c__DisplayClass53_0<T>*>(),
                                                           { "<System.Collections.ICollection.CopyTo>b__0", {}, { ::i2c::type_of<::System::Collections::Generic::SortedSet_1_Node<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
template <typename T> inline ::System::Collections::Generic::SortedSet_1___c__DisplayClass53_0<T>* System::Collections::Generic::SortedSet_1___c__DisplayClass53_0<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Generic::SortedSet_1___c__DisplayClass53_0<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Generic::SortedSet_1___c__DisplayClass53_0<T>::SortedSet_1___c__DisplayClass53_0() {}
template <typename T> constexpr ::System::Collections::Generic::SortedSet_1_Node<T>*& System::Collections::Generic::SortedSet_1<T>::__cordl_internal_get_root() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___root;
}
template <typename T> constexpr ::System::Collections::Generic::SortedSet_1_Node<T>* const& System::Collections::Generic::SortedSet_1<T>::__cordl_internal_get_root() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___root;
}
template <typename T> constexpr void System::Collections::Generic::SortedSet_1<T>::__cordl_internal_set_root(::System::Collections::Generic::SortedSet_1_Node<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___root = value;
}
template <typename T> constexpr ::System::Collections::Generic::IComparer_1<T>*& System::Collections::Generic::SortedSet_1<T>::__cordl_internal_get_comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comparer;
}
template <typename T> constexpr ::System::Collections::Generic::IComparer_1<T>* const& System::Collections::Generic::SortedSet_1<T>::__cordl_internal_get_comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comparer;
}
template <typename T> constexpr void System::Collections::Generic::SortedSet_1<T>::__cordl_internal_set_comparer(::System::Collections::Generic::IComparer_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___comparer = value;
}
template <typename T> constexpr int32_t& System::Collections::Generic::SortedSet_1<T>::__cordl_internal_get_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
template <typename T> constexpr int32_t const& System::Collections::Generic::SortedSet_1<T>::__cordl_internal_get_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
template <typename T> constexpr void System::Collections::Generic::SortedSet_1<T>::__cordl_internal_set_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___count = value;
}
template <typename T> constexpr int32_t& System::Collections::Generic::SortedSet_1<T>::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
template <typename T> constexpr int32_t const& System::Collections::Generic::SortedSet_1<T>::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
template <typename T> constexpr void System::Collections::Generic::SortedSet_1<T>::__cordl_internal_set_version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
template <typename T> constexpr ::System::Object*& System::Collections::Generic::SortedSet_1<T>::__cordl_internal_get__syncRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncRoot;
}
template <typename T> constexpr ::System::Object* const& System::Collections::Generic::SortedSet_1<T>::__cordl_internal_get__syncRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncRoot;
}
template <typename T> constexpr void System::Collections::Generic::SortedSet_1<T>::__cordl_internal_set__syncRoot(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____syncRoot = value;
}
template <typename T> constexpr ::System::Runtime::Serialization::SerializationInfo*& System::Collections::Generic::SortedSet_1<T>::__cordl_internal_get_siInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___siInfo;
}
template <typename T> constexpr ::System::Runtime::Serialization::SerializationInfo* const& System::Collections::Generic::SortedSet_1<T>::__cordl_internal_get_siInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___siInfo;
}
template <typename T> constexpr void System::Collections::Generic::SortedSet_1<T>::__cordl_internal_set_siInfo(::System::Runtime::Serialization::SerializationInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___siInfo = value;
}
template <typename T> inline void System::Collections::Generic::SortedSet_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Generic::SortedSet_1<T>::_ctor(::System::Collections::Generic::IComparer_1<T>* comparer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IComparer_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, comparer);
}
template <typename T>
inline void System::Collections::Generic::SortedSet_1<T>::_ctor(::System::Collections::Generic::IEnumerable_1<T>* collection, ::System::Collections::Generic::IComparer_1<T>* comparer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>(), ::i2c::type_of<::System::Collections::Generic::IComparer_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collection, comparer);
}
template <typename T>
inline void System::Collections::Generic::SortedSet_1<T>::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
template <typename T> inline void System::Collections::Generic::SortedSet_1<T>::AddAllElements(::System::Collections::Generic::IEnumerable_1<T>* collection) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(),
                                                                                         { "AddAllElements", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collection);
}
template <typename T> inline void System::Collections::Generic::SortedSet_1<T>::RemoveAllElements(::System::Collections::Generic::IEnumerable_1<T>* collection) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(),
                                                                                         { "RemoveAllElements", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collection);
}
template <typename T> inline bool System::Collections::Generic::SortedSet_1<T>::ContainsAllElements(::System::Collections::Generic::IEnumerable_1<T>* collection) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(),
                                                                                         { "ContainsAllElements", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, collection);
}
template <typename T> inline bool System::Collections::Generic::SortedSet_1<T>::InOrderTreeWalk(::System::Collections::Generic::TreeWalkPredicate_1<T>* action) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, action);
}
template <typename T> inline bool System::Collections::Generic::SortedSet_1<T>::BreadthFirstTreeWalk(::System::Collections::Generic::TreeWalkPredicate_1<T>* action) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, action);
}
template <typename T> inline int32_t System::Collections::Generic::SortedSet_1<T>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::IComparer_1<T>* System::Collections::Generic::SortedSet_1<T>::get_Comparer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(), { "get_Comparer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IComparer_1<T>*>(this, ___internal_method);
}
template <typename T> inline bool System::Collections::Generic::SortedSet_1<T>::System_Collections_Generic_ICollection_T__get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(), { "System.Collections.Generic.ICollection<T>.get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline bool System::Collections::Generic::SortedSet_1<T>::System_Collections_ICollection_get_IsSynchronized() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(), { "System.Collections.ICollection.get_IsSynchronized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline ::System::Object* System::Collections::Generic::SortedSet_1<T>::System_Collections_ICollection_get_SyncRoot() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(), { "System.Collections.ICollection.get_SyncRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Generic::SortedSet_1<T>::VersionCheck() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline bool System::Collections::Generic::SortedSet_1<T>::IsWithinRange(T item) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename T> inline bool System::Collections::Generic::SortedSet_1<T>::Add(T item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(), { "Add", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename T> inline void System::Collections::Generic::SortedSet_1<T>::System_Collections_Generic_ICollection_T__Add(T item) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(), { "System.Collections.Generic.ICollection<T>.Add", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename T> inline bool System::Collections::Generic::SortedSet_1<T>::AddIfNotPresent(T item) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename T> inline bool System::Collections::Generic::SortedSet_1<T>::Remove(T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(), { "Remove", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename T> inline bool System::Collections::Generic::SortedSet_1<T>::DoRemove(T item) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename T> inline void System::Collections::Generic::SortedSet_1<T>::Clear() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline bool System::Collections::Generic::SortedSet_1<T>::Contains(T item) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename T> inline void System::Collections::Generic::SortedSet_1<T>::CopyTo(::ArrayW<T> array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(), { "CopyTo", {}, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
template <typename T> inline void System::Collections::Generic::SortedSet_1<T>::CopyTo(::ArrayW<T> array, int32_t index, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(),
                                                                                         { "CopyTo", {}, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index, count);
}
template <typename T> inline void System::Collections::Generic::SortedSet_1<T>::System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(),
                                                           { "System.Collections.ICollection.CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
template <typename T> inline ::System::Collections::Generic::SortedSet_1_Enumerator<T> System::Collections::Generic::SortedSet_1<T>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::SortedSet_1_Enumerator<T>>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::IEnumerator_1<T>* System::Collections::Generic::SortedSet_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(), { "System.Collections.Generic.IEnumerable<T>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* System::Collections::Generic::SortedSet_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template <typename T>
inline void System::Collections::Generic::SortedSet_1<T>::InsertionBalance(::System::Collections::Generic::SortedSet_1_Node<T>* current,
                                                                           ::by_ref<::System::Collections::Generic::SortedSet_1_Node<T>*> parent,
                                                                           ::System::Collections::Generic::SortedSet_1_Node<T>* grandParent,
                                                                           ::System::Collections::Generic::SortedSet_1_Node<T>* greatGrandParent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(),
                                       { "InsertionBalance",
                                         {},
                                         { ::i2c::type_of<::System::Collections::Generic::SortedSet_1_Node<T>*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::SortedSet_1_Node<T>*>>(),
                                           ::i2c::type_of<::System::Collections::Generic::SortedSet_1_Node<T>*>(), ::i2c::type_of<::System::Collections::Generic::SortedSet_1_Node<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, current, parent, grandParent, greatGrandParent);
}
template <typename T>
inline void System::Collections::Generic::SortedSet_1<T>::ReplaceChildOrRoot(::System::Collections::Generic::SortedSet_1_Node<T>* parent, ::System::Collections::Generic::SortedSet_1_Node<T>* child,
                                                                             ::System::Collections::Generic::SortedSet_1_Node<T>* newChild) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(),
                                              { "ReplaceChildOrRoot",
                                                {},
                                                { ::i2c::type_of<::System::Collections::Generic::SortedSet_1_Node<T>*>(), ::i2c::type_of<::System::Collections::Generic::SortedSet_1_Node<T>*>(),
                                                  ::i2c::type_of<::System::Collections::Generic::SortedSet_1_Node<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent, child, newChild);
}
template <typename T>
inline void System::Collections::Generic::SortedSet_1<T>::ReplaceNode(::System::Collections::Generic::SortedSet_1_Node<T>* match, ::System::Collections::Generic::SortedSet_1_Node<T>* parentOfMatch,
                                                                      ::System::Collections::Generic::SortedSet_1_Node<T>* successor,
                                                                      ::System::Collections::Generic::SortedSet_1_Node<T>* parentOfSuccessor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(),
                                              { "ReplaceNode",
                                                {},
                                                { ::i2c::type_of<::System::Collections::Generic::SortedSet_1_Node<T>*>(), ::i2c::type_of<::System::Collections::Generic::SortedSet_1_Node<T>*>(),
                                                  ::i2c::type_of<::System::Collections::Generic::SortedSet_1_Node<T>*>(), ::i2c::type_of<::System::Collections::Generic::SortedSet_1_Node<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, match, parentOfMatch, successor, parentOfSuccessor);
}
template <typename T> inline ::System::Collections::Generic::SortedSet_1_Node<T>* System::Collections::Generic::SortedSet_1<T>::FindNode(T item) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::SortedSet_1_Node<T>*>(this, ___internal_method, item);
}
template <typename T> inline int32_t System::Collections::Generic::SortedSet_1<T>::InternalIndexOf(T item) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, item);
}
template <typename T> inline ::System::Collections::Generic::SortedSet_1_Node<T>* System::Collections::Generic::SortedSet_1<T>::FindRange(T from, T to, bool lowerBoundActive, bool upperBoundActive) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(),
                                                           { "FindRange", {}, { ::i2c::type_of<T>(), ::i2c::type_of<T>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::SortedSet_1_Node<T>*>(this, ___internal_method, from, to, lowerBoundActive, upperBoundActive);
}
template <typename T> inline void System::Collections::Generic::SortedSet_1<T>::UpdateVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(), { "UpdateVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline bool System::Collections::Generic::SortedSet_1<T>::HasEqualComparer(::System::Collections::Generic::SortedSet_1<T>* other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(),
                                                                                         { "HasEqualComparer", {}, { ::i2c::type_of<::System::Collections::Generic::SortedSet_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
template <typename T> inline void System::Collections::Generic::SortedSet_1<T>::UnionWith(::System::Collections::Generic::IEnumerable_1<T>* other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(),
                                                                                         { "UnionWith", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
template <typename T>
inline ::System::Collections::Generic::SortedSet_1_Node<T>* System::Collections::Generic::SortedSet_1<T>::ConstructRootFromSortedArray(::ArrayW<T> arr, int32_t startIndex, int32_t endIndex,
                                                                                                                                       ::System::Collections::Generic::SortedSet_1_Node<T>* redNode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(),
                          { "ConstructRootFromSortedArray",
                            {},
                            { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::SortedSet_1_Node<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::SortedSet_1_Node<T>*>(nullptr, ___internal_method, arr, startIndex, endIndex, redNode);
}
template <typename T> inline void System::Collections::Generic::SortedSet_1<T>::IntersectWith(::System::Collections::Generic::IEnumerable_1<T>* other) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
template <typename T> inline void System::Collections::Generic::SortedSet_1<T>::IntersectWithEnumerable(::System::Collections::Generic::IEnumerable_1<T>* other) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
template <typename T> inline void System::Collections::Generic::SortedSet_1<T>::ExceptWith(::System::Collections::Generic::IEnumerable_1<T>* other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(),
                                                                                         { "ExceptWith", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
template <typename T> inline void System::Collections::Generic::SortedSet_1<T>::SymmetricExceptWith(::System::Collections::Generic::IEnumerable_1<T>* other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(),
                                                                                         { "SymmetricExceptWith", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
template <typename T> inline void System::Collections::Generic::SortedSet_1<T>::SymmetricExceptWithSameComparer(::System::Collections::Generic::SortedSet_1<T>* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(),
                                                           { "SymmetricExceptWithSameComparer", {}, { ::i2c::type_of<::System::Collections::Generic::SortedSet_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
template <typename T> inline void System::Collections::Generic::SortedSet_1<T>::SymmetricExceptWithSameComparer(::ArrayW<T> other, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(),
                                                                                         { "SymmetricExceptWithSameComparer", {}, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other, count);
}
template <typename T> inline bool System::Collections::Generic::SortedSet_1<T>::IsSubsetOf(::System::Collections::Generic::IEnumerable_1<T>* other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(),
                                                                                         { "IsSubsetOf", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
template <typename T> inline bool System::Collections::Generic::SortedSet_1<T>::IsSubsetOfSortedSetWithSameComparer(::System::Collections::Generic::SortedSet_1<T>* asSorted) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(),
                                                           { "IsSubsetOfSortedSetWithSameComparer", {}, { ::i2c::type_of<::System::Collections::Generic::SortedSet_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, asSorted);
}
template <typename T> inline bool System::Collections::Generic::SortedSet_1<T>::IsProperSubsetOf(::System::Collections::Generic::IEnumerable_1<T>* other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(),
                                                                                         { "IsProperSubsetOf", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
template <typename T> inline bool System::Collections::Generic::SortedSet_1<T>::IsSupersetOf(::System::Collections::Generic::IEnumerable_1<T>* other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(),
                                                                                         { "IsSupersetOf", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
template <typename T> inline bool System::Collections::Generic::SortedSet_1<T>::IsProperSupersetOf(::System::Collections::Generic::IEnumerable_1<T>* other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(),
                                                                                         { "IsProperSupersetOf", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
template <typename T> inline bool System::Collections::Generic::SortedSet_1<T>::SetEquals(::System::Collections::Generic::IEnumerable_1<T>* other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(),
                                                                                         { "SetEquals", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
template <typename T> inline bool System::Collections::Generic::SortedSet_1<T>::Overlaps(::System::Collections::Generic::IEnumerable_1<T>* other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(),
                                                                                         { "Overlaps", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
template <typename T>
inline ::System::Collections::Generic::SortedSet_1_ElementCount<T> System::Collections::Generic::SortedSet_1<T>::CheckUniqueAndUnfoundElements(::System::Collections::Generic::IEnumerable_1<T>* other,
                                                                                                                                               bool returnIfUnfound) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(),
                                                           { "CheckUniqueAndUnfoundElements", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::SortedSet_1_ElementCount<T>>(this, ___internal_method, other, returnIfUnfound);
}
template <typename T> inline T System::Collections::Generic::SortedSet_1<T>::get_Min() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(), { "get_Min", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline T System::Collections::Generic::SortedSet_1<T>::get_MinInternal() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline T System::Collections::Generic::SortedSet_1<T>::get_Max() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(), { "get_Max", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline T System::Collections::Generic::SortedSet_1<T>::get_MaxInternal() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::SortedSet_1<T>* System::Collections::Generic::SortedSet_1<T>::GetViewBetween(T lowerValue, T upperValue) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::SortedSet_1<T>*>(this, ___internal_method, lowerValue, upperValue);
}
template <typename T>
inline void System::Collections::Generic::SortedSet_1<T>::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                                   ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(),
                                              { "System.Runtime.Serialization.ISerializable.GetObjectData",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
template <typename T>
inline void System::Collections::Generic::SortedSet_1<T>::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
template <typename T> inline void System::Collections::Generic::SortedSet_1<T>::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(),
                                                           { "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender);
}
template <typename T> inline void System::Collections::Generic::SortedSet_1<T>::OnDeserialization(::System::Object* sender) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender);
}
template <typename T> inline int32_t System::Collections::Generic::SortedSet_1<T>::Log2(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedSet_1<T>*>(), { "Log2", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
template <typename T> inline ::System::Collections::Generic::SortedSet_1<T>* System::Collections::Generic::SortedSet_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Generic::SortedSet_1<T>*>());
}
template <typename T> inline ::System::Collections::Generic::SortedSet_1<T>* System::Collections::Generic::SortedSet_1<T>::New_ctor(::System::Collections::Generic::IComparer_1<T>* comparer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Generic::SortedSet_1<T>*>(comparer));
}
template <typename T>
inline ::System::Collections::Generic::SortedSet_1<T>* System::Collections::Generic::SortedSet_1<T>::New_ctor(::System::Collections::Generic::IEnumerable_1<T>* collection,
                                                                                                              ::System::Collections::Generic::IComparer_1<T>* comparer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Generic::SortedSet_1<T>*>(collection, comparer));
}
template <typename T>
inline ::System::Collections::Generic::SortedSet_1<T>* System::Collections::Generic::SortedSet_1<T>::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                              ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Generic::SortedSet_1<T>*>(info, context));
}
/// @brief Convert operator to "::System::Collections::Generic::ISet_1<T>"
template <typename T> constexpr System::Collections::Generic::SortedSet_1<T>::operator ::System::Collections::Generic::ISet_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::ISet_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ISet_1<T>"
template <typename T> constexpr ::System::Collections::Generic::ISet_1<T>* System::Collections::Generic::SortedSet_1<T>::i___System__Collections__Generic__ISet_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::ISet_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
template <typename T> constexpr System::Collections::Generic::SortedSet_1<T>::operator ::System::Collections::Generic::ICollection_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<T>"
template <typename T> constexpr ::System::Collections::Generic::ICollection_1<T>* System::Collections::Generic::SortedSet_1<T>::i___System__Collections__Generic__ICollection_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr System::Collections::Generic::SortedSet_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerable_1<T>* System::Collections::Generic::SortedSet_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr System::Collections::Generic::SortedSet_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* System::Collections::Generic::SortedSet_1<T>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
template <typename T> constexpr System::Collections::Generic::SortedSet_1<T>::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
template <typename T> constexpr ::System::Collections::ICollection* System::Collections::Generic::SortedSet_1<T>::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
template <typename T> constexpr System::Collections::Generic::SortedSet_1<T>::operator ::System::Collections::Generic::IReadOnlyCollection_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
template <typename T>
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<T>* System::Collections::Generic::SortedSet_1<T>::i___System__Collections__Generic__IReadOnlyCollection_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
template <typename T> constexpr System::Collections::Generic::SortedSet_1<T>::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
template <typename T> constexpr ::System::Runtime::Serialization::ISerializable* System::Collections::Generic::SortedSet_1<T>::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
template <typename T> constexpr System::Collections::Generic::SortedSet_1<T>::operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
template <typename T>
constexpr ::System::Runtime::Serialization::IDeserializationCallback* System::Collections::Generic::SortedSet_1<T>::i___System__Runtime__Serialization__IDeserializationCallback() noexcept {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Generic::SortedSet_1<T>::SortedSet_1() {}
