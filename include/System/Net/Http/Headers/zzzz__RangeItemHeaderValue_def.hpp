#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/RangeItemHeaderValue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RangeItemHeaderValue)
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
class RangeItemHeaderValue;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::Headers::RangeItemHeaderValue);
// Type: System.Net.Http.Headers::RangeItemHeaderValue
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// Is value type: false
// CS Name: ::System.Net.Http.Headers::RangeItemHeaderValue*
class CORDL_TYPE RangeItemHeaderValue : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_From, put = set_From)) ::System::Nullable_1<int64_t> From;

  __declspec(property(get = get_To, put = set_To)) ::System::Nullable_1<int64_t> To;

  /// @brief Field <From>k__BackingField, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get__From_k__BackingField, put = __cordl_internal_set__From_k__BackingField)) ::System::Nullable_1<int64_t> _From_k__BackingField;

  /// @brief Field <To>k__BackingField, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get__To_k__BackingField, put = __cordl_internal_set__To_k__BackingField)) ::System::Nullable_1<int64_t> _To_k__BackingField;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method Equals, addr 0x41b02a0, size 0x104, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x41b03a4, size 0x78, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Net::Http::Headers::RangeItemHeaderValue* New_ctor(::System::Nullable_1<int64_t> from, ::System::Nullable_1<int64_t> to);

  /// @brief Method System.ICloneable.Clone, addr 0x41b0298, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_ICloneable_Clone();

  /// @brief Method ToString, addr 0x41b041c, size 0x138, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__From_k__BackingField() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__From_k__BackingField();

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__To_k__BackingField() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__To_k__BackingField();

  constexpr void __cordl_internal_set__From_k__BackingField(::System::Nullable_1<int64_t> value);

  constexpr void __cordl_internal_set__To_k__BackingField(::System::Nullable_1<int64_t> value);

  /// @brief Method .ctor, addr 0x41aff84, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor(::System::Nullable_1<int64_t> from, ::System::Nullable_1<int64_t> to);

  /// @brief Method get_From, addr 0x41b0270, size 0xc, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int64_t> get_From();

  /// @brief Method get_To, addr 0x41b0284, size 0xc, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int64_t> get_To();

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Method set_From, addr 0x41b027c, size 0x8, virtual false, abstract: false, final false
  inline void set_From(::System::Nullable_1<int64_t> value);

  /// @brief Method set_To, addr 0x41b0290, size 0x8, virtual false, abstract: false, final false
  inline void set_To(::System::Nullable_1<int64_t> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RangeItemHeaderValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RangeItemHeaderValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RangeItemHeaderValue(RangeItemHeaderValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RangeItemHeaderValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RangeItemHeaderValue(RangeItemHeaderValue const&) = delete;

  /// @brief Field <From>k__BackingField, offset: 0x10, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____From_k__BackingField;

  /// @brief Field <To>k__BackingField, offset: 0x20, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____To_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16694 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::RangeItemHeaderValue, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::RangeItemHeaderValue, ____From_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::RangeItemHeaderValue, ____To_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace System::Net::Http::Headers
NEED_NO_BOX(::System::Net::Http::Headers::RangeItemHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::RangeItemHeaderValue*, "System.Net.Http.Headers", "RangeItemHeaderValue");
