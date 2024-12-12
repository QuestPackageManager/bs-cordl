#pragma once
// IWYU pragma private; include "System/TypeIdentifier.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__TypeName_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TypeIdentifier)
namespace System {
class TypeName;
}
// Forward declare root types
namespace System {
class TypeIdentifier;
}
// Write type traits
MARK_REF_PTR_T(::System::TypeIdentifier);
// Dependencies System.IEquatable`1<T>, System.TypeName
namespace System {
// Is value type: false
// CS Name: System.TypeIdentifier
class CORDL_TYPE TypeIdentifier {
public:
  // Declarations
  __declspec(property(get = get_InternalName)) ::StringW InternalName;

  /// @brief Convert operator to "::System::IEquatable_1<::System::TypeName*>"
  constexpr operator ::System::IEquatable_1<::System::TypeName*>*() noexcept;

  /// @brief Convert operator to "::System::TypeName"
  constexpr operator ::System::TypeName*() noexcept;

  /// @brief Method get_InternalName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_InternalName();

  /// @brief Convert to "::System::IEquatable_1<::System::TypeName*>"
  constexpr ::System::IEquatable_1<::System::TypeName*>* i___System__IEquatable_1___System__TypeName__() noexcept;

  /// @brief Convert to "::System::TypeName"
  constexpr ::System::TypeName* i___System__TypeName() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "TypeIdentifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeIdentifier(TypeIdentifier const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2630 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
NEED_NO_BOX(::System::TypeIdentifier);
DEFINE_IL2CPP_ARG_TYPE(::System::TypeIdentifier*, "System", "TypeIdentifier");
