#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ArgumentBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OptionalArgument_1)
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class OptionalArgument_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::OptionalArgument_1);
// Type: ::OptionalArgument`1
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(5262))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5264))
// CS Name: ::OptionalArgument`1<T>*
class CORDL_TYPE OptionalArgument_1 : public ::GlobalNamespace::ArgumentBase {
public:
  // Declarations
  /// @brief Field <hasValue>k__BackingField, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__hasValue_k__BackingField, put = __cordl_internal_set__hasValue_k__BackingField)) bool _hasValue_k__BackingField;

  /// @brief Field _value, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value)) T _value;

  __declspec(property(get = get_value)) T value;

  __declspec(property(get = get_isOptional)) bool isOptional;

  __declspec(property(get = get_hasValue, put = set_hasValue)) bool hasValue;

  constexpr bool& __cordl_internal_get__hasValue_k__BackingField();

  constexpr bool const& __cordl_internal_get__hasValue_k__BackingField() const;

  constexpr void __cordl_internal_set__hasValue_k__BackingField(bool value);

  constexpr T& __cordl_internal_get__value();

  constexpr T const& __cordl_internal_get__value() const;

  constexpr void __cordl_internal_set__value(T value);

  /// @brief Method get_value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_value();

  /// @brief Method get_isOptional, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_isOptional();

  /// @brief Method get_hasValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_hasValue();

  /// @brief Method set_hasValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_hasValue(bool value);

  static inline ::GlobalNamespace::OptionalArgument_1<T>* New_ctor(::StringW name, ::StringW description);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::StringW description);

  /// @brief Method GetValueOrDefault, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T GetValueOrDefault(T defaultValue);

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method TryParseWithValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryParseWithValue(::StringW inValue);

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "OptionalArgument_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OptionalArgument_1(OptionalArgument_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OptionalArgument_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OptionalArgument_1(OptionalArgument_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OptionalArgument_1();

public:
  /// @brief Field <hasValue>k__BackingField, offset: 0x28, size: 0x1, def value: None
  bool ____hasValue_k__BackingField;

  /// @brief Field _value, offset: 0x30, size: 0x8, def value: None
  T ____value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::OptionalArgument_1, "", "OptionalArgument`1");
