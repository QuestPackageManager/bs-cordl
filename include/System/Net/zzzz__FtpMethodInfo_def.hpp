#pragma once
// IWYU pragma private; include "System/Net/FtpMethodInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__FtpMethodFlags_def.hpp"
#include "System/Net/zzzz__FtpOperation_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FtpMethodInfo)
namespace System::Net {
struct FtpMethodFlags;
}
namespace System::Net {
struct FtpOperation;
}
// Forward declare root types
namespace System::Net {
class FtpMethodInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::FtpMethodInfo);
// Dependencies System.Net.FtpMethodFlags, System.Net.FtpOperation, System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.FtpMethodInfo
class CORDL_TYPE FtpMethodInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field Flags, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_Flags, put = __cordl_internal_set_Flags)) ::System::Net::FtpMethodFlags Flags;

  /// @brief Field HttpCommand, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_HttpCommand, put = __cordl_internal_set_HttpCommand)) ::StringW HttpCommand;

  __declspec(property(get = get_IsCommandOnly)) bool IsCommandOnly;

  __declspec(property(get = get_IsDownload)) bool IsDownload;

  __declspec(property(get = get_IsUpload)) bool IsUpload;

  /// @brief Field Method, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Method, put = __cordl_internal_set_Method)) ::StringW Method;

  /// @brief Field Operation, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_Operation, put = __cordl_internal_set_Operation)) ::System::Net::FtpOperation Operation;

  __declspec(property(get = get_ShouldParseForResponseUri)) bool ShouldParseForResponseUri;

  /// @brief Field s_knownMethodInfo, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_knownMethodInfo, put = setStaticF_s_knownMethodInfo)) ::ArrayW<::System::Net::FtpMethodInfo*, ::Array<::System::Net::FtpMethodInfo*>*> s_knownMethodInfo;

  /// @brief Method GetMethodInfo, addr 0x44985b8, size 0x160, virtual false, abstract: false, final false
  static inline ::System::Net::FtpMethodInfo* GetMethodInfo(::StringW method);

  /// @brief Method HasFlag, addr 0x4496210, size 0x10, virtual false, abstract: false, final false
  inline bool HasFlag(::System::Net::FtpMethodFlags flags);

  static inline ::System::Net::FtpMethodInfo* New_ctor(::StringW method, ::System::Net::FtpOperation operation, ::System::Net::FtpMethodFlags flags, ::StringW httpCommand);

  constexpr ::System::Net::FtpMethodFlags const& __cordl_internal_get_Flags() const;

  constexpr ::System::Net::FtpMethodFlags& __cordl_internal_get_Flags();

  constexpr ::StringW const& __cordl_internal_get_HttpCommand() const;

  constexpr ::StringW& __cordl_internal_get_HttpCommand();

  constexpr ::StringW const& __cordl_internal_get_Method() const;

  constexpr ::StringW& __cordl_internal_get_Method();

  constexpr ::System::Net::FtpOperation const& __cordl_internal_get_Operation() const;

  constexpr ::System::Net::FtpOperation& __cordl_internal_get_Operation();

  constexpr void __cordl_internal_set_Flags(::System::Net::FtpMethodFlags value);

  constexpr void __cordl_internal_set_HttpCommand(::StringW value);

  constexpr void __cordl_internal_set_Method(::StringW value);

  constexpr void __cordl_internal_set_Operation(::System::Net::FtpOperation value);

  /// @brief Method .ctor, addr 0x4498574, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::StringW method, ::System::Net::FtpOperation operation, ::System::Net::FtpMethodFlags flags, ::StringW httpCommand);

  static inline ::ArrayW<::System::Net::FtpMethodInfo*, ::Array<::System::Net::FtpMethodInfo*>*> getStaticF_s_knownMethodInfo();

  /// @brief Method get_IsCommandOnly, addr 0x44963b0, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsCommandOnly();

  /// @brief Method get_IsDownload, addr 0x44971a4, size 0xc, virtual false, abstract: false, final false
  inline bool get_IsDownload();

  /// @brief Method get_IsUpload, addr 0x4497198, size 0xc, virtual false, abstract: false, final false
  inline bool get_IsUpload();

  /// @brief Method get_ShouldParseForResponseUri, addr 0x4494a44, size 0xc, virtual false, abstract: false, final false
  inline bool get_ShouldParseForResponseUri();

  static inline void setStaticF_s_knownMethodInfo(::ArrayW<::System::Net::FtpMethodInfo*, ::Array<::System::Net::FtpMethodInfo*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FtpMethodInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FtpMethodInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FtpMethodInfo(FtpMethodInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FtpMethodInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FtpMethodInfo(FtpMethodInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9565 };

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
static_assert(offsetof(::System::Net::FtpMethodInfo, ___Method) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpMethodInfo, ___Operation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpMethodInfo, ___Flags) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpMethodInfo, ___HttpCommand) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::FtpMethodInfo, 0x28>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::FtpMethodInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FtpMethodInfo*, "System.Net", "FtpMethodInfo");
