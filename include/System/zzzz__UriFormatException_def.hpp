#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__FormatException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UriFormatException)
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class UriFormatException;
}
// Write type traits
MARK_REF_PTR_T(::System::UriFormatException);
// Type: System::UriFormatException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::UriFormatException*
class CORDL_TYPE UriFormatException : public ::System::FormatException {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  static inline ::System::UriFormatException* New_ctor();

  static inline ::System::UriFormatException* New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  static inline ::System::UriFormatException* New_ctor(::StringW textString);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x2f7dbf8, size 0x8, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                       ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method .ctor, addr 0x2f7dbe8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2f7dbf0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method .ctor, addr 0x2f7bdc0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW textString);

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UriFormatException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UriFormatException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UriFormatException(UriFormatException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UriFormatException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UriFormatException(UriFormatException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::UriFormatException, 0x90>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::UriFormatException);
DEFINE_IL2CPP_ARG_TYPE(::System::UriFormatException*, "System", "UriFormatException");
