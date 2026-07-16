#pragma once
// IWYU pragma private; include "System/Data/ConstraintException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__DataException_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ConstraintException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Data {
class ConstraintException;
}
// Write type traits
MARK_REF_T(::System::Data::ConstraintException*);
DEFINE_IL2CPP_CLASS(::System::Data::ConstraintException*, "System.Data", "ConstraintException");
// Dependencies System.Data.DataException
namespace System::Data {
// Is value type: false
// CS Name: System.Data.ConstraintException
class CORDL_TYPE ConstraintException : public ::System::Data::DataException {
public:
  // Declarations
  static inline ::System::Data::ConstraintException* New_ctor();

  static inline ::System::Data::ConstraintException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Data::ConstraintException* New_ctor(::StringW s);

  /// @brief Method .ctor, addr 0x5fffbf0, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5fffbe8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x5fffc50, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW s);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConstraintException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConstraintException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConstraintException(ConstraintException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConstraintException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConstraintException(ConstraintException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13705 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Data::ConstraintException) == 0x90, "Size mismatch!");

} // namespace System::Data
