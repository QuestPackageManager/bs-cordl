#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MissingMemberException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MissingFieldException)
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
class MissingFieldException;
}
// Write type traits
MARK_REF_PTR_T(::System::MissingFieldException);
// Type: System::MissingFieldException
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2528))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2527))
// CS Name: ::System::MissingFieldException*
class CORDL_TYPE MissingFieldException : public ::System::MissingMemberException {
public:
  // Declarations
  __declspec(property(get = get_Message))::StringW Message;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  static inline ::System::MissingFieldException* New_ctor();

  /// @brief Method .ctor, addr 0x25d174c, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::MissingFieldException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x25d17cc, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  static inline ::System::MissingFieldException* New_ctor(::StringW className, ::StringW fieldName);

  /// @brief Method .ctor, addr 0x25d17f0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW className, ::StringW fieldName);

  static inline ::System::MissingFieldException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x25d1874, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_Message, addr 0x25d19fc, size 0x114, virtual true, abstract: false, final false
  inline ::StringW get_Message();

  // Ctor Parameters [CppParam { name: "", ty: "MissingFieldException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissingFieldException(MissingFieldException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissingFieldException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissingFieldException(MissingFieldException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissingFieldException();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::MissingFieldException, 0xa8>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::MissingFieldException);
DEFINE_IL2CPP_ARG_TYPE(::System::MissingFieldException*, "System", "MissingFieldException");
