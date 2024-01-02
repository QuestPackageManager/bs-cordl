#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TypeName)
namespace System {
template <typename T> class IEquatable_1;
}
// Forward declare root types
namespace System {
class TypeName;
}
// Write type traits
MARK_REF_PTR_T(::System::TypeName);
// Type: System::TypeName
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2627))
// CS Name: ::System::TypeName*
class CORDL_TYPE TypeName {
public:
  // Declarations
  __declspec(property(get = get_DisplayName))::StringW DisplayName;

  /// @brief Convert operator to "::System::IEquatable_1<::System::TypeName*>"
  constexpr operator ::System::IEquatable_1<::System::TypeName*>*() noexcept;

  /// @brief Method get_DisplayName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_DisplayName();

  // Ctor Parameters [CppParam { name: "", ty: "TypeName", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeName(TypeName&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeName", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeName(TypeName const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
NEED_NO_BOX(::System::TypeName);
DEFINE_IL2CPP_ARG_TYPE(::System::TypeName*, "System", "TypeName");
