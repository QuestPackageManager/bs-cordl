#pragma once
// IWYU pragma private; include "System/PointerSpec.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PointerSpec)
namespace System::Text {
class StringBuilder;
}
namespace System {
class ModifierSpec;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class PointerSpec;
}
// Write type traits
MARK_REF_PTR_T(::System::PointerSpec);
// Type: System::PointerSpec
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::PointerSpec*
class CORDL_TYPE PointerSpec : public ::System::Object {
public:
  // Declarations
  /// @brief Field pointer_level, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_pointer_level, put = __cordl_internal_set_pointer_level)) int32_t pointer_level;

  /// @brief Convert operator to "::System::ModifierSpec"
  constexpr operator ::System::ModifierSpec*() noexcept;

  /// @brief Method Append, addr 0x3dcd274, size 0x28, virtual true, abstract: false, final true
  inline ::System::Text::StringBuilder* Append(::System::Text::StringBuilder* sb);

  static inline ::System::PointerSpec* New_ctor(int32_t pointer_level);

  /// @brief Method Resolve, addr 0x3dcd220, size 0x54, virtual true, abstract: false, final true
  inline ::System::Type* Resolve(::System::Type* type);

  /// @brief Method ToString, addr 0x3dcd29c, size 0x70, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr int32_t const& __cordl_internal_get_pointer_level() const;

  constexpr int32_t& __cordl_internal_get_pointer_level();

  constexpr void __cordl_internal_set_pointer_level(int32_t value);

  /// @brief Method .ctor, addr 0x3dcd1f8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t pointer_level);

  /// @brief Convert to "::System::ModifierSpec"
  constexpr ::System::ModifierSpec* i___System__ModifierSpec() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerSpec();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerSpec", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerSpec(PointerSpec&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerSpec", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerSpec(PointerSpec const&) = delete;

  /// @brief Field pointer_level, offset: 0x10, size: 0x4, def value: None
  int32_t ___pointer_level;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2637 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::PointerSpec, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::PointerSpec, ___pointer_level) == 0x10, "Offset mismatch!");

} // namespace System
NEED_NO_BOX(::System::PointerSpec);
DEFINE_IL2CPP_ARG_TYPE(::System::PointerSpec*, "System", "PointerSpec");
