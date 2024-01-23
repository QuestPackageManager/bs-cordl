#pragma once
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
// Type: System::AppDomainUnloadedException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2481))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2524))
// CS Name: ::System::AppDomainUnloadedException*
class CORDL_TYPE AppDomainUnloadedException : public ::System::SystemException {
public:
  // Declarations
  static inline ::System::AppDomainUnloadedException* New_ctor();

  /// @brief Method .ctor, addr 0x25d129c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::AppDomainUnloadedException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x25d12f4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  // Ctor Parameters [CppParam { name: "", ty: "AppDomainUnloadedException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AppDomainUnloadedException(AppDomainUnloadedException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AppDomainUnloadedException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AppDomainUnloadedException(AppDomainUnloadedException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AppDomainUnloadedException();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::AppDomainUnloadedException, 0x90>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::AppDomainUnloadedException);
DEFINE_IL2CPP_ARG_TYPE(::System::AppDomainUnloadedException*, "System", "AppDomainUnloadedException");
