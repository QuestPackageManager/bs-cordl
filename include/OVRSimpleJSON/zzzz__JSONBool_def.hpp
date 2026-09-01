#pragma once
// IWYU pragma private; include "OVRSimpleJSON\JSONBool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JSONBool)
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
class JSONBool;
}
// Write type traits
MARK_REF_T(::OVRSimpleJSON::JSONBool*);
DEFINE_IL2CPP_CLASS(::OVRSimpleJSON::JSONBool*, "OVRSimpleJSON", "JSONBool");
// Dependencies OVRSimpleJSON.JSONNode
namespace OVRSimpleJSON {
// Is value type: false
// CS Name: OVRSimpleJSON.JSONBool
class CORDL_TYPE JSONBool : public ::OVRSimpleJSON::JSONNode {
public:
  // Declarations
  __declspec(property(get = get_AsBool, put = set_AsBool)) bool AsBool;

  __declspec(property(get = get_IsBoolean)) bool IsBoolean;

  __declspec(property(get = get_Tag)) ::OVRSimpleJSON::JSONNodeType Tag;

  __declspec(property(get = get_Value, put = set_Value)) ::StringW Value;

  /// @brief Field m_Data, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Data, put = __cordl_internal_set_m_Data)) bool m_Data;

  /// @brief Method Clear, addr 0x5e2a870, size 0x8, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method Clone, addr 0x5e2a718, size 0x60, virtual true, abstract: false, final false
  inline ::OVRSimpleJSON::JSONNode* Clone();

  /// @brief Method Equals, addr 0x5e2a808, size 0x34, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetEnumerator, addr 0x5e2a59c, size 0x14, virtual true, abstract: false, final false
  inline ::OVRSimpleJSON::JSONNode_Enumerator GetEnumerator();

  /// @brief Method GetHashCode, addr 0x5e2a83c, size 0x34, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::OVRSimpleJSON::JSONBool* New_ctor(::StringW aData);

  static inline ::OVRSimpleJSON::JSONBool* New_ctor(bool aData);

  /// @brief Method WriteToStringBuilder, addr 0x5e2a778, size 0x90, virtual true, abstract: false, final false
  inline void WriteToStringBuilder(::System::Text::StringBuilder* aSB, int32_t aIndent, int32_t aIndentInc, ::OVRSimpleJSON::JSONTextMode aMode);

  constexpr bool const& __cordl_internal_get_m_Data() const;

  constexpr bool& __cordl_internal_get_m_Data();

  constexpr void __cordl_internal_set_m_Data(bool value);

  /// @brief Method .ctor, addr 0x5e2a6a8, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW aData);

  /// @brief Method .ctor, addr 0x5e2a640, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(bool aData);

  /// @brief Method get_AsBool, addr 0x5e2a630, size 0x8, virtual true, abstract: false, final false
  inline bool get_AsBool();

  /// @brief Method get_IsBoolean, addr 0x5e2a594, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsBoolean();

  /// @brief Method get_Tag, addr 0x5e2a58c, size 0x8, virtual true, abstract: false, final false
  inline ::OVRSimpleJSON::JSONNodeType get_Tag();

  /// @brief Method get_Value, addr 0x5e2a5b0, size 0x30, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method set_AsBool, addr 0x5e2a638, size 0x8, virtual true, abstract: false, final false
  inline void set_AsBool(bool value);

  /// @brief Method set_Value, addr 0x5e2a5e0, size 0x50, virtual true, abstract: false, final false
  inline void set_Value(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JSONBool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JSONBool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JSONBool(JSONBool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JSONBool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JSONBool(JSONBool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8030 };

  /// @brief Field m_Data, offset: 0x10, size: 0x1, def value: None
  bool ___m_Data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OVRSimpleJSON::JSONBool, ___m_Data) == 0x10, "Offset mismatch!");

static_assert(sizeof(::OVRSimpleJSON::JSONBool) == 0x18, "Size mismatch!");

} // namespace OVRSimpleJSON
