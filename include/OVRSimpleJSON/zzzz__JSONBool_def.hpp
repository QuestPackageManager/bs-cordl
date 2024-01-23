#pragma once
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
struct JSONTextMode;
}
namespace OVRSimpleJSON {
struct __JSONNode__Enumerator;
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
// Type: OVRSimpleJSON::JSONBool
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace OVRSimpleJSON {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8204))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8212))
// CS Name: ::OVRSimpleJSON::JSONBool*
class CORDL_TYPE JSONBool : public ::OVRSimpleJSON::JSONNode {
public:
  // Declarations
  /// @brief Field m_Data, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Data, put = __cordl_internal_set_m_Data)) bool m_Data;

  __declspec(property(get = get_Tag))::OVRSimpleJSON::JSONNodeType Tag;

  __declspec(property(get = get_IsBoolean)) bool IsBoolean;

  __declspec(property(get = get_Value, put = set_Value))::StringW Value;

  __declspec(property(get = get_AsBool, put = set_AsBool)) bool AsBool;

  constexpr bool& __cordl_internal_get_m_Data();

  constexpr bool const& __cordl_internal_get_m_Data() const;

  constexpr void __cordl_internal_set_m_Data(bool value);

  /// @brief Method get_Tag, addr 0x27ce168, size 0x8, virtual true, abstract: false, final false
  inline ::OVRSimpleJSON::JSONNodeType get_Tag();

  /// @brief Method get_IsBoolean, addr 0x27ce170, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsBoolean();

  /// @brief Method GetEnumerator, addr 0x27ce178, size 0x14, virtual true, abstract: false, final false
  inline ::OVRSimpleJSON::__JSONNode__Enumerator GetEnumerator();

  /// @brief Method get_Value, addr 0x27ce18c, size 0xc, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method set_Value, addr 0x27ce198, size 0x7c, virtual true, abstract: false, final false
  inline void set_Value(::StringW value);

  /// @brief Method get_AsBool, addr 0x27ce214, size 0x8, virtual true, abstract: false, final false
  inline bool get_AsBool();

  /// @brief Method set_AsBool, addr 0x27ce21c, size 0xc, virtual true, abstract: false, final false
  inline void set_AsBool(bool value);

  static inline ::OVRSimpleJSON::JSONBool* New_ctor(bool aData);

  /// @brief Method .ctor, addr 0x27c87e0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool aData);

  static inline ::OVRSimpleJSON::JSONBool* New_ctor(::StringW aData);

  /// @brief Method .ctor, addr 0x27ce228, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::StringW aData);

  /// @brief Method WriteToStringBuilder, addr 0x27ce25c, size 0x78, virtual true, abstract: false, final false
  inline void WriteToStringBuilder(::System::Text::StringBuilder* aSB, int32_t aIndent, int32_t aIndentInc, ::OVRSimpleJSON::JSONTextMode aMode);

  /// @brief Method Equals, addr 0x27ce2d4, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x27ce34c, size 0xc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "JSONBool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JSONBool(JSONBool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JSONBool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JSONBool(JSONBool const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JSONBool();

public:
  /// @brief Field m_Data, offset: 0x10, size: 0x1, def value: None
  bool ___m_Data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVRSimpleJSON::JSONBool, 0x18>, "Size mismatch!");

static_assert(offsetof(::OVRSimpleJSON::JSONBool, ___m_Data) == 0x10, "Offset mismatch!");

} // namespace OVRSimpleJSON
NEED_NO_BOX(::OVRSimpleJSON::JSONBool);
DEFINE_IL2CPP_ARG_TYPE(::OVRSimpleJSON::JSONBool*, "OVRSimpleJSON", "JSONBool");
