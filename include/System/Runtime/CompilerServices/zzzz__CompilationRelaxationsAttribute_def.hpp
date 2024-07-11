#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/CompilationRelaxationsAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CompilationRelaxationsAttribute)
namespace System::Runtime::CompilerServices {
struct CompilationRelaxations;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class CompilationRelaxationsAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::CompilationRelaxationsAttribute);
// Type: System.Runtime.CompilerServices::CompilationRelaxationsAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: ::System.Runtime.CompilerServices::CompilationRelaxationsAttribute*
class CORDL_TYPE CompilationRelaxationsAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_CompilationRelaxations)) int32_t CompilationRelaxations;

  /// @brief Field m_relaxations, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_relaxations, put = __cordl_internal_set_m_relaxations)) int32_t m_relaxations;

  static inline ::System::Runtime::CompilerServices::CompilationRelaxationsAttribute* New_ctor(::System::Runtime::CompilerServices::CompilationRelaxations relaxations);

  static inline ::System::Runtime::CompilerServices::CompilationRelaxationsAttribute* New_ctor(int32_t relaxations);

  constexpr int32_t const& __cordl_internal_get_m_relaxations() const;

  constexpr int32_t& __cordl_internal_get_m_relaxations();

  constexpr void __cordl_internal_set_m_relaxations(int32_t value);

  /// @brief Method .ctor, addr 0x288c64c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::CompilerServices::CompilationRelaxations relaxations);

  /// @brief Method .ctor, addr 0x288c624, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t relaxations);

  /// @brief Method get_CompilationRelaxations, addr 0x288c674, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_CompilationRelaxations();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompilationRelaxationsAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CompilationRelaxationsAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompilationRelaxationsAttribute(CompilationRelaxationsAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompilationRelaxationsAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompilationRelaxationsAttribute(CompilationRelaxationsAttribute const&) = delete;

  /// @brief Field m_relaxations, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_relaxations;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::CompilationRelaxationsAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::CompilationRelaxationsAttribute, ___m_relaxations) == 0x10, "Offset mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::CompilationRelaxationsAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::CompilationRelaxationsAttribute*, "System.Runtime.CompilerServices", "CompilationRelaxationsAttribute");
