#pragma once
// IWYU pragma private; include "System\Data\RowNotInTableException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__DataException_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RowNotInTableException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Data {
class RowNotInTableException;
}
// Write type traits
MARK_REF_T(::System::Data::RowNotInTableException*);
DEFINE_IL2CPP_CLASS(::System::Data::RowNotInTableException*, "System.Data", "RowNotInTableException");
// Dependencies System.Data.DataException
namespace System::Data {
// Is value type: false
// CS Name: System.Data.RowNotInTableException
class CORDL_TYPE RowNotInTableException : public ::System::Data::DataException {
public:
  // Declarations
  static inline ::System::Data::RowNotInTableException* New_ctor();

  static inline ::System::Data::RowNotInTableException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Data::RowNotInTableException* New_ctor(::StringW s);

  /// @brief Method .ctor, addr 0x60057dc, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x60057d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x600583c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW s);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RowNotInTableException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RowNotInTableException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RowNotInTableException(RowNotInTableException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RowNotInTableException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RowNotInTableException(RowNotInTableException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13739 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Data::RowNotInTableException) == 0x90, "Size mismatch!");

} // namespace System::Data
