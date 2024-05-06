#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InternalsVisibleToAttribute)
// Forward declare root types
namespace System::Runtime::CompilerServices {
class InternalsVisibleToAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::InternalsVisibleToAttribute);
// Type: System.Runtime.CompilerServices::InternalsVisibleToAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: ::System.Runtime.CompilerServices::InternalsVisibleToAttribute*
class CORDL_TYPE InternalsVisibleToAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(put = set_AllInternalsVisible)) bool AllInternalsVisible;

  /// @brief Field _allInternalsVisible, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__allInternalsVisible, put = __cordl_internal_set__allInternalsVisible)) bool _allInternalsVisible;

  /// @brief Field _assemblyName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__assemblyName, put = __cordl_internal_set__assemblyName))::StringW _assemblyName;

  static inline ::System::Runtime::CompilerServices::InternalsVisibleToAttribute* New_ctor(::StringW assemblyName);

  constexpr bool const& __cordl_internal_get__allInternalsVisible() const;

  constexpr bool& __cordl_internal_get__allInternalsVisible();

  constexpr ::StringW const& __cordl_internal_get__assemblyName() const;

  constexpr ::StringW& __cordl_internal_get__assemblyName();

  constexpr void __cordl_internal_set__allInternalsVisible(bool value);

  constexpr void __cordl_internal_set__assemblyName(::StringW value);

  /// @brief Method .ctor, addr 0x285e5dc, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::StringW assemblyName);

  /// @brief Method set_AllInternalsVisible, addr 0x285e60c, size 0xc, virtual false, abstract: false, final false
  inline void set_AllInternalsVisible(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InternalsVisibleToAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InternalsVisibleToAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InternalsVisibleToAttribute(InternalsVisibleToAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InternalsVisibleToAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InternalsVisibleToAttribute(InternalsVisibleToAttribute const&) = delete;

  /// @brief Field _assemblyName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____assemblyName;

  /// @brief Field _allInternalsVisible, offset: 0x18, size: 0x1, def value: None
  bool ____allInternalsVisible;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::InternalsVisibleToAttribute, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::InternalsVisibleToAttribute, ____assemblyName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::InternalsVisibleToAttribute, ____allInternalsVisible) == 0x18, "Offset mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::InternalsVisibleToAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::InternalsVisibleToAttribute*, "System.Runtime.CompilerServices", "InternalsVisibleToAttribute");
