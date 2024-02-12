#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalVariableInfo)
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
class LocalVariableInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::LocalVariableInfo);
// Type: System.Reflection::LocalVariableInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3512))
// CS Name: ::System.Reflection::LocalVariableInfo*
class CORDL_TYPE LocalVariableInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type))::System::Type* type;

  /// @brief Field is_pinned, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_is_pinned, put = __cordl_internal_set_is_pinned)) bool is_pinned;

  /// @brief Field position, offset 0x1a, size 0x2
  __declspec(property(get = __cordl_internal_get_position, put = __cordl_internal_set_position)) uint16_t position;

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_type() const;

  constexpr void __cordl_internal_set_type(::System::Type* value);

  constexpr bool& __cordl_internal_get_is_pinned();

  constexpr bool const& __cordl_internal_get_is_pinned() const;

  constexpr void __cordl_internal_set_is_pinned(bool value);

  constexpr uint16_t& __cordl_internal_get_position();

  constexpr uint16_t const& __cordl_internal_get_position() const;

  constexpr void __cordl_internal_set_position(uint16_t value);

  static inline ::System::Reflection::LocalVariableInfo* New_ctor();

  /// @brief Method .ctor, addr 0x2510e28, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method ToString, addr 0x2510e30, size 0xac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "LocalVariableInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalVariableInfo(LocalVariableInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalVariableInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalVariableInfo(LocalVariableInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalVariableInfo();

public:
  /// @brief Field type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___type;

  /// @brief Field is_pinned, offset: 0x18, size: 0x1, def value: None
  bool ___is_pinned;

  /// @brief Field position, offset: 0x1a, size: 0x2, def value: None
  uint16_t ___position;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::LocalVariableInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Reflection::LocalVariableInfo, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::LocalVariableInfo, ___is_pinned) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::LocalVariableInfo, ___position) == 0x1a, "Offset mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::LocalVariableInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::LocalVariableInfo*, "System.Reflection", "LocalVariableInfo");
