#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JSONNull)
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
class JSONNull;
}
// Write type traits
MARK_REF_PTR_T(::OVRSimpleJSON::JSONNull);
// Type: OVRSimpleJSON::JSONNull
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVRSimpleJSON {
// Is value type: false
// CS Name: ::OVRSimpleJSON::JSONNull*
class CORDL_TYPE JSONNull : public ::OVRSimpleJSON::JSONNode {
public:
  // Declarations
  __declspec(property(get = get_AsBool, put = set_AsBool)) bool AsBool;

  __declspec(property(get = get_IsNull)) bool IsNull;

  __declspec(property(get = get_Tag))::OVRSimpleJSON::JSONNodeType Tag;

  __declspec(property(get = get_Value, put = set_Value))::StringW Value;

  /// @brief Field m_StaticInstance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_StaticInstance, put = setStaticF_m_StaticInstance))::OVRSimpleJSON::JSONNull* m_StaticInstance;

  /// @brief Field reuseSameInstance, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_reuseSameInstance, put = setStaticF_reuseSameInstance)) bool reuseSameInstance;

  /// @brief Method CreateOrGet, addr 0x28ba678, size 0x94, virtual false, abstract: false, final false
  static inline ::OVRSimpleJSON::JSONNull* CreateOrGet();

  /// @brief Method Equals, addr 0x28bfce4, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetEnumerator, addr 0x28bfc80, size 0x14, virtual true, abstract: false, final false
  inline ::OVRSimpleJSON::__JSONNode__Enumerator GetEnumerator();

  /// @brief Method GetHashCode, addr 0x28bfd70, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::OVRSimpleJSON::JSONNull* New_ctor();

  /// @brief Method WriteToStringBuilder, addr 0x28bfd78, size 0x54, virtual true, abstract: false, final false
  inline void WriteToStringBuilder(::System::Text::StringBuilder* aSB, int32_t aIndent, int32_t aIndentInc, ::OVRSimpleJSON::JSONTextMode aMode);

  /// @brief Method .ctor, addr 0x28bfc68, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::OVRSimpleJSON::JSONNull* getStaticF_m_StaticInstance();

  static inline bool getStaticF_reuseSameInstance();

  /// @brief Method get_AsBool, addr 0x28bfcd8, size 0x8, virtual true, abstract: false, final false
  inline bool get_AsBool();

  /// @brief Method get_IsNull, addr 0x28bfc78, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsNull();

  /// @brief Method get_Tag, addr 0x28bfc70, size 0x8, virtual true, abstract: false, final false
  inline ::OVRSimpleJSON::JSONNodeType get_Tag();

  /// @brief Method get_Value, addr 0x28bfc94, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  static inline void setStaticF_m_StaticInstance(::OVRSimpleJSON::JSONNull* value);

  static inline void setStaticF_reuseSameInstance(bool value);

  /// @brief Method set_AsBool, addr 0x28bfce0, size 0x4, virtual true, abstract: false, final false
  inline void set_AsBool(bool value);

  /// @brief Method set_Value, addr 0x28bfcd4, size 0x4, virtual true, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVRSimpleJSON::JSONNull, 0x10>, "Size mismatch!");

} // namespace OVRSimpleJSON
NEED_NO_BOX(::OVRSimpleJSON::JSONNull);
DEFINE_IL2CPP_ARG_TYPE(::OVRSimpleJSON::JSONNull*, "OVRSimpleJSON", "JSONNull");
