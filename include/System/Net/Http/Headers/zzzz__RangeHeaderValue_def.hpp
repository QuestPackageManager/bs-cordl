#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/RangeHeaderValue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RangeHeaderValue)
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Net::Http::Headers {
class RangeItemHeaderValue;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class RangeHeaderValue;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::Headers::RangeHeaderValue);
// Dependencies System.ICloneable, System.Object
namespace System::Net::Http::Headers {
// Is value type: false
// CS Name: System.Net.Http.Headers.RangeHeaderValue
class CORDL_TYPE RangeHeaderValue : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Ranges)) ::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::RangeItemHeaderValue*>* Ranges;

  __declspec(property(get = get_Unit)) ::StringW Unit;

  /// @brief Field ranges, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ranges, put = __cordl_internal_set_ranges)) ::System::Collections::Generic::List_1<::System::Net::Http::Headers::RangeItemHeaderValue*>* ranges;

  /// @brief Field unit, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_unit, put = __cordl_internal_set_unit)) ::StringW unit;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method Equals, addr 0x4226964, size 0xc8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x4226a2c, size 0x7c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Net::Http::Headers::RangeHeaderValue* New_ctor();

  static inline ::System::Net::Http::Headers::RangeHeaderValue* New_ctor(::System::Net::Http::Headers::RangeHeaderValue* source);

  /// @brief Method System.ICloneable.Clone, addr 0x422690c, size 0x58, virtual true, abstract: false, final true
  inline ::System::Object* System_ICloneable_Clone();

  /// @brief Method ToString, addr 0x422713c, size 0x1a0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryParse, addr 0x4226aa8, size 0x548, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW input, ::ByRef<::System::Net::Http::Headers::RangeHeaderValue*> parsedValue);

  constexpr ::System::Collections::Generic::List_1<::System::Net::Http::Headers::RangeItemHeaderValue*>* const& __cordl_internal_get_ranges() const;

  constexpr ::System::Collections::Generic::List_1<::System::Net::Http::Headers::RangeItemHeaderValue*>*& __cordl_internal_get_ranges();

  constexpr ::StringW const& __cordl_internal_get_unit() const;

  constexpr ::StringW& __cordl_internal_get_unit();

  constexpr void __cordl_internal_set_ranges(::System::Collections::Generic::List_1<::System::Net::Http::Headers::RangeItemHeaderValue*>* value);

  constexpr void __cordl_internal_set_unit(::StringW value);

  /// @brief Method .ctor, addr 0x4226660, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x42266b4, size 0x1d8, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Http::Headers::RangeHeaderValue* source);

  /// @brief Method get_Ranges, addr 0x422688c, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::RangeItemHeaderValue*>* get_Ranges();

  /// @brief Method get_Unit, addr 0x4226904, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Unit();

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RangeHeaderValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RangeHeaderValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RangeHeaderValue(RangeHeaderValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RangeHeaderValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RangeHeaderValue(RangeHeaderValue const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16750 };

  /// @brief Field ranges, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Net::Http::Headers::RangeItemHeaderValue*>* ___ranges;

  /// @brief Field unit, offset: 0x18, size: 0x8, def value: None
  ::StringW ___unit;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Http::Headers::RangeHeaderValue, ___ranges) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::RangeHeaderValue, ___unit) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::RangeHeaderValue, 0x20>, "Size mismatch!");

} // namespace System::Net::Http::Headers
NEED_NO_BOX(::System::Net::Http::Headers::RangeHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::RangeHeaderValue*, "System.Net.Http.Headers", "RangeHeaderValue");
