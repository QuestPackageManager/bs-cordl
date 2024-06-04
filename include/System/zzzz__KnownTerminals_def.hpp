#pragma once
// IWYU pragma private; include "System/KnownTerminals.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KnownTerminals)
// Forward declare root types
namespace System {
class KnownTerminals;
}
// Write type traits
MARK_REF_PTR_T(::System::KnownTerminals);
// Type: System::KnownTerminals
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::KnownTerminals*
class CORDL_TYPE KnownTerminals : public ::System::Object {
public:
  // Declarations
  /// @brief Method get_ansi, addr 0x299a938, size 0x70, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_ansi();

  /// @brief Method get_linux, addr 0x299a858, size 0x70, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_linux();

  /// @brief Method get_xterm, addr 0x299a8c8, size 0x70, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_xterm();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KnownTerminals();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KnownTerminals", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KnownTerminals(KnownTerminals&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KnownTerminals", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KnownTerminals(KnownTerminals const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::KnownTerminals, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::KnownTerminals);
DEFINE_IL2CPP_ARG_TYPE(::System::KnownTerminals*, "System", "KnownTerminals");
