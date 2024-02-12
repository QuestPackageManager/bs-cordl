#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ArgumentException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ArgumentNullException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class ArgumentNullException;
}
// Write type traits
MARK_REF_PTR_T(::System::ArgumentNullException);
// Type: System::ArgumentNullException
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2344))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2345))
// CS Name: ::System::ArgumentNullException*
class CORDL_TYPE ArgumentNullException : public ::System::ArgumentException {
public:
  // Declarations
  static inline ::System::ArgumentNullException* New_ctor();

  /// @brief Method .ctor, addr 0x2542578, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::ArgumentNullException* New_ctor(::StringW paramName);

  /// @brief Method .ctor, addr 0x253ad18, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::StringW paramName);

  static inline ::System::ArgumentNullException* New_ctor(::StringW paramName, ::StringW message);

  /// @brief Method .ctor, addr 0x25425d4, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::StringW paramName, ::StringW message);

  static inline ::System::ArgumentNullException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x254260c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  // Ctor Parameters [CppParam { name: "", ty: "ArgumentNullException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArgumentNullException(ArgumentNullException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArgumentNullException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArgumentNullException(ArgumentNullException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArgumentNullException();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ArgumentNullException, 0x98>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::ArgumentNullException);
DEFINE_IL2CPP_ARG_TYPE(::System::ArgumentNullException*, "System", "ArgumentNullException");
