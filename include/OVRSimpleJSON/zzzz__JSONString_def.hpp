#pragma once
// IWYU pragma private; include "OVRSimpleJSON/JSONString.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JSONString)
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
class JSONString;
}
// Write type traits
MARK_REF_PTR_T(::OVRSimpleJSON::JSONString);
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

  /// @brief Method Equals, addr 0x4053400, size 0xec, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetEnumerator, addr 0x4053380, size 0x14, virtual true, abstract: false, final false
  inline ::OVRSimpleJSON::JSONNode_Enumerator GetEnumerator();

  /// @brief Method GetHashCode, addr 0x40534ec, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::OVRSimpleJSON::JSONString* New_ctor(::StringW aData);

  /// @brief Method WriteToStringBuilder, addr 0x40533a4, size 0x5c, virtual true, abstract: false, final false
  inline void WriteToStringBuilder(::System::Text::StringBuilder* aSB, int32_t aIndent, int32_t aIndentInc, ::OVRSimpleJSON::JSONTextMode aMode);

  constexpr ::StringW const& __cordl_internal_get_m_Data() const;

  constexpr ::StringW& __cordl_internal_get_m_Data();

  constexpr void __cordl_internal_set_m_Data(::StringW value);

  /// @brief Method .ctor, addr 0x404ddc0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW aData);

  /// @brief Method get_IsString, addr 0x4053378, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsString();

  /// @brief Method get_Tag, addr 0x4053370, size 0x8, virtual true, abstract: false, final false
  inline ::OVRSimpleJSON::JSONNodeType get_Tag();

  /// @brief Method get_Value, addr 0x4053394, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method set_Value, addr 0x405339c, size 0x8, virtual true, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8528 };

  /// @brief Field m_Data, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_Data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OVRSimpleJSON::JSONString, ___m_Data) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVRSimpleJSON::JSONString, 0x18>, "Size mismatch!");

} // namespace OVRSimpleJSON
NEED_NO_BOX(::OVRSimpleJSON::JSONString);
DEFINE_IL2CPP_ARG_TYPE(::OVRSimpleJSON::JSONString*, "OVRSimpleJSON", "JSONString");
