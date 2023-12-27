#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JSONArray)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Text {
class StringBuilder;
}
namespace OVRSimpleJSON {
struct JSONNodeType;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace OVRSimpleJSON {
class __JSONArray___get_Children_d__22;
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
namespace System::Collections {
class IEnumerable;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
// Forward declare root types
namespace OVRSimpleJSON {
class JSONArray;
}
namespace OVRSimpleJSON {
class __JSONArray___get_Children_d__22;
}
// Write type traits
MARK_REF_PTR_T(::OVRSimpleJSON::JSONArray);
MARK_REF_PTR_T(::OVRSimpleJSON::__JSONArray___get_Children_d__22);
// Type: ::<get_Children>d__22
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVRSimpleJSON {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3842)), TypeDefinitionIndex(TypeDefinitionIndex(8204)), TypeDefinitionIndex(TypeDefinitionIndex(2613)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3842), inst: 1691 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(8205)) CS Name: ::JSONArray::<get_Children>d__22*
class CORDL_TYPE __JSONArray___get_Children_d__22 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::OVRSimpleJSON::JSONNode* __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::OVRSimpleJSON::JSONArray* __4__this;

  /// @brief Field <>7__wrap1, offset 0x30, size 0x18
  __declspec(property(get = __get___7__wrap1, put = __set___7__wrap1))::System::Collections::Generic::__List_1__Enumerator<::OVRSimpleJSON::JSONNode*> __7__wrap1;

  __declspec(
      property(get = System_Collections_Generic_IEnumerator_OVRSimpleJSON_JSONNode__get_Current))::OVRSimpleJSON::JSONNode* System_Collections_Generic_IEnumerator_OVRSimpleJSON_JSONNode__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::OVRSimpleJSON::JSONNode*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::OVRSimpleJSON::JSONNode*> const& __get___2__current() const;

  constexpr void __set___2__current(::OVRSimpleJSON::JSONNode* value);

  constexpr int32_t& __get___l__initialThreadId();

  constexpr int32_t const& __get___l__initialThreadId() const;

  constexpr void __set___l__initialThreadId(int32_t value);

  constexpr ::OVRSimpleJSON::JSONArray*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::OVRSimpleJSON::JSONArray*> const& __get___4__this() const;

  constexpr void __set___4__this(::OVRSimpleJSON::JSONArray* value);

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::OVRSimpleJSON::JSONNode*>& __get___7__wrap1();

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::OVRSimpleJSON::JSONNode*> const& __get___7__wrap1() const;

  constexpr void __set___7__wrap1(::System::Collections::Generic::__List_1__Enumerator<::OVRSimpleJSON::JSONNode*> value);

  static inline ::OVRSimpleJSON::__JSONArray___get_Children_d__22* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x27cc604 size 0x34 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x27cc7a0 size 0x1c virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x27cc7bc size 0x194 virtual true final true
  inline bool MoveNext();

  /// @brief Method <>m__Finally1 addr 0x27cc950 size 0x50 virtual false final false
  inline void __m__Finally1();

  /// @brief Method System.Collections.Generic.IEnumerator<OVRSimpleJSON.JSONNode>.get_Current addr 0x27cc9a0 size 0x8 virtual true final true
  inline ::OVRSimpleJSON::JSONNode* System_Collections_Generic_IEnumerator_OVRSimpleJSON_JSONNode__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x27cc9a8 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x27cc9e8 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<OVRSimpleJSON.JSONNode>.GetEnumerator addr 0x27cc9f0 size 0xa4 virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>* System_Collections_Generic_IEnumerable_OVRSimpleJSON_JSONNode__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x27cca94 size 0x4 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__JSONArray___get_Children_d__22", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JSONArray___get_Children_d__22(__JSONArray___get_Children_d__22&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JSONArray___get_Children_d__22", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JSONArray___get_Children_d__22(__JSONArray___get_Children_d__22 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JSONArray___get_Children_d__22();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::OVRSimpleJSON::JSONNode* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::OVRSimpleJSON::JSONArray* _____4__this;

  /// @brief Field <>7__wrap1, offset: 0x30, size: 0x18, def value: None
  ::System::Collections::Generic::__List_1__Enumerator<::OVRSimpleJSON::JSONNode*> _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVRSimpleJSON::__JSONArray___get_Children_d__22, 0x48>, "Size mismatch!");

} // namespace OVRSimpleJSON
// Type: OVRSimpleJSON::JSONArray
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVRSimpleJSON {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8204))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8206))
// CS Name: ::OVRSimpleJSON::JSONArray*
class CORDL_TYPE JSONArray : public ::OVRSimpleJSON::JSONNode {
public:
  // Declarations
  using _get_Children_d__22 = ::OVRSimpleJSON::__JSONArray___get_Children_d__22;

  /// @brief Field m_List, offset 0x10, size 0x8
  __declspec(property(get = __get_m_List, put = __set_m_List))::System::Collections::Generic::List_1<::OVRSimpleJSON::JSONNode*>* m_List;

  /// @brief Field inline, offset 0x18, size 0x1
  __declspec(property(get = __get__cordl_inline, put = __set__cordl_inline)) bool _cordl_inline;

  __declspec(property(get = get_Inline, put = set_Inline)) bool Inline;

  __declspec(property(get = get_Tag))::OVRSimpleJSON::JSONNodeType Tag;

  __declspec(property(get = get_IsArray)) bool IsArray;

  __declspec(property(get = get_Item, put = set_Item))::OVRSimpleJSON::JSONNode* Item[];

  __declspec(property(get = get_Item, put = set_Item))::OVRSimpleJSON::JSONNode* Item[];

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Children))::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>* Children;

  constexpr ::System::Collections::Generic::List_1<::OVRSimpleJSON::JSONNode*>*& __get_m_List();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::OVRSimpleJSON::JSONNode*>*> const& __get_m_List() const;

  constexpr void __set_m_List(::System::Collections::Generic::List_1<::OVRSimpleJSON::JSONNode*>* value);

  constexpr bool& __get__cordl_inline();

  constexpr bool const& __get__cordl_inline() const;

  constexpr void __set__cordl_inline(bool value);

  /// @brief Method get_Inline addr 0x27cbf34 size 0x8 virtual true final false
  inline bool get_Inline();

  /// @brief Method set_Inline addr 0x27cbf3c size 0xc virtual true final false
  inline void set_Inline(bool value);

  /// @brief Method get_Tag addr 0x27cbf48 size 0x8 virtual true final false
  inline ::OVRSimpleJSON::JSONNodeType get_Tag();

  /// @brief Method get_IsArray addr 0x27cbf50 size 0x8 virtual true final false
  inline bool get_IsArray();

  /// @brief Method GetEnumerator addr 0x27cbf58 size 0x8c virtual true final false
  inline ::OVRSimpleJSON::__JSONNode__Enumerator GetEnumerator();

  /// @brief Method get_Item addr 0x27cbfe4 size 0xb4 virtual true final false
  inline ::OVRSimpleJSON::JSONNode* get_Item(int32_t aIndex);

  /// @brief Method set_Item addr 0x27cc0c0 size 0x144 virtual true final false
  inline void set_Item(int32_t aIndex, ::OVRSimpleJSON::JSONNode* value);

  /// @brief Method get_Item addr 0x27cc204 size 0x64 virtual true final false
  inline ::OVRSimpleJSON::JSONNode* get_Item(::StringW aKey);

  /// @brief Method set_Item addr 0x27cc268 size 0xe4 virtual true final false
  inline void set_Item(::StringW aKey, ::OVRSimpleJSON::JSONNode* value);

  /// @brief Method get_Count addr 0x27cc34c size 0x48 virtual true final false
  inline int32_t get_Count();

  /// @brief Method Add addr 0x27cc394 size 0xe4 virtual true final false
  inline void Add(::StringW aKey, ::OVRSimpleJSON::JSONNode* aItem);

  /// @brief Method Remove addr 0x27cc478 size 0xb4 virtual true final false
  inline ::OVRSimpleJSON::JSONNode* Remove(int32_t aIndex);

  /// @brief Method Remove addr 0x27cc52c size 0x60 virtual true final false
  inline ::OVRSimpleJSON::JSONNode* Remove(::OVRSimpleJSON::JSONNode* aNode);

  /// @brief Method get_Children addr 0x27cc58c size 0x78 virtual true final false
  inline ::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>* get_Children();

  /// @brief Method WriteToStringBuilder addr 0x27cc638 size 0x168 virtual true final false
  inline void WriteToStringBuilder(::System::Text::StringBuilder* aSB, int32_t aIndent, int32_t aIndentInc, ::OVRSimpleJSON::JSONTextMode aMode);

  static inline ::OVRSimpleJSON::JSONArray* New_ctor();

  /// @brief Method .ctor addr 0x27c8dfc size 0x7c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "JSONArray", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JSONArray(JSONArray&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JSONArray", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JSONArray(JSONArray const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JSONArray();

public:
  /// @brief Field m_List, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::OVRSimpleJSON::JSONNode*>* ___m_List;

  /// @brief Field inline, offset: 0x18, size: 0x1, def value: None
  bool ____cordl_inline;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVRSimpleJSON::JSONArray, 0x20>, "Size mismatch!");

} // namespace OVRSimpleJSON
NEED_NO_BOX(::OVRSimpleJSON::JSONArray);
DEFINE_IL2CPP_ARG_TYPE(::OVRSimpleJSON::JSONArray*, "OVRSimpleJSON", "JSONArray");
NEED_NO_BOX(::OVRSimpleJSON::__JSONArray___get_Children_d__22);
DEFINE_IL2CPP_ARG_TYPE(::OVRSimpleJSON::__JSONArray___get_Children_d__22*, "OVRSimpleJSON", "JSONArray/<get_Children>d__22");
