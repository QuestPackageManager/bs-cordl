#pragma once
#include "System/Data/zzzz__RBTree_1_impl.hpp"
#include "System/Data/zzzz__TreeAccessMethod_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__RBTree_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Data/zzzz__RBTree_1_def.hpp"
#include "System/Data/zzzz__TreeAccessMethod_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename K> constexpr ::System::Data::__RBTree_1__NodeColor<K>::__RBTree_1__NodeColor(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
template <typename K> constexpr ::System::Data::__RBTree_1__NodeColor<K>::__RBTree_1__NodeColor() {}
template <typename K> constexpr ::System::Data::__RBTree_1__NodeColor<K> System::Data::__RBTree_1__NodeColor<K>::red{ static_cast<int32_t>(0x0) };
template <typename K> constexpr ::System::Data::__RBTree_1__NodeColor<K> System::Data::__RBTree_1__NodeColor<K>::black{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "_selfId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_leftId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "_rightId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_parentId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_nextId", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_subTreeSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_keyOfNode", ty: "K", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "_nodeColor", ty: "::System::Data::__RBTree_1__NodeColor<K>", modifiers: "", def_value: Some("{}") }]
template <typename K>
constexpr ::System::Data::__RBTree_1__Node<K>::__RBTree_1__Node(int32_t _selfId, int32_t _leftId, int32_t _rightId, int32_t _parentId, int32_t _nextId, int32_t _subTreeSize, K _keyOfNode,
                                                                ::System::Data::__RBTree_1__NodeColor<K> _nodeColor) noexcept {
  this->_selfId = _selfId;
  this->_leftId = _leftId;
  this->_rightId = _rightId;
  this->_parentId = _parentId;
  this->_nextId = _nextId;
  this->_subTreeSize = _subTreeSize;
  this->_keyOfNode = _keyOfNode;
  this->_nodeColor = _nodeColor;
}
// Ctor Parameters []
template <typename K> constexpr ::System::Data::__RBTree_1__Node<K>::__RBTree_1__Node() {}
template <typename K> inline void System::Data::__RBTree_1__NodePath<K>::_ctor(int32_t nodeID, int32_t mainTreeNodeID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__RBTree_1__NodePath<K>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nodeID, mainTreeNodeID);
}
// Ctor Parameters [CppParam { name: "_nodeID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_mainTreeNodeID", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename K> constexpr ::System::Data::__RBTree_1__NodePath<K>::__RBTree_1__NodePath(int32_t _nodeID, int32_t _mainTreeNodeID) noexcept {
  this->_nodeID = _nodeID;
  this->_mainTreeNodeID = _mainTreeNodeID;
}
// Ctor Parameters []
template <typename K> constexpr ::System::Data::__RBTree_1__NodePath<K>::__RBTree_1__NodePath() {}
template <typename K> constexpr ::ArrayW<::System::Data::__RBTree_1__Node<K>, ::Array<::System::Data::__RBTree_1__Node<K>>*>& System::Data::__RBTree_1__TreePage<K>::__cordl_internal_get__slots() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____slots;
}
template <typename K>
constexpr ::ArrayW<::System::Data::__RBTree_1__Node<K>, ::Array<::System::Data::__RBTree_1__Node<K>>*> const& System::Data::__RBTree_1__TreePage<K>::__cordl_internal_get__slots() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____slots;
}
template <typename K>
constexpr void System::Data::__RBTree_1__TreePage<K>::__cordl_internal_set__slots(::ArrayW<::System::Data::__RBTree_1__Node<K>, ::Array<::System::Data::__RBTree_1__Node<K>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____slots)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename K> constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& System::Data::__RBTree_1__TreePage<K>::__cordl_internal_get__slotMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____slotMap;
}
template <typename K> constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& System::Data::__RBTree_1__TreePage<K>::__cordl_internal_get__slotMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____slotMap;
}
template <typename K> constexpr void System::Data::__RBTree_1__TreePage<K>::__cordl_internal_set__slotMap(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____slotMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename K> constexpr int32_t& System::Data::__RBTree_1__TreePage<K>::__cordl_internal_get__inUseCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inUseCount;
}
template <typename K> constexpr int32_t const& System::Data::__RBTree_1__TreePage<K>::__cordl_internal_get__inUseCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inUseCount;
}
template <typename K> constexpr void System::Data::__RBTree_1__TreePage<K>::__cordl_internal_set__inUseCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inUseCount = value;
}
template <typename K> constexpr int32_t& System::Data::__RBTree_1__TreePage<K>::__cordl_internal_get__pageId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pageId;
}
template <typename K> constexpr int32_t const& System::Data::__RBTree_1__TreePage<K>::__cordl_internal_get__pageId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pageId;
}
template <typename K> constexpr void System::Data::__RBTree_1__TreePage<K>::__cordl_internal_set__pageId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pageId = value;
}
template <typename K> constexpr int32_t& System::Data::__RBTree_1__TreePage<K>::__cordl_internal_get__nextFreeSlotLine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextFreeSlotLine;
}
template <typename K> constexpr int32_t const& System::Data::__RBTree_1__TreePage<K>::__cordl_internal_get__nextFreeSlotLine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextFreeSlotLine;
}
template <typename K> constexpr void System::Data::__RBTree_1__TreePage<K>::__cordl_internal_set__nextFreeSlotLine(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nextFreeSlotLine = value;
}
template <typename K> inline ::System::Data::__RBTree_1__TreePage<K>* System::Data::__RBTree_1__TreePage<K>::New_ctor(int32_t size) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::__RBTree_1__TreePage<K>*>(size));
}
template <typename K> inline void System::Data::__RBTree_1__TreePage<K>::_ctor(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__RBTree_1__TreePage<K>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, size);
}
template <typename K> inline int32_t System::Data::__RBTree_1__TreePage<K>::AllocSlot(::System::Data::RBTree_1<K>* tree) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__RBTree_1__TreePage<K>*>::get(), "AllocSlot", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::RBTree_1<K>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, tree);
}
template <typename K> inline int32_t System::Data::__RBTree_1__TreePage<K>::get_InUseCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__RBTree_1__TreePage<K>*>::get(), "get_InUseCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename K> inline void System::Data::__RBTree_1__TreePage<K>::set_InUseCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__RBTree_1__TreePage<K>*>::get(), "set_InUseCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename K> inline int32_t System::Data::__RBTree_1__TreePage<K>::get_PageId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__RBTree_1__TreePage<K>*>::get(), "get_PageId",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename K> inline void System::Data::__RBTree_1__TreePage<K>::set_PageId(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__RBTree_1__TreePage<K>*>::get(), "set_PageId",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
template <typename K> constexpr ::System::Data::__RBTree_1__TreePage<K>::__RBTree_1__TreePage() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<K>"
template <typename K> constexpr System::Data::__RBTree_1__RBTreeEnumerator<K>::operator ::System::Collections::Generic::IEnumerator_1<K>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<K>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<K>"
template <typename K> constexpr ::System::Collections::Generic::IEnumerator_1<K>* System::Data::__RBTree_1__RBTreeEnumerator<K>::i___System__Collections__Generic__IEnumerator_1_K_() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<K>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename K> constexpr System::Data::__RBTree_1__RBTreeEnumerator<K>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
template <typename K> constexpr ::System::IDisposable* System::Data::__RBTree_1__RBTreeEnumerator<K>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename K> constexpr System::Data::__RBTree_1__RBTreeEnumerator<K>::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename K> constexpr ::System::Collections::IEnumerator* System::Data::__RBTree_1__RBTreeEnumerator<K>::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename K> inline void System::Data::__RBTree_1__RBTreeEnumerator<K>::_ctor(::System::Data::RBTree_1<K>* tree) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__RBTree_1__RBTreeEnumerator<K>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::RBTree_1<K>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tree);
}
template <typename K> inline void System::Data::__RBTree_1__RBTreeEnumerator<K>::_ctor(::System::Data::RBTree_1<K>* tree, int32_t position) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__RBTree_1__RBTreeEnumerator<K>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::RBTree_1<K>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tree, position);
}
template <typename K> inline void System::Data::__RBTree_1__RBTreeEnumerator<K>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__RBTree_1__RBTreeEnumerator<K>>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename K> inline bool System::Data::__RBTree_1__RBTreeEnumerator<K>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__RBTree_1__RBTreeEnumerator<K>>::get(), "MoveNext",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename K> inline K System::Data::__RBTree_1__RBTreeEnumerator<K>::get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__RBTree_1__RBTreeEnumerator<K>>::get(),
                                                                             "get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<K, false>(this, ___internal_method);
}
template <typename K> inline ::System::Object* System::Data::__RBTree_1__RBTreeEnumerator<K>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__RBTree_1__RBTreeEnumerator<K>>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename K> inline void System::Data::__RBTree_1__RBTreeEnumerator<K>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__RBTree_1__RBTreeEnumerator<K>>::get(), "System.Collections.IEnumerator.Reset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_tree", ty: "::System::Data::RBTree_1<K>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_mainTreeNodeId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "_current", ty: "K", modifiers: "", def_value: Some("nullptr") }]
template <typename K>
constexpr ::System::Data::__RBTree_1__RBTreeEnumerator<K>::__RBTree_1__RBTreeEnumerator(::System::Data::RBTree_1<K>* _tree, int32_t _version, int32_t _index, int32_t _mainTreeNodeId,
                                                                                        K _current) noexcept {
  this->_tree = _tree;
  this->_version = _version;
  this->_index = _index;
  this->_mainTreeNodeId = _mainTreeNodeId;
  this->_current = _current;
}
// Ctor Parameters []
template <typename K> constexpr ::System::Data::__RBTree_1__RBTreeEnumerator<K>::__RBTree_1__RBTreeEnumerator() {}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename K> constexpr System::Data::RBTree_1<K>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename K> constexpr ::System::Collections::IEnumerable* System::Data::RBTree_1<K>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
template <typename K> constexpr ::ArrayW<::System::Data::__RBTree_1__TreePage<K>*, ::Array<::System::Data::__RBTree_1__TreePage<K>*>*>& System::Data::RBTree_1<K>::__cordl_internal_get__pageTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pageTable;
}
template <typename K>
constexpr ::ArrayW<::System::Data::__RBTree_1__TreePage<K>*, ::Array<::System::Data::__RBTree_1__TreePage<K>*>*> const& System::Data::RBTree_1<K>::__cordl_internal_get__pageTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pageTable;
}
template <typename K>
constexpr void System::Data::RBTree_1<K>::__cordl_internal_set__pageTable(::ArrayW<::System::Data::__RBTree_1__TreePage<K>*, ::Array<::System::Data::__RBTree_1__TreePage<K>*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pageTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename K> constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& System::Data::RBTree_1<K>::__cordl_internal_get__pageTableMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pageTableMap;
}
template <typename K> constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& System::Data::RBTree_1<K>::__cordl_internal_get__pageTableMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pageTableMap;
}
template <typename K> constexpr void System::Data::RBTree_1<K>::__cordl_internal_set__pageTableMap(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pageTableMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename K> constexpr int32_t& System::Data::RBTree_1<K>::__cordl_internal_get__inUsePageCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inUsePageCount;
}
template <typename K> constexpr int32_t const& System::Data::RBTree_1<K>::__cordl_internal_get__inUsePageCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inUsePageCount;
}
template <typename K> constexpr void System::Data::RBTree_1<K>::__cordl_internal_set__inUsePageCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inUsePageCount = value;
}
template <typename K> constexpr int32_t& System::Data::RBTree_1<K>::__cordl_internal_get__nextFreePageLine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextFreePageLine;
}
template <typename K> constexpr int32_t const& System::Data::RBTree_1<K>::__cordl_internal_get__nextFreePageLine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextFreePageLine;
}
template <typename K> constexpr void System::Data::RBTree_1<K>::__cordl_internal_set__nextFreePageLine(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nextFreePageLine = value;
}
template <typename K> constexpr int32_t& System::Data::RBTree_1<K>::__cordl_internal_get_root() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___root;
}
template <typename K> constexpr int32_t const& System::Data::RBTree_1<K>::__cordl_internal_get_root() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___root;
}
template <typename K> constexpr void System::Data::RBTree_1<K>::__cordl_internal_set_root(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___root = value;
}
template <typename K> constexpr int32_t& System::Data::RBTree_1<K>::__cordl_internal_get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
template <typename K> constexpr int32_t const& System::Data::RBTree_1<K>::__cordl_internal_get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
template <typename K> constexpr void System::Data::RBTree_1<K>::__cordl_internal_set__version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____version = value;
}
template <typename K> constexpr int32_t& System::Data::RBTree_1<K>::__cordl_internal_get__inUseNodeCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inUseNodeCount;
}
template <typename K> constexpr int32_t const& System::Data::RBTree_1<K>::__cordl_internal_get__inUseNodeCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inUseNodeCount;
}
template <typename K> constexpr void System::Data::RBTree_1<K>::__cordl_internal_set__inUseNodeCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inUseNodeCount = value;
}
template <typename K> constexpr int32_t& System::Data::RBTree_1<K>::__cordl_internal_get__inUseSatelliteTreeCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inUseSatelliteTreeCount;
}
template <typename K> constexpr int32_t const& System::Data::RBTree_1<K>::__cordl_internal_get__inUseSatelliteTreeCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inUseSatelliteTreeCount;
}
template <typename K> constexpr void System::Data::RBTree_1<K>::__cordl_internal_set__inUseSatelliteTreeCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inUseSatelliteTreeCount = value;
}
template <typename K> constexpr ::System::Data::TreeAccessMethod& System::Data::RBTree_1<K>::__cordl_internal_get__accessMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____accessMethod;
}
template <typename K> constexpr ::System::Data::TreeAccessMethod const& System::Data::RBTree_1<K>::__cordl_internal_get__accessMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____accessMethod;
}
template <typename K> constexpr void System::Data::RBTree_1<K>::__cordl_internal_set__accessMethod(::System::Data::TreeAccessMethod value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____accessMethod = value;
}
template <typename K> inline int32_t System::Data::RBTree_1<K>::CompareNode(K record1, K record2) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, record1, record2);
}
template <typename K> inline int32_t System::Data::RBTree_1<K>::CompareSateliteTreeNode(K record1, K record2) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, record1, record2);
}
template <typename K> inline ::System::Data::RBTree_1<K>* System::Data::RBTree_1<K>::New_ctor(::System::Data::TreeAccessMethod accessMethod) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::RBTree_1<K>*>(accessMethod));
}
template <typename K> inline void System::Data::RBTree_1<K>::_ctor(::System::Data::TreeAccessMethod accessMethod) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::TreeAccessMethod>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, accessMethod);
}
template <typename K> inline void System::Data::RBTree_1<K>::InitTree() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "InitTree",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename K> inline void System::Data::RBTree_1<K>::FreePage(::System::Data::__RBTree_1__TreePage<K>* page) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "FreePage", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::__RBTree_1__TreePage<K>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, page);
}
template <typename K> inline ::System::Data::__RBTree_1__TreePage<K>* System::Data::RBTree_1<K>::AllocPage(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "AllocPage", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::__RBTree_1__TreePage<K>*, false>(this, ___internal_method, size);
}
template <typename K> inline void System::Data::RBTree_1<K>::MarkPageFull(::System::Data::__RBTree_1__TreePage<K>* page) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "MarkPageFull", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::__RBTree_1__TreePage<K>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, page);
}
template <typename K> inline void System::Data::RBTree_1<K>::MarkPageFree(::System::Data::__RBTree_1__TreePage<K>* page) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "MarkPageFree", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::__RBTree_1__TreePage<K>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, page);
}
template <typename K> inline int32_t System::Data::RBTree_1<K>::GetIntValueFromBitMap(uint32_t bitMap) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "GetIntValueFromBitMap", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, bitMap);
}
template <typename K> inline void System::Data::RBTree_1<K>::FreeNode(int32_t nodeId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "FreeNode", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nodeId);
}
template <typename K> inline int32_t System::Data::RBTree_1<K>::GetIndexOfPageWithFreeSlot(bool allocatedPage) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "GetIndexOfPageWithFreeSlot",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, allocatedPage);
}
template <typename K> inline int32_t System::Data::RBTree_1<K>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "get_Count",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename K> inline bool System::Data::RBTree_1<K>::get_HasDuplicates() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "get_HasDuplicates",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename K> inline int32_t System::Data::RBTree_1<K>::GetNewNode(K key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "GetNewNode", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<K>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, key);
}
template <typename K> inline int32_t System::Data::RBTree_1<K>::Successor(int32_t x_id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "Successor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x_id);
}
template <typename K> inline bool System::Data::RBTree_1<K>::Successor(ByRef<int32_t> nodeId, ByRef<int32_t> mainTreeNodeId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "Successor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeId, mainTreeNodeId);
}
template <typename K> inline int32_t System::Data::RBTree_1<K>::Minimum(int32_t x_id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "Minimum", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x_id);
}
template <typename K> inline int32_t System::Data::RBTree_1<K>::LeftRotate(int32_t root_id, int32_t x_id, int32_t mainTreeNode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "LeftRotate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, root_id, x_id, mainTreeNode);
}
template <typename K> inline int32_t System::Data::RBTree_1<K>::RightRotate(int32_t root_id, int32_t x_id, int32_t mainTreeNode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "RightRotate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, root_id, x_id, mainTreeNode);
}
template <typename K> inline int32_t System::Data::RBTree_1<K>::RBInsert(int32_t root_id, int32_t x_id, int32_t mainTreeNodeID, int32_t position, bool append) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "RBInsert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, root_id, x_id, mainTreeNodeID, position, append);
}
template <typename K> inline void System::Data::RBTree_1<K>::UpdateNodeKey(K currentKey, K newKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "UpdateNodeKey", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<K>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<K>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentKey, newKey);
}
template <typename K> inline K System::Data::RBTree_1<K>::DeleteByIndex(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "DeleteByIndex", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<K, false>(this, ___internal_method, i);
}
template <typename K> inline int32_t System::Data::RBTree_1<K>::RBDelete(int32_t z_id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "RBDelete", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, z_id);
}
template <typename K> inline int32_t System::Data::RBTree_1<K>::RBDeleteX(int32_t root_id, int32_t z_id, int32_t mainTreeNodeID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "RBDeleteX", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, root_id, z_id, mainTreeNodeID);
}
template <typename K> inline int32_t System::Data::RBTree_1<K>::RBDeleteFixup(int32_t root_id, int32_t x_id, int32_t px_id, int32_t mainTreeNodeID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "RBDeleteFixup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, root_id, x_id, px_id, mainTreeNodeID);
}
template <typename K> inline int32_t System::Data::RBTree_1<K>::SearchSubTree(int32_t root_id, K key) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "SearchSubTree", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<K>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, root_id, key);
}
template <typename K> inline K System::Data::RBTree_1<K>::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<K, false>(this, ___internal_method, index);
}
template <typename K> inline ::System::Data::__RBTree_1__NodePath<K> System::Data::RBTree_1<K>::GetNodeByKey(K key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "GetNodeByKey", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<K>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::__RBTree_1__NodePath<K>, false>(this, ___internal_method, key);
}
template <typename K> inline int32_t System::Data::RBTree_1<K>::GetIndexByKey(K key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "GetIndexByKey", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<K>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, key);
}
template <typename K> inline int32_t System::Data::RBTree_1<K>::GetIndexByNode(int32_t node) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "GetIndexByNode", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, node);
}
template <typename K> inline int32_t System::Data::RBTree_1<K>::GetIndexByNodePath(::System::Data::__RBTree_1__NodePath<K> path) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "GetIndexByNodePath", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::__RBTree_1__NodePath<K>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, path);
}
template <typename K> inline int32_t System::Data::RBTree_1<K>::ComputeIndexByNode(int32_t nodeId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "ComputeIndexByNode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, nodeId);
}
template <typename K> inline int32_t System::Data::RBTree_1<K>::ComputeIndexWithSatelliteByNode(int32_t nodeId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "ComputeIndexWithSatelliteByNode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, nodeId);
}
template <typename K> inline ::System::Data::__RBTree_1__NodePath<K> System::Data::RBTree_1<K>::GetNodeByIndex(int32_t userIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "GetNodeByIndex", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::__RBTree_1__NodePath<K>, false>(this, ___internal_method, userIndex);
}
template <typename K> inline int32_t System::Data::RBTree_1<K>::ComputeNodeByIndex(int32_t index, ByRef<int32_t> satelliteRootId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "ComputeNodeByIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, index, satelliteRootId);
}
template <typename K> inline int32_t System::Data::RBTree_1<K>::ComputeNodeByIndex(int32_t x_id, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "ComputeNodeByIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x_id, index);
}
template <typename K> inline int32_t System::Data::RBTree_1<K>::Insert(K item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "Insert", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<K>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, item);
}
template <typename K> inline int32_t System::Data::RBTree_1<K>::Add(K item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<K>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, item);
}
template <typename K> inline ::System::Collections::IEnumerator* System::Data::RBTree_1<K>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "GetEnumerator",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
template <typename K> inline int32_t System::Data::RBTree_1<K>::IndexOf(int32_t nodeId, K item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "IndexOf", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<K>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, nodeId, item);
}
template <typename K> inline int32_t System::Data::RBTree_1<K>::Insert(int32_t position, K item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "Insert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<K>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, position, item);
}
template <typename K> inline int32_t System::Data::RBTree_1<K>::InsertAt(int32_t position, K item, bool append) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "InsertAt", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<K>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, position, item, append);
}
template <typename K> inline void System::Data::RBTree_1<K>::RemoveAt(int32_t position) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "RemoveAt", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position);
}
template <typename K> inline void System::Data::RBTree_1<K>::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename K> inline void System::Data::RBTree_1<K>::CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "CopyTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, index);
}
template <typename K> inline void System::Data::RBTree_1<K>::CopyTo(::ArrayW<K, ::Array<K>*> array, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "CopyTo", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<K, ::Array<K>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, index);
}
template <typename K> inline void System::Data::RBTree_1<K>::SetRight(int32_t nodeId, int32_t rightNodeId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "SetRight", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nodeId, rightNodeId);
}
template <typename K> inline void System::Data::RBTree_1<K>::SetLeft(int32_t nodeId, int32_t leftNodeId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "SetLeft", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nodeId, leftNodeId);
}
template <typename K> inline void System::Data::RBTree_1<K>::SetParent(int32_t nodeId, int32_t parentNodeId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "SetParent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nodeId, parentNodeId);
}
template <typename K> inline void System::Data::RBTree_1<K>::SetColor(int32_t nodeId, ::System::Data::__RBTree_1__NodeColor<K> color) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "SetColor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::__RBTree_1__NodeColor<K>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nodeId, color);
}
template <typename K> inline void System::Data::RBTree_1<K>::SetKey(int32_t nodeId, K key) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "SetKey", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<K>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nodeId, key);
}
template <typename K> inline void System::Data::RBTree_1<K>::SetNext(int32_t nodeId, int32_t nextNodeId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "SetNext", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nodeId, nextNodeId);
}
template <typename K> inline void System::Data::RBTree_1<K>::SetSubTreeSize(int32_t nodeId, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "SetSubTreeSize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nodeId, size);
}
template <typename K> inline void System::Data::RBTree_1<K>::IncreaseSize(int32_t nodeId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "IncreaseSize", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nodeId);
}
template <typename K> inline void System::Data::RBTree_1<K>::RecomputeSize(int32_t nodeId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "RecomputeSize", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nodeId);
}
template <typename K> inline void System::Data::RBTree_1<K>::DecreaseSize(int32_t nodeId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "DecreaseSize", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nodeId);
}
template <typename K> inline int32_t System::Data::RBTree_1<K>::Right(int32_t nodeId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "Right", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, nodeId);
}
template <typename K> inline int32_t System::Data::RBTree_1<K>::Left(int32_t nodeId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "Left", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, nodeId);
}
template <typename K> inline int32_t System::Data::RBTree_1<K>::Parent(int32_t nodeId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "Parent", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, nodeId);
}
template <typename K> inline ::System::Data::__RBTree_1__NodeColor<K> System::Data::RBTree_1<K>::color(int32_t nodeId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "color", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::__RBTree_1__NodeColor<K>, false>(this, ___internal_method, nodeId);
}
template <typename K> inline int32_t System::Data::RBTree_1<K>::Next(int32_t nodeId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "Next", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, nodeId);
}
template <typename K> inline int32_t System::Data::RBTree_1<K>::SubTreeSize(int32_t nodeId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "SubTreeSize", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, nodeId);
}
template <typename K> inline K System::Data::RBTree_1<K>::Key(int32_t nodeId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::RBTree_1<K>*>::get(), "Key", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<K, false>(this, ___internal_method, nodeId);
}
// Ctor Parameters []
template <typename K> constexpr ::System::Data::RBTree_1<K>::RBTree_1() {}
