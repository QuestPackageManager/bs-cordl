#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__JSONContainerType_def.hpp"
#include "HoudiniEngineUnity/zzzz__JSONNode_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JSONNode)
namespace HoudiniEngineUnity {
class JSONObject;
}
namespace HoudiniEngineUnity {
class __JSONNode__LinqEnumerator;
}
namespace HoudiniEngineUnity {
struct JSONTextMode;
}
namespace UnityEngine {
class RectOffset;
}
namespace System {
class Object;
}
namespace HoudiniEngineUnity {
struct JSONNodeType;
}
namespace HoudiniEngineUnity {
class JSONArray;
}
namespace HoudiniEngineUnity {
class __JSONNode___get_DeepChildren_d__42;
}
namespace HoudiniEngineUnity {
struct __JSONNode__KeyEnumerator;
}
namespace UnityEngine {
struct Vector2;
}
namespace HoudiniEngineUnity {
class __JSONNode___get_Children_d__40;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace HoudiniEngineUnity {
struct JSONContainerType;
}
namespace UnityEngine {
struct Vector4;
}
namespace HoudiniEngineUnity {
struct __JSONNode__ValueEnumerator;
}
namespace HoudiniEngineUnity {
struct __JSONNode__Enumerator;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace System::Text {
class StringBuilder;
}
namespace UnityEngine {
struct Rect;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template <typename T> struct __List_1__Enumerator;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct __Dictionary_2__Enumerator;
}
namespace GlobalNamespace {
struct __JSONNode__Enumerator__Type;
}
// Forward declare root types
namespace GlobalNamespace {
struct __JSONNode__Enumerator__Type;
}
namespace HoudiniEngineUnity {
class JSONNode;
}
namespace HoudiniEngineUnity {
class __JSONNode__LinqEnumerator;
}
namespace HoudiniEngineUnity {
class __JSONNode___get_Children_d__40;
}
namespace HoudiniEngineUnity {
class __JSONNode___get_DeepChildren_d__42;
}
namespace HoudiniEngineUnity {
struct __JSONNode__Enumerator;
}
namespace HoudiniEngineUnity {
struct __JSONNode__KeyEnumerator;
}
namespace HoudiniEngineUnity {
struct __JSONNode__ValueEnumerator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__JSONNode__Enumerator__Type);
MARK_REF_PTR_T(::HoudiniEngineUnity::JSONNode);
MARK_REF_PTR_T(::HoudiniEngineUnity::__JSONNode__LinqEnumerator);
MARK_REF_PTR_T(::HoudiniEngineUnity::__JSONNode___get_Children_d__40);
MARK_REF_PTR_T(::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42);
MARK_VAL_T(::HoudiniEngineUnity::__JSONNode__Enumerator);
MARK_VAL_T(::HoudiniEngineUnity::__JSONNode__KeyEnumerator);
MARK_VAL_T(::HoudiniEngineUnity::__JSONNode__ValueEnumerator);
// Type: ::Type
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9862))
// CS Name: ::JSONNode::Enumerator::Type
struct CORDL_TYPE __JSONNode__Enumerator__Type {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____JSONNode__Enumerator__Type_Unwrapped
  enum struct ____JSONNode__Enumerator__Type_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Array = static_cast<int32_t>(0x1),
    __E_Object = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____JSONNode__Enumerator__Type_Unwrapped() const noexcept {
    return static_cast<____JSONNode__Enumerator__Type_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __JSONNode__Enumerator__Type(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __JSONNode__Enumerator__Type();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__JSONNode__Enumerator__Type const None;

  /// @brief Field Array value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__JSONNode__Enumerator__Type const Array;

  /// @brief Field Object value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__JSONNode__Enumerator__Type const Object;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__JSONNode__Enumerator__Type, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: HoudiniEngineUnity::JSONNode
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(9881))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9869))
// CS Name: ::HoudiniEngineUnity::JSONNode*
class CORDL_TYPE JSONNode : public ::System::Object {
public:
  // Declarations
  using _get_DeepChildren_d__42 = ::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42;

  using _get_Children_d__40 = ::HoudiniEngineUnity::__JSONNode___get_Children_d__40;

  using LinqEnumerator = ::HoudiniEngineUnity::__JSONNode__LinqEnumerator;

  using KeyEnumerator = ::HoudiniEngineUnity::__JSONNode__KeyEnumerator;

  using ValueEnumerator = ::HoudiniEngineUnity::__JSONNode__ValueEnumerator;

  using Enumerator = ::HoudiniEngineUnity::__JSONNode__Enumerator;

  /// @brief Field forceASCII, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_forceASCII, put = setStaticF_forceASCII)) bool forceASCII;

  /// @brief Field longAsString, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_longAsString, put = setStaticF_longAsString)) bool longAsString;

  /// @brief Field m_EscapeBuilder, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_EscapeBuilder, put = setStaticF_m_EscapeBuilder))::System::Text::StringBuilder* m_EscapeBuilder;

  /// @brief Field VectorContainerType, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_VectorContainerType, put = setStaticF_VectorContainerType))::HoudiniEngineUnity::JSONContainerType VectorContainerType;

  /// @brief Field QuaternionContainerType, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_QuaternionContainerType, put = setStaticF_QuaternionContainerType))::HoudiniEngineUnity::JSONContainerType QuaternionContainerType;

  /// @brief Field RectContainerType, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_RectContainerType, put = setStaticF_RectContainerType))::HoudiniEngineUnity::JSONContainerType RectContainerType;

  __declspec(property(get = get_Tag))::HoudiniEngineUnity::JSONNodeType Tag;

  __declspec(property(get = get_Item, put = set_Item))::HoudiniEngineUnity::JSONNode* Item[];

  __declspec(property(get = get_Item, put = set_Item))::HoudiniEngineUnity::JSONNode* Item[];

  __declspec(property(get = get_Value, put = set_Value))::StringW Value;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsNumber)) bool IsNumber;

  __declspec(property(get = get_IsString)) bool IsString;

  __declspec(property(get = get_IsBoolean)) bool IsBoolean;

  __declspec(property(get = get_IsNull)) bool IsNull;

  __declspec(property(get = get_IsArray)) bool IsArray;

  __declspec(property(get = get_IsObject)) bool IsObject;

  __declspec(property(get = get_Inline, put = set_Inline)) bool Inline;

  __declspec(property(get = get_Children))::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>* Children;

  __declspec(property(get = get_DeepChildren))::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>* DeepChildren;

  __declspec(property(get = get_Linq))::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*>>* Linq;

  __declspec(property(get = get_Keys))::HoudiniEngineUnity::__JSONNode__KeyEnumerator Keys;

  __declspec(property(get = get_Values))::HoudiniEngineUnity::__JSONNode__ValueEnumerator Values;

  __declspec(property(get = get_AsDouble, put = set_AsDouble)) double_t AsDouble;

  __declspec(property(get = get_AsInt, put = set_AsInt)) int32_t AsInt;

  __declspec(property(get = get_AsFloat, put = set_AsFloat)) float_t AsFloat;

  __declspec(property(get = get_AsBool, put = set_AsBool)) bool AsBool;

  __declspec(property(get = get_AsLong, put = set_AsLong)) int64_t AsLong;

  __declspec(property(get = get_AsArray))::HoudiniEngineUnity::JSONArray* AsArray;

  __declspec(property(get = get_AsObject))::HoudiniEngineUnity::JSONObject* AsObject;

  static inline void setStaticF_forceASCII(bool value);

  static inline bool getStaticF_forceASCII();

  static inline void setStaticF_longAsString(bool value);

  static inline bool getStaticF_longAsString();

  static inline void setStaticF_m_EscapeBuilder(::System::Text::StringBuilder* value);

  static inline ::System::Text::StringBuilder* getStaticF_m_EscapeBuilder();

  static inline void setStaticF_VectorContainerType(::HoudiniEngineUnity::JSONContainerType value);

  static inline ::HoudiniEngineUnity::JSONContainerType getStaticF_VectorContainerType();

  static inline void setStaticF_QuaternionContainerType(::HoudiniEngineUnity::JSONContainerType value);

  static inline ::HoudiniEngineUnity::JSONContainerType getStaticF_QuaternionContainerType();

  static inline void setStaticF_RectContainerType(::HoudiniEngineUnity::JSONContainerType value);

  static inline ::HoudiniEngineUnity::JSONContainerType getStaticF_RectContainerType();

  /// @brief Method get_Tag addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::HoudiniEngineUnity::JSONNodeType get_Tag();

  /// @brief Method get_Item addr 0x21d3fcc size 0x8 virtual true final false
  inline ::HoudiniEngineUnity::JSONNode* get_Item(int32_t aIndex);

  /// @brief Method set_Item addr 0x21d3fd4 size 0x4 virtual true final false
  inline void set_Item(int32_t aIndex, ::HoudiniEngineUnity::JSONNode* value);

  /// @brief Method get_Item addr 0x21d3fd8 size 0x8 virtual true final false
  inline ::HoudiniEngineUnity::JSONNode* get_Item(::StringW aKey);

  /// @brief Method set_Item addr 0x21d3fe0 size 0x4 virtual true final false
  inline void set_Item(::StringW aKey, ::HoudiniEngineUnity::JSONNode* value);

  /// @brief Method get_Value addr 0x21d3fe4 size 0x40 virtual true final false
  inline ::StringW get_Value();

  /// @brief Method set_Value addr 0x21d4024 size 0x4 virtual true final false
  inline void set_Value(::StringW value);

  /// @brief Method get_Count addr 0x21d4028 size 0x8 virtual true final false
  inline int32_t get_Count();

  /// @brief Method get_IsNumber addr 0x21d4030 size 0x8 virtual true final false
  inline bool get_IsNumber();

  /// @brief Method get_IsString addr 0x21d4038 size 0x8 virtual true final false
  inline bool get_IsString();

  /// @brief Method get_IsBoolean addr 0x21d4040 size 0x8 virtual true final false
  inline bool get_IsBoolean();

  /// @brief Method get_IsNull addr 0x21d4048 size 0x8 virtual true final false
  inline bool get_IsNull();

  /// @brief Method get_IsArray addr 0x21d4050 size 0x8 virtual true final false
  inline bool get_IsArray();

  /// @brief Method get_IsObject addr 0x21d4058 size 0x8 virtual true final false
  inline bool get_IsObject();

  /// @brief Method get_Inline addr 0x21d4060 size 0x8 virtual true final false
  inline bool get_Inline();

  /// @brief Method set_Inline addr 0x21d4068 size 0x4 virtual true final false
  inline void set_Inline(bool value);

  /// @brief Method Add addr 0x21d406c size 0x4 virtual true final false
  inline void Add(::StringW aKey, ::HoudiniEngineUnity::JSONNode* aItem);

  /// @brief Method Add addr 0x21d4070 size 0x64 virtual true final false
  inline void Add(::HoudiniEngineUnity::JSONNode* aItem);

  /// @brief Method Remove addr 0x21d40d4 size 0x8 virtual true final false
  inline ::HoudiniEngineUnity::JSONNode* Remove(::StringW aKey);

  /// @brief Method Remove addr 0x21d40dc size 0x8 virtual true final false
  inline ::HoudiniEngineUnity::JSONNode* Remove(int32_t aIndex);

  /// @brief Method Remove addr 0x21d40e4 size 0x8 virtual true final false
  inline ::HoudiniEngineUnity::JSONNode* Remove(::HoudiniEngineUnity::JSONNode* aNode);

  /// @brief Method get_Children addr 0x21d40ec size 0x70 virtual true final false
  inline ::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>* get_Children();

  /// @brief Method get_DeepChildren addr 0x21d4190 size 0x78 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>* get_DeepChildren();

  /// @brief Method ToString addr 0x21d423c size 0x8c virtual true final false
  inline ::StringW ToString();

  /// @brief Method ToString addr 0x21d42c8 size 0x98 virtual true final false
  inline ::StringW ToString(int32_t aIndent);

  /// @brief Method WriteToStringBuilder addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void WriteToStringBuilder(::System::Text::StringBuilder* aSB, int32_t aIndent, int32_t aIndentInc, ::HoudiniEngineUnity::JSONTextMode aMode);

  /// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::HoudiniEngineUnity::__JSONNode__Enumerator GetEnumerator();

  /// @brief Method get_Linq addr 0x21d4360 size 0x60 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*>>* get_Linq();

  /// @brief Method get_Keys addr 0x21d4440 size 0x3c virtual false final false
  inline ::HoudiniEngineUnity::__JSONNode__KeyEnumerator get_Keys();

  /// @brief Method get_Values addr 0x21d447c size 0x3c virtual false final false
  inline ::HoudiniEngineUnity::__JSONNode__ValueEnumerator get_Values();

  /// @brief Method get_AsDouble addr 0x21d44b8 size 0xa4 virtual true final false
  inline double_t get_AsDouble();

  /// @brief Method set_AsDouble addr 0x21d455c size 0x88 virtual true final false
  inline void set_AsDouble(double_t value);

  /// @brief Method get_AsInt addr 0x21d45e4 size 0x34 virtual true final false
  inline int32_t get_AsInt();

  /// @brief Method set_AsInt addr 0x21d4618 size 0x18 virtual true final false
  inline void set_AsInt(int32_t value);

  /// @brief Method get_AsFloat addr 0x21d4630 size 0x20 virtual true final false
  inline float_t get_AsFloat();

  /// @brief Method set_AsFloat addr 0x21d4650 size 0x14 virtual true final false
  inline void set_AsFloat(float_t value);

  /// @brief Method get_AsBool addr 0x21d4664 size 0xb8 virtual true final false
  inline bool get_AsBool();

  /// @brief Method set_AsBool addr 0x21d471c size 0x78 virtual true final false
  inline void set_AsBool(bool value);

  /// @brief Method get_AsLong addr 0x21d4794 size 0x34 virtual true final false
  inline int64_t get_AsLong();

  /// @brief Method set_AsLong addr 0x21d47c8 size 0x3c virtual true final false
  inline void set_AsLong(int64_t value);

  /// @brief Method get_AsArray addr 0x21d4804 size 0x78 virtual true final false
  inline ::HoudiniEngineUnity::JSONArray* get_AsArray();

  /// @brief Method get_AsObject addr 0x21d487c size 0x78 virtual true final false
  inline ::HoudiniEngineUnity::JSONObject* get_AsObject();

  /// @brief Method op_Implicit addr 0x21d48f4 size 0x64 virtual false final false
  static inline ::HoudiniEngineUnity::JSONNode* op_Implicit___HoudiniEngineUnity__JSONNode_(::StringW s);

  /// @brief Method op_Implicit addr 0x21d268c size 0x3c virtual false final false
  static inline ::StringW op_Implicit___StringW(::HoudiniEngineUnity::JSONNode* d);

  /// @brief Method op_Implicit addr 0x21d4b00 size 0x6c virtual false final false
  static inline ::HoudiniEngineUnity::JSONNode* op_Implicit___HoudiniEngineUnity__JSONNode_(double_t n);

  /// @brief Method op_Implicit addr 0x21d4b94 size 0x40 virtual false final false
  static inline double_t op_Implicit_double_t(::HoudiniEngineUnity::JSONNode* d);

  /// @brief Method op_Implicit addr 0x21d4bd4 size 0x70 virtual false final false
  static inline ::HoudiniEngineUnity::JSONNode* op_Implicit___HoudiniEngineUnity__JSONNode_(float_t n);

  /// @brief Method op_Implicit addr 0x21d4c44 size 0x40 virtual false final false
  static inline float_t op_Implicit_float_t(::HoudiniEngineUnity::JSONNode* d);

  /// @brief Method op_Implicit addr 0x21d4c84 size 0x70 virtual false final false
  static inline ::HoudiniEngineUnity::JSONNode* op_Implicit___HoudiniEngineUnity__JSONNode_(int32_t n);

  /// @brief Method op_Implicit addr 0x21d4cf4 size 0x40 virtual false final false
  static inline int32_t op_Implicit_int32_t(::HoudiniEngineUnity::JSONNode* d);

  /// @brief Method op_Implicit addr 0x21d4d34 size 0xe0 virtual false final false
  static inline ::HoudiniEngineUnity::JSONNode* op_Implicit___HoudiniEngineUnity__JSONNode_(int64_t n);

  /// @brief Method op_Implicit addr 0x21d4e14 size 0x40 virtual false final false
  static inline int64_t op_Implicit_int64_t(::HoudiniEngineUnity::JSONNode* d);

  /// @brief Method op_Implicit addr 0x21d4e54 size 0x68 virtual false final false
  static inline ::HoudiniEngineUnity::JSONNode* op_Implicit___HoudiniEngineUnity__JSONNode_(bool b);

  /// @brief Method op_Implicit addr 0x21d4ee4 size 0x40 virtual false final false
  static inline bool op_Implicit_bool(::HoudiniEngineUnity::JSONNode* d);

  /// @brief Method op_Implicit addr 0x21d4f24 size 0x3c virtual false final false
  static inline ::HoudiniEngineUnity::JSONNode* op_Implicit___HoudiniEngineUnity__JSONNode_(::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*> aKeyValue);

  /// @brief Method op_Equality addr 0x21d4980 size 0x180 virtual false final false
  static inline bool op_Equality(::HoudiniEngineUnity::JSONNode* a, ::System::Object* b);

  /// @brief Method op_Inequality addr 0x21d2674 size 0x18 virtual false final false
  static inline bool op_Inequality(::HoudiniEngineUnity::JSONNode* a, ::System::Object* b);

  /// @brief Method Equals addr 0x21d4f60 size 0xc virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x21d4f6c size 0x8 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method get_EscapeBuilder addr 0x21d4f74 size 0x9c virtual false final false
  static inline ::System::Text::StringBuilder* get_EscapeBuilder();

  /// @brief Method Escape addr 0x21d5010 size 0x2c4 virtual false final false
  static inline ::StringW Escape(::StringW aText);

  /// @brief Method ParseElement addr 0x21d52d4 size 0x170 virtual false final false
  static inline ::HoudiniEngineUnity::JSONNode* ParseElement(::StringW token, bool quoted);

  /// @brief Method Parse addr 0x21d54d8 size 0x5fc virtual false final false
  static inline ::HoudiniEngineUnity::JSONNode* Parse(::StringW aJSON);

  /// @brief Method GetContainer addr 0x21d5bcc size 0x8c virtual false final false
  static inline ::HoudiniEngineUnity::JSONNode* GetContainer(::HoudiniEngineUnity::JSONContainerType aType);

  /// @brief Method op_Implicit addr 0x21d5c58 size 0x9c virtual false final false
  static inline ::HoudiniEngineUnity::JSONNode* op_Implicit___HoudiniEngineUnity__JSONNode_(::UnityEngine::Vector2 aVec);

  /// @brief Method op_Implicit addr 0x21d5e24 size 0xc4 virtual false final false
  static inline ::HoudiniEngineUnity::JSONNode* op_Implicit___HoudiniEngineUnity__JSONNode_(::UnityEngine::Vector3 aVec);

  /// @brief Method op_Implicit addr 0x21d6088 size 0x84 virtual false final false
  static inline ::HoudiniEngineUnity::JSONNode* op_Implicit___HoudiniEngineUnity__JSONNode_(::UnityEngine::Vector4 aVec);

  /// @brief Method op_Implicit addr 0x21d635c size 0x84 virtual false final false
  static inline ::HoudiniEngineUnity::JSONNode* op_Implicit___HoudiniEngineUnity__JSONNode_(::UnityEngine::Quaternion aRot);

  /// @brief Method op_Implicit addr 0x21d6630 size 0x84 virtual false final false
  static inline ::HoudiniEngineUnity::JSONNode* op_Implicit___HoudiniEngineUnity__JSONNode_(::UnityEngine::Rect aRect);

  /// @brief Method op_Implicit addr 0x21d6960 size 0x5c virtual false final false
  static inline ::HoudiniEngineUnity::JSONNode* op_Implicit___HoudiniEngineUnity__JSONNode_(::UnityEngine::RectOffset* aRect);

  /// @brief Method op_Implicit addr 0x21d6c88 size 0x10 virtual false final false
  static inline ::UnityEngine::Vector2 op_Implicit___UnityEngine__Vector2(::HoudiniEngineUnity::JSONNode* aNode);

  /// @brief Method op_Implicit addr 0x21d6ce8 size 0x10 virtual false final false
  static inline ::UnityEngine::Vector3 op_Implicit___UnityEngine__Vector3(::HoudiniEngineUnity::JSONNode* aNode);

  /// @brief Method op_Implicit addr 0x21d6d4c size 0x10 virtual false final false
  static inline ::UnityEngine::Vector4 op_Implicit___UnityEngine__Vector4(::HoudiniEngineUnity::JSONNode* aNode);

  /// @brief Method op_Implicit addr 0x21d6db0 size 0x10 virtual false final false
  static inline ::UnityEngine::Quaternion op_Implicit___UnityEngine__Quaternion(::HoudiniEngineUnity::JSONNode* aNode);

  /// @brief Method op_Implicit addr 0x21d6e14 size 0x20 virtual false final false
  static inline ::UnityEngine::Rect op_Implicit___UnityEngine__Rect(::HoudiniEngineUnity::JSONNode* aNode);

  /// @brief Method op_Implicit addr 0x21d6e48 size 0x10 virtual false final false
  static inline ::UnityEngine::RectOffset* op_Implicit___UnityEngine__RectOffset_(::HoudiniEngineUnity::JSONNode* aNode);

  /// @brief Method ReadVector2 addr 0x21d6ebc size 0x140 virtual false final false
  inline ::UnityEngine::Vector2 ReadVector2(::UnityEngine::Vector2 aDefault);

  /// @brief Method ReadVector2 addr 0x21d6ffc size 0xd8 virtual false final false
  inline ::UnityEngine::Vector2 ReadVector2(::StringW aXName, ::StringW aYName);

  /// @brief Method ReadVector2 addr 0x21d6c98 size 0x50 virtual false final false
  inline ::UnityEngine::Vector2 ReadVector2();

  /// @brief Method WriteVector2 addr 0x21d5cf4 size 0x130 virtual false final false
  inline ::HoudiniEngineUnity::JSONNode* WriteVector2(::UnityEngine::Vector2 aVec, ::StringW aXName, ::StringW aYName);

  /// @brief Method ReadVector3 addr 0x21d70d4 size 0x1bc virtual false final false
  inline ::UnityEngine::Vector3 ReadVector3(::UnityEngine::Vector3 aDefault);

  /// @brief Method ReadVector3 addr 0x21d7290 size 0x118 virtual false final false
  inline ::UnityEngine::Vector3 ReadVector3(::StringW aXName, ::StringW aYName, ::StringW aZName);

  /// @brief Method ReadVector3 addr 0x21d6cf8 size 0x54 virtual false final false
  inline ::UnityEngine::Vector3 ReadVector3();

  /// @brief Method WriteVector3 addr 0x21d5ee8 size 0x1a0 virtual false final false
  inline ::HoudiniEngineUnity::JSONNode* WriteVector3(::UnityEngine::Vector3 aVec, ::StringW aXName, ::StringW aYName, ::StringW aZName);

  /// @brief Method ReadVector4 addr 0x21d73a8 size 0x230 virtual false final false
  inline ::UnityEngine::Vector4 ReadVector4(::UnityEngine::Vector4 aDefault);

  /// @brief Method ReadVector4 addr 0x21d6d5c size 0x54 virtual false final false
  inline ::UnityEngine::Vector4 ReadVector4();

  /// @brief Method WriteVector4 addr 0x21d610c size 0x250 virtual false final false
  inline ::HoudiniEngineUnity::JSONNode* WriteVector4(::UnityEngine::Vector4 aVec);

  /// @brief Method ReadQuaternion addr 0x21d75d8 size 0x230 virtual false final false
  inline ::UnityEngine::Quaternion ReadQuaternion(::UnityEngine::Quaternion aDefault);

  /// @brief Method ReadQuaternion addr 0x21d6dc0 size 0x54 virtual false final false
  inline ::UnityEngine::Quaternion ReadQuaternion();

  /// @brief Method WriteQuaternion addr 0x21d63e0 size 0x250 virtual false final false
  inline ::HoudiniEngineUnity::JSONNode* WriteQuaternion(::UnityEngine::Quaternion aRot);

  /// @brief Method ReadRect addr 0x21d7808 size 0x258 virtual false final false
  inline ::UnityEngine::Rect ReadRect(::UnityEngine::Rect aDefault);

  /// @brief Method ReadRect addr 0x21d6e34 size 0x14 virtual false final false
  inline ::UnityEngine::Rect ReadRect();

  /// @brief Method WriteRect addr 0x21d66b4 size 0x2ac virtual false final false
  inline ::HoudiniEngineUnity::JSONNode* WriteRect(::UnityEngine::Rect aRect);

  /// @brief Method ReadRectOffset addr 0x21d7a60 size 0x29c virtual false final false
  inline ::UnityEngine::RectOffset* ReadRectOffset(::UnityEngine::RectOffset* aDefault);

  /// @brief Method ReadRectOffset addr 0x21d6e58 size 0x64 virtual false final false
  inline ::UnityEngine::RectOffset* ReadRectOffset();

  /// @brief Method WriteRectOffset addr 0x21d69bc size 0x2cc virtual false final false
  inline ::HoudiniEngineUnity::JSONNode* WriteRectOffset(::UnityEngine::RectOffset* aRect);

  /// @brief Method ReadMatrix addr 0x21d7cfc size 0xe4 virtual false final false
  inline ::UnityEngine::Matrix4x4 ReadMatrix();

  /// @brief Method WriteMatrix addr 0x21d7de0 size 0xac virtual false final false
  inline ::HoudiniEngineUnity::JSONNode* WriteMatrix(::UnityEngine::Matrix4x4 aMatrix);

  static inline ::HoudiniEngineUnity::JSONNode* New_ctor();

  /// @brief Method .ctor addr 0x21d7e8c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "JSONNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JSONNode(JSONNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JSONNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JSONNode(JSONNode const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JSONNode();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::JSONNode, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Type: ::Enumerator
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3819)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3819), inst: 1428 }),
// TypeDefinitionIndex(TypeDefinitionIndex(9862)), TypeDefinitionIndex(TypeDefinitionIndex(3842)), TypeDefinitionIndex(TypeDefinitionIndex(9869)), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(3842), inst: 1690 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(9863)) CS Name: ::JSONNode::Enumerator
struct CORDL_TYPE __JSONNode__Enumerator {
public:
  // Declarations
  using Type = ::GlobalNamespace::__JSONNode__Enumerator__Type;

  __declspec(property(get = get_IsValid)) bool IsValid;

  __declspec(property(get = get_Current))::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*> Current;

  /// @brief Method get_IsValid addr 0x21d7e94 size 0x10 virtual false final false
  inline bool get_IsValid();

  /// @brief Method .ctor addr 0x21d7ea4 size 0x2c virtual false final false
  inline void _ctor(::System::Collections::Generic::__List_1__Enumerator<::HoudiniEngineUnity::JSONNode*> aArrayEnum);

  /// @brief Method .ctor addr 0x21d7ed0 size 0x24 virtual false final false
  inline void _ctor(::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::HoudiniEngineUnity::JSONNode*> aDictEnum);

  /// @brief Method get_Current addr 0x21d7ef4 size 0xcc virtual false final false
  inline ::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*> get_Current();

  /// @brief Method MoveNext addr 0x21d7fc0 size 0x94 virtual false final false
  inline bool MoveNext();

  // Ctor Parameters [CppParam { name: "type", ty: "::GlobalNamespace::__JSONNode__Enumerator__Type", modifiers: "", def_value: None }, CppParam { name: "m_Object", ty:
  // "::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW,::HoudiniEngineUnity::JSONNode*>", modifiers: "", def_value: None }, CppParam { name: "m_Array", ty:
  // "::System::Collections::Generic::__List_1__Enumerator<::HoudiniEngineUnity::JSONNode*>", modifiers: "", def_value: None }]
  constexpr __JSONNode__Enumerator(::GlobalNamespace::__JSONNode__Enumerator__Type type,
                                   ::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::HoudiniEngineUnity::JSONNode*> m_Object,
                                   ::System::Collections::Generic::__List_1__Enumerator<::HoudiniEngineUnity::JSONNode*> m_Array) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __JSONNode__Enumerator();

  /// @brief Field type, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::__JSONNode__Enumerator__Type type;

  /// @brief Field m_Object, offset: 0x8, size: 0x28, def value: None
  ::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::HoudiniEngineUnity::JSONNode*> m_Object;

  /// @brief Field m_Array, offset: 0x30, size: 0x18, def value: None
  ::System::Collections::Generic::__List_1__Enumerator<::HoudiniEngineUnity::JSONNode*> m_Array;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__JSONNode__Enumerator, 0x48>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Type: ::ValueEnumerator
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9863))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9864))
// CS Name: ::JSONNode::ValueEnumerator
struct CORDL_TYPE __JSONNode__ValueEnumerator {
public:
  // Declarations
  __declspec(property(get = get_Current))::HoudiniEngineUnity::JSONNode* Current;

  /// @brief Method .ctor addr 0x21d8054 size 0x40 virtual false final false
  inline void _ctor(::System::Collections::Generic::__List_1__Enumerator<::HoudiniEngineUnity::JSONNode*> aArrayEnum);

  /// @brief Method .ctor addr 0x21d8094 size 0x70 virtual false final false
  inline void _ctor(::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::HoudiniEngineUnity::JSONNode*> aDictEnum);

  /// @brief Method .ctor addr 0x21d8104 size 0x14 virtual false final false
  inline void _ctor(::HoudiniEngineUnity::__JSONNode__Enumerator aEnumerator);

  /// @brief Method get_Current addr 0x21d8118 size 0x44 virtual false final false
  inline ::HoudiniEngineUnity::JSONNode* get_Current();

  /// @brief Method MoveNext addr 0x21d815c size 0x4 virtual false final false
  inline bool MoveNext();

  /// @brief Method GetEnumerator addr 0x21d8160 size 0x10 virtual false final false
  inline ::HoudiniEngineUnity::__JSONNode__ValueEnumerator GetEnumerator();

  // Ctor Parameters [CppParam { name: "m_Enumerator", ty: "::HoudiniEngineUnity::__JSONNode__Enumerator", modifiers: "", def_value: None }]
  constexpr __JSONNode__ValueEnumerator(::HoudiniEngineUnity::__JSONNode__Enumerator m_Enumerator) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __JSONNode__ValueEnumerator();

  /// @brief Field m_Enumerator, offset: 0x0, size: 0x48, def value: None
  ::HoudiniEngineUnity::__JSONNode__Enumerator m_Enumerator;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__JSONNode__ValueEnumerator, 0x48>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Type: ::KeyEnumerator
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9863))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9865))
// CS Name: ::JSONNode::KeyEnumerator
struct CORDL_TYPE __JSONNode__KeyEnumerator {
public:
  // Declarations
  __declspec(property(get = get_Current))::StringW Current;

  /// @brief Method .ctor addr 0x21d8170 size 0x40 virtual false final false
  inline void _ctor(::System::Collections::Generic::__List_1__Enumerator<::HoudiniEngineUnity::JSONNode*> aArrayEnum);

  /// @brief Method .ctor addr 0x21d81b0 size 0x70 virtual false final false
  inline void _ctor(::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::HoudiniEngineUnity::JSONNode*> aDictEnum);

  /// @brief Method .ctor addr 0x21d8220 size 0x14 virtual false final false
  inline void _ctor(::HoudiniEngineUnity::__JSONNode__Enumerator aEnumerator);

  /// @brief Method get_Current addr 0x21d8234 size 0x3c virtual false final false
  inline ::StringW get_Current();

  /// @brief Method MoveNext addr 0x21d8270 size 0x4 virtual false final false
  inline bool MoveNext();

  /// @brief Method GetEnumerator addr 0x21d8274 size 0x10 virtual false final false
  inline ::HoudiniEngineUnity::__JSONNode__KeyEnumerator GetEnumerator();

  // Ctor Parameters [CppParam { name: "m_Enumerator", ty: "::HoudiniEngineUnity::__JSONNode__Enumerator", modifiers: "", def_value: None }]
  constexpr __JSONNode__KeyEnumerator(::HoudiniEngineUnity::__JSONNode__Enumerator m_Enumerator) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __JSONNode__KeyEnumerator();

  /// @brief Field m_Enumerator, offset: 0x0, size: 0x48, def value: None
  ::HoudiniEngineUnity::__JSONNode__Enumerator m_Enumerator;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__JSONNode__KeyEnumerator, 0x48>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Type: ::LinqEnumerator
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(9863))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9866))
// CS Name: ::JSONNode::LinqEnumerator*
class CORDL_TYPE __JSONNode__LinqEnumerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Node, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Node, put = __set_m_Node))::HoudiniEngineUnity::JSONNode* m_Node;

  /// @brief Field m_Enumerator, offset 0x18, size 0x48
  __declspec(property(get = __get_m_Enumerator, put = __set_m_Enumerator))::HoudiniEngineUnity::__JSONNode__Enumerator m_Enumerator;

  __declspec(property(get = get_Current))::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*> Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::HoudiniEngineUnity::JSONNode*>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::HoudiniEngineUnity::JSONNode*>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  constexpr ::HoudiniEngineUnity::JSONNode*& __get_m_Node();

  constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::JSONNode*> const& __get_m_Node() const;

  constexpr void __set_m_Node(::HoudiniEngineUnity::JSONNode* value);

  constexpr ::HoudiniEngineUnity::__JSONNode__Enumerator& __get_m_Enumerator();

  constexpr ::HoudiniEngineUnity::__JSONNode__Enumerator const& __get_m_Enumerator() const;

  constexpr void __set_m_Enumerator(::HoudiniEngineUnity::__JSONNode__Enumerator value);

  static inline ::HoudiniEngineUnity::__JSONNode__LinqEnumerator* New_ctor(::HoudiniEngineUnity::JSONNode* aNode);

  /// @brief Method .ctor addr 0x21d43c0 size 0x80 virtual false final false
  inline void _ctor(::HoudiniEngineUnity::JSONNode* aNode);

  /// @brief Method get_Current addr 0x21d8284 size 0x8 virtual true final true
  inline ::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*> get_Current();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x21d828c size 0x64 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method MoveNext addr 0x21d82f0 size 0x8 virtual true final true
  inline bool MoveNext();

  /// @brief Method Dispose addr 0x21d82f8 size 0x14 virtual true final true
  inline void Dispose();

  /// @brief Method GetEnumerator addr 0x21d830c size 0x64 virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*>>* GetEnumerator();

  /// @brief Method Reset addr 0x21d8370 size 0x68 virtual true final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x21d83d8 size 0x64 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__JSONNode__LinqEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JSONNode__LinqEnumerator(__JSONNode__LinqEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JSONNode__LinqEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JSONNode__LinqEnumerator(__JSONNode__LinqEnumerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JSONNode__LinqEnumerator();

public:
  /// @brief Field m_Node, offset: 0x10, size: 0x8, def value: None
  ::HoudiniEngineUnity::JSONNode* ___m_Node;

  /// @brief Field m_Enumerator, offset: 0x18, size: 0x48, def value: None
  ::HoudiniEngineUnity::__JSONNode__Enumerator ___m_Enumerator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__JSONNode__LinqEnumerator, 0x60>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Type: ::<get_Children>d__40
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9867))
// CS Name: ::JSONNode::<get_Children>d__40*
class CORDL_TYPE __JSONNode___get_Children_d__40 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::HoudiniEngineUnity::JSONNode* __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

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

  static inline ::HoudiniEngineUnity::__JSONNode___get_Children_d__40* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x21d415c size 0x34 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x21d843c size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x21d8440 size 0x18 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<HoudiniEngineUnity.JSONNode>.get_Current addr 0x21d8458 size 0x8 virtual true final true
  inline ::HoudiniEngineUnity::JSONNode* System_Collections_Generic_IEnumerator_HoudiniEngineUnity_JSONNode__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x21d8460 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x21d84a0 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<HoudiniEngineUnity.JSONNode>.GetEnumerator addr 0x21d84a8 size 0x98 virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>* System_Collections_Generic_IEnumerable_HoudiniEngineUnity_JSONNode__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x21d8540 size 0x4 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__JSONNode___get_Children_d__40", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JSONNode___get_Children_d__40(__JSONNode___get_Children_d__40&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JSONNode___get_Children_d__40", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JSONNode___get_Children_d__40(__JSONNode___get_Children_d__40 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JSONNode___get_Children_d__40();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::HoudiniEngineUnity::JSONNode* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__JSONNode___get_Children_d__40, 0x28>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Type: ::<get_DeepChildren>d__42
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9868))
// CS Name: ::JSONNode::<get_DeepChildren>d__42*
class CORDL_TYPE __JSONNode___get_DeepChildren_d__42 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::HoudiniEngineUnity::JSONNode* __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::HoudiniEngineUnity::JSONNode* __4__this;

  /// @brief Field <>7__wrap1, offset 0x30, size 0x8
  __declspec(property(get = __get___7__wrap1, put = __set___7__wrap1))::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>* __7__wrap1;

  /// @brief Field <>7__wrap2, offset 0x38, size 0x8
  __declspec(property(get = __get___7__wrap2, put = __set___7__wrap2))::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>* __7__wrap2;

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

  constexpr ::HoudiniEngineUnity::JSONNode*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::JSONNode*> const& __get___4__this() const;

  constexpr void __set___4__this(::HoudiniEngineUnity::JSONNode* value);

  constexpr ::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>*& __get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>*> const& __get___7__wrap1() const;

  constexpr void __set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>* value);

  constexpr ::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>*& __get___7__wrap2();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>*> const& __get___7__wrap2() const;

  constexpr void __set___7__wrap2(::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>* value);

  static inline ::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x21d4208 size 0x34 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x21d8544 size 0xb8 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x21d85fc size 0x434 virtual true final true
  inline bool MoveNext();

  /// @brief Method <>m__Finally1 addr 0x21d8ae0 size 0xb0 virtual false final false
  inline void __m__Finally1();

  /// @brief Method <>m__Finally2 addr 0x21d8a30 size 0xb0 virtual false final false
  inline void __m__Finally2();

  /// @brief Method System.Collections.Generic.IEnumerator<HoudiniEngineUnity.JSONNode>.get_Current addr 0x21d8b90 size 0x8 virtual true final true
  inline ::HoudiniEngineUnity::JSONNode* System_Collections_Generic_IEnumerator_HoudiniEngineUnity_JSONNode__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x21d8b98 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x21d8bd8 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<HoudiniEngineUnity.JSONNode>.GetEnumerator addr 0x21d8be0 size 0xa4 virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>* System_Collections_Generic_IEnumerable_HoudiniEngineUnity_JSONNode__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x21d8c84 size 0x4 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__JSONNode___get_DeepChildren_d__42", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JSONNode___get_DeepChildren_d__42(__JSONNode___get_DeepChildren_d__42&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JSONNode___get_DeepChildren_d__42", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JSONNode___get_DeepChildren_d__42(__JSONNode___get_DeepChildren_d__42 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JSONNode___get_DeepChildren_d__42();

public:
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
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42, 0x40>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__JSONNode__Enumerator__Type, "HoudiniEngineUnity", "JSONNode/Enumerator/Type");
NEED_NO_BOX(::HoudiniEngineUnity::JSONNode);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::JSONNode*, "HoudiniEngineUnity", "JSONNode");
NEED_NO_BOX(::HoudiniEngineUnity::__JSONNode__LinqEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__JSONNode__LinqEnumerator*, "HoudiniEngineUnity", "JSONNode/LinqEnumerator");
NEED_NO_BOX(::HoudiniEngineUnity::__JSONNode___get_Children_d__40);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__JSONNode___get_Children_d__40*, "HoudiniEngineUnity", "JSONNode/<get_Children>d__40");
NEED_NO_BOX(::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42*, "HoudiniEngineUnity", "JSONNode/<get_DeepChildren>d__42");
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__JSONNode__Enumerator, "HoudiniEngineUnity", "JSONNode/Enumerator");
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__JSONNode__KeyEnumerator, "HoudiniEngineUnity", "JSONNode/KeyEnumerator");
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__JSONNode__ValueEnumerator, "HoudiniEngineUnity", "JSONNode/ValueEnumerator");
