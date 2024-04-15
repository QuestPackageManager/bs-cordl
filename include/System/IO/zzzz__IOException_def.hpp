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
// CS Name: ::System.IO::IOException*
class CORDL_TYPE IOException : public ::System::SystemException {
public:
  // Declarations
  static inline ::System::IO::IOException* New_ctor();

  static inline ::System::IO::IOException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::IO::IOException* New_ctor(::StringW message);

  static inline ::System::IO::IOException* New_ctor(::StringW message, int32_t hresult);

  static inline ::System::IO::IOException* New_ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x277c8c0, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x277bc7c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x277bc2c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x277c91c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, int32_t hresult);

  /// @brief Method .ctor, addr 0x277c944, size 0x24, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::IOException, 0x90>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::IOException);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::IOException*, "System.IO", "IOException");
