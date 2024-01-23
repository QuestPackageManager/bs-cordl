#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ArgumentBase)
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
class ArgumentBase;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ArgumentBase);
// Type: ::ArgumentBase
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5978))
// CS Name: ::ArgumentBase*
class CORDL_TYPE ArgumentBase : public ::System::Object {
public:
  // Declarations
  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name))::StringW name;

  /// @brief Field description, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_description, put = __cordl_internal_set_description))::StringW description;

  /// @brief Field valueType, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_valueType, put = __cordl_internal_set_valueType))::System::Type* valueType;

  __declspec(property(get = get_isOptional)) bool isOptional;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr ::StringW& __cordl_internal_get_description();

  constexpr ::StringW const& __cordl_internal_get_description() const;

  constexpr void __cordl_internal_set_description(::StringW value);

  constexpr ::System::Type*& __cordl_internal_get_valueType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_valueType() const;

  constexpr void __cordl_internal_set_valueType(::System::Type* value);

  /// @brief Method get_isOptional, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isOptional();

  static inline ::GlobalNamespace::ArgumentBase* New_ctor(::StringW name, ::StringW description, ::System::Type* valueType);

  /// @brief Method .ctor, addr 0x230dcc4, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::StringW description, ::System::Type* valueType);

  /// @brief Method TryParseWithValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool TryParseWithValue(::StringW value);

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Reset();

  // Ctor Parameters [CppParam { name: "", ty: "ArgumentBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArgumentBase(ArgumentBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArgumentBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArgumentBase(ArgumentBase const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArgumentBase();

public:
  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field description, offset: 0x18, size: 0x8, def value: None
  ::StringW ___description;

  /// @brief Field valueType, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ___valueType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ArgumentBase, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ArgumentBase, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArgumentBase, ___description) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArgumentBase, ___valueType) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ArgumentBase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ArgumentBase*, "", "ArgumentBase");
