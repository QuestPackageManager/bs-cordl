#pragma once
// IWYU pragma private; include "System/Threading/LockRecursionException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LockRecursionException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Threading {
class LockRecursionException;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::LockRecursionException);
// Dependencies System.Exception
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.LockRecursionException
class CORDL_TYPE LockRecursionException : public ::System::Exception {
public:
  // Declarations
  static inline ::System::Threading::LockRecursionException* New_ctor();

  static inline ::System::Threading::LockRecursionException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Threading::LockRecursionException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x3e4ed78, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3e4ee38, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3e4edd0, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LockRecursionException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LockRecursionException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LockRecursionException(LockRecursionException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LockRecursionException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LockRecursionException(LockRecursionException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2667 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::LockRecursionException, 0x90>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::LockRecursionException);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::LockRecursionException*, "System.Threading", "LockRecursionException");
