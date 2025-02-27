#pragma once
// IWYU pragma private; include "BGLib/Polyglot/TsvReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TsvReader)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace BGLib::Polyglot {
class TsvReader;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::Polyglot::TsvReader);
// Dependencies System.Object
namespace BGLib::Polyglot {
// Is value type: false
// CS Name: BGLib.Polyglot.TsvReader
class CORDL_TYPE TsvReader : public ::System::Object {
public:
  // Declarations
  static inline ::BGLib::Polyglot::TsvReader* New_ctor();

  /// @brief Method Parse, addr 0x22b0e64, size 0x1a4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::StringW>*>* Parse(::StringW src);

  /// @brief Method .ctor, addr 0x22b1008, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TsvReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TsvReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TsvReader(TsvReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TsvReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TsvReader(TsvReader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18047 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::Polyglot::TsvReader, 0x10>, "Size mismatch!");

} // namespace BGLib::Polyglot
NEED_NO_BOX(::BGLib::Polyglot::TsvReader);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::Polyglot::TsvReader*, "BGLib.Polyglot", "TsvReader");
