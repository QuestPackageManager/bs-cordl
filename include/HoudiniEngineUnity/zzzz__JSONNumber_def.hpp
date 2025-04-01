#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/JSONNumber.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__JSONNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(JSONNumber)
namespace HoudiniEngineUnity {
struct JSONNodeType;
}
namespace HoudiniEngineUnity {
struct JSONNode_Enumerator;
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
class JSONNumber;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::JSONNumber);
// Dependencies HoudiniEngineUnity.JSONNode
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.JSONNumber
class CORDL_TYPE JSONNumber : public ::HoudiniEngineUnity::JSONNode {
public:
  // Declarations
  __declspec(property(get = get_AsDouble, put = set_AsDouble)) double_t AsDouble;

  __declspec(property(get = get_AsLong, put = set_AsLong)) int64_t AsLong;

  __declspec(property(get = get_IsNumber)) bool IsNumber;

  __declspec(property(get = get_Tag)) ::HoudiniEngineUnity::JSONNodeType Tag;

  __declspec(property(get = get_Value, put = set_Value)) ::StringW Value;

  /// @brief Field m_Data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Data, put = __cordl_internal_set_m_Data)) double_t m_Data;

  /// @brief Method Equals, addr 0x3a8a854, size 0x10c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetEnumerator, addr 0x3a8a508, size 0x14, virtual true, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONNode_Enumerator GetEnumerator();

  /// @brief Method GetHashCode, addr 0x3a8a960, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsNumeric, addr 0x3a8a6b4, size 0x1a0, virtual false, abstract: false, final false
  static inline bool IsNumeric(::System::Object* value);

  static inline ::HoudiniEngineUnity::JSONNumber* New_ctor(::StringW aData);

  static inline ::HoudiniEngineUnity::JSONNumber* New_ctor(double_t aData);

  /// @brief Method WriteToStringBuilder, addr 0x3a8a680, size 0x34, virtual true, abstract: false, final false
  inline void WriteToStringBuilder(::System::Text::StringBuilder* aSB, int32_t aIndent, int32_t aIndentInc, ::HoudiniEngineUnity::JSONTextMode aMode);

  constexpr double_t const& __cordl_internal_get_m_Data() const;

  constexpr double_t& __cordl_internal_get_m_Data();

  constexpr void __cordl_internal_set_m_Data(double_t value);

  /// @brief Method .ctor, addr 0x3a8a64c, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::StringW aData);

  /// @brief Method .ctor, addr 0x3a847a4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(double_t aData);

  /// @brief Method get_AsDouble, addr 0x3a8a610, size 0x8, virtual true, abstract: false, final false
  inline double_t get_AsDouble();

  /// @brief Method get_AsLong, addr 0x3a8a620, size 0x20, virtual true, abstract: false, final false
  inline int64_t get_AsLong();

  /// @brief Method get_IsNumber, addr 0x3a8a500, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsNumber();

  /// @brief Method get_Tag, addr 0x3a8a4f8, size 0x8, virtual true, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONNodeType get_Tag();

  /// @brief Method get_Value, addr 0x3a8a51c, size 0x68, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method set_AsDouble, addr 0x3a8a618, size 0x8, virtual true, abstract: false, final false
  inline void set_AsDouble(double_t value);

  /// @brief Method set_AsLong, addr 0x3a8a640, size 0xc, virtual true, abstract: false, final false
  inline void set_AsLong(int64_t value);

  /// @brief Method set_Value, addr 0x3a8a584, size 0x8c, virtual true, abstract: false, final false
  inline void set_Value(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JSONNumber();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JSONNumber", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JSONNumber(JSONNumber&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JSONNumber", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JSONNumber(JSONNumber const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11863 };

  /// @brief Field m_Data, offset: 0x10, size: 0x8, def value: None
  double_t ___m_Data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::JSONNumber, ___m_Data) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::JSONNumber, 0x18>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::JSONNumber);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::JSONNumber*, "HoudiniEngineUnity", "JSONNumber");
