#pragma once
// IWYU pragma private; include "System/MissingMethodException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MissingMemberException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MissingMethodException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class MissingMethodException;
}
// Write type traits
MARK_REF_PTR_T(::System::MissingMethodException);
// Dependencies System.MissingMemberException
namespace System {
// Is value type: false
// CS Name: System.MissingMethodException
class CORDL_TYPE MissingMethodException : public ::System::MissingMemberException {
public:
  // Declarations
  __declspec(property(get = get_Message)) ::StringW Message;

  static inline ::System::MissingMethodException* New_ctor();

  static inline ::System::MissingMethodException* New_ctor(::StringW className, ::StringW methodName);

  static inline ::System::MissingMethodException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::MissingMethodException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x3dee05c, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3dee0dc, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW className, ::StringW methodName);

  /// @brief Method .ctor, addr 0x3dee108, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3dee0b8, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method get_Message, addr 0x3dee110, size 0x128, virtual true, abstract: false, final false
  inline ::StringW get_Message();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissingMethodException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissingMethodException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissingMethodException(MissingMethodException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissingMethodException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissingMethodException(MissingMethodException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2441 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::MissingMethodException, 0xa8>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::MissingMethodException);
DEFINE_IL2CPP_ARG_TYPE(::System::MissingMethodException*, "System", "MissingMethodException");
