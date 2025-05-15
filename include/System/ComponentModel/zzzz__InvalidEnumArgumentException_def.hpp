#pragma once
// IWYU pragma private; include "System/ComponentModel/InvalidEnumArgumentException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ArgumentException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InvalidEnumArgumentException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class InvalidEnumArgumentException;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::InvalidEnumArgumentException);
// Dependencies System.ArgumentException
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.InvalidEnumArgumentException
class CORDL_TYPE InvalidEnumArgumentException : public ::System::ArgumentException {
public:
  // Declarations
  static inline ::System::ComponentModel::InvalidEnumArgumentException* New_ctor();

  static inline ::System::ComponentModel::InvalidEnumArgumentException* New_ctor(::StringW argumentName, int32_t invalidValue, ::System::Type* enumClass);

  static inline ::System::ComponentModel::InvalidEnumArgumentException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::ComponentModel::InvalidEnumArgumentException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x4447e40, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4447e54, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(::StringW argumentName, int32_t invalidValue, ::System::Type* enumClass);

  /// @brief Method .ctor, addr 0x4447f38, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x4447e4c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvalidEnumArgumentException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InvalidEnumArgumentException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvalidEnumArgumentException(InvalidEnumArgumentException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvalidEnumArgumentException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvalidEnumArgumentException(InvalidEnumArgumentException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9355 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::InvalidEnumArgumentException, 0x98>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::InvalidEnumArgumentException);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::InvalidEnumArgumentException*, "System.ComponentModel", "InvalidEnumArgumentException");
