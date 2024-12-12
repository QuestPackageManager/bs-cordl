#pragma once
// IWYU pragma private; include "System/Data/NoNullAllowedException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__DataException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NoNullAllowedException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Data {
class NoNullAllowedException;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::NoNullAllowedException);
// Dependencies System.Data.DataException
namespace System::Data {
// Is value type: false
// CS Name: System.Data.NoNullAllowedException
class CORDL_TYPE NoNullAllowedException : public ::System::Data::DataException {
public:
  // Declarations
  static inline ::System::Data::NoNullAllowedException* New_ctor();

  static inline ::System::Data::NoNullAllowedException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Data::NoNullAllowedException* New_ctor(::StringW s);

  /// @brief Method .ctor, addr 0x413cb00, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x413caf8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x413cb5c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW s);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoNullAllowedException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoNullAllowedException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoNullAllowedException(NoNullAllowedException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoNullAllowedException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoNullAllowedException(NoNullAllowedException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11343 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::NoNullAllowedException, 0x90>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::NoNullAllowedException);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::NoNullAllowedException*, "System.Data", "NoNullAllowedException");
