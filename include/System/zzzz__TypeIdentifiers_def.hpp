#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TypeNames_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TypeIdentifiers)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class TypeIdentifier;
}
namespace System {
class TypeName;
}
namespace System {
class __TypeIdentifiers__Display;
}
// Forward declare root types
namespace System {
class TypeIdentifiers;
}
namespace System {
class __TypeIdentifiers__Display;
}
// Write type traits
MARK_REF_PTR_T(::System::TypeIdentifiers);
MARK_REF_PTR_T(::System::__TypeIdentifiers__Display);
// Type: ::Display
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::TypeIdentifiers::Display*
class CORDL_TYPE __TypeIdentifiers__Display : public ::System::__TypeNames__ATypeName {
public:
  // Declarations
  __declspec(property(get = get_DisplayName))::StringW DisplayName;

  __declspec(property(get = get_InternalName))::StringW InternalName;

  /// @brief Field displayName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_displayName, put = __cordl_internal_set_displayName))::StringW displayName;

  /// @brief Field internal_name, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_internal_name, put = __cordl_internal_set_internal_name))::StringW internal_name;

  /// @brief Convert operator to "::System::IEquatable_1<::System::TypeName*>"
  constexpr operator ::System::IEquatable_1<::System::TypeName*>*() noexcept;

  /// @brief Convert operator to "::System::TypeIdentifier"
  constexpr operator ::System::TypeIdentifier*() noexcept;

  /// @brief Convert operator to "::System::TypeName"
  constexpr operator ::System::TypeName*() noexcept;

  /// @brief Method GetInternalName, addr 0x298c7e4, size 0xc, virtual false, abstract: false, final false
  inline ::StringW GetInternalName();

  static inline ::System::__TypeIdentifiers__Display* New_ctor(::StringW displayName);

  constexpr ::StringW const& __cordl_internal_get_displayName() const;

  constexpr ::StringW& __cordl_internal_get_displayName();

  constexpr ::StringW const& __cordl_internal_get_internal_name() const;

  constexpr ::StringW& __cordl_internal_get_internal_name();

  constexpr void __cordl_internal_set_displayName(::StringW value);

  constexpr void __cordl_internal_set_internal_name(::StringW value);

  /// @brief Method .ctor, addr 0x298c7ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW displayName);

  /// @brief Method get_DisplayName, addr 0x298c7b4, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_DisplayName();

  /// @brief Method get_InternalName, addr 0x298c7bc, size 0x28, virtual true, abstract: false, final true
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
  constexpr __TypeIdentifiers__Display();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TypeIdentifiers__Display", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeIdentifiers__Display(__TypeIdentifiers__Display&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeIdentifiers__Display", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeIdentifiers__Display(__TypeIdentifiers__Display const&) = delete;

  /// @brief Field displayName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___displayName;

  /// @brief Field internal_name, offset: 0x18, size: 0x8, def value: None
  ::StringW ___internal_name;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__TypeIdentifiers__Display, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::__TypeIdentifiers__Display, ___displayName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::__TypeIdentifiers__Display, ___internal_name) == 0x18, "Offset mismatch!");

} // namespace System
// Type: System::TypeIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::TypeIdentifiers*
class CORDL_TYPE TypeIdentifiers : public ::System::Object {
public:
  // Declarations
  using Display = ::System::__TypeIdentifiers__Display;

  /// @brief Method FromDisplay, addr 0x298c758, size 0x54, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::TypeIdentifiers, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::TypeIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::System::TypeIdentifiers*, "System", "TypeIdentifiers");
NEED_NO_BOX(::System::__TypeIdentifiers__Display);
DEFINE_IL2CPP_ARG_TYPE(::System::__TypeIdentifiers__Display*, "System", "TypeIdentifiers/Display");
