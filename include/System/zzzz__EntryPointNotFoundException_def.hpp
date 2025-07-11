#pragma once
// IWYU pragma private; include "System/EntryPointNotFoundException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__TypeLoadException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EntryPointNotFoundException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class EntryPointNotFoundException;
}
// Write type traits
MARK_REF_PTR_T(::System::EntryPointNotFoundException);
// Dependencies System.TypeLoadException
namespace System {
// Is value type: false
// CS Name: System.EntryPointNotFoundException
class CORDL_TYPE EntryPointNotFoundException : public ::System::TypeLoadException {
public:
  // Declarations
  static inline ::System::EntryPointNotFoundException* New_ctor();

  static inline ::System::EntryPointNotFoundException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::EntryPointNotFoundException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x3dd4ab4, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3dd4b34, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3dd4b10, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EntryPointNotFoundException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EntryPointNotFoundException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EntryPointNotFoundException(EntryPointNotFoundException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EntryPointNotFoundException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EntryPointNotFoundException(EntryPointNotFoundException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2377 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::EntryPointNotFoundException, 0xb0>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::EntryPointNotFoundException);
DEFINE_IL2CPP_ARG_TYPE(::System::EntryPointNotFoundException*, "System", "EntryPointNotFoundException");
