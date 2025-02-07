#pragma once
// IWYU pragma private; include "System/IndexOutOfRangeException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IndexOutOfRangeException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class IndexOutOfRangeException;
}
// Write type traits
MARK_REF_PTR_T(::System::IndexOutOfRangeException);
// Dependencies System.SystemException
namespace System {
// Is value type: false
// CS Name: System.IndexOutOfRangeException
class CORDL_TYPE IndexOutOfRangeException : public ::System::SystemException {
public:
  // Declarations
  static inline ::System::IndexOutOfRangeException* New_ctor();

  static inline ::System::IndexOutOfRangeException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::IndexOutOfRangeException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x3dec20c, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3dec28c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3dec268, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IndexOutOfRangeException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IndexOutOfRangeException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IndexOutOfRangeException(IndexOutOfRangeException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IndexOutOfRangeException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IndexOutOfRangeException(IndexOutOfRangeException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2424 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IndexOutOfRangeException, 0x90>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::IndexOutOfRangeException);
DEFINE_IL2CPP_ARG_TYPE(::System::IndexOutOfRangeException*, "System", "IndexOutOfRangeException");
