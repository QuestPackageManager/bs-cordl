#pragma once
// IWYU pragma private; include "OVRSimpleJSON/JSONBool.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JSONBool)
namespace OVRSimpleJSON {
struct JSONNodeType;
}
namespace OVRSimpleJSON {
struct JSONNode_Enumerator;
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
MARK_REF_PTR_T(::OVRSimpleJSON::JSONBool);
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

  /// @brief Method Equals, addr 0x4058400, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetEnumerator, addr 0x4058258, size 0x14, virtual true, abstract: false, final false
  inline ::OVRSimpleJSON::JSONNode_Enumerator GetEnumerator();

  /// @brief Method GetHashCode, addr 0x4058478, size 0x58, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::OVRSimpleJSON::JSONBool* New_ctor(::StringW aData);

  static inline ::OVRSimpleJSON::JSONBool* New_ctor(bool aData);

  /// @brief Method WriteToStringBuilder, addr 0x4058388, size 0x78, virtual true, abstract: false, final false
  inline void WriteToStringBuilder(::System::Text::StringBuilder* aSB, int32_t aIndent, int32_t aIndentInc, ::OVRSimpleJSON::JSONTextMode aMode);

  constexpr bool const& __cordl_internal_get_m_Data() const;

  constexpr bool& __cordl_internal_get_m_Data();

  constexpr void __cordl_internal_set_m_Data(bool value);

  /// @brief Method .ctor, addr 0x4058354, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::StringW aData);

  /// @brief Method .ctor, addr 0x4052a40, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool aData);

  /// @brief Method get_AsBool, addr 0x4058340, size 0x8, virtual true, abstract: false, final false
  inline bool get_AsBool();

  /// @brief Method get_IsBoolean, addr 0x4058250, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsBoolean();

  /// @brief Method get_Tag, addr 0x4058248, size 0x8, virtual true, abstract: false, final false
  inline ::OVRSimpleJSON::JSONNodeType get_Tag();

  /// @brief Method get_Value, addr 0x405826c, size 0x58, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method set_AsBool, addr 0x4058348, size 0xc, virtual true, abstract: false, final false
  inline void set_AsBool(bool value);

  /// @brief Method set_Value, addr 0x40582c4, size 0x7c, virtual true, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8529 };

  /// @brief Field m_Data, offset: 0x10, size: 0x1, def value: None
  bool ___m_Data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OVRSimpleJSON::JSONBool, ___m_Data) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVRSimpleJSON::JSONBool, 0x18>, "Size mismatch!");

} // namespace OVRSimpleJSON
NEED_NO_BOX(::OVRSimpleJSON::JSONBool);
DEFINE_IL2CPP_ARG_TYPE(::OVRSimpleJSON::JSONBool*, "OVRSimpleJSON", "JSONBool");
