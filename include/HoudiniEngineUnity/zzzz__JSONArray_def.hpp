#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/JSONArray.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__JSONNode_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JSONArray)
namespace HoudiniEngineUnity {
class JSONArray__get_Children_d__22;
}
namespace HoudiniEngineUnity {
struct JSONNodeType;
}
namespace HoudiniEngineUnity {
struct JSONNode_Enumerator;
}
namespace HoudiniEngineUnity {
class JSONNode;
}
namespace HoudiniEngineUnity {
struct JSONTextMode;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Object;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class JSONArray;
}
namespace HoudiniEngineUnity {
class JSONArray__get_Children_d__22;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::JSONArray);
MARK_REF_PTR_T(::HoudiniEngineUnity::JSONArray__get_Children_d__22);
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IEnumerator`1<T>, System.Collections.Generic.List`1::Enumerator<T>, System.Collections.IEnumerable,
// System.Collections.IEnumerator, System.IDisposable, System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.JSONArray/<get_Children>d__22
class CORDL_TYPE JSONArray__get_Children_d__22 : public ::System::Object {
public:
  // Declarations
  __declspec(property(
      get =
          System_Collections_Generic_IEnumerator_HoudiniEngineUnity_JSONNode__get_Current)) ::HoudiniEngineUnity::JSONNode* System_Collections_Generic_IEnumerator_HoudiniEngineUnity_JSONNode__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::HoudiniEngineUnity::JSONNode* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::HoudiniEngineUnity::JSONArray* __4__this;

  /// @brief Field <>7__wrap1, offset 0x30, size 0x18
  __declspec(property(get = __cordl_internal_get___7__wrap1, put = __cordl_internal_set___7__wrap1)) ::System::Collections::Generic::List_1_Enumerator<::HoudiniEngineUnity::JSONNode*> __7__wrap1;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3a8df94, size 0x194, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::HoudiniEngineUnity::JSONArray__get_Children_d__22* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<HoudiniEngineUnity.JSONNode>.GetEnumerator, addr 0x3a8e1c0, size 0x9c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>* System_Collections_Generic_IEnumerable_HoudiniEngineUnity_JSONNode__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<HoudiniEngineUnity.JSONNode>.get_Current, addr 0x3a8e178, size 0x8, virtual true, abstract: false, final true
  inline ::HoudiniEngineUnity::JSONNode* System_Collections_Generic_IEnumerator_HoudiniEngineUnity_JSONNode__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x3a8e25c, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3a8e180, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3a8e1b8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3a8df78, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::HoudiniEngineUnity::JSONNode* const& __cordl_internal_get___2__current() const;

  constexpr ::HoudiniEngineUnity::JSONNode*& __cordl_internal_get___2__current();

  constexpr ::HoudiniEngineUnity::JSONArray* const& __cordl_internal_get___4__this() const;

  constexpr ::HoudiniEngineUnity::JSONArray*& __cordl_internal_get___4__this();

  constexpr ::System::Collections::Generic::List_1_Enumerator<::HoudiniEngineUnity::JSONNode*> const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::List_1_Enumerator<::HoudiniEngineUnity::JSONNode*>& __cordl_internal_get___7__wrap1();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::HoudiniEngineUnity::JSONNode* value);

  constexpr void __cordl_internal_set___4__this(::HoudiniEngineUnity::JSONArray* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::List_1_Enumerator<::HoudiniEngineUnity::JSONNode*> value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  /// @brief Method <>m__Finally1, addr 0x3a8e128, size 0x50, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x3a8dddc, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>* i___System__Collections__Generic__IEnumerable_1___HoudiniEngineUnity__JSONNode__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>* i___System__Collections__Generic__IEnumerator_1___HoudiniEngineUnity__JSONNode__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JSONArray__get_Children_d__22();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JSONArray__get_Children_d__22", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JSONArray__get_Children_d__22(JSONArray__get_Children_d__22&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JSONArray__get_Children_d__22", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JSONArray__get_Children_d__22(JSONArray__get_Children_d__22 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11857 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::HoudiniEngineUnity::JSONNode* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::HoudiniEngineUnity::JSONArray* _____4__this;

  /// @brief Field <>7__wrap1, offset: 0x30, size: 0x18, def value: None
  ::System::Collections::Generic::List_1_Enumerator<::HoudiniEngineUnity::JSONNode*> _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::JSONArray__get_Children_d__22, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::JSONArray__get_Children_d__22, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::JSONArray__get_Children_d__22, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::JSONArray__get_Children_d__22, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::JSONArray__get_Children_d__22, _____7__wrap1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::JSONArray__get_Children_d__22, 0x48>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies HoudiniEngineUnity.JSONNode
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.JSONArray
class CORDL_TYPE JSONArray : public ::HoudiniEngineUnity::JSONNode {
public:
  // Declarations
  using _get_Children_d__22 = ::HoudiniEngineUnity::JSONArray__get_Children_d__22;

  __declspec(property(get = get_Children)) ::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>* Children;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Inline, put = set_Inline)) bool Inline;

  __declspec(property(get = get_IsArray)) bool IsArray;

  __declspec(property(get = get_Item, put = set_Item)) ::HoudiniEngineUnity::JSONNode* Item[];

  __declspec(property(get = get_Item, put = set_Item)) ::HoudiniEngineUnity::JSONNode* Item[];

  __declspec(property(get = get_Tag)) ::HoudiniEngineUnity::JSONNodeType Tag;

  /// @brief Field inline, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__cordl_inline, put = __cordl_internal_set__cordl_inline)) bool _cordl_inline;

  /// @brief Field m_List, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_List, put = __cordl_internal_set_m_List)) ::System::Collections::Generic::List_1<::HoudiniEngineUnity::JSONNode*>* m_List;

  /// @brief Method Add, addr 0x3a8db78, size 0xe0, virtual true, abstract: false, final false
  inline void Add(::StringW aKey, ::HoudiniEngineUnity::JSONNode* aItem);

  /// @brief Method GetEnumerator, addr 0x3a8d74c, size 0x90, virtual true, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONNode_Enumerator GetEnumerator();

  static inline ::HoudiniEngineUnity::JSONArray* New_ctor();

  /// @brief Method Remove, addr 0x3a8dc58, size 0xb4, virtual true, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONNode* Remove(int32_t aIndex);

  /// @brief Method Remove, addr 0x3a8dd0c, size 0x60, virtual true, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONNode* Remove(::HoudiniEngineUnity::JSONNode* aNode);

  /// @brief Method WriteToStringBuilder, addr 0x3a8de10, size 0x168, virtual true, abstract: false, final false
  inline void WriteToStringBuilder(::System::Text::StringBuilder* aSB, int32_t aIndent, int32_t aIndentInc, ::HoudiniEngineUnity::JSONTextMode aMode);

  constexpr bool const& __cordl_internal_get__cordl_inline() const;

  constexpr bool& __cordl_internal_get__cordl_inline();

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::JSONNode*>* const& __cordl_internal_get_m_List() const;

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::JSONNode*>*& __cordl_internal_get_m_List();

  constexpr void __cordl_internal_set__cordl_inline(bool value);

  constexpr void __cordl_internal_set_m_List(::System::Collections::Generic::List_1<::HoudiniEngineUnity::JSONNode*>* value);

  /// @brief Method .ctor, addr 0x3a8a6d8, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Children, addr 0x3a8dd6c, size 0x70, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>* get_Children();

  /// @brief Method get_Count, addr 0x3a8db30, size 0x48, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Inline, addr 0x3a8d728, size 0x8, virtual true, abstract: false, final false
  inline bool get_Inline();

  /// @brief Method get_IsArray, addr 0x3a8d744, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsArray();

  /// @brief Method get_Item, addr 0x3a8d7dc, size 0xb0, virtual true, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONNode* get_Item(int32_t aIndex);

  /// @brief Method get_Item, addr 0x3a8d9f4, size 0x5c, virtual true, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONNode* get_Item(::StringW aKey);

  /// @brief Method get_Tag, addr 0x3a8d73c, size 0x8, virtual true, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONNodeType get_Tag();

  /// @brief Method set_Inline, addr 0x3a8d730, size 0xc, virtual true, abstract: false, final false
  inline void set_Inline(bool value);

  /// @brief Method set_Item, addr 0x3a8d8b4, size 0x140, virtual true, abstract: false, final false
  inline void set_Item(int32_t aIndex, ::HoudiniEngineUnity::JSONNode* value);

  /// @brief Method set_Item, addr 0x3a8da50, size 0xe0, virtual true, abstract: false, final false
  inline void set_Item(::StringW aKey, ::HoudiniEngineUnity::JSONNode* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JSONArray();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JSONArray", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JSONArray(JSONArray&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JSONArray", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JSONArray(JSONArray const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11858 };

  /// @brief Field m_List, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::JSONNode*>* ___m_List;

  /// @brief Field inline, offset: 0x18, size: 0x1, def value: None
  bool ____cordl_inline;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::JSONArray, ___m_List) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::JSONArray, ____cordl_inline) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::JSONArray, 0x20>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::JSONArray);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::JSONArray*, "HoudiniEngineUnity", "JSONArray");
NEED_NO_BOX(::HoudiniEngineUnity::JSONArray__get_Children_d__22);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::JSONArray__get_Children_d__22*, "HoudiniEngineUnity", "JSONArray/<get_Children>d__22");
