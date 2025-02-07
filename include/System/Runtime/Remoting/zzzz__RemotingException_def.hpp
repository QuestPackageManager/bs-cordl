#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/RemotingException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RemotingException)
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
namespace System::Runtime::Remoting {
class RemotingException;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::RemotingException);
// Dependencies System.SystemException
namespace System::Runtime::Remoting {
// Is value type: false
// CS Name: System.Runtime.Remoting.RemotingException
class CORDL_TYPE RemotingException : public ::System::SystemException {
public:
  // Declarations
  static inline ::System::Runtime::Remoting::RemotingException* New_ctor();

  static inline ::System::Runtime::Remoting::RemotingException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Runtime::Remoting::RemotingException* New_ctor(::StringW message);

  static inline ::System::Runtime::Remoting::RemotingException* New_ctor(::StringW message, ::System::Exception* InnerException);

  /// @brief Method .ctor, addr 0x3cd3eb8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3cd3ec8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3cd3ec0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x3cd3ed0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* InnerException);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RemotingException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RemotingException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RemotingException(RemotingException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RemotingException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RemotingException(RemotingException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3068 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::RemotingException, 0x90>, "Size mismatch!");

} // namespace System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::RemotingException);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::RemotingException*, "System.Runtime.Remoting", "RemotingException");
