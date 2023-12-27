#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__JSONNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JSONBool)
namespace System::Text {
class StringBuilder;
}
namespace System {
class Object;
}
namespace HoudiniEngineUnity {
struct __JSONNode__Enumerator;
}
namespace HoudiniEngineUnity {
struct JSONTextMode;
}
namespace HoudiniEngineUnity {
struct JSONNodeType;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class JSONBool;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::JSONBool);
// Type: HoudiniEngineUnity::JSONBool
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9869))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9877))
// CS Name: ::HoudiniEngineUnity::JSONBool*
class CORDL_TYPE JSONBool : public ::HoudiniEngineUnity::JSONNode {
public:
  // Declarations
  /// @brief Field m_Data, offset 0x10, size 0x1
  __declspec(property(get = __get_m_Data, put = __set_m_Data)) bool m_Data;

  __declspec(property(get = get_Tag))::HoudiniEngineUnity::JSONNodeType Tag;

  __declspec(property(get = get_IsBoolean)) bool IsBoolean;

  __declspec(property(get = get_Value, put = set_Value))::StringW Value;

  __declspec(property(get = get_AsBool, put = set_AsBool)) bool AsBool;

  constexpr bool& __get_m_Data();

  constexpr bool const& __get_m_Data() const;

  constexpr void __set_m_Data(bool value);

  /// @brief Method get_Tag addr 0x21daebc size 0x8 virtual true final false
  inline ::HoudiniEngineUnity::JSONNodeType get_Tag();

  /// @brief Method get_IsBoolean addr 0x21daec4 size 0x8 virtual true final false
  inline bool get_IsBoolean();

  /// @brief Method GetEnumerator addr 0x21daecc size 0x14 virtual true final false
  inline ::HoudiniEngineUnity::__JSONNode__Enumerator GetEnumerator();

  /// @brief Method get_Value addr 0x21daee0 size 0xc virtual true final false
  inline ::StringW get_Value();

  /// @brief Method set_Value addr 0x21daeec size 0x7c virtual true final false
  inline void set_Value(::StringW value);

  /// @brief Method get_AsBool addr 0x21daf68 size 0x8 virtual true final false
  inline bool get_AsBool();

  /// @brief Method set_AsBool addr 0x21daf70 size 0xc virtual true final false
  inline void set_AsBool(bool value);

  static inline ::HoudiniEngineUnity::JSONBool* New_ctor(bool aData);

  /// @brief Method .ctor addr 0x21d4ebc size 0x28 virtual false final false
  inline void _ctor(bool aData);

  static inline ::HoudiniEngineUnity::JSONBool* New_ctor(::StringW aData);

  /// @brief Method .ctor addr 0x21daf7c size 0x34 virtual false final false
  inline void _ctor(::StringW aData);

  /// @brief Method WriteToStringBuilder addr 0x21dafb0 size 0x78 virtual true final false
  inline void WriteToStringBuilder(::System::Text::StringBuilder* aSB, int32_t aIndent, int32_t aIndentInc, ::HoudiniEngineUnity::JSONTextMode aMode);

  /// @brief Method Equals addr 0x21db028 size 0x78 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x21db0a0 size 0xc virtual true final false
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
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::JSONBool, 0x18>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::JSONBool);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::JSONBool*, "HoudiniEngineUnity", "JSONBool");
