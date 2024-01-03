#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IOException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::IO {
class IOException;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::IOException);
// Type: System.IO::IOException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2481))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3565))
// CS Name: ::System.IO::IOException*
class CORDL_TYPE IOException : public ::System::SystemException {
public:
  // Declarations
  static inline ::System::IO::IOException* New_ctor();

  /// @brief Method .ctor, addr 0x24fcc88, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::IO::IOException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x24fbff4, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  static inline ::System::IO::IOException* New_ctor(::StringW message, int32_t hresult);

  /// @brief Method .ctor, addr 0x24fcce4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, int32_t hresult);

  static inline ::System::IO::IOException* New_ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x24fcd0c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

  static inline ::System::IO::IOException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x24fc044, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  // Ctor Parameters [CppParam { name: "", ty: "IOException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IOException(IOException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IOException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IOException(IOException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IOException();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::IOException, 0x90>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::IOException);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::IOException*, "System.IO", "IOException");
