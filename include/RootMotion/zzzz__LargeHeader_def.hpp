#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LargeHeader)
// Forward declare root types
namespace RootMotion {
class LargeHeader;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::LargeHeader);
// Type: RootMotion::LargeHeader
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10170))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12495))
// CS Name: ::RootMotion::LargeHeader*
class CORDL_TYPE LargeHeader : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __get_name, put = __set_name))::StringW name;

  /// @brief Field color, offset 0x18, size 0x8
  __declspec(property(get = __get_color, put = __set_color))::StringW color;

  constexpr ::StringW& __get_name();

  constexpr ::StringW const& __get_name() const;

  constexpr void __set_name(::StringW value);

  constexpr ::StringW& __get_color();

  constexpr ::StringW const& __get_color() const;

  constexpr void __set_color(::StringW value);

  static inline ::RootMotion::LargeHeader* New_ctor(::StringW name);

  /// @brief Method .ctor addr 0x123dfdc size 0x68 virtual false final false
  inline void _ctor(::StringW name);

  static inline ::RootMotion::LargeHeader* New_ctor(::StringW name, ::StringW color);

  /// @brief Method .ctor addr 0x123e044 size 0x68 virtual false final false
  inline void _ctor(::StringW name, ::StringW color);

  // Ctor Parameters [CppParam { name: "", ty: "LargeHeader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LargeHeader(LargeHeader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LargeHeader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LargeHeader(LargeHeader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LargeHeader();

public:
  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field color, offset: 0x18, size: 0x8, def value: None
  ::StringW ___color;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::LargeHeader, 0x20>, "Size mismatch!");

} // namespace RootMotion
NEED_NO_BOX(::RootMotion::LargeHeader);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::LargeHeader*, "RootMotion", "LargeHeader");
