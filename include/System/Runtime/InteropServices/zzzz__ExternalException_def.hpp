#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/ExternalException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExternalException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class ExternalException;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::ExternalException);
// Dependencies System.SystemException
namespace System::Runtime::InteropServices {
// Is value type: false
// CS Name: System.Runtime.InteropServices.ExternalException
class CORDL_TYPE ExternalException : public ::System::SystemException {
public:
  // Declarations
  __declspec(property(get = get_ErrorCode)) int32_t ErrorCode;

  static inline ::System::Runtime::InteropServices::ExternalException* New_ctor();

  static inline ::System::Runtime::InteropServices::ExternalException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Runtime::InteropServices::ExternalException* New_ctor(::StringW message);

  static inline ::System::Runtime::InteropServices::ExternalException* New_ctor(::StringW message, int32_t errorCode);

  /// @brief Method ToString, addr 0x3d0f078, size 0x1e0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x3d0efc0, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3d0f068, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3d0f01c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x3d0f040, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, int32_t errorCode);

  /// @brief Method get_ErrorCode, addr 0x3d0f070, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ErrorCode();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExternalException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExternalException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExternalException(ExternalException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExternalException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExternalException(ExternalException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3302 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::ExternalException, 0x90>, "Size mismatch!");

} // namespace System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::ExternalException);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::ExternalException*, "System.Runtime.InteropServices", "ExternalException");
