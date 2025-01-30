#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/JSONLazyCreator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__JSONNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(JSONLazyCreator)
namespace HoudiniEngineUnity {
class JSONArray;
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
class JSONObject;
}
namespace HoudiniEngineUnity {
struct JSONTextMode;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Object;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class JSONLazyCreator;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::JSONLazyCreator);
// Dependencies HoudiniEngineUnity.JSONNode
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.JSONLazyCreator
class CORDL_TYPE JSONLazyCreator : public ::HoudiniEngineUnity::JSONNode {
public:
  // Declarations
  __declspec(property(get = get_AsArray)) ::HoudiniEngineUnity::JSONArray* AsArray;

  __declspec(property(get = get_AsBool, put = set_AsBool)) bool AsBool;

  __declspec(property(get = get_AsDouble, put = set_AsDouble)) double_t AsDouble;

  __declspec(property(get = get_AsFloat, put = set_AsFloat)) float_t AsFloat;

  __declspec(property(get = get_AsInt, put = set_AsInt)) int32_t AsInt;

  __declspec(property(get = get_AsLong, put = set_AsLong)) int64_t AsLong;

  __declspec(property(get = get_AsObject)) ::HoudiniEngineUnity::JSONObject* AsObject;

  __declspec(property(get = get_Item, put = set_Item)) ::HoudiniEngineUnity::JSONNode* Item[];

  __declspec(property(get = get_Item, put = set_Item)) ::HoudiniEngineUnity::JSONNode* Item[];

  __declspec(property(get = get_Tag)) ::HoudiniEngineUnity::JSONNodeType Tag;

  /// @brief Field m_Key, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Key, put = __cordl_internal_set_m_Key)) ::StringW m_Key;

  /// @brief Field m_Node, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Node, put = __cordl_internal_set_m_Node)) ::HoudiniEngineUnity::JSONNode* m_Node;

  /// @brief Method Add, addr 0x3a92c10, size 0x98, virtual true, abstract: false, final false
  inline void Add(::HoudiniEngineUnity::JSONNode* aItem);

  /// @brief Method Add, addr 0x3a92ca8, size 0xa8, virtual true, abstract: false, final false
  inline void Add(::StringW aKey, ::HoudiniEngineUnity::JSONNode* aItem);

  /// @brief Method Equals, addr 0x3a92d80, size 0x18, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetEnumerator, addr 0x3a929f8, size 0x14, virtual true, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONNode_Enumerator GetEnumerator();

  /// @brief Method GetHashCode, addr 0x3a92d98, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::HoudiniEngineUnity::JSONLazyCreator* New_ctor(::HoudiniEngineUnity::JSONNode* aNode);

  static inline ::HoudiniEngineUnity::JSONLazyCreator* New_ctor(::HoudiniEngineUnity::JSONNode* aNode, ::StringW aKey);

  /// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T Set(T aVal);

  /// @brief Method WriteToStringBuilder, addr 0x3a93520, size 0x54, virtual true, abstract: false, final false
  inline void WriteToStringBuilder(::System::Text::StringBuilder* aSB, int32_t aIndent, int32_t aIndentInc, ::HoudiniEngineUnity::JSONTextMode aMode);

  constexpr ::StringW const& __cordl_internal_get_m_Key() const;

  constexpr ::StringW& __cordl_internal_get_m_Key();

  constexpr ::HoudiniEngineUnity::JSONNode* const& __cordl_internal_get_m_Node() const;

  constexpr ::HoudiniEngineUnity::JSONNode*& __cordl_internal_get_m_Node();

  constexpr void __cordl_internal_set_m_Key(::StringW value);

  constexpr void __cordl_internal_set_m_Node(::HoudiniEngineUnity::JSONNode* value);

  /// @brief Method .ctor, addr 0x3a90558, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::HoudiniEngineUnity::JSONNode* aNode);

  /// @brief Method .ctor, addr 0x3a9109c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::HoudiniEngineUnity::JSONNode* aNode, ::StringW aKey);

  /// @brief Method get_AsArray, addr 0x3a93430, size 0x78, virtual true, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONArray* get_AsArray();

  /// @brief Method get_AsBool, addr 0x3a93320, size 0x88, virtual true, abstract: false, final false
  inline bool get_AsBool();

  /// @brief Method get_AsDouble, addr 0x3a92fd0, size 0x88, virtual true, abstract: false, final false
  inline double_t get_AsDouble();

  /// @brief Method get_AsFloat, addr 0x3a92eb8, size 0x88, virtual true, abstract: false, final false
  inline float_t get_AsFloat();

  /// @brief Method get_AsInt, addr 0x3a92da0, size 0x88, virtual true, abstract: false, final false
  inline int32_t get_AsInt();

  /// @brief Method get_AsLong, addr 0x3a930e4, size 0x100, virtual true, abstract: false, final false
  inline int64_t get_AsLong();

  /// @brief Method get_AsObject, addr 0x3a934a8, size 0x78, virtual true, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONObject* get_AsObject();

  /// @brief Method get_Item, addr 0x3a92a0c, size 0x5c, virtual true, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONNode* get_Item(int32_t aIndex);

  /// @brief Method get_Item, addr 0x3a92b00, size 0x68, virtual true, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONNode* get_Item(::StringW aKey);

  /// @brief Method get_Tag, addr 0x3a929f0, size 0x8, virtual true, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONNodeType get_Tag();

  /// @brief Method op_Equality, addr 0x3a92d50, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Equality(::HoudiniEngineUnity::JSONLazyCreator* a, ::System::Object* b);

  /// @brief Method op_Inequality, addr 0x3a92d68, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(::HoudiniEngineUnity::JSONLazyCreator* a, ::System::Object* b);

  /// @brief Method set_AsBool, addr 0x3a933a8, size 0x88, virtual true, abstract: false, final false
  inline void set_AsBool(bool value);

  /// @brief Method set_AsDouble, addr 0x3a93058, size 0x8c, virtual true, abstract: false, final false
  inline void set_AsDouble(double_t value);

  /// @brief Method set_AsFloat, addr 0x3a92f40, size 0x90, virtual true, abstract: false, final false
  inline void set_AsFloat(float_t value);

  /// @brief Method set_AsInt, addr 0x3a92e28, size 0x90, virtual true, abstract: false, final false
  inline void set_AsInt(int32_t value);

  /// @brief Method set_AsLong, addr 0x3a931e4, size 0x13c, virtual true, abstract: false, final false
  inline void set_AsLong(int64_t value);

  /// @brief Method set_Item, addr 0x3a92a68, size 0x98, virtual true, abstract: false, final false
  inline void set_Item(int32_t aIndex, ::HoudiniEngineUnity::JSONNode* value);

  /// @brief Method set_Item, addr 0x3a92b68, size 0xa8, virtual true, abstract: false, final false
  inline void set_Item(::StringW aKey, ::HoudiniEngineUnity::JSONNode* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JSONLazyCreator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JSONLazyCreator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JSONLazyCreator(JSONLazyCreator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JSONLazyCreator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JSONLazyCreator(JSONLazyCreator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11864 };

  /// @brief Field m_Node, offset: 0x10, size: 0x8, def value: None
  ::HoudiniEngineUnity::JSONNode* ___m_Node;

  /// @brief Field m_Key, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_Key;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::JSONLazyCreator, ___m_Node) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::JSONLazyCreator, ___m_Key) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::JSONLazyCreator, 0x20>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::JSONLazyCreator);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::JSONLazyCreator*, "HoudiniEngineUnity", "JSONLazyCreator");
