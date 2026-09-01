#pragma once
// IWYU pragma private; include "OVRSimpleJSON\JSONString.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JSONString)
namespace OVRSimpleJSON {
struct JSONNodeType;
}
namespace OVRSimpleJSON {
struct JSONNode_Enumerator;
}
namespace OVRSimpleJSON {
class JSONNode;
}
namespace OVRSimpleJSON {
struct JSONTextMode;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Object;
}
// Forward declare root types
namespace OVRSimpleJSON {
class JSONString;
}
// Write type traits
MARK_REF_T(::OVRSimpleJSON::JSONString*);
DEFINE_IL2CPP_CLASS(::OVRSimpleJSON::JSONString*, "OVRSimpleJSON", "JSONString");
// Dependencies OVRSimpleJSON.JSONNode
namespace OVRSimpleJSON {
// Is value type: false
// CS Name: OVRSimpleJSON.JSONString
class CORDL_TYPE JSONString : public ::OVRSimpleJSON::JSONNode {
public:
  // Declarations
  __declspec(property(get = get_IsString)) bool IsString;

  __declspec(property(get = get_Tag)) ::OVRSimpleJSON::JSONNodeType Tag;

  __declspec(property(get = get_Value, put = set_Value)) ::StringW Value;

  /// @brief Field m_Data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Data, put = __cordl_internal_set_m_Data)) ::StringW m_Data;

  /// @brief Method Clear, addr 0x5e29f98, size 0x4c, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method Clone, addr 0x5e29d68, size 0x60, virtual true, abstract: false, final false
  inline ::OVRSimpleJSON::JSONNode* Clone();

  /// @brief Method Equals, addr 0x5e29e68, size 0x114, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetEnumerator, addr 0x5e29ce0, size 0x14, virtual true, abstract: false, final false
  inline ::OVRSimpleJSON::JSONNode_Enumerator GetEnumerator();

  /// @brief Method GetHashCode, addr 0x5e29f7c, size 0x1c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::OVRSimpleJSON::JSONString* New_ctor(::StringW aData);

  /// @brief Method WriteToStringBuilder, addr 0x5e29dc8, size 0xa0, virtual true, abstract: false, final false
  inline void WriteToStringBuilder(::System::Text::StringBuilder* aSB, int32_t aIndent, int32_t aIndentInc, ::OVRSimpleJSON::JSONTextMode aMode);

  constexpr ::StringW const& __cordl_internal_get_m_Data() const;

  constexpr ::StringW& __cordl_internal_get_m_Data();

  constexpr void __cordl_internal_set_m_Data(::StringW value);

  /// @brief Method .ctor, addr 0x5e29d04, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::StringW aData);

  /// @brief Method get_IsString, addr 0x5e29cd8, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsString();

  /// @brief Method get_Tag, addr 0x5e29cd0, size 0x8, virtual true, abstract: false, final false
  inline ::OVRSimpleJSON::JSONNodeType get_Tag();

  /// @brief Method get_Value, addr 0x5e29cf4, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method set_Value, addr 0x5e29cfc, size 0x8, virtual true, abstract: false, final false
  inline void set_Value(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JSONString();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JSONString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JSONString(JSONString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JSONString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JSONString(JSONString const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8028 };

  /// @brief Field m_Data, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_Data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OVRSimpleJSON::JSONString, ___m_Data) == 0x10, "Offset mismatch!");

static_assert(sizeof(::OVRSimpleJSON::JSONString) == 0x18, "Size mismatch!");

} // namespace OVRSimpleJSON
