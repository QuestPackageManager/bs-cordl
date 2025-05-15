#pragma once
// IWYU pragma private; include "System/IO/IOException.hpp"
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
// Dependencies System.SystemException
namespace System::IO {
// Is value type: false
// CS Name: System.IO.IOException
class CORDL_TYPE IOException : public ::System::SystemException {
public:
  // Declarations
  static inline ::System::IO::IOException* New_ctor();

  static inline ::System::IO::IOException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::IO::IOException* New_ctor(::StringW message);

  static inline ::System::IO::IOException* New_ctor(::StringW message, int32_t hresult);

  static inline ::System::IO::IOException* New_ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x3d380f8, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3d374d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3d37484, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x3d38154, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, int32_t hresult);

  /// @brief Method .ctor, addr 0x3d3817c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IOException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IOException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IOException(IOException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IOException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IOException(IOException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3568 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::IOException, 0x90>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::IOException);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::IOException*, "System.IO", "IOException");
