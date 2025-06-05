#pragma once
// IWYU pragma private; include "System/Net/HeaderInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HeaderInfo)
namespace System::Net {
class HeaderParser;
}
// Forward declare root types
namespace System::Net {
class HeaderInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::HeaderInfo);
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.HeaderInfo
class CORDL_TYPE HeaderInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field AllowMultiValues, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_AllowMultiValues, put = __cordl_internal_set_AllowMultiValues)) bool AllowMultiValues;

  /// @brief Field HeaderName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_HeaderName, put = __cordl_internal_set_HeaderName)) ::StringW HeaderName;

  /// @brief Field IsRequestRestricted, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_IsRequestRestricted, put = __cordl_internal_set_IsRequestRestricted)) bool IsRequestRestricted;

  /// @brief Field IsResponseRestricted, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_IsResponseRestricted, put = __cordl_internal_set_IsResponseRestricted)) bool IsResponseRestricted;

  /// @brief Field Parser, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Parser, put = __cordl_internal_set_Parser)) ::System::Net::HeaderParser* Parser;

  static inline ::System::Net::HeaderInfo* New_ctor(::StringW name, bool requestRestricted, bool responseRestricted, bool multi, ::System::Net::HeaderParser* p);

  constexpr bool const& __cordl_internal_get_AllowMultiValues() const;

  constexpr bool& __cordl_internal_get_AllowMultiValues();

  constexpr ::StringW const& __cordl_internal_get_HeaderName() const;

  constexpr ::StringW& __cordl_internal_get_HeaderName();

  constexpr bool const& __cordl_internal_get_IsRequestRestricted() const;

  constexpr bool& __cordl_internal_get_IsRequestRestricted();

  constexpr bool const& __cordl_internal_get_IsResponseRestricted() const;

  constexpr bool& __cordl_internal_get_IsResponseRestricted();

  constexpr ::System::Net::HeaderParser* const& __cordl_internal_get_Parser() const;

  constexpr ::System::Net::HeaderParser*& __cordl_internal_get_Parser();

  constexpr void __cordl_internal_set_AllowMultiValues(bool value);

  constexpr void __cordl_internal_set_HeaderName(::StringW value);

  constexpr void __cordl_internal_set_IsRequestRestricted(bool value);

  constexpr void __cordl_internal_set_IsResponseRestricted(bool value);

  constexpr void __cordl_internal_set_Parser(::System::Net::HeaderParser* value);

  /// @brief Method .ctor, addr 0x44a8ce0, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, bool requestRestricted, bool responseRestricted, bool multi, ::System::Net::HeaderParser* p);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HeaderInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HeaderInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HeaderInfo(HeaderInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HeaderInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HeaderInfo(HeaderInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9623 };

  /// @brief Field IsRequestRestricted, offset: 0x10, size: 0x1, def value: None
  bool ___IsRequestRestricted;

  /// @brief Field IsResponseRestricted, offset: 0x11, size: 0x1, def value: None
  bool ___IsResponseRestricted;

  /// @brief Field Parser, offset: 0x18, size: 0x8, def value: None
  ::System::Net::HeaderParser* ___Parser;

  /// @brief Field HeaderName, offset: 0x20, size: 0x8, def value: None
  ::StringW ___HeaderName;

  /// @brief Field AllowMultiValues, offset: 0x28, size: 0x1, def value: None
  bool ___AllowMultiValues;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::HeaderInfo, ___IsRequestRestricted) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::HeaderInfo, ___IsResponseRestricted) == 0x11, "Offset mismatch!");

static_assert(offsetof(::System::Net::HeaderInfo, ___Parser) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::HeaderInfo, ___HeaderName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::HeaderInfo, ___AllowMultiValues) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::HeaderInfo, 0x30>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::HeaderInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HeaderInfo*, "System.Net", "HeaderInfo");
