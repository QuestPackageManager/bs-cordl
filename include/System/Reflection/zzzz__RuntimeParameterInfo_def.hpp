#pragma once
// IWYU pragma private; include "System/Reflection/RuntimeParameterInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeParameterInfo)
namespace System::Reflection {
struct CallingConventions;
}
namespace System::Reflection {
class CustomAttributeData;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Runtime::InteropServices {
class MarshalAsAttribute;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
class RuntimeParameterInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::RuntimeParameterInfo);
// Dependencies System.Reflection.ParameterInfo
namespace System::Reflection {
// Is value type: false
// CS Name: System.Reflection.RuntimeParameterInfo
class CORDL_TYPE RuntimeParameterInfo : public ::System::Reflection::ParameterInfo {
public:
  // Declarations
  __declspec(property(get = get_DefaultValue)) ::System::Object* DefaultValue;

  /// @brief Field marshalAs, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_marshalAs, put = __cordl_internal_set_marshalAs)) ::System::Runtime::InteropServices::MarshalAsAttribute* marshalAs;

  /// @brief Method FormatParameters, addr 0x3d3207c, size 0x1f4, virtual false, abstract: false, final false
  static inline void FormatParameters(::System::Text::StringBuilder* sb, ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> p,
                                      ::System::Reflection::CallingConventions callingConvention, bool serialization);

  /// @brief Method GetCustomAttributes, addr 0x3d35034, size 0x6c, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x3d34fd8, size 0x5c, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(bool inherit);

  /// @brief Method GetDefaultValueImpl, addr 0x3d34bb0, size 0xc4, virtual false, abstract: false, final false
  inline ::System::Object* GetDefaultValueImpl(::System::Reflection::ParameterInfo* pinfo);

  /// @brief Method GetPseudoCustomAttributes, addr 0x3d35110, size 0x254, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetPseudoCustomAttributes();

  /// @brief Method GetPseudoCustomAttributesData, addr 0x3d35364, size 0x504, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Reflection::CustomAttributeData*, ::Array<::System::Reflection::CustomAttributeData*>*> GetPseudoCustomAttributesData();

  /// @brief Method IsDefined, addr 0x3d350a0, size 0x70, virtual true, abstract: false, final false
  inline bool IsDefined(::System::Type* attributeType, bool inherit);

  /// @brief Method New, addr 0x3d35868, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Reflection::ParameterInfo* New(::System::Reflection::ParameterInfo* pinfo, ::System::Reflection::MemberInfo* member);

  /// @brief Method New, addr 0x3d31d7c, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Reflection::ParameterInfo* New(::System::Type* type, ::System::Reflection::MemberInfo* member, ::System::Runtime::InteropServices::MarshalAsAttribute* marshalAs);

  static inline ::System::Reflection::RuntimeParameterInfo* New_ctor(::StringW name, ::System::Type* type, int32_t position, int32_t attrs, ::System::Object* defaultValue,
                                                                     ::System::Reflection::MemberInfo* member, ::System::Runtime::InteropServices::MarshalAsAttribute* marshalAs);

  static inline ::System::Reflection::RuntimeParameterInfo* New_ctor(::System::Reflection::ParameterInfo* pinfo, ::System::Reflection::MemberInfo* member);

  static inline ::System::Reflection::RuntimeParameterInfo* New_ctor(::System::Type* type, ::System::Reflection::MemberInfo* member, ::System::Runtime::InteropServices::MarshalAsAttribute* marshalAs);

  constexpr ::System::Runtime::InteropServices::MarshalAsAttribute* const& __cordl_internal_get_marshalAs() const;

  constexpr ::System::Runtime::InteropServices::MarshalAsAttribute*& __cordl_internal_get_marshalAs();

  constexpr void __cordl_internal_set_marshalAs(::System::Runtime::InteropServices::MarshalAsAttribute* value);

  /// @brief Method .ctor, addr 0x3d34ab8, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::System::Type* type, int32_t position, int32_t attrs, ::System::Object* defaultValue, ::System::Reflection::MemberInfo* member,
                    ::System::Runtime::InteropServices::MarshalAsAttribute* marshalAs);

  /// @brief Method .ctor, addr 0x3d34b20, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::ParameterInfo* pinfo, ::System::Reflection::MemberInfo* member);

  /// @brief Method .ctor, addr 0x3d34c74, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::System::Reflection::MemberInfo* member, ::System::Runtime::InteropServices::MarshalAsAttribute* marshalAs);

  /// @brief Method get_DefaultValue, addr 0x3d34cc4, size 0x314, virtual true, abstract: false, final false
  inline ::System::Object* get_DefaultValue();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeParameterInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimeParameterInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeParameterInfo(RuntimeParameterInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeParameterInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeParameterInfo(RuntimeParameterInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3529 };

  /// @brief Field marshalAs, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::InteropServices::MarshalAsAttribute* ___marshalAs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Reflection::RuntimeParameterInfo, ___marshalAs) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Reflection::RuntimeParameterInfo, 0x48>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::RuntimeParameterInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::RuntimeParameterInfo*, "System.Reflection", "RuntimeParameterInfo");
