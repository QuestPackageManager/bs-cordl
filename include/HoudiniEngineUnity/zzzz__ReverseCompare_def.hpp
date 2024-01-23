#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReverseCompare)
namespace System::Collections {
class IComparer;
}
namespace System {
class Object;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class ReverseCompare;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::ReverseCompare);
// Type: HoudiniEngineUnity::ReverseCompare
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9830))
// CS Name: ::HoudiniEngineUnity::ReverseCompare*
class CORDL_TYPE ReverseCompare : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::IComparer"
  constexpr operator ::System::Collections::IComparer*() noexcept;

  /// @brief Convert to "::System::Collections::IComparer"
  constexpr ::System::Collections::IComparer* i___System__Collections__IComparer() noexcept;

  /// @brief Method Compare, addr 0x21b90a8, size 0x78, virtual true, abstract: false, final true
  inline int32_t Compare(::System::Object* x, ::System::Object* y);

  static inline ::HoudiniEngineUnity::ReverseCompare* New_ctor();

  /// @brief Method .ctor, addr 0x21b9120, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ReverseCompare", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReverseCompare(ReverseCompare&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReverseCompare", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReverseCompare(ReverseCompare const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReverseCompare();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::ReverseCompare, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::ReverseCompare);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::ReverseCompare*, "HoudiniEngineUnity", "ReverseCompare");
