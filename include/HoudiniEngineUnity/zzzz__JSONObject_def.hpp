#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__JSONNode_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JSONObject)
namespace HoudiniEngineUnity {
class JSONNode;
}
namespace HoudiniEngineUnity {
struct JSONTextMode;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace HoudiniEngineUnity {
class __JSONObject___get_Children_d__23;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Text {
class StringBuilder;
}
namespace HoudiniEngineUnity {
class __JSONObject____c__DisplayClass21_0;
}
namespace HoudiniEngineUnity {
struct JSONNodeType;
}
namespace HoudiniEngineUnity {
struct __JSONNode__Enumerator;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class JSONObject;
}
namespace HoudiniEngineUnity {
class __JSONObject____c__DisplayClass21_0;
}
namespace HoudiniEngineUnity {
class __JSONObject___get_Children_d__23;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::JSONObject);
MARK_REF_PTR_T(::HoudiniEngineUnity::__JSONObject____c__DisplayClass21_0);
MARK_REF_PTR_T(::HoudiniEngineUnity::__JSONObject___get_Children_d__23);
// Type: ::<>c__DisplayClass21_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9872))
// CS Name: ::JSONObject::<>c__DisplayClass21_0*
class CORDL_TYPE __JSONObject____c__DisplayClass21_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field aNode, offset 0x10, size 0x8
  __declspec(property(get = __get_aNode, put = __set_aNode))::HoudiniEngineUnity::JSONNode* aNode;

  constexpr ::HoudiniEngineUnity::JSONNode*& __get_aNode();

  constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::JSONNode*> const& __get_aNode() const;

  constexpr void __set_aNode(::HoudiniEngineUnity::JSONNode* value);

  static inline ::HoudiniEngineUnity::__JSONObject____c__DisplayClass21_0* New_ctor();

  /// @brief Method .ctor, addr 0x21da148, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Remove>b__0, addr 0x21da504, size 0x44, virtual false, abstract: false, final false
  inline bool _Remove_b__0(::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*> k);

  // Ctor Parameters [CppParam { name: "", ty: "__JSONObject____c__DisplayClass21_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JSONObject____c__DisplayClass21_0(__JSONObject____c__DisplayClass21_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JSONObject____c__DisplayClass21_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JSONObject____c__DisplayClass21_0(__JSONObject____c__DisplayClass21_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JSONObject____c__DisplayClass21_0();

public:
  /// @brief Field aNode, offset: 0x10, size: 0x8, def value: None
  ::HoudiniEngineUnity::JSONNode* ___aNode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__JSONObject____c__DisplayClass21_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__JSONObject____c__DisplayClass21_0, ___aNode) == 0x10, "Offset mismatch!");

} // namespace HoudiniEngineUnity
// Type: ::<get_Children>d__23
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3819), inst: 1428 }),
// TypeDefinitionIndex(TypeDefinitionIndex(9869)), TypeDefinitionIndex(TypeDefinitionIndex(3819))} Self: TypeDefinitionIndex(TypeDefinitionIndex(9873)) CS Name: ::JSONObject::<get_Children>d__23*
class CORDL_TYPE __JSONObject___get_Children_d__23 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::HoudiniEngineUnity::JSONNode* __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::HoudiniEngineUnity::JSONObject* __4__this;

  /// @brief Field <>7__wrap1, offset 0x30, size 0x28
  __declspec(property(get = __get___7__wrap1, put = __set___7__wrap1))::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::HoudiniEngineUnity::JSONNode*> __7__wrap1;

  __declspec(property(
      get =
          System_Collections_Generic_IEnumerator_HoudiniEngineUnity_JSONNode__get_Current))::HoudiniEngineUnity::JSONNode* System_Collections_Generic_IEnumerator_HoudiniEngineUnity_JSONNode__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::HoudiniEngineUnity::JSONNode*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::JSONNode*> const& __get___2__current() const;

  constexpr void __set___2__current(::HoudiniEngineUnity::JSONNode* value);

  constexpr int32_t& __get___l__initialThreadId();

  constexpr int32_t const& __get___l__initialThreadId() const;

  constexpr void __set___l__initialThreadId(int32_t value);

  constexpr ::HoudiniEngineUnity::JSONObject*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::JSONObject*> const& __get___4__this() const;

  constexpr void __set___4__this(::HoudiniEngineUnity::JSONObject* value);

  constexpr ::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::HoudiniEngineUnity::JSONNode*>& __get___7__wrap1();

  constexpr ::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::HoudiniEngineUnity::JSONNode*> const& __get___7__wrap1() const;

  constexpr void __set___7__wrap1(::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::HoudiniEngineUnity::JSONNode*> value);

  static inline ::HoudiniEngineUnity::__JSONObject___get_Children_d__23* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x21da1c8, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x21da548, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x21da564, size 0x1a8, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method <>m__Finally1, addr 0x21da70c, size 0x50, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method System.Collections.Generic.IEnumerator<HoudiniEngineUnity.JSONNode>.get_Current, addr 0x21da75c, size 0x8, virtual true, abstract: false, final true
  inline ::HoudiniEngineUnity::JSONNode* System_Collections_Generic_IEnumerator_HoudiniEngineUnity_JSONNode__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x21da764, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x21da7a4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<HoudiniEngineUnity.JSONNode>.GetEnumerator, addr 0x21da7ac, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>* System_Collections_Generic_IEnumerable_HoudiniEngineUnity_JSONNode__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x21da850, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__JSONObject___get_Children_d__23", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JSONObject___get_Children_d__23(__JSONObject___get_Children_d__23&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JSONObject___get_Children_d__23", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JSONObject___get_Children_d__23(__JSONObject___get_Children_d__23 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JSONObject___get_Children_d__23();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::HoudiniEngineUnity::JSONNode* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::HoudiniEngineUnity::JSONObject* _____4__this;

  /// @brief Field <>7__wrap1, offset: 0x30, size: 0x28, def value: None
  ::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::HoudiniEngineUnity::JSONNode*> _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__JSONObject___get_Children_d__23, 0x58>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__JSONObject___get_Children_d__23, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__JSONObject___get_Children_d__23, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__JSONObject___get_Children_d__23, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__JSONObject___get_Children_d__23, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__JSONObject___get_Children_d__23, _____7__wrap1) == 0x30, "Offset mismatch!");

} // namespace HoudiniEngineUnity
// Type: HoudiniEngineUnity::JSONObject
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9869))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9874))
// CS Name: ::HoudiniEngineUnity::JSONObject*
class CORDL_TYPE JSONObject : public ::HoudiniEngineUnity::JSONNode {
public:
  // Declarations
  using _get_Children_d__23 = ::HoudiniEngineUnity::__JSONObject___get_Children_d__23;

  using __c__DisplayClass21_0 = ::HoudiniEngineUnity::__JSONObject____c__DisplayClass21_0;

  /// @brief Field m_Dict, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Dict, put = __set_m_Dict))::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::JSONNode*>* m_Dict;

  /// @brief Field inline, offset 0x18, size 0x1
  __declspec(property(get = __get__cordl_inline, put = __set__cordl_inline)) bool _cordl_inline;

  __declspec(property(get = get_Inline, put = set_Inline)) bool Inline;

  __declspec(property(get = get_Tag))::HoudiniEngineUnity::JSONNodeType Tag;

  __declspec(property(get = get_IsObject)) bool IsObject;

  __declspec(property(get = get_Item, put = set_Item))::HoudiniEngineUnity::JSONNode* Item[];

  __declspec(property(get = get_Item, put = set_Item))::HoudiniEngineUnity::JSONNode* Item[];

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Children))::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>* Children;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::JSONNode*>*& __get_m_Dict();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::JSONNode*>*> const& __get_m_Dict() const;

  constexpr void __set_m_Dict(::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::JSONNode*>* value);

  constexpr bool& __get__cordl_inline();

  constexpr bool const& __get__cordl_inline() const;

  constexpr void __set__cordl_inline(bool value);

  /// @brief Method get_Inline, addr 0x21d97ec, size 0x8, virtual true, abstract: false, final false
  inline bool get_Inline();

  /// @brief Method set_Inline, addr 0x21d97f4, size 0xc, virtual true, abstract: false, final false
  inline void set_Inline(bool value);

  /// @brief Method get_Tag, addr 0x21d9800, size 0x8, virtual true, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONNodeType get_Tag();

  /// @brief Method get_IsObject, addr 0x21d9808, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsObject();

  /// @brief Method GetEnumerator, addr 0x21d9810, size 0x88, virtual true, abstract: false, final false
  inline ::HoudiniEngineUnity::__JSONNode__Enumerator GetEnumerator();

  /// @brief Method get_Item, addr 0x21d9898, size 0xc4, virtual true, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONNode* get_Item(::StringW aKey);

  /// @brief Method set_Item, addr 0x21d9988, size 0x108, virtual true, abstract: false, final false
  inline void set_Item(::StringW aKey, ::HoudiniEngineUnity::JSONNode* value);

  /// @brief Method get_Item, addr 0x21d9a90, size 0xa0, virtual true, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONNode* get_Item(int32_t aIndex);

  /// @brief Method set_Item, addr 0x21d9b30, size 0x118, virtual true, abstract: false, final false
  inline void set_Item(int32_t aIndex, ::HoudiniEngineUnity::JSONNode* value);

  /// @brief Method get_Count, addr 0x21d9c48, size 0x50, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method Add, addr 0x21d9c98, size 0x150, virtual true, abstract: false, final false
  inline void Add(::StringW aKey, ::HoudiniEngineUnity::JSONNode* aItem);

  /// @brief Method Remove, addr 0x21d9de8, size 0xc4, virtual true, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONNode* Remove(::StringW aKey);

  /// @brief Method Remove, addr 0x21d9eac, size 0xdc, virtual true, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONNode* Remove(int32_t aIndex);

  /// @brief Method Remove, addr 0x21d9f88, size 0x1c0, virtual true, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONNode* Remove(::HoudiniEngineUnity::JSONNode* aNode);

  /// @brief Method get_Children, addr 0x21da150, size 0x78, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>* get_Children();

  /// @brief Method WriteToStringBuilder, addr 0x21da1fc, size 0x308, virtual true, abstract: false, final false
  inline void WriteToStringBuilder(::System::Text::StringBuilder* aSB, int32_t aIndent, int32_t aIndentInc, ::HoudiniEngineUnity::JSONTextMode aMode);

  static inline ::HoudiniEngineUnity::JSONObject* New_ctor();

  /// @brief Method .ctor, addr 0x21d5ad4, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "JSONObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JSONObject(JSONObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JSONObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JSONObject(JSONObject const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JSONObject();

public:
  /// @brief Field m_Dict, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::JSONNode*>* ___m_Dict;

  /// @brief Field inline, offset: 0x18, size: 0x1, def value: None
  bool ____cordl_inline;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::JSONObject, 0x20>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::JSONObject, ___m_Dict) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::JSONObject, ____cordl_inline) == 0x18, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::JSONObject);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::JSONObject*, "HoudiniEngineUnity", "JSONObject");
NEED_NO_BOX(::HoudiniEngineUnity::__JSONObject____c__DisplayClass21_0);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__JSONObject____c__DisplayClass21_0*, "HoudiniEngineUnity", "JSONObject/<>c__DisplayClass21_0");
NEED_NO_BOX(::HoudiniEngineUnity::__JSONObject___get_Children_d__23);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__JSONObject___get_Children_d__23*, "HoudiniEngineUnity", "JSONObject/<get_Children>d__23");
