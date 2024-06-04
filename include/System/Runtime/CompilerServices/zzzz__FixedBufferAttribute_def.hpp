#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/FixedBufferAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FixedBufferAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class FixedBufferAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::FixedBufferAttribute);
// Type: System.Runtime.CompilerServices::FixedBufferAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: ::System.Runtime.CompilerServices::FixedBufferAttribute*
class CORDL_TYPE FixedBufferAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_ElementType))::System::Type* ElementType;

  __declspec(property(get = get_Length)) int32_t Length;

  /// @brief Field <ElementType>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__ElementType_k__BackingField, put = __cordl_internal_set__ElementType_k__BackingField))::System::Type* _ElementType_k__BackingField;

  /// @brief Field <Length>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__Length_k__BackingField, put = __cordl_internal_set__Length_k__BackingField)) int32_t _Length_k__BackingField;

  static inline ::System::Runtime::CompilerServices::FixedBufferAttribute* New_ctor(::System::Type* elementType, int32_t length);

  constexpr ::System::Type*& __cordl_internal_get__ElementType_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__ElementType_k__BackingField() const;

  constexpr int32_t const& __cordl_internal_get__Length_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__Length_k__BackingField();

  constexpr void __cordl_internal_set__ElementType_k__BackingField(::System::Type* value);

  constexpr void __cordl_internal_set__Length_k__BackingField(int32_t value);

  /// @brief Method .ctor, addr 0x287554c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* elementType, int32_t length);

  /// @brief Method get_ElementType, addr 0x287557c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_ElementType();

  /// @brief Method get_Length, addr 0x2875584, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Length();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedBufferAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FixedBufferAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FixedBufferAttribute(FixedBufferAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FixedBufferAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FixedBufferAttribute(FixedBufferAttribute const&) = delete;

  /// @brief Field <ElementType>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____ElementType_k__BackingField;

  /// @brief Field <Length>k__BackingField, offset: 0x18, size: 0x4, def value: None
  int32_t ____Length_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::FixedBufferAttribute, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::FixedBufferAttribute, ____ElementType_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::FixedBufferAttribute, ____Length_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::FixedBufferAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::FixedBufferAttribute*, "System.Runtime.CompilerServices", "FixedBufferAttribute");
