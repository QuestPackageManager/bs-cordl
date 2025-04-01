#pragma once
// IWYU pragma private; include "System/NotImplementedException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NotImplementedException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class NotImplementedException;
}
// Write type traits
MARK_REF_PTR_T(::System::NotImplementedException);
// Dependencies System.SystemException
namespace System {
// Is value type: false
// CS Name: System.NotImplementedException
class CORDL_TYPE NotImplementedException : public ::System::SystemException {
public:
  // Declarations
  static inline ::System::NotImplementedException* New_ctor();

  static inline ::System::NotImplementedException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::NotImplementedException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x3de93cc, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3de944c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3de9428, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NotImplementedException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NotImplementedException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NotImplementedException(NotImplementedException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NotImplementedException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NotImplementedException(NotImplementedException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2444 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::NotImplementedException, 0x90>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::NotImplementedException);
DEFINE_IL2CPP_ARG_TYPE(::System::NotImplementedException*, "System", "NotImplementedException");
