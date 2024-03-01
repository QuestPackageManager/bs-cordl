#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HashCodeCalculator)
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class HashCodeCalculator;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::Headers::HashCodeCalculator);
// Type: System.Net.Http.Headers::HashCodeCalculator
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// Is value type: false
// CS Name: ::System.Net.Http.Headers::HashCodeCalculator*
class CORDL_TYPE HashCodeCalculator : public ::System::Object {
public:
  // Declarations
  /// @brief Method Calculate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t Calculate(::System::Collections::Generic::ICollection_1<T>* list);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HashCodeCalculator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HashCodeCalculator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HashCodeCalculator(HashCodeCalculator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HashCodeCalculator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HashCodeCalculator(HashCodeCalculator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::HashCodeCalculator, 0x10>, "Size mismatch!");

} // namespace System::Net::Http::Headers
NEED_NO_BOX(::System::Net::Http::Headers::HashCodeCalculator);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::HashCodeCalculator*, "System.Net.Http.Headers", "HashCodeCalculator");
