#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/KdTree/KdTreeNode_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
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
// Dependencies System.Object
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: UnityEngine.ProBuilder.KdTree.KdTreeNode`2<TKey,TValue>
class CORDL_TYPE KdTreeNode_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field Duplicates, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Duplicates, put = __cordl_internal_set_Duplicates)) ::System::Collections::Generic::List_1<TValue>* Duplicates;

  __declspec(property(get = get_IsLeaf)) bool IsLeaf;

  __declspec(property(get = get_Item, put = set_Item)) ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* Item[];

  /// @brief Field LeftChild, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_LeftChild, put = __cordl_internal_set_LeftChild)) ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* LeftChild;

  /// @brief Field Point, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Point, put = __cordl_internal_set_Point)) ::ArrayW<TKey, ::Array<TKey>*> Point;

  /// @brief Field RightChild, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_RightChild, put = __cordl_internal_set_RightChild)) ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* RightChild;

  /// @brief Field Value, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Value, put = __cordl_internal_set_Value)) TValue Value;

  /// @brief Method AddDuplicate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddDuplicate(TValue value);

  static inline ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* New_ctor();

  static inline ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* New_ctor(::ArrayW<TKey, ::Array<TKey>*> point, TValue value);

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::Collections::Generic::List_1<TValue>* const& __cordl_internal_get_Duplicates() const;

  constexpr ::System::Collections::Generic::List_1<TValue>*& __cordl_internal_get_Duplicates();

  constexpr ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* const& __cordl_internal_get_LeftChild() const;

  constexpr ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*& __cordl_internal_get_LeftChild();

  constexpr ::ArrayW<TKey, ::Array<TKey>*> const& __cordl_internal_get_Point() const;

  constexpr ::ArrayW<TKey, ::Array<TKey>*>& __cordl_internal_get_Point();

  constexpr ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* const& __cordl_internal_get_RightChild() const;

  constexpr ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*& __cordl_internal_get_RightChild();

  constexpr TValue const& __cordl_internal_get_Value() const;

  constexpr TValue& __cordl_internal_get_Value();

  constexpr void __cordl_internal_set_Duplicates(::System::Collections::Generic::List_1<TValue>* value);

  constexpr void __cordl_internal_set_LeftChild(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* value);

  constexpr void __cordl_internal_set_Point(::ArrayW<TKey, ::Array<TKey>*> value);

  constexpr void __cordl_internal_set_RightChild(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* value);

  constexpr void __cordl_internal_set_Value(TValue value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<TKey, ::Array<TKey>*> point, TValue value);

  /// @brief Method get_IsLeaf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsLeaf();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* get_Item(int32_t compare);

  /// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Item(int32_t compare, ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KdTreeNode_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KdTreeNode_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KdTreeNode_2(KdTreeNode_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KdTreeNode_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KdTreeNode_2(KdTreeNode_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18548 };

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
