#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataMemberAttribute)
// Forward declare root types
namespace System::Runtime::Serialization {
class DataMemberAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::DataMemberAttribute);
// Type: System.Runtime.Serialization::DataMemberAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 30, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: ::System.Runtime.Serialization::DataMemberAttribute*
class CORDL_TYPE DataMemberAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_EmitDefaultValue)) bool EmitDefaultValue;

  __declspec(property(get = get_IsRequired)) bool IsRequired;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_Order)) int32_t Order;

  /// @brief Field emitDefaultValue, offset 0x1d, size 0x1
  __declspec(property(get = __cordl_internal_get_emitDefaultValue, put = __cordl_internal_set_emitDefaultValue)) bool emitDefaultValue;

  /// @brief Field isRequired, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_isRequired, put = __cordl_internal_set_isRequired)) bool isRequired;

  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name))::StringW name;

  /// @brief Field order, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_order, put = __cordl_internal_set_order)) int32_t order;

  constexpr bool const& __cordl_internal_get_emitDefaultValue() const;

  constexpr bool& __cordl_internal_get_emitDefaultValue();

  constexpr bool const& __cordl_internal_get_isRequired() const;

  constexpr bool& __cordl_internal_get_isRequired();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr int32_t const& __cordl_internal_get_order() const;

  constexpr int32_t& __cordl_internal_get_order();

  constexpr void __cordl_internal_set_emitDefaultValue(bool value);

  constexpr void __cordl_internal_set_isRequired(bool value);

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_order(int32_t value);

  /// @brief Method get_EmitDefaultValue, addr 0x2c85f04, size 0x8, virtual false, abstract: false, final false
  inline bool get_EmitDefaultValue();

  /// @brief Method get_IsRequired, addr 0x2c85efc, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsRequired();

  /// @brief Method get_Name, addr 0x2c85eec, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_Order, addr 0x2c85ef4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Order();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataMemberAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataMemberAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataMemberAttribute(DataMemberAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataMemberAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataMemberAttribute(DataMemberAttribute const&) = delete;

  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field order, offset: 0x18, size: 0x4, def value: None
  int32_t ___order;

  /// @brief Field isRequired, offset: 0x1c, size: 0x1, def value: None
  bool ___isRequired;

  /// @brief Field emitDefaultValue, offset: 0x1d, size: 0x1, def value: None
  bool ___emitDefaultValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::DataMemberAttribute, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::DataMemberAttribute, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::DataMemberAttribute, ___order) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::DataMemberAttribute, ___isRequired) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::DataMemberAttribute, ___emitDefaultValue) == 0x1d, "Offset mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::DataMemberAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::DataMemberAttribute*, "System.Runtime.Serialization", "DataMemberAttribute");
