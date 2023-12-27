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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3415))
// CS Name: ::System.Runtime.CompilerServices::InternalsVisibleToAttribute*
class CORDL_TYPE InternalsVisibleToAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field _assemblyName, offset 0x10, size 0x8
  __declspec(property(get = __get__assemblyName, put = __set__assemblyName))::StringW _assemblyName;

  /// @brief Field _allInternalsVisible, offset 0x18, size 0x1
  __declspec(property(get = __get__allInternalsVisible, put = __set__allInternalsVisible)) bool _allInternalsVisible;

  __declspec(property(put = set_AllInternalsVisible)) bool AllInternalsVisible;

  constexpr ::StringW& __get__assemblyName();

  constexpr ::StringW const& __get__assemblyName() const;

  constexpr void __set__assemblyName(::StringW value);

  constexpr bool& __get__allInternalsVisible();

  constexpr bool const& __get__allInternalsVisible() const;

  constexpr void __set__allInternalsVisible(bool value);

  static inline ::System::Runtime::CompilerServices::InternalsVisibleToAttribute* New_ctor(::StringW assemblyName);

  /// @brief Method .ctor addr 0x24dec34 size 0x30 virtual false final false
  inline void _ctor(::StringW assemblyName);

  /// @brief Method set_AllInternalsVisible addr 0x24dec64 size 0xc virtual false final false
  inline void set_AllInternalsVisible(bool value);

  // Ctor Parameters [CppParam { name: "", ty: "InternalsVisibleToAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InternalsVisibleToAttribute(InternalsVisibleToAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InternalsVisibleToAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InternalsVisibleToAttribute(InternalsVisibleToAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InternalsVisibleToAttribute();

public:
  /// @brief Field _assemblyName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____assemblyName;

  /// @brief Field _allInternalsVisible, offset: 0x18, size: 0x1, def value: None
  bool ____allInternalsVisible;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::InternalsVisibleToAttribute, 0x20>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::InternalsVisibleToAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::InternalsVisibleToAttribute*, "System.Runtime.CompilerServices", "InternalsVisibleToAttribute");
