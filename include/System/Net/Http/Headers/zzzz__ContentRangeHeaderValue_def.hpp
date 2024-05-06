#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/ContentRangeHeaderValue.hpp"
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
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
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
// CS Name: ::System.Net.Http.Headers::ContentRangeHeaderValue*
class CORDL_TYPE ContentRangeHeaderValue : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_From, put = set_From))::System::Nullable_1<int64_t> From;

  __declspec(property(get = get_Length, put = set_Length))::System::Nullable_1<int64_t> Length;

  __declspec(property(get = get_To, put = set_To))::System::Nullable_1<int64_t> To;

  __declspec(property(get = get_Unit))::StringW Unit;

  /// @brief Field <From>k__BackingField, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get__From_k__BackingField, put = __cordl_internal_set__From_k__BackingField))::System::Nullable_1<int64_t> _From_k__BackingField;

  /// @brief Field <Length>k__BackingField, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get__Length_k__BackingField, put = __cordl_internal_set__Length_k__BackingField))::System::Nullable_1<int64_t> _Length_k__BackingField;

  /// @brief Field <To>k__BackingField, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get__To_k__BackingField, put = __cordl_internal_set__To_k__BackingField))::System::Nullable_1<int64_t> _To_k__BackingField;

  /// @brief Field unit, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_unit, put = __cordl_internal_set_unit))::StringW unit;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method Equals, addr 0x2d6f240, size 0x148, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x2d6f388, size 0xec, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Net::Http::Headers::ContentRangeHeaderValue* New_ctor();

  /// @brief Method System.ICloneable.Clone, addr 0x2d6f238, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_ICloneable_Clone();

  /// @brief Method ToString, addr 0x2d6f934, size 0x260, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryParse, addr 0x2d6f474, size 0x3dc, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW input, ByRef<::System::Net::Http::Headers::ContentRangeHeaderValue*> parsedValue);

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__From_k__BackingField() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__From_k__BackingField();

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__Length_k__BackingField() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__Length_k__BackingField();

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__To_k__BackingField() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__To_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get_unit() const;

  constexpr ::StringW& __cordl_internal_get_unit();

  constexpr void __cordl_internal_set__From_k__BackingField(::System::Nullable_1<int64_t> value);

  constexpr void __cordl_internal_set__Length_k__BackingField(::System::Nullable_1<int64_t> value);

  constexpr void __cordl_internal_set__To_k__BackingField(::System::Nullable_1<int64_t> value);

  constexpr void __cordl_internal_set_unit(::StringW value);

  /// @brief Method .ctor, addr 0x2d6f1a4, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_From, addr 0x2d6f1f4, size 0xc, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int64_t> get_From();

  /// @brief Method get_Length, addr 0x2d6f208, size 0xc, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int64_t> get_Length();

  /// @brief Method get_To, addr 0x2d6f21c, size 0xc, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int64_t> get_To();

  /// @brief Method get_Unit, addr 0x2d6f230, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Unit();

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Method set_From, addr 0x2d6f200, size 0x8, virtual false, abstract: false, final false
  inline void set_From(::System::Nullable_1<int64_t> value);

  /// @brief Method set_Length, addr 0x2d6f214, size 0x8, virtual false, abstract: false, final false
  inline void set_Length(::System::Nullable_1<int64_t> value);

  /// @brief Method set_To, addr 0x2d6f228, size 0x8, virtual false, abstract: false, final false
  inline void set_To(::System::Nullable_1<int64_t> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContentRangeHeaderValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContentRangeHeaderValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContentRangeHeaderValue(ContentRangeHeaderValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContentRangeHeaderValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContentRangeHeaderValue(ContentRangeHeaderValue const&) = delete;

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
