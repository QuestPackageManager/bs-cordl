#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RangeItemHeaderValue)
namespace System {
class Object;
}
namespace System {
class ICloneable;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class RangeItemHeaderValue;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::Headers::RangeItemHeaderValue);
// Type: System.Net.Http.Headers::RangeItemHeaderValue
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 333 }), TypeDefinitionIndex(TypeDefinitionIndex(2613)),
// TypeDefinitionIndex(TypeDefinitionIndex(2448))} Self: TypeDefinitionIndex(TypeDefinitionIndex(14705)) CS Name: ::System.Net.Http.Headers::RangeItemHeaderValue*
class CORDL_TYPE RangeItemHeaderValue : public ::System::Object {
public:
  // Declarations
  /// @brief Field <From>k__BackingField, offset 0x10, size 0x10
  __declspec(property(get = __get__From_k__BackingField, put = __set__From_k__BackingField))::System::Nullable_1<int64_t> _From_k__BackingField;

  /// @brief Field <To>k__BackingField, offset 0x20, size 0x10
  __declspec(property(get = __get__To_k__BackingField, put = __set__To_k__BackingField))::System::Nullable_1<int64_t> _To_k__BackingField;

  __declspec(property(get = get_From, put = set_From))::System::Nullable_1<int64_t> From;

  __declspec(property(get = get_To, put = set_To))::System::Nullable_1<int64_t> To;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  constexpr ::System::Nullable_1<int64_t>& __get__From_k__BackingField();

  constexpr ::System::Nullable_1<int64_t> const& __get__From_k__BackingField() const;

  constexpr void __set__From_k__BackingField(::System::Nullable_1<int64_t> value);

  constexpr ::System::Nullable_1<int64_t>& __get__To_k__BackingField();

  constexpr ::System::Nullable_1<int64_t> const& __get__To_k__BackingField() const;

  constexpr void __set__To_k__BackingField(::System::Nullable_1<int64_t> value);

  static inline ::System::Net::Http::Headers::RangeItemHeaderValue* New_ctor(::System::Nullable_1<int64_t> from, ::System::Nullable_1<int64_t> to);

  /// @brief Method .ctor addr 0x2840a80 size 0x15c virtual false final false
  inline void _ctor(::System::Nullable_1<int64_t> from, ::System::Nullable_1<int64_t> to);

  /// @brief Method get_From addr 0x2840d7c size 0xc virtual false final false
  inline ::System::Nullable_1<int64_t> get_From();

  /// @brief Method set_From addr 0x2840d88 size 0x8 virtual false final false
  inline void set_From(::System::Nullable_1<int64_t> value);

  /// @brief Method get_To addr 0x2840d90 size 0xc virtual false final false
  inline ::System::Nullable_1<int64_t> get_To();

  /// @brief Method set_To addr 0x2840d9c size 0x8 virtual false final false
  inline void set_To(::System::Nullable_1<int64_t> value);

  /// @brief Method System.ICloneable.Clone addr 0x2840da4 size 0x8 virtual true final true
  inline ::System::Object* System_ICloneable_Clone();

  /// @brief Method Equals addr 0x2840dac size 0x104 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x2840eb0 size 0x78 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method ToString addr 0x2840f28 size 0x130 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "RangeItemHeaderValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RangeItemHeaderValue(RangeItemHeaderValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RangeItemHeaderValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RangeItemHeaderValue(RangeItemHeaderValue const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RangeItemHeaderValue();

public:
  /// @brief Field <From>k__BackingField, offset: 0x10, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____From_k__BackingField;

  /// @brief Field <To>k__BackingField, offset: 0x20, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____To_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::RangeItemHeaderValue, 0x30>, "Size mismatch!");

} // namespace System::Net::Http::Headers
NEED_NO_BOX(::System::Net::Http::Headers::RangeItemHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::RangeItemHeaderValue*, "System.Net.Http.Headers", "RangeItemHeaderValue");
