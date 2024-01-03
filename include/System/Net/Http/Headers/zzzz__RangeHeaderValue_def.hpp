#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
class ICloneable;
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
// Type: System.Net.Http.Headers::RangeHeaderValue
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14704))
// CS Name: ::System.Net.Http.Headers::RangeHeaderValue*
class CORDL_TYPE RangeHeaderValue : public ::System::Object {
public:
  // Declarations
  /// @brief Field ranges, offset 0x10, size 0x8
  __declspec(property(get = __get_ranges, put = __set_ranges))::System::Collections::Generic::List_1<::System::Net::Http::Headers::RangeItemHeaderValue*>* ranges;

  /// @brief Field unit, offset 0x18, size 0x8
  __declspec(property(get = __get_unit, put = __set_unit))::StringW unit;

  __declspec(property(get = get_Ranges))::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::RangeItemHeaderValue*>* Ranges;

  __declspec(property(get = get_Unit))::StringW Unit;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  constexpr ::System::Collections::Generic::List_1<::System::Net::Http::Headers::RangeItemHeaderValue*>*& __get_ranges();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Net::Http::Headers::RangeItemHeaderValue*>*> const& __get_ranges() const;

  constexpr void __set_ranges(::System::Collections::Generic::List_1<::System::Net::Http::Headers::RangeItemHeaderValue*>* value);

  constexpr ::StringW& __get_unit();

  constexpr ::StringW const& __get_unit() const;

  constexpr void __set_unit(::StringW value);

  static inline ::System::Net::Http::Headers::RangeHeaderValue* New_ctor();

  /// @brief Method .ctor, addr 0x28400d4, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Net::Http::Headers::RangeHeaderValue* New_ctor(::System::Net::Http::Headers::RangeHeaderValue* source);

  /// @brief Method .ctor, addr 0x2840128, size 0x1e8, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Http::Headers::RangeHeaderValue* source);

  /// @brief Method get_Ranges, addr 0x2840310, size 0x80, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::RangeItemHeaderValue*>* get_Ranges();

  /// @brief Method get_Unit, addr 0x2840390, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Unit();

  /// @brief Method System.ICloneable.Clone, addr 0x2840398, size 0x60, virtual true, abstract: false, final true
  inline ::System::Object* System_ICloneable_Clone();

  /// @brief Method Equals, addr 0x28403f8, size 0xc8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x28404c0, size 0x7c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method TryParse, addr 0x284053c, size 0x544, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW input, ByRef<::System::Net::Http::Headers::RangeHeaderValue*> parsedValue);

  /// @brief Method ToString, addr 0x2840bdc, size 0x1a0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "RangeHeaderValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RangeHeaderValue(RangeHeaderValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RangeHeaderValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RangeHeaderValue(RangeHeaderValue const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RangeHeaderValue();

public:
  /// @brief Field ranges, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Net::Http::Headers::RangeItemHeaderValue*>* ___ranges;

  /// @brief Field unit, offset: 0x18, size: 0x8, def value: None
  ::StringW ___unit;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::RangeHeaderValue, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::RangeHeaderValue, ___ranges) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::RangeHeaderValue, ___unit) == 0x18, "Offset mismatch!");

} // namespace System::Net::Http::Headers
NEED_NO_BOX(::System::Net::Http::Headers::RangeHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::RangeHeaderValue*, "System.Net.Http.Headers", "RangeHeaderValue");
