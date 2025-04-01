#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/JSONNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__JSONContainerType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JSONNode)
namespace HoudiniEngineUnity {
struct Enumerator_JSONNode_Type;
}
namespace HoudiniEngineUnity {
class JSONArray;
}
namespace HoudiniEngineUnity {
struct JSONContainerType;
}
namespace HoudiniEngineUnity {
struct JSONNodeType;
}
namespace HoudiniEngineUnity {
struct JSONNode_Enumerator;
}
namespace HoudiniEngineUnity {
struct JSONNode_KeyEnumerator;
}
namespace HoudiniEngineUnity {
class JSONNode_LinqEnumerator;
}
namespace HoudiniEngineUnity {
struct JSONNode_ValueEnumerator;
}
namespace HoudiniEngineUnity {
class JSONNode__get_Children_d__40;
}
namespace HoudiniEngineUnity {
class JSONNode__get_DeepChildren_d__42;
}
namespace HoudiniEngineUnity {
class JSONObject;
}
namespace HoudiniEngineUnity {
struct JSONTextMode;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct Dictionary_2_Enumerator;
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
namespace System::Collections::Generic {
template <typename T> struct List_1_Enumerator;
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
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class RectOffset;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct Enumerator_JSONNode_Type;
}
namespace HoudiniEngineUnity {
class JSONNode;
}
namespace HoudiniEngineUnity {
class JSONNode_LinqEnumerator;
}
namespace HoudiniEngineUnity {
class JSONNode__get_Children_d__40;
}
namespace HoudiniEngineUnity {
class JSONNode__get_DeepChildren_d__42;
}
namespace HoudiniEngineUnity {
struct JSONNode_Enumerator;
}
namespace HoudiniEngineUnity {
struct JSONNode_KeyEnumerator;
}
namespace HoudiniEngineUnity {
struct JSONNode_ValueEnumerator;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::Enumerator_JSONNode_Type);
MARK_REF_PTR_T(::HoudiniEngineUnity::JSONNode);
MARK_REF_PTR_T(::HoudiniEngineUnity::JSONNode_LinqEnumerator);
MARK_REF_PTR_T(::HoudiniEngineUnity::JSONNode__get_Children_d__40);
MARK_REF_PTR_T(::HoudiniEngineUnity::JSONNode__get_DeepChildren_d__42);
MARK_VAL_T(::HoudiniEngineUnity::JSONNode_Enumerator);
MARK_VAL_T(::HoudiniEngineUnity::JSONNode_KeyEnumerator);
MARK_VAL_T(::HoudiniEngineUnity::JSONNode_ValueEnumerator);
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.JSONNode/Enumerator/Type
struct CORDL_TYPE Enumerator_JSONNode_Type {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Enumerator_JSONNode_Type_Unwrapped
  enum struct __Enumerator_JSONNode_Type_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Array = static_cast<int32_t>(0x1),
    __E_Object = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Enumerator_JSONNode_Type_Unwrapped() const noexcept {
    return static_cast<__Enumerator_JSONNode_Type_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Enumerator_JSONNode_Type();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Enumerator_JSONNode_Type(int32_t value__) noexcept;

  /// @brief Field Array value: I32(1)
  static ::HoudiniEngineUnity::Enumerator_JSONNode_Type const Array;

  /// @brief Field None value: I32(0)
  static ::HoudiniEngineUnity::Enumerator_JSONNode_Type const None;

  /// @brief Field Object value: I32(2)
  static ::HoudiniEngineUnity::Enumerator_JSONNode_Type const Object;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11849 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::Enumerator_JSONNode_Type, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Enumerator_JSONNode_Type, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies HoudiniEngineUnity.JSONNode::Enumerator::Type, System.Collections.Generic.Dictionary`2::Enumerator<TKey, TValue>, System.Collections.Generic.List`1::Enumerator<T>
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.JSONNode/Enumerator
struct CORDL_TYPE JSONNode_Enumerator {
public:
  // Declarations
  using Type = ::HoudiniEngineUnity::Enumerator_JSONNode_Type;

  __declspec(property(get = get_Current)) ::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*> Current;

  __declspec(property(get = get_IsValid)) bool IsValid;

  /// @brief Method MoveNext, addr 0x3a87b50, size 0x94, virtual false, abstract: false, final false
  inline bool MoveNext();

  /// @brief Method .ctor, addr 0x3a87a30, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1_Enumerator<::HoudiniEngineUnity::JSONNode*> aArrayEnum);

  /// @brief Method .ctor, addr 0x3a87a5c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::HoudiniEngineUnity::JSONNode*> aDictEnum);

  /// @brief Method get_Current, addr 0x3a87a80, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*> get_Current();

  /// @brief Method get_IsValid, addr 0x3a87a20, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsValid();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JSONNode_Enumerator();

  // Ctor Parameters [CppParam { name: "type", ty: "::HoudiniEngineUnity::Enumerator_JSONNode_Type", modifiers: "", def_value: None }, CppParam { name: "m_Object", ty:
  // "::System::Collections::Generic::Dictionary_2_Enumerator<::StringW,::HoudiniEngineUnity::JSONNode*>", modifiers: "", def_value: None }, CppParam { name: "m_Array", ty:
  // "::System::Collections::Generic::List_1_Enumerator<::HoudiniEngineUnity::JSONNode*>", modifiers: "", def_value: None }]
  constexpr JSONNode_Enumerator(::HoudiniEngineUnity::Enumerator_JSONNode_Type type, ::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::HoudiniEngineUnity::JSONNode*> m_Object,
                                ::System::Collections::Generic::List_1_Enumerator<::HoudiniEngineUnity::JSONNode*> m_Array) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11850 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field type, offset: 0x0, size: 0x4, def value: None
  ::HoudiniEngineUnity::Enumerator_JSONNode_Type type;

  /// @brief Field m_Object, offset: 0x8, size: 0x28, def value: None
  ::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::HoudiniEngineUnity::JSONNode*> m_Object;

  /// @brief Field m_Array, offset: 0x30, size: 0x18, def value: None
  ::System::Collections::Generic::List_1_Enumerator<::HoudiniEngineUnity::JSONNode*> m_Array;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::JSONNode_Enumerator, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::JSONNode_Enumerator, m_Object) == 0x8, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::JSONNode_Enumerator, m_Array) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::JSONNode_Enumerator, 0x48>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies HoudiniEngineUnity.JSONNode::Enumerator
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.JSONNode/ValueEnumerator
struct CORDL_TYPE JSONNode_ValueEnumerator {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::HoudiniEngineUnity::JSONNode* Current;

  /// @brief Method GetEnumerator, addr 0x3a87cf0, size 0x10, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONNode_ValueEnumerator GetEnumerator();

  /// @brief Method MoveNext, addr 0x3a87cec, size 0x4, virtual false, abstract: false, final false
  inline bool MoveNext();

  /// @brief Method .ctor, addr 0x3a87be4, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1_Enumerator<::HoudiniEngineUnity::JSONNode*> aArrayEnum);

  /// @brief Method .ctor, addr 0x3a87c24, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::HoudiniEngineUnity::JSONNode*> aDictEnum);

  /// @brief Method .ctor, addr 0x3a87c94, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::HoudiniEngineUnity::JSONNode_Enumerator aEnumerator);

  /// @brief Method get_Current, addr 0x3a87ca8, size 0x44, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONNode* get_Current();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JSONNode_ValueEnumerator();

  // Ctor Parameters [CppParam { name: "m_Enumerator", ty: "::HoudiniEngineUnity::JSONNode_Enumerator", modifiers: "", def_value: None }]
  constexpr JSONNode_ValueEnumerator(::HoudiniEngineUnity::JSONNode_Enumerator m_Enumerator) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11851 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field m_Enumerator, offset: 0x0, size: 0x48, def value: None
  ::HoudiniEngineUnity::JSONNode_Enumerator m_Enumerator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::JSONNode_ValueEnumerator, m_Enumerator) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::JSONNode_ValueEnumerator, 0x48>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies HoudiniEngineUnity.JSONNode::Enumerator
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.JSONNode/KeyEnumerator
struct CORDL_TYPE JSONNode_KeyEnumerator {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::StringW Current;

  /// @brief Method GetEnumerator, addr 0x3a87e04, size 0x10, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONNode_KeyEnumerator GetEnumerator();

  /// @brief Method MoveNext, addr 0x3a87e00, size 0x4, virtual false, abstract: false, final false
  inline bool MoveNext();

  /// @brief Method .ctor, addr 0x3a87d00, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1_Enumerator<::HoudiniEngineUnity::JSONNode*> aArrayEnum);

  /// @brief Method .ctor, addr 0x3a87d40, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::HoudiniEngineUnity::JSONNode*> aDictEnum);

  /// @brief Method .ctor, addr 0x3a87db0, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::HoudiniEngineUnity::JSONNode_Enumerator aEnumerator);

  /// @brief Method get_Current, addr 0x3a87dc4, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW get_Current();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JSONNode_KeyEnumerator();

  // Ctor Parameters [CppParam { name: "m_Enumerator", ty: "::HoudiniEngineUnity::JSONNode_Enumerator", modifiers: "", def_value: None }]
  constexpr JSONNode_KeyEnumerator(::HoudiniEngineUnity::JSONNode_Enumerator m_Enumerator) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11852 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field m_Enumerator, offset: 0x0, size: 0x48, def value: None
  ::HoudiniEngineUnity::JSONNode_Enumerator m_Enumerator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::JSONNode_KeyEnumerator, m_Enumerator) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::JSONNode_KeyEnumerator, 0x48>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies HoudiniEngineUnity.JSONNode::Enumerator, System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IEnumerator`1<T>, System.Collections.Generic.KeyValuePair`2<TKey,
// TValue>, System.Collections.IEnumerable, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.JSONNode/LinqEnumerator
class CORDL_TYPE JSONNode_LinqEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*> Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field m_Enumerator, offset 0x18, size 0x48
  __declspec(property(get = __cordl_internal_get_m_Enumerator, put = __cordl_internal_set_m_Enumerator)) ::HoudiniEngineUnity::JSONNode_Enumerator m_Enumerator;

  /// @brief Field m_Node, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Node, put = __cordl_internal_set_m_Node)) ::HoudiniEngineUnity::JSONNode* m_Node;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::HoudiniEngineUnity::JSONNode*>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::HoudiniEngineUnity::JSONNode*>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x3a87e88, size 0x14, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetEnumerator, addr 0x3a87e9c, size 0x5c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*>>* GetEnumerator();

  /// @brief Method MoveNext, addr 0x3a87e80, size 0x8, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::HoudiniEngineUnity::JSONNode_LinqEnumerator* New_ctor(::HoudiniEngineUnity::JSONNode* aNode);

  /// @brief Method Reset, addr 0x3a87ef8, size 0x68, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x3a87f60, size 0x5c, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3a87e1c, size 0x64, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  constexpr ::HoudiniEngineUnity::JSONNode_Enumerator const& __cordl_internal_get_m_Enumerator() const;

  constexpr ::HoudiniEngineUnity::JSONNode_Enumerator& __cordl_internal_get_m_Enumerator();

  constexpr ::HoudiniEngineUnity::JSONNode* const& __cordl_internal_get_m_Node() const;

  constexpr ::HoudiniEngineUnity::JSONNode*& __cordl_internal_get_m_Node();

  constexpr void __cordl_internal_set_m_Enumerator(::HoudiniEngineUnity::JSONNode_Enumerator value);

  constexpr void __cordl_internal_set_m_Node(::HoudiniEngineUnity::JSONNode* value);

  /// @brief Method .ctor, addr 0x3a84018, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::HoudiniEngineUnity::JSONNode* aNode);

  /// @brief Method get_Current, addr 0x3a87e14, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*> get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::HoudiniEngineUnity::JSONNode*>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*>>*
  i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2___StringW___HoudiniEngineUnity__JSONNode___() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::HoudiniEngineUnity::JSONNode*>>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*>>*
  i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2___StringW___HoudiniEngineUnity__JSONNode___() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JSONNode_LinqEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JSONNode_LinqEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JSONNode_LinqEnumerator(JSONNode_LinqEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JSONNode_LinqEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JSONNode_LinqEnumerator(JSONNode_LinqEnumerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11853 };

  /// @brief Field m_Node, offset: 0x10, size: 0x8, def value: None
  ::HoudiniEngineUnity::JSONNode* ___m_Node;

  /// @brief Field m_Enumerator, offset: 0x18, size: 0x48, def value: None
  ::HoudiniEngineUnity::JSONNode_Enumerator ___m_Enumerator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::JSONNode_LinqEnumerator, ___m_Node) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::JSONNode_LinqEnumerator, ___m_Enumerator) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::JSONNode_LinqEnumerator, 0x60>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerable, System.Collections.IEnumerator, System.IDisposable,
// System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.JSONNode/<get_Children>d__40
class CORDL_TYPE JSONNode__get_Children_d__40 : public ::System::Object {
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

  /// @brief Method MoveNext, addr 0x3a87fc0, size 0x18, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::HoudiniEngineUnity::JSONNode__get_Children_d__40* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<HoudiniEngineUnity.JSONNode>.GetEnumerator, addr 0x3a88020, size 0x90, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>* System_Collections_Generic_IEnumerable_HoudiniEngineUnity_JSONNode__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<HoudiniEngineUnity.JSONNode>.get_Current, addr 0x3a87fd8, size 0x8, virtual true, abstract: false, final true
  inline ::HoudiniEngineUnity::JSONNode* System_Collections_Generic_IEnumerator_HoudiniEngineUnity_JSONNode__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x3a880b0, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3a87fe0, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3a88018, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3a87fbc, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::HoudiniEngineUnity::JSONNode* const& __cordl_internal_get___2__current() const;

  constexpr ::HoudiniEngineUnity::JSONNode*& __cordl_internal_get___2__current();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::HoudiniEngineUnity::JSONNode* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  /// @brief Method .ctor, addr 0x3a83dc4, size 0x34, virtual false, abstract: false, final false
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
  constexpr JSONNode__get_Children_d__40();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JSONNode__get_Children_d__40", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JSONNode__get_Children_d__40(JSONNode__get_Children_d__40&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JSONNode__get_Children_d__40", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JSONNode__get_Children_d__40(JSONNode__get_Children_d__40 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11854 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::HoudiniEngineUnity::JSONNode* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::JSONNode__get_Children_d__40, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::JSONNode__get_Children_d__40, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::JSONNode__get_Children_d__40, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::JSONNode__get_Children_d__40, 0x28>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerable, System.Collections.IEnumerator, System.IDisposable,
// System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.JSONNode/<get_DeepChildren>d__42
class CORDL_TYPE JSONNode__get_DeepChildren_d__42 : public ::System::Object {
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
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::HoudiniEngineUnity::JSONNode* __4__this;

  /// @brief Field <>7__wrap1, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1, put = __cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>* __7__wrap1;

  /// @brief Field <>7__wrap2, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap2, put = __cordl_internal_set___7__wrap2)) ::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>* __7__wrap2;

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

  /// @brief Method MoveNext, addr 0x3a88164, size 0x430, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::HoudiniEngineUnity::JSONNode__get_DeepChildren_d__42* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<HoudiniEngineUnity.JSONNode>.GetEnumerator, addr 0x3a8873c, size 0x9c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>* System_Collections_Generic_IEnumerable_HoudiniEngineUnity_JSONNode__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<HoudiniEngineUnity.JSONNode>.get_Current, addr 0x3a886f4, size 0x8, virtual true, abstract: false, final true
  inline ::HoudiniEngineUnity::JSONNode* System_Collections_Generic_IEnumerator_HoudiniEngineUnity_JSONNode__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x3a887d8, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3a886fc, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3a88734, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3a880b4, size 0xb0, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::HoudiniEngineUnity::JSONNode* const& __cordl_internal_get___2__current() const;

  constexpr ::HoudiniEngineUnity::JSONNode*& __cordl_internal_get___2__current();

  constexpr ::HoudiniEngineUnity::JSONNode* const& __cordl_internal_get___4__this() const;

  constexpr ::HoudiniEngineUnity::JSONNode*& __cordl_internal_get___4__this();

  constexpr ::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>* const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>*& __cordl_internal_get___7__wrap1();

  constexpr ::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>* const& __cordl_internal_get___7__wrap2() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>*& __cordl_internal_get___7__wrap2();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::HoudiniEngineUnity::JSONNode* value);

  constexpr void __cordl_internal_set___4__this(::HoudiniEngineUnity::JSONNode* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>* value);

  constexpr void __cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  /// @brief Method <>m__Finally1, addr 0x3a88644, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method <>m__Finally2, addr 0x3a88594, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally2();

  /// @brief Method .ctor, addr 0x3a83e68, size 0x34, virtual false, abstract: false, final false
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
  constexpr JSONNode__get_DeepChildren_d__42();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JSONNode__get_DeepChildren_d__42", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JSONNode__get_DeepChildren_d__42(JSONNode__get_DeepChildren_d__42&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JSONNode__get_DeepChildren_d__42", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JSONNode__get_DeepChildren_d__42(JSONNode__get_DeepChildren_d__42 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11855 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::HoudiniEngineUnity::JSONNode* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::HoudiniEngineUnity::JSONNode* _____4__this;

  /// @brief Field <>7__wrap1, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>* _____7__wrap1;

  /// @brief Field <>7__wrap2, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>* _____7__wrap2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::JSONNode__get_DeepChildren_d__42, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::JSONNode__get_DeepChildren_d__42, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::JSONNode__get_DeepChildren_d__42, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::JSONNode__get_DeepChildren_d__42, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::JSONNode__get_DeepChildren_d__42, _____7__wrap1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::JSONNode__get_DeepChildren_d__42, _____7__wrap2) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::JSONNode__get_DeepChildren_d__42, 0x40>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies HoudiniEngineUnity.JSONContainerType, System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.JSONNode
class CORDL_TYPE JSONNode : public ::System::Object {
public:
  // Declarations
  using Enumerator = ::HoudiniEngineUnity::JSONNode_Enumerator;

  using KeyEnumerator = ::HoudiniEngineUnity::JSONNode_KeyEnumerator;

  using LinqEnumerator = ::HoudiniEngineUnity::JSONNode_LinqEnumerator;

  using ValueEnumerator = ::HoudiniEngineUnity::JSONNode_ValueEnumerator;

  using _get_Children_d__40 = ::HoudiniEngineUnity::JSONNode__get_Children_d__40;

  using _get_DeepChildren_d__42 = ::HoudiniEngineUnity::JSONNode__get_DeepChildren_d__42;

  __declspec(property(get = get_AsArray)) ::HoudiniEngineUnity::JSONArray* AsArray;

  __declspec(property(get = get_AsBool, put = set_AsBool)) bool AsBool;

  __declspec(property(get = get_AsDouble, put = set_AsDouble)) double_t AsDouble;

  __declspec(property(get = get_AsFloat, put = set_AsFloat)) float_t AsFloat;

  __declspec(property(get = get_AsInt, put = set_AsInt)) int32_t AsInt;

  __declspec(property(get = get_AsLong, put = set_AsLong)) int64_t AsLong;

  __declspec(property(get = get_AsObject)) ::HoudiniEngineUnity::JSONObject* AsObject;

  __declspec(property(get = get_Children)) ::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>* Children;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_DeepChildren)) ::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>* DeepChildren;

  __declspec(property(get = get_Inline, put = set_Inline)) bool Inline;

  __declspec(property(get = get_IsArray)) bool IsArray;

  __declspec(property(get = get_IsBoolean)) bool IsBoolean;

  __declspec(property(get = get_IsNull)) bool IsNull;

  __declspec(property(get = get_IsNumber)) bool IsNumber;

  __declspec(property(get = get_IsObject)) bool IsObject;

  __declspec(property(get = get_IsString)) bool IsString;

  __declspec(property(get = get_Item, put = set_Item)) ::HoudiniEngineUnity::JSONNode* Item[];

  __declspec(property(get = get_Item, put = set_Item)) ::HoudiniEngineUnity::JSONNode* Item[];

  __declspec(property(get = get_Keys)) ::HoudiniEngineUnity::JSONNode_KeyEnumerator Keys;

  __declspec(property(get = get_Linq)) ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*>>* Linq;

  /// @brief Field QuaternionContainerType, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_QuaternionContainerType, put = setStaticF_QuaternionContainerType)) ::HoudiniEngineUnity::JSONContainerType QuaternionContainerType;

  /// @brief Field RectContainerType, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_RectContainerType, put = setStaticF_RectContainerType)) ::HoudiniEngineUnity::JSONContainerType RectContainerType;

  __declspec(property(get = get_Tag)) ::HoudiniEngineUnity::JSONNodeType Tag;

  __declspec(property(get = get_Value, put = set_Value)) ::StringW Value;

  __declspec(property(get = get_Values)) ::HoudiniEngineUnity::JSONNode_ValueEnumerator Values;

  /// @brief Field VectorContainerType, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_VectorContainerType, put = setStaticF_VectorContainerType)) ::HoudiniEngineUnity::JSONContainerType VectorContainerType;

  /// @brief Field forceASCII, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_forceASCII, put = setStaticF_forceASCII)) bool forceASCII;

  /// @brief Field longAsString, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_longAsString, put = setStaticF_longAsString)) bool longAsString;

  /// @brief Field m_EscapeBuilder, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_EscapeBuilder, put = setStaticF_m_EscapeBuilder)) ::System::Text::StringBuilder* m_EscapeBuilder;

  /// @brief Method Add, addr 0x3a83ce0, size 0x64, virtual true, abstract: false, final false
  inline void Add(::HoudiniEngineUnity::JSONNode* aItem);

  /// @brief Method Add, addr 0x3a83cdc, size 0x4, virtual true, abstract: false, final false
  inline void Add(::StringW aKey, ::HoudiniEngineUnity::JSONNode* aItem);

  /// @brief Method Equals, addr 0x3a84b74, size 0xc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Escape, addr 0x3a84c1c, size 0x2c4, virtual false, abstract: false, final false
  static inline ::StringW Escape(::StringW aText);

  /// @brief Method GetContainer, addr 0x3a85808, size 0x80, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::JSONNode* GetContainer(::HoudiniEngineUnity::JSONContainerType aType);

  /// @brief Method GetEnumerator, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONNode_Enumerator GetEnumerator();

  /// @brief Method GetHashCode, addr 0x3a84b80, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::HoudiniEngineUnity::JSONNode* New_ctor();

  /// @brief Method Parse, addr 0x3a850e4, size 0x62c, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::JSONNode* Parse(::StringW aJSON);

  /// @brief Method ParseElement, addr 0x3a84ee0, size 0x178, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::JSONNode* ParseElement(::StringW token, bool quoted);

  /// @brief Method ReadMatrix, addr 0x3a87894, size 0xd8, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 ReadMatrix();

  /// @brief Method ReadQuaternion, addr 0x3a8698c, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion ReadQuaternion();

  /// @brief Method ReadQuaternion, addr 0x3a8719c, size 0x230, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion ReadQuaternion(::UnityEngine::Quaternion aDefault);

  /// @brief Method ReadRect, addr 0x3a86a00, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect ReadRect();

  /// @brief Method ReadRect, addr 0x3a873cc, size 0x230, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect ReadRect(::UnityEngine::Rect aDefault);

  /// @brief Method ReadRectOffset, addr 0x3a86a24, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::RectOffset* ReadRectOffset();

  /// @brief Method ReadRectOffset, addr 0x3a875fc, size 0x298, virtual false, abstract: false, final false
  inline ::UnityEngine::RectOffset* ReadRectOffset(::UnityEngine::RectOffset* aDefault);

  /// @brief Method ReadVector2, addr 0x3a86864, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 ReadVector2();

  /// @brief Method ReadVector2, addr 0x3a86a80, size 0x140, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 ReadVector2(::UnityEngine::Vector2 aDefault);

  /// @brief Method ReadVector2, addr 0x3a86bc0, size 0xd8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 ReadVector2(::StringW aXName, ::StringW aYName);

  /// @brief Method ReadVector3, addr 0x3a868c4, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ReadVector3();

  /// @brief Method ReadVector3, addr 0x3a86c98, size 0x1bc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ReadVector3(::UnityEngine::Vector3 aDefault);

  /// @brief Method ReadVector3, addr 0x3a86e54, size 0x118, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ReadVector3(::StringW aXName, ::StringW aYName, ::StringW aZName);

  /// @brief Method ReadVector4, addr 0x3a86928, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 ReadVector4();

  /// @brief Method ReadVector4, addr 0x3a86f6c, size 0x230, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 ReadVector4(::UnityEngine::Vector4 aDefault);

  /// @brief Method Remove, addr 0x3a83d4c, size 0x8, virtual true, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONNode* Remove(int32_t aIndex);

  /// @brief Method Remove, addr 0x3a83d44, size 0x8, virtual true, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONNode* Remove(::StringW aKey);

  /// @brief Method Remove, addr 0x3a83d54, size 0x8, virtual true, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONNode* Remove(::HoudiniEngineUnity::JSONNode* aNode);

  /// @brief Method ToString, addr 0x3a83e9c, size 0x8c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x3a83f28, size 0x98, virtual true, abstract: false, final false
  inline ::StringW ToString(int32_t aIndent);

  /// @brief Method WriteMatrix, addr 0x3a8796c, size 0xac, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONNode* WriteMatrix(::UnityEngine::Matrix4x4 aMatrix);

  /// @brief Method WriteQuaternion, addr 0x3a86010, size 0x250, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONNode* WriteQuaternion(::UnityEngine::Quaternion aRot);

  /// @brief Method WriteRect, addr 0x3a862e4, size 0x250, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONNode* WriteRect(::UnityEngine::Rect aRect);

  /// @brief Method WriteRectOffset, addr 0x3a86590, size 0x2c4, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONNode* WriteRectOffset(::UnityEngine::RectOffset* aRect);

  /// @brief Method WriteToStringBuilder, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void WriteToStringBuilder(::System::Text::StringBuilder* aSB, int32_t aIndent, int32_t aIndentInc, ::HoudiniEngineUnity::JSONTextMode aMode);

  /// @brief Method WriteVector2, addr 0x3a85924, size 0x130, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONNode* WriteVector2(::UnityEngine::Vector2 aVec, ::StringW aXName, ::StringW aYName);

  /// @brief Method WriteVector3, addr 0x3a85b18, size 0x1a0, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONNode* WriteVector3(::UnityEngine::Vector3 aVec, ::StringW aXName, ::StringW aYName, ::StringW aZName);

  /// @brief Method WriteVector4, addr 0x3a85d3c, size 0x250, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONNode* WriteVector4(::UnityEngine::Vector4 aVec);

  /// @brief Method .ctor, addr 0x3a87a18, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::HoudiniEngineUnity::JSONContainerType getStaticF_QuaternionContainerType();

  static inline ::HoudiniEngineUnity::JSONContainerType getStaticF_RectContainerType();

  static inline ::HoudiniEngineUnity::JSONContainerType getStaticF_VectorContainerType();

  static inline bool getStaticF_forceASCII();

  static inline bool getStaticF_longAsString();

  static inline ::System::Text::StringBuilder* getStaticF_m_EscapeBuilder();

  /// @brief Method get_AsArray, addr 0x3a8445c, size 0x78, virtual true, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONArray* get_AsArray();

  /// @brief Method get_AsBool, addr 0x3a842bc, size 0xb8, virtual true, abstract: false, final false
  inline bool get_AsBool();

  /// @brief Method get_AsDouble, addr 0x3a84110, size 0xa4, virtual true, abstract: false, final false
  inline double_t get_AsDouble();

  /// @brief Method get_AsFloat, addr 0x3a84288, size 0x20, virtual true, abstract: false, final false
  inline float_t get_AsFloat();

  /// @brief Method get_AsInt, addr 0x3a8423c, size 0x34, virtual true, abstract: false, final false
  inline int32_t get_AsInt();

  /// @brief Method get_AsLong, addr 0x3a843ec, size 0x34, virtual true, abstract: false, final false
  inline int64_t get_AsLong();

  /// @brief Method get_AsObject, addr 0x3a844d4, size 0x78, virtual true, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONObject* get_AsObject();

  /// @brief Method get_Children, addr 0x3a83d5c, size 0x68, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>* get_Children();

  /// @brief Method get_Count, addr 0x3a83c98, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_DeepChildren, addr 0x3a83df8, size 0x70, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>* get_DeepChildren();

  /// @brief Method get_EscapeBuilder, addr 0x3a84b88, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Text::StringBuilder* get_EscapeBuilder();

  /// @brief Method get_Inline, addr 0x3a83cd0, size 0x8, virtual true, abstract: false, final false
  inline bool get_Inline();

  /// @brief Method get_IsArray, addr 0x3a83cc0, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsArray();

  /// @brief Method get_IsBoolean, addr 0x3a83cb0, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsBoolean();

  /// @brief Method get_IsNull, addr 0x3a83cb8, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsNull();

  /// @brief Method get_IsNumber, addr 0x3a83ca0, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsNumber();

  /// @brief Method get_IsObject, addr 0x3a83cc8, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsObject();

  /// @brief Method get_IsString, addr 0x3a83ca8, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsString();

  /// @brief Method get_Item, addr 0x3a83c3c, size 0x8, virtual true, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONNode* get_Item(int32_t aIndex);

  /// @brief Method get_Item, addr 0x3a83c48, size 0x8, virtual true, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONNode* get_Item(::StringW aKey);

  /// @brief Method get_Keys, addr 0x3a84098, size 0x3c, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONNode_KeyEnumerator get_Keys();

  /// @brief Method get_Linq, addr 0x3a83fc0, size 0x58, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*>>* get_Linq();

  /// @brief Method get_Tag, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONNodeType get_Tag();

  /// @brief Method get_Value, addr 0x3a83c54, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method get_Values, addr 0x3a840d4, size 0x3c, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONNode_ValueEnumerator get_Values();

  /// @brief Method op_Equality, addr 0x3a845d0, size 0x170, virtual false, abstract: false, final false
  static inline bool op_Equality(::HoudiniEngineUnity::JSONNode* a, ::System::Object* b);

  /// @brief Method op_Implicit, addr 0x3a84b38, size 0x3c, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::JSONNode* op_Implicit___HoudiniEngineUnity__JSONNode_(::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*> aKeyValue);

  /// @brief Method op_Implicit, addr 0x3a86260, size 0x84, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::JSONNode* op_Implicit___HoudiniEngineUnity__JSONNode_(::UnityEngine::Rect aRect);

  /// @brief Method op_Implicit, addr 0x3a86534, size 0x5c, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::JSONNode* op_Implicit___HoudiniEngineUnity__JSONNode_(::UnityEngine::RectOffset* aRect);

  /// @brief Method op_Implicit, addr 0x3a85f8c, size 0x84, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::JSONNode* op_Implicit___HoudiniEngineUnity__JSONNode_(::UnityEngine::Quaternion aRot);

  /// @brief Method op_Implicit, addr 0x3a85888, size 0x9c, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::JSONNode* op_Implicit___HoudiniEngineUnity__JSONNode_(::UnityEngine::Vector2 aVec);

  /// @brief Method op_Implicit, addr 0x3a85a54, size 0xc4, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::JSONNode* op_Implicit___HoudiniEngineUnity__JSONNode_(::UnityEngine::Vector3 aVec);

  /// @brief Method op_Implicit, addr 0x3a85cb8, size 0x84, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::JSONNode* op_Implicit___HoudiniEngineUnity__JSONNode_(::UnityEngine::Vector4 aVec);

  /// @brief Method op_Implicit, addr 0x3a84a70, size 0x60, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::JSONNode* op_Implicit___HoudiniEngineUnity__JSONNode_(bool b);

  /// @brief Method op_Implicit, addr 0x3a84740, size 0x64, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::JSONNode* op_Implicit___HoudiniEngineUnity__JSONNode_(double_t n);

  /// @brief Method op_Implicit, addr 0x3a8480c, size 0x68, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::JSONNode* op_Implicit___HoudiniEngineUnity__JSONNode_(float_t n);

  /// @brief Method op_Implicit, addr 0x3a848b4, size 0x68, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::JSONNode* op_Implicit___HoudiniEngineUnity__JSONNode_(int32_t n);

  /// @brief Method op_Implicit, addr 0x3a8495c, size 0xd4, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::JSONNode* op_Implicit___HoudiniEngineUnity__JSONNode_(int64_t n);

  /// @brief Method op_Implicit, addr 0x3a8454c, size 0x5c, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::JSONNode* op_Implicit___HoudiniEngineUnity__JSONNode_(::StringW s);

  /// @brief Method op_Implicit, addr 0x3a822d0, size 0x3c, virtual false, abstract: false, final false
  static inline ::StringW op_Implicit___StringW(::HoudiniEngineUnity::JSONNode* d);

  /// @brief Method op_Implicit, addr 0x3a8697c, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion op_Implicit___UnityEngine__Quaternion(::HoudiniEngineUnity::JSONNode* aNode);

  /// @brief Method op_Implicit, addr 0x3a869e0, size 0x20, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rect op_Implicit___UnityEngine__Rect(::HoudiniEngineUnity::JSONNode* aNode);

  /// @brief Method op_Implicit, addr 0x3a86a14, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::RectOffset* op_Implicit___UnityEngine__RectOffset_(::HoudiniEngineUnity::JSONNode* aNode);

  /// @brief Method op_Implicit, addr 0x3a86854, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 op_Implicit___UnityEngine__Vector2(::HoudiniEngineUnity::JSONNode* aNode);

  /// @brief Method op_Implicit, addr 0x3a868b4, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 op_Implicit___UnityEngine__Vector3(::HoudiniEngineUnity::JSONNode* aNode);

  /// @brief Method op_Implicit, addr 0x3a86918, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 op_Implicit___UnityEngine__Vector4(::HoudiniEngineUnity::JSONNode* aNode);

  /// @brief Method op_Implicit, addr 0x3a84af8, size 0x40, virtual false, abstract: false, final false
  static inline bool op_Implicit_bool(::HoudiniEngineUnity::JSONNode* d);

  /// @brief Method op_Implicit, addr 0x3a847cc, size 0x40, virtual false, abstract: false, final false
  static inline double_t op_Implicit_double_t(::HoudiniEngineUnity::JSONNode* d);

  /// @brief Method op_Implicit, addr 0x3a84874, size 0x40, virtual false, abstract: false, final false
  static inline float_t op_Implicit_float_t(::HoudiniEngineUnity::JSONNode* d);

  /// @brief Method op_Implicit, addr 0x3a8491c, size 0x40, virtual false, abstract: false, final false
  static inline int32_t op_Implicit_int32_t(::HoudiniEngineUnity::JSONNode* d);

  /// @brief Method op_Implicit, addr 0x3a84a30, size 0x40, virtual false, abstract: false, final false
  static inline int64_t op_Implicit_int64_t(::HoudiniEngineUnity::JSONNode* d);

  /// @brief Method op_Inequality, addr 0x3a822b8, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(::HoudiniEngineUnity::JSONNode* a, ::System::Object* b);

  static inline void setStaticF_QuaternionContainerType(::HoudiniEngineUnity::JSONContainerType value);

  static inline void setStaticF_RectContainerType(::HoudiniEngineUnity::JSONContainerType value);

  static inline void setStaticF_VectorContainerType(::HoudiniEngineUnity::JSONContainerType value);

  static inline void setStaticF_forceASCII(bool value);

  static inline void setStaticF_longAsString(bool value);

  static inline void setStaticF_m_EscapeBuilder(::System::Text::StringBuilder* value);

  /// @brief Method set_AsBool, addr 0x3a84374, size 0x78, virtual true, abstract: false, final false
  inline void set_AsBool(bool value);

  /// @brief Method set_AsDouble, addr 0x3a841b4, size 0x88, virtual true, abstract: false, final false
  inline void set_AsDouble(double_t value);

  /// @brief Method set_AsFloat, addr 0x3a842a8, size 0x14, virtual true, abstract: false, final false
  inline void set_AsFloat(float_t value);

  /// @brief Method set_AsInt, addr 0x3a84270, size 0x18, virtual true, abstract: false, final false
  inline void set_AsInt(int32_t value);

  /// @brief Method set_AsLong, addr 0x3a84420, size 0x3c, virtual true, abstract: false, final false
  inline void set_AsLong(int64_t value);

  /// @brief Method set_Inline, addr 0x3a83cd8, size 0x4, virtual true, abstract: false, final false
  inline void set_Inline(bool value);

  /// @brief Method set_Item, addr 0x3a83c44, size 0x4, virtual true, abstract: false, final false
  inline void set_Item(int32_t aIndex, ::HoudiniEngineUnity::JSONNode* value);

  /// @brief Method set_Item, addr 0x3a83c50, size 0x4, virtual true, abstract: false, final false
  inline void set_Item(::StringW aKey, ::HoudiniEngineUnity::JSONNode* value);

  /// @brief Method set_Value, addr 0x3a83c94, size 0x4, virtual true, abstract: false, final false
  inline void set_Value(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JSONNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JSONNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JSONNode(JSONNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JSONNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JSONNode(JSONNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11856 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::JSONNode, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Enumerator_JSONNode_Type, "HoudiniEngineUnity", "JSONNode/Enumerator/Type");
NEED_NO_BOX(::HoudiniEngineUnity::JSONNode);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::JSONNode*, "HoudiniEngineUnity", "JSONNode");
NEED_NO_BOX(::HoudiniEngineUnity::JSONNode_LinqEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::JSONNode_LinqEnumerator*, "HoudiniEngineUnity", "JSONNode/LinqEnumerator");
NEED_NO_BOX(::HoudiniEngineUnity::JSONNode__get_Children_d__40);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::JSONNode__get_Children_d__40*, "HoudiniEngineUnity", "JSONNode/<get_Children>d__40");
NEED_NO_BOX(::HoudiniEngineUnity::JSONNode__get_DeepChildren_d__42);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::JSONNode__get_DeepChildren_d__42*, "HoudiniEngineUnity", "JSONNode/<get_DeepChildren>d__42");
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::JSONNode_Enumerator, "HoudiniEngineUnity", "JSONNode/Enumerator");
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::JSONNode_KeyEnumerator, "HoudiniEngineUnity", "JSONNode/KeyEnumerator");
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::JSONNode_ValueEnumerator, "HoudiniEngineUnity", "JSONNode/ValueEnumerator");
