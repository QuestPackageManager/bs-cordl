#pragma once
// IWYU pragma private; include "System\TypeIdentifiers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TypeNames_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TypeIdentifiers)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class TypeIdentifier;
}
namespace System {
class TypeIdentifiers_Display;
}
namespace System {
class TypeName;
}
// Forward declare root types
namespace System {
class TypeIdentifiers;
}
namespace System {
class TypeIdentifiers_Display;
}
// Write type traits
MARK_REF_T(::System::TypeIdentifiers*);
MARK_REF_T(::System::TypeIdentifiers_Display*);
DEFINE_IL2CPP_CLASS(::System::TypeIdentifiers*, "System", "TypeIdentifiers");
DEFINE_IL2CPP_CLASS(::System::TypeIdentifiers_Display*, "System", "TypeIdentifiers/Display");
// Dependencies System.TypeNames::ATypeName
namespace System {
// Is value type: false
// CS Name: System.TypeIdentifiers/Display
class CORDL_TYPE TypeIdentifiers_Display : public ::System::TypeNames_ATypeName {
public:
  // Declarations
  __declspec(property(get = get_DisplayName)) ::StringW DisplayName;

  __declspec(property(get = get_InternalName)) ::StringW InternalName;

  /// @brief Field displayName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_displayName, put = __cordl_internal_set_displayName)) ::StringW displayName;

  /// @brief Field internal_name, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_internal_name, put = __cordl_internal_set_internal_name)) ::StringW internal_name;

  /// @brief Convert operator to "::System::IEquatable_1<::System::TypeName*>"
  constexpr operator ::System::IEquatable_1<::System::TypeName*>*() noexcept;

  /// @brief Convert operator to "::System::TypeIdentifier"
  constexpr operator ::System::TypeIdentifier*() noexcept;

  /// @brief Convert operator to "::System::TypeName"
  constexpr operator ::System::TypeName*() noexcept;

  /// @brief Method GetInternalName, addr 0x5c9e76c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW GetInternalName();

  static inline ::System::TypeIdentifiers_Display* New_ctor(::StringW displayName);

  constexpr ::StringW const& __cordl_internal_get_displayName() const;

  constexpr ::StringW& __cordl_internal_get_displayName();

  constexpr ::StringW const& __cordl_internal_get_internal_name() const;

  constexpr ::StringW& __cordl_internal_get_internal_name();

  constexpr void __cordl_internal_set_displayName(::StringW value);

  constexpr void __cordl_internal_set_internal_name(::StringW value);

  /// @brief Method .ctor, addr 0x5c9e738, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW displayName);

  /// @brief Method get_DisplayName, addr 0x5c9e740, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_DisplayName();

  /// @brief Method get_InternalName, addr 0x5c9e748, size 0x24, virtual true, abstract: false, final true
  inline ::StringW get_InternalName();

  /// @brief Convert to "::System::IEquatable_1<::System::TypeName*>"
  constexpr ::System::IEquatable_1<::System::TypeName*>* i___System__IEquatable_1___System__TypeName__() noexcept;

  /// @brief Convert to "::System::TypeIdentifier"
  constexpr ::System::TypeIdentifier* i___System__TypeIdentifier() noexcept;

  /// @brief Convert to "::System::TypeName"
  constexpr ::System::TypeName* i___System__TypeName() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeIdentifiers_Display();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeIdentifiers_Display", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeIdentifiers_Display(TypeIdentifiers_Display&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeIdentifiers_Display", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeIdentifiers_Display(TypeIdentifiers_Display const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2641 };

  /// @brief Field displayName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___displayName;

  /// @brief Field internal_name, offset: 0x18, size: 0x8, def value: None
  ::StringW ___internal_name;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::TypeIdentifiers_Display, ___displayName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::TypeIdentifiers_Display, ___internal_name) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::TypeIdentifiers_Display) == 0x20, "Size mismatch!");

} // namespace System
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.TypeIdentifiers
class CORDL_TYPE TypeIdentifiers : public ::System::Object {
public:
  // Declarations
  using Display = ::System::TypeIdentifiers_Display;

  /// @brief Method FromDisplay, addr 0x5c9e6e8, size 0x50, virtual false, abstract: false, final false
  static inline ::System::TypeIdentifier* FromDisplay(::StringW displayName);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeIdentifiers(TypeIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeIdentifiers(TypeIdentifiers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2642 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::TypeIdentifiers) == 0x10, "Size mismatch!");

} // namespace System
