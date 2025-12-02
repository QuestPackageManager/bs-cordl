#pragma once
// IWYU pragma private; include "System/NotSupportedException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NotSupportedException)
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
namespace System {
class NotSupportedException;
}
// Write type traits
MARK_REF_PTR_T(::System::NotSupportedException);
// Dependencies System.SystemException
namespace System {
// Is value type: false
// CS Name: System.NotSupportedException
class CORDL_TYPE NotSupportedException : public ::System::SystemException {
public:
  // Declarations
  static inline ::System::NotSupportedException* New_ctor();

  static inline ::System::NotSupportedException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::NotSupportedException* New_ctor(::StringW message);

  static inline ::System::NotSupportedException* New_ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x5a349f0, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5a34a74, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x5a2d324, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x5a34a50, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NotSupportedException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NotSupportedException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NotSupportedException(NotSupportedException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NotSupportedException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NotSupportedException(NotSupportedException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2450 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::NotSupportedException, 0x90>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::NotSupportedException);
DEFINE_IL2CPP_ARG_TYPE(::System::NotSupportedException*, "System", "NotSupportedException");
