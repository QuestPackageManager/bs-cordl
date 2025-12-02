#pragma once
// IWYU pragma private; include "GlobalNamespace/StringSignal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GenericSignal_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StringSignal)
// Forward declare root types
namespace GlobalNamespace {
class StringSignal;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StringSignal);
// Dependencies GenericSignal`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: StringSignal
class CORDL_TYPE StringSignal : public ::GlobalNamespace::GenericSignal_1<::StringW> {
public:
  // Declarations
  static inline ::GlobalNamespace::StringSignal* New_ctor();

  /// @brief Method .ctor, addr 0x563f908, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StringSignal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StringSignal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StringSignal(StringSignal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StringSignal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StringSignal(StringSignal const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20074 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StringSignal, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StringSignal);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StringSignal*, "", "StringSignal");
