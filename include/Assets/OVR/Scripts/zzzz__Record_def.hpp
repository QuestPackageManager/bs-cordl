#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Record)
// Forward declare root types
namespace Assets::OVR::Scripts {
class Record;
}
// Write type traits
MARK_REF_PTR_T(::Assets::OVR::Scripts::Record);
// Type: Assets.OVR.Scripts::Record
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Assets::OVR::Scripts {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8674))
// CS Name: ::Assets.OVR.Scripts::Record*
class CORDL_TYPE Record : public ::System::Object {
public:
  // Declarations
  /// @brief Field sortOrder, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_sortOrder, put = __cordl_internal_set_sortOrder)) int32_t sortOrder;

  /// @brief Field category, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_category, put = __cordl_internal_set_category))::StringW category;

  /// @brief Field message, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_message, put = __cordl_internal_set_message))::StringW message;

  constexpr int32_t& __cordl_internal_get_sortOrder();

  constexpr int32_t const& __cordl_internal_get_sortOrder() const;

  constexpr void __cordl_internal_set_sortOrder(int32_t value);

  constexpr ::StringW& __cordl_internal_get_category();

  constexpr ::StringW const& __cordl_internal_get_category() const;

  constexpr void __cordl_internal_set_category(::StringW value);

  constexpr ::StringW& __cordl_internal_get_message();

  constexpr ::StringW const& __cordl_internal_get_message() const;

  constexpr void __cordl_internal_set_message(::StringW value);

  static inline ::Assets::OVR::Scripts::Record* New_ctor(int32_t order, ::StringW cat, ::StringW msg);

  /// @brief Method .ctor, addr 0x280592c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(int32_t order, ::StringW cat, ::StringW msg);

  // Ctor Parameters [CppParam { name: "", ty: "Record", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Record(Record&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Record", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Record(Record const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Record();

public:
  /// @brief Field sortOrder, offset: 0x10, size: 0x4, def value: None
  int32_t ___sortOrder;

  /// @brief Field category, offset: 0x18, size: 0x8, def value: None
  ::StringW ___category;

  /// @brief Field message, offset: 0x20, size: 0x8, def value: None
  ::StringW ___message;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Assets::OVR::Scripts::Record, 0x28>, "Size mismatch!");

static_assert(offsetof(::Assets::OVR::Scripts::Record, ___sortOrder) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Assets::OVR::Scripts::Record, ___category) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Assets::OVR::Scripts::Record, ___message) == 0x20, "Offset mismatch!");

} // namespace Assets::OVR::Scripts
NEED_NO_BOX(::Assets::OVR::Scripts::Record);
DEFINE_IL2CPP_ARG_TYPE(::Assets::OVR::Scripts::Record*, "Assets.OVR.Scripts", "Record");
