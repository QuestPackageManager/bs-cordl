#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/ErrorWrapper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ErrorWrapper)
// Forward declare root types
namespace System::Runtime::InteropServices {
class ErrorWrapper;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::ErrorWrapper);
// Dependencies System.Object
namespace System::Runtime::InteropServices {
// Is value type: false
// CS Name: System.Runtime.InteropServices.ErrorWrapper
class CORDL_TYPE ErrorWrapper : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_ErrorCode, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ErrorCode, put = __cordl_internal_set_m_ErrorCode)) int32_t m_ErrorCode;

  constexpr int32_t const& __cordl_internal_get_m_ErrorCode() const;

  constexpr int32_t& __cordl_internal_get_m_ErrorCode();

  constexpr void __cordl_internal_set_m_ErrorCode(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ErrorWrapper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ErrorWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ErrorWrapper(ErrorWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ErrorWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ErrorWrapper(ErrorWrapper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3324 };

  /// @brief Field m_ErrorCode, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_ErrorCode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::InteropServices::ErrorWrapper, ___m_ErrorCode) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::ErrorWrapper, 0x18>, "Size mismatch!");

} // namespace System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::ErrorWrapper);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::ErrorWrapper*, "System.Runtime.InteropServices", "ErrorWrapper");
