#pragma once
// IWYU pragma private; include "System/DllNotFoundException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__TypeLoadException_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DllNotFoundException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class DllNotFoundException;
}
// Write type traits
MARK_REF_T(::System::DllNotFoundException*);
DEFINE_IL2CPP_CLASS(::System::DllNotFoundException*, "System", "DllNotFoundException");
// Dependencies System.TypeLoadException
namespace System {
// Is value type: false
// CS Name: System.DllNotFoundException
class CORDL_TYPE DllNotFoundException : public ::System::TypeLoadException {
public:
  // Declarations
  static inline ::System::DllNotFoundException* New_ctor();

  static inline ::System::DllNotFoundException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::DllNotFoundException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x5c2ce8c, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5c2cf10, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x5c2ceec, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DllNotFoundException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DllNotFoundException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DllNotFoundException(DllNotFoundException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DllNotFoundException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DllNotFoundException(DllNotFoundException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2375 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::DllNotFoundException) == 0xb0, "Size mismatch!");

} // namespace System
