#pragma once
// IWYU pragma private; include "System/AppDomainUnloadedException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
CORDL_MODULE_EXPORT(AppDomainUnloadedException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class AppDomainUnloadedException;
}
// Write type traits
MARK_REF_PTR_T(::System::AppDomainUnloadedException);
// Dependencies System.SystemException
namespace System {
// Is value type: false
// CS Name: System.AppDomainUnloadedException
class CORDL_TYPE AppDomainUnloadedException : public ::System::SystemException {
public:
  // Declarations
  static inline ::System::AppDomainUnloadedException* New_ctor();

  static inline ::System::AppDomainUnloadedException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x5ab9e14, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5ab9e70, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AppDomainUnloadedException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AppDomainUnloadedException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AppDomainUnloadedException(AppDomainUnloadedException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AppDomainUnloadedException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AppDomainUnloadedException(AppDomainUnloadedException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2531 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::AppDomainUnloadedException, 0x90>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::AppDomainUnloadedException);
DEFINE_IL2CPP_ARG_TYPE(::System::AppDomainUnloadedException*, "System", "AppDomainUnloadedException");
