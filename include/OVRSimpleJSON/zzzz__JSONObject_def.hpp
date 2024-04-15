#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JSONObject)
namespace OVRSimpleJSON {
struct JSONNodeType;
}
namespace OVRSimpleJSON {
class JSONNode;
}
namespace OVRSimpleJSON {
struct JSONTextMode;
}
namespace OVRSimpleJSON {
struct __JSONNode__Enumerator;
}
namespace OVRSimpleJSON {
class __JSONObject____c__DisplayClass21_0;
}
namespace OVRSimpleJSON {
class __JSONObject___get_Children_d__23;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace OVRSimpleJSON {
class JSONObject;
}
namespace OVRSimpleJSON {
class __JSONObject____c__DisplayClass21_0;
}
namespace OVRSimpleJSON {
class __JSONObject___get_Children_d__23;
}
// Write type traits
MARK_REF_PTR_T(::OVRSimpleJSON::JSONObject);
MARK_REF_PTR_T(::OVRSimpleJSON::__JSONObject____c__DisplayClass21_0);
MARK_REF_PTR_T(::OVRSimpleJSON::__JSONObject___get_Children_d__23);
// Type: ::<>c__DisplayClass21_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVRSimpleJSON {
// Is value type: false
// CS Name: ::JSONObject::<>c__DisplayClass21_0*
class CORDL_TYPE __JSONObject____c__DisplayClass21_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field aNode, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_aNode, put = __cordl_internal_set_aNode))::OVRSimpleJSON::JSONNode* aNode;

  static inline ::OVRSimpleJSON::__JSONObject____c__DisplayClass21_0* New_ctor();

  /// @brief Method <Remove>b__0, addr 0x2aa5ed8, size 0x44, virtual false, abstract: false, final false
  inline bool _Remove_b__0(::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*> k);

  constexpr ::OVRSimpleJSON::JSONNode*& __cordl_internal_get_aNode();

  constexpr ::cordl_internals::to_const_pointer<::OVRSimpleJSON::JSONNode*> const& __cordl_internal_get_aNode() const;

  constexpr void __cordl_internal_set_aNode(::OVRSimpleJSON::JSONNode* value);

  /// @brief Method .ctor, addr 0x2aa5b1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JSONObject____c__DisplayClass21_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__JSONObject____c__DisplayClass21_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JSONObject____c__DisplayClass21_0(__JSONObject____c__DisplayClass21_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JSONObject____c__DisplayClass21_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JSONObject____c__DisplayClass21_0(__JSONObject____c__DisplayClass21_0 const&) = delete;

  /// @brief Field aNode, offset: 0x10, size: 0x8, def value: None
  ::OVRSimpleJSON::JSONNode* ___aNode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVRSimpleJSON::__JSONObject____c__DisplayClass21_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::OVRSimpleJSON::__JSONObject____c__DisplayClass21_0, ___aNode) == 0x10, "Offset mismatch!");

} // namespace OVRSimpleJSON
// Type: ::<get_Children>d__23
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVRSimpleJSON {
// Is value type: false
// CS Name: ::JSONObject::<get_Children>d__23*
class CORDL_TYPE __JSONObject___get_Children_d__23 : public ::System::Object {
public:
  // Declarations
  __declspec(
      property(get = System_Collections_Generic_IEnumerator_OVRSimpleJSON_JSONNode__get_Current))::OVRSimpleJSON::JSONNode* System_Collections_Generic_IEnumerator_OVRSimpleJSON_JSONNode__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::OVRSimpleJSON::JSONNode* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::OVRSimpleJSON::JSONObject* __4__this;

  /// @brief Field <>7__wrap1, offset 0x30, size 0x28
  __declspec(property(get = __cordl_internal_get___7__wrap1,
                      put = __cordl_internal_set___7__wrap1))::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*> __7__wrap1;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2aa5f38, size 0x1a8, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::OVRSimpleJSON::__JSONObject___get_Children_d__23* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<OVRSimpleJSON.JSONNode>.GetEnumerator, addr 0x2aa6180, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>* System_Collections_Generic_IEnumerable_OVRSimpleJSON_JSONNode__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<OVRSimpleJSON.JSONNode>.get_Current, addr 0x2aa6130, size 0x8, virtual true, abstract: false, final true
  inline ::OVRSimpleJSON::JSONNode* System_Collections_Generic_IEnumerator_OVRSimpleJSON_JSONNode__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2aa6224, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2aa6138, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2aa6178, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2aa5f1c, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::OVRSimpleJSON::JSONNode*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::OVRSimpleJSON::JSONNode*> const& __cordl_internal_get___2__current() const;

  constexpr ::OVRSimpleJSON::JSONObject*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::OVRSimpleJSON::JSONObject*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*> const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*>& __cordl_internal_get___7__wrap1();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::OVRSimpleJSON::JSONNode* value);

  constexpr void __cordl_internal_set___4__this(::OVRSimpleJSON::JSONObject* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*> value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  /// @brief Method <>m__Finally1, addr 0x2aa60e0, size 0x50, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x2aa5b9c, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>* i___System__Collections__Generic__IEnumerable_1___OVRSimpleJSON__JSONNode__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>* i___System__Collections__Generic__IEnumerator_1___OVRSimpleJSON__JSONNode__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JSONObject___get_Children_d__23();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__JSONObject___get_Children_d__23", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JSONObject___get_Children_d__23(__JSONObject___get_Children_d__23&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JSONObject___get_Children_d__23", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JSONObject___get_Children_d__23(__JSONObject___get_Children_d__23 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::OVRSimpleJSON::JSONNode* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::OVRSimpleJSON::JSONObject* _____4__this;

  /// @brief Field <>7__wrap1, offset: 0x30, size: 0x28, def value: None
  ::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*> _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVRSimpleJSON::__JSONObject___get_Children_d__23, 0x58>, "Size mismatch!");

static_assert(offsetof(::OVRSimpleJSON::__JSONObject___get_Children_d__23, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OVRSimpleJSON::__JSONObject___get_Children_d__23, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OVRSimpleJSON::__JSONObject___get_Children_d__23, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OVRSimpleJSON::__JSONObject___get_Children_d__23, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OVRSimpleJSON::__JSONObject___get_Children_d__23, _____7__wrap1) == 0x30, "Offset mismatch!");

} // namespace OVRSimpleJSON
// Type: OVRSimpleJSON::JSONObject
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVRSimpleJSON {
// Is value type: false
// CS Name: ::OVRSimpleJSON::JSONObject*
class CORDL_TYPE JSONObject : public ::OVRSimpleJSON::JSONNode {
public:
  // Declarations
  using __c__DisplayClass21_0 = ::OVRSimpleJSON::__JSONObject____c__DisplayClass21_0;

  using _get_Children_d__23 = ::OVRSimpleJSON::__JSONObject___get_Children_d__23;

  __declspec(property(get = get_Children))::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>* Children;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Inline, put = set_Inline)) bool Inline;

  __declspec(property(get = get_IsObject)) bool IsObject;

  __declspec(property(get = get_Item, put = set_Item))::OVRSimpleJSON::JSONNode* Item[];

  __declspec(property(get = get_Item, put = set_Item))::OVRSimpleJSON::JSONNode* Item[];

  __declspec(property(get = get_Tag))::OVRSimpleJSON::JSONNodeType Tag;

  /// @brief Field inline, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__cordl_inline, put = __cordl_internal_set__cordl_inline)) bool _cordl_inline;

  /// @brief Field m_Dict, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Dict, put = __cordl_internal_set_m_Dict))::System::Collections::Generic::Dictionary_2<::StringW, ::OVRSimpleJSON::JSONNode*>* m_Dict;

  /// @brief Method Add, addr 0x2aa566c, size 0x150, virtual true, abstract: false, final false
  inline void Add(::StringW aKey, ::OVRSimpleJSON::JSONNode* aItem);

  /// @brief Method GetEnumerator, addr 0x2aa51e4, size 0x88, virtual true, abstract: false, final false
  inline ::OVRSimpleJSON::__JSONNode__Enumerator GetEnumerator();

  static inline ::OVRSimpleJSON::JSONObject* New_ctor();

  /// @brief Method Remove, addr 0x2aa5880, size 0xdc, virtual true, abstract: false, final false
  inline ::OVRSimpleJSON::JSONNode* Remove(int32_t aIndex);

  /// @brief Method Remove, addr 0x2aa57bc, size 0xc4, virtual true, abstract: false, final false
  inline ::OVRSimpleJSON::JSONNode* Remove(::StringW aKey);

  /// @brief Method Remove, addr 0x2aa595c, size 0x1c0, virtual true, abstract: false, final false
  inline ::OVRSimpleJSON::JSONNode* Remove(::OVRSimpleJSON::JSONNode* aNode);

  /// @brief Method WriteToStringBuilder, addr 0x2aa5bd0, size 0x308, virtual true, abstract: false, final false
  inline void WriteToStringBuilder(::System::Text::StringBuilder* aSB, int32_t aIndent, int32_t aIndentInc, ::OVRSimpleJSON::JSONTextMode aMode);

  constexpr bool const& __cordl_internal_get__cordl_inline() const;

  constexpr bool& __cordl_internal_get__cordl_inline();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::OVRSimpleJSON::JSONNode*>*& __cordl_internal_get_m_Dict();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::OVRSimpleJSON::JSONNode*>*> const& __cordl_internal_get_m_Dict() const;

  constexpr void __cordl_internal_set__cordl_inline(bool value);

  constexpr void __cordl_internal_set_m_Dict(::System::Collections::Generic::Dictionary_2<::StringW, ::OVRSimpleJSON::JSONNode*>* value);

  /// @brief Method .ctor, addr 0x2a9b35c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Children, addr 0x2aa5b24, size 0x78, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>* get_Children();

  /// @brief Method get_Count, addr 0x2aa561c, size 0x50, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Inline, addr 0x2aa51c0, size 0x8, virtual true, abstract: false, final false
  inline bool get_Inline();

  /// @brief Method get_IsObject, addr 0x2aa51dc, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsObject();

  /// @brief Method get_Item, addr 0x2aa5464, size 0xa0, virtual true, abstract: false, final false
  inline ::OVRSimpleJSON::JSONNode* get_Item(int32_t aIndex);

  /// @brief Method get_Item, addr 0x2aa526c, size 0xc4, virtual true, abstract: false, final false
  inline ::OVRSimpleJSON::JSONNode* get_Item(::StringW aKey);

  /// @brief Method get_Tag, addr 0x2aa51d4, size 0x8, virtual true, abstract: false, final false
  inline ::OVRSimpleJSON::JSONNodeType get_Tag();

  /// @brief Method set_Inline, addr 0x2aa51c8, size 0xc, virtual true, abstract: false, final false
  inline void set_Inline(bool value);

  /// @brief Method set_Item, addr 0x2aa5504, size 0x118, virtual true, abstract: false, final false
  inline void set_Item(int32_t aIndex, ::OVRSimpleJSON::JSONNode* value);

  /// @brief Method set_Item, addr 0x2aa535c, size 0x108, virtual true, abstract: false, final false
  inline void set_Item(::StringW aKey, ::OVRSimpleJSON::JSONNode* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JSONObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JSONObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JSONObject(JSONObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JSONObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JSONObject(JSONObject const&) = delete;

  /// @brief Field m_Dict, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::OVRSimpleJSON::JSONNode*>* ___m_Dict;

  /// @brief Field inline, offset: 0x18, size: 0x1, def value: None
  bool ____cordl_inline;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVRSimpleJSON::JSONObject, 0x20>, "Size mismatch!");

static_assert(offsetof(::OVRSimpleJSON::JSONObject, ___m_Dict) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OVRSimpleJSON::JSONObject, ____cordl_inline) == 0x18, "Offset mismatch!");

} // namespace OVRSimpleJSON
NEED_NO_BOX(::OVRSimpleJSON::JSONObject);
DEFINE_IL2CPP_ARG_TYPE(::OVRSimpleJSON::JSONObject*, "OVRSimpleJSON", "JSONObject");
NEED_NO_BOX(::OVRSimpleJSON::__JSONObject____c__DisplayClass21_0);
DEFINE_IL2CPP_ARG_TYPE(::OVRSimpleJSON::__JSONObject____c__DisplayClass21_0*, "OVRSimpleJSON", "JSONObject/<>c__DisplayClass21_0");
NEED_NO_BOX(::OVRSimpleJSON::__JSONObject___get_Children_d__23);
DEFINE_IL2CPP_ARG_TYPE(::OVRSimpleJSON::__JSONObject___get_Children_d__23*, "OVRSimpleJSON", "JSONObject/<get_Children>d__23");
