#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/COMException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__ExternalException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(COMException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class COMException;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::COMException);
// Type: System.Runtime.InteropServices::COMException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::InteropServices {
// Is value type: false
// CS Name: ::System.Runtime.InteropServices::COMException*
class CORDL_TYPE COMException : public ::System::Runtime::InteropServices::ExternalException {
public:
  // Declarations
  static inline ::System::Runtime::InteropServices::COMException* New_ctor();

  static inline ::System::Runtime::InteropServices::COMException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method ToString, addr 0x2857b48, size 0x1e4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x2857b3c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2857b40, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr COMException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "COMException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  COMException(COMException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "COMException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  COMException(COMException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::COMException, 0x90>, "Size mismatch!");

} // namespace System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::COMException);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::COMException*, "System.Runtime.InteropServices", "COMException");
