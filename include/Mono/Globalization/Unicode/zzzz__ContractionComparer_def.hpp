#pragma once
// IWYU pragma private; include "Mono/Globalization/Unicode/ContractionComparer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ContractionComparer)
namespace Mono::Globalization::Unicode {
class Contraction;
}
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
// Forward declare root types
namespace Mono::Globalization::Unicode {
class ContractionComparer;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Globalization::Unicode::ContractionComparer);
// Type: Mono.Globalization.Unicode::ContractionComparer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Mono::Globalization::Unicode {
// Is value type: false
// CS Name: ::Mono.Globalization.Unicode::ContractionComparer*
class CORDL_TYPE ContractionComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Field Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance))::Mono::Globalization::Unicode::ContractionComparer* Instance;

  /// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::Mono::Globalization::Unicode::Contraction*>"
  constexpr operator ::System::Collections::Generic::IComparer_1<::Mono::Globalization::Unicode::Contraction*>*() noexcept;

  /// @brief Method Compare, addr 0x27ace68, size 0x94, virtual true, abstract: false, final true
  inline int32_t Compare(::Mono::Globalization::Unicode::Contraction* c1, ::Mono::Globalization::Unicode::Contraction* c2);

  static inline ::Mono::Globalization::Unicode::ContractionComparer* New_ctor();

  /// @brief Method .ctor, addr 0x27acefc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Mono::Globalization::Unicode::ContractionComparer* getStaticF_Instance();

  /// @brief Convert to "::System::Collections::Generic::IComparer_1<::Mono::Globalization::Unicode::Contraction*>"
  constexpr ::System::Collections::Generic::IComparer_1<::Mono::Globalization::Unicode::Contraction*>*
  i___System__Collections__Generic__IComparer_1___Mono__Globalization__Unicode__Contraction__() noexcept;

  static inline void setStaticF_Instance(::Mono::Globalization::Unicode::ContractionComparer* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContractionComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContractionComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContractionComparer(ContractionComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContractionComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContractionComparer(ContractionComparer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Globalization::Unicode::ContractionComparer, 0x10>, "Size mismatch!");

} // namespace Mono::Globalization::Unicode
NEED_NO_BOX(::Mono::Globalization::Unicode::ContractionComparer);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Globalization::Unicode::ContractionComparer*, "Mono.Globalization.Unicode", "ContractionComparer");
