#pragma once
// IWYU pragma private; include "System/RankException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RankException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class RankException;
}
// Write type traits
MARK_REF_PTR_T(::System::RankException);
// Dependencies System.SystemException
namespace System {
// Is value type: false
// CS Name: System.RankException
class CORDL_TYPE RankException : public ::System::SystemException {
public:
  // Declarations
  static inline ::System::RankException* New_ctor();

  static inline ::System::RankException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::RankException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x3dfc548, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3dfc5c0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3dfc5a0, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RankException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RankException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RankException(RankException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RankException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RankException(RankException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2461 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::RankException, 0x90>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::RankException);
DEFINE_IL2CPP_ARG_TYPE(::System::RankException*, "System", "RankException");
