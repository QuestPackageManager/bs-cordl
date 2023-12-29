#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__JSONNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JSONNull)
namespace System {
class Object;
}
namespace HoudiniEngineUnity {
struct __JSONNode__Enumerator;
}
namespace HoudiniEngineUnity {
struct JSONNodeType;
}
namespace System::Text {
class StringBuilder;
}
namespace HoudiniEngineUnity {
struct JSONTextMode;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class JSONNull;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::JSONNull);
// Type: HoudiniEngineUnity::JSONNull
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9796))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9805))
// CS Name: ::HoudiniEngineUnity::JSONNull*
class CORDL_TYPE JSONNull : public ::HoudiniEngineUnity::JSONNode {
public:
  // Declarations
  /// @brief Field m_StaticInstance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_StaticInstance, put = setStaticF_m_StaticInstance))::HoudiniEngineUnity::JSONNull* m_StaticInstance;

  /// @brief Field reuseSameInstance, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_reuseSameInstance, put = setStaticF_reuseSameInstance)) bool reuseSameInstance;

  __declspec(property(get = get_Tag))::HoudiniEngineUnity::JSONNodeType Tag;

  __declspec(property(get = get_IsNull)) bool IsNull;

  __declspec(property(get = get_Value, put = set_Value))::StringW Value;

  __declspec(property(get = get_AsBool, put = set_AsBool)) bool AsBool;

  static inline void setStaticF_m_StaticInstance(::HoudiniEngineUnity::JSONNull* value);

  static inline ::HoudiniEngineUnity::JSONNull* getStaticF_m_StaticInstance();

  static inline void setStaticF_reuseSameInstance(bool value);

  static inline bool getStaticF_reuseSameInstance();

  /// @brief Method CreateOrGet addr 0x207daa8 size 0x94 virtual false final false
  static inline ::HoudiniEngineUnity::JSONNull* CreateOrGet();

  static inline ::HoudiniEngineUnity::JSONNull* New_ctor();

  /// @brief Method .ctor addr 0x2083710 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method get_Tag addr 0x2083718 size 0x8 virtual true final false
  inline ::HoudiniEngineUnity::JSONNodeType get_Tag();

  /// @brief Method get_IsNull addr 0x2083720 size 0x8 virtual true final false
  inline bool get_IsNull();

  /// @brief Method GetEnumerator addr 0x2083728 size 0x14 virtual true final false
  inline ::HoudiniEngineUnity::__JSONNode__Enumerator GetEnumerator();

  /// @brief Method get_Value addr 0x208373c size 0x40 virtual true final false
  inline ::StringW get_Value();

  /// @brief Method set_Value addr 0x208377c size 0x4 virtual true final false
  inline void set_Value(::StringW value);

  /// @brief Method get_AsBool addr 0x2083780 size 0x8 virtual true final false
  inline bool get_AsBool();

  /// @brief Method set_AsBool addr 0x2083788 size 0x4 virtual true final false
  inline void set_AsBool(bool value);

  /// @brief Method Equals addr 0x208378c size 0x8c virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x2083818 size 0x8 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method WriteToStringBuilder addr 0x2083820 size 0x54 virtual true final false
  inline void WriteToStringBuilder(::System::Text::StringBuilder* aSB, int32_t aIndent, int32_t aIndentInc, ::HoudiniEngineUnity::JSONTextMode aMode);

  // Ctor Parameters [CppParam { name: "", ty: "JSONNull", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JSONNull(JSONNull&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JSONNull", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JSONNull(JSONNull const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JSONNull();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::JSONNull, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::JSONNull);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::JSONNull*, "HoudiniEngineUnity", "JSONNull");
