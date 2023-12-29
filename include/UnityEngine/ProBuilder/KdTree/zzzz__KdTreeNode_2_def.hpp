#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KdTreeNode_2)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::KdTree {
template <typename TKey, typename TValue> class KdTreeNode_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2);
// Type: UnityEngine.ProBuilder.KdTree::KdTreeNode`2
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15811))
// CS Name: ::UnityEngine.ProBuilder.KdTree::KdTreeNode`2<TKey,TValue>*
class CORDL_TYPE KdTreeNode_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field Point, offset 0x10, size 0x8
  __declspec(property(get = __get_Point, put = __set_Point))::ArrayW<TKey, ::Array<TKey>*> Point;

  /// @brief Field Value, offset 0x18, size 0x8
  __declspec(property(get = __get_Value, put = __set_Value)) TValue Value;

  /// @brief Field Duplicates, offset 0x20, size 0x8
  __declspec(property(get = __get_Duplicates, put = __set_Duplicates))::System::Collections::Generic::List_1<TValue>* Duplicates;

  /// @brief Field LeftChild, offset 0x28, size 0x8
  __declspec(property(get = __get_LeftChild, put = __set_LeftChild))::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* LeftChild;

  /// @brief Field RightChild, offset 0x30, size 0x8
  __declspec(property(get = __get_RightChild, put = __set_RightChild))::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* RightChild;

  __declspec(property(get = get_Item, put = set_Item))::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* Item[];

  __declspec(property(get = get_IsLeaf)) bool IsLeaf;

  constexpr ::ArrayW<TKey, ::Array<TKey>*>& __get_Point();

  constexpr ::ArrayW<TKey, ::Array<TKey>*> const& __get_Point() const;

  constexpr void __set_Point(::ArrayW<TKey, ::Array<TKey>*> value);

  constexpr TValue& __get_Value();

  constexpr TValue const& __get_Value() const;

  constexpr void __set_Value(TValue value);

  constexpr ::System::Collections::Generic::List_1<TValue>*& __get_Duplicates();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<TValue>*> const& __get_Duplicates() const;

  constexpr void __set_Duplicates(::System::Collections::Generic::List_1<TValue>* value);

  constexpr ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*& __get_LeftChild();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*> const& __get_LeftChild() const;

  constexpr void __set_LeftChild(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* value);

  constexpr ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*& __get_RightChild();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*> const& __get_RightChild() const;

  constexpr void __set_RightChild(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* value);

  static inline ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  static inline ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* New_ctor(::ArrayW<TKey, ::Array<TKey>*> point, TValue value);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::ArrayW<TKey, ::Array<TKey>*> point, TValue value);

  /// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* get_Item(int32_t compare);

  /// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void set_Item(int32_t compare, ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* value);

  /// @brief Method get_IsLeaf addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool get_IsLeaf();

  /// @brief Method AddDuplicate addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void AddDuplicate(TValue value);

  /// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "KdTreeNode_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KdTreeNode_2(KdTreeNode_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KdTreeNode_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KdTreeNode_2(KdTreeNode_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KdTreeNode_2();

public:
  /// @brief Field Point, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<TKey, ::Array<TKey>*> ___Point;

  /// @brief Field Value, offset: 0x18, size: 0x8, def value: None
  TValue ___Value;

  /// @brief Field Duplicates, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<TValue>* ___Duplicates;

  /// @brief Field LeftChild, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* ___LeftChild;

  /// @brief Field RightChild, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* ___RightChild;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ProBuilder::KdTree
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2, "UnityEngine.ProBuilder.KdTree", "KdTreeNode`2");
