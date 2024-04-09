#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ArgumentBase_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RequiredArgument_1)
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class RequiredArgument_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::RequiredArgument_1);
// Type: ::RequiredArgument`1
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::RequiredArgument`1<T>*
class CORDL_TYPE RequiredArgument_1 : public ::GlobalNamespace::ArgumentBase {
public:
  // Declarations
  /// @brief Field _value, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value)) T _value;

  __declspec(property(get = get_isOptional)) bool isOptional;

  __declspec(property(get = get_value)) T value;

  static inline ::GlobalNamespace::RequiredArgument_1<T>* New_ctor(::StringW name, ::StringW description);

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryParseWithValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryParseWithValue(::StringW inValue, ByRef<::StringW> outError);

  constexpr T const& __cordl_internal_get__value() const;

  constexpr T& __cordl_internal_get__value();

  constexpr void __cordl_internal_set__value(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::StringW description);

  /// @brief Method get_isOptional, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_isOptional();

  /// @brief Method get_value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_value();

  /// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T op_Implicit_T(::GlobalNamespace::RequiredArgument_1<T>* requiredArgument);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RequiredArgument_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RequiredArgument_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RequiredArgument_1(RequiredArgument_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RequiredArgument_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RequiredArgument_1(RequiredArgument_1 const&) = delete;

  /// @brief Field _value, offset: 0x28, size: 0x8, def value: None
  T ____value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::RequiredArgument_1, "", "RequiredArgument`1");
