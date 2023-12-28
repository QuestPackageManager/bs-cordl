#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__FtpMethodFlags_def.hpp"
#include "System/Net/zzzz__FtpOperation_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FtpMethodInfo)
namespace System::Net {
struct FtpOperation;
}
namespace System::Net {
struct FtpMethodFlags;
}
// Forward declare root types
namespace System::Net {
class FtpMethodInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::FtpMethodInfo);
// Type: System.Net::FtpMethodInfo
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(9044)), TypeDefinitionIndex(TypeDefinitionIndex(9045))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9046))
// CS Name: ::System.Net::FtpMethodInfo*
class CORDL_TYPE FtpMethodInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field Method, offset 0x10, size 0x8
  __declspec(property(get = __get_Method, put = __set_Method))::StringW Method;

  /// @brief Field Operation, offset 0x18, size 0x4
  __declspec(property(get = __get_Operation, put = __set_Operation))::System::Net::FtpOperation Operation;

  /// @brief Field Flags, offset 0x1c, size 0x4
  __declspec(property(get = __get_Flags, put = __set_Flags))::System::Net::FtpMethodFlags Flags;

  /// @brief Field HttpCommand, offset 0x20, size 0x8
  __declspec(property(get = __get_HttpCommand, put = __set_HttpCommand))::StringW HttpCommand;

  /// @brief Field s_knownMethodInfo, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_knownMethodInfo, put = setStaticF_s_knownMethodInfo))::ArrayW<::System::Net::FtpMethodInfo*, ::Array<::System::Net::FtpMethodInfo*>*> s_knownMethodInfo;

  __declspec(property(get = get_IsCommandOnly)) bool IsCommandOnly;

  __declspec(property(get = get_IsUpload)) bool IsUpload;

  __declspec(property(get = get_IsDownload)) bool IsDownload;

  __declspec(property(get = get_ShouldParseForResponseUri)) bool ShouldParseForResponseUri;

  constexpr ::StringW& __get_Method();

  constexpr ::StringW const& __get_Method() const;

  constexpr void __set_Method(::StringW value);

  constexpr ::System::Net::FtpOperation& __get_Operation();

  constexpr ::System::Net::FtpOperation const& __get_Operation() const;

  constexpr void __set_Operation(::System::Net::FtpOperation value);

  constexpr ::System::Net::FtpMethodFlags& __get_Flags();

  constexpr ::System::Net::FtpMethodFlags const& __get_Flags() const;

  constexpr void __set_Flags(::System::Net::FtpMethodFlags value);

  constexpr ::StringW& __get_HttpCommand();

  constexpr ::StringW const& __get_HttpCommand() const;

  constexpr void __set_HttpCommand(::StringW value);

  static inline void setStaticF_s_knownMethodInfo(::ArrayW<::System::Net::FtpMethodInfo*, ::Array<::System::Net::FtpMethodInfo*>*> value);

  static inline ::ArrayW<::System::Net::FtpMethodInfo*, ::Array<::System::Net::FtpMethodInfo*>*> getStaticF_s_knownMethodInfo();

  static inline ::System::Net::FtpMethodInfo* New_ctor(::StringW method, ::System::Net::FtpOperation operation, ::System::Net::FtpMethodFlags flags, ::StringW httpCommand);

  /// @brief Method .ctor addr 0x2994768 size 0x44 virtual false final false
  inline void _ctor(::StringW method, ::System::Net::FtpOperation operation, ::System::Net::FtpMethodFlags flags, ::StringW httpCommand);

  /// @brief Method HasFlag addr 0x29923dc size 0x10 virtual false final false
  inline bool HasFlag(::System::Net::FtpMethodFlags flags);

  /// @brief Method get_IsCommandOnly addr 0x2992580 size 0x10 virtual false final false
  inline bool get_IsCommandOnly();

  /// @brief Method get_IsUpload addr 0x299337c size 0xc virtual false final false
  inline bool get_IsUpload();

  /// @brief Method get_IsDownload addr 0x2993388 size 0xc virtual false final false
  inline bool get_IsDownload();

  /// @brief Method get_ShouldParseForResponseUri addr 0x2990c34 size 0xc virtual false final false
  inline bool get_ShouldParseForResponseUri();

  /// @brief Method GetMethodInfo addr 0x29947ac size 0x164 virtual false final false
  static inline ::System::Net::FtpMethodInfo* GetMethodInfo(::StringW method);

  // Ctor Parameters [CppParam { name: "", ty: "FtpMethodInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FtpMethodInfo(FtpMethodInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FtpMethodInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FtpMethodInfo(FtpMethodInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FtpMethodInfo();

public:
  /// @brief Field Method, offset: 0x10, size: 0x8, def value: None
  ::StringW ___Method;

  /// @brief Field Operation, offset: 0x18, size: 0x4, def value: None
  ::System::Net::FtpOperation ___Operation;

  /// @brief Field Flags, offset: 0x1c, size: 0x4, def value: None
  ::System::Net::FtpMethodFlags ___Flags;

  /// @brief Field HttpCommand, offset: 0x20, size: 0x8, def value: None
  ::StringW ___HttpCommand;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::FtpMethodInfo, 0x28>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::FtpMethodInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FtpMethodInfo*, "System.Net", "FtpMethodInfo");
