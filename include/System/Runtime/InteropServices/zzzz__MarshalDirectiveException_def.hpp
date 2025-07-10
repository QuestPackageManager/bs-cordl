#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/MarshalDirectiveException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MarshalDirectiveException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class MarshalDirectiveException;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::MarshalDirectiveException);
// Dependencies System.SystemException
namespace System::Runtime::InteropServices {
// Is value type: false
// CS Name: System.Runtime.InteropServices.MarshalDirectiveException
class CORDL_TYPE MarshalDirectiveException : public ::System::SystemException {
public:
  // Declarations
  static inline ::System::Runtime::InteropServices::MarshalDirectiveException* New_ctor();

  static inline ::System::Runtime::InteropServices::MarshalDirectiveException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                        ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Runtime::InteropServices::MarshalDirectiveException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x3d13dfc, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3d13e7c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3d13e58, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MarshalDirectiveException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MarshalDirectiveException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MarshalDirectiveException(MarshalDirectiveException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MarshalDirectiveException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MarshalDirectiveException(MarshalDirectiveException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3304 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::MarshalDirectiveException, 0x90>, "Size mismatch!");

} // namespace System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::MarshalDirectiveException);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::MarshalDirectiveException*, "System.Runtime.InteropServices", "MarshalDirectiveException");
