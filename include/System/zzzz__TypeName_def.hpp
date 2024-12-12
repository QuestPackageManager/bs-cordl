#pragma once
// IWYU pragma private; include "System/TypeName.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TypeName)
// Forward declare root types
namespace System {
class TypeName;
}
// Write type traits
MARK_REF_PTR_T(::System::TypeName);
// Dependencies System.IEquatable`1<T>
namespace System {
// Is value type: false
// CS Name: System.TypeName
class CORDL_TYPE TypeName {
public:
  // Declarations
  __declspec(property(get = get_DisplayName)) ::StringW DisplayName;

  /// @brief Convert operator to "::System::IEquatable_1<::System::TypeName*>"
  constexpr operator ::System::IEquatable_1<::System::TypeName*>*() noexcept;

  /// @brief Method get_DisplayName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_DisplayName();

  /// @brief Convert to "::System::IEquatable_1<::System::TypeName*>"
  constexpr ::System::IEquatable_1<::System::TypeName*>* i___System__IEquatable_1___System__TypeName__() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "TypeName", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeName(TypeName const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2629 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
NEED_NO_BOX(::System::TypeName);
DEFINE_IL2CPP_ARG_TYPE(::System::TypeName*, "System", "TypeName");
