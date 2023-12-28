#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeParameterInfo)
namespace System::Reflection {
class CustomAttributeData;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Runtime::InteropServices {
class MarshalAsAttribute;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace System::Reflection {
struct CallingConventions;
}
namespace System::Reflection {
class MemberInfo;
}
// Forward declare root types
namespace System::Reflection {
class RuntimeParameterInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::RuntimeParameterInfo);
// Type: System.Reflection::RuntimeParameterInfo
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3483))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3526))
// CS Name: ::System.Reflection::RuntimeParameterInfo*
class CORDL_TYPE RuntimeParameterInfo : public ::System::Reflection::ParameterInfo {
public:
  // Declarations
  /// @brief Field marshalAs, offset 0x40, size 0x8
  __declspec(property(get = __get_marshalAs, put = __set_marshalAs))::System::Runtime::InteropServices::MarshalAsAttribute* marshalAs;

  __declspec(property(get = get_DefaultValue))::System::Object* DefaultValue;

  constexpr ::System::Runtime::InteropServices::MarshalAsAttribute*& __get_marshalAs();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::InteropServices::MarshalAsAttribute*> const& __get_marshalAs() const;

  constexpr void __set_marshalAs(::System::Runtime::InteropServices::MarshalAsAttribute* value);

  static inline ::System::Reflection::RuntimeParameterInfo* New_ctor(::StringW name, ::System::Type* type, int32_t position, int32_t attrs, ::System::Object* defaultValue,
                                                                     ::System::Reflection::MemberInfo* member, ::System::Runtime::InteropServices::MarshalAsAttribute* marshalAs);

  /// @brief Method .ctor addr 0x24f74d0 size 0x68 virtual false final false
  inline void _ctor(::StringW name, ::System::Type* type, int32_t position, int32_t attrs, ::System::Object* defaultValue, ::System::Reflection::MemberInfo* member,
                    ::System::Runtime::InteropServices::MarshalAsAttribute* marshalAs);

  /// @brief Method FormatParameters addr 0x24f7538 size 0x1f4 virtual false final false
  static inline void FormatParameters(::System::Text::StringBuilder* sb, ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> p,
                                      ::System::Reflection::CallingConventions callingConvention, bool serialization);

  static inline ::System::Reflection::RuntimeParameterInfo* New_ctor(::System::Reflection::ParameterInfo* pinfo, ::System::Reflection::MemberInfo* member);

  /// @brief Method .ctor addr 0x24f772c size 0x90 virtual false final false
  inline void _ctor(::System::Reflection::ParameterInfo* pinfo, ::System::Reflection::MemberInfo* member);

  static inline ::System::Reflection::RuntimeParameterInfo* New_ctor(::System::Type* type, ::System::Reflection::MemberInfo* member, ::System::Runtime::InteropServices::MarshalAsAttribute* marshalAs);

  /// @brief Method .ctor addr 0x24f7880 size 0x50 virtual false final false
  inline void _ctor(::System::Type* type, ::System::Reflection::MemberInfo* member, ::System::Runtime::InteropServices::MarshalAsAttribute* marshalAs);

  /// @brief Method get_DefaultValue addr 0x24f78d0 size 0x314 virtual true final false
  inline ::System::Object* get_DefaultValue();

  /// @brief Method GetCustomAttributes addr 0x24f7be4 size 0x5c virtual true final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(bool inherit);

  /// @brief Method GetCustomAttributes addr 0x24f7c40 size 0x6c virtual true final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(::System::Type* attributeType, bool inherit);

  /// @brief Method GetDefaultValueImpl addr 0x24f77bc size 0xc4 virtual false final false
  inline ::System::Object* GetDefaultValueImpl(::System::Reflection::ParameterInfo* pinfo);

  /// @brief Method IsDefined addr 0x24f7cac size 0x70 virtual true final false
  inline bool IsDefined(::System::Type* attributeType, bool inherit);

  /// @brief Method GetPseudoCustomAttributes addr 0x24f7d1c size 0x258 virtual false final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetPseudoCustomAttributes();

  /// @brief Method GetPseudoCustomAttributesData addr 0x24f7f74 size 0x508 virtual false final false
  inline ::ArrayW<::System::Reflection::CustomAttributeData*, ::Array<::System::Reflection::CustomAttributeData*>*> GetPseudoCustomAttributesData();

  /// @brief Method New addr 0x24f847c size 0x70 virtual false final false
  static inline ::System::Reflection::ParameterInfo* New(::System::Reflection::ParameterInfo* pinfo, ::System::Reflection::MemberInfo* member);

  /// @brief Method New addr 0x24f84ec size 0x8c virtual false final false
  static inline ::System::Reflection::ParameterInfo* New(::System::Type* type, ::System::Reflection::MemberInfo* member, ::System::Runtime::InteropServices::MarshalAsAttribute* marshalAs);

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeParameterInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeParameterInfo(RuntimeParameterInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeParameterInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeParameterInfo(RuntimeParameterInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeParameterInfo();

public:
  /// @brief Field marshalAs, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::InteropServices::MarshalAsAttribute* ___marshalAs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::RuntimeParameterInfo, 0x48>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::RuntimeParameterInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::RuntimeParameterInfo*, "System.Reflection", "RuntimeParameterInfo");
