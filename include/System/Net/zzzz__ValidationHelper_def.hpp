#pragma once
// IWYU pragma private; include "System/Net/ValidationHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ValidationHelper)
// Forward declare root types
namespace System::Net {
class ValidationHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::ValidationHelper);
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.ValidationHelper
class CORDL_TYPE ValidationHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Field EmptyArray, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_EmptyArray, put = setStaticF_EmptyArray)) ::ArrayW<::StringW, ::Array<::StringW>*> EmptyArray;

  /// @brief Field InvalidMethodChars, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_InvalidMethodChars, put = setStaticF_InvalidMethodChars)) ::ArrayW<char16_t, ::Array<char16_t>*> InvalidMethodChars;

  /// @brief Field InvalidParamChars, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_InvalidParamChars, put = setStaticF_InvalidParamChars)) ::ArrayW<char16_t, ::Array<char16_t>*> InvalidParamChars;

  /// @brief Method IsBlankString, addr 0x44a11b4, size 0x1c, virtual false, abstract: false, final false
  static inline bool IsBlankString(::StringW stringValue);

  /// @brief Method MakeStringNull, addr 0x449e8b0, size 0x14, virtual false, abstract: false, final false
  static inline ::StringW MakeStringNull(::StringW stringValue);

  /// @brief Method ValidateTcpPort, addr 0x44a11d0, size 0xc, virtual false, abstract: false, final false
  static inline bool ValidateTcpPort(int32_t port);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_EmptyArray();

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_InvalidMethodChars();

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_InvalidParamChars();

  static inline void setStaticF_EmptyArray(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_InvalidMethodChars(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline void setStaticF_InvalidParamChars(::ArrayW<char16_t, ::Array<char16_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ValidationHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ValidationHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ValidationHelper(ValidationHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ValidationHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ValidationHelper(ValidationHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9596 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::ValidationHelper, 0x10>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::ValidationHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ValidationHelper*, "System.Net", "ValidationHelper");
