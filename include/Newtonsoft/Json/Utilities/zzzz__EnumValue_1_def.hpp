#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EnumValue_1)
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
template <typename T> class EnumValue_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Utilities::EnumValue_1);
// Type: Newtonsoft.Json.Utilities::EnumValue`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::Newtonsoft.Json.Utilities::EnumValue`1<T>*
class CORDL_TYPE EnumValue_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_Value)) T Value;

  /// @brief Field _name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__name, put = __cordl_internal_set__name))::StringW _name;

  /// @brief Field _value, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value)) T _value;

  static inline ::Newtonsoft::Json::Utilities::EnumValue_1<T>* New_ctor(::StringW name, T value);

  constexpr ::StringW const& __cordl_internal_get__name() const;

  constexpr ::StringW& __cordl_internal_get__name();

  constexpr T const& __cordl_internal_get__value() const;

  constexpr T& __cordl_internal_get__value();

  constexpr void __cordl_internal_set__name(::StringW value);

  constexpr void __cordl_internal_set__value(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, T value);

  /// @brief Method get_Name, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_Value();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnumValue_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnumValue_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnumValue_1(EnumValue_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnumValue_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnumValue_1(EnumValue_1 const&) = delete;

  /// @brief Field _name, offset: 0x10, size: 0x8, def value: None
  ::StringW ____name;

  /// @brief Field _value, offset: 0x18, size: 0x8, def value: None
  T ____value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Utilities::EnumValue_1, "Newtonsoft.Json.Utilities", "EnumValue`1");
