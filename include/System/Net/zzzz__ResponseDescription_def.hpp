#pragma once
// IWYU pragma private; include "System/Net/ResponseDescription.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ResponseDescription)
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace System::Net {
class ResponseDescription;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::ResponseDescription);
// Type: System.Net::ResponseDescription
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::System.Net::ResponseDescription*
class CORDL_TYPE ResponseDescription : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_InvalidStatusCode)) bool InvalidStatusCode;

  /// @brief Field Multiline, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_Multiline, put = __cordl_internal_set_Multiline)) bool Multiline;

  __declspec(property(get = get_PermanentFailure)) bool PermanentFailure;

  __declspec(property(get = get_PositiveCompletion)) bool PositiveCompletion;

  __declspec(property(get = get_PositiveIntermediate)) bool PositiveIntermediate;

  /// @brief Field Status, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_Status, put = __cordl_internal_set_Status)) int32_t Status;

  /// @brief Field StatusBuffer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_StatusBuffer, put = __cordl_internal_set_StatusBuffer)) ::System::Text::StringBuilder* StatusBuffer;

  /// @brief Field StatusCodeString, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_StatusCodeString, put = __cordl_internal_set_StatusCodeString)) ::StringW StatusCodeString;

  /// @brief Field StatusDescription, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_StatusDescription, put = __cordl_internal_set_StatusDescription)) ::StringW StatusDescription;

  __declspec(property(get = get_TransientFailure)) bool TransientFailure;

  static inline ::System::Net::ResponseDescription* New_ctor();

  constexpr bool const& __cordl_internal_get_Multiline() const;

  constexpr bool& __cordl_internal_get_Multiline();

  constexpr int32_t const& __cordl_internal_get_Status() const;

  constexpr int32_t& __cordl_internal_get_Status();

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get_StatusBuffer();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __cordl_internal_get_StatusBuffer() const;

  constexpr ::StringW const& __cordl_internal_get_StatusCodeString() const;

  constexpr ::StringW& __cordl_internal_get_StatusCodeString();

  constexpr ::StringW const& __cordl_internal_get_StatusDescription() const;

  constexpr ::StringW& __cordl_internal_get_StatusDescription();

  constexpr void __cordl_internal_set_Multiline(bool value);

  constexpr void __cordl_internal_set_Status(int32_t value);

  constexpr void __cordl_internal_set_StatusBuffer(::System::Text::StringBuilder* value);

  constexpr void __cordl_internal_set_StatusCodeString(::StringW value);

  constexpr void __cordl_internal_set_StatusDescription(::StringW value);

  /// @brief Method .ctor, addr 0x4419fc8, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_InvalidStatusCode, addr 0x4419fb4, size 0x14, virtual false, abstract: false, final false
  inline bool get_InvalidStatusCode();

  /// @brief Method get_PermanentFailure, addr 0x4419fa0, size 0x14, virtual false, abstract: false, final false
  inline bool get_PermanentFailure();

  /// @brief Method get_PositiveCompletion, addr 0x4419f78, size 0x14, virtual false, abstract: false, final false
  inline bool get_PositiveCompletion();

  /// @brief Method get_PositiveIntermediate, addr 0x4419f64, size 0x14, virtual false, abstract: false, final false
  inline bool get_PositiveIntermediate();

  /// @brief Method get_TransientFailure, addr 0x4419f8c, size 0x14, virtual false, abstract: false, final false
  inline bool get_TransientFailure();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResponseDescription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResponseDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResponseDescription(ResponseDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResponseDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResponseDescription(ResponseDescription const&) = delete;

  /// @brief Field Multiline, offset: 0x10, size: 0x1, def value: None
  bool ___Multiline;

  /// @brief Field Status, offset: 0x14, size: 0x4, def value: None
  int32_t ___Status;

  /// @brief Field StatusDescription, offset: 0x18, size: 0x8, def value: None
  ::StringW ___StatusDescription;

  /// @brief Field StatusBuffer, offset: 0x20, size: 0x8, def value: None
  ::System::Text::StringBuilder* ___StatusBuffer;

  /// @brief Field StatusCodeString, offset: 0x28, size: 0x8, def value: None
  ::StringW ___StatusCodeString;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9523 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::ResponseDescription, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Net::ResponseDescription, ___Multiline) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::ResponseDescription, ___Status) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Net::ResponseDescription, ___StatusDescription) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::ResponseDescription, ___StatusBuffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::ResponseDescription, ___StatusCodeString) == 0x28, "Offset mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::ResponseDescription);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ResponseDescription*, "System.Net", "ResponseDescription");
