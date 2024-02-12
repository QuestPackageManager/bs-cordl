#pragma once
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
class JSONNode;
}
namespace HoudiniEngineUnity {
class JSONObject;
}
namespace HoudiniEngineUnity {
struct JSONTextMode;
}
namespace HoudiniEngineUnity {
struct __JSONNode__Enumerator;
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
// Type: HoudiniEngineUnity::JSONLazyCreator
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(9661))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9671))
// CS Name: ::HoudiniEngineUnity::JSONLazyCreator*
class CORDL_TYPE JSONLazyCreator : public ::HoudiniEngineUnity::JSONNode {
public:
  // Declarations
  /// @brief Field m_Node, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Node, put = __cordl_internal_set_m_Node))::HoudiniEngineUnity::JSONNode* m_Node;

  /// @brief Field m_Key, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Key, put = __cordl_internal_set_m_Key))::StringW m_Key;

  __declspec(property(get = get_Tag))::HoudiniEngineUnity::JSONNodeType Tag;

  __declspec(property(get = get_Item, put = set_Item))::HoudiniEngineUnity::JSONNode* Item[];

  __declspec(property(get = get_Item, put = set_Item))::HoudiniEngineUnity::JSONNode* Item[];

  __declspec(property(get = get_AsInt, put = set_AsInt)) int32_t AsInt;

  __declspec(property(get = get_AsFloat, put = set_AsFloat)) float_t AsFloat;

  __declspec(property(get = get_AsDouble, put = set_AsDouble)) double_t AsDouble;

  __declspec(property(get = get_AsLong, put = set_AsLong)) int64_t AsLong;

  __declspec(property(get = get_AsBool, put = set_AsBool)) bool AsBool;

  __declspec(property(get = get_AsArray))::HoudiniEngineUnity::JSONArray* AsArray;

  __declspec(property(get = get_AsObject))::HoudiniEngineUnity::JSONObject* AsObject;

  constexpr ::HoudiniEngineUnity::JSONNode*& __cordl_internal_get_m_Node();

  constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::JSONNode*> const& __cordl_internal_get_m_Node() const;

  constexpr void __cordl_internal_set_m_Node(::HoudiniEngineUnity::JSONNode* value);

  constexpr ::StringW& __cordl_internal_get_m_Key();

  constexpr ::StringW const& __cordl_internal_get_m_Key() const;

  constexpr void __cordl_internal_set_m_Key(::StringW value);

  /// @brief Method get_Tag, addr 0x2270b6c, size 0x8, virtual true, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONNodeType get_Tag();

  /// @brief Method GetEnumerator, addr 0x2270b74, size 0x14, virtual true, abstract: false, final false
  inline ::HoudiniEngineUnity::__JSONNode__Enumerator GetEnumerator();

  static inline ::HoudiniEngineUnity::JSONLazyCreator* New_ctor(::HoudiniEngineUnity::JSONNode* aNode);

  /// @brief Method .ctor, addr 0x226e6d4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::HoudiniEngineUnity::JSONNode* aNode);

  static inline ::HoudiniEngineUnity::JSONLazyCreator* New_ctor(::HoudiniEngineUnity::JSONNode* aNode, ::StringW aKey);

  /// @brief Method .ctor, addr 0x226f244, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::HoudiniEngineUnity::JSONNode* aNode, ::StringW aKey);

  /// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T Set(T aVal);

  /// @brief Method get_Item, addr 0x2270b88, size 0x64, virtual true, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONNode* get_Item(int32_t aIndex);

  /// @brief Method set_Item, addr 0x2270bec, size 0x9c, virtual true, abstract: false, final false
  inline void set_Item(int32_t aIndex, ::HoudiniEngineUnity::JSONNode* value);

  /// @brief Method get_Item, addr 0x2270c88, size 0x70, virtual true, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONNode* get_Item(::StringW aKey);

  /// @brief Method set_Item, addr 0x2270cf8, size 0xa4, virtual true, abstract: false, final false
  inline void set_Item(::StringW aKey, ::HoudiniEngineUnity::JSONNode* value);

  /// @brief Method Add, addr 0x2270d9c, size 0x9c, virtual true, abstract: false, final false
  inline void Add(::HoudiniEngineUnity::JSONNode* aItem);

  /// @brief Method Add, addr 0x2270e38, size 0xa4, virtual true, abstract: false, final false
  inline void Add(::StringW aKey, ::HoudiniEngineUnity::JSONNode* aItem);

  /// @brief Method op_Equality, addr 0x2270edc, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Equality(::HoudiniEngineUnity::JSONLazyCreator* a, ::System::Object* b);

  /// @brief Method op_Inequality, addr 0x2270ef4, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(::HoudiniEngineUnity::JSONLazyCreator* a, ::System::Object* b);

  /// @brief Method Equals, addr 0x2270f0c, size 0x18, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x2270f24, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method get_AsInt, addr 0x2270f2c, size 0x88, virtual true, abstract: false, final false
  inline int32_t get_AsInt();

  /// @brief Method set_AsInt, addr 0x2270fb4, size 0x98, virtual true, abstract: false, final false
  inline void set_AsInt(int32_t value);

  /// @brief Method get_AsFloat, addr 0x227104c, size 0x88, virtual true, abstract: false, final false
  inline float_t get_AsFloat();

  /// @brief Method set_AsFloat, addr 0x22710d4, size 0x90, virtual true, abstract: false, final false
  inline void set_AsFloat(float_t value);

  /// @brief Method get_AsDouble, addr 0x2271164, size 0x88, virtual true, abstract: false, final false
  inline double_t get_AsDouble();

  /// @brief Method set_AsDouble, addr 0x22711ec, size 0x8c, virtual true, abstract: false, final false
  inline void set_AsDouble(double_t value);

  /// @brief Method get_AsLong, addr 0x2271278, size 0x10c, virtual true, abstract: false, final false
  inline int64_t get_AsLong();

  /// @brief Method set_AsLong, addr 0x2271384, size 0x148, virtual true, abstract: false, final false
  inline void set_AsLong(int64_t value);

  /// @brief Method get_AsBool, addr 0x22714cc, size 0x88, virtual true, abstract: false, final false
  inline bool get_AsBool();

  /// @brief Method set_AsBool, addr 0x2271554, size 0x90, virtual true, abstract: false, final false
  inline void set_AsBool(bool value);

  /// @brief Method get_AsArray, addr 0x22715e4, size 0x78, virtual true, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONArray* get_AsArray();

  /// @brief Method get_AsObject, addr 0x227165c, size 0x78, virtual true, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONObject* get_AsObject();

  /// @brief Method WriteToStringBuilder, addr 0x22716d4, size 0x54, virtual true, abstract: false, final false
  inline void WriteToStringBuilder(::System::Text::StringBuilder* aSB, int32_t aIndent, int32_t aIndentInc, ::HoudiniEngineUnity::JSONTextMode aMode);

  // Ctor Parameters [CppParam { name: "", ty: "JSONLazyCreator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JSONLazyCreator(JSONLazyCreator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JSONLazyCreator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JSONLazyCreator(JSONLazyCreator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JSONLazyCreator();

public:
  /// @brief Field m_Node, offset: 0x10, size: 0x8, def value: None
  ::HoudiniEngineUnity::JSONNode* ___m_Node;

  /// @brief Field m_Key, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_Key;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::JSONLazyCreator, 0x20>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::JSONLazyCreator, ___m_Node) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::JSONLazyCreator, ___m_Key) == 0x18, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::JSONLazyCreator);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::JSONLazyCreator*, "HoudiniEngineUnity", "JSONLazyCreator");
