#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TypeIdentifier)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class TypeName;
}
// Forward declare root types
namespace System {
class TypeIdentifier;
}
// Write type traits
MARK_REF_PTR_T(::System::TypeIdentifier);
// Type: System::TypeIdentifier
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2628))
// CS Name: ::System::TypeIdentifier*
class CORDL_TYPE TypeIdentifier {
public:
  // Declarations
  __declspec(property(get = get_InternalName))::StringW InternalName;

  /// @brief Convert operator to "::System::TypeName"
  constexpr operator ::System::TypeName*() noexcept;

  /// @brief Convert to "::System::TypeName"
  constexpr ::System::TypeName* i___System__TypeName() noexcept;

  /// @brief Convert operator to "::System::IEquatable_1<::System::TypeName*>"
  constexpr operator ::System::IEquatable_1<::System::TypeName*>*() noexcept;

  /// @brief Convert to "::System::IEquatable_1<::System::TypeName*>"
  constexpr ::System::IEquatable_1<::System::TypeName*>* i___System__IEquatable_1___System__TypeName__() noexcept;

  /// @brief Method get_InternalName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_InternalName();

  // Ctor Parameters [CppParam { name: "", ty: "TypeIdentifier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeIdentifier(TypeIdentifier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeIdentifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeIdentifier(TypeIdentifier const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
NEED_NO_BOX(::System::TypeIdentifier);
DEFINE_IL2CPP_ARG_TYPE(::System::TypeIdentifier*, "System", "TypeIdentifier");
