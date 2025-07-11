#pragma once
// IWYU pragma private; include "System/PlatformNotSupportedException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__NotSupportedException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PlatformNotSupportedException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class PlatformNotSupportedException;
}
// Write type traits
MARK_REF_PTR_T(::System::PlatformNotSupportedException);
// Dependencies System.NotSupportedException
namespace System {
// Is value type: false
// CS Name: System.PlatformNotSupportedException
class CORDL_TYPE PlatformNotSupportedException : public ::System::NotSupportedException {
public:
  // Declarations
  static inline ::System::PlatformNotSupportedException* New_ctor();

  static inline ::System::PlatformNotSupportedException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::PlatformNotSupportedException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x3dfbcc4, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3dfbd44, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3dfbd20, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformNotSupportedException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformNotSupportedException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformNotSupportedException(PlatformNotSupportedException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformNotSupportedException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformNotSupportedException(PlatformNotSupportedException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2459 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::PlatformNotSupportedException, 0x90>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::PlatformNotSupportedException);
DEFINE_IL2CPP_ARG_TYPE(::System::PlatformNotSupportedException*, "System", "PlatformNotSupportedException");
