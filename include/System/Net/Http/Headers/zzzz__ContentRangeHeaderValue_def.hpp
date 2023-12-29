#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ContentRangeHeaderValue)
namespace System {
class ICloneable;
}
namespace System {
class Object;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class ContentRangeHeaderValue;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::Headers::ContentRangeHeaderValue);
// Type: System.Net.Http.Headers::ContentRangeHeaderValue
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2446), inst: 844 }), TypeDefinitionIndex(TypeDefinitionIndex(2611)),
// TypeDefinitionIndex(TypeDefinitionIndex(2446))} Self: TypeDefinitionIndex(TypeDefinitionIndex(14881)) CS Name: ::System.Net.Http.Headers::ContentRangeHeaderValue*
class CORDL_TYPE ContentRangeHeaderValue : public ::System::Object {
public:
  // Declarations
  /// @brief Field unit, offset 0x10, size 0x8
  __declspec(property(get = __get_unit, put = __set_unit))::StringW unit;

  /// @brief Field <From>k__BackingField, offset 0x18, size 0x10
  __declspec(property(get = __get__From_k__BackingField, put = __set__From_k__BackingField))::System::Nullable_1<int64_t> _From_k__BackingField;

  /// @brief Field <Length>k__BackingField, offset 0x28, size 0x10
  __declspec(property(get = __get__Length_k__BackingField, put = __set__Length_k__BackingField))::System::Nullable_1<int64_t> _Length_k__BackingField;

  /// @brief Field <To>k__BackingField, offset 0x38, size 0x10
  __declspec(property(get = __get__To_k__BackingField, put = __set__To_k__BackingField))::System::Nullable_1<int64_t> _To_k__BackingField;

  __declspec(property(get = get_From, put = set_From))::System::Nullable_1<int64_t> From;

  __declspec(property(get = get_Length, put = set_Length))::System::Nullable_1<int64_t> Length;

  __declspec(property(get = get_To, put = set_To))::System::Nullable_1<int64_t> To;

  __declspec(property(get = get_Unit))::StringW Unit;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  constexpr ::StringW& __get_unit();

  constexpr ::StringW const& __get_unit() const;

  constexpr void __set_unit(::StringW value);

  constexpr ::System::Nullable_1<int64_t>& __get__From_k__BackingField();

  constexpr ::System::Nullable_1<int64_t> const& __get__From_k__BackingField() const;

  constexpr void __set__From_k__BackingField(::System::Nullable_1<int64_t> value);

  constexpr ::System::Nullable_1<int64_t>& __get__Length_k__BackingField();

  constexpr ::System::Nullable_1<int64_t> const& __get__Length_k__BackingField() const;

  constexpr void __set__Length_k__BackingField(::System::Nullable_1<int64_t> value);

  constexpr ::System::Nullable_1<int64_t>& __get__To_k__BackingField();

  constexpr ::System::Nullable_1<int64_t> const& __get__To_k__BackingField() const;

  constexpr void __set__To_k__BackingField(::System::Nullable_1<int64_t> value);

  static inline ::System::Net::Http::Headers::ContentRangeHeaderValue* New_ctor();

  /// @brief Method .ctor addr 0x26bcee0 size 0x50 virtual false final false
  inline void _ctor();

  /// @brief Method get_From addr 0x26bcf30 size 0xc virtual false final false
  inline ::System::Nullable_1<int64_t> get_From();

  /// @brief Method set_From addr 0x26bcf3c size 0x8 virtual false final false
  inline void set_From(::System::Nullable_1<int64_t> value);

  /// @brief Method get_Length addr 0x26bcf44 size 0xc virtual false final false
  inline ::System::Nullable_1<int64_t> get_Length();

  /// @brief Method set_Length addr 0x26bcf50 size 0x8 virtual false final false
  inline void set_Length(::System::Nullable_1<int64_t> value);

  /// @brief Method get_To addr 0x26bcf58 size 0xc virtual false final false
  inline ::System::Nullable_1<int64_t> get_To();

  /// @brief Method set_To addr 0x26bcf64 size 0x8 virtual false final false
  inline void set_To(::System::Nullable_1<int64_t> value);

  /// @brief Method get_Unit addr 0x26bcf6c size 0x8 virtual false final false
  inline ::StringW get_Unit();

  /// @brief Method System.ICloneable.Clone addr 0x26bcf74 size 0x8 virtual true final true
  inline ::System::Object* System_ICloneable_Clone();

  /// @brief Method Equals addr 0x26bcf7c size 0x148 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x26bd0c4 size 0xec virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method TryParse addr 0x26bd1b0 size 0x3dc virtual false final false
  static inline bool TryParse(::StringW input, ByRef<::System::Net::Http::Headers::ContentRangeHeaderValue*> parsedValue);

  /// @brief Method ToString addr 0x26bd670 size 0x260 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "ContentRangeHeaderValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContentRangeHeaderValue(ContentRangeHeaderValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContentRangeHeaderValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContentRangeHeaderValue(ContentRangeHeaderValue const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContentRangeHeaderValue();

public:
  /// @brief Field unit, offset: 0x10, size: 0x8, def value: None
  ::StringW ___unit;

  /// @brief Field <From>k__BackingField, offset: 0x18, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____From_k__BackingField;

  /// @brief Field <Length>k__BackingField, offset: 0x28, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____Length_k__BackingField;

  /// @brief Field <To>k__BackingField, offset: 0x38, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____To_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::ContentRangeHeaderValue, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::ContentRangeHeaderValue, ___unit) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::ContentRangeHeaderValue, ____From_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::ContentRangeHeaderValue, ____Length_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::ContentRangeHeaderValue, ____To_k__BackingField) == 0x38, "Offset mismatch!");

} // namespace System::Net::Http::Headers
NEED_NO_BOX(::System::Net::Http::Headers::ContentRangeHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::ContentRangeHeaderValue*, "System.Net.Http.Headers", "ContentRangeHeaderValue");
