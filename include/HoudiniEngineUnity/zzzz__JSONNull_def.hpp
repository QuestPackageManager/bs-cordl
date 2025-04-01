#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/JSONNull.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__JSONNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JSONNull)
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
class JSONNull;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::JSONNull);
// Dependencies HoudiniEngineUnity.JSONNode
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.JSONNull
class CORDL_TYPE JSONNull : public ::HoudiniEngineUnity::JSONNode {
public:
  // Declarations
  __declspec(property(get = get_AsBool, put = set_AsBool)) bool AsBool;

  __declspec(property(get = get_IsNull)) bool IsNull;

  __declspec(property(get = get_Tag)) ::HoudiniEngineUnity::JSONNodeType Tag;

  __declspec(property(get = get_Value, put = set_Value)) ::StringW Value;

  /// @brief Field m_StaticInstance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_StaticInstance, put = setStaticF_m_StaticInstance)) ::HoudiniEngineUnity::JSONNull* m_StaticInstance;

  /// @brief Field reuseSameInstance, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_reuseSameInstance, put = setStaticF_reuseSameInstance)) bool reuseSameInstance;

  /// @brief Method CreateOrGet, addr 0x3a85058, size 0x8c, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::JSONNull* CreateOrGet();

  /// @brief Method Equals, addr 0x3a8ac84, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetEnumerator, addr 0x3a8ac20, size 0x14, virtual true, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONNode_Enumerator GetEnumerator();

  /// @brief Method GetHashCode, addr 0x3a8ad10, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::HoudiniEngineUnity::JSONNull* New_ctor();

  /// @brief Method WriteToStringBuilder, addr 0x3a8ad18, size 0x54, virtual true, abstract: false, final false
  inline void WriteToStringBuilder(::System::Text::StringBuilder* aSB, int32_t aIndent, int32_t aIndentInc, ::HoudiniEngineUnity::JSONTextMode aMode);

  /// @brief Method .ctor, addr 0x3a8ac08, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::HoudiniEngineUnity::JSONNull* getStaticF_m_StaticInstance();

  static inline bool getStaticF_reuseSameInstance();

  /// @brief Method get_AsBool, addr 0x3a8ac78, size 0x8, virtual true, abstract: false, final false
  inline bool get_AsBool();

  /// @brief Method get_IsNull, addr 0x3a8ac18, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsNull();

  /// @brief Method get_Tag, addr 0x3a8ac10, size 0x8, virtual true, abstract: false, final false
  inline ::HoudiniEngineUnity::JSONNodeType get_Tag();

  /// @brief Method get_Value, addr 0x3a8ac34, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  static inline void setStaticF_m_StaticInstance(::HoudiniEngineUnity::JSONNull* value);

  static inline void setStaticF_reuseSameInstance(bool value);

  /// @brief Method set_AsBool, addr 0x3a8ac80, size 0x4, virtual true, abstract: false, final false
  inline void set_AsBool(bool value);

  /// @brief Method set_Value, addr 0x3a8ac74, size 0x4, virtual true, abstract: false, final false
  inline void set_Value(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JSONNull();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JSONNull", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JSONNull(JSONNull&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JSONNull", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JSONNull(JSONNull const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11865 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::JSONNull, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::JSONNull);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::JSONNull*, "HoudiniEngineUnity", "JSONNull");
