#pragma once
// IWYU pragma private; include "System/IO/DirectoryNotFoundException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__IOException_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DirectoryNotFoundException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::IO {
class DirectoryNotFoundException;
}
// Write type traits
MARK_REF_T(::System::IO::DirectoryNotFoundException*);
DEFINE_IL2CPP_CLASS(::System::IO::DirectoryNotFoundException*, "System.IO", "DirectoryNotFoundException");
// Dependencies System.IO.IOException
namespace System::IO {
// Is value type: false
// CS Name: System.IO.DirectoryNotFoundException
class CORDL_TYPE DirectoryNotFoundException : public ::System::IO::IOException {
public:
  // Declarations
  static inline ::System::IO::DirectoryNotFoundException* New_ctor();

  static inline ::System::IO::DirectoryNotFoundException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::IO::DirectoryNotFoundException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x5bf41e0, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5bf4264, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x5bf4240, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DirectoryNotFoundException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DirectoryNotFoundException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DirectoryNotFoundException(DirectoryNotFoundException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DirectoryNotFoundException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DirectoryNotFoundException(DirectoryNotFoundException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3838 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::IO::DirectoryNotFoundException) == 0x90, "Size mismatch!");

} // namespace System::IO
