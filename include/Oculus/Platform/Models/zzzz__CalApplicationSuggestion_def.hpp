#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CalApplicationSuggestion)
// Forward declare root types
namespace Oculus::Platform::Models {
class CalApplicationSuggestion;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::CalApplicationSuggestion);
// Type: Oculus.Platform.Models::CalApplicationSuggestion
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13465))
// CS Name: ::Oculus.Platform.Models::CalApplicationSuggestion*
class CORDL_TYPE CalApplicationSuggestion : public ::System::Object {
public:
  // Declarations
  /// @brief Field ID, offset 0x10, size 0x8
  __declspec(property(get = __get__cordl_ID, put = __set__cordl_ID)) uint64_t _cordl_ID;

  /// @brief Field SocialContext, offset 0x18, size 0x8
  __declspec(property(get = __get_SocialContext, put = __set_SocialContext))::StringW SocialContext;

  constexpr uint64_t& __get__cordl_ID();

  constexpr uint64_t const& __get__cordl_ID() const;

  constexpr void __set__cordl_ID(uint64_t value);

  constexpr ::StringW& __get_SocialContext();

  constexpr ::StringW const& __get_SocialContext() const;

  constexpr void __set_SocialContext(::StringW value);

  static inline ::Oculus::Platform::Models::CalApplicationSuggestion* New_ctor(void* o);

  /// @brief Method .ctor addr 0x25b1dcc size 0x88 virtual false final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "CalApplicationSuggestion", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CalApplicationSuggestion(CalApplicationSuggestion&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CalApplicationSuggestion", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CalApplicationSuggestion(CalApplicationSuggestion const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CalApplicationSuggestion();

public:
  /// @brief Field ID, offset: 0x10, size: 0x8, def value: None
  uint64_t ____cordl_ID;

  /// @brief Field SocialContext, offset: 0x18, size: 0x8, def value: None
  ::StringW ___SocialContext;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::CalApplicationSuggestion, 0x20>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::CalApplicationSuggestion, ____cordl_ID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::CalApplicationSuggestion, ___SocialContext) == 0x18, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::CalApplicationSuggestion);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::CalApplicationSuggestion*, "Oculus.Platform.Models", "CalApplicationSuggestion");