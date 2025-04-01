#pragma once
// IWYU pragma private; include "System/ExecutionEngineException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ExecutionEngineException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class ExecutionEngineException;
}
// Write type traits
MARK_REF_PTR_T(::System::ExecutionEngineException);
// Dependencies System.SystemException
namespace System {
// Is value type: false
// CS Name: System.ExecutionEngineException
class CORDL_TYPE ExecutionEngineException : public ::System::SystemException {
public:
  // Declarations
  static inline ::System::ExecutionEngineException* New_ctor();

  static inline ::System::ExecutionEngineException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::ExecutionEngineException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x3dd0124, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3dd01a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3dd0180, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExecutionEngineException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExecutionEngineException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExecutionEngineException(ExecutionEngineException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExecutionEngineException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExecutionEngineException(ExecutionEngineException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2381 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ExecutionEngineException, 0x90>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::ExecutionEngineException);
DEFINE_IL2CPP_ARG_TYPE(::System::ExecutionEngineException*, "System", "ExecutionEngineException");
